void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_204 = 1;
	iLocal_205 = 2;
	iLocal_206 = 3;
	iLocal_207 = 4;
	iLocal_208 = 5;
	iLocal_209 = 6;
	iLocal_210 = 7;
	iLocal_211 = 25;
	fLocal_552 = 2.5f;
	vLocal_644 = { -1805.181f, -254.3576f, 178.7028f };
	fLocal_647 = 253.5212f;
	iLocal_802 = 1;
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_1097, 1073741824);
		func_2(&uLocal_1097, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_1097);
	func_5(&uLocal_1097);
	while (!func_6(&uLocal_1097, -2147483648))
	{
		func_7(&uLocal_1097);
		wait(0);
	}
	while (!func_2(&uLocal_1097, 0))
	{
		wait(0);
	}
	terminate_this_thread();
}

void func_1(char[4] cParam0, int iParam1)
{
	cParam0->f_5309 = (cParam0->f_5309 || iParam1);
}

bool func_2(char[4] cParam0, bool bParam1)
{
	if (func_8(cParam0, 4096))
	{
		return true;
	}
	if (get_cause_of_most_recent_force_cleanup() == 4096)
	{
		func_9(cParam0);
		_display_hud_component(-1679307491);
		_display_hud_component(1331687942);
		if (func_10(Global_43801))
		{
			func_11(&Global_43801, 1, 1);
		}
		_uilog_clear_cached_objective();
		_0x1096603b519c905f("");
		func_13(func_12(cParam0->f_607), 0, 2);
		func_14();
		func_15(1);
		func_16(1, 0);
		func_17(cParam0, 1);
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
		if (!func_6(cParam0, 1048576))
		{
			if (func_20() == 0)
			{
				func_21(0);
			}
			else if (func_22(cParam0) != 0)
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					if (_0x1204eb53a5fbc63d())
					{
						return false;
					}
					if (func_22(cParam0) == 1 || func_22(cParam0) == 2)
					{
						if (func_23(&(cParam0->f_8269)) && func_24(&(cParam0->f_8269)))
						{
							func_25(0, &(cParam0->f_8269.f_1282));
						}
					}
					if (!func_26(&(cParam0->f_13118)))
					{
						func_27(&(cParam0->f_13118), 0);
					}
					bVar0 = _0x139efb0a71dd9011();
					if (bVar0)
					{
						func_1(cParam0, 256);
					}
					bVar1 = _0x7ce9dc58e3e4755f();
					if (bVar1 && func_6(cParam0, 256))
					{
						_0x16e9abdd34ddd931();
						do_screen_fade_out(0);
					}
					else
					{
						if (((!bVar0 && !func_28(cParam0, bVar1)) && !func_29()) && !func_6(cParam0, 80))
						{
							if (!bVar1)
							{
								func_30(cParam0);
							}
							return false;
						}
						if (func_6(cParam0, 64))
						{
							_0x16e9abdd34ddd931();
							do_screen_fade_out(0);
						}
						else if (func_22(cParam0) == 2)
						{
							if (cParam0->f_13104 == -1)
							{
								if (func_31(cParam0))
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
						else if (func_22(cParam0) == 1)
						{
							if (func_28(cParam0, bVar1))
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
			else if (func_6(cParam0, 2))
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
			if (!func_32() && func_22(cParam0) != 0)
			{
				func_36(cParam0, func_34(func_33(cParam0)), func_34(func_35(cParam0)), func_33(cParam0), func_35(cParam0));
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
	func_1(cParam0, 1048576);
	if (!func_6(cParam0, 2097152))
	{
		if (!func_9(cParam0))
		{
			return false;
		}
		func_1(cParam0, 2097152);
	}
	_0x1096603b519c905f("");
	clear_focus();
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	set_time_scale(1f);
	func_37(&(cParam0->f_8269));
	if (func_23(&(cParam0->f_8269)))
	{
		func_38(&(cParam0->f_8269));
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
	if (!func_6(cParam0, 8))
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
	func_46(cParam0);
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
	if (does_cam_exist(cParam0->f_609.f_2))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		destroy_cam(cParam0->f_609.f_2, false);
	}
	func_51(&(cParam0->f_10792));
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
	if (func_22(cParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		func_56(cParam0);
	}
	func_57(cParam0, 0, !bVar2, bVar2);
	func_58(cParam0, !bVar2);
	func_59(0);
	func_59(1);
	_0xdf93973251fb2ca5(player_id(), 1);
	func_60(0);
	func_62(func_61(cParam0));
	func_63(func_61(cParam0));
	func_64(0);
	func_65(0);
	func_66(func_22(cParam0));
	func_67(cParam0);
	if (!bVar2)
	{
		func_16(1, 0);
	}
	if (func_22(cParam0) != 1)
	{
		func_68(0, &(cParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	func_69(1);
	func_70(0);
	func_71(Global_1935630, 2097152);
	func_18(0);
	_uilog_mark_all_entries_availability(0, "");
	if (func_22(cParam0) == 0)
	{
		func_72((*Global_1835011)[cParam0->f_607]->f_1);
	}
	func_73();
	if (!is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
	{
		_set_scenario_type_enabled_hash(-2012097661, true);
	}
	if (!bParam1)
	{
		switch (func_22(cParam0))
		{
			case 0:
				if (!is_screen_faded_in())
				{
					if ((!is_screen_fading_in() && !func_6(cParam0, 4)) && !func_6(cParam0, 2))
					{
						do_screen_fade_in(1000);
					}
				}
				func_74(cParam0);
				func_75(cParam0);
				func_76();
				func_78(func_77(), 0);
				if (func_20() == 0)
				{
					func_79(0);
				}
				func_80(cParam0->f_607);
				bVar3 = func_81();
				if (!func_82(32768))
				{
					func_83(func_12(cParam0->f_607), !func_6(cParam0, 128), 1, bVar3, 1);
				}
				else
				{
					func_84(func_12(cParam0->f_607), bVar3);
				}
				func_17(cParam0, bParam1);
				if (cParam0->f_607 != 77)
				{
					_uilog_mark_mission_completed(func_85(cParam0));
				}
				func_14();
				if (func_82(32768))
				{
					do_screen_fade_out(0);
					func_86();
					func_87(0);
				}
				else if (func_6(cParam0, 2))
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
				func_92(func_12(cParam0->f_607));
				func_93();
				if (func_22(cParam0) == 2)
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
				func_13(func_12(cParam0->f_607), 0, 2);
				break;
			default:
				func_83(func_12(cParam0->f_607), 1, 1, 0, 1);
				func_14();
				break;
		}
		if (func_22(cParam0) != 0)
		{
			Var6 = { func_96(cParam0) };
			func_97(func_12(cParam0->f_607), func_22(cParam0), &Var6, 0, 0, func_6(cParam0, 64));
		}
	}
	func_98(1);
	func_19(3);
	func_99(cParam0, 4096);
	return true;
}

bool func_3(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_4(var uParam0, char[4] cParam1)
{
	_0xed9582b3da8f02b4(20);
	cParam1->f_608 = uParam0->f_1;
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
	func_100(cParam1);
	if (!func_20() == 0)
	{
		if (func_101(cParam1) > 0)
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
	if (func_102())
	{
		func_103(cParam1, 4194304);
	}
	if (func_104())
	{
		func_103(cParam1, 8388608);
	}
	if (func_105())
	{
		if (!func_104() && !func_102())
		{
			func_103(cParam1, 4);
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
		func_107(cParam1, func_106());
	}
	func_108(cParam1, uParam0);
	func_109(cParam1);
	if (cParam1->f_13105 > _0x62de46f061caa468())
	{
		_0xf008e0ba1fe1d644((cParam1->f_13105 - _0x62de46f061caa468()));
	}
}

void func_5(char[4] cParam0)
{
	cVar0 = func_110(cParam0->f_607);
	set_mission_name(true, &cVar0);
	if (!get_mission_flag())
	{
		set_mission_flag(true);
	}
	_0x1096603b519c905f(&cVar0);
	if (cParam0->f_607 != 77)
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
	func_40(func_115(cParam0));
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
	func_118(cParam0);
	_0x33d51f801cb16e4f();
	if (!Global_1935630->f_12)
	{
		func_119(0, 0);
		_set_ped_crouch_movement(Global_35, false, 0, false);
		if (!func_120(cParam0, 16384) && (func_121(cParam0, func_33(cParam0), 2) || func_105()))
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
				if (!func_105() && !func_121(cParam0, func_33(cParam0), 2))
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
		func_123(cParam0);
	}
	func_70(1);
	func_39(0);
	func_124(cParam0, -1038436471);
	iLocal_159 = func_125(cParam0);
	iLocal_159 = iLocal_159;
	if (!Global_1935630->f_12)
	{
		if (!func_105())
		{
			Var2 = { func_34(func_33(cParam0)) };
			if (func_33(cParam0) != 0)
			{
				Var2 = { func_126(cParam0->f_607) };
			}
			if (!func_127(Var2))
			{
				func_103(cParam0, 1048576);
			}
			func_107(cParam0, 0);
			if (func_128(cParam0, 3) || func_129())
			{
				func_130(cParam0, func_126(cParam0->f_607), 0);
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
			func_107(cParam0, func_106());
		}
		_0x15b0cc1b36f1de29(&((*Global_1835011)[cParam0->f_607]->f_8), 0, func_132(func_33(cParam0)), func_105());
	}
	func_133(cParam0);
	func_134(cParam0, 0);
	func_135(cParam0, 0);
	if (!func_136(cParam0, func_33(cParam0)))
	{
		func_107(cParam0, 0);
	}
	func_137(cParam0);
	func_138(cParam0);
	func_139(cParam0);
	func_103(cParam0, 2097152);
	func_140(cParam0, func_33(cParam0), 134217728);
	if (func_82(32768))
	{
		func_1(cParam0, 4);
	}
	func_141(cParam0);
	func_142(cParam0, func_33(cParam0));
	func_143(func_61(cParam0));
	if (!func_120(cParam0, 65536))
	{
		func_144(func_61(cParam0));
	}
	func_145(cParam0, player_ped_id(), "ARTHUR", 0);
	func_146(cParam0);
	func_147(cParam0);
	func_148(cParam0);
	func_149(cParam0, 30f);
	func_150(cParam0, 40f);
	func_151(cParam0, Global_35, 0, 0, 0, 0, 0);
	func_98(0);
	_0xa6a3a3f96b8b030e();
	func_18(1);
	_uilog_mark_all_entries_availability(2, "");
	if (cParam0->f_607 != 77)
	{
		cVar6 = func_110(cParam0->f_607);
		_uilog_mark_entry_availability(1, get_hash_key(&cVar6), 0, "");
	}
	if (is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
	{
		_set_scenario_type_enabled_hash(-2012097661, false);
	}
}

bool func_6(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5309 && iParam1) != 0;
}

void func_7(char[4] cParam0)
{
	if ((_0xf46108c50a22b029() && !Global_43891) && !func_116(func_77()))
	{
		_0xf45e46deecf7df6e(16384, 0, 0, -1, -1);
	}
	if (!func_121(cParam0, func_33(cParam0), 16384))
	{
		func_152();
	}
	if (!func_8(cParam0, 32768))
	{
		_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	}
	if (!func_8(cParam0, 2048))
	{
		func_153(1, 0);
	}
	switch (func_154(cParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {func_155(func_61(cParam0))}, 4);
			if (!is_string_null_or_empty(&uVar0))
			{
				func_103(cParam0, 64);
			}
			func_156(cParam0, 0);
			func_157(cParam0);
			if (func_158(cParam0))
			{
				if (!is_entity_dead(func_159(cParam0)) && func_128(cParam0, 3))
				{
					freeze_entity_position(func_159(cParam0), false);
				}
				func_160(cParam0, 1);
			}
			if (func_6(cParam0, -2147483648))
			{
				func_160(cParam0, 2);
			}
			break;
		case 1:
			if (func_161(cParam0))
			{
				func_1(cParam0, -2147483648);
				func_160(cParam0, 2);
			}
			func_156(cParam0, func_162(cParam0, func_33(cParam0)) > 4);
			break;
		case 2:
			if (func_2(cParam0, 0))
			{
				func_1(cParam0, -2147483648);
				func_160(cParam0, 3);
			}
			break;
		case 3:
			terminate_this_thread();
			break;
	}
	if (func_154(cParam0) < 2)
	{
	}
}

bool func_8(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5307 && iParam1) != 0;
}

bool func_9(char[4] cParam0)
{
	func_163(iVar416);
	func_164(cParam0, iVar416, 1);
	func_165(6, 0);
	if (func_166(iVar416, 0))
	{
		if (does_group_exist(iVar434))
		{
			remove_ped_from_group(iVar416);
			remove_group(iVar434);
		}
		if (_0xe24c64d9aded2ef5(player_id(), iVar416))
		{
			_0x0c6b89876262a99d(player_id(), iVar416);
		}
		set_blocking_of_non_temporary_events(iVar416, false);
		set_combat_float(iVar416, 3, 1.25f);
		if (iVar535 > 0)
		{
			set_ped_accuracy(iVar416, iVar535);
		}
		set_ped_can_ragdoll_from_player_impact(iVar416, true);
		set_ped_flee_attributes(iVar416, 512, false);
		_set_ped_infinite_ammo_clip(iVar416, false);
		func_167(cParam0, iVar416, 0, 1);
		clear_ragdoll_blocking_flags(iVar416, 262145);
		set_ped_config_flag(iVar416, 174, false);
	}
	if (func_166(Global_35, 0))
	{
		task_clear_look_at(Global_35);
		_0x3a50753042b6891b(Global_35, "p_cs_hookPulley01x_PH_L_HAND");
	}
	if (get_is_waypoint_recording_loaded(func_168(1)))
	{
		use_waypoint_recording_as_assisted_movement_route(func_168(1), 0, 1065353216, 1056964608, 1);
	}
	if (func_10(iVar375))
	{
		func_11(&iLocal_378, 1, 1);
	}
	func_47(0, 0);
	if (_0xad401c63158acbaa(player_id()))
	{
		_0x987be590fb9d41e5(0);
	}
	_0x292ad61a33a7a485();
	_0x55f37f5f3f2475e1();
	_0x4b0501a468b749f8();
	_0xd6c0a8c7c0b2f82c(player_id(), 1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (does_entity_exist(&(Local_14.f_16[iVar0])) && !is_entity_dead(&(Local_14.f_16[iVar0])))
		{
			set_blocking_of_non_temporary_events(&(Local_14.f_16[iVar0]), false);
		}
		iVar0++;
	}
	if (func_10(iVar373))
	{
		func_11(&iLocal_376, 1, 1);
	}
	if (func_10(iVar374))
	{
		func_11(&uLocal_377, 1, 1);
	}
	func_11(&iLocal_379, 1, 1);
	func_11(&iLocal_380, 1, 1);
	func_170(iLocal_411[0], func_169(0, 5), func_169(0, 4), 0, 0);
	func_170(iLocal_411[1], func_169(6, 2), func_169(6, 3), 4f, 0);
	func_170(iLocal_411[2], func_169(12, 0), func_169(12, 1), 1f, 0);
	func_170(iLocal_411[3], func_169(12, 5), func_169(12, 6), 1f, 0);
	func_170(iLocal_411[4], func_169(12, 8), func_169(12, 9), 1f, 0);
	func_171(&uLocal_417, iVar504, 0);
	func_172(cParam0, 0, 0, 1);
	func_173();
	func_174();
	func_175(0);
	func_176();
	iVar1 = func_22(cParam0);
	if (iVar1 == 0)
	{
		func_177();
		func_178();
		if (func_179(-469722632, 0, 0) > 0)
		{
			func_180(899611344, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_180(-1185145312, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		}
		else
		{
			func_180(899611344, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		}
		func_181(77, 0);
		func_181(118, 0);
		func_181(119, 0);
		func_182(3, iVar544 + 8500);
	}
	else
	{
		func_58(cParam0, 1);
	}
	if (iVar1 == 5)
	{
		func_183(1);
		func_184(2);
		func_184(4);
	}
	func_185(cParam0->f_607, "UTP1_INT");
	if (_0x1ff441d7954f8709(iVar766))
	{
		_0xd2b9c78537ed5759(iVar766);
	}
	if (does_entity_exist(iVar421))
	{
		_mark_object_for_deletion(iVar421);
	}
	func_186(&iLocal_425, 1, 1, 1);
	if (func_187(128))
	{
		block_dispatch_service_resource_creation(15, false);
		block_dispatch_service_resource_creation(6, false);
		func_189(func_188(26));
	}
	func_190(1821044729, 1);
	func_190(1514359658, 1);
	func_191(0, 0);
	func_192(106479759, 0, 0);
	func_171(&uLocal_418, iVar497, 0);
	if (func_166(iVar417, 0))
	{
		set_ped_relationship_group_hash(iVar417, -1683752762);
		set_ped_config_flag(iVar417, 174, false);
	}
	if (func_166(iVar418, 0))
	{
		set_ped_relationship_group_hash(iVar418, -1683752762);
	}
	clear_weather_type_persist();
	func_193(0, 1103626240);
	_0x4fd80c3dd84b817b(Global_35);
	_0x58f7db5bd8fa2288(Global_35);
	clear_ragdoll_blocking_flags(Global_35, 64);
	if (does_entity_exist(Local_772.f_6))
	{
		func_186(&(Local_772.f_6), 0, 1, 1);
	}
	if (_0x7409669c5ed50144(-1392528840))
	{
		_0x50b72a754ee64a71(-1392528840);
	}
	func_194(1399676951);
	func_194(514932331);
	_0xc67a4910425f11f1(player_id(), 0);
	func_195(1f);
	func_196(0);
	_0x914071ff93af2692(player_id(), 1f);
	_0xbc90bdf4e5228ea1();
	iVar2 = 0;
	while (iVar2 < 8)
	{
		func_197(iVar2);
		iVar2++;
	}
	remove_all_cover_blocking_areas();
	_0x0c0a373d181bf900(902070893);
	_0x18ff3110cf47115d(Global_35, 9, 1);
	_0x6569f31a01b4c097(Global_35, 2, 1);
	_0x6569f31a01b4c097(Global_35, 3, 1);
	if (bVar615)
	{
		_0x5a8b01199c3e79c3();
		iLocal_618 = 0;
	}
	func_198();
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
	iVar0 = func_199(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_200(iVar0);
	*iParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_201(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (!func_202(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_203(iParam0) && !func_204(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_205(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_203(iParam0))
	{
		iParam2 = -1;
	}
	if (func_206(iParam0) == 3 || (func_206(iParam0) == 1 && _0x01f4d242765c6b24(func_205(iParam0))))
	{
		func_208(func_207(iParam0), func_205(iParam0), iParam2);
		if ((!func_202(Global_1572864->f_8) && !func_209(0, 1, 0)) && !func_210(&Global_1935630, 32768))
		{
			iVar0 = func_211(iParam0);
			if (iVar0 != -1)
			{
				func_212(0);
			}
			else if (func_207(iParam0) == 8)
			{
				iVar0 = func_213();
				if (iVar0 != -1)
				{
					func_212(0);
				}
			}
		}
	}
	func_214(iParam0, 0);
	if (func_215(0) == iParam0)
	{
		func_40(1);
		func_216(0);
		func_217(1);
	}
	func_218(iParam0, 1);
	func_219(iParam0);
}

void func_14()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_220(0);
	func_221(0);
	func_64(0);
	func_65(0);
	func_222(0);
	func_223(1f);
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
		func_224();
	}
	_0xa0cefcea390aab9b(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_225())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_226())
		{
			func_113(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_17(char[4] cParam0, bool bParam1)
{
	Var0 = func_205(func_12(cParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(cParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_227(0);
	if (bParam1)
	{
		Var0.f_3 = 5;
	}
	else
	{
		Var0.f_3 = func_22(cParam0);
	}
	_0xd894437e12c17aec(&((*Global_1835011)[cParam0->f_607]->f_8), &Var0);
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
		func_228(iVar0, iParam0);
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

int func_22(char[4] cParam0)
{
	return cParam0->f_10783;
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
		if (func_229((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_230((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_230((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_230((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(var uParam0)
{
	return func_231(*uParam0, 1);
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1 || !func_26(uParam0))
	{
		func_232(uParam0);
	}
}

bool func_28(char[4] cParam0, bool bParam1)
{
	if (func_8(cParam0, 128) && func_29())
	{
		return true;
	}
	if (func_233(&(cParam0->f_13118)) >= 4000)
	{
		return true;
	}
	if (!func_31(cParam0))
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

void func_30(char[4] cParam0)
{
	func_234(!func_6(cParam0, 32), 1);
	func_1(cParam0, 32);
}

bool func_31(char[4] cParam0)
{
	return true;
}

bool func_32()
{
	return func_202(Global_1572864->f_8);
}

int func_33(char[4] cParam0)
{
	return cParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	if (iParam0 == iLocal_203)
	{
		func_236(&Var0, func_235(3, 0));
	}
	else if (iParam0 == iLocal_204)
	{
		func_236(&Var0, func_235(4, 4));
	}
	else if (iParam0 == iLocal_205)
	{
		func_236(&Var0, func_235(5, 11));
	}
	else if (iParam0 == iLocal_206)
	{
		func_236(&Var0, func_235(6, 0));
	}
	else if (iParam0 == iLocal_207)
	{
		func_236(&Var0, func_235(15, 0));
	}
	else if (iParam0 == iLocal_208)
	{
		func_236(&Var0, func_235(16, 9));
	}
	else if (iParam0 == iLocal_209)
	{
		func_236(&Var0, func_235(11, 5));
	}
	else if (iParam0 == iLocal_210)
	{
		func_236(&Var0, func_235(7, 1));
	}
	else if (iParam0 == 25)
	{
		func_236(&Var0, func_235(10, 7));
	}
	return Var0;
}

int func_35(char[4] cParam0)
{
	return func_237(cParam0, func_33(cParam0));
}

void func_36(char[4] cParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_220(0);
	func_238(func_12(cParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_229((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_239((*uParam0)[iVar0]);
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
			func_240(iVar0, 4096);
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
		func_241(Global_1935630, 4194304);
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
	func_242();
	func_243();
	func_176();
	func_244();
}

void func_43()
{
	if (func_245())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_246(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_247();
}

void func_45()
{
	_uilog_clear_cached_objective();
}

void func_46(char[4] cParam0)
{
	if (func_20() == 0)
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

void func_47(int iParam0, int iParam1)
{
	func_248(1, iParam0, iParam1);
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
	return (func_249() || func_54());
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
	func_250(uParam0);
	func_251(uParam0, 0);
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
		func_252(iVar0);
		iVar0++;
	}
	func_253();
	func_254();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	if (func_255())
	{
		if (func_256(255))
		{
			if (!func_257(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_258(Global_1894899->f_2) && func_259(Global_1894899->f_2))
		{
			func_260(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_261(16);
			}
		}
		else if (func_258(Global_1894899->f_2) && !func_262(Global_1894899->f_2, 2))
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
		func_263(16);
		func_264();
		if (bVar0)
		{
			func_263(1);
		}
	}
}

void func_56(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_265(cParam0->f_5423[iVar0]))
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
	if (func_266(cParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_267(cParam0->f_5421))
		{
			iVar1 = func_268(cParam0->f_5421, iVar0);
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

void func_57(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_269(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_270(cParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(char[4] cParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_271(cParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_272(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_273(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_274(7);
		}
		else
		{
			func_275(iVar0, 0);
		}
		func_276(cParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_277(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_278(iParam0, 32);
	func_279();
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

int func_61(char[4] cParam0)
{
	return cParam0->f_607;
}

void func_62(int iParam0)
{
	Var0 = { func_280(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_281(iParam0) };
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
		func_222(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_222(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(char[4] cParam0)
{
	func_282(&(cParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_229((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_230((*uParam1)[iVar0], 1);
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
	iVar0 = func_207(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_283(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_284(iVar1))
			{
				if (func_285(iVar1, 4))
				{
					func_286(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_287(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_283(iParam0);
		if (iVar3 == 59)
		{
			func_287(1);
		}
		else if (iVar3 == 61)
		{
			func_287(0);
		}
		else if (iVar3 == 83)
		{
			func_287(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_284(iVar0))
		{
			if (func_285(iVar0, 4))
			{
				if (func_285(iVar0, 16))
				{
					func_288(iVar0, 1);
				}
				if (func_285(iVar0, 8))
				{
					func_289(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_74(char[4] cParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	iVar0 = func_33(cParam0);
	iVar1 = func_162(cParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (func_290(cParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (func_22(cParam0) == 0)
		{
			iVar4 = 1;
		}
	}
	if (iVar3 || iVar4)
	{
		func_291(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_292(cParam0);
	}
}

void func_75(char[4] cParam0)
{
	iVar0 = 0;
	if (func_293(cParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_294(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
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
	if (!func_258(iParam0))
	{
		return;
	}
	bVar0 = func_262(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_295(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_297(iParam0, func_296());
			func_298(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_299(iParam0, 67108864);
		func_297(iParam0, -15);
	}
	func_300(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_301(11);
	}
	else
	{
		func_302(11);
	}
}

void func_80(int iParam0)
{
	if (func_303(iParam0, 0))
	{
		func_304(262144, 5, 0, 1);
		func_305(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_306(101, 7, 1f, 0, 1);
			func_306(89, 7, 1f, 0, 1);
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
	if (!func_202(iParam0))
	{
		return;
	}
	if (func_307(iParam0) == 4)
	{
		func_308(iParam0, func_296());
		if (!func_206(iParam0) == 5 && !func_206(iParam0) == 6)
		{
			if (bParam3)
			{
				func_214(iParam0, 6);
			}
			else
			{
				func_214(iParam0, 5);
			}
			func_219(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_207(iParam0);
	bVar1 = func_20() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_309(0, 2);
		if (!bVar1 && bParam1)
		{
			func_310();
		}
	}
	else
	{
		func_216(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_311(iParam0);
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
				if (bParam1 && func_206(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_283(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_283(iParam0)]->f_8), true);
						}
					}
					else if ((func_283(iParam0) != 95 && func_283(iParam0) != 82) && !func_312((*Global_1347702)[func_283(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_283(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_283(iParam0)]->f_8), true);
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
		func_314(func_283(iParam0), iVar6, func_313());
	}
	else if (iVar0 == 8)
	{
		func_316(func_283(iParam0), iVar6, func_313(), func_315());
	}
	if (!func_206(iParam0) == 5 && !func_206(iParam0) == 6)
	{
		iVar9 = func_317(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_318(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_319(func_283(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_320((iVar10 - 20), 0, iVar10);
					iVar11 = func_320((iVar11 - 10), 0, iVar11);
				}
				func_321(1);
				func_322(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_322(45, 0, 1);
				break;
			case 8:
				iVar10 = func_323(func_283(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_320((iVar10 - 20), 0, iVar10);
					iVar11 = func_320((iVar11 - 10), 0, iVar11);
				}
				func_322(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_324(func_283(iParam0)))
				{
					func_325(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_322(120, 0, 1);
				break;
			case 2:
				func_322(120, 0, 1);
				break;
			case 6:
				func_322(func_327(func_326(iParam0)), 0, 1);
				break;
			case 5:
				func_322(120, 0, 1);
				break;
		}
	}
	func_218(iParam0, 1);
	func_308(iParam0, func_296());
	func_219(iParam0);
	if ((!func_206(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_211(iParam0);
		if (iVar12 != -1)
		{
			func_212(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_213();
			if (iVar12 != -1)
			{
				func_212(0);
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
				switch (func_283(iParam0))
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
				if (func_284(func_283(iParam0)) && func_312((*Global_1347702)[func_283(iParam0)]->f_12, 4))
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
				if (func_283(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_283(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_206(iParam0) == 5 && !func_206(iParam0) == 6)
	{
		if (bParam3)
		{
			func_214(iParam0, 6);
		}
		else
		{
			func_214(iParam0, 5);
		}
		func_219(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_283(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_328();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_180(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_180(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_180(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_180(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_180(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_180(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_180(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_180(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_180(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_180(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(-1267972061);
						func_180(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(1619534881);
						func_180(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(-755457379);
						func_180(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(1015404643);
						func_180(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(-1724192342);
						func_180(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(1310680212);
						func_180(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(-566881549);
						func_180(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(-1753730528);
						func_180(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(147796381);
						func_180(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(-378547623);
						func_180(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(829545206);
						func_180(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(891318243);
						func_180(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_180(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_180(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_180(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_330();
						func_331(967523420);
						func_332();
						func_333();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_334(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_180(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_181(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_181(446, 0);
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
							iVar15 = func_296();
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
							func_181(451, 0);
						}
						if (!func_354(-1992824800))
						{
							if (func_354(1520110311))
							{
								iVar16 = func_296();
								func_343(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_344(1937177603, iVar16, 1);
							}
						}
						if (func_355(4))
						{
							if (!func_356(684296857, 1, 0))
							{
								iVar17 = func_296();
								func_343(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_344(-1439688706, iVar17, 1);
							}
						}
						func_180(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_180(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				switch (func_283(iParam0))
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
				switch (func_283(iParam0))
				{
					case 0:
						switch (func_326(iParam0))
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
				switch (func_283(iParam0))
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
							func_180(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				if (func_312((*Global_1347702)[func_283(iParam0)]->f_12, 536870912))
				{
					func_371(11, 1);
				}
				switch (func_283(iParam0))
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
			if (!func_206(iParam0) == 0)
			{
				if (func_205(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_205(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_208(func_207(iParam0), func_205(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_283(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_375(func_374(Global_1879514->f_1));
						if (iVar0 == 8 && func_283(iParam0) == 58)
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
						if (func_284(func_283(iParam0)) && func_312((*Global_1347702)[func_283(iParam0)]->f_12, 1))
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
	func_217(1);
	if ((bVar13 || func_129()) && (func_207(iParam0) == 1 || func_207(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_205(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_208(func_207(iParam0), func_205(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_207(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_372(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_377();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_204(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_203(iParam0))
	{
		if (!func_206(iParam0) == 5 && !func_206(iParam0) == 6)
		{
			if (bParam1)
			{
				func_214(iParam0, 6);
			}
			else
			{
				func_214(iParam0, 5);
			}
			func_219(iParam0);
		}
	}
	switch (func_207(iParam0))
	{
		case 1:
			switch (func_283(iParam0))
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
			switch (func_283(iParam0))
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

int func_85(char[4] cParam0)
{
	cVar0 = func_110(cParam0->f_607);
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
	if (!func_202(iParam0))
	{
		return;
	}
	if (iParam0 != func_215(0))
	{
		return;
	}
	if (func_205(iParam0) == 0)
	{
	}
	iVar0 = func_207(iParam0);
	if (func_206(iParam0) == 3)
	{
		if (func_205(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_205(iParam0)))
		{
			if (func_207(iParam0) != 1 && func_207(iParam0) != 8)
			{
				func_208(func_207(iParam0), func_205(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_219(iParam0);
	func_40(1);
	func_216(0);
	func_214(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_321(1);
			func_322(15, 0, 1);
			break;
		case 4:
			func_322(10, 0, 1);
			break;
		case 8:
			func_322(10, 0, 1);
			break;
		case 9:
			func_322(10, 0, 1);
			break;
		case 2:
			func_322(10, 0, 1);
			break;
		case 6:
			func_322(10, 0, 1);
			break;
		case 5:
			func_322(10, 0, 1);
			break;
	}
	func_217(1);
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

struct<8> func_96(char[4] cParam0)
{
	return cParam0->f_10784;
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
		func_223(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_241(Global_1935630, 2048);
	func_387(bParam5);
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
	}
	_0x6ac4af46a6b8dfb2(bParam0);
}

void func_99(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 || iParam1);
}

void func_100(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_43619)
	{
		if (does_entity_exist(&(Global_43619[iVar0])))
		{
			*cParam0->f_7375.f_13[iVar0] = { *Global_43619[iVar0] };
			func_388(&(cParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		cParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(cParam0->f_7375.f_804);
	}
	if (func_210(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_389(cParam0, 67108864);
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

void func_103(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 || iParam1);
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

void func_107(char[4] cParam0, int iParam1)
{
	cParam0->f_597 = iParam1;
	settimera(0);
}

void func_108(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = -1;
	func_392(cParam0);
	cParam0->f_634[0] = 63603;
	cParam0->f_634[1] = 63603;
	cParam0->f_637 = 0;
	func_394(cParam0, *uParam1);
	func_395(cParam0);
}

void func_109(char[4] cParam0)
{
	func_396(cParam0);
	func_397(cParam0, 45);
}

char[] func_110(int iParam0)
{
	if (!func_201(iParam0))
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
			func_398(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

bool func_115(char[4] cParam0)
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

bool func_116(int iParam0)
{
	if (!func_258(iParam0))
	{
		return false;
	}
	return func_262(iParam0, 33554432);
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

void func_118(char[4] cParam0)
{
	if (func_20() == 0)
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

bool func_120(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5308 && iParam1) != 0;
}

bool func_121(char[4] cParam0, int iParam1, int iParam2)
{
	return func_399(cParam0->f_1[func_132(iParam1)]->f_11, iParam2);
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

void func_123(char[4] cParam0)
{
	if (func_29())
	{
		func_400(&(cParam0->f_7375));
	}
}

void func_124(char[4] cParam0, int iParam1)
{
	if (!_is_this_model_a_horse(iParam1))
	{
		return;
	}
	cParam0->f_8268 = iParam1;
}

int func_125(char[4] cParam0)
{
	return cParam0->f_8268;
}

Vector3 func_126(int iParam0)
{
	return func_401(iParam0);
}

bool func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_402(Param0, Param0.f_3);
}

bool func_128(char[4] cParam0, int iParam1)
{
	return (cParam0->f_608 && iParam1) != 0;
}

bool func_129()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_403())
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

void func_130(char[4] cParam0, vector3 vParam1, float fParam4)
{
	if (func_120(cParam0, 33554432))
	{
		return;
	}
	if (func_120(cParam0, 4096))
	{
		return;
	}
	if (func_404(vParam1))
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
		func_103(cParam0, 8);
	}
	func_103(cParam0, 4096);
	_0x4759cc730f947c81();
	_0x1ff00db43026b12f();
	start_player_teleport(player_id(), vParam1, fParam4, false, true, true, false);
	do_screen_fade_out(0);
	_set_milliseconds_per_game_minute(9999999);
	func_232(&(cParam0->f_603));
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
		return func_405();
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

void func_133(char[4] cParam0)
{
	if (_uilog_is_entry_registered(2, func_85(cParam0)))
	{
		_uilog_remove_entry(2, func_85(cParam0));
	}
	if (!_uilog_is_entry_registered(1, func_85(cParam0)))
	{
		func_406(cParam0->f_607);
	}
}

void func_134(char[4] cParam0, int iParam1)
{
	cParam0->f_598 = iParam1;
}

void func_135(char[4] cParam0, int iParam1)
{
	cParam0->f_599 = iParam1;
	func_27(&(cParam0->f_600), 1);
}

bool func_136(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_12;
}

void func_137(char[4] cParam0)
{
	func_407(&(cParam0->f_638));
	func_408(&(cParam0->f_819));
	func_409(&(cParam0->f_1020));
	func_410(&(cParam0->f_1081));
	func_411(&(cParam0->f_1126));
	func_412(&(cParam0->f_5147));
	func_413(&(cParam0->f_1124));
	func_414(&(cParam0->f_5188));
	func_415(&(cParam0->f_5239));
	func_416(&(cParam0->f_5249));
	func_417(&(cParam0->f_5265));
	func_418(&(cParam0->f_5286));
}

void func_138(char[4] cParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		Local_14 = create_itemset(true);
	}
	func_419(cParam0, -1321878957, 1);
	func_419(cParam0, -693389207, 3);
	func_419(cParam0, 1127589605, 15);
	func_419(cParam0, -1384606398, 111);
	func_419(cParam0, -2081966149, 7);
	func_419(cParam0, -1483559144, 67108863);
	func_419(cParam0, -572941403, 7);
	func_419(cParam0, 1830978939, 67108863);
	func_419(cParam0, -489515861, 96);
	func_419(cParam0, 317578190, 67108863);
	func_419(cParam0, -1638806549, 112);
	func_419(cParam0, 1770617692, 63);
	func_419(cParam0, -1308375373, 63);
	func_419(cParam0, -1321878957, 1);
	func_419(cParam0, -693389207, 3);
}

void func_139(char[4] cParam0)
{
	func_419(cParam0, -2014377075, 7);
	func_419(cParam0, -1205874435, 7);
	func_419(cParam0, 2051399415, 7);
	func_419(cParam0, -941733863, 524384);
	func_419(cParam0, -1473388640, 3);
	func_419(cParam0, -1189470495, 3);
	func_419(cParam0, -689325124, 3);
	func_419(cParam0, 1974613782, 3);
	func_419(cParam0, -1321878957, 3);
	func_419(cParam0, 1077976463, 3);
	func_419(cParam0, -1038436471, 67108863);
	func_420(cParam0, "UTP1_MCS_1A", 2);
	func_420(cParam0, "MINI_GAMES@STORY@UTP1@PULL_LEVER@PLAYER", 2);
	func_420(cParam0, "MINI_GAMES@STORY@UTP1@PULL_LEVER@LEVER", 2);
	func_421(cParam0, "script_utp1_pulllever", 2);
	func_422(cParam0, func_168(10), 3, 2, -1);
	func_422(cParam0, func_168(11), 6, 2, -1);
	func_422(cParam0, func_168(2), 4, 2, -1);
	func_422(cParam0, func_168(3), 4, 2, -1);
	func_422(cParam0, func_168(4), 8, 2, -1);
	func_422(cParam0, func_168(0), 120, 2, -1);
	func_422(cParam0, func_168(5), 16, 2, -1);
	func_422(cParam0, func_168(9), 64, 2, -1);
	func_422(cParam0, func_168(1), 192, 2, -1);
	func_422(cParam0, func_168(6), 192, 2, -1);
	func_422(cParam0, func_168(7), 192, 2, -1);
	func_422(cParam0, func_168(12), 192, 2, -1);
	func_422(cParam0, func_168(13), 192, 2, -1);
	func_422(cParam0, func_168(8), 16, 2, -1);
	func_423(cParam0, "script@story@utp1@LEADIN@MCS_1@Leadin_Playlists", iLocal_522[0], 3, 0, 0, 0, 1);
	func_423(cParam0, "script@story@utp1@ig@ig23_grabhook@ig23_grabhookenter", iLocal_522[1], 2, 0, 0, 0, 1);
	func_423(cParam0, "script@story@utp1@ig@ig23_grabhook@ig23_grabhookexit", iLocal_522[2], 2, 0, 0, 0, 1);
	func_423(cParam0, "script@story@utp1@ig@ig25_pulllever@ig25_pullleverenter", iLocal_522[3], 2, 0, 0, 0, 1);
	func_423(cParam0, "script@story@utp1@ig@ig25_pulllever@ig25_pullleverexit", iLocal_522[4], 2, 0, 0, 0, 1);
	func_423(cParam0, "script@story@utp1@ig@ig_4_micah_confronts_nelson@ig_4_micahconfrontsnelson", iLocal_522[5], 64, 8, 0, 0, 1);
	func_423(cParam0, "script@story@utp1@ig@ig_5_micah_wave_cover@ig_5_micah_wave_cover", iLocal_522[6], 4, 0, 0, 0, 1);
	func_423(cParam0, "script@story@utp1@ig@ig_7_micah2cover_a_end@ig_7_micah2cover_a_end", iLocal_522[7], 12, 0, 0, 0, 1);
	func_423(cParam0, "script@story@utp1@ig@ig_8_wave2cover@ig_8_wave2cover", iLocal_522[8], 8, 0, 0, 0, 1);
	func_423(cParam0, "script@story@utp1@ig@ig_10_wave4cover@ig_10_wave4cover", iLocal_522[9], 32, 0, 0, 0, 1);
	func_423(cParam0, "script@story@utp1@ig@ig_12_sheriff_aggro@ig_12_sheriff_aggro", iLocal_522[11], 3, 0, 0, 0, 1);
	func_423(cParam0, "script@story@utp1@ig@ig_15_jail_idles@ig_15_jail_idle", iLocal_522[14], 3, 0, 0, 0, 1);
	func_424(cParam0, &(iLocal_522[0]), "pl_base", 3);
	func_424(cParam0, &(iLocal_522[0]), "pl_leadin", 3);
	func_424(cParam0, &(iLocal_522[0]), "pl_wave1", 3);
	func_424(cParam0, &(iLocal_522[0]), "pl_wave2", 3);
	func_424(cParam0, &(iLocal_522[0]), "pl_wave3", 3);
	func_424(cParam0, &(iLocal_522[1]), "pl_IG23_Grab_Hook_Enter_Top", 2);
	func_424(cParam0, &(iLocal_522[2]), "pl_IG23_Place_Hook_Front", 2);
	func_424(cParam0, &(iLocal_522[2]), "pl_IG23_Place_Hook_Side", 2);
	func_424(cParam0, &(iLocal_522[3]), "pl_IG25_Pull_Lever_Enter", 2);
	func_424(cParam0, &(iLocal_522[4]), "pl_IG25_Pull_Lever_Exit", 2);
	func_424(cParam0, &(iLocal_522[5]), "pl_IG4_MicahArrivesShootsEntersHouse", 64);
	func_424(cParam0, &(iLocal_522[5]), "pl_IG4_MicahArrivesIdlesShoots", 64);
	func_424(cParam0, &(iLocal_522[5]), "pl_MicahInsideHouse", 64);
	func_424(cParam0, &(iLocal_522[5]), "pl_MicahExitsHouse", 64);
	func_424(cParam0, &(iLocal_522[7]), "pl_start_end", 4);
	func_424(cParam0, &(iLocal_522[7]), "pl_end", 8);
	func_424(cParam0, &(iLocal_522[8]), "pbl_ext_run_to_cover", 8);
	func_424(cParam0, &(iLocal_522[9]), "pbl_run_to_cover", 32);
	func_424(cParam0, &(iLocal_522[11]), "pl_IG12_Sheriff_Aggro", 3);
	func_424(cParam0, &(iLocal_522[12]), "pl_IG13_Bomb_Breakout_Enter", 3);
	func_424(cParam0, &(iLocal_522[12]), "pl_IG13_Bomb_Breakout_Exit", 3);
	func_424(cParam0, &(iLocal_522[12]), "pl_IG13_Cower_Impatient_Loop", 3);
	func_424(cParam0, &(iLocal_522[12]), "pl_IG13_Cower_Loop", 3);
	func_424(cParam0, &(iLocal_522[12]), "pl_IG13_Key_Breakout", 3);
	func_424(cParam0, &(iLocal_522[12]), "pl_IG13_Standing_Idle", 3);
	func_424(cParam0, &(iLocal_522[14]), "pl_Window_Idle_Base", 2);
	func_424(cParam0, &(iLocal_522[14]), "PL_Stand_Call_Over_1", 2);
	func_424(cParam0, &(iLocal_522[14]), "PL_Stand_Call_Over_2", 2);
	func_424(cParam0, &(iLocal_522[14]), "PL_Stand_Point", 2);
	func_424(cParam0, &(iLocal_522[14]), "PL_Window_CallOver_Both", 2);
	func_424(cParam0, &(iLocal_522[14]), "PL_Window_to_Floor_Trans", 2);
	func_424(cParam0, &(iLocal_522[14]), "PL_Floor_to_Window_Trans", 2);
	func_424(cParam0, &(iLocal_522[14]), "PL_Window_to_Stand_Trans", 2);
	func_425(cParam0, -183018591, 4, -1, 0);
	func_425(cParam0, 1845102363, 4, -1, 0);
	func_425(cParam0, 379542007, 67108863, -1, 0);
	func_425(cParam0, -598316488, 67108863, -1, 0);
	func_425(cParam0, 127400949, 67108863, -1, 0);
	func_425(cParam0, 1210039241, 67108863, -1, 0);
}

void func_140(char[4] cParam0, int iParam1, int iParam2)
{
	func_426(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(char[4] cParam0)
{
	func_103(cParam0, 1);
}

void func_142(char[4] cParam0, int iParam1)
{
	func_427(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_280(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_281(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_145(char[4] cParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_428(&(cParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(char[4] cParam0)
{
	if (!func_266(cParam0->f_5421))
	{
		cParam0->f_5421 = { func_429() };
	}
}

void func_147(char[4] cParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_27(&(cParam0->f_603), 1);
	}
}

void func_148(char[4] cParam0)
{
}

void func_149(char[4] cParam0, float fParam1)
{
	func_430(&(cParam0->f_7375), fParam1);
}

void func_150(char[4] cParam0, float fParam1)
{
	func_431(&(cParam0->f_7375), fParam1);
}

void func_151(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_432(cParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_388(&(cParam0->f_10792), iParam1, sParam2, bParam6);
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

int func_154(char[4] cParam0)
{
	return *cParam0;
}

Vector3 func_155(int iParam0)
{
	if (!func_201(iParam0))
	{
		return vVar0;
	}
	return (*Global_1835011)[iParam0]->f_9;
}

void func_156(char[4] cParam0, bool bParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 134217728))
	{
		func_139(cParam0);
		func_140(cParam0, func_33(cParam0), 134217728);
	}
	if (bParam1 && !func_121(cParam0, func_35(cParam0), 536870912))
	{
		if (func_433(cParam0, func_35(cParam0), 0))
		{
			func_140(cParam0, func_35(cParam0), 536870912);
		}
	}
	if (func_8(cParam0, 8192))
	{
		if (!func_8(cParam0, 536870912))
		{
			if (func_434(&(cParam0->f_1126), func_33(cParam0)))
			{
				func_99(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_433(cParam0, func_33(cParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_99(cParam0, 8192);
	}
}

int func_157(char[4] cParam0)
{
	return 1;
}

bool func_158(char[4] cParam0)
{
	if (func_435(cParam0) < 1)
	{
		func_436(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0);
		func_437(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
	}
	if ((!func_120(cParam0, 4) && !func_105()) && !func_128(cParam0, 3))
	{
		if (!func_120(cParam0, 32))
		{
			if (func_20() == 0)
			{
				func_103(cParam0, 32);
			}
			else
			{
				func_438(cParam0);
			}
		}
		if (func_120(cParam0, 32))
		{
			func_439(cParam0);
		}
	}
	switch (func_435(cParam0))
	{
		case -1:
		case 0:
			func_440(cParam0, 1);
			break;
		case 1:
			if (func_441(cParam0))
			{
				if (func_120(cParam0, 4096))
				{
					func_440(cParam0, 2);
				}
				else
				{
					func_440(cParam0, 3);
				}
			}
			break;
		case 2:
			if (func_442(cParam0))
			{
				func_440(cParam0, 3);
			}
			break;
		case 3:
			if (func_443(cParam0))
			{
				func_440(cParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

int func_159(char[4] cParam0)
{
	return cParam0->f_5408;
}

void func_160(char[4] cParam0, int iParam1)
{
	*cParam0 = iParam1;
}

bool func_161(char[4] cParam0)
{
	if (func_33(cParam0) == 26)
	{
		func_444(cParam0, 0);
		return true;
	}
	if (func_445(cParam0))
	{
		iVar0 = func_33(cParam0);
		func_107(cParam0, func_35(cParam0));
		if (func_33(cParam0) == 26)
		{
			func_444(cParam0, 0);
			return true;
		}
		else if (func_121(cParam0, iVar0, 128))
		{
			func_445(cParam0);
		}
	}
	return false;
}

int func_162(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_10;
}

void func_163(int iParam0)
{
	if (func_166(iParam0, 0))
	{
		set_ped_accuracy(iParam0, 50);
		set_ped_shoot_rate(iParam0, 100);
	}
}

void func_164(char[4] cParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	bVar0 = (is_entity_a_ped(iParam1) && func_446(get_ped_index_from_entity_index(iParam1)));
	if (bVar0)
	{
		iVar1 = func_447(get_ped_index_from_entity_index(iParam1));
	}
	if (is_entity_a_ped(iParam1))
	{
		iVar2 = get_ped_index_from_entity_index(iParam1);
		if (bVar0)
		{
			func_448(iVar1);
			if (does_blip_exist(get_blip_from_entity(iVar2)))
			{
				_set_blip_flash_style(get_blip_from_entity(iVar2), -546708623);
				_set_blip_flash_style(get_blip_from_entity(iVar2), 231194138);
			}
		}
		else if (func_449(cParam0, iParam1) && does_blip_exist(get_blip_from_entity(iParam1)))
		{
			_set_blip_flash_style(get_blip_from_entity(iParam1), -546708623);
			_set_blip_flash_style(get_blip_from_entity(iParam1), 231194138);
		}
		else
		{
			func_450(iParam1);
		}
	}
	if (func_449(cParam0, iParam1))
	{
		func_451(cParam0, iParam1, 1024);
		if (bParam2)
		{
			func_452(cParam0, iParam1, 128);
		}
		else
		{
			func_451(cParam0, iParam1, 128);
		}
		if (func_453(cParam0, iParam1, &iVar3))
		{
			func_454(cParam0->f_5423[iVar3]);
		}
	}
	if (bVar0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_455(iVar1);
	}
}

void func_165(int iParam0, bool bParam1)
{
	if (!func_456(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_457(&((*Global_1360165)[iParam0]->f_12), 16))
		{
			func_458(iParam0, 16, 0);
		}
	}
	func_458(iParam0, 1, bParam1);
}

bool func_166(int iParam0, int iParam1)
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
	if (func_399(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_399(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_399(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_399(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_399(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_399(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_399(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_399(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_167(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1) || is_entity_dead(iParam1))
	{
		return;
	}
	func_459(iParam1, bParam2);
	if (bParam3 && func_453(cParam0, iParam1, &uVar0))
	{
		if (bParam2)
		{
			if (!func_460(cParam0, iParam1, 32))
			{
				func_452(cParam0, iParam1, 32);
			}
		}
		else if (func_460(cParam0, iParam1, 32))
		{
			func_451(cParam0, iParam1, 32);
		}
	}
}

char[] func_168(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "utopia1_OutPrisonDep2";
		case 3:
			return "utopia1_OutPrisonShrf";
		case 0:
			return "utopia1_ToRevenge2";
		case 1:
			return "utopia1_ToMicahEnd";
		case 4:
			return "utopia1_BridgeLawR";
		case 5:
			return "utopia1_BridgeWave3L";
		case 6:
			return "utopia1_BridgeWave6L";
		case 7:
			return "utopia1_BridgeWave6R";
		case 8:
			return "utopia1_wave3Town";
		case 9:
			return "utopia1_cmpBridge";
		case 10:
			return "utopia1_ExitCell";
		case 11:
			return "utopia1_CoachBlock";
		case 12:
			return "utopia1_ChaseMicahLeft";
		case 13:
			return "utopia1_ChaseMicahRight";
		default:
			break;
	}
	return "NULL";
}

Vector3 func_169(int iParam0, int iParam1)
{
	return func_461(iParam0, iParam1);
}

void func_170(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7, bool bParam8)
{
	clear_ped_non_creation_area();
	vVar0 = { func_462(vParam1, vParam4, iParam7) };
	vVar3 = { func_463(vParam1, vParam4, iParam7) };
	set_ped_paths_back_to_original(vVar0, vVar3, 0);
	if (_0x91a5f9cbebb9d936(*uParam0))
	{
		remove_scenario_blocking_area(*uParam0, bParam8);
	}
}

void func_171(var uParam0, int iParam1, bool bParam2)
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

void func_172(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = func_464(func_61(cParam0));
	if (!func_269(iVar0))
	{
		return;
	}
	func_270(cParam0, iVar0, func_159(cParam0), iParam1, bParam2, bParam3, 0);
	cParam0->f_5408 = 0;
}

void func_173()
{
	iLocal_410 = 472;
	while (iVar408 <= 502)
	{
		func_465(iVar408);
		func_466(iVar408, 32);
		iLocal_410 = iVar408 + 1;
	}
	iLocal_410 = 883;
	while (iVar408 <= 885)
	{
		func_465(iVar408);
		func_466(iVar408, 32);
		iLocal_410 = iVar408 + 1;
	}
	iLocal_410 = 932;
	while (iVar408 <= 952)
	{
		func_465(iVar408);
		func_466(iVar408, 32);
		iLocal_410 = iVar408 + 1;
	}
}

void func_174()
{
	func_467(26, 0);
}

void func_175(int iParam0)
{
	Global_1396116->f_139 = iParam0;
}

void func_176()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

bool func_177()
{
	if (func_468(2) && !func_468(1))
	{
		if (func_469(&uLocal_629, 2137790641, "des_str_jail", func_169(4, 1), &uLocal_197, 9, 10))
		{
			if (_is_imap_active(500829173))
			{
				_remove_imap(500829173);
			}
			if (_is_imap_active(1934919499))
			{
				_remove_imap(1934919499);
			}
			return true;
		}
	}
	if (func_468(4) && !func_468(1))
	{
		if (func_469(&uLocal_630, 500829173, "des_str_jail_exp", func_169(4, 1), &uLocal_198, 9, 10))
		{
			if (_is_imap_active(2137790641))
			{
				_remove_imap(2137790641);
			}
			if (_is_imap_active(-515396642))
			{
				_remove_imap(-515396642);
			}
			return true;
		}
	}
	if (func_468(1))
	{
		if (func_469(&uLocal_629, 2137790641, "des_str_jail", func_169(4, 1), &uLocal_197, 2, 3) && func_469(&uLocal_630, 500829173, "des_str_jail_exp", func_169(4, 1), &uLocal_198, 2, 3))
		{
			return true;
		}
	}
	return false;
}

void func_178()
{
	if (!func_187(8388608))
	{
		Var0.f_15 = -1545648199;
		Var0 = Global_35;
		Var0.f_12 = 31;
		Var0.f_13 = 7;
		Var0.f_8 = 0;
		_0x88bc5f4aef77fc4e(&Var0, 17);
		func_470(8388608);
	}
}

int func_179(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_471(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_472(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_473(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_474(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_475(bParam2), iParam0, 0);
	return iVar2;
}

bool func_180(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_471(iParam0, 0))
	{
		return false;
	}
	if (!func_476(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_477(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_478(iParam0, bParam2);
	iVar2 = 0;
	if (func_179(iParam0, 0, 0) == 0)
	{
		if (func_479(iParam0))
		{
			iVar5 = func_480(iParam0);
			iVar6 = func_481(iVar5);
			iVar7 = func_482(iVar6) + 1;
			func_483(iVar5);
			if (func_484(38))
			{
				func_181(483, 0);
			}
			else
			{
				func_181(482, 0);
			}
			if (iVar7 == func_485(iVar6))
			{
				func_180(func_486(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_403() && func_487(4))
				{
					if (func_403() && (func_488(38) || func_484(38)))
					{
						func_490(38, func_486(iVar6), 0, 0, func_489(), 0, -1, 0);
						func_491(2);
					}
					else
					{
						func_490(38, func_486(iVar6), 0, 0, func_489(), 0, -1, 0);
						func_491(1);
					}
				}
			}
			else if (func_403() && func_487(4))
			{
				if (func_403() && (func_488(38) || func_484(38)))
				{
					func_490(38, 0, 0, 0, func_489(), 0, -1, 0);
					func_491(2);
				}
				else
				{
					func_490(38, 0, 0, 0, func_489(), 0, -1, 0);
					func_491(1);
				}
			}
			if (func_403() && func_487(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_403() && (func_488(38) || func_484(38)))
					{
						func_492(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_492(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_472(iParam0) == -1037537535)
	{
		if ((!func_493(iParam0, 866047851) && !func_493(iParam0, -1979000645)) && !func_493(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_494(iParam0, 8388608) && !func_495(28))
	{
		func_496(28);
	}
	if (!bVar3)
	{
		if (func_493(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_497(iParam0) == -1447088266)
			{
				iVar1 = func_499(func_498(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_500(iVar1);
					}
					if (func_501(0) && func_502(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_503(iParam0, iVar0, iParam5);
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
						func_500(iParam0);
					}
					if (func_501(0) && func_502(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_503(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_472(iParam0) == -427144552)
		{
			if (!func_504(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_472(iParam0) == 307971639 && func_505(iParam0))
		{
			if (!func_506(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_493(iParam0, 866047851))
		{
			func_507(iParam0);
		}
		else if (func_493(iParam0, 2000026003))
		{
			func_508(iParam0);
		}
		else if (func_493(iParam0, -103750053))
		{
			func_95(func_509(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_510(-717883113, 2091222383), iVar0);
		}
		else if (func_493(iParam0, -121341956) && !func_493(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_336((*Global_1835011)[4]->f_1, 1))
				{
					func_181(498, 0);
				}
			}
			if (func_493(iParam0, -2017733358) || func_493(iParam0, -1369131378))
			{
				func_511(iParam0);
			}
		}
		else if (func_493(iParam0, -136654233))
		{
			if (func_493(iParam0, -1021472396))
			{
			}
		}
		else if (func_493(iParam0, -1466706512) && func_493(iParam0, 1147021565))
		{
			func_181(484, 0);
		}
		else if (func_493(iParam0, 1147021565) && func_493(iParam0, -524514947))
		{
		}
		else if (func_493(iParam0, 554195525))
		{
		}
		else if (func_493(iParam0, 589988438))
		{
			if (func_512())
			{
				func_513(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_493(iParam0, 787083290) && func_493(iParam0, 949916894))
		{
			func_514(iParam0);
		}
		else if (func_493(iParam0, -1718133314))
		{
			func_515(iParam0);
		}
		else if (func_493(iParam0, -1738650224))
		{
			func_516(iParam0);
		}
		else if (func_493(iParam0, -1112814642) && func_493(iParam0, 949916894))
		{
			func_517(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_493(iParam0, 1841149704))
		{
			func_518();
		}
		else if (func_493(iParam0, 606799272))
		{
			func_519(iParam0, iParam1);
			func_520(iParam0);
		}
		else if (func_493(iParam0, -1112814642) && func_493(iParam0, -1697809989))
		{
			func_521(iParam0, 0, 0, 0);
		}
		else if (func_493(iParam0, -2017733358) || func_493(iParam0, -1369131378))
		{
			func_511(iParam0);
		}
		else if (func_493(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_522(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_493(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_356(215778062, 1, 0))
					{
						func_180(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_356(670273567, 1, 0))
					{
						func_180(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_356(-967317137, 1, 0))
					{
						func_180(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_356(526074061, 1, 0))
					{
						func_180(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_356(-1045488665, 1, 0))
					{
						func_180(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_356(471514780, 1, 0))
					{
						func_180(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_493(iParam0, -839724752) && func_494(iParam0, 4))
		{
			if (!func_484(42))
			{
				func_523(iParam0);
			}
		}
		else if (func_493(iParam0, 1399091007))
		{
			func_524(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_493(iParam0, 1248798204))
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
				func_180(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_496(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_525(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_526(&iVar9, 0))
				{
					func_502(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_525(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_181(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_527();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_528();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_529();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_530();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_531();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_532(499813453, 854119837, 0);
				func_533(499813453, 0);
				func_534(1);
				break;
			case 2127812557:
				func_532(499813453, -1292544588, 0);
				func_533(499813453, 0);
				func_534(2);
				break;
			case 808991383:
				func_532(499813453, -1003325394, 0);
				func_533(499813453, 0);
				func_534(4);
				break;
			case 1134518629:
				func_532(666607663, -335460405, 0);
				func_533(666607663, 0);
				func_535(1);
				break;
			case 902940106:
				func_532(666607663, 903797617, 0);
				func_533(666607663, 0);
				func_535(2);
				break;
			case -418174898:
				func_532(666607663, 669728650, 0);
				func_533(666607663, 0);
				func_535(4);
				break;
			case -648114971:
				func_532(-220219788, 1214120047, 0);
				func_533(-220219788, 0);
				func_536(1);
				break;
			case 211153747:
				func_532(-220219788, 655769340, 0);
				func_533(-220219788, 0);
				func_536(2);
				break;
			case -32876996:
				func_532(-220219788, 885316185, 0);
				func_533(-220219788, 0);
				func_536(4);
				break;
			case 1191437462:
				func_532(218622660, -1491419385, 0);
				func_533(218622660, 0);
				func_537(1);
				break;
			case 1119149048:
				func_532(218622660, 1809565830, 0);
				func_533(218622660, 0);
				func_537(2);
				break;
			case 506073827:
				func_532(390004462, -628873767, 0);
				func_533(390004462, 0);
				func_538(1);
				break;
			case -1876986168:
				func_532(390004462, -405421956, 0);
				func_533(390004462, 0);
				func_538(2);
				break;
			case 2142623221:
				func_532(390004462, -1108972386, 0);
				func_533(390004462, 0);
				func_538(4);
				break;
			case 1508215381:
				func_532(6410548, 1053716392, 0);
				func_533(6410548, 0);
				func_539(1);
				break;
			case -888935280:
				func_532(6410548, 806507056, 0);
				func_533(6410548, 0);
				func_539(2);
				break;
			case -1252474566:
				func_532(6410548, 1571925350, 0);
				func_533(6410548, 0);
				func_539(4);
				break;
			case -1465702449:
				func_532(6410548, 1330352282, 0);
				func_533(6410548, 0);
				func_539(8);
				break;
			case -21093309:
				func_541(242, func_540(-21093309), 0);
				break;
			case 204375141:
				func_541(240, func_540(204375141), 0);
				break;
			case -417963070:
				func_541(241, func_540(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_542(594, 1934060482, 1, 1);
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
					func_542(594, 1110018439, 1, 1);
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
					func_542(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_542(594, -1228016946, 1, 1);
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
					func_542(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_542(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_181(488, 0);
				break;
			case 1613651027:
				func_181(491, 0);
				break;
			case -885810591:
				func_181(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_180(func_543(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_180(func_544(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_495(1))
				{
					func_181(487, 0);
				}
				break;
			case -898386032:
				func_181(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_181(496, 0);
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
		func_545(&iVar10);
		if (!func_546(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_501(0))
		{
			return true;
		}
		if (func_472(iParam0) == -1037537535)
		{
			func_547(iParam0);
		}
		if (func_493(iParam0, -1979000645))
		{
			func_548(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_501(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_180(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_549(iVar2, 0);
		}
	}
	Var35 = { func_550(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_551(iParam0);
	if (fParam6 > 0f)
	{
		if (func_493(iParam0, -839724752))
		{
			func_552(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_553(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_181(int iParam0, bool bParam1)
{
	func_554(iParam0, &iVar0, &iVar1);
	if (!func_555(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_556(iVar0, iVar1);
}

void func_182(int iParam0, int iParam1)
{
	if (!func_557(iParam0))
	{
		return;
	}
	iVar0 = func_558();
	if (iParam1 > iVar0)
	{
		iParam1 = iVar0;
	}
	_set_max_wanted_level_2(iVar0);
	if (iParam0 == func_559())
	{
		_set_bounty_for_player(player_id(), iParam1);
	}
	if (Global_1572887->f_12 == -1)
	{
		if (&Global_40.f_358[iParam0] != iParam1)
		{
			func_560(iParam0, iParam1);
			func_561(iParam0);
		}
		Global_40.f_358[iParam0] = iParam1;
		if (!func_562(iParam0, 4))
		{
			if (&Global_40.f_358[iParam0] >= get_wanted_level_threshold(1))
			{
				func_563(iParam0, 1);
			}
		}
		else if (&Global_40.f_358[iParam0] == 0)
		{
			func_563(iParam0, 0);
		}
		return;
	}
	Global_1058888->f_42266[iParam0] = iParam1;
}

void func_183(int iParam0)
{
	iVar0 = func_370(func_12(11));
	func_426(&iVar0, iParam0);
	func_564(func_12(11), iVar0);
}

void func_184(int iParam0)
{
	iVar0 = func_370(func_12(11));
	func_565(&iVar0, iParam0);
	func_564(func_12(11), iVar0);
}

void func_185(int iParam0, char* sParam1)
{
	if (!func_201(iParam0))
	{
		return;
	}
	StringCopy(&((*Global_1835011)[iParam0]->f_9), sParam1, 24);
}

void func_186(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam1)
	{
		func_566(iParam0, bParam2, bParam3);
	}
	else
	{
		func_567(iParam0);
	}
}

bool func_187(int iParam0)
{
	return func_399(iVar515, iParam0);
}

int func_188(int iParam0)
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

void func_189(int iParam0)
{
	if (func_568(iParam0) == 57)
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

void func_190(int iParam0, int iParam1)
{
	func_569(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

void func_191(bool bParam0, int iParam1)
{
	func_569(1595373759, bParam0, iParam1, 0, 0, 0, 0, 0);
	func_569(1854467923, bParam0, iParam1, 0, 0, 0, 0, 0);
}

void func_192(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_570(1497516462);
			func_194(2016141805);
			func_194(1010885152);
			func_194(-502324015);
			break;
		case 2016141805:
			func_194(1497516462);
			func_570(2016141805);
			func_194(1010885152);
			func_194(-502324015);
			break;
		case 1010885152:
			func_194(1497516462);
			func_194(2016141805);
			func_570(1010885152);
			func_194(-502324015);
			break;
		case -502324015:
			func_194(1497516462);
			func_194(2016141805);
			func_194(1010885152);
			func_570(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_194(-538889627);
			func_194(-538880323);
			func_194(-1056767524);
			func_570(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_571();
			func_570(iParam0);
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
			func_572();
			func_570(iParam0);
			break;
		case 2019386373:
			func_194(-664252410);
			func_194(2109952320);
			func_570(2019386373);
			break;
		case -664252410:
			func_194(2019386373);
			func_194(2109952320);
			func_570(-664252410);
			break;
		case 2109952320:
			func_194(2019386373);
			func_194(-664252410);
			func_570(2109952320);
			break;
		case -1674179981:
			func_194(-1835851517);
			func_194(-1838352012);
			func_570(-1674179981);
			break;
		case -1835851517:
			func_194(-1674179981);
			func_194(-1838352012);
			func_570(-1835851517);
			break;
		case -1838352012:
			func_194(-1674179981);
			func_194(-1835851517);
			func_570(-1838352012);
			break;
		case -1717960576:
			func_194(210001842);
			func_570(-1717960576);
			break;
		case 210001842:
			func_194(-1717960576);
			func_570(210001842);
			break;
		case -150493654:
			func_194(-1271608261);
			func_194(1846061697);
			func_194(-1145519186);
			func_570(-150493654);
			break;
		case -1271608261:
			func_194(-150493654);
			func_194(1846061697);
			func_194(-1145519186);
			func_570(-1271608261);
			break;
		case 1846061697:
			func_194(-150493654);
			func_194(-1271608261);
			func_194(-1145519186);
			func_570(1846061697);
			break;
		case -1145519186:
			func_194(-150493654);
			func_194(-1271608261);
			func_194(1846061697);
			func_570(-1145519186);
			break;
		case 1766284049:
			func_194(280705402);
			func_194(1926308480);
			func_570(1766284049);
			break;
		case 280705402:
			func_194(1766284049);
			func_194(1926308480);
			func_570(280705402);
			break;
		case 1926308480:
			func_194(1766284049);
			func_194(280705402);
			func_570(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_194(439465264);
				func_570(1609506757);
			}
			else
			{
				func_194(1609506757);
				func_194(439465264);
			}
			break;
		case 439465264:
			if (func_573(1609506757))
			{
				if (bParam1)
				{
					func_570(439465264);
				}
				else
				{
					func_194(439465264);
				}
			}
			break;
		case 1822001510:
			func_194(-1612662716);
			func_570(1822001510);
			break;
		case -1612662716:
			func_194(1822001510);
			func_570(-1612662716);
			break;
		case 1306158345:
			func_194(1952610440);
			func_194(-223469678);
			func_194(-404698347);
			func_194(1517904467);
			func_570(1306158345);
			break;
		case 1952610440:
			func_194(1306158345);
			func_194(-223469678);
			func_194(-404698347);
			func_194(1517904467);
			func_570(1952610440);
			break;
		case -223469678:
			func_194(1306158345);
			func_194(1952610440);
			func_194(-404698347);
			func_194(1517904467);
			func_570(-223469678);
			break;
		case -404698347:
			func_194(1306158345);
			func_194(1952610440);
			func_194(-223469678);
			func_194(1517904467);
			func_570(-404698347);
			break;
		case 1517904467:
			func_194(1306158345);
			func_194(1952610440);
			func_194(-223469678);
			func_194(-404698347);
			func_570(1517904467);
			break;
		case 1376646519:
			func_194(931649776);
			func_194(-434590080);
			func_194(1743048395);
			func_194(449774763);
			func_570(1376646519);
			break;
		case 931649776:
			func_194(1376646519);
			func_194(-434590080);
			func_194(1743048395);
			func_194(449774763);
			func_570(931649776);
			break;
		case -434590080:
			func_194(1376646519);
			func_194(931649776);
			func_194(1743048395);
			func_194(449774763);
			func_570(-434590080);
			break;
		case 1743048395:
			func_194(1376646519);
			func_194(931649776);
			func_194(-434590080);
			func_194(449774763);
			func_570(1743048395);
			break;
		case 449774763:
			func_194(1376646519);
			func_194(931649776);
			func_194(-434590080);
			func_194(1743048395);
			func_570(449774763);
			break;
		case -1414537028:
			func_194(38162571);
			func_194(1350391819);
			func_194(54073871);
			func_570(-1414537028);
			break;
		case 38162571:
			func_194(-1414537028);
			func_194(1350391819);
			func_194(54073871);
			func_570(38162571);
			break;
		case 1350391819:
			func_194(-1414537028);
			func_194(38162571);
			func_194(54073871);
			func_570(1350391819);
			break;
		case 54073871:
			func_194(-1414537028);
			func_194(38162571);
			func_194(1350391819);
			func_570(54073871);
			break;
		case 198200492:
			func_570(198200492);
			func_194(-1124061431);
			func_194(52706132);
			func_194(-259123672);
			break;
		case -1124061431:
			func_194(198200492);
			func_570(-1124061431);
			func_194(52706132);
			func_194(-259123672);
			break;
		case 52706132:
			func_194(198200492);
			func_194(-1124061431);
			func_570(52706132);
			func_194(-259123672);
			break;
		case -259123672:
			func_194(198200492);
			func_194(-1124061431);
			func_194(52706132);
			func_570(-259123672);
			break;
		case -919512195:
			func_570(-919512195);
			func_194(-1925798111);
			func_194(420709909);
			func_194(1703426636);
			break;
		case -1925798111:
			func_570(-1925798111);
			func_194(-919512195);
			func_194(420709909);
			func_194(1703426636);
			break;
		case 420709909:
			func_570(420709909);
			func_194(-919512195);
			func_194(-1925798111);
			func_194(1703426636);
			break;
		case 1703426636:
			func_570(1703426636);
			func_194(-919512195);
			func_194(-1925798111);
			func_194(420709909);
			break;
		case -1223121209:
			func_570(-1223121209);
			func_194(630808005);
			break;
		case 630808005:
			func_570(630808005);
			func_194(-1223121209);
			break;
		case 1453909576:
			func_570(1453909576);
			func_194(1643531967);
			break;
		case 1643531967:
			func_570(1643531967);
			func_194(1453909576);
			break;
		case 0:
			func_570(0);
			func_194(473295046);
			func_194(-1738165526);
			break;
		case 473295046:
			func_570(473295046);
			func_194(0);
			func_194(-1738165526);
			break;
		case -1738165526:
			func_570(-1738165526);
			func_194(0);
			func_194(473295046);
			break;
		case 932909855:
			func_570(932909855);
			func_194(2051822093);
			break;
		case 2051822093:
			func_570(2051822093);
			func_194(932909855);
			break;
		case 405586984:
			func_570(405586984);
			func_194(1509509592);
			func_194(-959357075);
			func_194(-1311865656);
			break;
		case 1509509592:
			func_570(1509509592);
			func_194(405586984);
			func_194(-959357075);
			func_194(-1311865656);
			break;
		case -959357075:
			func_570(-959357075);
			func_194(1509509592);
			func_194(405586984);
			func_194(-1311865656);
			break;
		case -1311865656:
			func_570(-1311865656);
			func_194(1509509592);
			func_194(-959357075);
			func_194(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_570(-524145696);
			}
			else
			{
				func_194(-524145696);
			}
			func_194(1626481264);
			func_194(282809459);
			break;
		case 282809459:
			func_570(282809459);
			func_194(1626481264);
			func_194(-524145696);
			break;
		case 1626481264:
			func_570(1626481264);
			func_194(-524145696);
			func_194(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_570(885203519);
			}
			else
			{
				func_194(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_570(-1080627546);
			}
			else
			{
				func_194(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_573(iParam0))
				{
					func_570(iParam0);
				}
			}
			else if (func_573(iParam0))
			{
				func_194(iParam0);
			}
			break;
	}
}

void func_193(bool bParam0, float fParam1)
{
	clear_bit(&(Global_1934765->f_301), 1);
	func_574(bParam0, fParam1);
}

void func_194(int iParam0)
{
	iVar0 = func_575(iParam0, 1);
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

void func_195(float fParam0)
{
	func_576(ceil((to_float(300) - (to_float(300) * fParam0))));
}

void func_196(bool bParam0)
{
	if (bParam0)
	{
		delete_all_trains();
	}
	set_random_trains(!bParam0);
	func_39(!bParam0);
}

void func_197(int iParam0)
{
	iParam0 = func_277(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_278(iParam0, 64);
	func_279();
}

void func_198()
{
	if (bVar617)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (_is_tracked_point_valid(&(iLocal_540[iVar0])))
			{
				destroy_tracked_point(&(iLocal_540[iVar0]));
			}
			iVar0++;
		}
		iLocal_619 = 0;
	}
}

int func_199(int iParam0)
{
	return iParam0;
}

void func_200(int iParam0)
{
	if (!func_577(iParam0))
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

bool func_201(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_202(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_203(int iParam0)
{
	iVar0 = func_307(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_204(int iParam0)
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
		iVar0 = func_206(iParam0);
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

int func_205(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_206(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_578(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_207(int iParam0)
{
	if (!func_202(iParam0))
	{
		return 0;
	}
	return func_580(func_579(iParam0));
}

void func_208(int iParam0, int iParam1, int iParam2)
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

bool func_209(int iParam0, bool bParam1, bool bParam2)
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
		if (func_581())
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
		iVar0 = func_283(&(Global_1898164->f_1[0]));
		if (func_284(iVar0) && func_312((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_202(&(Global_1898164->f_1[0])))
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

bool func_210(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_211(int iParam0)
{
	switch (func_207(iParam0))
	{
		case 1:
			iVar0 = func_283(iParam0);
			return func_582(iVar0);
		case 8:
			iVar1 = func_283(iParam0);
			if (func_312((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_583(iVar1);
			}
			break;
	}
	return -1;
}

void func_212(bool bParam0)
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
		func_584(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_585();
		Global_1898077->f_9 = func_586(Global_1894899->f_2);
		func_587(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_213()
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

void func_214(int iParam0, int iParam1)
{
	if (!func_202(iParam0))
	{
		return;
	}
	func_588(iParam0, iParam1);
}

int func_215(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_216(bool bParam0)
{
	if (!bParam0 && func_573(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_217(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_218(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_215(0) != iParam0)
	{
		return;
	}
	if (func_589(iParam0))
	{
		if (bParam1)
		{
			func_590(-525676072);
		}
		else
		{
			func_591(-525676072);
		}
	}
}

int func_219(int iParam0)
{
	return func_593(func_592(iParam0));
}

void func_220(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_221(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_222(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_223(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_224()
{
	if (func_10(Global_43801))
	{
		func_11(&Global_43801, 0, 0);
	}
}

bool func_225()
{
	return func_594(_0xc17f69e1418cd11f(3));
}

bool func_226()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_227(int iParam0)
{
	iParam0 = func_277(iParam0);
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

int func_228(int iParam0, int iParam1)
{
	if (!func_595(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_596(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_229(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_230(char* sParam0, bool bParam1)
{
	if (func_229(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_597(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_597(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_597(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_597(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_597(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_597(sParam0, 1);
		return true;
	}
	func_597(sParam0, 1);
	return false;
}

bool func_231(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_232(var uParam0)
{
	func_598(uParam0, 0f);
}

int func_233(var uParam0)
{
	if (!func_26(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_599(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_600() - round((uParam0->f_1 * 1000f)));
}

void func_234(bool bParam0, bool bParam1)
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
		func_601(0);
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

struct<4> func_235(int iParam0, int iParam1)
{
	return func_602(iParam0, iParam1);
}

void func_236(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_237(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_9;
}

void func_238(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_207(iParam0) == 1)
	{
		cVar0 = func_110(func_603(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_207(iParam0) == 8)
	{
		cVar0 = func_605(func_604(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_606(1, 1);
	func_607(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_223(1f);
}

void func_239(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_597(sParam0, 2);
}

void func_240(int iParam0, int iParam1)
{
	if (!func_608(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_241(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_242()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_243()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_244()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_245()
{
	return func_609(get_id_of_this_thread());
}

void func_246(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_610(bParam0);
}

void func_247()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_248(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_249()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_250(var uParam0)
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

void func_251(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_252(int iParam0)
{
	if (!func_611(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_253()
{
	func_612(64);
}

void func_254()
{
	Global_1310750->f_16072 = 0;
}

bool func_255()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_256(int iParam0)
{
	return func_257(23, iParam0);
}

bool func_257(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_613(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_614())
	{
		return func_613(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_613(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_258(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_259(int iParam0)
{
	if (!func_258(iParam0))
	{
		return false;
	}
	return func_262(iParam0, 8);
}

void func_260(int iParam0, int iParam1)
{
	if (!func_258(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_261(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_262(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_263(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_264()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_262(iVar1, 1))
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
			else if (func_262(iVar1, 2))
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
				func_299(iVar1, 11);
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

bool func_265(var uParam0)
{
	if (func_615(uParam0, 1) || func_615(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_266(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_267(struct<2> Param0)
{
	if (!func_266(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_268(struct<2> Param0, int iParam2)
{
	if (!func_266(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_269(int iParam0)
{
	if (!func_616(iParam0))
	{
		return false;
	}
	if (!func_617(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_270(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_616(iParam1))
	{
		return;
	}
	if (!func_269(iParam1))
	{
		return;
	}
	if (bParam5 && !bParam6)
	{
		if (func_22(cParam0) != 0 && func_154(cParam0) >= 2)
		{
			bParam5 = false;
		}
	}
	if (does_entity_exist(iParam2))
	{
		func_618(cParam0, iParam2);
		func_619(iParam2);
	}
	func_448(iParam1);
	func_620(iParam1, 0);
	func_621(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_271(char[4] cParam0)
{
	return cParam0->f_5411;
}

int func_272(int iParam0)
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

int func_273(int iParam0)
{
	iParam0 = func_277(iParam0);
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

void func_274(int iParam0)
{
	iParam0 = func_277(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_622(iParam0);
	if (func_623(iParam0))
	{
		if (func_273(iParam0) != iVar0)
		{
			return;
		}
	}
	func_624(iParam0);
	func_625(iParam0);
	iVar1 = func_227(iParam0);
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
			if (!func_626(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_627(iParam0);
	}
}

void func_275(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_628(iParam0))
	{
		return;
	}
	iVar0 = func_272(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_622(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_273(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_623(iVar0))
		{
			return;
		}
	}
	func_629(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_276(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 - (cParam0->f_5308 && iParam1));
}

int func_277(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_278(int iParam0, int iParam1)
{
	iParam0 = func_277(iParam0);
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

void func_279()
{
	if (func_630(0))
	{
		func_631(0);
	}
	if (func_630(1))
	{
		func_631(1);
	}
	if (func_630(5))
	{
		func_631(5);
	}
	if (func_630(6))
	{
		func_624(6);
	}
}

struct<2> func_280(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_281(int iParam0)
{
	Var0 = { func_280(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_282(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_283(int iParam0)
{
	if (!func_202(iParam0))
	{
		return -1;
	}
	return func_632(func_579(iParam0));
}

bool func_284(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_285(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_286(int iParam0, bool bParam1)
{
	iVar0 = func_633(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_634(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_634(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_634(iParam0)))
			{
				_uilog_remove_entry(2, func_634(iParam0));
			}
		}
	}
	func_635(iParam0, 4);
	func_635(iParam0, 8);
	func_635(iParam0, 16);
}

void func_287(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_284(iVar0))
		{
			if (func_285(iVar0, 4))
			{
				func_288(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_288(int iParam0, bool bParam1)
{
	if (!func_285(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_633(iParam0), func_634(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_633(iParam0), func_634(iParam0), 2, "");
		func_636(iParam0, 16);
	}
	else
	{
		if (func_285(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_633(iParam0), func_634(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_633(iParam0), func_634(iParam0), 0, "");
		}
		func_635(iParam0, 16);
	}
}

void func_289(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_285(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_633(iParam0), func_634(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_285(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_633(iParam0), func_634(iParam0), 1, "");
		}
		func_636(iParam0, 8);
	}
	else
	{
		if (func_285(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_633(iParam0), func_634(iParam0), 0, "");
		}
		func_635(iParam0, 8);
	}
}

int func_290(char[4] cParam0)
{
	if (func_120(cParam0, 8388608))
	{
		return 2;
	}
	if (func_120(cParam0, 4194304))
	{
		return 4;
	}
	if (func_120(cParam0, 4))
	{
		return 1;
	}
	if (func_128(cParam0, 1) && func_82(32768))
	{
		return 3;
	}
	return 0;
}

void func_291(int iParam0, int iParam1)
{
	if (func_630(0))
	{
		if (func_637(0))
		{
			func_638(0);
		}
	}
	if (func_630(1))
	{
		if (func_637(1))
		{
			func_638(1);
		}
	}
}

void func_292(char[4] cParam0)
{
	if (func_120(cParam0, 1))
	{
		return;
	}
	if (is_entity_dead(cParam0->f_5411))
	{
		if (func_120(cParam0, 16))
		{
			func_58(cParam0, 0);
		}
		if (func_437(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_293(char[4] cParam0)
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

void func_294(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_639(iParam0, sParam4, iParam5);
	}
	func_640(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_295(int iParam0)
{
	if (!func_258(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_296()
{
	return &Global_1899515;
}

void func_297(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_298(int iParam0, int iParam1)
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

void func_299(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_300(int iParam0)
{
	if (!func_258(iParam0))
	{
		return;
	}
	if (func_641(iParam0))
	{
		func_642(iParam0);
	}
	else
	{
		func_643(iParam0);
	}
}

int func_301(int iParam0)
{
	if (func_644(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_302(int iParam0)
{
	if (func_645(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_303(int iParam0, int iParam1)
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

void func_304(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_646(Global_1310750[iVar0], iParam0))
		{
			if (!func_647(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_648(iVar0) < func_649(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_306(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_305(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_650();
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

void func_306(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_651(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_307(int iParam0)
{
	if (!func_202(iParam0))
	{
		return -1;
	}
	return func_206(iParam0);
}

void func_308(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_309(bool bParam0, int iParam1)
{
	if (!bParam0 && func_573(373691918))
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
	func_216(bParam0);
	return 1;
}

void func_310()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_616(iVar17))
		{
			iVar18 = func_652(iVar17);
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
	func_653(&(Global_1359489->f_55));
	if (func_654(1777191912, 1))
	{
		func_655(1777191912, 1, 0);
	}
}

void func_311(int iParam0)
{
	if (!func_202(iParam0))
	{
		return;
	}
	func_657(iParam0, (func_656(iParam0) + shift_left(1, 16)));
}

bool func_312(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_313()
{
	return func_658() > 0;
}

void func_314(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_659(-1032423150, iParam1);
			break;
		case 18:
			func_659(294066959, iParam1);
			func_659(-1925639563, iParam1);
			func_659(-378582304, iParam1);
			func_659(-338306437, iParam1);
			break;
		case 20:
			func_659(437270255, iParam1);
			break;
		case 2:
			func_659(-304000413, iParam1);
			func_659(-533612796, iParam1);
			func_659(48036954, iParam1);
			break;
		case 23:
			func_659(193108691, iParam1);
			func_659(491732588, iParam1);
			func_659(671962088, iParam1);
			func_660(1);
			break;
		case 16:
			func_659(-1836056650, iParam1);
			func_659(-754657922, iParam1);
			func_659(-1752355838, iParam1);
			func_659(-1375324510, iParam1);
			break;
		case 59:
			func_659(-514392105, iParam1);
			func_659(-822060246, iParam1);
			if (func_661(146))
			{
				func_659(1372748575, iParam1);
			}
			func_660(1);
			break;
		case 76:
			func_659(1991352213, iParam1);
			if (func_662() == 0)
			{
				func_659(1852488616, iParam1);
			}
			else
			{
				func_659(-9866350, iParam1);
			}
			break;
		case 44:
			func_659(863852599, iParam1);
			func_659(1228374935, iParam1);
			func_659(1517889050, iParam1);
			func_659(830657578, iParam1);
			func_659(1901354958, iParam1);
			break;
		case 46:
			func_659(-582805654, iParam1);
			func_659(250378940, iParam1);
			func_659(-2143265426, iParam1);
			break;
		case 17:
			func_659(-941494139, iParam1);
			func_659(1641489521, iParam1);
			break;
		case 19:
			func_659(-1829423531, iParam1);
			func_659(-1590504752, iParam1);
			func_659(1357221321, iParam1);
			break;
		case 21:
			func_659(-1037992610, iParam1);
			func_659(-1286414399, iParam1);
			func_660(0);
			break;
		case 15:
			func_659(-1014460309, iParam1);
			func_659(-1030502825, iParam1);
			break;
		case 33:
			func_659(479388090, iParam1);
			func_659(-1396342239, iParam1);
			func_659(-619618632, iParam1);
			break;
		case 34:
			func_659(1193561641, iParam1);
			break;
		case 64:
			func_659(1363960851, iParam1);
			break;
		case 60:
			func_659(-1232453926, iParam1);
			func_659(-882833584, iParam1);
			break;
		case 73:
			func_659(2023205767, iParam1);
			break;
		case 74:
			func_659(-2135286513, iParam1);
			if (func_662() == 0)
			{
				func_659(33799444, iParam1);
			}
			else
			{
				func_659(-161343203, iParam1);
			}
			break;
		case 8:
			func_659(841639693, iParam1);
			func_659(358952323, iParam1);
			break;
		case 36:
			func_659(852538149, iParam1);
			func_659(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_659(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_659(1116039310, iParam1);
			}
			break;
		case 27:
			func_659(107633428, iParam1);
			func_659(335902282, iParam1);
			func_659(575673055, iParam1);
			func_659(-425944207, iParam1);
			break;
		case 28:
			func_659(-1941530250, iParam1);
			func_659(1399269304, iParam1);
			func_659(1839684664, iParam1);
			func_659(923168503, iParam1);
			func_659(-1485078322, iParam1);
			break;
		case 29:
			func_659(574995900, iParam1);
			func_659(-1691275407, iParam1);
			func_659(-1725307861, iParam1);
			break;
		case 31:
			func_659(-2108383238, iParam1);
			func_659(-1321828931, iParam1);
			func_659(-1632118592, iParam1);
			func_659(334938948, iParam1);
			break;
		case 4:
			func_659(115823701, iParam1);
			func_659(-1896939736, iParam1);
			func_659(-1830746356, iParam1);
			func_659(-1235169781, iParam1);
			func_660(0);
			break;
		case 6:
			func_659(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_659(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_659(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_659(-384176140, iParam1);
			}
			break;
		case 25:
			func_659(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_659(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_659(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_659(-1374849484, iParam1);
			}
			break;
		case 48:
			func_659(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_659(217772674, iParam1);
			}
			else
			{
				func_659(2071798160, iParam1);
			}
			if (func_663(51))
			{
				func_659(-792802286, iParam1);
			}
			break;
		case 49:
			func_659(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_659(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_659(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_659(1402120602, iParam1);
			}
			break;
		case 58:
			func_659(-1661934591, iParam1);
			break;
		case 50:
			func_659(-1713759426, iParam1);
			break;
		case 52:
			func_659(-314799932, iParam1);
			func_659(-462260432, iParam1);
			func_659(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_659(345256028, iParam1);
				func_659(-1635084094, iParam1);
			}
			else
			{
				func_659(114267347, iParam1);
			}
			break;
		case 32:
			func_659(615304157, iParam1);
			break;
		case 47:
			func_659(415434835, iParam1);
			break;
		case 69:
			func_659(1373465877, iParam1);
			if (func_336((*Global_1347702)[9]->f_15, 1))
			{
				func_659(-2058273527, iParam1);
			}
			break;
		case 70:
			func_659(451334985, iParam1);
			if (func_662() == 0)
			{
				func_659(-224150200, iParam1);
			}
			else
			{
				func_659(289012628, iParam1);
			}
			break;
		case 71:
			if (func_662() == 0)
			{
				func_659(-41692120, iParam1);
			}
			else
			{
				func_659(1537840678, iParam1);
			}
			break;
		case 37:
			func_659(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_659(1842132550, iParam1);
			}
			else
			{
				func_659(-785735240, iParam1);
			}
			func_659(-1605690566, iParam1);
			break;
		case 13:
			func_659(-731367459, iParam1);
			func_659(224176585, iParam1);
			func_659(-14545580, iParam1);
			break;
		case 53:
			func_659(1095274522, iParam1);
			break;
		case 54:
			func_659(-572027988, iParam1);
			break;
		case 56:
			func_659(1339307101, iParam1);
			func_659(2102267732, iParam1);
			break;
		case 57:
			func_659(710102686, iParam1);
			break;
		case 22:
			func_659(-1754368482, iParam1);
			func_659(-2071408557, iParam1);
			break;
		case 12:
			func_659(-181334543, iParam1);
			break;
		case 0:
			func_659(-2134669864, iParam1);
			func_659(-548289709, iParam1);
			func_659(-911271922, iParam1);
			func_659(-604455775, iParam1);
			break;
		case 1:
			func_660(1);
			break;
		case 3:
			if (func_347())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_659(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_659(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_315()
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

void func_316(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_659(-145926707, iParam1);
			func_659(-604922090, iParam1);
			func_659(-848690769, iParam1);
			break;
		case 1:
			func_659(-1477631591, iParam1);
			break;
		case 2:
			func_659(76112544, iParam1);
			break;
		case 9:
			func_659(1396404308, iParam1);
			func_659(-1357381228, iParam1);
			if (func_336((*Global_1835011)[69]->f_1, 1))
			{
				func_659(1902679064, iParam1);
			}
			else
			{
				func_659(-2146422425, iParam1);
			}
			break;
		case 22:
			func_659(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_659(-1934184559, iParam1);
				func_659(1281755988, iParam1);
			}
			else
			{
				func_659(-1745220872, iParam1);
				func_659(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_659(-1641504538, iParam1);
				func_659(-988014485, iParam1);
			}
			else if (func_661(26))
			{
				func_659(-343043950, iParam1);
				func_659(-640062214, iParam1);
			}
			else
			{
				func_659(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_659(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_659(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_659(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_659(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_659(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_659(1301690984, iParam1);
				}
			}
			else
			{
				func_659(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_659(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_659(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_659(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_659(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_659(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_659(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_659(-754570528, iParam1);
			}
			else
			{
				func_659(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_659(-2072125821, iParam1);
			}
			else
			{
				func_659(270040030, iParam1);
			}
			break;
		case 37:
			func_659(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_659(-505314737, iParam1);
				func_659(-1853052860, iParam1);
			}
			else
			{
				func_659(-1975624994, iParam1);
				func_659(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_659(1690231002, iParam1);
			}
			else
			{
				func_659(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_659(1225386280, iParam1);
			}
			else if (func_661(54))
			{
				func_659(-283235773, iParam1);
			}
			else
			{
				func_659(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_659(1355398007, iParam1);
			}
			else
			{
				func_659(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_659(574636806, iParam1);
			}
			else
			{
				func_659(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_659(821118338, iParam1);
			}
			else if (func_661(39))
			{
				func_659(846829260, iParam1);
			}
			else
			{
				func_659(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_370((*Global_1835011)[33]->f_1) == 1)
				{
					func_659(1422779093, iParam1);
				}
				else
				{
					func_659(-1769536986, iParam1);
				}
			}
			else
			{
				func_659(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_659(352134789, iParam1);
			}
			else if (func_661(43))
			{
				func_659(260723113, iParam1);
			}
			else
			{
				func_659(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_659(-457958799, iParam1);
			}
			else
			{
				func_659(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_661(41))
			{
				func_659(-546824600, iParam1);
			}
			else
			{
				func_659(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_659(1297261593, iParam1);
			}
			else
			{
				func_659(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_659(2068484886, iParam1);
			}
			else if (func_661(49))
			{
				func_659(-1489080639, iParam1);
				func_659(-2102244050, iParam1);
			}
			else
			{
				func_659(-1863040467, iParam1);
			}
			break;
		case 51:
			func_659(-2055943209, iParam1);
			break;
		case 58:
			if (func_336((*Global_1347702)[23]->f_15, 1))
			{
				func_659(1650066845, iParam1);
			}
			else
			{
				func_659(151370023, iParam1);
			}
			func_659(1426057961, iParam1);
			func_659(476379584, iParam1);
			break;
		case 59:
			func_659(-1638117866, iParam1);
			break;
		case 62:
			func_659(199541730, iParam1);
			break;
		case 63:
			func_659(1703485804, iParam1);
			func_659(-800449045, iParam1);
			break;
		case 65:
			func_659(-1678210868, iParam1);
			func_659(-1448238026, iParam1);
			func_659(-1200864845, iParam1);
			func_659(1473511536, iParam1);
			break;
		case 66:
			func_659(-1774490051, iParam1);
			func_659(-34645921, iParam1);
			func_659(174027075, iParam1);
			func_659(-1155999, iParam1);
			func_660(1);
			break;
		case 67:
			func_659(701612593, iParam1);
			func_659(-1069631343, iParam1);
			func_659(1673428882, iParam1);
			break;
		case 68:
			func_659(-739133286, iParam1);
			func_659(-2130089358, iParam1);
			func_659(2056190391, iParam1);
			func_659(1941753817, iParam1);
			func_660(0);
			break;
		case 70:
			func_659(-1217555753, iParam1);
			break;
		case 71:
			func_659(697048821, iParam1);
			break;
		case 73:
			func_659(-553148661, iParam1);
			break;
		case 75:
			func_659(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_659(1414263863, iParam1);
			}
			else
			{
				func_659(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_659(1835465936, iParam1);
				func_659(523715611, iParam1);
			}
			else if (func_661(78))
			{
				func_659(1420338873, iParam1);
			}
			else
			{
				func_659(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_659(10180941, iParam1);
			}
			else if (func_661(79))
			{
				func_659(768420635, iParam1);
			}
			else
			{
				func_659(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_659(-383601523, iParam1);
			}
			else
			{
				func_659(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_659(1606472408, iParam1);
			}
			else
			{
				func_659(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_659(-203571927, iParam1);
			}
			else
			{
				func_659(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_659(729886222, iParam1);
			}
			else
			{
				func_659(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_659(-714816362, iParam1);
			}
			else
			{
				func_659(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_659(-932932179, iParam1);
				func_659(-1458537240, iParam1);
			}
			else
			{
				func_659(-1764383885, iParam1);
				func_659(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_659(1741466706, iParam1);
			}
			else
			{
				func_659(1405815775, iParam1);
			}
			break;
		case 94:
			func_659(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_659(1905280979, iParam1);
			}
			else
			{
				func_659(-1966245299, iParam1);
			}
			func_659(721468880, iParam1);
			break;
		case 99:
			func_659(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_659(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_659(-1117781095, iParam1);
				}
				else
				{
					func_659(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_659(141494548, iParam1);
			}
			else
			{
				func_659(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_659(-369525697, iParam1);
			}
			else if (func_661(101))
			{
				func_659(1595015219, iParam1);
			}
			else
			{
				func_659(-321486961, iParam1);
			}
			break;
		case 103:
			func_659(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_659(793460477, iParam1);
				func_659(-1610242176, iParam1);
			}
			else if (func_661(103))
			{
				func_659(1830897187, iParam1);
			}
			else
			{
				func_659(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_659(1528309077, iParam1);
			}
			else if (func_661(104))
			{
				func_659(1864966105, iParam1);
			}
			else
			{
				func_659(-103336013, iParam1);
			}
			break;
		case 108:
			func_659(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_659(-1123227713, iParam1);
				func_659(-889574341, iParam1);
			}
			else
			{
				func_659(2065385917, iParam1);
				func_659(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_659(-887421691, iParam1);
			}
			else if (func_661(109))
			{
				func_659(-1318117949, iParam1);
			}
			else
			{
				func_659(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_659(284822762, iParam1);
				}
				else
				{
					func_659(-1425017554, iParam1);
				}
			}
			else if (func_661(110))
			{
				if (&Global_1357515 == 0)
				{
					func_659(553087292, iParam1);
				}
				else
				{
					func_659(-1766870331, iParam1);
					func_659(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_659(-1980598735, iParam1);
			}
			else
			{
				func_659(-442732098, iParam1);
				func_659(1955756409, iParam1);
			}
			break;
		case 115:
			func_659(394303528, iParam1);
			func_659(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_659(1182403394, iParam1);
			}
			else
			{
				func_659(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_659(924445424, iParam1);
			}
			else
			{
				func_659(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_659(430755273, iParam1);
				func_659(-1473879802, iParam1);
			}
			else
			{
				func_659(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_659(73885747, iParam1);
			}
			else if (func_661(117))
			{
				func_659(1559707913, iParam1);
			}
			else
			{
				func_659(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_659(-2103887972, iParam1);
			}
			else if (func_661(118))
			{
				func_659(-435828462, iParam1);
			}
			else
			{
				func_659(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_659(2054486196, iParam1);
			}
			else
			{
				func_659(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_659(-570086056, iParam1);
			}
			else if (func_661(121))
			{
				func_659(32337856, iParam1);
			}
			else
			{
				func_659(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_659(813493663, iParam1);
			}
			else if (func_661(122))
			{
				func_659(-2132763590, iParam1);
			}
			else
			{
				func_659(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_659(-66240572, iParam1);
				func_659(1563075046, iParam1);
			}
			else
			{
				func_659(-787011772, iParam1);
				func_659(-1523377438, iParam1);
			}
			break;
		case 127:
			func_659(61020800, iParam1);
			break;
		case 129:
			func_659(428985222, iParam1);
			break;
		case 131:
			func_659(-1393851036, iParam1);
			break;
		case 133:
			func_659(1559531342, iParam1);
			break;
		case 134:
			func_659(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_659(-1374407408, iParam1);
				}
				else
				{
					func_659(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_659(-472672138, iParam1);
				}
				else
				{
					func_659(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_659(-1678710489, iParam1);
			}
			else
			{
				func_659(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_659(1717582460, iParam1);
			}
			else
			{
				func_659(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_659(1568112362, iParam1);
				func_659(1388317526, iParam1);
			}
			else if (func_661(136))
			{
				func_659(-1597534828, iParam1);
				func_659(-1207918353, iParam1);
			}
			else
			{
				func_659(-1940891082, iParam1);
				func_659(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_659(448334530, iParam1);
				func_659(2145375502, iParam1);
			}
			else
			{
				func_659(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_659(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_659(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_659(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_659(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_659(-66616327, iParam1);
			}
			else
			{
				func_659(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_659(1862916706, iParam1);
			}
			else if (func_661(147))
			{
				func_659(675105199, iParam1);
			}
			else
			{
				func_659(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_659(174409701, iParam1);
			}
			else if (func_661(148))
			{
				func_659(-1730895475, iParam1);
			}
			else
			{
				func_659(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_659(1295237052, iParam1);
			}
			else if (func_661(149))
			{
				func_659(-788577684, iParam1);
			}
			else
			{
				func_659(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_317(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_207(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_603(iParam0);
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
			iVar2 = func_283(iParam0);
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
			iVar3 = func_283(iParam0);
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

int func_318(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_664(iParam0);
	iVar3 = func_665(iParam0);
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
				iVar1 = func_296();
				func_343(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_666(iParam0, 1);
			if (func_667(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_668(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_669(1, iParam0);
				}
				else
				{
					func_670(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_319(int iParam0, int iParam1)
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

int func_320(int iParam0, int iParam1, int iParam2)
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

void func_321(bool bParam0)
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

void func_322(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_671(iParam0, iParam1, bParam2);
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

int func_323(int iParam0, int iParam1)
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

bool func_324(int iParam0)
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

void func_325(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_672(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_673(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_674(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_675(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_674(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_326(int iParam0)
{
	if (!func_202(iParam0))
	{
		return -1;
	}
	return func_676(func_579(iParam0));
}

int func_327(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_328()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_677(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

void func_329(int iParam0)
{
	if (func_493(iParam0, 1989861793))
	{
		iVar0 = func_678(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_679(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_680(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_681(iVar14, iVar1);
					if (iVar15 != iParam0 && func_471(iVar15, 0))
					{
						if (func_682(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_683(iVar1);
				if (bVar13)
				{
					func_684(iParam0);
				}
				else
				{
					func_181(306, 0);
				}
			}
		}
	}
}

void func_330()
{
	if (func_20() != -1)
	{
		return;
	}
	func_685();
	func_686();
	func_687();
	func_688();
	func_689();
	func_690();
	func_691();
}

void func_331(int iParam0)
{
	func_692(iParam0, 1, 1, -142743235, 1);
	if (func_693(iParam0))
	{
		func_694(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_696(func_695(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_697(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_698() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_699(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_699(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_700(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_700(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_700(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_700(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_700(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_700(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_700(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_700(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_700(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_701(iVar8, iVar0))
				{
					func_702(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_701(iVar8, iVar0))
		{
			func_702(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_332()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_701(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_698() == -2125499975 || func_698() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_702(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_702(&vVar2, iVar5, iVar0);
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

void func_333()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_677(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_334(int iParam0, bool bParam1)
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
			if ((func_336((*Global_1835011)[59]->f_1, 1) || func_336((*Global_1347702)[1]->f_15, 1)) || func_203((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_654(403634348, 1))
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

void func_335(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_696(iParam0, 1);
	func_703(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_703(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_704(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_703(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_703(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
	switch (func_307(iParam0))
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
		iVar0 = func_677(17);
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
		iVar0 = func_677(18);
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
		Var0 = { func_705(iParam1, 1, 0) };
		iParam3 = func_706(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_707(iParam3);
	return func_525(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_340()
{
	return _unlock_is_unlocked(99890643);
}

void func_341(int iParam0)
{
	if (!func_708(iParam0))
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
	if (!func_709(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_710(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_711(Global_40.f_9910[iParam1], 4);
}

void func_343(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_712(*iParam0);
	iVar1 = func_713(*iParam0);
	iVar2 = func_714(*iParam0);
	iVar3 = func_715(*iParam0);
	iVar4 = func_716(*iParam0);
	iVar5 = func_717(*iParam0);
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
	iVar6 = func_718(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_718(iVar1, iVar0);
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
	func_719(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_344(int iParam0, int iParam1, bool bParam2)
{
	if (!func_709(iParam0))
	{
		return;
	}
	if (!func_720(iParam1))
	{
		return;
	}
	if (func_721(iParam1, 1))
	{
		return;
	}
	iVar0 = func_710(iParam0);
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
		func_722(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_209(0, 0, 1))
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
		iVar0 = func_677(19);
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
		iVar0 = func_677(20);
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
		iVar0 = func_677(21);
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
		iVar0 = func_677(22);
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
		iVar0 = func_677(24);
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
		iVar0 = func_677(25);
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
		iVar0 = func_677(27);
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
		iVar0 = func_677(28);
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
	if (!func_471(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_472(iParam0);
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
		if (!func_723(iParam0, 1))
		{
			return false;
		}
	}
	return func_179(iParam0, 0, bParam2) >= iParam1;
}

void func_357(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_724(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_724(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_358()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_677(29);
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
		iVar0 = func_677(26);
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
		iVar0 = func_677(23);
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
		iVar0 = func_677(15);
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
		iVar0 = func_677(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_363()
{
	if (func_725() > 1)
	{
		func_726();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_181(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_181(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_181(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_181(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_181(452, 1);
		}
	}
}

bool func_364(int iParam0)
{
	return func_727(iParam0, 4, 1);
}

void func_365(int iParam0)
{
	func_728(iParam0, 4, 1);
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
	if (!func_202(iParam0))
	{
		return;
	}
	func_241(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_207(iParam0))
	{
		case 1:
			func_95(func_510(909007663, -587839005), 1);
			iVar0 = func_283(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_582(iVar0))
			{
				case 0:
					func_95(func_510(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_510(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_510(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_510(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_510(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_510(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_510(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_510(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_510(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_510(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_510(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_283(iParam0);
			if (func_312((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_312((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_312((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_510(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_510(909007663, -2049243343), 1);
				}
			}
			if (func_312((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_583(iVar1))
				{
					case 0:
						func_95(func_510(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_510(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_510(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_510(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_510(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_510(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_510(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_510(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_510(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_510(909007663, 532323983), 1);
				}
			}
			else if (func_312((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_312((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_312((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_510(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_510(909007663, -406093146), 1);
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
	else if (func_210(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_209(0, 0, 1) || func_729()) || func_129())
	{
		return;
	}
	iVar0 = func_213();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_730(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_731(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_731(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_732(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_376(0, -1);
	}
	if (iVar2 > 0)
	{
		func_733("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_734(1, 0);
	Global_1956575->f_4 = 1;
}

void func_369(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_294(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_735(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_370(int iParam0)
{
	if (!func_202(iParam0))
	{
		return -1;
	}
	return func_736(iParam0);
}

int func_371(int iParam0, int iParam1)
{
	if (!func_737(iParam0))
	{
		return 0;
	}
	if (!func_403())
	{
		return 0;
	}
	if (!func_738(iParam0, &iVar0, &iVar1))
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
	if (iVar2 >= func_739())
	{
		iVar2 = func_739();
	}
	iVar5 = func_740(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_579(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_579(iVar6) == 0)
			{
				return func_741(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_579(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_579(iVar6) == 0)
			{
				return func_741(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_741(iVar3, iVar4, iParam2, iVar0, 0);
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
			return func_742(1330954593, 0, -1);
		case 1:
			return func_742(1330954593, 0, -1);
		case 2:
			return func_742(1330954593, 0, -1) * 2;
		case 4:
			return func_742(1330954593, 0, -1);
		case 5:
			return func_742(1330954593, 0, -1);
		case 6:
			return func_742(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_742(1330954593, 0, -1) * 3;
		case 9:
			return func_742(1330954593, 0, -1) * 3;
		case 10:
			return func_742(1330954593, 0, -1) * 3;
		case 11:
			return func_742(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_374(int iParam0)
{
	if (!func_202(iParam0))
	{
		return cVar0;
	}
	switch (func_207(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_603(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_283(iParam0)]->f_3;
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
			if (func_207(Global_1879514->f_1) == 1)
			{
				func_371(5, 1);
			}
			else if (func_207(Global_1879514->f_1) == 8 && (func_312((*Global_1347702)[func_283(Global_1879514->f_1)]->f_12, 1) || func_312((*Global_1347702)[func_283(Global_1879514->f_1)]->f_12, 33554432)))
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
		func_743(&Global_0, 8);
	}
	if (!func_403() || func_20() != -1)
	{
		return;
	}
	func_743(&Global_0, 1);
}

int func_377()
{
	iVar0 = func_744(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_745(iVar0))
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
	vVar0 = { func_746(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_404(vVar0))
	{
		vVar0 = { func_746(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
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
	if (func_258(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_747(vParam0, iParam3);
}

void func_382()
{
	func_748();
	func_749();
	func_750();
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
	if (!func_751(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_752(&(Param0.f_10)))
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
			func_753(iParam16);
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
	if (func_594(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_754();
	Var1.f_3.f_3 = iVar0;
	if ((!func_755(Global_1347343->f_2) && !func_384(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_756();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_384(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_757();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_384(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_758();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_759(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_760(&Var1, "REPLAY_T_DEAD", 0, 1);
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
	func_761(uParam0);
	iVar0 = func_762(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_763(iParam1);
		}
		iVar0 = func_764(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_765(uParam0);
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
		iVar0 = func_765(uParam0);
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
	func_766(uParam0, 2);
}

void func_389(char[4] cParam0, int iParam1)
{
	func_767(&(cParam0->f_7375), iParam1);
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
	return func_603(func_768());
}

void func_392(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < func_405())
	{
		func_769(cParam0, iVar0);
		iVar0++;
	}
}

int func_393(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_394(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = uParam1;
}

void func_395(char[4] cParam0)
{
	func_775(cParam0, iLocal_203, iLocal_204, 126993, 127041, 127060, 127412, 129569, "UTP1_INT", 2, -1);
	func_775(cParam0, iLocal_204, iLocal_205, 129783, 129845, 129896, 130258, 131537, "UTP1_MCS_1", 10, -1);
	func_775(cParam0, iLocal_205, iLocal_206, 131637, 131767, 131926, 132519, 133392, "UTP1_MCS_1A", 4107, -1);
	func_775(cParam0, iLocal_206, iLocal_207, 133497, 133576, 133607, 133761, 134255, "", 9, -1);
	func_775(cParam0, iLocal_207, iLocal_208, 134324, 134359, 134378, 134499, 135102, "", 9, -1);
	func_775(cParam0, iLocal_208, iLocal_209, 135132, 135153, 135172, 135285, 135886, "", 9, -1);
	func_775(cParam0, iLocal_209, iLocal_210, 135918, 135982, 136057, 136447, 137723, "", 9, -1);
	func_775(cParam0, iLocal_210, 25, 137821, 137868, 137893, 138269, 140505, "", 9, -1);
	func_775(cParam0, 25, 26, 140657, 140695, 140804, 140886, 140917, "UTP1_EXT", 10, -1);
}

void func_396(char[4] cParam0)
{
	if (does_entity_exist(func_816(cParam0, -2081966149, 0)))
	{
		if (!func_266(Local_14.f_14))
		{
			Local_14.f_14 = { func_429() };
		}
		if (does_entity_exist(func_816(cParam0, -2081966149, 0)))
		{
			Local_14.f_16[0] = func_817(cParam0, -2081966149, 0);
		}
		if (func_166(&(Local_14.f_16[0]), 0))
		{
			set_ped_name_debug(&(Local_14.f_16[0]), "Sheriff");
			func_818(Local_14.f_14, &(Local_14.f_16[0]));
			func_819(&(Local_14.f_16[0]), Local_14);
		}
	}
	if (!is_entity_dead(func_816(cParam0, -572941403, 0)))
	{
		Local_14.f_16[2] = func_817(cParam0, -572941403, 0);
		if (func_166(&(Local_14.f_16[2]), 0))
		{
			set_ped_name_debug(&(Local_14.f_16[2]), "Deputy2");
			func_818(Local_14.f_14, &(Local_14.f_16[2]));
			func_819(&(Local_14.f_16[2]), Local_14);
		}
	}
	if (!is_entity_dead(func_816(cParam0, -1483559144, 0)))
	{
		Local_14.f_16[1] = func_817(cParam0, -1483559144, 0);
		if (func_166(&(Local_14.f_16[1]), 0))
		{
			set_ped_name_debug(&(Local_14.f_16[1]), "Deputy1");
			func_818(Local_14.f_14, &(Local_14.f_16[1]));
			func_819(&(Local_14.f_16[1]), Local_14);
		}
	}
	if (!is_entity_dead(func_816(cParam0, -2014377075, 0)))
	{
		iLocal_422 = func_817(cParam0, -2014377075, 0);
		if (func_166(iVar419, 0))
		{
			set_ped_name_debug(iVar419, "Duster");
		}
	}
}

void func_397(char[4] cParam0, int iParam1)
{
	cParam0->f_13105 = iParam1;
}

void func_398(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_399(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_400(var uParam0)
{
	if (!func_820(uParam0, 4))
	{
		if (func_821(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_822(uParam0) };
		if (!func_821(uParam0->f_860, 524288))
		{
			func_823(&(uParam0->f_872));
		}
		func_824(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_825(uParam0, 0f, 0f, 0f);
		func_826(uParam0);
		func_827(uParam0);
		func_828(uParam0, 0f, 0f, 0f, 0, 0);
		func_829(uParam0);
		func_767(uParam0, 4);
		func_830(uParam0, 0);
		func_831(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_401(int iParam0)
{
	if (func_832(iParam0))
	{
		return func_833(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_402(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_606(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_834(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_835(0, 0);
		if (func_708(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_836(1, 0);
		}
	}
	else
	{
		func_836(1, 0);
	}
	func_221(0);
	func_607(0, vParam0, uParam3);
	return 1;
}

bool func_403()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_404(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_405()
{
	return 26;
}

void func_406(int iParam0)
{
	if (!func_201(iParam0))
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

void func_407(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_837((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_408(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_838((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_409(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_839((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_410(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_840((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_411(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_841((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_412(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_842((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_413(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_414(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_843((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_415(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_844((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_416(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_845((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_417(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_846((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_418(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_847((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_419(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_848(&(cParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_849(&(cParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_638[iVar0] = iParam1;
	cParam0->f_638[iVar0]->f_2 = (cParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_420(char[4] cParam0, char[4] cParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_850(&(cParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_851(&(cParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1020[iVar0] = cParam1;
	cParam0->f_1020[iVar0]->f_2 = (cParam0->f_1020[iVar0]->f_2 || iParam2);
}

void func_421(char[4] cParam0, char[4] cParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_852(&(cParam0->f_5286), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_853(&(cParam0->f_5286));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_5286[iVar0] = cParam1;
	cParam0->f_5286[iVar0]->f_2 = (cParam0->f_5286[iVar0]->f_2 || iParam2);
}

void func_422(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_854(&(cParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_855(&(cParam0->f_819));
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

void func_423(char[4] cParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_856(iParam3, func_33(cParam0)) && !func_856(iParam3, func_35(cParam0)))
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
	iVar0 = func_857(&(cParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_858(&(cParam0->f_1126));
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
		func_859(&(cParam0->f_1126[iVar0]->f_2), 4);
	}
}

void func_424(char[4] cParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!func_856(iParam3, func_33(cParam0)) && !func_856(iParam3, func_35(cParam0)))
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
	iVar0 = func_860(&(cParam0->f_1126), iParam1);
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

void func_425(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_861(&(cParam0->f_5188), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_862(&(cParam0->f_5188));
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

void func_426(int iParam0, int iParam1)
{
	func_863(iParam0, iParam1);
}

void func_427(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_864((*uParam0)[iVar0]))
		{
			if (func_856((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_865((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_866((*uParam1)[iVar0]))
		{
			if (func_856((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_867((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_868((*uParam2)[iVar0]))
		{
			if (func_856((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_869((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_870((*uParam3)[iVar0]))
		{
			if (func_856((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_871((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_856(uParam4->f_1, iParam12))
	{
		func_872(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_873((*uParam5)[iVar0]))
		{
			if (func_856((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_874((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_873((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_875((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_856((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_876((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_877((*uParam6)[iVar0]))
		{
			if (func_856((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_878((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_879((*uParam7)[iVar0]))
		{
			if (func_856((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_880((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_881((*uParam8)[iVar0]))
		{
			if (func_856((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_882((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_883((*uParam9)[iVar0]))
		{
			if (func_856((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_884((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_885((*uParam10)[iVar0]))
		{
			if (func_856((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_886((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_887((*uParam11)[iVar0]))
		{
			if (func_856((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_888((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_428(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_889(uParam0, iParam1, sParam2))
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

struct<2> func_429()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_430(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_431(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_432(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_890(&(cParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_388(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_433(char[4] cParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(cParam0->f_8269)))
	{
		if (!func_121(cParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_891(cParam0->f_607)}, 3);
			if (func_892(&(cParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(cParam0->f_8269)))
				{
					func_893(&(cParam0->f_8269));
				}
				func_140(cParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_894(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_434(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_873((*uParam0)[iVar0]))
		{
			if (func_856((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_895((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_896((*uParam0)[iVar0]))
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

int func_435(char[4] cParam0)
{
	return cParam0->f_596;
}

bool func_436(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	if (func_120(cParam0, 2))
	{
		return true;
	}
	if (func_20() == 0)
	{
		return true;
	}
	if (does_entity_exist(cParam0->f_5408))
	{
		return true;
	}
	iVar0 = func_464(func_61(cParam0));
	if (!func_29())
	{
		vVar2 = { func_126(cParam0->f_607) };
	}
	if (func_897(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_437(char[4] cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(cParam0->f_5411))
	{
		if (!func_120(cParam0, 16777216))
		{
			if (!func_898(cParam0))
			{
				func_103(cParam0, 16777216);
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
				iVar12 = func_899(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(cParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == cParam0->f_5411)
						{
							func_103(cParam0, 16777216);
						}
						else if (func_900(iVar12, cParam0->f_5411, 5f, 1))
						{
							if (func_901(iVar12))
							{
								_0x0348469daa17576c(iVar12);
							}
							clear_ped_tasks_immediately(iVar12, false, true);
							_set_entity_coords_and_heading(iVar12, cParam0->f_5417, cParam0->f_5420, true, false, true);
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
	if (func_120(cParam0, 1))
	{
		return true;
	}
	vVar14 = { func_126(cParam0->f_607) };
	if (func_20() == 0)
	{
		request_model(func_125(cParam0), false);
		if (!has_model_loaded(func_125(cParam0)))
		{
			return false;
		}
		if (func_902(&iVar17, func_125(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			set_network_id_exists_on_all_machines(iVar17, true);
			iVar13 = net_to_ped(iVar17);
		}
	}
	else
	{
		if (((((cParam0->f_607 == 38 || cParam0->f_607 == 39) || cParam0->f_607 == 43) || cParam0->f_607 == 40) || cParam0->f_607 == 41) || cParam0->f_607 == 42)
		{
			func_103(cParam0, 1);
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
		if (func_120(cParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (func_120(cParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		iVar13 = func_899(&iVar29, &Var18);
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
			if (!func_120(cParam0, 16))
			{
				func_103(cParam0, 16);
			}
		}
	}
	if (does_entity_exist(iVar13))
	{
		cParam0->f_5411 = iVar13;
		cParam0->f_5412 = iVar13;
		func_903(cParam0, bParam1);
		if (!func_120(cParam0, 256))
		{
			if (!func_120(cParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_901(iVar13) || func_904(Global_35, iVar13, 1, 1) > 200f) && !func_404(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(iVar13, false);
						func_905(iVar13, vVar14, fParam5, 2, 1073741824);
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

void func_438(char[4] cParam0)
{
	if (!func_120(cParam0, 32) && func_128(cParam0, 3))
	{
		if (func_906(cParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(cParam0, 32);
		}
	}
	if (!func_120(cParam0, 32))
	{
		if (func_907(&(cParam0->f_609), cParam0->f_607))
		{
			func_103(cParam0, 32);
		}
	}
}

void func_439(char[4] cParam0)
{
	if (!func_120(cParam0, 128))
	{
		if (func_120(cParam0, 16384))
		{
			func_908(cParam0);
			if (func_909(cParam0))
			{
				func_51(&(cParam0->f_10792));
				func_910(cParam0, 2097152);
				func_276(cParam0, 16384);
				func_103(cParam0, 128);
			}
			return;
		}
		if (func_128(cParam0, 1))
		{
			return;
		}
		if (func_120(cParam0, 64))
		{
			func_908(cParam0);
			MemCopy(&Var0, {func_155(func_61(cParam0))}, 4);
			if (func_911(cParam0, Var0))
			{
				if (func_435(cParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(cParam0, 128);
			}
		}
		else
		{
			if (func_435(cParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(cParam0, 128);
		}
	}
}

void func_440(char[4] cParam0, int iParam1)
{
	cParam0->f_596 = iParam1;
}

bool func_441(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_912(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_436(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_437(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	if (func_120(cParam0, 4) && !_0x0ee3f0d7feccc54f())
	{
		iVar0 = 0;
	}
	if (!func_23(&(cParam0->f_8269)))
	{
		MemCopy(&cVar1, {func_891(cParam0->f_607)}, 3);
		if (func_913(&(cParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (func_128(cParam0, 1))
	{
		if (!func_26(&(cParam0->f_13115)))
		{
			func_27(&(cParam0->f_13115), 0);
		}
		if (func_914(&(cParam0->f_13115)) < 30f)
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

bool func_442(char[4] cParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_914(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_915()) && func_914(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(cParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(cParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(cParam0->f_607)));
			func_276(cParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_916(0, 0);
		func_276(cParam0, 4096);
		return true;
	}
	return false;
}

bool func_443(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (iVar0 == iLocal_211)
	{
		_0x513f8aa5bf2f17cf(func_169(10, 0), 50f, 0);
		iLocal_618 = 1;
	}
	iLocal_547 = func_917(3);
	func_40(0);
	_0x55f37f5f3f2475e1();
	_0x292ad61a33a7a485();
	_0x0d7fd6a55fd63aef(40, 3, 0);
	func_918(&uLocal_381);
	func_919(&uLocal_381, 0);
	func_570(514932331);
	if (iVar0 != iLocal_208)
	{
		_request_imap(1892122519);
		if (!_is_imap_active(1892122519))
		{
			return false;
		}
	}
	func_570(1399676951);
	if (iVar0 >= iLocal_205)
	{
		if (func_128(cParam0, 3) && !func_120(cParam0, 4))
		{
			func_183(2);
			func_184(1);
			func_184(4);
		}
		if (func_120(cParam0, 4))
		{
			if (!func_468(1) && !func_468(4))
			{
				func_183(2);
				func_184(1);
				func_184(4);
			}
		}
	}
	else
	{
		func_183(1);
		func_184(2);
		func_184(4);
	}
	if (iVar0 < iLocal_211)
	{
		if (!func_177())
		{
			return false;
		}
	}
	if (iVar0 < iLocal_205)
	{
		if (!does_entity_exist(&(iLocal_430[0])))
		{
			iLocal_430[0] = create_object(1077976463, func_169(3, 5), true, true, false, false, true);
			iLocal_430[1] = create_object(1077976463, func_169(9, 4), true, true, false, false, true);
			iLocal_430[2] = create_object(1077976463, -1814.215f, -362.8821f, 161.0893f, true, true, false, false, true);
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (does_entity_exist(&(iLocal_430[iVar1])))
				{
					freeze_entity_position(&(iLocal_430[iVar1]), true);
					set_entity_collision(&(iLocal_430[iVar1]), false, false);
					set_entity_visible(&(iLocal_430[iVar1]), false);
				}
				iVar1++;
			}
		}
	}
	func_920();
	_0xc6dcc2a3a8825c85(1);
	_0xf45e46deecf7df6e(12288, 524288, 0, -1, -1);
	func_921(iVar456, 0);
	_0x18262cafebb5fbe1(iVar456, 0, 524288, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iVar456, 0, 524288, 0, -1, -1, 2);
	func_922(iVar456, 0, 0);
	uLocal_417 = func_923(iVar504, 0, 0, 0);
	func_924();
	func_925();
	func_926(61, 3, 474);
	func_175(1);
	if (iVar0 > iLocal_205 && iVar0 < iLocal_211)
	{
		if (!func_927(-1623728698))
		{
			func_928(-1623728698, 0);
		}
	}
	else if (iVar0 == iLocal_203)
	{
		func_99(cParam0, 32);
	}
	func_929(&(Local_14.f_31[0]), func_235(7, 4), 2, 1073741824);
	iLocal_411[0] = func_930(func_169(0, 5), func_169(0, 4), func_169(0, 6), 15f, 0, 0);
	iLocal_411[1] = func_930(func_169(6, 2), func_169(6, 3), func_169(6, 4), 20f, 4f, 0);
	iLocal_411[2] = func_930(func_169(12, 0), func_169(12, 1), func_169(12, 2), 3f, 1f, 0);
	iLocal_411[3] = func_930(func_169(12, 5), func_169(12, 6), func_169(12, 7), 3f, 1f, 0);
	iLocal_411[4] = func_930(func_169(12, 8), func_169(12, 9), func_169(12, 10), 10f, 1f, 0);
	func_569(1207903970, 1, 0, 0, 0, 0, 0, 0);
	func_569(902070893, 1, 0, 0, 0, 0, 0, 0);
	func_931(1, 0);
	if (iVar0 >= iLocal_205)
	{
		func_191(1, 0);
	}
	func_933(cParam0, 158080);
	func_935(cParam0, 158166);
	func_151(cParam0, Global_35, 0, 0, 0, 0, 0);
	if (iVar0 != iLocal_203)
	{
		func_190(1821044729, 1);
		func_190(1514359658, 1);
		_0xd6c0a8c7c0b2f82c(player_id(), 0);
	}
	if (iVar0 >= iLocal_206 && iVar0 < iLocal_208)
	{
		if (func_936(0, 0))
		{
			set_vehicle_is_considered_by_player(&(Local_14.f_48[0]), false);
		}
	}
	if (are_strings_equal(&(cParam0->f_7375.f_800), "cutscene@UTP1_MCS_1"))
	{
		func_107(cParam0, 1);
		func_99(cParam0, 8);
	}
	func_145(cParam0, Global_35, "ARTHUR", 0);
	func_192(106479759, 1, 0);
	func_937(193);
	uLocal_418 = func_923(iVar497, 0, 0, 0);
	if (func_386() < 3)
	{
		_0x914071ff93af2692(player_id(), 1.15f);
	}
	else
	{
		_0x914071ff93af2692(player_id(), 1f);
	}
	if (func_128(cParam0, 3) || func_120(cParam0, 4))
	{
		func_938(iVar0);
	}
	if (bVar615)
	{
		_0x5a8b01199c3e79c3();
		iLocal_618 = 0;
	}
	return true;
}

void func_444(char[4] cParam0, int iParam1)
{
	func_66(iParam1);
	cParam0->f_10783 = iParam1;
}

bool func_445(char[4] cParam0)
{
	func_939(cParam0);
	func_940(cParam0);
	iVar0 = func_33(cParam0);
	iVar1 = func_35(cParam0);
	iVar2 = func_162(cParam0, iVar0);
	if (func_8(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_909(cParam0);
		}
	}
	func_941(cParam0);
	func_942(cParam0);
	func_943(cParam0);
	func_944(cParam0);
	func_945(cParam0);
	func_946(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_947(cParam0);
	}
	if ((func_33(cParam0) == 0 && iVar2 < 3) && func_290(cParam0) == 0)
	{
		func_439(cParam0);
	}
	if (func_121(cParam0, iVar0, 512))
	{
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
	}
	func_74(cParam0);
	switch (iVar2)
	{
		case 0:
			if (func_948(cParam0, iVar0, 0))
			{
				if (func_949(cParam0, func_33(cParam0)) != -1 && _0x62de46f061caa468() < func_949(cParam0, func_33(cParam0)))
				{
					_0xf008e0ba1fe1d644((func_949(cParam0, func_33(cParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(cParam0) == 25 || func_33(cParam0) == 26) && func_82(32768))
				{
					func_389(cParam0, 524288);
				}
				if (func_120(cParam0, 4))
				{
					if (!func_8(cParam0, 4))
					{
						func_950(cParam0, iVar0);
						func_99(cParam0, 4);
					}
					func_951(cParam0);
					func_952(cParam0, iVar0, 1);
				}
				else
				{
					func_952(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_912(cParam0))
			{
				if (func_953(cParam0))
				{
					if (func_8(cParam0, 4))
					{
						func_910(cParam0, 4);
					}
					func_952(cParam0, iVar0, 2);
				}
			}
			else if (func_954(cParam0) >= cParam0->f_13144)
			{
				if (func_8(cParam0, 4))
				{
					func_910(cParam0, 4);
				}
				func_952(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_948(cParam0, iVar0, 2))
			{
				if (!func_955(cParam0))
				{
					func_952(cParam0, iVar0, 4);
					if (func_956(cParam0, iVar0, iVar1))
					{
						func_952(cParam0, iVar0, 5);
					}
				}
				else
				{
					func_957(cParam0);
					func_952(cParam0, iVar0, 3);
					if (func_958(cParam0, iVar0))
					{
						func_952(cParam0, iVar0, 4);
						if (func_956(cParam0, iVar0, iVar1))
						{
							func_952(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_959(cParam0))
			{
				func_958(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_958(cParam0, iVar0))
			{
				func_952(cParam0, iVar0, 4);
				if (func_956(cParam0, iVar0, iVar1))
				{
					func_952(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_956(cParam0, iVar0, iVar1))
			{
				func_952(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_960(cParam0);
				func_961(cParam0, iVar0);
				func_962(cParam0);
				func_963(cParam0);
				if (func_121(cParam0, iVar1, 2))
				{
					if (func_964(cParam0, iVar1))
					{
						func_965(cParam0, iVar1);
					}
				}
			}
			if (func_948(cParam0, iVar0, 5))
			{
				if (func_948(cParam0, iVar0, 7))
				{
					if (!func_121(cParam0, func_33(cParam0), 67108864))
					{
						func_966(cParam0, func_33(cParam0));
					}
					func_967(cParam0, iVar1);
					func_940(cParam0);
					return true;
				}
				else
				{
					func_952(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(cParam0, func_33(cParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(cParam0, func_33(cParam0), 16))
					{
						do_screen_fade_in(0);
						func_968(0);
					}
					func_140(cParam0, func_33(cParam0), 4194304);
				}
				if ((func_969(get_player_index(), 0, 0, 1) && !func_120(cParam0, 8192)) && !func_121(cParam0, func_33(cParam0), 8))
				{
					func_47(1, 0);
					func_970("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_971(cParam0))
					{
						func_952(cParam0, iVar0, 6);
					}
				}
				if (func_8(cParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(cParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_910(cParam0, 268435456);
					}
				}
				if (func_120(cParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_276(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_960(cParam0);
				func_961(cParam0, iVar0);
				func_962(cParam0);
				func_963(cParam0);
				if (func_121(cParam0, func_35(cParam0), 2))
				{
					if (func_964(cParam0, func_35(cParam0)))
					{
						func_965(cParam0, func_35(cParam0));
					}
				}
			}
			if ((!func_969(get_player_index(), 0, 0, 1) || func_120(cParam0, 8192)) || func_121(cParam0, func_33(cParam0), 8))
			{
				if (func_948(cParam0, iVar0, 5))
				{
					if (func_972(cParam0))
					{
						func_952(cParam0, iVar0, 7);
					}
				}
				else
				{
					func_972(cParam0);
					func_952(cParam0, iVar0, 5);
				}
			}
			else
			{
				func_948(cParam0, iVar0, 5);
				func_973(cParam0);
			}
			break;
		case 7:
			if (func_948(cParam0, iVar0, 7))
			{
				if (!func_121(cParam0, func_33(cParam0), 67108864))
				{
					func_966(cParam0, func_33(cParam0));
				}
				func_967(cParam0, iVar1);
				func_940(cParam0);
				return true;
			}
			break;
		default:
			func_952(cParam0, iVar0, 7);
			break;
	}
	return false;
}

bool func_446(int iParam0)
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

int func_447(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	if (!func_446(iParam0))
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

void func_448(int iParam0)
{
	func_458(iParam0, 8, 0);
}

bool func_449(char[4] cParam0, int iParam1)
{
	return func_453(cParam0, iParam1, &uVar0);
}

void func_450(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_974(&iVar0);
}

void func_451(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_453(cParam0, iParam1, &iVar0))
	{
		return;
	}
	func_975(cParam0->f_5423[iVar0], iParam2);
}

void func_452(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_453(cParam0, iParam1, &iVar0))
	{
		return;
	}
	func_976(cParam0->f_5423[iVar0], iParam2);
}

bool func_453(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_265(cParam0->f_5423[iVar0]))
		{
			if (&cParam0->f_5423[iVar0] == iParam1)
			{
				*iParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_454(var uParam0)
{
	if (func_615(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_615(uParam0, 1024);
	if (func_615(uParam0, 128) || bVar0)
	{
		if (func_615(uParam0, 4096))
		{
			if (!func_615(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_976(uParam0, 2048);
				return;
			}
		}
		else if (func_615(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_975(uParam0, 2048);
		}
		if (func_615(uParam0, 512))
		{
			if (func_616(uParam0->f_10))
			{
				if (func_900(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_977(uParam0->f_10))
					{
						func_620(uParam0->f_10, 1);
						func_165(uParam0->f_10, 0);
					}
				}
				else if ((func_977(uParam0->f_10) && !bVar0) && !func_615(uParam0, 16384))
				{
					func_620(uParam0->f_10, 0);
					func_165(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_900(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_900(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_615(uParam0, 512))
	{
		if (func_616(uParam0->f_10))
		{
			if (func_977(uParam0->f_10))
			{
				func_620(uParam0->f_10, 0);
				func_165(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

void func_455(int iParam0)
{
	if (!func_456(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 != (*Global_1360165)[iParam0]->f_13 || func_978(iParam0, 36, 1))
	{
		func_979(iParam0, 36, 1);
		(*Global_1360165)[iParam0]->f_12 = (*Global_1360165)[iParam0]->f_13;
		func_980(iParam0, &((*Global_1360165)[iParam0]->f_2));
	}
}

bool func_456(int iParam0)
{
	return iParam0 > -1;
}

bool func_457(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_458(int iParam0, int iParam1, bool bParam2)
{
	if (!func_456(iParam0))
	{
		return;
	}
	func_981(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_459(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if ((!get_ped_config_flag(iParam0, 138, true) || _0xdc9273d95976ba22(iParam0) != 10f) || !_0x75df9e73f2f005fd(iParam0))
		{
			func_982(iParam0, 1);
			_0xc2266aa617668ad3(iParam0, 10f);
			_0xd05ad61f242c626b(iParam0, 10f);
			set_entity_invincible(iParam0, false);
			set_entity_only_damaged_by_player(iParam0, false);
			set_entity_can_be_damaged(iParam0, true);
		}
	}
	else if (get_ped_config_flag(iParam0, 138, true) || _0xdc9273d95976ba22(iParam0) != 1f)
	{
		func_982(iParam0, 0);
		_0xc2266aa617668ad3(iParam0, 1f);
		_0xd05ad61f242c626b(iParam0, 1f);
	}
}

bool func_460(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (!func_453(cParam0, iParam1, &iVar0))
	{
		return false;
	}
	return func_615(cParam0->f_5423[iVar0], iParam2);
}

Vector3 func_461(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1813.773f, -354.8461f, 160.4478f;
				case 1:
					return -1813.679f, -355.389f, 163.6536f;
				case 2:
					return -1808.898f, -347.3968f, 163.6554f;
				case 3:
					return -1810.538f, -348.5229f, 163.6476f;
				case 4:
					return -1822.306f, -364.3745f, 169.6291f;
				case 5:
					return -1800.038f, -344.6702f, 159.7456f;
				case 6:
					return -1809.817f, -350.0457f, 163.6478f;
				case 7:
					return -1812.156f, -355.251f, 160.5208f;
				case 8:
					return -1812.054f, -352.6197f, 163.6554f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1749.584f, -402.9584f, 154.2316f;
				case 1:
					return -1744.906f, -406.6212f, 154.3992f;
				case 2:
					return -1749.045f, -402.6424f, 154.2224f;
				case 3:
					return -1744.856f, -407.158f, 154.4173f;
				case 4:
					return -1747.635f, -398.534f, 155.2395f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -1762.395f, -405.5433f, 154.1404f;
				case 1:
					return -1749.666f, -408.0145f, 154.6645f;
				case 2:
					return -1735.46f, -404.622f, 155.7184f;
				case 3:
					return -1741.159f, -411.2201f, 154.3758f;
				case 4:
					return -1752.291f, -393.0516f, 155.2918f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -1804.373f, -351.9795f, 163.1484f;
				case 1:
					return -1814.2f, -355.52f, 160.4482f;
				case 2:
					return -1806.825f, -350.7441f, 163.6477f;
				case 3:
					return -1804.316f, -352.559f, 163.1483f;
				case 4:
					return -1812.822f, -347.2944f, 163.6478f;
				case 5:
					return -1814.66f, -353.7553f, 161.6977f;
				case 6:
					return -1812.636f, -354.2997f, 160.9477f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1814.64f, -356.2623f, 161.0889f;
				case 1:
					return -1814.41f, -356.0198f, 162.2935f;
				case 2:
					return -1797.403f, -382.8406f, 159.3275f;
				case 3:
					return -1813.641f, -353.5918f, 160.4332f;
				case 4:
					return -1815.216f, -356.1407f, 161.0891f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -1804.422f, -346.7898f, 163.2651f;
				case 1:
					return -1808.646f, -350.1887f, 163.6926f;
				case 2:
					return -1810.176f, -350.3041f, 163.6926f;
				case 3:
					return -1810.5f, -348.0499f, 163.6772f;
				case 4:
					return -1803.298f, -346.7176f, 163.2746f;
				case 5:
					return -1812.11f, -357.5787f, 161.0889f;
				case 6:
					return -1805.28f, -362.341f, 161.3531f;
				case 7:
					return -1794.735f, -355.2809f, 162.9959f;
				case 8:
					return -1802.284f, -342.7645f, 163.693f;
				case 9:
					return -1793.966f, -352.739f, 163.2068f;
				case 10:
					return -1808.105f, -355.2926f, 163.1484f;
				case 11:
					return -1810.702f, -359.3082f, 161.1404f;
				case 12:
					return -1815.85f, -353.4238f, 161.4478f;
				case 13:
					return -1808.079f, -360.2083f, 161.5687f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -1808.556f, -361.7526f, 161.1673f;
				case 1:
					return -1807.692f, -363.7803f, 161.1f;
				case 2:
					return -1756.919f, -430.2392f, 150.517f;
				case 3:
					return -1784.791f, -445.6319f, 161.5643f;
				case 4:
					return -1769.11f, -436.1713f, 154.1031f;
				case 5:
					return -1804.624f, -374.7531f, 160.2743f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -1788.771f, -369.8173f, 159.5233f;
				case 1:
					return -1788.94f, -369.9199f, 159.7419f;
				case 2:
					return -1787.991f, -370.5684f, 159.249f;
				case 3:
					return -1787.962f, -373.0992f, 158.684f;
				case 4:
					return -1774.966f, -435.1452f, 154.1029f;
				case 5:
					return -1803.689f, -327.7882f, 165.8295f;
				case 6:
					return -1803.852f, -327.6292f, 165.8487f;
				case 7:
					return -1749.487f, -401.6927f, 154.2653f;
				case 8:
					return -1744.382f, -405.5325f, 154.2997f;
				case 9:
					return -1765.644f, -405.9706f, 154.141f;
				case 10:
					return -1751.085f, -403.6436f, 154.4054f;
				case 11:
					return -1780.775f, -424.9837f, 154.4661f;
				case 12:
					return -1778.476f, -382.9955f, 157.5891f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -1287.072f, -631.0535f, 100.8174f;
				case 1:
					return -1578.527f, -477.3852f, 161.4919f;
				case 2:
					return -1290.11f, -627.6707f, 101.7293f;
				case 3:
					return -1290.11f, -627.6707f, 101.7293f;
				case 4:
					return -1618.398f, -457.2074f, 157.9716f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -1815.387f, -360.8473f, 161.0894f;
				case 1:
					return -1815.865f, -360.0997f, 161.8394f;
				case 2:
					return -1816.473f, -362.3885f, 162.2393f;
				case 3:
					return -1816.044f, -360.3945f, 161.8394f;
				case 4:
					return -1814.309f, -355.8114f, 161.8394f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -1318.63f, -610.3461f, 102.2582f;
				case 1:
					return -1269.236f, -615.8759f, 99.5285f;
				case 2:
					return -1067.953f, -583.1265f, 81.1341f;
				case 3:
					return -971.1827f, -743.1196f, 59.7138f;
				case 4:
					return -901.9628f, -765.4468f, 56.7475f;
				case 5:
					return -824.7247f, -798.1599f, 51.5801f;
				case 6:
					return -735.714f, -762.7f, 49.8605f;
				case 7:
					return -1042.808f, -671.0116f, 71.2608f;
				case 8:
					return -1043.269f, -669.1182f, 71.4283f;
				case 9:
					return -1042.137f, -674.4998f, 71.1752f;
				case 10:
					return -1362.24f, -585.425f, 108.597f;
				case 11:
					return -1617.796f, -472.6111f, 156.3815f;
				case 12:
					return -1548.42f, -532.9738f, 143.4006f;
				case 13:
					return -1787.848f, -372.6065f, 158.5675f;
				case 14:
					return -1794.612f, -370.5094f, 159.5802f;
				case 15:
					return -1792.649f, -368.2332f, 159.8957f;
				case 16:
					return -1487.608f, -559.8666f, 131.6555f;
				case 17:
					return -1448.492f, -530.8784f, 130.5176f;
				case 18:
					return -1445.146f, -532.3099f, 130.3277f;
				case 19:
					return -1432.451f, -548.5337f, 126.8713f;
				case 20:
					return -1308.399f, -613.6193f, 101.5063f;
				case 21:
					return -1306.141f, -612.8818f, 101.3948f;
				case 22:
					return -1354.508f, -584.1488f, 106.6317f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return -1782.419f, -426.5961f, 154.0688f;
				case 1:
					return -1779.311f, -427.0948f, 153.8523f;
				case 2:
					return -1769.557f, -432.8048f, 154.2611f;
				case 3:
					return -1770.879f, -432.1854f, 154.2511f;
				case 4:
					return -1768.18f, -432.469f, 154.2656f;
				case 5:
					return -1780.163f, -428.631f, 153.9544f;
				case 6:
					return -1779.39f, -426.8967f, 153.8568f;
				case 7:
					return -1772.427f, -431.1246f, 154.27f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1806.702f, -368.9856f, 160.3621f;
				case 1:
					return -1808.692f, -365.6202f, 162.8164f;
				case 2:
					return -1807.841f, -367.3331f, 162.0059f;
				case 3:
					return -1775.122f, -414.9171f, 151.297f;
				case 4:
					return -1763.089f, -413.4425f, 152.6218f;
				case 5:
					return -1794.233f, -384.2382f, 157.9785f;
				case 6:
					return -1800.935f, -385.5592f, 163.2285f;
				case 7:
					return -1798.399f, -384.767f, 159.9785f;
				case 8:
					return -1805.339f, -365.8388f, 160.9716f;
				case 9:
					return -1821.128f, -354.1825f, 165.377f;
				case 10:
					return -1812.969f, -360.3871f, 163.3091f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return -1794.113f, -378.8646f, 159.2405f;
				case 1:
					return -1796.521f, -372.8734f, 159.9423f;
				case 2:
					return -1802.635f, -357.5744f, 162.938f;
				case 3:
					return -1805.954f, -354.8525f, 163.1428f;
				case 4:
					return -1788.967f, -382.6338f, 159.3095f;
				case 5:
					return -1798.485f, -365.1676f, 160.9311f;
				case 6:
					return -1790.503f, -362.2423f, 162.0135f;
				case 7:
					return -1789.751f, -373.7653f, 158.5178f;
				case 8:
					return -1797.677f, -422.9366f, 155.7099f;
				case 9:
					return -1795.771f, -425.4655f, 155.026f;
				case 10:
					return -1812.099f, -357.5643f, 161.0887f;
				case 11:
					return -1807.329f, -364.2968f, 161.096f;
				case 12:
					return -1808.581f, -361.0047f, 161.2061f;
				case 13:
					return -1793.641f, -365.9047f, 160.4856f;
				case 14:
					return -1760.143f, -399.0591f, 155.6961f;
				case 15:
					return -1747.097f, -392.8438f, 155.4668f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return -1804.281f, -364.8093f, 161.0197f;
				case 1:
					return -1809.24f, -378.929f, 160.369f;
				case 2:
					return -1803.586f, -382.064f, 160.1946f;
				case 3:
					return -1818.497f, -395.6904f, 160.5707f;
				case 4:
					return -1816.451f, -396.0235f, 160.8152f;
				case 5:
					return -1807.526f, -379.742f, 160.3244f;
				case 6:
					return -1820.691f, -402.1756f, 160.557f;
				case 7:
					return -1820.789f, -400.1878f, 160.5602f;
				case 8:
					return -1819.451f, -397.2395f, 160.5776f;
				case 9:
					return -1814.863f, -396.4625f, 160.8155f;
				case 10:
					return -1822.655f, -410.6594f, 160.1426f;
				case 11:
					return -1829.562f, -402.7532f, 162.233f;
				case 12:
					return -1826.176f, -404.2608f, 160.2726f;
				case 13:
					return -1825.766f, -410.1132f, 160.6494f;
				case 14:
					return -1767.689f, -386.1926f, 156.7205f;
				case 15:
					return -1777.295f, -388.9702f, 156.3592f;
				case 16:
					return -1812.11f, -393.5378f, 160.5894f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return -1810.198f, -390.5602f, 160.5981f;
				case 1:
					return -1820.547f, -418.3764f, 159.4793f;
				case 2:
					return -1817.398f, -413.3887f, 159.4877f;
				case 3:
					return -1812.772f, -413.8622f, 159.1511f;
				case 4:
					return -1808.019f, -415.6179f, 157.6676f;
				case 5:
					return -1802.073f, -418.7621f, 156.2432f;
				case 6:
					return -1806.944f, -422.0954f, 156.9165f;
				case 7:
					return -1807.328f, -415.1069f, 157.3815f;
				case 8:
					return -1801.596f, -425.0937f, 155.7644f;
				case 9:
					return -1824.4f, -413.8246f, 159.9863f;
				case 10:
					return -1812.059f, -416.4705f, 158.8004f;
				case 11:
					return -1808.353f, -419.7393f, 157.506f;
				case 12:
					return -1806.274f, -420.9037f, 156.9083f;
				case 13:
					return -1814.785f, -417.5951f, 158.704f;
				case 14:
					return -1801.447f, -428.1404f, 157.7882f;
				case 15:
					return -1804.696f, -420.3261f, 156.9262f;
				case 16:
					return -1817.097f, -411.6303f, 160.7896f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return -1798.964f, -427.1283f, 155.261f;
				case 1:
					return -1796.072f, -420.2561f, 155.3345f;
				case 2:
					return -1789.003f, -434.2899f, 154.3794f;
				case 3:
					return -1785.574f, -422.099f, 154.4923f;
				case 4:
					return -1775.238f, -429.6086f, 153.645f;
				case 5:
					return -1783.192f, -425.0049f, 154.1152f;
				case 6:
					return -1781.399f, -430.0654f, 154.1093f;
				case 7:
					return -1778.349f, -416.2843f, 154.1447f;
				case 8:
					return -1776.005f, -412.8333f, 154.5071f;
				case 9:
					return -1823.054f, -410.6583f, 160.1387f;
				case 10:
					return -1784.532f, -427.3319f, 154.2089f;
				case 11:
					return -1775.284f, -417.0528f, 154.1704f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return -1776.533f, -416.0955f, 154.5738f;
				case 1:
					return -1766.282f, -408.6081f, 154.1735f;
				case 2:
					return -1771.628f, -397.415f, 155.1963f;
				case 3:
					return -1768.846f, -389.8588f, 155.8563f;
				case 4:
					return -1775.332f, -392.0414f, 155.8757f;
				case 5:
					return -1790.442f, -373.3145f, 159.1528f;
				case 6:
					return -1793.63f, -375.1375f, 158.8044f;
				case 7:
					return -1765.047f, -388.8543f, 156.8248f;
				case 8:
					return -1774.578f, -380.0332f, 162.1169f;
				case 9:
					return -1773.82f, -394.7346f, 155.841f;
				case 10:
					return -1778.206f, -389.9969f, 156.3674f;
				case 11:
					return -1766.874f, -399.2635f, 154.9372f;
				case 12:
					return -1754.851f, -397.8146f, 155.1397f;
				case 13:
					return -1767.812f, -394.2999f, 155.3483f;
				case 14:
					return -1755.461f, -401.2256f, 154.962f;
				case 15:
					return -1762.703f, -396.9781f, 154.9118f;
				case 16:
					return -1795.424f, -363.234f, 161.7932f;
				case 17:
					return -1798.964f, -372.0004f, 160.1136f;
				case 18:
					return -1785.019f, -377.9594f, 157.5345f;
				case 19:
					return -1767.741f, -402.2526f, 154.6969f;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return -1813.485f, -343.4384f, 163.6793f;
				case 1:
					return -1804.476f, -352.4791f, 163.15f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_462(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_463(vector3 vParam0, vector3 vParam3, float fParam6)
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

int func_464(int iParam0)
{
	if (!func_201(iParam0))
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

int func_465(int iParam0)
{
	if (!func_983(iParam0))
	{
		return 0;
	}
	if (!func_985(func_984(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_986(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_986(iParam0));
	return 1;
}

void func_466(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_983(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_467(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_987(iParam0, &iVar0, &iVar1);
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		func_988(iVar2, bParam1, 1);
		iVar2++;
	}
}

bool func_468(int iParam0)
{
	iVar0 = func_370(func_12(11));
	return func_399(iVar0, iParam0);
}

bool func_469(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8)
{
	switch (*iParam6)
	{
		case 0:
			_request_imap(iParam1);
			if (_is_imap_active(iParam1))
			{
				*iParam6 = 1;
			}
			break;
		case 1:
			if (!does_rayfire_map_object_exist(*uParam0))
			{
				*uParam0 = get_rayfire_map_object(vParam3, 1f, sParam2);
			}
			else
			{
				*iParam6 = 2;
			}
			break;
		case 2:
			if (does_rayfire_map_object_exist(*uParam0))
			{
				if (get_state_of_rayfire_map_object(*uParam0) == iParam7)
				{
					*iParam6 = 5;
				}
				else
				{
					*iParam6 = 3;
				}
			}
			break;
		case 3:
			if (does_rayfire_map_object_exist(*uParam0))
			{
				set_state_of_rayfire_map_object(*uParam0, iParam7);
				*iParam6 = 4;
			}
			break;
		case 4:
			if (does_rayfire_map_object_exist(*uParam0))
			{
				iVar0 = get_state_of_rayfire_map_object(*uParam0);
				if (iVar0 == iParam7 || iVar0 == iParam8)
				{
					*iParam6 = 5;
				}
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_470(int iParam0)
{
	if (!func_187(iParam0))
	{
		func_426(&uLocal_518, iParam0);
	}
}

bool func_471(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_472(int iParam0)
{
	if (!func_471(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_473(int iParam0, int iParam1)
{
	if (!func_471(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_472(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_493(iParam0, 1399091007))
	{
		func_989(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_474(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_990(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_992(&Var0, func_991(0));
	}
	if (!func_993(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_994(iVar14);
	return uVar15;
}

int func_475(bool bParam0)
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

bool func_476(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_995(iParam0) && func_996(iParam0))
		{
			func_997(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_477(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_998(iParam0, iParam1);
	Var0 = { func_705(iParam0, 0, 1) };
	iVar5 = func_999(iParam0, &Var0, 0, 0);
	iVar6 = func_1000(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_493(iParam0, -2051813666))
		{
			func_181(583, 1);
		}
		else
		{
			func_181(582, 0);
		}
	}
	if (func_1001(iParam0, &Var0, *iParam1, 0, 0))
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

void func_478(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_678(iParam0, -949239683))
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

bool func_479(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_480(iParam0) != 0;
}

int func_480(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1002())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1003(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_481(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_482(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1002())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_481(iVar0))
		{
			if (func_356(func_1003(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_483(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1004(48);
	func_376(0, -1);
}

bool func_484(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_336((*Global_1347702)[iParam0]->f_15, 1);
}

int func_485(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_486(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_487(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_336((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_488(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_284(iParam0))
	{
		return false;
	}
	return func_203((*Global_1347702)[iParam0]->f_15);
}

int func_489()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_356(func_1005(iVar1), 1, 0))
		{
			iVar0 = (iVar0 + 1);
		}
		iVar1++;
	}
	return iVar0;
}

void func_490(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_403() && (func_488(38) || func_484(38)))
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
			if (func_403() && (func_488(39) || func_484(39)))
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
			iVar9 = func_1006(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_403() && (func_488(41) || func_484(41)))
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
			if (func_403() && (func_488(49) || func_484(49)))
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
			iVar9 = func_1006(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1007(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1008(iParam0, iVar13, iVar14))
	{
	}
	if (func_1009(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1010(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1011(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1012(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1013(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_491(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_492(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_403() && (func_488(38) || func_484(38)))
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
			if (func_403() && (func_488(39) || func_484(39)))
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
			if (func_403() && (func_488(49) || func_484(49)))
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
		if (func_403() && (func_488(38) || func_484(38)))
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
			func_1014(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1014(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_731(_create_var_string(2, sVar0), _create_var_string(2, func_1015(func_486(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1014(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1014(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_403() && (func_488(39) || func_484(39)))
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
			func_1014(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1014(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_403() && (func_488(49) || func_484(49)))
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
			func_1014(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1014(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1014(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1014(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_493(int iParam0, int iParam1)
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

bool func_494(int iParam0, int iParam1)
{
	if (!func_471(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_495(int iParam0)
{
	if (!func_1016(iParam0))
	{
		return false;
	}
	return func_1017(iParam0);
}

void func_496(int iParam0)
{
	if (!func_1016(iParam0))
	{
		return;
	}
	func_1018(iParam0);
	func_1019(iParam0);
}

int func_497(int iParam0)
{
	if (!func_471(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_498(int iParam0, bool bParam1)
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
	if (func_471(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1020(iVar0) || func_122(iVar0))
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

int func_499(int iParam0, bool bParam1)
{
	if (!func_471(iParam0, 0))
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

void func_500(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_708(iParam0))
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

bool func_501(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_475(bParam0));
}

bool func_502(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_705(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1021((386 + iVar28), 1);
			if (func_1022(iParam0, &Var0, iVar5, 0))
			{
				if (func_1023(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1024(iParam0, Var0, iVar5, 0) };
					func_1025(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_501(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_503(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1026(iParam0, iParam1);
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

bool func_503(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_505(iParam0))
	{
		return false;
	}
	if (!func_501(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_504(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_499(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_500(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1027(iVar0);
			}
		}
		if (!func_1001(iParam0, &uVar1, 1, 0, 0))
		{
			func_997(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1028(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_502(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_502(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_502(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1029())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1030(iVar0))
				{
					func_502(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_502(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1031(Global_35, 2, 0, 1);
				if ((((func_708(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_495(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_708(iVar7) && func_495(24))
				{
					if (!func_502(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_502(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_502(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_181(480, 1);
	}
	return true;
}

bool func_505(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_506(int iParam0, int iParam1, int iParam2)
{
	if (!func_505(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_708(iVar4))
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
		func_541(func_1032(iParam0), func_540(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_336((*Global_1835011)[14]->f_1, 1))
			{
				func_181(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_501(0))
	{
		if (func_503(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_546(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_507(int iParam0)
{
	if ((iParam0 == -615217896 && !func_347()) || iParam0 != -615217896)
	{
		if (func_1033(Global_35, iParam0, &uVar0))
		{
			func_525(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_531();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_531();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_531();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_529();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_527();
			break;
	}
}

void func_508(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_527();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_528();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_529();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_530();
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
			func_531();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1034();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1035();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_509(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_510(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_511(int iParam0)
{
	bVar0 = func_493(iParam0, -2017733358);
	if (func_1036() < 3)
	{
		if (bVar0)
		{
			if (func_1038(func_1037(iParam0), iParam0))
			{
				func_541(79, func_540(func_1037(iParam0)), 1);
			}
			else
			{
				func_541(78, func_540(func_1037(iParam0)), 1);
			}
		}
		else
		{
			func_541(80, func_540(func_1039(iParam0)), 1);
		}
	}
}

bool func_512()
{
	if (((((func_1040(839908568, 400) || func_1040(-1134030454, 400)) || func_1040(623353496, 400)) || func_1040(-344413337, 400)) || func_1040(-1664948962, 400)) || func_1040(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_513(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_742(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_639(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_640(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_514(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_490(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_492(51, 0, 0, 0, 0, -1, 0);
			func_1041(8192);
			break;
		case 581047644:
			func_490(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_492(51, 0, 0, 0, 0, -1, 0);
			func_1041(524288);
			break;
		case -644199619:
			func_490(39, 0, 0, 0, 0, 0, 1, 0);
			func_492(39, 0, 0, 0, 0, -1, 0);
			func_1042(16);
			break;
		case 684296857:
			func_490(41, 0, 0, 0, 0, 0, 1, 0);
			func_492(41, 0, 0, 0, 0, -1, 0);
			func_1043(8);
			break;
		case 466137807:
			func_490(49, 0, 0, 0, 0, 0, 1, 0);
			func_492(49, 0, 0, 0, 0, -1, 0);
			func_1044(16);
			break;
		case -1087522507:
			func_490(43, 0, 0, -1791518714, func_1045(1), 0, -1, 0);
			func_1046(1);
			break;
		case -405829000:
			func_490(43, 0, 0, -2087881550, func_1045(2), 0, -1, 0);
			func_1046(2);
			break;
		case 378660860:
			func_490(43, 0, 0, 1908068621, func_1045(4), 0, -1, 0);
			func_1046(4);
			break;
		case 1566111097:
			func_490(43, 0, 0, 1611247019, func_1045(8), 0, -1, 0);
			func_1046(8);
			break;
		case 1276007140:
			func_490(43, 0, 0, 1319635688, func_1045(16), 0, -1, 0);
			func_1046(16);
			break;
	}
}

void func_515(int iParam0)
{
	if (func_1047() == 1)
	{
		if (func_484(39))
		{
			func_181(342, 0);
		}
		else
		{
			func_181(343, 0);
			func_1042(1);
		}
	}
	if (func_1047() >= 30)
	{
		func_181(344, 0);
	}
	func_490(39, 0, 0, 0, 0, 0, -1, 0);
	func_492(39, 0, 0, func_1047(), 30, 1, 0);
}

void func_516(int iParam0)
{
	if (func_1048() == 1)
	{
		if (func_484(49))
		{
			func_181(409, 0);
		}
		else
		{
			func_181(410, 0);
			func_1044(1);
		}
	}
	if (func_1048() >= 10)
	{
		func_181(411, 0);
	}
	func_490(49, 0, 0, 0, 0, 0, -1, 0);
	func_492(49, 0, 0, func_1048(), 10, 1, 0);
}

void func_517(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_181(437, 0);
			func_181(440, 0);
			func_1049(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_490(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_492(51, 0, 0, sVar0, func_1006(-949689219, 20), 1, 0);
			func_1041(1);
			func_192(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1049(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_490(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_492(51, 0, 0, sVar0, func_1006(-1248968496, 20), 1, 0);
			func_1041(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1049(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_490(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_492(51, 0, 0, sVar0, func_1006(1706369307, 20), 1, 0);
			func_1041(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1049(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_490(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_492(51, 0, 0, sVar0, func_1006(1520110311, 20), 1, 0);
			func_1041(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_181(438, 0);
			func_1049(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_490(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_492(51, 0, 0, sVar0, func_1006(-1992824800, 20), 1, 0);
			func_1041(32768);
			break;
		default:
			func_181(439, 0);
			break;
	}
}

void func_518()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_519(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_484(43))
		{
			if (iParam0 == 281887510)
			{
				func_181(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_181(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_181(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_181(400, 0);
			}
		}
		else if (func_493(iParam0, 412399755))
		{
			func_1050(-1791518714);
			if (func_1051() == 0)
			{
				func_376(0, 10);
				iVar1 = func_1052(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1053(iParam0) < func_1054(iParam0))
					{
						func_490(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_492(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_484(44))
		{
			if (iParam0 == -222563712)
			{
				func_181(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_181(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_181(401, 0);
			}
		}
		else if (func_493(iParam0, 709057512))
		{
			func_1050(-2087881550);
			if (func_1051() == 1)
			{
				func_376(0, 10);
				iVar1 = func_1052(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1053(iParam0) < func_1054(iParam0))
					{
						func_490(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_492(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_484(45))
		{
			if (iParam0 == 2116770557)
			{
				func_181(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_181(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_181(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_181(398, 0);
			}
		}
		else if (func_493(iParam0, -1478961327))
		{
			func_1050(1908068621);
			if (func_1051() == 2)
			{
				func_376(0, 10);
				iVar1 = func_1052(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1055(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1056(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1004(48);
					}
					if (func_1053(iParam0) < func_1054(iParam0))
					{
						func_490(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_492(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1053(iParam0) < func_1054(iParam0))
					{
						func_490(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_492(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_484(46))
		{
			if (iParam0 == 2085530337)
			{
				func_181(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_181(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_181(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_181(406, 0);
			}
		}
		else if (func_493(iParam0, -1238404098))
		{
			func_1050(1611247019);
			if (func_1051() == 3)
			{
				func_376(0, 10);
				iVar1 = func_1052(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1053(iParam0) < func_1054(iParam0))
					{
						func_490(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_492(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_484(47))
		{
			if (iParam0 == -1521783510)
			{
				func_181(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_181(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_181(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_181(403, 0);
			}
		}
		else if (func_493(iParam0, 1160548794))
		{
			func_1050(1319635688);
			if (func_1051() == 4)
			{
				func_376(0, 10);
				iVar1 = func_1052(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1053(iParam0) < func_1054(iParam0))
					{
						func_490(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_492(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_520(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1055(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1056(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1004(48);
		}
	}
}

void func_521(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_356(func_1057(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1058(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1059(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_522(int iParam0, int iParam1, int iParam2)
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
				func_513(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_513(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_513(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_513(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_513(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_513(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_513(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_513(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_513(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_513(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_513(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_513(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_513(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1060())
			{
				func_513(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_513(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_513(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_513(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_513(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_513(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_513(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_513(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_513(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_513(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_513(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_513(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_513(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_523(int iParam0)
{
	if (func_484(41))
	{
		func_181(363, 0);
	}
	else
	{
		func_181(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1061(-1865241121);
			func_1062(-642026005);
			func_1063(-642026005);
			func_376(0, 10);
			break;
		case -2108314374:
			func_1061(2117142684);
			func_1062(-940584364);
			func_1063(-940584364);
			func_376(0, 10);
			break;
		case -1193798153:
			func_1061(-1409326024);
			func_1062(1972645282);
			func_1063(1972645282);
			func_376(0, 10);
			break;
		case -787702678:
			func_1061(-641744968);
			func_1062(1667205433);
			func_1063(1667205433);
			func_376(0, 10);
			break;
		case -804542901:
			func_1061(-946988203);
			func_1062(1362715885);
			func_1063(1362715885);
			func_376(0, 10);
			break;
		case -1696275132:
			func_1061(-646136018);
			func_1062(1053540370);
			func_1063(1053540370);
			func_376(0, 10);
			break;
		case -161595323:
			func_1061(-955835837);
			func_1062(-1100103852);
			func_1063(-1100103852);
			func_376(0, 10);
			break;
		case -1114363619:
			func_1061(-179276075);
			func_1062(-1409869209);
			func_1063(-1409869209);
			func_376(0, 10);
			break;
		case -368407134:
			func_1061(-492711560);
			func_1062(-1760235357);
			func_1063(-1760235357);
			func_376(0, 10);
			break;
		case 1997759228:
			func_1061(1764383959);
			func_1062(-138366827);
			func_1063(-138366827);
			func_376(0, 10);
			break;
		case 1265573293:
			func_1061(317501533);
			func_1062(-1261163843);
			func_1063(-1261163843);
			func_376(0, 10);
			break;
		case -1030441283:
			func_1061(817753087);
			func_1062(-963523016);
			func_1063(-963523016);
			func_376(0, 10);
			break;
		case -1490884871:
			func_1061(576606016);
			func_1062(560825326);
			func_1063(560825326);
			func_376(0, 10);
			break;
		case -395458616:
			func_1061(814934957);
			func_1062(858269539);
			func_1063(858269539);
			break;
	}
}

void func_524(int iParam0, int iParam1)
{
	func_989(iParam0, iParam1, &uVar0);
}

int func_525(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_705(iParam1, 1, 0) };
		iParam3 = func_706(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1064(iParam1, iParam2, func_696(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1065(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_696(iParam3, 1)])
			{
				func_704(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1066(32768) && iParam1 != &Global_1946804->f_57[func_696(iParam3, 1)])
			{
				func_1067();
				func_704(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_704(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1068(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_704(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1069(0);
			func_1070(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_704(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_526(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1031(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1031(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1071("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1072(&Var3, iVar2, iVar0, iVar1))
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
						func_994(iVar0);
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

void func_527()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_528()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_529()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_530()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_531()
{
	func_1073();
	func_1074();
	func_1075();
}

void func_532(int iParam0, int iParam1, bool bParam2)
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

void func_533(int iParam0, bool bParam1)
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
	func_1014(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_534(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_535(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_536(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_537(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_538(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_539(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_540(int iParam0)
{
	if (!func_471(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_541(int iParam0, int iParam1, bool bParam2)
{
	func_554(iParam0, &iVar0, &iVar1);
	if (!func_555(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1076(iParam0, 1024))
	{
		return;
	}
	func_556(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_542(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_554(iParam0, &iVar0, &iVar1);
	if (!func_555(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1076(iParam0, 1024))
	{
		return;
	}
	func_556(iVar0, iVar1);
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

int func_543()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1002())
	{
		return func_544();
	}
	iVar4 = (func_1002() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1002())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1077(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1003(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_544()
{
	iVar0 = get_random_int_in_range(0, func_1002());
	return func_1003(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_545(int iParam0)
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

bool func_546(int iParam0, int iParam1, int iParam2)
{
	if (!func_471(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_705(iParam0, 0, 1) };
	Var5 = { func_1024(iParam0, Var0, Var0.f_4, 0) };
	return func_1078(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_547(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_497(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1079(81053684, 0) <= 0)
			{
				func_704(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_704(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1080(iParam0);
			if (func_1081(iVar0))
			{
				func_1082(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_704(30, iParam0, 0, 0, 0);
			}
			if (func_698() == -2125499975 || func_698() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_704(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_698() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_704(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1083(-525676072, 0))
			{
				if (func_1084(-525676072, &iVar1))
				{
					func_704(33, iVar1, 0, 0, 0);
				}
			}
			func_704(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1085(99217379))
		{
			func_525(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_496(24);
		if (func_526(&iVar2, 0))
		{
			func_502(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_548(int iParam0)
{
	if (func_493(iParam0, 943695443))
	{
		func_1086(0, iParam0);
	}
	else if (func_493(iParam0, -2096528786))
	{
		func_1086(1, iParam0);
	}
	else if (func_493(iParam0, -1094167013))
	{
		func_1086(2, iParam0);
	}
	else if (func_493(iParam0, 1936654645))
	{
		func_1086(3, iParam0);
	}
	else if (func_493(iParam0, 1306489306))
	{
		func_1086(4, iParam0);
	}
	else if (func_493(iParam0, 435762317))
	{
		func_1086(5, iParam0);
	}
	else if (func_493(iParam0, 1259363210))
	{
		func_1086(6, iParam0);
	}
	else if (func_493(iParam0, 881398259))
	{
		func_1086(7, iParam0);
	}
	else if (func_493(iParam0, -541549214))
	{
		func_1086(8, iParam0);
	}
	else if (func_493(iParam0, 130796156))
	{
		func_1086(-1, iParam0);
	}
}

int func_549(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1087(&Var4, 1356624740);
	return func_1088(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_550(int iParam0)
{
	if (!func_471(iParam0, 0))
	{
		return Var0;
	}
	if (func_493(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_493(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_493(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_493(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_551(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_336((*Global_1835011)[4]->f_1, 1))
				{
					func_181(109, 1);
				}
			}
			break;
	}
}

void func_552(int iParam0, char* sParam1)
{
	sVar0 = func_1090(func_1089(0));
	func_724(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1091(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_553(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_471(iParam0, 0))
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
	if (!func_1092())
	{
		func_1093(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1094(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1094(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_494(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_472(iParam0);
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
	else if (!func_1095(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1096(_create_var_string(10, &cVar2, _create_var_string(0, func_540(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_493(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_540(iParam0));
	}
	func_724(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_554(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_555(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1097(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1098(iParam0))
	{
		return false;
	}
	if (func_1099(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1076(iParam0, 1)) || func_82(32768))
	{
		if (!func_1076(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1100())
	{
		return false;
	}
	return true;
}

void func_556(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_557(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_558()
{
	if (func_20() == 0)
	{
		return -1;
	}
	iVar0 = func_213();
	if (iVar0 == -1)
	{
		return 150000;
	}
	if (iVar0 <= 1)
	{
		return 30000;
	}
	if (iVar0 == 2 && !func_1101(24))
	{
		return 50000;
	}
	return 150000;
}

int func_559()
{
	return Global_1934266->f_4;
}

void func_560(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			_0x74bcceb233ad95b2(-1743273232, iParam1);
			break;
		case 1:
			_0x74bcceb233ad95b2(-948016518, iParam1);
			break;
		case 2:
			_0x74bcceb233ad95b2(580522491, iParam1);
			break;
		case 3:
			_0x74bcceb233ad95b2(1176390239, iParam1);
			break;
		case 4:
			_0x74bcceb233ad95b2(1791198853, iParam1);
			break;
		default:
			break;
	}
}

void func_561(int iParam0)
{
	iVar0 = func_1102(iParam0);
	switch (iParam0)
	{
		case 0:
			_0x74bcceb233ad95b2(-1047841819, iVar0);
			break;
		case 1:
			_0x74bcceb233ad95b2(-1349566727, iVar0);
			break;
		case 2:
			_0x74bcceb233ad95b2(613491521, iVar0);
			break;
		case 3:
			_0x74bcceb233ad95b2(1452147132, iVar0);
			break;
		case 4:
			_0x74bcceb233ad95b2(-885198919, iVar0);
			break;
		default:
			break;
	}
}

bool func_562(int iParam0, int iParam1)
{
	if (!func_557(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_358[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1058888->f_42266[iParam0]->f_5 && iParam1) != 0;
}

void func_563(int iParam0, bool bParam1)
{
	if (!func_557(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1103(iParam0, 4);
	}
	else
	{
		func_1104(iParam0, 4);
	}
	func_1105(iParam0, bParam1);
}

void func_564(int iParam0, int iParam1)
{
	if (!func_202(iParam0))
	{
		return;
	}
	func_1106(iParam0, iParam1);
}

void func_565(int iParam0, int iParam1)
{
	func_1107(iParam0, iParam1);
}

void func_566(int* iParam0, bool bParam1, bool bParam2)
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
	if (bParam1)
	{
		if (is_entity_attached(*iParam0))
		{
			detach_entity(*iParam0, true, true);
		}
	}
	if (bParam2)
	{
		_mark_object_for_deletion(*iParam0);
	}
	else
	{
		set_object_as_no_longer_needed(iParam0);
	}
}

void func_567(int* iParam0)
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

int func_568(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case -4613767:
			return 0;
		case 1567162363:
			return 1;
		case 456471693:
			return 2;
		case -1772963474:
			return 3;
		case 1881496386:
			return 4;
		case 711768994:
			return 5;
		case -440834066:
			return 6;
		case -1363847832:
			return 7;
		case 967769300:
			return 8;
		case -1436873944:
			return 9;
		case -1585669139:
			return 10;
		case 16791368:
			return 11;
		case 1452922822:
			return 12;
		case 549538301:
			return 13;
		case 974698954:
			return 14;
		case 445881012:
			return 15;
		case -2043891857:
			return 16;
		case 419656993:
			return 17;
		case -1732457315:
			return 18;
		case 1794318026:
			return 19;
		case 2035159966:
			return 20;
		case 770832805:
			return 21;
		case -1109814766:
			return 22;
		case -1080317735:
			return 23;
		case -1075550363:
			return 24;
		case 2138576151:
			return 25;
		case 1180954297:
			return 26;
		case 783603394:
			return 27;
		case -170458336:
			return 29;
		case 1285083821:
			return 30;
		case -1840907462:
			return 31;
		case 756710130:
			return 32;
		case 388370024:
			return 33;
		case 1092296123:
			return 34;
		case 467491346:
			return 35;
		case -1391584612:
			return 36;
		case -152111346:
			return 37;
		case 1447551317:
			return 38;
		case 153136092:
			return 39;
		case 1304405732:
			return 40;
		case 1074984055:
			return 41;
		case 1087476368:
			return 50;
		case -1768057340:
			return 51;
		case 1218874593:
			return 42;
		case -1438443836:
			return 52;
		case -2036340415:
			return 43;
		case 803939643:
			return 44;
		case -632496195:
			return 53;
		case -965943619:
			return 45;
		case 283532073:
			return 46;
		case -69067491:
			return 47;
		case -1864895118:
			return 48;
		case -1929806571:
			return 54;
		case 1162337247:
			return 28;
		case -698525417:
			return 55;
		case -1149739894:
			return 56;
		case 380507325:
			return 49;
		case 407796241:
			return 57;
		case -152267914:
			return 58;
		case -1675443320:
			return 59;
		case 1940341639:
			return 60;
		case 1846596114:
			return 61;
		case 907708501:
			return 62;
		case 1825644981:
			return 64;
		case 2065937607:
			return 65;
		case -211317417:
			return 66;
		case 1801307910:
			return 67;
		case -4118897:
			return 68;
		case 1853610692:
			return 69;
		case -1574644415:
			return 70;
		case 2133055515:
			return 71;
		case -1413401932:
			return 72;
		case 801090761:
			return 73;
		case 2131218644:
			return 74;
		case 1708823660:
			return 75;
		case 7976942:
			return 76;
		case 2111120505:
			return 77;
		case 176893118:
			return 78;
		case 602306665:
			return 63;
		case 1179148161:
			return 79;
		case 547412068:
			return 80;
		case -1539748801:
			return 81;
		case -1605119912:
			return 82;
		case -884464063:
			return 83;
		case -1420970720:
			return 84;
		case 1017024547:
			return 85;
		case -1204497306:
			return 86;
		case -1621069480:
			return 87;
		case -458604261:
			return 88;
		case -923391614:
			return 89;
		case -689247089:
			return 90;
		case 44049568:
			return 91;
		case 1350259552:
			return 92;
		case -61661574:
			return 93;
		case -725338054:
			return 94;
		case -770123507:
			return 95;
		case 1322486734:
			return 96;
		case -460939553:
			return 97;
		case -1451863552:
			return 98;
		case 713715980:
			return 101;
		case -31204969:
			return 102;
		case -1720064790:
			return 103;
		case 173833068:
			return 99;
		case -1681004136:
			return 100;
		case -532172775:
			return 104;
		case -739067737:
			return 105;
		case -1203133835:
			return 106;
		case -1947411598:
			return 107;
		case -1049753365:
			return 108;
		case -1298718762:
			return 109;
		case -595083064:
			return 110;
		case 884833917:
			return 111;
		case 2141950651:
			return 112;
		case -1437650729:
			return 113;
		case 672925454:
			return 126;
		case 846062774:
			return 127;
		case 1369756178:
			return 120;
		case -736172423:
			return 121;
		case 1597070291:
			return 122;
		case -159501564:
			return 124;
		case -1438809608:
			return 123;
		case -102682392:
			return 125;
		case -81068979:
			return 114;
		case 227618407:
			return 115;
		case 2106043438:
			return 116;
		case -1868356491:
			return 129;
		case -1380256064:
			return 117;
		case -2118469183:
			return 118;
		case -558997834:
			return 119;
		case 658339366:
			return 128;
		default:
			break;
	}
	return -1;
}

void func_569(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_1108(iParam0, 0, 0);
	if (func_1109(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_1110(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_1111(iParam0, 1);
			}
			else
			{
				func_1112(iParam0, 1);
			}
		}
		else
		{
			func_1113(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_1114())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_570(int iParam0)
{
	iVar0 = func_575(iParam0, 1);
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

void func_571()
{
	func_194(-939420910);
	func_194(-1187950766);
	func_194(356365161);
	func_194(753127042);
	func_194(-2038424081);
	func_194(1884271742);
	func_194(459290420);
}

void func_572()
{
	func_194(704802028);
	func_194(588987611);
	func_194(2008888900);
	func_194(1649996811);
	func_194(227918160);
	func_194(168171957);
	func_194(1193080109);
	func_194(-491981251);
	func_194(-639037538);
	func_194(-618620429);
}

bool func_573(int iParam0)
{
	iVar0 = func_575(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_574(bool bParam0, float fParam1)
{
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_1115();
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
	if (func_1116(&(Global_1934765->f_318[iVar0]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

int func_575(int iParam0, int iParam1)
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

void func_576(int iParam0)
{
	if (iParam0 > 150)
	{
		iParam0 = 150;
	}
	if (iParam0 > (Global_1934765->f_286 - 150))
	{
	}
	if (func_1117(&iVar0))
	{
		if (Global_1934765->f_275[iVar0]->f_1 != iParam0)
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + Global_1934765->f_275[iVar0]->f_1);
			Global_1934765->f_275[iVar0]->f_1 = iParam0;
			Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
			_0x2f9ac754fe179d58(func_1118());
		}
		return;
	}
	iVar0 = func_1119();
	if (iVar0 == -1)
	{
		return;
	}
	Global_1934765->f_275[iVar0]->f_1 = iParam0;
	Global_1934765->f_275[iVar0] = get_id_of_this_thread();
	Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
	_0x2f9ac754fe179d58(func_1118());
}

bool func_577(int iParam0)
{
	return func_1120(iParam0, 2);
}

int func_578(int iParam0)
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

int func_579(int iParam0)
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

int func_580(int iParam0)
{
	return iParam0 & 31;
}

bool func_581()
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

int func_582(int iParam0)
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

int func_583(int iParam0)
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

void func_584(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_585()
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

int func_586(int iParam0)
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

void func_587(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_588(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1121(iParam0);
	}
	else
	{
		func_1122(iParam0, iParam1);
	}
	func_1123();
}

bool func_589(int iParam0)
{
	if (!func_202(iParam0))
	{
		return false;
	}
	switch (func_207(iParam0))
	{
		case 1:
			switch (func_283(iParam0))
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
			switch (func_283(iParam0))
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

void func_590(int iParam0)
{
	iVar2 = func_475(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_497(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1125(func_1124(iParam0), 6);
}

void func_591(int iParam0)
{
	iVar2 = func_475(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_497(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1126(func_1124(iParam0), 6);
}

int func_592(int iParam0)
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

int func_593(int iParam0)
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
	func_1127(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_594(int iParam0)
{
	return iParam0 != 0;
}

bool func_595(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_596(int iParam0, var uParam1)
{
	if (!func_595(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1128(iParam0, *uParam1, 0);
	func_1129(uParam1);
	Global_1935183->f_24 = 1;
}

void func_597(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_598(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_650() - fParam1);
	func_1130(uParam0, 1);
	func_1131(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_599(var uParam0)
{
	return func_231(*uParam0, 2);
}

int func_600()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_601(bool bParam0)
{
	if (func_1132())
	{
		Global_1357509 = 1;
	}
	if (func_1133(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

struct<4> func_602(int iParam0, int iParam1)
{
	Var0 = { func_461(iParam0, iParam1) };
	Var0.f_3 = func_1134(iParam0, iParam1);
	return Var0;
}

int func_603(int iParam0)
{
	if (func_207(iParam0) == 1)
	{
		return func_283(iParam0);
	}
	return -1;
}

int func_604(int iParam0)
{
	if (func_207(iParam0) == 8)
	{
		return func_283(iParam0);
	}
	return -1;
}

char[] func_605(int iParam0)
{
	if (!func_284(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_606(int iParam0, bool bParam1)
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
		func_1135(1, bParam1);
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
		(*Global_2621440)[iParam0]->f_9.f_14 = func_296();
	}
}

void func_607(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_381(vParam1, 1);
}

bool func_608(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_609(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_610(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_611(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_612(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_613(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_614()
{
	return Global_1109400->f_245;
}

bool func_615(var uParam0, int iParam1)
{
	return func_399(uParam0->f_64, iParam1);
}

bool func_616(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_617(int iParam0)
{
	return func_727(iParam0, 16, 1);
}

void func_618(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_453(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_1136(cParam0, get_object_index_from_entity_index(iParam1)))
	{
		_0x4465c3d1475bd3fd(get_entity_model(iParam1));
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

void func_619(int iParam0)
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

void func_620(int iParam0, bool bParam1)
{
	if (!func_456(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_457(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_458(iParam0, 1, 0);
		}
	}
	func_458(iParam0, 16, bParam1);
}

void func_621(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_616(iParam0))
	{
		return;
	}
	if (func_617(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_1137(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_620(iParam0, 0);
	func_458(iParam0, 4, 0);
	func_448(iParam0);
	func_1138(iParam0);
	func_979(iParam0, 37, 1);
	bVar0 = func_166(Global_1360165[iParam0], 0);
	iVar1 = func_1139(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_978(iParam0, 64, 1))
	{
		func_979(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_979(iParam0, 33, 1);
		func_979(iParam0, 34, 1);
		func_1140(iParam0, 1056964608, -1, 1061158912);
		func_1141(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_1137(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_1137(iParam0, 35, 1);
			if (bParam8)
			{
				func_1137(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1142(iParam0, 0);
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
		func_979(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_1137(iParam0, 33, 1);
		func_1141(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_653(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_1137(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_1143(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_978(iParam0, 45, 1))
	{
		func_979(iParam0, 45, 1);
	}
	func_1144(iParam0, 16, 1);
	func_979(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_166(func_1145(iParam0), 0))
		{
			func_1146(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_622(int iParam0)
{
	iParam0 = func_277(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_273(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_629(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_629(iParam0);
	}
}

bool func_623(int iParam0)
{
	iParam0 = func_277(iParam0);
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

void func_624(int iParam0)
{
	iParam0 = func_277(iParam0);
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

void func_625(int iParam0)
{
	iParam0 = func_277(iParam0);
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

bool func_626(int iParam0)
{
	if (!func_1147(iParam0))
	{
		return false;
	}
	if (!func_340())
	{
		return true;
	}
	return false;
}

void func_627(int iParam0)
{
	iParam0 = func_277(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_630(iParam0))
	{
		return;
	}
	iVar0 = func_227(iParam0);
	func_1148(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_626(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1149(iParam0, 0);
	func_629(iParam0);
}

bool func_628(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_272(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_629(int iParam0)
{
	iParam0 = func_277(iParam0);
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

bool func_630(int iParam0)
{
	iParam0 = func_277(iParam0);
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

void func_631(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_227(iParam0);
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
	if (func_1150(iParam0, 64))
	{
		func_624(iParam0);
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
	bVar3 = func_495(42);
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
				func_1151(&((*Global_1900383)[iParam0]->f_27));
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
		func_624(iParam0);
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
		if (func_1152(1) < 1)
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
		func_1153(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1150(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1154(iParam0);
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
	fVar15 = func_1155(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1156(iParam0))
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
		func_1157((*Global_1900383)[iParam0]->f_26);
		func_1158((*Global_1900383)[iParam0]->f_26);
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
	if (func_901(iVar0) && !bVar9)
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
	iVar21 = func_1152(iParam0);
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

int func_632(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_633(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_634(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_635(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_636(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_637(int iParam0)
{
	iParam0 = func_277(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_630(iParam0))
	{
		return false;
	}
	iVar0 = func_227(iParam0);
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

void func_638(int iParam0)
{
	iParam0 = func_277(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_630(iParam0))
	{
		return;
	}
	iVar0 = func_227(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_639(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_724(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_640(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1159())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_724(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1160(iVar0);
			func_1161(iVar0, 0, 0);
		}
		func_724(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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

bool func_641(int iParam0)
{
	if (!func_258(iParam0))
	{
		return false;
	}
	return func_262(iParam0, 67108864);
}

void func_642(int iParam0)
{
	StringCopy(&cVar0, func_1162(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1163(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_643(int iParam0)
{
	StringCopy(&cVar0, func_1162(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1163(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_644(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_645(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_646(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_647(int iParam0)
{
	if (!func_611(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_648(int iParam0)
{
	if (func_611(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_649(int iParam0)
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

float func_650()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_651(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1164(iParam0) == 1 && bParam7)
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

int func_652(int iParam0)
{
	if (!func_456(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_653(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_654(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1165(iParam0);
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

int func_655(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_668(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_656(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_657(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_658()
{
	return Global_40.f_11095.f_35;
}

void func_659(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1166(iParam0, 0);
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
		func_660(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_660(int iParam0)
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
			func_1166(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1167(1);
	}
}

bool func_661(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_662()
{
	iVar0 = func_1168((*Global_1347702)[9]->f_15);
	iVar1 = func_1168((*Global_1835011)[69]->f_1);
	if (func_1169(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_663(int iParam0)
{
	if (!func_201(iParam0))
	{
		return false;
	}
	return func_336((*Global_1835011)[iParam0]->f_1, 1);
}

int func_664(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1170(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1171(iVar6);
	}
	return iVar5;
}

int func_665(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1172(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_666(int iParam0, bool bParam1)
{
	func_1173(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_667(int iParam0)
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

void func_668(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_666(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_669(2, *uParam0);
		}
		else
		{
			func_670(2, *uParam0);
		}
	}
	func_1174(uParam0);
}

void func_669(int iParam0, int iParam1)
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

void func_670(int iParam0, int iParam1)
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

void func_671(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1175(iParam0, iParam1, bParam2);
}

int func_672(int iParam0)
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

int func_673(int iParam0)
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

void func_674(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1176();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1177(iParam0);
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
	if (func_495(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1029())
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
	Global_40.f_11095.f_35 = func_320(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1176();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1178(iVar1);
		func_1180(func_1179(), 0, 4000);
		func_1181(Global_40.f_11095.f_35);
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
		func_1182(0);
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
				if (iParam0 > func_673(14))
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
					sParam4 = func_1183(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_724(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_724(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_673(4))
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
					sParam4 = func_1183(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_724(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_724(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
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

void func_675(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_676(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_677(int iParam0)
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

int func_678(int iParam0, int iParam1)
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

struct<10> func_679(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_680(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_681(int iParam0, int iParam1)
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

bool func_682(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_471(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1184(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1184(iParam0, Var2, 1))
				{
					if (func_1185(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1185(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_181(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_209(0, 0, 1))
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

int func_683(int iParam0)
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

void func_684(int iParam0)
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
		func_181(iVar0, 0);
	}
}

void func_685()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1186(0);
			_unlock_set_unlocked(-121456797, false);
			func_1187();
		}
		return;
	}
	if (!func_336((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1188();
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
	func_1186(1);
}

void func_686()
{
	if (!func_336((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_180(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_687()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1189(0);
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
	func_1189(1);
}

void func_688()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1190(15000, 0, 0, 0, 1);
			func_1189(0);
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
	func_294(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1189(1);
}

void func_689()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_356(1191437462, 1, 0) && !func_203((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_180(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1191(1))
			{
				func_537(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_356(1119149048, 1, 0) && !func_203((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_180(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1191(2))
			{
				func_537(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1191(4))
		{
			func_537(4);
		}
		if (func_1191(0))
		{
			func_1192(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_356(1191437462, 1, 0))
			{
				func_692(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_356(1119149048, 1, 0))
			{
				func_692(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1191(1))
		{
			func_1192(1);
		}
		if (func_1191(2))
		{
			func_1192(2);
		}
		if (func_1191(4))
		{
			func_1192(4);
		}
		if (!func_1191(0))
		{
			func_537(0);
		}
	}
}

void func_690()
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
	Var1 = { func_1193() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_500(127400949);
		if (func_502(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1193() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1194(-2055673461, Var1, 1423542233);
		func_1194(-202131179, Var1, -1264898804);
		func_1194(2013836545, Var1, 1592019450);
		func_1194(1497476650, Var1, 1117400455);
		func_1194(1063571467, Var1, 1150213537);
		func_1194(2107224237, Var1, 1598825281);
		func_1194(1747981656, Var1, -712527121);
		func_1194(-1371140647, Var1, 454332195);
		func_1194(-19142973, Var1, 256105670);
		func_1194(-2074737817, Var1, -1328061889);
		func_1194(-1114256243, Var1, -782241404);
		func_1194(-1653277288, Var1, 1669853467);
		func_1194(1869398132, Var1, -1559225678);
		func_1194(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_708(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_495(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_495(24) && func_708(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_708(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_495(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_691()
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

int func_692(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_471(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_473(iParam0, 1);
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
			func_553(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_356(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_550(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_179(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_179(iParam0, 0, 0) - iParam1) < 0)
		{
			func_692(iParam0, func_179(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_472(iParam0) == -427144552)
	{
		if (!func_1195(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1196(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_501(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_553(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1197(iParam0, iParam1);
	return 1;
}

bool func_693(int iParam0)
{
	switch (func_497(iParam0))
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

void func_694(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_497(iParam0))
	{
		case -2061583405:
			bVar0 = func_1198(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1198(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1198(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1198(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1198(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1198(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1199();
	}
	if (bParam1)
	{
		func_1200(0, 0);
	}
}

int func_695(int iParam0)
{
	Var0 = { func_705(iParam0, 1, 0) };
	return func_706(Var0.f_4);
}

int func_696(int iParam0, int iParam1)
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

void func_697(int iParam0)
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
		iVar0 = func_696(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1201(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_698()
{
	return Global_1946804->f_1;
}

bool func_699(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1202(iParam6);
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
		func_1204(uParam0, func_1203(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_696(iVar3, 1);
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
							if (func_1205(iVar3) && func_1206(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1207(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_700(int iParam0, int iParam1)
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

int func_701(int iParam0, int iParam1)
{
	vVar0 = { func_700(iParam0, iParam1) };
	return vVar0.x;
}

void func_702(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_703(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_704(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1208(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1209(Var0);
}

struct<5> func_705(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1210(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_472(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1024(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_991(bParam1) };
			if (bParam2 && func_1211(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1022(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1022(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1023(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1212(bParam1) };
			switch (func_497(iParam0))
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
			if (func_1213(iParam0, -1823706425))
			{
				Var0 = { func_1024(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1213(iParam0, -1483207246))
			{
				Var0 = { func_1024(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1214(Var0, &Var27, bParam1, 0))
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

int func_706(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1215(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_707(int iParam0)
{
	func_1201(Global_1946804->f_1497.f_1[func_696(iParam0, 1)], 2, 6);
	func_1201(Global_1946804->f_1378.f_1[func_696(iParam0, 1)], 2, 6);
}

bool func_708(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_709(int iParam0)
{
	return iParam0 != 0;
}

int func_710(int iParam0)
{
	iVar0 = -1;
	if (!func_709(iParam0))
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

bool func_711(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_712(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1216(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_713(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_714(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_715(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_716(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_717(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_718(int iParam0, int iParam1)
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

void func_719(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1217(iParam0, iParam6);
	func_1218(iParam0, iParam5);
	func_1219(iParam0, iParam4);
	func_1220(iParam0, iParam3);
	func_1221(iParam0, iParam2);
	func_1222(iParam0, iParam1);
}

bool func_720(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_717(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_716(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_715(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_712(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_713(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_714(iParam0);
	if (iVar5 < 1 || iVar5 > func_718(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_721(int iParam0, bool bParam1)
{
	return func_1169(func_296(), iParam0, bParam1);
}

void func_722(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_723(int iParam0, int iParam1)
{
	if (!func_471(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_473(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1071("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1072(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_708(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_994(iVar1);
				return true;
			}
			iVar3++;
		}
		func_994(iVar1);
	}
	return false;
}

var func_724(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1223(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_725()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1224(iVar1);
		if (!_unlock_is_visible(func_1225(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_726()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1224(iVar0);
		if (!_unlock_is_visible(func_1225(iVar1)))
		{
			_unlock_set_visible(func_1225(iVar1), true);
		}
		iVar0++;
	}
}

bool func_727(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_456(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_728(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_616(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_729()
{
	return (func_210(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_730(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_471(iVar0, 0))
	{
		return 0;
	}
	if (!func_1226(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1227(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_493(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_705(iVar0, 0, 1) };
	iVar10 = func_1228(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1229(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1230(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_180(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1190(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_731(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_732(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_724(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_733(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_734(bool bParam0, bool bParam1)
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

void func_735(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1159())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1159())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_205(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_283(iParam0);
	if (func_207(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_207(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1231(1, iVar1);
					func_1231(8, iVar1);
					func_1231(7, iVar1);
					break;
				case 12:
					func_1231(6, iVar1);
					break;
				case 53:
					func_1231(3, iVar1);
					func_1231(7, iVar1);
					func_1231(4, iVar1);
					break;
				case 20:
					func_1231(8, iVar1);
					break;
				case 19:
					func_1231(1, iVar1);
					func_1231(2, iVar1);
					break;
				case 24:
					func_1231(3, iVar1);
					func_1231(9, iVar1);
					func_1231(20, iVar1);
					break;
				case 28:
					func_1231(1, iVar1);
					break;
				case 34:
					func_1231(23, iVar1);
					func_1231(2, iVar1);
					func_1231(18, iVar1);
					break;
				case 29:
					func_1231(0, iVar1);
					func_1231(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1231(0, iVar1);
					func_1231(3, iVar1);
					func_1231(2, iVar1);
					func_1231(11, iVar1);
					func_1231(6, iVar1);
					func_1231(25, iVar1);
					func_1231(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1231(5, iVar1);
					break;
				case 63:
					func_1231(1, iVar1);
					func_1231(3, iVar1);
					break;
				case 37:
					func_1231(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_372(0, 10, 11, 2116153146))
			{
				func_1231(7, iVar1);
				func_1231(4, iVar1);
			}
			else if (iParam0 == func_372(0, 7, 11, -379687487))
			{
				func_1231(8, iVar1);
				func_1231(15, iVar1);
			}
			else if (iParam0 == func_372(0, 8, 11, -1386089015))
			{
				func_1231(3, iVar1);
			}
			else if (iParam0 == func_372(0, 11, 11, -1952009645))
			{
				func_1231(6, iVar1);
				func_1231(3, iVar1);
			}
			else if (iParam0 == func_372(0, 12, 11, 2065895756))
			{
				func_1231(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1232()));
	if (!func_1233(629))
	{
		func_181(629, 0);
	}
}

int func_736(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_737(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_738(int iParam0, int iParam1, int iParam2)
{
	if (!func_737(iParam0))
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

int func_739()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_740(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_741(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1234(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_739())
	{
		return -1;
	}
	iVar0 = func_740(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_588(iVar1, 0);
	func_657(iVar1, 0);
	func_1106(iVar1, 0);
	func_1235(iVar1, 0);
	func_1236(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1237(iVar1, iParam4);
	}
	return iVar1;
}

int func_742(int iParam0, bool bParam1, int iParam2)
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
			if (func_471(iVar25, 0) && func_493(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_743(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_744(int iParam0)
{
	if (!func_202(iParam0))
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

bool func_745(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_746(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_1238(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1239() == 0 && !func_1240(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1241(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1242();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1243(Global_1310720->f_21))
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
			vVar7 = { func_1244(iVar0, iVar1) };
			bVar11 = func_1245(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_404(vVar7)) && func_1246(iVar0, bParam8, iParam12)) && !func_1247(iVar0)) || bVar11)
			{
				if (func_1248(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_747(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1249(vParam0);
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

void func_748()
{
	disable_script_brain_set(1);
}

void func_749()
{
}

void func_750()
{
	disable_script_brain_set(2);
}

bool func_751(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_752(char* sParam0)
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

void func_753(int iParam0)
{
	if (func_751(iParam0, 1))
	{
		func_1250(1);
	}
}

int func_754()
{
	return -1904156936;
}

bool func_755(int iParam0)
{
	if (!func_202(iParam0))
	{
		return false;
	}
	switch (func_207(iParam0))
	{
		case 1:
			iVar0 = func_283(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_283(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_756()
{
	return 166188472;
}

int func_757()
{
	return 2015838421;
}

int func_758()
{
	return 207908017;
}

var func_759(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_760(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_761(var uParam0)
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

int func_762(var uParam0, int iParam1)
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

char* func_763(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1251(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1252(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1253(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_764(var uParam0, char* sParam1)
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

int func_765(var uParam0)
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

void func_766(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_767(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_768()
{
	return Global_1572864->f_8;
}

void func_769(char[4] cParam0, int iParam1)
{
	func_1254(cParam0, iParam1);
	func_1255(cParam0, iParam1, 26);
}

bool func_770(char[4] cParam0)
{
	if (!func_1256(cParam0))
	{
		return false;
	}
	if (!func_1257(cParam0))
	{
		return false;
	}
	return func_1258(cParam0, func_235(3, 1));
}

int func_771(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

int func_772(char[4] cParam0)
{
	if (is_entity_dead(Global_35) || is_entity_dead(iVar416))
	{
		bVar1 = true;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (is_entity_dead(&(Local_14.f_16[iVar0])))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
	}
	if (!is_entity_dead(&(Local_14.f_16[1])))
	{
		task_use_nearest_scenario_to_coord_warp(&(Local_14.f_16[1]), func_169(0, 2), 2f, 0, true, false, true, false);
	}
	if (!is_entity_dead(&(Local_14.f_16[2])))
	{
		func_929(&(Local_14.f_16[2]), func_235(0, 3), 2, 1073741824);
		_give_weapon_to_ped_2(&(Local_14.f_16[2]), -183018591, 200, true, false, 9, false, 0.5f, 1f, 752097756, false, 0f, false);
		func_27(&uLocal_367, 1);
	}
	if (!is_entity_dead(iVar416))
	{
		remove_all_ped_weapons(iVar416, true, true);
		func_451(cParam0, iVar416, 128);
	}
	if (!is_entity_dead(iVar419))
	{
		func_929(iVar419, func_235(0, 7), 2, 1073741824);
		task_turn_ped_to_face_entity(iVar419, iVar416, -1, -1082130432, -1082130432, -1082130432);
	}
	func_1259(1);
	func_1260(&iLocal_212, 0);
	func_1261(cParam0);
	func_190(1821044729, 1);
	func_190(1514359658, 1);
	func_1262();
	func_1263();
	fLocal_549 = 0.5f;
	stop_ped_speaking(iVar416, true);
	return 1;
}

int func_773(char[4] cParam0)
{
	set_ped_can_play_gesture_anims(iVar416, 0, 1);
	func_1264(cParam0);
	func_1265(cParam0);
	func_1266(cParam0);
	func_1267(cParam0);
	func_1268();
	func_1269(cParam0);
	if (func_1270())
	{
		if (func_166(Global_35, 0) && !func_1271(Global_35, iVar501, 76, 1))
		{
			func_1273(cParam0, func_1272(6), 1, 0);
		}
	}
	if (is_entity_in_volume(Global_35, iVar467, true, 0))
	{
		func_1274();
		if (!bVar560)
		{
			iLocal_563 = 1;
		}
	}
	else if (bVar560)
	{
		iLocal_563 = 0;
	}
	if (func_1275(&uLocal_367, 1f))
	{
		if (func_166(&(Local_14.f_16[2]), 0) && _0xf29a186ed428b552(&(Local_14.f_16[2]), -183018591))
		{
			set_current_ped_weapon(&(Local_14.f_16[2]), -183018591, false, 0, false, false);
			open_sequence_task(&iVar0);
			task_swap_weapon(0, 1, 0, 0, 0);
			task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			close_sequence_task(iVar0);
			task_perform_sequence(&(Local_14.f_16[2]), iVar0);
			clear_sequence_task(&iVar0);
			func_653(&uLocal_367);
		}
	}
	switch (func_1276(cParam0))
	{
		case 0:
			if (!func_26(&uLocal_349))
			{
				func_1277(cParam0, "UTP1_LCT_OBJ1", -1082130432, 0, 0, -1, -1, 0);
				func_27(&uLocal_349, 0);
			}
			else if (func_1275(&uLocal_349, 3f))
			{
				if (func_1278(cParam0, "UTP1_MYELLS1", 1, 0, 0))
				{
					iLocal_435 = func_1279(-308585968, -1812.274f, -353.6981f, 161.886f, 15f, 1);
					_blip_set_modifier(iVar432, 231194138);
					func_135(cParam0, 1);
				}
			}
			break;
		case 1:
			if (func_1280())
			{
				func_1281(cParam0, "UTP1_LCT_OBJ1", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_232(&uLocal_216);
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (func_1280())
			{
				if (!is_entity_in_volume(Global_35, iVar467, true, 0))
				{
					func_1282(cParam0, "UTP1_MYELLS2", iVar416, 0, 0);
				}
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if (func_1280())
			{
				func_232(&uLocal_216);
				func_135(cParam0, 4);
			}
			break;
		case 4:
			if ((((func_1283(&uLocal_216) > 5f && !is_entity_in_volume(Global_35, iVar487, true, 0)) && !is_entity_in_volume(Global_35, iVar467, true, 0)) && func_900(Global_35, iVar416, 50f, 1)) && !func_900(Global_35, iVar416, 5f, 1))
			{
				func_1284(cParam0, "UTP1_MYELLS3", 0);
				func_232(&uLocal_216);
				func_135(cParam0, 5);
			}
			if (is_entity_in_volume(Global_35, iVar493, true, 0))
			{
				func_135(cParam0, 7);
			}
			break;
		case 5:
			if (func_1280())
			{
				func_232(&uLocal_216);
				func_135(cParam0, 6);
			}
			if (is_entity_in_volume(Global_35, iVar493, true, 0))
			{
				func_135(cParam0, 7);
			}
			break;
		case 6:
			if (((func_1283(&uLocal_216) > 10f && !is_entity_in_volume(Global_35, iVar487, true, 0)) && !is_entity_in_volume(Global_35, iVar467, true, 0)) && func_900(Global_35, iVar416, 50f, 1))
			{
				func_1284(cParam0, "UTP1_MYELLSR", 0);
				func_232(&uLocal_216);
			}
			if (is_entity_in_volume(Global_35, iVar493, true, 0))
			{
				func_135(cParam0, 7);
			}
			break;
		case 7:
			if (func_1285(cParam0) > 10f && func_1286(cParam0) < 1)
			{
				func_1284(cParam0, "UTP1_MYELLC", 0);
				func_135(cParam0, 7);
			}
			if (!is_entity_in_volume(Global_35, iVar493, true, 0))
			{
				func_232(&uLocal_216);
				func_135(cParam0, 8);
			}
			break;
		case 8:
			if (func_1285(cParam0) > 10f)
			{
				func_1284(cParam0, "UTP1_MICURG", 0);
				func_135(cParam0, 8);
			}
			if (is_entity_in_volume(Global_35, iVar493, true, 0))
			{
				func_232(&uLocal_216);
				func_135(cParam0, 7);
			}
			break;
		case 9:
			if (func_1278(cParam0, "UTP1_BACKUP", 1, 1f, 0))
			{
				func_135(cParam0, iVar628);
			}
			break;
		case 10:
			if (func_1278(cParam0, "UTP1_JAILBAK", 1, 1.5f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 11:
			if (func_1278(cParam0, "UTP1_LAWAGRO", 1, 0.1f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 12:
			if (func_1278(cParam0, "UTP1_DEPCPLY", 1, 0.2f, 0))
			{
				func_135(cParam0, iVar628);
			}
			break;
		case 13:
			if (func_1278(cParam0, "UTP1_LAWATKS", 1, 0.2f, 0))
			{
				func_135(cParam0, iVar628);
			}
			break;
		case 14:
			if (func_1278(cParam0, "UTP1_MYELLC", 0, 1f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 15:
			get_current_ped_weapon(Global_35, &iVar1, true, 0, false);
			if (get_current_ped_weapon(Global_35, &iVar1, true, 0, false))
			{
				if (_0x705be297eebdb95d(iVar1) && !_is_weapon_bow(iVar1))
				{
					if (func_1278(cParam0, "UTP1_WARN", 1, 1f, 0))
					{
						func_135(cParam0, -1);
					}
				}
				else
				{
					set_ambient_voice_name(&(Local_14.f_16[2]), "0981_S_M_M_AmbientLawRural_White_04");
					if (func_1287(&(Local_14.f_16[2]), "PLAYER_WEAPON_EQUIPPED", 1615046335, Global_35, 1, "0981_S_M_M_AmbientLawRural_White_04", 0, 1))
					{
						func_135(cParam0, -1);
					}
				}
			}
			break;
		case 16:
			if (func_1278(cParam0, "UTP1_LETSGO", 0, 1f, 0))
			{
				func_135(cParam0, 17);
			}
			break;
		case 17:
			if (func_1285(cParam0) > 1f)
			{
				func_1288(cParam0);
				func_135(cParam0, -1);
			}
			break;
		case 20:
			if (iLocal_194 > 3 || func_1278(cParam0, "UTP1_DW_OBJ2b", 4, 5f, 0))
			{
				func_135(cParam0, 22);
			}
			break;
		case 22:
			if (iLocal_212 > 0)
			{
				func_1289(cParam0, 22);
			}
			break;
		case 21:
			if (!func_1290())
			{
				if (func_1278(cParam0, "UTP1_GRAB", 1, 0, 0))
				{
					func_135(cParam0, 24);
				}
			}
			break;
		case 24:
			if (func_1278(cParam0, "UTP1_HLP_KEY", 7, 1f, 0))
			{
				func_135(cParam0, 25);
			}
			break;
		case 25:
			func_1289(cParam0, 25);
			break;
		case 30:
			if (func_1280())
			{
				if (is_entity_in_volume(Global_35, iVar487, true, 0))
				{
					if (!func_187(64) && func_1278(cParam0, "UTP1_SHERWRN", 1, 1.5f, 0))
					{
						func_232(&uLocal_216);
						func_135(cParam0, iVar628);
						func_470(64);
					}
				}
			}
			break;
	}
	if (func_1291(cParam0))
	{
		func_134(cParam0, 29);
	}
	func_1292(cParam0);
	if (iVar829 == 19)
	{
		iLocal_615 = 1;
		func_1293(cParam0);
		func_1294(cParam0);
		func_1295(cParam0, iLocal_204, 2);
		if (func_1296(cParam0, iLocal_204, 1, 0, 0))
		{
			StringCopy(&(cParam0->f_7375.f_800), "cutscene@UTP1_MCS_1A", 32);
			cParam0->f_7375.f_804 = _create_anim_scene("UTP1_MCS_1A", 0, 0, false, true);
			func_1297(cParam0, 8192);
			func_1298(cParam0, "NormalStart");
			func_952(cParam0, iLocal_204, 5);
			return 1;
		}
	}
	switch (func_1286(cParam0))
	{
		case 0:
			if (func_1270())
			{
				func_140(cParam0, iLocal_203, 8);
				func_974(&iLocal_435);
				func_134(cParam0, 2);
				func_1299(1);
				return 0;
			}
			func_1300();
			if (func_1301())
			{
				iLocal_571 = 1;
				func_140(cParam0, func_33(cParam0), 256);
				func_1302();
				set_player_control(player_id(), false, 256, false);
				func_951(cParam0);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			func_1303(340f, -70f, 70f);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			if ((!_is_anim_scene_started(&(iLocal_522[0]), false) || _is_anim_scene_active(&(iLocal_522[0]))) || _is_anim_scene_finished(&(iLocal_522[0]), false))
			{
				func_140(cParam0, func_33(cParam0), 262144);
				func_1304(cParam0);
				return 1;
			}
			break;
		case 2:
			if ((!func_166(&(Local_14.f_16[0]), 0) && !func_166(&(Local_14.f_16[1]), 0)) && !func_166(&(Local_14.f_16[2]), 0))
			{
				func_135(cParam0, 14);
				func_134(cParam0, 3);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_774(char[4] cParam0)
{
	if (func_10(iVar374))
	{
		func_11(&uLocal_377, 1, 1);
	}
	task_clear_look_at(Global_35);
	_0xc67a4910425f11f1(player_id(), 0);
	func_974(&iLocal_435);
	func_452(cParam0, iVar416, 128);
	func_565(&uLocal_518, 8);
	func_1305(0, uVar515);
	func_135(cParam0, 0);
	return 1;
}

void func_775(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(cParam0, iParam1, iParam9);
	func_1306(cParam0, iParam1);
	func_1255(cParam0, iParam1, iParam2);
	func_1307(cParam0, &iParam3, iParam1, 0);
	func_1307(cParam0, &iParam4, iParam1, 2);
	func_1307(cParam0, &iParam5, iParam1, 4);
	func_1307(cParam0, &iParam6, iParam1, 5);
	func_1307(cParam0, &iParam7, iParam1, 7);
	func_952(cParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1308(cParam0, iParam1, cVar0);
	func_1309(cParam0, iParam1, iParam10);
}

bool func_776(char[4] cParam0)
{
	if (!func_1256(cParam0))
	{
		return false;
	}
	if (!func_1257(cParam0))
	{
		return false;
	}
	if (!func_1269(cParam0))
	{
		return false;
	}
	return func_1258(cParam0, func_235(3, 1));
}

int func_777(char[4] cParam0)
{
	if (!is_entity_dead(iVar416))
	{
		if (!func_8(cParam0, 8))
		{
			func_929(iVar416, func_235(3, 1), 2, 1073741824);
		}
	}
	return 1;
}

int func_778(char[4] cParam0)
{
	if (!is_entity_dead(&(Local_14.f_16[1])))
	{
		task_use_nearest_scenario_to_coord_warp(&(Local_14.f_16[1]), func_169(0, 2), 2f, 0, true, false, true, false);
	}
	if (!is_entity_dead(&(Local_14.f_16[2])))
	{
		func_929(&(Local_14.f_16[2]), func_235(0, 3), 2, 1073741824);
		func_1310(&(Local_14.f_16[2]), -183018591, -1, 1, 0, 1056964608, 1065353216, 0);
		task_look_at_entity(&(Local_14.f_16[2]), Global_35, -1, 12, 51, 0);
	}
	func_1262();
	if (!is_entity_dead(iVar416))
	{
		remove_all_ped_weapons(iVar416, true, true);
	}
	if (!is_entity_dead(iVar419))
	{
		func_929(iVar419, func_235(0, 7), 2, 1073741824);
		task_turn_ped_to_face_entity(iVar419, iVar416, -1, -1082130432, -1082130432, -1082130432);
	}
	if (does_rayfire_map_object_exist(iVar626))
	{
		if (get_state_of_rayfire_map_object(iVar626) < 5)
		{
			set_state_of_rayfire_map_object(iVar626, 4);
		}
	}
	func_1311();
	func_232(&uLocal_258);
	func_1298(cParam0, "NormalStart");
	if (func_1312(1))
	{
		func_190(1821044729, 1);
		func_190(1514359658, 1);
	}
	else
	{
		func_1313(1821044729, 1, 0);
		func_1313(1514359658, 1, 0);
	}
	func_165(6, 0);
	func_1314(cParam0, iVar416, 1105014447, 422991367, 1, 1);
	func_1315("UTP1_EXT_OBJ1");
	stop_ped_speaking(iVar416, true);
	return 1;
}

int func_779(char[4] cParam0)
{
	set_ped_can_play_gesture_anims(iVar416, 0, 1);
	func_1316(cParam0);
	if (!func_1312(1))
	{
		func_1264(cParam0);
		if (func_1270())
		{
			func_1317(cParam0);
			func_1266(cParam0);
			func_1318(cParam0);
		}
	}
	if (func_1270())
	{
		if (func_166(Global_35, 0) && !func_1271(Global_35, iVar501, 76, 1))
		{
			func_1273(cParam0, func_1272(6), 1, 0);
		}
	}
	if (func_1312(1))
	{
		func_1264(cParam0);
		func_1265(cParam0);
		func_1266(cParam0);
		func_1318(cParam0);
	}
	switch (func_1276(cParam0))
	{
		case 0:
			if (!bVar612)
			{
				if (func_1278(cParam0, "UTP1_MICSUG", 1, 3f, 0))
				{
					func_135(cParam0, 1);
				}
			}
			break;
		case 1:
			if (func_1278(cParam0, "UTP1_EXT_OBJ1", 4, 1f, 0))
			{
				func_135(cParam0, 51);
			}
			break;
		case 3:
			if (func_1278(cParam0, "UTP1_MICSUG", 0, 0, 0))
			{
				func_135(cParam0, 51);
			}
			break;
		case 9:
			if (func_1278(cParam0, "UTP1_BACKUP", 1, 1f, 0))
			{
				func_135(cParam0, iVar628);
			}
			break;
		case 10:
			if (func_1278(cParam0, "UTP1_JAILBAK", 1, 1.5f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 11:
			if (func_1278(cParam0, "UTP1_LAWAGRO", 1, 0.1f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 12:
			if (func_1278(cParam0, "UTP1_DEPCPLY", 1, 0.2f, 0))
			{
				func_135(cParam0, iVar628);
			}
			break;
		case 13:
			if (func_1278(cParam0, "UTP1_LAWATKS", 1, 0.2f, 0))
			{
				func_135(cParam0, iVar628);
			}
			break;
		case 15:
			get_current_ped_weapon(Global_35, &iVar0, true, 0, false);
			if (get_current_ped_weapon(Global_35, &iVar0, true, 0, false))
			{
				if (_0x705be297eebdb95d(iVar0) && !_is_weapon_bow(iVar0))
				{
					if (func_1278(cParam0, "UTP1_WARN", 1, 1f, 0))
					{
						func_135(cParam0, -1);
					}
				}
				else
				{
					set_ambient_voice_name(&(Local_14.f_16[2]), "0981_S_M_M_AmbientLawRural_White_04");
					if (func_1287(&(Local_14.f_16[2]), "PLAYER_WEAPON_EQUIPPED", 1615046335, Global_35, 1, "0981_S_M_M_AmbientLawRural_White_04", 0, 1))
					{
						func_135(cParam0, -1);
					}
				}
			}
			break;
		case 16:
			if (func_1278(cParam0, "UTP1_LETSGO", 0, 1f, 0))
			{
				func_135(cParam0, 17);
			}
			break;
		case 17:
			if (func_1285(cParam0) > 1f)
			{
				func_1288(cParam0);
				func_135(cParam0, -1);
			}
			break;
		case 20:
			if (iLocal_194 > 3 || func_1278(cParam0, "UTP1_DW_OBJ2b", 4, 5f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 21:
			if (!func_1290())
			{
				if (func_1278(cParam0, "UTP1_GRAB", 1, 0, 0))
				{
					func_135(cParam0, 24);
				}
			}
			break;
		case 22:
			if (func_1278(cParam0, "UTP1_SDSUG", 0, 1f, 0))
			{
				func_135(cParam0, 51);
			}
			break;
		case 23:
			if (func_1278(cParam0, "UTP1_PULLLEV", 0, 1f, 0))
			{
				func_164(cParam0, iVar416, 1);
				iLocal_436 = func_1319(408396114, -1814.15f, -362.907f, 162.091f, 1);
				set_blip_name_from_text_file(iVar433, "UTP1_STMDK");
				func_1277(cParam0, "UTP1_PL_OBJ1", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 25);
			}
			break;
		case 25:
			func_1289(cParam0, 25);
			break;
		case 24:
			if (func_1278(cParam0, "UTP1_HLP_KEY", 7, 1f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 30:
			if (func_1280())
			{
				if (is_entity_in_volume(Global_35, iVar487, true, 0))
				{
					if (!func_187(64) && func_1278(cParam0, "UTP1_SHERWRN", 1, 1.5f, 0))
					{
						func_232(&uLocal_216);
						func_135(cParam0, iVar628);
						func_470(64);
					}
				}
			}
			break;
	}
	if (((func_1286(cParam0) == 0 && !func_1270()) && !bVar570) && !func_1320())
	{
		if (func_1275(&uLocal_258, 20f))
		{
			func_135(cParam0, 3);
			func_232(&uLocal_258);
		}
	}
	if (func_1291(cParam0))
	{
		func_134(cParam0, 29);
	}
	func_1292(cParam0);
	func_1321(cParam0);
	switch (func_1286(cParam0))
	{
		case 0:
			if (iVar829 == 19 || iVar830 == 14)
			{
				func_951(cParam0);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if ((!func_166(&(Local_14.f_16[0]), 0) || !func_166(&(Local_14.f_16[1]), 0)) || !func_166(&(Local_14.f_16[2]), 0))
			{
				iLocal_574 = 1;
				if (!func_1322())
				{
					return 0;
				}
			}
			if (func_954(cParam0) > 3f)
			{
				if (func_1323(cParam0, 256))
				{
					func_134(cParam0, 29);
				}
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_780(var uParam0)
{
	func_974(&iLocal_436);
	func_11(&iLocal_380, 1, 1);
	func_11(&iLocal_379, 1, 1);
	task_clear_look_at(Global_35);
	_0x3a50753042b6891b(Global_35, "p_cs_hookPulley01x_PH_L_HAND");
	func_1324(0);
	if (_does_volume_exist(iVar499))
	{
		_delete_volume(iVar499);
	}
	if (_does_volume_exist(iVar500))
	{
		_delete_volume(iVar500);
	}
	return uParam0->f_607 == uParam0->f_607;
}

int func_781(char[4] cParam0)
{
	if (!func_1256(cParam0))
	{
		return 0;
	}
	if (!func_1257(cParam0))
	{
		return 0;
	}
	if (!func_1258(cParam0, func_235(5, 5)))
	{
		return 0;
	}
	func_99(cParam0, 33554432);
	func_767(&(cParam0->f_7375), 64);
	if (func_128(cParam0, 3) && !func_120(cParam0, 4))
	{
		func_1298(cParam0, "normalStart");
		func_1325(cParam0, "normalStart");
	}
	uLocal_518 = func_1326(0);
	return 1;
}

int func_782(char[4] cParam0)
{
	func_1327(&(cParam0->f_7375.f_872));
	func_1328(cParam0, 524288);
	if (func_1270())
	{
		return 1;
	}
	func_232(&uLocal_219);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_166(&(Local_14.f_16[iVar0]), 0) && iVar0 != 3)
		{
			set_blocking_of_non_temporary_events(&(Local_14.f_16[iVar0]), true);
			clear_ped_tasks(&(Local_14.f_16[iVar0]), 1, 0);
		}
		iVar0++;
	}
	func_140(cParam0, func_33(cParam0), 4096);
	func_131(-1806.131f, -363.4022f, 161.1514f, 5f, 0, 0, 0, 0, 0);
	return 1;
}

int func_783(char[4] cParam0)
{
	func_1329(cParam0, 524288);
	func_1324(0);
	if ((func_1270() && !bVar571) && !func_121(cParam0, func_33(cParam0), 2))
	{
		if (!func_1330())
		{
			return 0;
		}
		func_1331(2);
		return 1;
	}
	func_1332(&(Local_14.f_95[0]), 140196785);
	if (!func_1333())
	{
		return 0;
	}
	if (!func_1330())
	{
		return 0;
	}
	func_1334();
	if (is_entity_dead(Global_35) || is_entity_dead(iVar416))
	{
		bVar0 = true;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (is_entity_dead(&(Local_14.f_16[iVar1])))
		{
			bVar0 = true;
		}
		else
		{
			set_ped_config_flag(&(Local_14.f_16[iVar1]), 188, true);
			set_ped_config_flag(&(Local_14.f_16[iVar1]), 146, false);
		}
		iVar1++;
	}
	if (bVar0)
	{
	}
	func_1335();
	if (!is_entity_dead(iVar419))
	{
		func_618(cParam0, iVar419);
		func_929(iVar419, func_235(0, 0), 2, 1073741824);
		func_1336(iVar419, 1, 0);
	}
	if (!func_1337(iVar416, func_169(5, 5), 2f, 1, 1))
	{
		func_929(iVar416, func_235(5, 5), 2, 1073741824);
	}
	set_ped_infinite_ammo(iVar416, true, 0);
	func_1338();
	if (!func_927(-1623728698))
	{
		iLocal_378 = func_1339("UTP1_UC_BN", 1618006066, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		func_1340(iVar375, -1404316431);
		func_1340(iVar375, 527275493);
	}
	func_452(cParam0, iVar416, 128);
	func_164(cParam0, iVar416, 1);
	if (bVar571)
	{
		func_135(cParam0, 1);
	}
	else
	{
		func_135(cParam0, 3);
	}
	func_134(cParam0, 0);
	func_1341(314693001, 1);
	func_923(iVar456, 0, 0, 0);
	func_190(1821044729, 1);
	func_190(1514359658, 1);
	_0xd6c0a8c7c0b2f82c(player_id(), 0);
	func_191(1, 0);
	Var2 = { func_235(5, 13) };
	add_cover_point(Var2, Var2.f_3, 0, 2, 1, true);
	if (func_8(cParam0, 524288))
	{
		func_1342(Global_35, 1, 0);
		func_1331(2);
	}
	func_1288(cParam0);
	func_27(&uLocal_334, 1);
	stop_ped_speaking(iVar416, false);
	return 1;
}

int func_784(char[4] cParam0)
{
	func_1343(cParam0);
	func_1344(cParam0);
	func_1345(cParam0);
	if (bVar571)
	{
		func_1346(cParam0);
	}
	if (func_1275(&uLocal_334, 0.5f))
	{
		if (_0xc276fe69dda22bad(&(iLocal_438[9])))
		{
			remove_cover_point(&(iLocal_438[9]));
		}
	}
	if (func_1275(&uLocal_334, 2.5f))
	{
		if (_0xc276fe69dda22bad(&(iLocal_438[0])))
		{
			remove_cover_point(&(iLocal_438[0]));
		}
	}
	if (!bVar578)
	{
		func_1347(1);
		if (func_1348(Global_35, -1808.438f, -384.9569f, 160.4936f, 1) < 3f)
		{
			iLocal_581 = 1;
		}
	}
	else if (func_1349())
	{
		func_1350();
		func_1347(0);
		if (func_1351(cParam0))
		{
			func_1352(cParam0);
		}
	}
	switch (func_1276(cParam0))
	{
		case 0:
			if (func_1353(&uVar0) || func_1278(cParam0, "UTP1_EQUIP", 8, 1f, 0))
			{
				func_135(cParam0, 1);
			}
			break;
		case 1:
			if (func_166(&(Local_14.f_16[1]), 0))
			{
				if (func_1285(cParam0) > 1f)
				{
					func_1278(cParam0, "UTP1_DEPSHOOT", 0, 0, 0);
					func_135(cParam0, 3);
				}
			}
			else
			{
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if (!func_1290())
			{
				if (func_166(&(Local_14.f_16[0]), 0))
				{
					if (!func_1354(&(Local_14.f_16[0]), iVar487, 1, 0))
					{
						if (func_1312(1))
						{
							if (func_1282(cParam0, "UTP1_DEPCPLY", &(Local_14.f_16[0]), 0, 0))
							{
								bVar1 = true;
							}
						}
						else if (func_1282(cParam0, "UTP1_DEPCPLY_B", &(Local_14.f_16[0]), 0, 0))
						{
							bVar1 = true;
						}
					}
				}
				else
				{
					func_135(cParam0, 51);
				}
			}
			if (bVar1)
			{
				func_135(cParam0, 4);
			}
			break;
		case 4:
			if (func_166(&(Local_14.f_16[0]), 0))
			{
				if (((func_1285(cParam0) > 1f && !func_1355("UTP1_DEPCPLY")) && !func_1355("UTP1_DEPCPLY_B")) && !func_1355("UTP1_SHRF_CMBT"))
				{
					if (!func_26(&uLocal_288))
					{
						func_27(&uLocal_288, 1);
						fLocal_550 = get_random_float_in_range(8f, 12f);
					}
					if (func_1275(&uLocal_288, fVar547))
					{
						func_1282(cParam0, "UTP1_SHRF_CMBT", &(Local_14.f_16[0]), 0, 0);
						func_653(&uLocal_288);
					}
				}
			}
			else
			{
				if (func_1355("UTP1_SHRF_CMBT"))
				{
					func_1356("UTP1_SHRF_CMBT", 0, 0);
				}
				func_135(cParam0, 51);
			}
			break;
	}
	switch (func_1286(cParam0))
	{
		case 0:
			if (!bVar571)
			{
				if ((((func_266(Local_14.f_14) && func_1357(Local_14.f_14, 3) == 0) && does_entity_exist(&(Local_14.f_24[0]))) && !func_166(&(Local_14.f_24[0]), 3)) && iLocal_168 == 10)
				{
					bVar2 = true;
				}
			}
			else if (((func_266(Local_14.f_75) && func_1357(Local_14.f_75, 3) == 0) && func_1357(Local_14.f_14, 3) == 0) && !func_166(&(Local_14.f_24[0]), 3))
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				func_1358(6, 0, 1, 1, 1, 0);
				func_135(cParam0, 51);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			if (func_1276(cParam0) == 51)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_785(char[4] cParam0)
{
	if (func_1359())
	{
		func_47(1, 0);
	}
	func_178();
	if (_0x1ff441d7954f8709(iVar766))
	{
		_0xd2b9c78537ed5759(iVar766);
	}
	func_186(&iLocal_425, 1, 1, 1);
	if (does_entity_exist(iVar421))
	{
		_mark_object_for_deletion(iVar421);
	}
	func_565(&uLocal_518, 8);
	func_135(cParam0, 0);
	if (!is_entity_dead(iVar416))
	{
		remove_ped_defensive_area(iVar416, false);
	}
	return 1;
}

bool func_786(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_929(&(Local_14.f_16[iVar0]), func_602(5, (4 + iVar0)), 2, 1073741824);
		func_1360(&(Local_14.f_16[iVar0]), 2);
		iVar0++;
	}
	return func_1258(cParam0, func_235(13, 13));
}

int func_787(var uParam0)
{
	if (!func_1349())
	{
		return 0;
	}
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

int func_788(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		func_929(Global_35, func_235(6, 0), 2, 1073741824);
		func_929(iVar416, func_235(14, 0), 2, 1073741824);
		force_ped_motion_state(iVar416, -530524, false, 0, true);
		set_ped_cloth_package_index(iVar416, 1);
		clear_ped_tasks_immediately(iVar416, false, true);
		func_916(0, 0);
	}
	func_1341(-493957506, 1);
	func_232(&uLocal_213);
	func_232(&uLocal_228);
	func_1260(&iLocal_212, 0);
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_1284(cParam0, "UTP1_WAVE3", 1);
	return 1;
}

int func_789(char[4] cParam0)
{
	if (is_entity_dead(Global_35) || is_entity_dead(iVar416))
	{
	}
	func_1361();
	func_1362(cParam0);
	func_1350();
	func_1347(0);
	if (func_1351(cParam0))
	{
		func_1352(cParam0);
	}
	switch (func_1276(cParam0))
	{
		case 0:
			func_135(cParam0, 1);
			break;
		case 1:
			if (func_1354(iVar416, iVar502, 1, 0))
			{
				if (func_1363(1) == 0 || func_1278(cParam0, "UTP1_SKPTOWN", 0, 0, 0))
				{
					func_1277(cParam0, "UTP1_RV_OBJ1", -1082130432, 0, 0, -1, -1, 0);
					func_1314(cParam0, iVar416, 1105014447, 422991367, 1, 1);
					func_135(cParam0, 2);
				}
			}
			break;
		case 2:
			if (func_1364(cParam0))
			{
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if (func_1365() || func_1278(cParam0, "UTP1_RV_OBJ1", 6, 10f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 4:
			if (!func_1290())
			{
				func_1282(cParam0, "UTP1_WHYACU", iVar416, 0, 0);
				func_135(cParam0, 5);
			}
			break;
		case 5:
			if (!func_1366() && func_1285(cParam0) > 3f)
			{
				if (func_1363(1) == 0 || func_1278(cParam0, "UTP1_TOWNSHOOT1", 0, 0, 0))
				{
					func_135(cParam0, -1);
				}
			}
			break;
	}
	switch (func_1286(cParam0))
	{
		case 0:
			if ((!func_166(&(Local_14.f_24[2]), 3) && !func_1367(Local_14.f_40, 3)) && iLocal_212 == 1)
			{
				func_134(cParam0, 29);
			}
			break;
		case 1:
			if (func_1280() && func_1276(cParam0) == -1)
			{
				func_134(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_790(var uParam0)
{
	if (func_1359())
	{
		func_47(1, 0);
	}
	if (func_166(iVar416, 0))
	{
		set_ped_shoot_rate(iVar416, 100);
	}
	func_1368(&(Local_14.f_125), 0);
	func_565(&uLocal_518, 8);
	func_11(&iLocal_378, 1, 1);
	return 1;
}

bool func_791(char[4] cParam0)
{
	if (!func_1351(cParam0))
	{
		return false;
	}
	return func_1258(cParam0, func_235(14, 3));
}

bool func_792(var uParam0)
{
	return uParam0->f_607 == uParam0->f_607;
}

int func_793(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		func_929(Global_35, func_235(15, 0), 2, 1073741824);
		func_916(0, 0);
	}
	func_1341(-493957506, 1);
	func_232(&uLocal_213);
	func_232(&uLocal_228);
	func_1260(&iLocal_212, 0);
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_653(&uLocal_270);
	func_1108(-1940221046, 0, 0);
	func_1108(-1031036002, 0, 0);
	return 1;
}

int func_794(char[4] cParam0)
{
	func_1369(cParam0);
	func_1352(cParam0);
	func_1370(cParam0);
	func_1371(cParam0);
	if (!bVar574)
	{
		if (!func_187(256))
		{
			if (func_1275(&uLocal_249, 2f))
			{
				if (func_1278(cParam0, "UTP1_TUT_DE", 7, 0.25f, 0))
				{
					func_232(&uLocal_249);
					iLocal_577 = 1;
				}
			}
		}
	}
	else if (!bVar575)
	{
		if (func_1275(&uLocal_249, 2f))
		{
			if (func_1278(cParam0, "UTP1_TUT_DR", 7, 0.25f, 0))
			{
				iLocal_578 = 1;
			}
		}
	}
	switch (func_1276(cParam0))
	{
		case 0:
			if (!func_1290())
			{
				if (func_1278(cParam0, "UTP1_WAVE3", 1, 0, 0))
				{
					func_232(&uLocal_249);
					func_135(cParam0, -1);
				}
			}
			break;
		case 1:
			if (func_1278(cParam0, "UTP1_TOWNSHOOT2", 0, 0.5f, 0))
			{
				func_1372(&uLocal_780, 4f, "UTP1_TOWNSHOOT2");
				func_232(&uLocal_270);
				if (!func_8(cParam0, 8))
				{
					func_1277(cParam0, "UTP1_RV_OBJ1", -1082130432, 0, 0, -1, -1, 0);
					func_135(cParam0, 2);
				}
				else
				{
					func_135(cParam0, -1);
				}
			}
			break;
		case 2:
			if (func_1365() || func_1278(cParam0, "UTP1_RV_OBJ1", 4, 10f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 4:
			if (func_1278(cParam0, "UTP1_WAVE3C", 0, 3f, 0))
			{
				func_135(cParam0, 5);
				func_232(&uLocal_270);
			}
			break;
		case 5:
			if (func_166(&(Local_14.f_60[0]), 0) || func_166(&(Local_14.f_60[1]), 0))
			{
				if ((!is_entity_occluded(&(Local_14.f_60[0])) || !is_entity_occluded(&(Local_14.f_60[1]))) && func_1278(cParam0, "UTP1_WAVE3C1", 0, 0.25f, 0))
				{
					func_135(cParam0, -1);
					func_232(&uLocal_270);
				}
			}
			else
			{
				func_135(cParam0, -1);
			}
			break;
	}
	switch (func_1286(cParam0))
	{
		case 0:
			if (iLocal_170 > 0)
			{
				iVar0 = func_1357(Local_14.f_58, 3);
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (func_166(&(Local_14.f_53[iVar1]), 0))
					{
						iVar0++;
					}
					iVar1++;
				}
				if (iVar0 <= 1)
				{
					func_134(cParam0, 29);
				}
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_795(var uParam0)
{
	func_653(&uLocal_270);
	iLocal_598 = 0;
	return uParam0->f_607 == uParam0->f_607;
}

bool func_796(char[4] cParam0)
{
	return func_1258(cParam0, func_235(15, 1));
}

bool func_797(var uParam0)
{
	return uParam0->f_607 == uParam0->f_607;
}

int func_798(char[4] cParam0)
{
	if (!func_1373(cParam0))
	{
		return 0;
	}
	if (!_is_imap_active(-130638369))
	{
		_request_imap(-130638369);
		return 0;
	}
	if (_is_imap_active(1892122519))
	{
		_remove_imap(1892122519);
	}
	func_1341(-493957506, 1);
	func_232(&uLocal_213);
	func_232(&uLocal_228);
	func_1260(&iLocal_212, 0);
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	return 1;
}

int func_799(char[4] cParam0)
{
	func_1374();
	func_1375(cParam0);
	func_1376(cParam0);
	func_1377(1);
	func_1378();
	func_1379();
	if (!bVar580)
	{
		if (func_1348(Global_35, -1776.339f, -416.0481f, 154.2612f, 1) < 3f || (_does_volume_exist(iVar509) && is_entity_in_volume(Global_35, iVar509, true, 0)))
		{
			iLocal_583 = 1;
		}
	}
	else
	{
		func_1380();
		func_1381();
		func_1382();
		func_1383();
		func_1384(cParam0);
	}
	switch (func_1276(cParam0))
	{
		case 0:
			break;
		case 1:
			if (func_1278(cParam0, "UTP1_WAVE4", 0, 0.25f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 2:
			if (!func_1290())
			{
				if (func_1278(cParam0, "UTP1_IG10_A", 1, 0, 0))
				{
					if (!func_8(cParam0, 8))
					{
						func_1277(cParam0, "UTP1_RV_OBJ1", -1082130432, 0, 0, -1, -1, 0);
					}
					func_135(cParam0, 3);
				}
			}
			break;
		case 3:
			if (_is_anim_scene_started(&(iLocal_522[9]), false))
			{
				if (!func_1290())
				{
					if (func_1278(cParam0, "UTP1_IG10_B", 1, 0, 0))
					{
						func_135(cParam0, -1);
					}
				}
			}
			if (func_1385(&(iLocal_522[9])))
			{
				func_135(cParam0, -1);
			}
			break;
		case 6:
			if (func_1278(cParam0, "UTP1_WAVE4B", 0, 2f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 7:
			if (func_1278(cParam0, "UTP1_MCS3_LI", 1, 0, 0))
			{
				if (func_1355("UTP1_WAVE4B"))
				{
					func_1356("UTP1_WAVE4B", 0, 0);
				}
				func_135(cParam0, -1);
			}
			break;
		case 8:
			func_1282(cParam0, "UTP1_MISSME", iVar416, 0, 0);
			func_135(cParam0, -1);
			break;
		case 9:
			if (func_1278(cParam0, "UPT1_IG4_C", 0, 0.2f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 10:
			if (func_1278(cParam0, "UTP1_WAVE5", 0, 0.2f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
	}
	switch (func_1286(cParam0))
	{
		case 0:
			if (!func_1367(Local_14.f_63, 3))
			{
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (iLocal_212 == 87)
			{
				_0xc67a4910425f11f1(player_id(), 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_800(var uParam0)
{
	func_653(&uLocal_228);
	func_1386(1024);
	return uParam0->f_607 == uParam0->f_607;
}

int func_801(char[4] cParam0)
{
	if (!func_1373(cParam0))
	{
		return 0;
	}
	if (!func_1258(cParam0, func_235(11, 6)))
	{
		return 0;
	}
	func_929(Global_35, func_235(11, 5), 2, 1073741824);
	return 1;
}

bool func_802(var uParam0)
{
	if (!is_entity_dead(&(Local_14.f_31[0])))
	{
		set_blocking_of_non_temporary_events(&(Local_14.f_31[0]), true);
	}
	func_929(&(Local_14.f_31[1]), func_235(11, 4), 2, 1073741824);
	func_1377(0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_803(char[4] cParam0)
{
	if (!func_1384(cParam0))
	{
		return 0;
	}
	if (!does_entity_exist(&(Local_14.f_36[0])) && func_1387(0, 1))
	{
		set_ped_relationship_group_hash(&(Local_14.f_36[0]), 1269650476);
		set_blocking_of_non_temporary_events(&(Local_14.f_36[0]), true);
		return 0;
	}
	Var0 = { func_235(7, 0) };
	if (func_1348(iVar418, Var0, 1) > 5f)
	{
		if ((!func_1388(Global_35, iVar418, 0) && !is_entity_on_screen(iVar418)) && !func_1389(Var0, 0f, 1f, 0f, 1f))
		{
			func_929(iVar418, Var0, 2, 1073741824);
		}
	}
	Var4 = { func_235(7, 2) };
	if (func_1348(iVar417, Var4, 1) > 5f)
	{
		if ((!func_1388(Global_35, iVar417, 0) && !is_entity_on_screen(iVar417)) && !func_1389(Var4, 0f, 1f, 0f, 1f))
		{
			func_929(iVar417, Var4, 2, 1073741824);
		}
	}
	iVar8 = 0;
	while (iVar8 < 4)
	{
		func_1390(iVar8);
		iVar8++;
	}
	func_1336(&(Local_14.f_31[0]), 0, 0);
	func_1336(&(Local_14.f_31[1]), 0, 0);
	func_232(&uLocal_213);
	func_232(&uLocal_228);
	func_1260(&iLocal_212, 0);
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_1341(-493957506, 1);
	func_653(&uLocal_270);
	if (!is_entity_dead(iVar416))
	{
		set_blocking_of_non_temporary_events(iVar416, true);
		set_ped_combat_attributes(iVar416, 27, false);
	}
	return 1;
}

int func_804(char[4] cParam0)
{
	func_1380();
	func_1381();
	func_1382();
	func_1383();
	func_1391(cParam0);
	if (func_1367(Local_14.f_34, 3) || func_1367(Local_14.f_68, 3))
	{
		func_1371(cParam0);
	}
	if (bVar563)
	{
		func_1392(cParam0);
		func_1393(&(Local_14.f_118), &uLocal_1000, &uLocal_807, 2, 18, &cLocal_835, 0, 0, -1, 0);
		func_1394(&(Local_14.f_113), &uLocal_804);
	}
	if (is_entity_dead(iVar418) || is_ped_fatally_injured(iVar418))
	{
		func_1273(cParam0, func_1395(), 1, 0);
	}
	switch (func_1276(cParam0))
	{
		case 0:
			if (func_1278(cParam0, "UTP1_WAVE5", 0, 1f, 0) || func_8(cParam0, 8))
			{
				func_1277(cParam0, "UTP1_RV_OBJ1", -1082130432, 0, 0, -1, -1, 0);
				if (!func_8(cParam0, 8))
				{
					func_135(cParam0, 1);
				}
				else
				{
					func_135(cParam0, -1);
				}
			}
			break;
		case 1:
			if (func_1365() || func_1278(cParam0, "UTP1_RV_OBJ1", 6, 0.5f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 2:
			if (func_1278(cParam0, "UTP1_WAVE5A", 0, 0.5f, 0))
			{
				func_135(cParam0, 7);
			}
			break;
		case 7:
			if (func_1278(cParam0, "UTP1_MID_BANT1", 0, 1.5f, 0))
			{
				func_135(cParam0, -1);
				func_232(&uLocal_270);
			}
			break;
		case 8:
			if (func_1278(cParam0, "UTP1_MID_BANT2", 0, 1f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 3:
			if ((func_1396(iVar416) || func_904(iVar416, iVar417, 1, 1) < 5f) || func_904(Global_35, iVar418, 1, 1) < 5f)
			{
				func_135(cParam0, -1);
			}
			else if (func_1278(cParam0, "UTP1_WAVE5B", 0, 0.5f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 5:
			if (func_1355("UTP1_MIREM"))
			{
				func_1356("UTP1_MIREM", 0, 0);
			}
			func_1284(cParam0, "UTP1_IGOUT", 0);
			func_1277(cParam0, "UTP1_RV_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, 51);
			break;
		case 6:
			if (!bVar563 && func_1285(cParam0) > 3f)
			{
				iLocal_566 = 1;
			}
			if (!func_1290())
			{
				func_135(cParam0, 51);
			}
			break;
		case 11:
			if (!func_1290() && func_1275(&uLocal_258, 4f))
			{
				if (!func_1396(Global_35) && func_1278(cParam0, "UTP1_MIREM", 1, 0, 0))
				{
					func_135(cParam0, 12);
				}
			}
			break;
		case 12:
			if (func_1355("UTP1_MIREM"))
			{
				func_135(cParam0, 13);
			}
			break;
		case 13:
			if (!func_1355("UTP1_MIREM"))
			{
				func_135(cParam0, 14);
			}
			break;
		case 14:
			if (func_1396(Global_35))
			{
				func_135(cParam0, -1);
			}
			else if (func_1278(cParam0, "UTP1_MH_OBJ", 6, 2f, 0))
			{
				func_135(cParam0, 15);
				func_232(&uLocal_258);
			}
			break;
		case 15:
			if (!func_1290() && func_1275(&uLocal_258, 4f))
			{
				if (!func_1396(Global_35) && func_1278(cParam0, "UTP1_MIREM", 1, 0, 0))
				{
					func_135(cParam0, -1);
				}
			}
			break;
	}
	if (is_ped_on_mount(Global_35))
	{
		set_ped_max_move_blend_ratio(iVar418, 1.25f);
	}
	if (!is_ped_on_mount(iVar416))
	{
		set_ped_max_move_blend_ratio(iVar417, 0f);
	}
	switch (func_1286(cParam0))
	{
		case 0:
			if (func_187(67108864))
			{
				if ((!func_1367(Local_14.f_34, 3) && !func_1367(Local_14.f_68, 3)) && is_ped_on_mount(iVar416))
				{
					func_470(1024);
					func_951(cParam0);
					if (!func_1396(Global_35))
					{
						func_197(7);
						func_197(0);
						func_197(1);
						func_1277(cParam0, "UTP1_MH_OBJ", -1082130432, 0, 0, -1, -1, 0);
						func_164(cParam0, iVar416, 1);
						func_1397(7);
					}
					func_232(&uLocal_258);
					func_134(cParam0, 1);
					func_135(cParam0, 11);
					iLocal_599 = 1;
				}
			}
			break;
		case 1:
			func_27(&uLocal_322, 0);
			if (func_1396(Global_35) || (func_1275(&uLocal_322, 15f) && !func_1290()))
			{
				set_ped_relationship_group_hash(iVar418, -1538724068);
				set_ped_relationship_group_hash(iVar417, -1538724068);
				func_167(cParam0, iVar416, 0, 1);
				func_653(&uLocal_282);
				func_59(7);
				func_1314(cParam0, iVar416, 1105014447, 422991367, 1, 1);
				func_951(cParam0);
				func_135(cParam0, 5);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (func_954(cParam0) > 0.1f)
			{
				func_134(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_805(var uParam0)
{
	func_653(&uLocal_270);
	func_653(&uLocal_216);
	func_1386(1024);
	func_1386(8);
	if (!is_entity_dead(iVar416))
	{
		set_combat_float(iVar416, 6, 0.5f);
	}
	if (!is_entity_dead(iVar416))
	{
		remove_ped_defensive_area(iVar416, false);
		set_ped_combat_attributes(iVar416, 27, false);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_806(char[4] cParam0)
{
	uLocal_518 = func_1326(0);
	iLocal_599 = 1;
	if (!func_1384(cParam0))
	{
		return false;
	}
	return func_1258(cParam0, func_235(17, 5));
}

int func_807(var uParam0)
{
	func_931(1, 0);
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

int func_808(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		func_929(iVar418, func_235(7, 1), 2, 1073741824);
		func_1398(Global_35, iVar418, 0, -1, 1);
		func_929(iVar417, func_235(7, 3), 2, 1073741824);
		func_1398(iVar416, iVar417, 0, -1, 1);
		func_916(0, 0);
	}
	func_135(cParam0, 0);
	func_1260(&iLocal_212, 0);
	func_232(&uLocal_228);
	func_232(&uLocal_255);
	func_232(&uLocal_340);
	func_1341(-493957506, 1);
	if (!is_entity_dead(iVar416))
	{
		set_blocking_of_non_temporary_events(iVar416, true);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_1390(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_1399(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_1400(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_1401(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_1402(iVar0);
		iVar0++;
	}
	_0x7d654266025e921b(-1392528840);
	func_232(&uLocal_279);
	func_99(cParam0, 4194304);
	func_196(1);
	func_1403();
	iLocal_599 = 1;
	if (func_166(iVar418, 0))
	{
		set_entity_only_damaged_by_player(iVar418, false);
	}
	if (func_166(iVar417, 0))
	{
		set_entity_only_damaged_by_player(iVar417, false);
	}
	func_1404();
	set_ped_config_flag(iVar416, 174, true);
	set_ped_config_flag(iVar417, 174, true);
	return 1;
}

int func_809(char[4] cParam0)
{
	func_1405();
	iLocal_576 = 0;
	func_1394(&(Local_14.f_113), &uLocal_804);
	func_1392(cParam0);
	func_1393(&(Local_14.f_83), &uLocal_1013, &uLocal_812, 4, 12, &cLocal_868, 0, 0, -1, 0);
	func_1393(&(Local_14.f_99), &uLocal_1026, &uLocal_817, 8, 15, &cLocal_901, 0, 0, -1, 1);
	func_1393(&(Local_14.f_106), &uLocal_1039, &uLocal_822, 16, 16, &cLocal_934, 0, 0, 80, 0);
	func_1393(&(Local_14.f_130), &uLocal_1052, &uLocal_827, 32, 20, &cLocal_967, 0, 1, -1, 0);
	func_1406();
	if (is_entity_dead(iVar418) || is_ped_fatally_injured(iVar418))
	{
		func_1273(cParam0, func_1395(), 1, 0);
	}
	else if ((_is_mount_seat_free(iVar418, -1) && is_entity_in_water(iVar418)) && is_ped_ragdoll(iVar418))
	{
		func_1336(iVar418, 0, 0);
	}
	if (func_26(&uLocal_279))
	{
		fVar0 = func_914(&uLocal_279);
		if (fVar0 <= 55f)
		{
			if (func_1407())
			{
				func_1408(cParam0, -1946554414);
				func_653(&uLocal_279);
			}
		}
		else
		{
			_0x50b72a754ee64a71(-1392528840);
			func_653(&uLocal_279);
		}
	}
	if (!func_187(512))
	{
		if (func_1354(iVar416, iVar475, 1, 0))
		{
			func_470(512);
		}
	}
	if (!bVar556)
	{
		if (_0xad401c63158acbaa(player_id()))
		{
			_0x987be590fb9d41e5(1);
			iLocal_559 = 1;
		}
	}
	if (func_1275(&uLocal_255, 3f))
	{
		iLocal_561 = 1;
		func_653(&uLocal_255);
	}
	if (!func_1101(25))
	{
		if (func_1275(&uLocal_340, 4f))
		{
			if (func_1278(cParam0, "UTP1_LSWNT", 7, 0, 0))
			{
				func_653(&uLocal_340);
			}
		}
	}
	if (bVar558)
	{
		if (!func_1407())
		{
			func_1409(func_168(1));
			if (_is_ped_getting_into_a_mount_seat(Global_35, true) && _is_ped_getting_into_a_mount_seat(iVar416, true))
			{
				if (waypoint_recording_get_num_points(func_168(1), &iVar1) && waypoint_recording_get_closest_waypoint(func_168(1), Global_36, &iVar2))
				{
					if ((iVar2 < (iVar1 - 1) && waypoint_recording_get_coord(func_168(1), iVar2, &vVar4)) && waypoint_recording_get_coord(func_168(1), iVar2 + 1, &vVar7))
					{
						fVar3 = func_1410(vVar4, vVar7);
						if (func_1411(iVar418, vVar4, fVar3, 10f, 120f, 1) && !is_control_pressed(0, -513041747))
						{
							set_ped_max_move_blend_ratio(iVar418, 3f);
						}
						else if ((get_frame_count() % 30) == 0)
						{
						}
					}
				}
			}
			else if ((get_frame_count() % 30) == 0)
			{
			}
		}
	}
	switch (func_1276(cParam0))
	{
		case 0:
			if (!func_8(cParam0, 8))
			{
				if (func_1278(cParam0, "UTP1_LW_OBJ1", 4, 0.5f, 0))
				{
					func_1277(cParam0, "UTP1_LW_OBJ1", -1082130432, 0, 0, -1, -1, 0);
					func_135(cParam0, -1);
				}
			}
			else
			{
				func_1277(cParam0, "UTP1_LW_OBJ1", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, -1);
			}
			break;
		case 2:
			iVar11 = 0;
			while (iVar11 <= 2)
			{
				if ((func_166(&(Local_14.f_83[iVar11]), 0) && is_ped_human(&(Local_14.f_83[iVar11]))) && !bVar10)
				{
					func_145(cParam0, &(Local_14.f_83[iVar11]), "UTP1_LAW_2", 0);
					bVar10 = true;
				}
				iVar11++;
			}
			if (bVar10)
			{
				func_1284(cParam0, "UTP1_WAVE6A", 0);
			}
			func_135(cParam0, 3);
			break;
		case 3:
			if (!func_1290())
			{
				if (func_1278(cParam0, "UTP1_LASTWAVE", 1, 0.5f, 0))
				{
					func_135(cParam0, 1);
				}
			}
			break;
		case 1:
			if (func_1278(cParam0, "UTP1_MID_BANT3", 0, 2f, 0))
			{
				func_135(cParam0, 4);
			}
			break;
		case 4:
			if (func_1407())
			{
				if (!bVar567)
				{
					func_27(&uLocal_331, 0);
					if (func_1275(&uLocal_331, 3f) && func_1278(cParam0, "UTP1_ESCAPE", 0, 0, 0))
					{
						func_135(cParam0, 5);
					}
				}
				else
				{
					func_1412();
					task_follow_nav_mesh_to_coord(iVar416, vLocal_632, 1f, 20000, 0.25f, 0, 40000f);
					func_135(cParam0, 51);
				}
			}
			break;
		case 5:
			if (func_900(Global_35, iVar416, 50f, 1) && func_1278(cParam0, "UTP1_BANTEREND", 0, 3f, 0))
			{
				if (_0xad401c63158acbaa(player_id()))
				{
					_0x987be590fb9d41e5(0);
					_0x292ad61a33a7a485();
					_0x55f37f5f3f2475e1();
				}
				func_135(cParam0, 6);
			}
			if (bVar567)
			{
				func_1356("UTP1_BANTEREND", 0, 0);
				func_135(cParam0, 6);
			}
			break;
		case 6:
			if (func_1285(cParam0) > 2f && !func_1290())
			{
				func_135(cParam0, 7);
			}
			break;
		case 7:
			if (func_1285(cParam0) > 2.5f)
			{
				func_1412();
				func_135(cParam0, 51);
			}
			break;
		case 10:
			if (!func_1290())
			{
				iVar11 = 0;
				while (iVar11 < 4)
				{
					if ((iVar12 == 0 && func_166(&(Local_14.f_99[iVar11]), 0)) && is_ped_human(&(Local_14.f_99[iVar11])))
					{
						if (func_1278(cParam0, "UTP1_MNT_WAVE", 1, 1f, 0))
						{
							func_135(cParam0, 11);
							iVar12 = 1;
						}
					}
					iVar11++;
				}
			}
			break;
		case 11:
			func_27(&(cParam0->f_13106), 0);
			if (!func_1290())
			{
				iVar11 = 0;
				while (iVar11 < 4)
				{
					if ((func_166(&(Local_14.f_99[iVar11]), 0) && is_ped_human(&(Local_14.f_99[iVar11]))) && !bVar10)
					{
						func_145(cParam0, &(Local_14.f_99[iVar11]), "UTP1_LAW_1", 0);
						bVar10 = true;
					}
					iVar11++;
				}
				if (bVar10)
				{
					func_1284(cParam0, "UTP1_WAVE7", 0);
				}
				func_135(cParam0, 4);
			}
			break;
		case 12:
			if (!func_1290())
			{
				iVar11 = 0;
				while (iVar11 < 4)
				{
					if ((iVar13 == 0 && func_166(&(Local_14.f_106[iVar11]), 0)) && is_ped_human(&(Local_14.f_106[iVar11])))
					{
						if (func_1278(cParam0, "UTP1_MNT_WAVE", 1, 1f, 0))
						{
							func_135(cParam0, 13);
							iVar13 = 1;
						}
					}
					iVar11++;
				}
			}
			break;
		case 13:
			func_27(&(cParam0->f_13106), 0);
			if (!func_1290())
			{
				iVar11 = 0;
				while (iVar11 < 4)
				{
					if ((func_166(&(Local_14.f_106[iVar11]), 0) && is_ped_human(&(Local_14.f_106[iVar11]))) && !bVar10)
					{
						func_145(cParam0, &(Local_14.f_106[iVar11]), "UTP1_LAW_1", 0);
						bVar10 = true;
					}
					iVar11++;
				}
				if (bVar10)
				{
					func_1284(cParam0, "UTP1_WAVE7", 0);
				}
				func_135(cParam0, 4);
			}
			break;
		case 14:
			if (!func_1290())
			{
				if (func_1278(cParam0, "UTP1_MNT_WAVE", 1, 0.5f, 0))
				{
					func_135(cParam0, 4);
				}
			}
			break;
	}
	if (!func_187(134217728))
	{
		if (func_1407())
		{
			func_27(&uLocal_240, 0);
			if (func_1275(&uLocal_240, 2.5f))
			{
				use_waypoint_recording_as_assisted_movement_route(func_168(1), 0, 1065353216, 1056964608, 1);
				func_470(134217728);
			}
		}
	}
	switch (func_1286(cParam0))
	{
		case 0:
			if (func_1407())
			{
				func_951(cParam0);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (func_1276(cParam0) == 51)
			{
				if (func_1337(Global_35, vLocal_632, 20f, 1, 1))
				{
					if (func_166(iVar416, 0) && _0xe24c64d9aded2ef5(player_id(), iVar416))
					{
						_0x0c6b89876262a99d(player_id(), iVar416);
					}
					set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
					display_radar(false);
					set_gameplay_entity_hint(iVar416, 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
					set_gameplay_hint_fov(35f);
					_set_gameplay_hint_anim_offsety(-0.5f);
					if (func_1353(&uVar14))
					{
						func_1413();
					}
					func_951(cParam0);
					func_134(cParam0, 2);
				}
				else if (func_1337(Global_35, vLocal_632, 30f, 1, 1))
				{
					set_ped_max_move_blend_ratio(func_1414(Global_35), 1.75f);
					if (!bVar561)
					{
						_0x9bbeaf8b0c007f1e(iVar416, 0);
					}
				}
				else
				{
					func_1412();
				}
			}
			break;
		case 2:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			set_ped_max_move_blend_ratio(func_1414(Global_35), 1.25f);
			if (func_1337(Global_35, func_169(10, 8), 10f, 1, 1))
			{
				bVar15 = true;
			}
			if (func_954(cParam0) > 0.5f)
			{
				bVar15 = true;
			}
			if (bVar15)
			{
				func_951(cParam0);
				func_910(cParam0, 4194304);
				func_99(cParam0, 33554432);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			if (func_8(cParam0, 65536))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_810(char[4] cParam0)
{
	if (func_1359())
	{
		func_47(1, 0);
	}
	if (!func_187(134217728))
	{
		func_470(134217728);
	}
	if (!is_entity_dead(iVar416))
	{
		set_blocking_of_non_temporary_events(iVar416, false);
	}
	_0xdd1232b332cbb9e7(3, 1, 0);
	_0x55f37f5f3f2475e1();
	_0x292ad61a33a7a485();
	func_565(&uLocal_518, 8);
	func_164(cParam0, iVar416, 1);
	func_135(cParam0, 0);
	func_1305(0, uVar515);
	_0x50b72a754ee64a71(-1392528840);
	func_653(&uLocal_279);
	func_198();
	set_ped_config_flag(iVar416, 174, false);
	set_ped_config_flag(iVar417, 174, false);
	return 1;
}

bool func_811(char[4] cParam0)
{
	if (!func_1384(cParam0))
	{
		return false;
	}
	func_1412();
	return func_1258(cParam0, func_235(0, 0));
}

int func_812(char[4] cParam0)
{
	if (!func_1415(Global_35))
	{
		func_1398(Global_35, func_271(cParam0), 0, -1, 1);
	}
	func_1416(Global_35);
	if (!func_1415(iVar416))
	{
		func_1398(iVar416, iVar417, 0, -1, 1);
	}
	clear_ped_wetness(Global_35);
	clear_ped_wetness(iVar416);
	set_ped_sweat(Global_35, 0f);
	set_ped_sweat(iVar416, 0f);
	cParam0->f_607 = cParam0->f_607;
	return 1;
}

int func_813(char[4] cParam0)
{
	func_929(iVar416, func_235(8, 4), 6, 1073741824);
	func_270(cParam0, 6, iVar416, 0, 1, 1, 0);
	func_1146(iVar417, 6, 1, 0, 0);
	if (!func_1415(Global_35))
	{
		func_1398(Global_35, func_271(cParam0), 0, -1, 1);
	}
	return 1;
}

int func_814(char[4] cParam0)
{
	switch (func_1286(cParam0))
	{
		case 0:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_815(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

int func_816(char[4] cParam0, int iParam1, bool bParam2)
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
			if (!decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_1417()) && get_entity_model(iVar1) == iParam1)
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

int func_817(char[4] cParam0, int iParam1, bool bParam2)
{
	iVar0 = func_816(cParam0, iParam1, bParam2);
	if (does_entity_exist(iVar0) && is_entity_a_ped(iVar0))
	{
		return get_ped_index_from_entity_index(iVar0);
	}
	return 0;
}

void func_818(struct<2> Param0, int iParam2)
{
	if (!func_266(Param0))
	{
		return;
	}
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (!func_1418(Param0, iParam2))
	{
		add_to_itemset(iParam2, Param0);
	}
}

void func_819(int iParam0, int iParam1)
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

bool func_820(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_821(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_822(var uParam0)
{
	return uParam0->f_862;
}

void func_823(var uParam0)
{
	if (func_1353(&iVar0))
	{
		if (func_471(iVar0, 0))
		{
			if (func_497(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_525(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_471(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_824(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1419(-1);
	}
	func_1420(1);
	set_entity_invincible(Global_35, true);
	if (!func_821(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_821(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_821(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_821(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_821(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_821(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_821(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_821(*iParam0, 4) && !func_821(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_821(*iParam0, 2048))
	{
		func_836(0, 0);
	}
	if (func_821(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_821(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_821(*iParam0, 8192))
	{
		func_1421();
	}
	if (!func_821(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_821(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_821(*iParam0, 1024))
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
		if (!func_821(*iParam0, 16))
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
						if (func_1422() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_404(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1423(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1424(2);
						func_1425(-1);
						func_1426(vVar3);
						func_1428(func_1427());
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
	if (!func_821(*iParam0, 4096))
	{
		func_1429(Global_35);
	}
	if (!func_821(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_821(*iParam0, 2097152))
	{
		if (func_1430() || _0x50f124e6ef188b22(Global_35))
		{
			func_1431(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_825(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_826(var uParam0)
{
	if (func_820(uParam0, 2048) && !func_404(func_1432(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_820(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_905(iVar1, func_1432(uParam0), func_1433(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_820(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_905(iVar3, func_1432(uParam0), func_1433(uParam0), 2, 1073741824);
		}
	}
}

void func_827(var uParam0)
{
	if ((func_820(uParam0, 268435456) && !func_404(func_1432(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1432(uParam0) };
			func_905(iVar0, vVar1, func_1434(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_828(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_404(vParam1))
	{
		func_1435(uParam0, 2048, 1);
	}
	else
	{
		func_767(uParam0, 2048);
		if (bParam5)
		{
			func_767(uParam0, -2147483648);
		}
	}
}

void func_829(var uParam0)
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
					if (!func_1436(uParam0->f_13[iVar0], 8))
					{
						if (func_708(func_1031(iVar1, 0, 1, 0)))
						{
							if (!func_1437(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_708(func_1031(iVar1, 1, 1, 0)))
						{
							if (!func_1437(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_830(var uParam0, bool bParam1)
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

void func_831(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			func_1208(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1438(iParam1, 29, bVar4, 1, 0);
			func_1438(iParam1, 31, bVar4, 1, 0);
			func_1438(iParam1, 30, bVar4, 1, 0);
			func_1438(iParam1, 22, bVar4, 1, 0);
			func_1438(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1066(32768) && func_1439(1108822547, 8)) && func_1440(10, iParam3))
	{
		func_1441(iParam1, 0, 1);
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
			iVar3 = func_1215(iVar1, 1);
			if (func_1439(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1440(iVar1, iParam3))
				{
				}
				else if ((func_1439(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1439(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1438(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1442(iVar3, 1, 6);
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
								func_1438(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1439(iVar3, 1))
							{
								func_1443(iVar3, 1, 6);
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

bool func_832(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1444((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_833(int iParam0)
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

int func_834(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_835(int iParam0, int iParam1)
{
	return func_1445(&uVar0, iParam0, iParam1);
}

void func_836(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_708(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1446(1);
	}
}

void func_837(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_838(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
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
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_841(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_842(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_843(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
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
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_847(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_848(var uParam0, int iParam1)
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

int func_849(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_864((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_850(var uParam0, char* sParam1)
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

int func_851(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_868((*uParam0)[iVar0]))
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
	while (iVar0 < 5)
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
	while (iVar0 < 5)
	{
		if (!func_887((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_854(var uParam0, char* sParam1)
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

int func_855(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_866((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_856(int iParam0, int iParam1)
{
	iVar0 = func_1447(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_857(var uParam0, char* sParam1, int iParam2)
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

int func_858(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_873((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_859(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_860(var uParam0, int iParam1)
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

int func_861(var uParam0, int iParam1)
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

int func_862(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!func_879((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_863(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_864(var uParam0)
{
	return *uParam0 != 0;
}

void func_865(var uParam0)
{
	if (!func_895(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_859(&(uParam0->f_1), 1);
	}
}

bool func_866(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_867(var uParam0)
{
	if (!func_895(uParam0->f_3, 1))
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
		func_859(&(uParam0->f_3), 1);
	}
}

bool func_868(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_869(var uParam0)
{
	if (!func_895(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_859(&(uParam0->f_1), 1);
	}
}

bool func_870(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_871(var uParam0)
{
	if (func_895(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_895(uParam0->f_1, 1))
	{
		func_1448(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_859(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_872(var uParam0)
{
	if (func_895(*uParam0, 2))
	{
		return true;
	}
	if (!func_895(*uParam0, 1))
	{
		func_1449(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_859(uParam0, 2);
		return true;
	}
	return false;
}

bool func_873(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_874(var uParam0)
{
	if (!func_895(uParam0->f_2, 1))
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
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_315())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1029())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_859(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_875(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_876(var uParam0, int iParam1)
{
	if (!func_895(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_859(&(uParam0->f_1), 1);
	}
}

bool func_877(var uParam0)
{
	return *uParam0 != 0;
}

void func_878(var uParam0)
{
	if (!func_895(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_859(&(uParam0->f_2), 1);
	}
}

bool func_879(var uParam0)
{
	return *uParam0 != 0;
}

void func_880(var uParam0)
{
	if (!func_895(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_859(&(uParam0->f_3), 1);
	}
}

bool func_881(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_882(var uParam0)
{
	if (!func_895(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_859(&(uParam0->f_1), 1);
	}
}

bool func_883(var uParam0)
{
	return func_1452(*uParam0);
}

void func_884(var uParam0)
{
	if (!func_895(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_859(&(uParam0->f_1), 1);
	}
}

bool func_885(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_886(var uParam0)
{
	if (!func_895(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_859(&(uParam0->f_2), 1);
	}
}

bool func_887(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_888(var uParam0)
{
	if (!func_895(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_859(&(uParam0->f_1), 1);
	}
}

bool func_889(var uParam0, int iParam1, char* sParam2)
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

void func_890(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_763(iParam1);
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

struct<4> func_891(int iParam0)
{
	if (!func_201(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_892(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_913(uParam0, sParam1, iParam2, bParam4, bParam5))
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
								func_597((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_597(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_597(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_229(&cVar2, 4))
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
							func_597(uParam0->f_2243[uParam0->f_2507], 1048576);
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

void func_893(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_229((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_229((*uParam0)[iVar0], 1))
		{
			func_1464((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_894(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_864((*uParam0)[iVar1]))
		{
			if (func_856((*uParam0)[iVar1]->f_2, iParam12))
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
		if (func_866((*uParam1)[iVar1]))
		{
			if (func_856((*uParam1)[iVar1]->f_4, iParam12))
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
		if (func_868((*uParam2)[iVar1]))
		{
			if (func_856((*uParam2)[iVar1]->f_2, iParam12))
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
		if (func_870((*uParam3)[iVar1]))
		{
			if (func_856((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_871((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_856(uParam4->f_1, iParam12))
	{
		if (!func_872(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_873((*uParam5)[iVar1]))
		{
			if (func_856((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1450((*uParam5)[iVar1]))
				{
					if (!func_896((*uParam5)[iVar1]))
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
		if (func_873((*uParam5)[iVar1]))
		{
			if (func_856((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1450((*uParam5)[iVar1]))
				{
					if (func_896((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_875((*uParam5)[iVar1]->f_4[iVar2]))
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
		if (func_877((*uParam6)[iVar1]))
		{
			if (func_856((*uParam6)[iVar1]->f_3, iParam12))
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
		if (func_879((*uParam7)[iVar1]))
		{
			if (func_856((*uParam7)[iVar1]->f_4, iParam12))
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
		if (func_881((*uParam8)[iVar1]))
		{
			if (func_856((*uParam8)[iVar1]->f_2, iParam12))
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
		if (func_883((*uParam9)[iVar1]))
		{
			if (func_856((*uParam9)[iVar1]->f_2, iParam12))
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
		if (func_885((*uParam10)[iVar1]))
		{
			if (func_856((*uParam10)[iVar1]->f_3, iParam12))
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
		if (func_887((*uParam11)[iVar1]))
		{
			if (func_856((*uParam11)[iVar1]->f_2, iParam12))
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

bool func_895(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_896(var uParam0)
{
	if (func_895(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_895(uParam0->f_2, 1))
	{
		func_874(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_859(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_897(char[4] cParam0, int iParam1, var uParam2, bool bParam3, var uParam4, var uParam5, var uParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_616(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_269(iParam1)) && func_1475(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1476(iParam1, 1, 0, uParam4, uParam5, uParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1477(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1478(iParam1);
		return true;
	}
	return false;
}

bool func_898(char[4] cParam0)
{
	if (!func_404(cParam0->f_5417))
	{
		return true;
	}
	switch (cParam0->f_607)
	{
		case 7:
			func_1479(cParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1479(cParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1479(cParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1479(cParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1479(cParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1479(cParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1479(cParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1479(cParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1479(cParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1479(cParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1479(cParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1479(cParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1479(cParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1479(cParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1479(cParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1479(cParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1479(cParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1479(cParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1479(cParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1479(cParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1479(cParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1479(cParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1479(cParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1479(cParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1479(cParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1479(cParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1479(cParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1479(cParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1479(cParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1479(cParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1479(cParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1479(cParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1479(cParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_404(cParam0->f_5417);
}

int func_899(int iParam0, var uParam1)
{
	uParam1->f_10 = func_277(uParam1->f_10);
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
		if (func_404(uParam1->f_6))
		{
		}
	}
	bVar0 = func_403();
	if (*uParam1)
	{
		if (bVar0 && !func_336((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1480(5))
			{
				func_627(5);
				func_1481(5);
				func_1425(0);
				func_1424(0);
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
	iVar2 = func_227(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_630(iVar1))
	{
		bVar3 = true;
		if (func_1483(iVar1))
		{
			bVar4 = true;
		}
		if (func_637(iVar1))
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
				func_638(uParam1->f_10);
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
			func_1425(0);
			func_1424(0);
			func_1426(uParam1->f_6);
		}
	}
	if (!func_630(uParam1->f_10))
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
	iVar2 = func_227(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_630(iVar1))
	{
		bVar3 = true;
		if (func_1483(iVar1))
		{
			bVar4 = true;
		}
		if (func_637(iVar1))
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
			if (!func_404(uParam1->f_6))
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
	if (!func_623(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1497(uParam1->f_10);
		if (uParam1->f_2 && !func_404(uParam1->f_6))
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
	func_622(uParam1->f_10);
	if (func_623(uParam1->f_10))
	{
		iVar16 = func_273(uParam1->f_10);
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

bool func_900(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_901(int iParam0)
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

bool func_902(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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

void func_903(char[4] cParam0, bool bParam1)
{
	if (!is_entity_dead(cParam0->f_5411))
	{
		if (!_0x88ad6cc10d8d35b2(cParam0->f_5411))
		{
			set_entity_as_mission_entity(cParam0->f_5411, true, true);
		}
		if ((bParam1 && !_0x3ab6c7b0bb0df4b1(cParam0->f_5411, -1)) && !func_120(cParam0, 32768))
		{
			clear_ped_tasks(cParam0->f_5411, 1, 0);
		}
		if (!func_20() == 0)
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

float func_904(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_905(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
		if (func_901(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_399(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_905(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_905(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_399(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_399(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_399(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_399(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_399(iParam5, 129))
	{
		if (func_399(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_399(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_399(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_399(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1501(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_399(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_399(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_906(int iParam0, int iParam1, int iParam2)
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

bool func_907(var uParam0, int iParam1)
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
			func_824(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1504(uParam0, 2);
			break;
		case 2:
			if (func_1506(uParam0))
			{
				func_1507(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1504(uParam0, 3);
			}
			break;
		case 3:
			if (func_914(&(uParam0->f_3)) >= 1f)
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
			func_1508(&iVar1, 0);
			release_script_audio_bank();
			func_1504(uParam0, 0);
			return true;
	}
	return false;
}

void func_908(char[4] cParam0)
{
	if (!func_120(cParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(cParam0->f_607)}, 8);
		func_1509(&uVar0, 15000, 0, 0, 0, 1);
		func_103(cParam0, 524288);
	}
}

bool func_909(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (func_162(cParam0, func_33(cParam0)) <= 3)
	{
		iVar0 = func_33(cParam0);
	}
	Var1 = { func_1510(cParam0, iVar0) };
	if (func_1512(&(cParam0->f_10792), Var1, func_1511(&(cParam0->f_10792)), 0))
	{
		func_140(cParam0, func_33(cParam0), 262144);
		if (func_1513(&(cParam0->f_10792), 524288))
		{
			func_389(cParam0, 67108864);
			func_1514(&(cParam0->f_10792), 524288);
		}
		func_1515(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

void func_910(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 - (cParam0->f_5307 && iParam1));
}

bool func_911(char[4] cParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(cParam0, 16777216))
	{
		func_1293(cParam0);
		func_1294(cParam0);
		return true;
	}
	if (func_1516(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (func_154(cParam0) == 0)
	{
		func_940(cParam0);
	}
	if (func_29())
	{
		if (!func_8(cParam0, 262144))
		{
			stop_gameplay_hint(true);
			render_script_cams(false, false, 3000, true, false, 0);
			if (does_cam_exist(cParam0->f_609.f_2))
			{
				destroy_cam(cParam0->f_609.f_2, false);
			}
			func_51(&(cParam0->f_10792));
			func_1517(cParam0);
			func_910(cParam0, 524288);
			func_1261(cParam0);
			func_149(cParam0, 30f);
			func_150(cParam0, 40f);
			func_99(cParam0, 262144);
		}
		if (!func_8(cParam0, 524288) && _0xef324e9550a394d5(cParam0->f_7375.f_804))
		{
			func_99(cParam0, 524288);
		}
	}
	return false;
}

bool func_912(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_1518(func_61(cParam0), func_120(cParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1519(func_61(cParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1520(func_61(cParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_433(cParam0, func_33(cParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(cParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_891(cParam0->f_607)}, 3);
	if (!func_23(&(cParam0->f_8269)))
	{
		if (!func_913(&(cParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_913(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1521(uParam0);
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

float func_914(var uParam0)
{
	if (!func_26(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_599(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_650() - uParam0->f_1);
}

bool func_915()
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

void func_916(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

int func_917(int iParam0)
{
	if (!func_557(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0]);
	}
	return &(Global_1058888->f_42266[iParam0]);
}

void func_918(var uParam0)
{
	func_1522(uParam0, 0);
	func_1523(uParam0, 0);
	func_1524(uParam0, 1);
	func_919(uParam0, 1);
	func_1525(uParam0, 0);
	func_1526(uParam0, 1);
	func_1527(uParam0, 1, 1, 1);
}

void func_919(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1528(uParam0, 16);
	}
	else
	{
		func_1529(uParam0, 67108864);
		func_1529(uParam0, 16);
	}
}

void func_920()
{
	func_1530(&uLocal_475, -1814.786f, -393.8083f, 162.847f, 0f, 0f, -36.00934f, 5.633967f, 25.96525f, 7.285463f, "LargeBridge_Trigger");
	func_1530(&uLocal_478, -1286.416f, -622.7455f, 100.8174f, 0f, 0f, -4.52038f, 8.382014f, 38.73208f, 16.87363f, "Chase Midpoint");
	func_1530(&uLocal_479, -1729.945f, -427.7703f, 153.5678f, 0f, 0f, -28.46328f, 7.050659f, 45.37993f, 13.97967f, "Comp Mounted Combat Trigger");
	func_1530(&uLocal_480, -1747.34f, -418.3399f, 153.5678f, 0f, 0f, -28.46328f, 7.050659f, 45.37993f, 13.97967f, "Mounted Combat Trigger");
	func_1530(&uLocal_482, -1804.764f, -362.3957f, 161.0245f, 0f, 0f, 0f, 8.453165f, 6.019308f, 3.812334f, "Micah Def Vol 1");
	func_1530(&uLocal_483, -1784.669f, -379.1745f, 157.7578f, 0f, 7.424636f, -35.0629f, 12.82279f, 8.914471f, 6.051097f, "Wave5 Def Vol");
	func_1530(&uLocal_484, -1796.331f, -367.596f, 161.5137f, 0f, 0f, 11.57981f, 11.69479f, 18.93337f, 9.868418f, "Wave5 Last Def Vol");
	func_1530(&uLocal_485, -1798.533f, -358.9924f, 162.8532f, 0f, 0f, 28.58753f, 5.632193f, 12.00839f, 6.305487f, "Dep2 Shot");
	func_1530(&uLocal_486, -1455.08f, -576.4332f, 127.1126f, 0f, 0f, 10.26823f, 12.62792f, 29.92026f, 14.76696f, "Last Law Trigger");
	func_1530(&uLocal_481, -1684.65f, -478.105f, 149.9652f, 0f, 0f, -30.9715f, 6.268533f, 21.73299f, 12.12248f, "Enable Rubberband");
	func_1530(&uLocal_500, -1811.084f, -391.9985f, 161.0306f, 0f, 0f, -35.19912f, 1.292672f, 2.37925f, 1.404509f, "Bridge Cover TEMP");
	func_1530(&uLocal_487, -1810.003f, -421.0504f, 157.7232f, 0f, 0f, -20.48132f, 12.03512f, 8.434383f, 6.400868f, "Wave 3 Def Vol");
	func_1530(&uLocal_488, -1814.786f, -393.8083f, 162.847f, 0f, 0f, -36.00934f, 5.633967f, 12.5f, 5f, "Wave 2 Def Vol");
	func_1530(&uLocal_489, -1824.097f, -406.9122f, 162.847f, 0f, 0f, -36.00933f, 1.992706f, 4.488981f, 6.260735f, "Wave 2 Rush Def Vol");
	func_1530(&uLocal_494, -1772.45f, -396.26f, 155.7708f, 0f, 0f, 0f, 9.439058f, 9.679877f, 9.864372f, "Wave 5 Rush Def Vol");
	func_1530(&uLocal_495, -1815.654f, -418.9398f, 158.9464f, 0f, 0f, -17.43378f, 12.03512f, 8.434383f, 6.400868f, "Wave 3 Micah Def Vol");
	func_1530(&uLocal_496, -1813.796f, -359.8591f, 161.8863f, 0f, 0f, -24.71253f, 13.97324f, 6.69459f, 3.140004f, "Arthur Linger");
	func_1530(&uLocal_497, -1804.723f, -421.1319f, 158.2578f, 0f, 0f, -25.49072f, 1.741751f, 14.08722f, 8.378675f, "IG10 Trigger");
	func_1530(&uLocal_498, -1813.325f, -388.696f, 161.0286f, 0f, 0f, -36.04702f, 2.240113f, 17.85697f, 5.703002f, "IG8 Failsafe");
	func_1531(&uLocal_471, -1771.196f, -432.002f, 153.6336f, 0f, 0f, -37.24244f, 8f, 8f, 4f, "Player Watches Micah");
	func_1530(uLocal_491[0], -1814.309f, -355.8114f, 161.8394f, 0f, 0f, -25.86975f, 3.000784f, 5.45737f, 1.206776f, "MCS1 Leadin 1");
	func_1530(uLocal_491[1], -1813.314f, -359.3986f, 161.8394f, 0f, 0f, 58.50481f, 4.173115f, 7.656674f, 2.972159f, "MCS1 Leadin 2");
	if (!_does_volume_exist(iVar457))
	{
		iLocal_459 = _create_volume_box_with_custom_name(-1791.362f, -395.318f, 161.4631f, 0f, 0f, -118.9029f, 183.4069f, 200.7273f, 64.61872f, "AllStrawberry");
	}
	if (!_does_volume_exist(iVar472))
	{
		iLocal_474 = _create_volume_box_with_custom_name(-1775.964f, -415.6643f, 155.5058f, 0f, 0f, 59.5297f, 13.67068f, 2.393973f, 3.70276f, "SmallBridge");
	}
	if (!_does_volume_exist(iVar471))
	{
		iLocal_473 = _create_volume_box_with_custom_name(-1600.663f, -478.8493f, 158.7269f, 0f, 0f, -96.89441f, 58.39359f, 16.16437f, 22.65594f, "Law_LastStand_Trigger");
	}
	if (!_does_volume_exist(iVar458))
	{
		iLocal_460 = _create_volume_box_with_custom_name(-1810.478f, -349.1918f, 165.0912f, 0f, 0f, 65.58327f, 6.892238f, 7.449591f, 9.566876f, "MunicipalBuilding_East");
	}
	if (!_does_volume_exist(iVar459))
	{
		iLocal_461 = _create_volume_box_with_custom_name(-1813.429f, -353.8829f, 165.0912f, 0f, 0f, 65.58327f, 4.192238f, 5.968321f, 9.566876f, "MunicipalBuilding_West");
	}
	if (!_does_volume_exist(iVar470))
	{
		iLocal_472 = _create_volume_box_with_custom_name(-1807.672f, -350.4206f, 165.1748f, 0f, 0f, -25.46385f, 1.5f, 1.081296f, 3.361603f, "Front_Door_Trigger");
	}
	if (!_does_volume_exist(iVar461))
	{
		iLocal_463 = _create_volume_box_with_custom_name(-1814.862f, -357.078f, 162.3263f, 0f, 0f, -23.4247f, 3.034864f, 2.314219f, 2.526311f, "Examine_Trigger");
	}
	if (!_does_volume_exist(iVar468))
	{
		iLocal_470 = _create_volume_box_with_custom_name(-1815.495f, -359.2792f, 162.0097f, 0f, 0f, 155.5356f, 10.50229f, 6.536135f, 3.89862f, "MicahCallsPlayer");
	}
	if (!_does_volume_exist(iVar475))
	{
		iLocal_477 = _create_volume_box_with_custom_name(-1815.495f, -359.2792f, 162.0097f, 0f, 0f, 155.5356f, 6.438858f, 6.536135f, 3.89862f, "FoundChain_Trigger");
	}
	if (!_does_volume_exist(iVar460))
	{
		iLocal_462 = _create_volume_box_with_custom_name(-1785.336f, -433.5354f, 156.5671f, 0f, 0f, 64.31435f, 38.03792f, 44.85132f, 18.21481f, "m_volNemesisBattleTrigger");
	}
	if (!_does_volume_exist(iVar462))
	{
		iLocal_464 = _create_volume_box_with_custom_name(-1767.303f, -432.1342f, 156.1876f, 0f, 0f, -30.33056f, 6.463362f, 7.858084f, 9.043924f, "NemesisHouse");
	}
	if (!_does_volume_exist(iVar463))
	{
		iLocal_465 = _create_volume_box_with_custom_name(-1816.006f, -362.0011f, 162.8819f, 0f, 0f, 0f, 2.27454f, 4.815451f, 4.316637f, "SteamDonkey");
	}
	if (!_does_volume_exist(iVar464))
	{
		iLocal_466 = _create_volume_box_with_custom_name(-1814.996f, -352.7873f, 161.7476f, 0f, 0f, -24.11551f, 2.401561f, 4.541117f, 3.632803f, "FrontJailCell");
	}
	if (!_does_volume_exist(iVar465))
	{
		iLocal_467 = _create_volume_box_with_custom_name(-1811.564f, -352.9676f, 161.6344f, 0f, 0f, 65f, 1.474573f, 3.420878f, 2.311915f, "m_volSideOfJailCell");
	}
	if (!_does_volume_exist(iVar466))
	{
		iLocal_468 = _create_volume_box_with_custom_name(-1814.078f, -350.2545f, 162.5593f, 0f, 0f, -24.11551f, 1.851561f, 3.330333f, 4.338704f, "JailStairs");
	}
	if (!_does_volume_exist(iVar467))
	{
		iLocal_469 = _create_volume_box_with_custom_name(-1679.976f, -460.7645f, 155.7997f, 0f, 0f, -40.14835f, 14.44048f, 202.1369f, 104.7221f, "Trigger_1stLaw");
	}
	if (!_does_volume_exist(iVar474))
	{
		iLocal_476 = _create_volume_box_with_custom_name(-735.714f, -762.7f, 49.955f, 0f, 0f, 0f, 35.2656f, 25.45836f, 12.35635f, "EndMission Trigger");
	}
	if (!_does_volume_exist(iVar488))
	{
		iLocal_490 = _create_volume_aggregate_with_custom_name("SheriffsOffice");
		_0x6e0d3c3f828da773(iVar488, iVar459);
		_0x6e0d3c3f828da773(iVar488, iVar458);
		_0x6e0d3c3f828da773(iVar488, iVar466);
		_0x6e0d3c3f828da773(iVar488, iVar464);
		_0x6e0d3c3f828da773(iVar488, iVar465);
	}
	if (!_does_volume_exist(iVar497))
	{
		uLocal_499 = _0x0eb78c2b156635b1(-1612834106, -1772.25f, -431.59f, 154.54f, 0f, 0f, -30f, 4.765533f, 5.480613f, 4.63f);
	}
	if (_does_volume_exist(iVar497))
	{
		_0xeb2ed1dc3aec0654(iVar497, 1, 1, 1, 1);
	}
	if (!_does_volume_exist(iVar499))
	{
		iLocal_501 = _create_volume_box_with_custom_name(-1823.43f, -405.9224f, 161.4235f, 0f, 0f, 53.9973f, 2.54052f, 8.23579f, 2.538293f, "m_volTriggerWoodworkEnemy");
	}
	if (!_does_volume_exist(iVar502))
	{
		iLocal_504 = _create_volume_sphere_with_custom_name(-1812.654f, -350.6548f, 160.3696f, 0f, 0f, 0f, 30f, 30f, 30f, "m_volAbandonMicah");
	}
	if (!_does_volume_exist(iVar503))
	{
		iLocal_505 = _create_volume_box_with_custom_name(-1804.991f, -376.259f, 161.9534f, 0f, 0f, 55.58038f, 15.61299f, 15.14759f, 4.066758f, "m_volSkipTownDialogue");
	}
	if (!_does_volume_exist(iVar504))
	{
		iLocal_506 = _create_volume_box_with_custom_name(-1805.567f, -365.8519f, 161.6402f, 0f, 0f, 0f, 9.788594f, 13.67398f, 7.628775f, "m_volLeaveVehicle");
	}
	if (!_does_volume_exist(iVar505))
	{
		iLocal_507 = _create_volume_box_with_custom_name(-1751.236f, -407.6709f, 155.7703f, 0f, 0f, 0f, 10f, 10f, 10f, "m_volOilDelivery");
	}
	if (!_does_volume_exist(iVar506))
	{
		iLocal_508 = _create_volume_box_with_custom_name(-1800.824f, -426.0862f, 156.5671f, 0f, 0f, 64.31434f, 38.03792f, 44.85132f, 18.21481f, "m_volEarlyTriggerWave3Vills");
	}
	if (!_does_volume_exist(iVar507))
	{
		iLocal_509 = _create_volume_box_with_custom_name(-1814.623f, -353.6398f, 160.9934f, 0f, 0f, 65f, 1f, 1f, 1f, "m_volCellDoorBlocked");
	}
	if (!_does_volume_exist(iVar508))
	{
		iLocal_510 = _create_volume_box_with_custom_name(-1812.94f, -354.7842f, 160.9934f, 0f, 0f, 65f, 2.737693f, 3.795842f, 1f, "m_volCellInterior");
	}
	if (!_does_volume_exist(iVar509))
	{
		iLocal_511 = _create_volume_box_with_custom_name(-1805.346f, -402.0671f, 154.7832f, 0f, 0f, -35.96581f, 20.43346f, 15.40107f, 7.149297f, "m_volKillMicahRagdoll");
	}
	if (!_does_volume_exist(iVar510))
	{
		iLocal_512 = _create_volume_box_with_custom_name(-1783.708f, -386.4663f, 159.8304f, 0f, 0f, -25f, 80.57532f, 45.03162f, 19.29087f, "m_volFinalShootout");
	}
	if (!_does_volume_exist(iVar511))
	{
		iLocal_513 = _create_volume_box_with_custom_name(-1794.792f, -367.4823f, 161.6402f, 0f, 0f, 47.90016f, 15.0908f, 14.39068f, 7.628775f, "m_volSheriffFallbackDef");
	}
	if (!_does_volume_exist(iVar512))
	{
		iLocal_514 = _create_volume_box_with_custom_name(-1826.447f, -410.0747f, 161.4235f, 0f, 0f, 53.9973f, 15.34807f, 13.64508f, 3.591711f, "m_volWave2FallbackDef");
	}
	if (!_does_volume_exist(iVar513))
	{
		iLocal_515 = _create_volume_box_with_custom_name(-1802.534f, -423.0392f, 157.7232f, 0f, 0f, -20.48132f, 26.52862f, 12.61507f, 7.149297f, "m_volWave3FallbackDef");
	}
	if (!_does_volume_exist(iVar514))
	{
		iLocal_516 = _create_volume_box_with_custom_name(-1781.757f, -425.5102f, 155.5058f, 0f, 0f, 59.52969f, 26.87374f, 10.4788f, 5.715592f, "m_volWave4FallbackDef");
	}
	if (!_does_volume_exist(iVar515))
	{
		iLocal_517 = _create_volume_box_with_custom_name(-1783.016f, -381.549f, 157.4036f, -1.045603f, 7.351048f, -43.18111f, 45.12739f, 12.69514f, 6.051097f, "m_volWave5FallbackDef");
	}
}

void func_921(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_922(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 1048576;
	if (bParam1)
	{
		iVar0 |= 131072;
	}
	if (bParam2)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

var func_923(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_921(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_924()
{
	iLocal_410 = 472;
	while (iVar408 <= 502)
	{
		if (iVar408 != 474)
		{
			func_1532(iVar408);
			func_1533(iVar408, 32);
		}
		iLocal_410 = iVar408 + 1;
	}
	iLocal_410 = 883;
	while (iVar408 <= 885)
	{
		func_1532(iVar408);
		func_1533(iVar408, 32);
		iLocal_410 = iVar408 + 1;
	}
	iLocal_410 = 932;
	while (iVar408 <= 952)
	{
		func_1532(iVar408);
		func_1533(iVar408, 32);
		iLocal_410 = iVar408 + 1;
	}
}

void func_925()
{
	func_467(26, 1);
}

void func_926(int iParam0, int iParam1, int iParam2)
{
	if (func_1534(iParam1, -1))
	{
		func_1535(iParam0, 0);
		func_1536(iParam0, 1);
		func_988(iParam0, 0, 1);
		func_466(iParam2, 32);
		func_1537(iParam2, 1);
		func_1538(iParam2, 1, 0);
	}
}

bool func_927(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	if (func_1327(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return true;
		}
	}
	return false;
}

int func_928(int iParam0, bool bParam1)
{
	if (!func_1539())
	{
		return 0;
	}
	if (!func_1540(iParam0))
	{
		return 0;
	}
	if (func_1541(iParam0))
	{
		iVar0 = 0;
		if (func_497(iParam0) == 81053684)
		{
			if (bParam1)
			{
				func_426(&iVar0, 2);
			}
		}
		return func_1542(iParam0, iVar0);
	}
	return 0;
}

void func_929(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_905(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

int func_930(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, int iParam11)
{
	vVar1 = { func_462(vParam0, vParam3, iParam10) };
	vVar4 = { func_463(vParam0, vParam3, iParam10) };
	func_1507(vParam6, fParam9, iParam11);
	set_ped_non_creation_area(vVar1, vVar4);
	set_ped_paths_in_area(vVar1, vVar4, false, 0);
	iVar0 = add_scenario_blocking_area(vVar1, vVar4, iParam11, 15);
	return iVar0;
}

void func_931(bool bParam0, int iParam1)
{
	func_569(-148884852, bParam0, iParam1, 0, 0, 0, 0, 0);
	func_569(-387803631, bParam0, iParam1, 0, 0, 0, 0, 0);
}

int func_932(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (iVar0 == iLocal_205)
	{
		func_177();
	}
	else if (iVar0 == 25)
	{
		set_anim_scene_origin(cParam0->f_7375.f_804, vLocal_632, vLocal_635, 2);
	}
	return 1;
}

void func_933(char[4] cParam0, int iParam1)
{
	cParam0->f_8265 = iParam1;
	func_103(cParam0, 2048);
}

int func_934(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (iVar0 == iLocal_203)
	{
		if (func_1543(cParam0, Global_35, 0, 0, 1, 1))
		{
			func_916(0, 0);
			func_929(Global_35, func_235(3, 3), 2, 1073741824);
			func_1544(-668482597, 2000, 0, 1, 1, 0, 0, 0);
			func_1545(func_169(3, 2), 2f, 4);
		}
		if (func_1543(cParam0, &(Local_14.f_16[1]), 0, 0, 1, 1))
		{
			iVar1 = _0xc6a6789bb405d11c(&(Local_14.f_16[1]), 1);
			if (does_entity_exist(iVar1))
			{
				delete_object(&iVar1);
			}
		}
		if (func_1543(cParam0, &(Local_14.f_16[2]), 0, 0, 1, 1))
		{
			iVar2 = _0xc6a6789bb405d11c(&(Local_14.f_16[2]), 1);
			if (does_entity_exist(iVar2))
			{
				delete_object(&iVar2);
			}
		}
	}
	else if (iVar0 == iLocal_204)
	{
		if (!bVar581)
		{
			if (func_1546(cParam0, "cutscene@UTP1_MCS_1") > 0f || func_1546(cParam0, "UTP1_MCS_1") > 0f)
			{
				func_131(get_entity_coords(Global_35, true, false), 10f, 0, 0, 0, 0, 0);
				iLocal_584 = 1;
			}
		}
		if (iVar761 == 0)
		{
			if (func_1543(cParam0, Global_35, 0, 0, 1, 1))
			{
				Var3 = { -1815.463f, -356.794f, 161.0912f };
				Var3.f_3 = 180.0505f;
				func_929(Global_35, Var3, 2, 1073741824);
				set_gameplay_cam_relative_heading(21.3891f, 1f);
				set_gameplay_cam_relative_pitch(-5.3684f, 1f);
			}
		}
		if (func_1543(cParam0, iVar416, 0, 0, 1, 1))
		{
			func_1547("pl_Window_Idle_Base");
		}
	}
	else if (iVar0 == iLocal_205)
	{
		if (!bVar613)
		{
			if (func_1546(cParam0, "UTP1_MCS_1A") > 0.1f)
			{
				func_1548(iVar456, vLocal_644, uVar644);
				iLocal_616 = 1;
			}
		}
		if (func_1546(cParam0, "UTP1_MCS_1A") > 0.6f)
		{
			if (bVar571)
			{
				func_1346(cParam0);
			}
			else
			{
				func_1343(cParam0);
			}
			if (func_1333() && func_1330())
			{
				func_1334();
			}
		}
		if (!bVar599)
		{
			_0x140b3cb1d424a945(Global_35, -1);
			if (!_0xc276fe69dda22bad(&(iLocal_438[9])))
			{
				iLocal_438[9] = add_cover_point(-1810.835f, -359.3657f, 161.1357f, 321.9695f, 2, 0, 1, false);
			}
			if (func_1543(cParam0, Global_35, 0, 0, 1, 1))
			{
				func_1549(-1807.192f, -354.7943f, 164.2916f, 0);
				clear_ped_tasks(Global_35, 1, 0);
				task_put_ped_directly_into_cover(Global_35, get_entity_coords(Global_35, true, false), 500, 0, 0.7f, 1, 0, &(iLocal_438[9]), 1, 0, 0);
				_0x2208438012482a1a(Global_35, false, false);
				_0x1a7a802b2301edc0(Global_35);
				func_1342(Global_35, 1, 0);
				iLocal_602 = 1;
			}
		}
		if (!_0xc276fe69dda22bad(&(iLocal_438[0])))
		{
			iLocal_438[0] = add_cover_point(func_169(5, 5), func_1550(5, 5), 0, 2, 4, false);
		}
		if (!bVar600)
		{
			if ((func_1546(cParam0, "cutscene@UTP1_MCS_1a") > 0.784f || func_1546(cParam0, "UTP1_MCS_1a") > 0.784f) || func_1543(cParam0, iVar416, 0, 0, 1, 1))
			{
				clear_ped_tasks(iVar416, 1, 0);
				func_1331(2);
				iLocal_569 = 1;
				open_sequence_task(&iLocal_628);
				task_follow_nav_mesh_to_coord(0, func_169(5, 5), 3f, 20000, 0.25f, 0, 40000f);
				task_put_ped_directly_into_cover(0, func_169(5, 5), 2000, 0, 0.7f, 1, 0, &(iLocal_438[0]), 0, 0, 0);
				task_put_ped_directly_into_cover(0, func_169(5, 5), -1, 1, 0, 0, 0, 0, 0, 0, 0);
				close_sequence_task(iVar625);
				task_perform_sequence(iVar416, iVar625);
				clear_sequence_task(&iLocal_628);
				_0x2208438012482a1a(iVar416, false, false);
				iLocal_603 = 1;
			}
		}
	}
	else if (iVar0 == 25)
	{
		if (!bVar610)
		{
			if (func_1546(cParam0, "cutscene@UTP1_EXT") > 0.917f || func_1546(cParam0, "UTP1_EXT") > 0.917f)
			{
				_0x9587913b9e772d29(iVar418, 0);
				iLocal_613 = 1;
			}
		}
		if (func_1543(cParam0, Global_35, 0, 0, 1, 1))
		{
			func_1398(Global_35, iVar418, 0, -1, 1);
		}
		if (func_1543(cParam0, iVar416, 0, 0, 1, 1))
		{
			func_929(iVar416, func_235(8, 4), 6, 1073741824);
		}
	}
	return 1;
}

void func_935(char[4] cParam0, int iParam1)
{
	cParam0->f_8266 = iParam1;
	func_103(cParam0, 1024);
}

bool func_936(int iParam0, bool bParam1)
{
	if (!func_266(Local_14.f_46))
	{
		Local_14.f_46 = { func_429() };
	}
	if (func_1551(&(Local_14.f_46), 1))
	{
		return true;
	}
	if (!does_entity_exist(&(Local_14.f_48[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_48[0] = create_vehicle(1770617692, -1777.432f, -385.2854f, 157.2433f, 14.2712f, true, true, false, false);
		func_818(Local_14.f_46, &(Local_14.f_48[0]));
		func_819(&(Local_14.f_48[0]), Local_14);
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
	if (!does_entity_exist(&(Local_14.f_48[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_48[1] = create_vehicle(-1308375373, -1753.1f, -405.2954f, 155.2256f, 38.4916f, true, true, false, false);
		func_818(Local_14.f_46, &(Local_14.f_48[1]));
		func_819(&(Local_14.f_48[1]), Local_14);
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
	func_1552(&(Local_14.f_46), 1);
	return true;
}

void func_937(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_1934765->f_21[iVar1], iVar2);
}

void func_938(int iParam0)
{
	func_1553();
	if (iParam0 == iLocal_205)
	{
		_set_weather_type(1420204096, true, true, false, 0f, false);
		iLocal_196 = 1;
	}
	if (iParam0 > iLocal_205 && iParam0 <= iLocal_210)
	{
		_set_weather_type_transition(1420204096, 839715153, 0.65f, 1);
		iLocal_196 = 2;
	}
	if (iParam0 == iLocal_211)
	{
		_set_weather_type(-1233681761, true, true, false, 0f, false);
		iLocal_196 = 4;
	}
}

void func_939(char[4] cParam0)
{
	iLocal_620 = 0;
	iVar0 = func_33(cParam0);
	iVar1 = func_162(cParam0, iVar0);
	func_1554(iVar0);
	if (func_33(cParam0) >= iLocal_205 && !bVar596)
	{
		if (!bVar597)
		{
			func_1555();
			func_1556(7);
			func_1556(0);
			func_1556(1);
			iLocal_600 = 1;
		}
	}
	else if (func_1557(7) && bVar597 == 1)
	{
		func_197(7);
		func_197(0);
		func_197(1);
		iLocal_600 = 0;
	}
	if (iVar1 == 5)
	{
		if (func_1558(cParam0, 6, 50f, 100f, 0, 0, 1, 422991367))
		{
			if (!func_399(iVar515, 8))
			{
				func_426(&uLocal_518, 8);
			}
		}
		else if (func_399(iVar515, 8))
		{
			func_565(&uLocal_518, 8);
		}
	}
	_0xf45e46deecf7df6e(12288, 524288, 0, -1, -1);
	func_41(1);
	if (iVar0 < iLocal_207)
	{
		func_1559(-1, 1);
	}
	func_1560(cParam0);
	func_1561();
	if (func_10(iVar375))
	{
		if (func_1562(iVar375, 1))
		{
			func_928(-1623728698, 0);
			func_11(&iLocal_378, 1, 1);
		}
		else
		{
			_0x2804658eb7d8a50b(5, -479554236);
		}
		if (func_927(-1623728698) || iVar0 >= iLocal_209)
		{
			func_11(&iLocal_378, 1, 1);
		}
	}
	if (!bVar604)
	{
		if (iVar0 >= iLocal_205 && iVar1 == 4)
		{
			_0x0d7fd6a55fd63aef(45, 3, 0);
			iLocal_607 = 1;
		}
	}
	if (!bVar605)
	{
		if (iVar0 >= iLocal_205 || func_1270())
		{
			func_925();
			iLocal_608 = 1;
		}
	}
	if (iVar0 == iLocal_203 || iVar0 == iLocal_204)
	{
		func_1563(cParam0);
	}
	if (iVar0 > iLocal_204)
	{
		if (func_166(Global_35, 0))
		{
			if (iVar0 < iLocal_210)
			{
				disable_control_action(0, 613911080, false);
				disable_control_action(0, -403992187, false);
				func_1564(0);
			}
		}
	}
	if (iVar0 == iLocal_203 || iVar0 == iLocal_204)
	{
		if (iVar1 == 5)
		{
			if (is_entity_in_volume(Global_35, iVar503, true, 0))
			{
				disable_control_action(0, -822242784, false);
				if (is_ped_in_any_vehicle(Global_35, false) && !func_1565(Global_35, -828834893))
				{
					task_leave_any_vehicle(Global_35, 0, 0);
				}
			}
			if (is_entity_in_volume(Global_35, iVar474, true, 0))
			{
				disable_control_action(0, -822242784, false);
				if (is_ped_on_mount(Global_35) && !func_1565(Global_35, 501393341))
				{
					task_dismount_animal(Global_35, 0, 0, 0, 0, 0);
				}
			}
			if (func_1566())
			{
				StringCopy(&cVar2, "UTP1_BLW_CVR", 64);
				func_1273(cParam0, cVar2, 1, 0);
			}
		}
	}
	if (iVar0 >= iLocal_205 && iVar0 < iLocal_210)
	{
		if (_does_volume_exist(iVar508) && does_entity_exist(iVar416))
		{
			if (is_entity_in_volume(iVar416, iVar508, true, 0))
			{
				func_1336(iVar416, 0, 0);
			}
		}
	}
	vVar10 = { -1771.03f, -431.0865f, 155.9247f };
	if (iVar0 > iLocal_206 && iVar0 < iLocal_208)
	{
		if (!func_1389(vVar10, 0f, 1f, 0f, 1f))
		{
			if (!_is_imap_active(-130638369))
			{
				_request_imap(-130638369);
			}
			else if (_is_imap_active(1892122519))
			{
				_remove_imap(1892122519);
			}
		}
	}
	if (iVar0 > iLocal_208)
	{
		if (!func_1389(vVar10, 0f, 1f, 0f, 1f))
		{
			if (!_is_imap_active(1892122519))
			{
				_request_imap(1892122519);
			}
			else if (_is_imap_active(-130638369))
			{
				_remove_imap(-130638369);
			}
		}
	}
	if (iVar0 >= iLocal_205)
	{
		if (_0x8a3945405b31048f() > 0.8f)
		{
			func_195(0.8f);
		}
	}
	if (iVar0 >= iLocal_205)
	{
		if (func_1567(&uLocal_282, 1114636288) || uVar595)
		{
			func_167(cParam0, iVar416, 1, 1);
		}
		else
		{
			func_167(cParam0, iVar416, 0, 1);
		}
	}
	if (iVar0 >= iLocal_205 && iVar0 <= iLocal_208)
	{
		if (!bVar594)
		{
			if (func_1354(Global_35, iVar459, 1, 0))
			{
				iLocal_597 = 1;
				if (func_1357(Local_14.f_51, 3) > 1 || iVar0 < iLocal_207)
				{
					iLocal_598 = 1;
				}
			}
		}
		else
		{
			if (iVar0 < iLocal_208)
			{
				func_1370(cParam0);
			}
			func_1375(cParam0);
		}
	}
	if ((iVar0 > iLocal_205 && iVar0 < iLocal_210) && !func_187(1024))
	{
		if (iVar0 <= iLocal_208)
		{
			vVar13 = { func_169(11, 3) };
		}
		else
		{
			vVar13 = { func_169(7, 2) };
		}
		fVar16 = func_1348(Global_35, vVar13, 1);
		fVar17 = func_1348(iVar416, vVar13, 1);
		if (((func_166(Global_35, 0) && func_166(iVar416, 0)) && (!func_900(Global_35, iVar416, 15f, 1) && func_900(Global_35, iVar416, 50f, 1))) && fVar17 <= fVar16)
		{
			func_27(&uLocal_252, 0);
			if (func_1275(&uLocal_252, 15f))
			{
				if (func_1280())
				{
					func_1284(cParam0, "UTP1_FALLBEHIND", 0);
					func_653(&uLocal_252);
				}
			}
		}
		else
		{
			func_653(&uLocal_252);
		}
	}
	StringCopy(&cVar18, "LAW_UI_DEAD_OR_ALIVE", 24);
	func_1568(cVar18);
	if (((iVar0 >= iLocal_205 || func_1270()) && !func_187(134217728)) && func_166(Global_35, 0))
	{
		set_ped_reset_flag(Global_35, 128, true);
		report_police_spotted_player(player_id());
		_0xd0b0b044112bf424(player_id());
		_0xbd944a3d36e992de();
	}
	if ((iVar0 >= iLocal_205 || func_1270()) && func_166(Global_35, 0))
	{
		if (func_1354(Global_35, iVar487, 1, 0))
		{
			set_ped_reset_flag(Global_35, 174, true);
		}
	}
	if (func_1354(Global_35, iVar461, 1, 0))
	{
		iVar21 = -387803631;
		if (!func_1569(iVar21))
		{
			func_931(0, 0);
		}
	}
	if (!bVar557)
	{
		if (func_166(&(Local_14.f_95[0]), 0) && (func_1348(&(Local_14.f_95[0]), -1783.217f, -377.4437f, 157.6015f, 1) <= 7f || iVar0 > iLocal_205))
		{
			clear_ped_tasks(&(Local_14.f_95[0]), 1, 0);
			open_sequence_task(&iLocal_628);
			task_leave_any_vehicle(0, 0, 0);
			task_smart_flee_ped(0, Global_35, 300f, -1, 0, 1077936128, 0);
			func_1570(&(Local_14.f_95[0]), &iLocal_628, 0, 0, 1, 1);
			iLocal_560 = 1;
		}
	}
	if (iVar0 >= iLocal_205 && iVar0 < iLocal_210)
	{
		if (iVar1 == 5)
		{
			func_1571();
		}
	}
	if (iVar0 == iLocal_203 || iVar0 == iLocal_204)
	{
		func_1572(&(iLocal_522[0]), "pl_base");
		func_1572(&(iLocal_522[0]), "pl_leadin");
		func_1572(&(iLocal_522[0]), "pl_wave1");
		func_1572(&(iLocal_522[0]), "pl_wave2");
		func_1572(&(iLocal_522[0]), "pl_wave3");
	}
	if (iVar0 == iLocal_204)
	{
		func_1572(&(iLocal_522[14]), "pl_Window_Idle_Base");
		func_1572(&(iLocal_522[14]), "PL_Stand_Call_Over_1");
		func_1572(&(iLocal_522[14]), "PL_Stand_Call_Over_2");
		func_1572(&(iLocal_522[14]), "PL_Stand_Point");
		func_1572(&(iLocal_522[14]), "PL_Window_CallOver_Both");
		func_1572(&(iLocal_522[14]), "PL_Window_to_Floor_Trans");
		func_1572(&(iLocal_522[14]), "PL_Floor_to_Window_Trans");
		func_1572(&(iLocal_522[14]), "PL_Window_to_Stand_Trans");
	}
	if (iVar0 == iLocal_203 || iVar0 == iLocal_204)
	{
		func_1573();
	}
	if (does_entity_exist(&(Local_14.f_48[0])) && func_900(Global_35, &(Local_14.f_48[0]), 5f, 0))
	{
		disable_control_action(0, 1939694177, false);
	}
	if (iVar0 == iLocal_203 || iVar0 == iLocal_204)
	{
		if (func_166(iVar418, 0))
		{
			set_ped_reset_flag(iVar418, 214, true);
		}
	}
	func_1574(cParam0);
	func_1575(&uLocal_780);
}

void func_940(char[4] cParam0)
{
	if (!func_23(&(cParam0->f_8269)))
	{
		return;
	}
	if (!func_121(cParam0, func_33(cParam0), 268435456))
	{
		return;
	}
	func_1576(cParam0);
}

void func_941(char[4] cParam0)
{
	if (!func_8(cParam0, 8388608))
	{
		if (func_162(cParam0, func_33(cParam0)) == 5 || func_162(cParam0, func_33(cParam0)) == 6)
		{
			if (!func_225())
			{
				if (func_914(&(cParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_232(&(cParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_942(char[4] cParam0)
{
	if (func_121(cParam0, func_33(cParam0), 8388608))
	{
		if (func_1577(cParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1578();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1295(cParam0, func_33(cParam0), 8388608);
		}
	}
}

void func_943(char[4] cParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_8(cParam0, 256))
	{
		return;
	}
	if (!func_8(cParam0, 1048576))
	{
		if (func_249() || func_54())
		{
			func_99(cParam0, 1048576);
		}
	}
	else if (!func_249() && !func_54())
	{
		func_910(cParam0, 1048576);
	}
	if (!func_8(cParam0, 134217728))
	{
		if ((func_8(cParam0, 1048576) && !func_121(cParam0, func_33(cParam0), 524288)) && !func_121(cParam0, func_33(cParam0), 1))
		{
			if (!Global_1935630->f_12)
			{
				_0xb832f1a686b9b810(Global_35, true, 0);
				func_99(cParam0, 134217728);
			}
		}
	}
	else if ((!func_8(cParam0, 1048576) || func_121(cParam0, func_33(cParam0), 524288)) || func_121(cParam0, func_33(cParam0), 1))
	{
		if (!Global_1935630->f_12)
		{
			_0xb832f1a686b9b810(Global_35, false, 0);
			func_910(cParam0, 134217728);
		}
	}
}

void func_944(char[4] cParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_121(cParam0, func_33(cParam0), 1) && !func_121(cParam0, func_33(cParam0), 1048576))
	{
		set_ped_reset_flag(Global_35, 175, true);
	}
}

void func_945(char[4] cParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!func_121(cParam0, func_33(cParam0), 2097152))
	{
		set_ped_reset_flag(Global_35, 187, true);
	}
}

void func_946(char[4] cParam0)
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

int func_947(char[4] cParam0)
{
	if ((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_265(cParam0->f_5423[iVar0]))
		{
			func_454(cParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_948(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1579(iVar0))
	{
		return false;
	}
	iVar1 = func_1580(iParam2);
	if (!func_1581(iVar1))
	{
		return false;
	}
	if (!func_1582(cParam0, iParam1, iParam2))
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

int func_949(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_21;
}

int func_950(char[4] cParam0, int iParam1)
{
	return 1;
}

void func_951(char[4] cParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_232(&(cParam0->f_603));
	}
}

void func_952(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_953(char[4] cParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(cParam0->f_13109)))
	{
		func_27(&(cParam0->f_13109), 0);
	}
	else if (func_914(&(cParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_266(cParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_267(cParam0->f_5421))
		{
			iVar2 = func_268(cParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = func_1583(cParam0->f_5421, iVar1);
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

float func_954(char[4] cParam0)
{
	return func_914(&(cParam0->f_603));
}

bool func_955(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_120(cParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_956(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_8(cParam0, -2147483648))
	{
		return true;
	}
	if (func_948(cParam0, iParam1, 4))
	{
		if (func_33(cParam0) != 25 && func_33(cParam0) != 26)
		{
			if (!func_8(cParam0, 512) && !func_120(cParam0, 4))
			{
				func_36(cParam0, func_34(iParam1), func_34(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_34(iParam2) };
				*Global_1347394 = { Var0 };
				Global_1347394->f_3 = Var0.f_3;
				Global_1572864->f_10 = func_132(iParam2);
			}
		}
		func_1584(cParam0);
		if (func_1585(cParam0))
		{
			func_1586(cParam0);
		}
		if (func_121(cParam0, func_33(cParam0), 33554432) && func_8(cParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_910(cParam0, 524288);
		func_1587(&(cParam0->f_7375), 4);
		if (func_1577(cParam0))
		{
			func_140(cParam0, func_33(cParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1578();
		}
		return true;
	}
	return false;
}

void func_957(char[4] cParam0)
{
	func_1588(cParam0);
	if (func_121(cParam0, func_33(cParam0), 2))
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

bool func_958(char[4] cParam0, int iParam1)
{
	if (func_120(cParam0, 16384))
	{
		if (func_909(cParam0))
		{
			func_51(&(cParam0->f_10792));
			func_910(cParam0, 2097152);
			func_276(cParam0, 16384);
			func_103(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(cParam0, 4))
	{
		func_950(cParam0, iParam1);
		func_99(cParam0, 4);
	}
	Var0 = { func_1510(cParam0, iParam1) };
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		if (func_8(cParam0, 2097152))
		{
			if (func_909(cParam0))
			{
				func_910(cParam0, 2097152);
				func_911(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_911(cParam0, Var0);
		}
	}
	else if (func_8(cParam0, 2097152))
	{
		if (func_909(cParam0))
		{
			func_910(cParam0, 2097152);
			func_1294(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		return func_911(cParam0, Var0);
	}
	return true;
}

bool func_959(char[4] cParam0)
{
	return func_1589(&(cParam0->f_7375));
}

void func_960(char[4] cParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1590(cParam0))
		{
			func_444(cParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1591(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

int func_961(char[4] cParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(cParam0, func_33(cParam0), 1);
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (func_265(cParam0->f_5423[iVar1]))
		{
			if (func_1592(cParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1593(cParam0, cParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_962(char[4] cParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1594(cParam0))
		{
			func_444(cParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1591(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

void func_963(char[4] cParam0)
{
	switch (func_1595(&iVar0))
	{
		case 1:
			func_1273(cParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(cParam0->f_13178))
			{
				cParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_202(iVar0) && iVar0 == func_12(cParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(cParam0->f_13178, bVar9);
			break;
	}
}

bool func_964(char[4] cParam0, int iParam1)
{
	if (func_8(cParam0, 4194304))
	{
		return false;
	}
	if (!func_121(cParam0, iParam1, 2))
	{
		return false;
	}
	return true;
}

int func_965(char[4] cParam0, int iParam1)
{
	if (func_8(cParam0, 16777216))
	{
		func_1293(cParam0);
		func_910(cParam0, 65536);
		return 0;
	}
	if (!func_121(cParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1510(cParam0, iParam1) };
	if (func_1596(cParam0, &Var0))
	{
		if (!func_8(cParam0, 65536))
		{
			func_99(cParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_966(char[4] cParam0, int iParam1)
{
	func_1597(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1, func_237(cParam0, iParam1));
}

void func_967(char[4] cParam0, int iParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 67108864))
	{
		if (does_blip_exist(cParam0->f_5303))
		{
			remove_blip(&(cParam0->f_5303));
		}
		cParam0->f_7374 = 0;
		func_952(cParam0, iParam1, 2);
		func_134(cParam0, 0);
		func_135(cParam0, 0);
		func_99(cParam0, 8);
		func_910(cParam0, -2147483648);
		func_140(cParam0, func_33(cParam0), 67108864);
		func_910(cParam0, 4);
		func_910(cParam0, 8192);
		func_910(cParam0, 536870912);
		func_276(cParam0, 4);
		func_65(0);
		func_64(0);
		func_910(cParam0, 2);
		func_45();
		cParam0->f_5302 = 0;
		func_1598(cParam0);
		if ((func_35(cParam0) == 25 || func_35(cParam0) == 26) && func_82(32768))
		{
			func_389(cParam0, 524288);
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
				func_1599(1, 1);
			}
		}
	}
}

void func_968(bool bParam0)
{
	if (!func_209(0, 0, 1) || bParam0)
	{
		iVar0 = func_1176();
		iVar1 = func_1178(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1600(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1600(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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

bool func_969(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1601(bParam1, bParam2, bParam3);
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

var func_970(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1602(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1603(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1602(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_971(char[4] cParam0)
{
	return true;
}

bool func_972(char[4] cParam0)
{
	return true;
}

int func_973(char[4] cParam0)
{
	return 1;
}

void func_974(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_975(var uParam0, int iParam1)
{
	func_565(&(uParam0->f_64), iParam1);
}

void func_976(var uParam0, int iParam1)
{
	func_426(&(uParam0->f_64), iParam1);
}

bool func_977(int iParam0)
{
	if (!func_456(iParam0))
	{
		return false;
	}
	if (does_blip_exist((*Global_1360165)[iParam0]->f_2))
	{
		return true;
	}
	return false;
}

bool func_978(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_456(iParam0))
		{
			return false;
		}
	}
	func_1604(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_979(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_456(iParam0))
		{
			return;
		}
	}
	func_1604(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_980(int iParam0, var uParam1)
{
	if (!func_456(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 == 0 || func_457(&((*Global_1360165)[iParam0]->f_12), 1))
	{
		if (does_blip_exist(*uParam1))
		{
			func_1605(iParam0);
		}
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = func_457(&((*Global_1360165)[iParam0]->f_12), 512);
	if (func_457(&((*Global_1360165)[iParam0]->f_12), 128))
	{
		iVar0 = 942020339;
	}
	else if (func_457(&((*Global_1360165)[iParam0]->f_12), 8))
	{
		iVar0 = -546708623;
	}
	if (func_457(&((*Global_1360165)[iParam0]->f_12), 256))
	{
		iVar1 = func_1606(-1739349092);
	}
	if (!does_blip_exist(*uParam1))
	{
		*uParam1 = _blip_add_for_entity(422991367, func_652(iParam0));
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
		if (bVar2 && !func_209(0, 0, 1))
		{
			_0xedd964b7984ac291(*uParam1, -1944754404);
			if (func_457(&((*Global_1360165)[iParam0]->f_12), 1024))
			{
				_blip_set_modifier(*uParam1, -46775694);
			}
			if (func_457(&((*Global_1360165)[iParam0]->f_12), 2048))
			{
				_blip_set_modifier(*uParam1, 724623647);
			}
		}
		if (iVar1 != 0)
		{
			set_blip_sprite(*uParam1, iVar1, true);
		}
		if (!is_string_null_or_empty(&((*Global_1360165)[iParam0]->f_14)) && func_457(&((*Global_1360165)[iParam0]->f_12), 8))
		{
			set_blip_name_from_text_file(*uParam1, &((*Global_1360165)[iParam0]->f_14));
		}
		else
		{
			set_blip_name_from_text_file(*uParam1, func_334(iParam0, 0));
		}
	}
}

void func_981(var uParam0, int iParam1, bool bParam2)
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

void func_982(int iParam0, bool bParam1)
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

bool func_983(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_984(int iParam0)
{
	if (!func_983(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_985(int iParam0)
{
	return iParam0 != 0;
}

int func_986(int iParam0)
{
	if (!func_983(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_987(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 78:
			*iParam1 = 0;
			*iParam2 = 3;
			break;
		case 38:
			*iParam1 = 6;
			*iParam2 = 17;
			break;
		case 69:
			*iParam1 = 18;
			*iParam2 = 21;
			break;
		case 3:
			*iParam1 = 22;
			*iParam2 = 22;
			break;
		case 5:
			*iParam1 = 36;
			*iParam2 = 55;
			break;
		case 105:
			*iParam1 = 25;
			*iParam2 = 33;
			break;
		case 101:
			*iParam1 = 35;
			*iParam2 = 35;
			break;
		case 23:
			*iParam1 = 23;
			*iParam2 = 24;
			break;
		case 26:
			*iParam1 = 60;
			*iParam2 = 65;
			break;
		case 76:
			*iParam1 = 68;
			*iParam2 = 80;
			break;
		case 92:
			*iParam1 = 82;
			*iParam2 = 86;
			break;
		case 28:
			*iParam1 = 87;
			*iParam2 = 89;
			break;
		case 115:
			*iParam1 = 90;
			*iParam2 = 94;
			break;
		case 120:
			*iParam1 = 95;
			*iParam2 = 96;
			break;
		case 117:
			*iParam1 = 99;
			*iParam2 = 100;
			break;
		case 71:
			*iParam1 = 56;
			*iParam2 = 56;
			break;
		case 98:
			*iParam1 = 57;
			*iParam2 = 57;
			break;
		case 9:
			*iParam1 = 58;
			*iParam2 = 58;
			break;
		case 79:
			*iParam1 = 59;
			*iParam2 = 59;
			break;
		case 13:
			*iParam1 = 4;
			*iParam2 = 4;
			break;
		case 14:
			*iParam1 = 5;
			*iParam2 = 5;
			break;
		case 90:
		case 128:
			*iParam1 = 34;
			*iParam2 = 34;
			break;
		case 113:
			*iParam1 = 67;
			*iParam2 = 67;
			break;
		case -1:
			*iParam1 = 101;
			*iParam2 = 101;
			break;
	}
}

void func_988(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1607(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1608(iParam0, 512);
		func_1609(iParam0, 256);
		func_1609(iParam0, 1048576);
	}
	else
	{
		func_1609(iParam0, 512);
	}
	if (bParam2)
	{
		func_1610(iParam0);
	}
}

void func_989(int iParam0, int iParam1, var uParam2)
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

struct<14> func_990(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_991(bool bParam0)
{
	iVar0 = func_475(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1024(923904168, func_1210(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1024(923904168, func_1210(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1024(923904168, func_1210(bParam0), -740156546, 0);
}

void func_992(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_993(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_475(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_994(int iParam0)
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

bool func_995(int iParam0)
{
	return func_472(iParam0) == -427144552;
}

bool func_996(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_494(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1001(iParam0, &uVar0, 1, 0, 0);
	}
	return func_356(iParam0, 1, 0);
}

void func_997(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_472(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_499(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_500(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_179(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_553(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_998(int iParam0, int iParam1)
{
	if (func_493(iParam0, 58855631))
	{
		func_1227(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_999(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_471(iParam0, 0))
	{
		return 0;
	}
	if (!func_501(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_475(bParam3), iParam0);
}

int func_1000(int iParam0, bool bParam1)
{
	if (func_505(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_475(bParam1), iParam0, 0);
}

bool func_1001(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1611(&iParam0);
	if (!func_471(iParam0, 0))
	{
		return false;
	}
	if (!func_501(0))
	{
		bParam3 = true;
	}
	if (func_995(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_991(0) };
			Var4.f_9 = -1591664384;
			if (!func_1022(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1023(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1211(iParam0, 1))
			{
				if (!func_1022(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1023(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1612(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_999(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1613(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_475(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1002()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1003(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1004(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1614(iParam0);
	fVar1 = func_1615(iParam0);
	if ((Global_1347477->f_117 || !func_495(31)) || !func_1616(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1617(iVar0) >= 7)
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
	func_1618(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_724(_create_var_string(6, func_1619(iParam0), fVar1), "itemtype_textures", func_1620(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1005(int iParam0)
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

int func_1006(int iParam0, int iParam1)
{
	if (!func_1241(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1007(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_489() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1621(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1622(), 12);
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
			else if (func_1047() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1623(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1047(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1624(), 13);
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
			else if (func_1048() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1625(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1048(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1006(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1008(int iParam0, int iParam1, int iParam2)
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

bool func_1009(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1010(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1011(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1626(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_356(iVar2, 1, 0) || func_1628(func_1627(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1015(func_1626(iVar0))), func_1015(func_1626(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1047() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1629(iVar0)), func_1629(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1623() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1629(iVar0)), func_1629(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1629(iVar0)), func_1629(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1057(iParam3, func_1630(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1053(iVar2) - iParam7) >= func_1006(iParam3, func_1631(iVar0));
				}
				else
				{
					bVar1 = func_1053(iVar2) >= func_1006(iParam3, func_1631(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1053(iVar2) + iParam7) >= func_1006(iParam3, func_1631(iVar0));
			}
			else
			{
				bVar1 = func_1053(iVar2) >= func_1006(iParam3, func_1631(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1632(iVar2)), func_1632(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1633(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1634(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1634(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1048() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1635(iVar0)), func_1635(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1625() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1635(iVar0)), func_1635(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1635(iVar0)), func_1635(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1057(iParam3, func_1630(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1053(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1636(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1636(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1637(iVar2)), func_1637(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1012(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1624() >= 13)
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

bool func_1013(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_202(func_215(0)) && ((func_1638(0) == 1 || func_1638(0) == 8) || func_1638(0) == 6))
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

var func_1014(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1015(int iParam0)
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

bool func_1016(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1017(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1018(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1019(int iParam0)
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
			func_1639(1);
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
			func_1640(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1640(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1640(3);
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
			func_1641(1);
			break;
		case 34:
			func_1642(1);
			break;
		case 35:
			func_1643(1);
			break;
		case 36:
			break;
		case 37:
			func_1644(0);
			break;
		case 38:
			func_1645(0);
			break;
		case 39:
			func_1646(0);
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
			if ((!&Global_1879534 && func_403()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_731("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_181(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_403()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_731("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_181(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_403()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_731("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_181(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_403()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_731("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_181(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1085(99217379) || func_1647(99217379) == 2110595215)
				{
					if (func_1029())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_356(iVar0, 1, 0))
					{
						func_546(iVar0, 1, 752097756);
					}
					func_525(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_356(1013902307, 1, 0))
				{
					func_546(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_356(1013902307, 1, 0))
				{
					func_546(1013902307, 1, 752097756);
				}
				if (!func_356(142640135, 1, 0))
				{
					func_546(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_356(786809402, 1, 0))
				{
					func_546(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_356(786809402, 1, 0))
				{
					func_546(786809402, 1, 752097756);
				}
				if (!func_356(-518019409, 1, 0))
				{
					func_546(-518019409, 1, 752097756);
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
			func_1648();
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

bool func_1020(int iParam0)
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

int func_1021(int iParam0, int iParam1)
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

bool func_1022(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1613(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1023(int iParam0, var uParam1, int iParam2)
{
	if (func_1649(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1024(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_471(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_475(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1025(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1650(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1214(*uParam1, &Var0, bParam6, 0))
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
	if (!func_501(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_475(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1026(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1651(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1027(int iParam0)
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
	iVar2 = func_296();
	func_343(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1028(int iParam0)
{
	if (func_1652(iParam0))
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

bool func_1029()
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

bool func_1030(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1031(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1032(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_495(50))
			{
				if (!func_495(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_495(51))
			{
				if (!func_495(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1033(int iParam0, int iParam1, var uParam2)
{
	if (!func_471(iParam1, 0))
	{
		return false;
	}
	if (func_472(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_497(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_695(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_493(iParam1, 866047851))
	{
		iVar5 = func_696(iVar4, 1);
		if (func_1653(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_497(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_493(iParam1, -1638171711))
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
			if (func_1654(1868067663, &uVar0))
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
				iVar10 = func_1655(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1655(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_497(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_493(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1656(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1034()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1035()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1036()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_356(func_1657(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1037(int iParam0)
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

bool func_1038(int iParam0, int iParam1)
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

int func_1039(int iParam0)
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

bool func_1040(int iParam0, int iParam1)
{
	iVar0 = func_1658(iParam0);
	if (iVar0 != -15)
	{
		func_343(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_721(iVar0, 1);
	}
	return false;
}

void func_1041(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1042(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1043(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1044(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1045(int iParam0)
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
	iVar1 = func_1053(iVar9);
	iVar2 = func_1053(iVar10);
	iVar3 = func_1053(iVar11);
	iVar5 = func_1054(iVar9);
	iVar6 = func_1054(iVar10);
	iVar7 = func_1054(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1053(iVar12);
		iVar8 = func_1054(iVar12);
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

void func_1046(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1047()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1659(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1048()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1049(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1636(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1636(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1636(iVar0))
		{
			*sParam2++;
		}
		if (func_1636(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1636(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1636(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1636(iVar0))
		{
			*sParam2++;
		}
		if (func_1636(iVar1))
		{
			*sParam2++;
		}
		if (func_1636(iVar0) && func_1636(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1636(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1636(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1636(iVar0))
		{
			*sParam2++;
		}
		if (func_1636(iVar1))
		{
			*sParam2++;
		}
		if (func_1636(iVar2))
		{
			*sParam2++;
		}
		if ((func_1636(iVar0) && func_1636(iVar1)) && func_1636(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1636(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1636(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1636(iVar0))
		{
			*sParam2++;
		}
		if (func_1636(iVar1))
		{
			*sParam2++;
		}
		if (func_1636(iVar2))
		{
			*sParam2++;
		}
		if (func_1636(iVar3))
		{
			*sParam2++;
		}
		if (((func_1636(iVar0) && func_1636(iVar1)) && func_1636(iVar2)) && func_1636(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1050(int iParam0)
{
	if (!func_1660(iParam0))
	{
		func_1662(func_1661(iParam0));
	}
}

int func_1051()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1660(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1052(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1053(iVar9);
	iVar2 = func_1053(iVar10);
	iVar3 = func_1053(iVar11);
	iVar5 = func_1054(iVar9);
	iVar6 = func_1054(iVar10);
	iVar7 = func_1054(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1053(iVar12);
		iVar8 = func_1054(iVar12);
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

int func_1053(int iParam0)
{
	if (func_356(iParam0, 1, 0))
	{
		iVar0 = func_179(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1054(int iParam0)
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

int func_1055(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1056(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1057(int iParam0, int iParam1)
{
	if (!func_1241(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1058(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1057(iParam1, 5) || iParam0 == func_1057(iParam1, 6)) || iParam0 == func_1057(iParam1, 7)) || iParam0 == func_1057(iParam1, 8)) || iParam0 == func_1057(iParam1, 9))
	{
		func_1049(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_490(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_492(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1059(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1057(iParam1, 5) || iParam0 == func_1057(iParam1, 6)) || iParam0 == func_1057(iParam1, 7)) || iParam0 == func_1057(iParam1, 8)) || iParam0 == func_1057(iParam1, 9))
	{
		if (func_1049(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_490(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_492(51, 0, 0, iVar0, func_1006(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_490(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_492(51, 0, 0, iVar0, func_1006(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1060()
{
	if (func_203((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1061(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1062(int iParam0)
{
	if (!func_1663(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1063(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

bool func_1064(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1664();
	if (iParam2 == 39)
	{
		Var0 = { func_705(iParam0, 1, 0) };
		iParam2 = func_696(func_706(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_493(iParam0, 866047851) && func_1653(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1066(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1665(func_1215(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1666(iParam2);
	func_1667(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1201(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1201(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1207(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1668(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1669(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1669(&(Global_1946804->f_1378), 1, 0);
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
				func_1443(func_1215(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1065(bool bParam0, bool bParam1, bool bParam2)
{
	func_1670(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1066(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1067()
{
	func_1671(&(Global_1946804->f_2776));
	func_1672(32768);
	func_1443(1108822547, 8, 6);
}

int func_1068(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_696(iParam0, 1);
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

void func_1069(int iParam0)
{
	if (func_1673(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1674(Var0);
}

void func_1070(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1674(Var0);
}

bool func_1071(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_475(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1072(var uParam0, int iParam1, int iParam2, int iParam3)
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

float func_1073()
{
	if (func_1675())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1676(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1676(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1677();
	fVar2 = func_1678();
	fVar3 = func_1679();
	fVar4 = func_1680();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1681()));
	fVar7 = (func_1676(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1682(3, round((to_float(iVar8) * fVar10)), 0);
	func_1683(3, fVar9, fVar9 > 100f);
	return func_1684(fVar7, -100f, 100f);
}

float func_1074()
{
	if (func_1675())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1676(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1676(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1677();
	fVar2 = func_1678();
	fVar3 = func_1679();
	fVar4 = func_1680();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1681()));
	fVar7 = (func_1676(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1682(2, round((to_float(iVar8) * fVar10)), 0);
	func_1683(2, fVar9, fVar9 > 100f);
	return func_1684(fVar7, -100f, 100f);
}

float func_1075()
{
	if (func_1675())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1676(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1685())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1686())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1676(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1677();
	fVar2 = func_1678();
	fVar3 = func_1679();
	fVar4 = func_1680();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1681()));
	fVar7 = (func_1676(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1682(1, round((to_float(iVar8) * fVar10)), 0);
	func_1683(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1676(0);
	}
	return func_1684(fVar7, -100f, 100f);
}

bool func_1076(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1077(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1078(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_471(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1001(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_501(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_475(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1079(int iParam0, bool bParam1)
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
				return func_1687();
			}
			break;
	}
	return 0;
}

int func_1080(int iParam0)
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

bool func_1081(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1082(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1081(iParam0))
	{
		return;
	}
	if (func_1688(iParam0))
	{
		return;
	}
	if (!func_1689(iParam0))
	{
		func_1690(iParam0, 1, 0);
	}
	iVar0 = func_1691(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1692(iParam0, 512))
		{
			func_704(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_226() && !bParam1) && !func_209(0, 0, 1))
	{
		func_733(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1693(iParam0, 6);
	if (bParam2)
	{
		if (!func_209(0, 0, 1))
		{
			func_376(1, 4);
		}
	}
}

bool func_1083(int iParam0, bool bParam1)
{
	return func_1079(iParam0, 0) < func_1694(iParam0, bParam1);
}

bool func_1084(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_497(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1085(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_696(iParam0, 1)] != &Global_1946804->f_57[func_696(iParam0, 1)];
}

void func_1086(int iParam0, int iParam1)
{
	if (func_493(iParam1, 130796156))
	{
		func_1695(iParam1, 0);
	}
	else if (func_493(iParam1, 930141731))
	{
		func_1695(iParam1, 1);
		func_1696(iParam0);
	}
}

void func_1087(var uParam0, int iParam1)
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

int func_1088(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1697(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1698(uParam2, iParam0, Var1);
	return 1;
}

int func_1089(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1090(int iParam0)
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

int func_1091(int iParam0)
{
	if (!func_1699(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1092()
{
	return !&Global_1911774;
}

void func_1093(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1094(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1095(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1096(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1097(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1098(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1076(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1076(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1099(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1076(iParam0, 65536) && !func_1076(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1076(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1076(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1100()
{
	return Global_1905944->f_5694;
}

bool func_1101(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_336((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

int func_1102(int iParam0)
{
	if (!func_557(iParam0))
	{
		return 0;
	}
	if (Global_40.f_358[iParam0]->f_5 & 2 != 0)
	{
		return 5;
	}
	if (&Global_40.f_358[iParam0] > 0 && get_wanted_level_threshold(5) > 0)
	{
		return func_1700(&(Global_40.f_358[iParam0]));
	}
	return 0;
}

void func_1103(int iParam0, int iParam1)
{
	if (!func_557(iParam0))
	{
		return;
	}
	if (!func_562(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_358[iParam0]->f_5 = (Global_40.f_358[iParam0]->f_5 || iParam1);
		return;
	}
	Global_1058888->f_42266[iParam0]->f_5 = (Global_1058888->f_42266[iParam0]->f_5 || iParam1);
}

void func_1104(int iParam0, int iParam1)
{
	if (!func_557(iParam0))
	{
		return;
	}
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_358[iParam0]->f_5 = (Global_40.f_358[iParam0]->f_5 - (Global_40.f_358[iParam0]->f_5 && iParam1));
		return;
	}
	Global_1058888->f_42266[iParam0]->f_5 = (Global_1058888->f_42266[iParam0]->f_5 - (Global_1058888->f_42266[iParam0]->f_5 && iParam1));
}

void func_1105(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		_0x563fcb6620523917(func_1701(iParam0), -1482012664);
	}
	else if (_0xe38450dbcbc70e3d(func_1701(iParam0), -1305340593) || _0xe38450dbcbc70e3d(func_1701(iParam0), -1482012664))
	{
		_0x6786d7afac3162b3(func_1701(iParam0));
	}
}

void func_1106(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1107(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_1108(int iParam0, bool bParam1, bool bParam2)
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

bool func_1109(int iParam0)
{
	if (func_1702(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_1110(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_1109(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, iParam1, iParam3);
	}
}

void func_1111(int iParam0, bool bParam1)
{
	if (func_1109(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_1112(int iParam0, bool bParam1)
{
	if (func_1109(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_1113(int iParam0, bool bParam1)
{
	if (func_1109(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_1114()
{
	return true;
}

int func_1115()
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
		iVar3 = func_1703(Global_1934765->f_318[iVar2]->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

int func_1116(int iParam0, bool bParam1, float fParam2)
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
	iVar0 = func_1704(iParam0, 1);
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = func_1705(iVar1, 1);
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
	return func_1706(iParam0, bParam1, fParam2);
}

bool func_1117(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (is_thread_active(&(Global_1934765->f_275[iVar0]), false) && &Global_1934765->f_275[iVar0] == get_id_of_this_thread())
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

float func_1118()
{
	return (func_1707(150f, to_float(Global_1934765->f_286)) / to_float(300));
}

int func_1119()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!is_thread_active(&(Global_1934765->f_275[iVar0]), false))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1120(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_1121(int iParam0)
{
	iVar0 = func_578(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1708(iVar0);
}

int func_1122(int iParam0, int iParam1)
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
			func_1709(iVar2);
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

void func_1123()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_1124(int iParam0)
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

void func_1125(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_1126(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_1127(int iParam0, int iParam1)
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
			func_1710((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1710(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_202(&(Global_1898164->f_1[0])))
	{
		func_214(&(Global_1898164->f_1[0]), 3);
	}
}

void func_1128(int iParam0, int iParam1, bool bParam2)
{
	if (!func_595(iParam0))
	{
		return;
	}
	func_1711(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_1129(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_1130(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1131(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1132()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_1133(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1712(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

float func_1134(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 73.27f;
				case 1:
					return -184.8123f;
				case 2:
					return -25.1753f;
				case 3:
					return -114.6761f;
				case 4:
					return 38.5706f;
				case 5:
					return 38.5706f;
				case 6:
					return 38.5706f;
				case 7:
					return 152.5706f;
				case 8:
					return -33.761f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 71.1007f;
				case 1:
					return 83.1007f;
				case 2:
					return 61.1007f;
				case 3:
					return 79.1007f;
				case 4:
					return 79.0854f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 141.7561f;
				case 1:
					return 129.7561f;
				case 2:
					return 97.1248f;
				case 3:
					return 48.6676f;
				case 4:
					return 131.0854f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 196.9864f;
				case 1:
					return 153.34f;
				case 2:
					return 0f;
				case 3:
					return 218.6771f;
				case 4:
					return 514.4863f;
				case 5:
					return 153.7218f;
				case 6:
					return 82.2457f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 153.793f;
				case 1:
					return -204f;
				case 2:
					return 135.7168f;
				case 3:
					return 149.7168f;
				case 4:
					return 154.8468f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 169.1913f;
				case 1:
					return 260.8269f;
				case 2:
					return 261.9971f;
				case 3:
					return 238.8669f;
				case 4:
					return 162f;
				case 5:
					return 333.9622f;
				case 6:
					return 101.3665f;
				case 7:
					return 223.3665f;
				case 8:
					return 331.3665f;
				case 9:
					return 85.1543f;
				case 10:
					return 313.1543f;
				case 11:
					return 326f;
				case 12:
					return 304.8273f;
				case 13:
					return -111.02f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -128.485f;
				case 1:
					return -109.9277f;
				case 2:
					return 125.6161f;
				case 3:
					return 125.6163f;
				case 4:
					return 125.6163f;
				case 5:
					return 155.6163f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 293.9999f;
				case 1:
					return 213.9999f;
				case 2:
					return -47.2813f;
				case 3:
					return 213.9999f;
				case 4:
					return 421.084f;
				case 5:
					return 213.552f;
				case 6:
					return -156.448f;
				case 7:
					return 67.616f;
				case 8:
					return 67.616f;
				case 9:
					return -72.384f;
				case 10:
					return -104.8085f;
				case 11:
					return -29.5804f;
				case 12:
					return 228.813f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 40.8824f;
				case 1:
					return 253.7237f;
				case 2:
					return 224.6386f;
				case 3:
					return 224.6386f;
				case 4:
					return 251.8662f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -14f;
				case 1:
					return 0f;
				case 2:
					return -23.5f;
				case 3:
					return 0f;
				case 4:
					return 0f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 277.9559f;
				case 1:
					return 335.7146f;
				case 2:
					return 254.0372f;
				case 3:
					return 260.1755f;
				case 4:
					return 276.1755f;
				case 5:
					return -80f;
				case 6:
					return 0f;
				case 7:
					return 192.7477f;
				case 8:
					return 192.7477f;
				case 9:
					return 372.3054f;
				case 10:
					return 300.417f;
				case 11:
					return 280.1241f;
				case 12:
					return 217.2008f;
				case 13:
					return 213.4218f;
				case 14:
					return 225.4218f;
				case 15:
					return 229.4218f;
				case 16:
					return -62.4717f;
				case 17:
					return 139.5283f;
				case 18:
					return 151.5283f;
				case 19:
					return 229.5283f;
				case 20:
					return 60.48f;
				case 21:
					return 64.08f;
				case 22:
					return 259.92f;
			}
			Jump @3777; //curOff = 1935
			switch (iParam1)
			{
				case 0:
					return -114.485f;
				case 1:
					return -119.9277f;
				case 2:
					return -299.8363f;
				case 3:
					return 59.5911f;
				case 4:
					return 67.5148f;
				case 5:
					return -4.4852f;
				case 6:
					return -10.4852f;
				case 7:
					return 57.6627f;
			}
			Jump @3777; //curOff = 2082
			switch (iParam1)
			{
				case 0:
					return 88.0441f;
				case 1:
					return 82.0441f;
				case 2:
					return 82.0441f;
				case 3:
					return 239.846f;
				case 4:
					return 225.846f;
				case 5:
					return 34.1592f;
				case 6:
					return 34.1592f;
				case 7:
					return 34.1592f;
				case 8:
					return 34.1592f;
				case 9:
					return 34.1592f;
				case 10:
					return 34.1592f;
			}
			Jump @3777; //curOff = 2280
			switch (iParam1)
			{
				case 0:
					return 52.046f;
				case 1:
					return 54.046f;
				case 2:
					return 229.709f;
				case 3:
					return 128.0954f;
				case 4:
					return 55.3751f;
				case 5:
					return 68.046f;
				case 6:
					return 462.804f;
				case 7:
					return 49.314f;
				case 8:
					return 73.314f;
				case 9:
					return 77.314f;
				case 10:
					return 335.912f;
				case 11:
					return 231.912f;
				case 12:
					return 245.912f;
				case 13:
					return 63.538f;
				case 14:
					return 228.8339f;
				case 15:
					return 151.92f;
			}
			Jump @3777; //curOff = 2563
			switch (iParam1)
			{
				case 0:
					return 206.9357f;
				case 1:
					return 160.9357f;
				case 2:
					return 148.9357f;
				case 3:
					return 146.1239f;
				case 4:
					return 146.1239f;
				case 5:
					return 150.1239f;
				case 6:
					return 141.5716f;
				case 7:
					return -71.8761f;
				case 8:
					return 326.1239f;
				case 9:
					return 54.1239f;
				case 10:
					return -61.3752f;
				case 11:
					return 294.9036f;
				case 12:
					return 318.8716f;
				case 13:
					return 144.8716f;
				case 14:
					return 56.9408f;
				case 15:
					return 56.9408f;
				case 16:
					return 324.9769f;
			}
			Jump @3777; //curOff = 2863
			switch (iParam1)
			{
				case 0:
					return 147.0549f;
				case 1:
					return 263.52f;
				case 2:
					return 272.1793f;
				case 3:
					return 36.3527f;
				case 4:
					return 19.0429f;
				case 5:
					return 44.0004f;
				case 6:
					return 60.0301f;
				case 7:
					return 60.8236f;
				case 8:
					return 68.8236f;
				case 9:
					return -114.6636f;
				case 10:
					return 79.5842f;
				case 11:
					return 75.5842f;
				case 12:
					return 67.5842f;
				case 13:
					return 74.0097f;
				case 14:
					return 63.3724f;
				case 15:
					return 428.4081f;
				case 16:
					return -113.427f;
			}
			Jump @3777; //curOff = 3163
			switch (iParam1)
			{
				case 0:
					return 250.649f;
				case 1:
					return 278.649f;
				case 2:
					return 281.8959f;
				case 3:
					return 329.8959f;
				case 4:
					return 239.8959f;
				case 5:
					return 320.2f;
				case 6:
					return 88.9368f;
				case 7:
					return 55.6473f;
				case 8:
					return 55.6473f;
				case 9:
					return 233.6497f;
				case 10:
					return 206.9368f;
				case 11:
					return 235.6473f;
			}
			Jump @3777; //curOff = 3378
			switch (iParam1)
			{
				case 0:
					return 324.4153f;
				case 1:
					return 339.0667f;
				case 2:
					return 363.0667f;
				case 3:
					return 60.9572f;
				case 4:
					return 50.9572f;
				case 5:
					return 340.4153f;
				case 6:
					return 418.4153f;
				case 7:
					return 144.3128f;
				case 8:
					return 136.1339f;
				case 9:
					return 204.4009f;
				case 10:
					return 234.9117f;
				case 11:
					return 155.8739f;
				case 12:
					return 87.2546f;
				case 13:
					return 73.2546f;
				case 14:
					return 79.2546f;
				case 15:
					return 79.2546f;
				case 16:
					return 214.6795f;
				case 17:
					return 264.6795f;
				case 18:
					return 44.3115f;
				case 19:
					return -29.7914f;
			}
			Jump @3777; //curOff = 3729
			switch (iParam1)
			{
				case 0:
					return 201.0796f;
				case 1:
					return 61.4916f;
			}
			return 0f;
		}

void func_1135(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1713();
	}
	else
	{
		return;
	}
	func_1714();
	Global_40.f_9.f_14 = func_296();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1715())
		{
			func_380(Global_1310720->f_1);
		}
		else if (func_1716() == func_381(Global_36, 1) && func_1717() != 2)
		{
			func_380(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_380(Global_36);
		}
		func_1718(Global_36, &vVar0, &uVar4);
		if (!func_1715())
		{
			if (func_1719(vVar0, Global_36) < func_1719(Global_40.f_9.f_7, Global_36))
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
		func_1718(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_241(Global_1935630, 8192);
	}
	func_1720();
}

bool func_1136(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (((func_265(cParam0->f_5423[iVar0]) && is_entity_an_object(&(cParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(cParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(cParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1137(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_456(iParam0))
		{
			return;
		}
	}
	func_1604(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_1138(int iParam0)
{
	func_1137(iParam0, 36, 1);
}

int func_1139(int iParam0, bool bParam1)
{
	if (!func_616(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1721(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

void func_1140(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_616(iParam0))
	{
		iVar1 = func_652(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1722(iParam0);
		}
	}
	if (func_978(iParam0, 5, 1))
	{
		set_ped_config_flag(func_652(iParam0), 137, true);
	}
}

void func_1141(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_456(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_979(iParam0, 50, 1);
		func_979(iParam0, 48, 1);
		func_979(iParam0, 49, 1);
		func_979(iParam0, 51, 1);
		func_979(iParam0, 52, 1);
		func_979(iParam0, 54, 1);
		func_979(iParam0, 55, 1);
	}
	else
	{
		func_1137(iParam0, 50, 1);
		func_1137(iParam0, 48, 1);
		func_1137(iParam0, 49, 1);
		func_1137(iParam0, 51, 1);
		if (bParam3)
		{
			func_1137(iParam0, 54, 1);
		}
		else
		{
			func_979(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_1137(iParam0, 52, 1);
			if (bParam3)
			{
				func_1137(iParam0, 55, 1);
			}
		}
		else
		{
			func_979(iParam0, 52, 1);
			if (!bParam3)
			{
				func_979(iParam0, 55, 1);
			}
		}
	}
}

void func_1142(int iParam0, bool bParam1)
{
	if (!func_456(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_652(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_652(iParam0), 204, false);
	}
}

void func_1143(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_616(iParam0))
	{
		return;
	}
	if (func_617(iParam0))
	{
		if (!func_269(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_978(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_1139(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_652(iParam0);
	if (((does_entity_exist(iVar1) && func_1723(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_1137(iParam0, 2, 1);
	}
	else
	{
		func_1724(iParam0);
		func_1137(iParam0, 1, 1);
	}
}

void func_1144(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_616(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_1145(int iParam0)
{
	if (!func_616(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_1146(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_456(iParam1))
	{
		return;
	}
	iVar0 = func_1145(iParam1);
	if (func_1725(iParam1))
	{
		if (!func_1726(iParam1))
		{
			return;
		}
	}
	func_979(iParam1, 39, 1);
	func_1727(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_1727(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_1727(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_1137(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1728(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_1147(int iParam0)
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

void func_1148(int iParam0)
{
	iParam0 = func_277(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_227(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1729(iVar6);
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

void func_1149(int iParam0, int iParam1)
{
	iParam0 = func_277(iParam0);
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

bool func_1150(int iParam0, int iParam1)
{
	iParam0 = func_277(iParam0);
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

void func_1151(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1731(func_1730(255), 109029619));
	}
	else if (func_315())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1029();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1152(int iParam0)
{
	iParam0 = func_277(iParam0);
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

void func_1153(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1731(func_1730(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_315())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1029())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1154(int iParam0)
{
	iParam0 = func_277(iParam0);
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

float func_1155(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1156(int iParam0)
{
	iParam0 = func_277(iParam0);
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
	iVar1 = func_1152(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1152(iParam0) + 1;
	fVar6 = func_1732(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1733(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1157(int iParam0)
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

void func_1158(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1159()
{
	if (func_347())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1160(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1734((Global_40.f_4283.f_325 + iParam0));
}

void func_1161(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1159())
	{
		func_724(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_724(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1162(int iParam0)
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

char* func_1163(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1164(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1165(int iParam0)
{
	func_1173(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1166(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1167(1);
	}
}

void func_1167(bool bParam0)
{
	if (bParam0)
	{
		func_1528(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1529(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1168(int iParam0)
{
	if (!func_202(iParam0))
	{
		return -15;
	}
	return func_1735(iParam0);
}

bool func_1169(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_720(iParam1) || !func_720(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1170(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1171(int iParam0)
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

bool func_1172(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1173(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1736(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1174(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1175(int iParam0, int iParam1, bool bParam2)
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

int func_1176()
{
	iVar0 = func_658();
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

int func_1177(int iParam0)
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
	fVar1 = func_1600(absf(fVar1) < 1f, func_1600(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

int func_1178(int iParam0)
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

int func_1179()
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

void func_1180(int iParam0, bool bParam1, int iParam2)
{
	func_1737((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1738(iParam0);
}

void func_1181(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1739(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1182(bool bParam0)
{
	bVar3 = false;
	if (func_1740(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1741(iVar5, &iVar2, &iVar0))
			{
				if (!func_471(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1742(iVar2);
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
							if (func_472(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1176() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1176() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1743();
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

char* func_1183(int iParam0)
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

bool func_1184(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1744(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1185(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1744(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1186(bool bParam0)
{
	if (bParam0)
	{
		func_180(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_180(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_180(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1187();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1745(2032023096);
		func_331(-615217896);
		func_692(655868243, 1, 1, -142743235, 1);
		func_1747(146323340, func_1746());
		Var0 = { func_1495() };
		if (func_1748(&Var0) == -1387633835)
		{
			func_1749(&Var0);
			func_1750(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1751(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1488(iVar6) == 2010625508)
			{
				func_1752(iVar6, iVar7);
				func_1753(iVar6, iVar8);
				func_1754(iVar6, iVar9);
				func_1755(iVar6, 0);
				if (func_1756(iVar6))
				{
					func_1757(iVar6);
				}
				iVar10 = func_1758(iVar8);
				func_1759(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1187()
{
	if (!func_1760(-1898635967, func_1746(), 1))
	{
		return 0;
	}
	if (func_347())
	{
		if (!func_1760(146323340, func_1746(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1188()
{
	func_341(34411519);
	func_341(834124286);
	func_341(-570967010);
}

void func_1189(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_180(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_180(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_180(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_180(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_180(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_180(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_180(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_180(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_180(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_180(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_180(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_692(-1080874779, 3, 1, -142743235, 1);
		func_692(-223790555, 3, 1, -142743235, 1);
		func_692(1566032147, 3, 1, -142743235, 1);
		func_692(891311852, 5, 1, -142743235, 1);
		func_692(-1353737667, 5, 1, -142743235, 1);
		func_692(-330313895, 5, 1, -142743235, 1);
		func_692(-2051332199, 5, 1, -142743235, 1);
		func_692(1237770824, 5, 1, -142743235, 1);
		func_692(-1795542128, 3, 1, -142743235, 1);
		func_692(-1757588258, 3, 1, -142743235, 1);
		func_692(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1751(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1488(iVar0) == 153881023)
			{
				func_1752(iVar0, iVar1);
				func_1753(iVar0, iVar2);
				func_1754(iVar0, iVar3);
				func_1755(iVar0, 0);
				if (func_1756(iVar0))
				{
					func_1757(iVar0);
				}
				iVar4 = func_1758(iVar2);
				func_1759(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1187();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1190(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1761(iParam0);
	if (bParam3)
	{
		func_732(iParam0, sParam1, iParam2);
	}
}

bool func_1191(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1192(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1193()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1071("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1072(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1023(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_994(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_994(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1194(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1762(Param1, iParam5, &Var5, 0))
	{
		func_1025(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1078(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1763(Var19, 1);
}

bool func_1195(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_990(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_992(&Var0, func_991(0));
	}
	if (!func_993(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1072(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1025(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_994(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1196(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_471(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_705(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1764(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1024(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1025(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1197(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_493(iParam0, 606799272))
		{
			func_1765(iParam0, iParam1);
		}
		if (func_493(iParam0, -1112814642) && func_493(iParam0, -1697809989))
		{
			func_521(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1198(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1766(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_497(iParam0) != -999503751)
		{
			func_1767(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_497(iParam0) != -999503751)
	{
		func_1767(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1768(iParam0, 1);
	return 1;
}

void func_1199()
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

void func_1200(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1769(0);
	}
	if (bParam0)
	{
		func_1208(8);
		func_1208(512);
	}
	else
	{
		func_1208(8);
		func_1208(16);
	}
}

void func_1201(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1202(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_698();
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

int func_1203(int iParam0)
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

void func_1204(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1770(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1215(iVar0, 1);
			if (func_1440(iVar0, iParam1))
			{
				vVar4 = { func_700(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1439(iVar7, 4))
				{
					func_1443(iVar7, 4, 6);
				}
			}
			else
			{
				func_1442(iVar7, 4, 6);
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

bool func_1205(int iParam0)
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
	func_1771(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1206(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1207(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_497(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1440(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1667(iVar1, iVar3);
		}
	}
	if (func_1085(-1586649372) && func_1440(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1667(iVar1, iVar3);
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
						func_1667(iVar1, iVar3);
					}
				}
			}
			func_1772(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1772(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1667(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1772(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1667(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1667(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1772(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1772(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1667(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1772(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1667(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1667(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_497(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1667(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1656(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_497(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1667(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_493(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1667(iVar1, iVar3);
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
						func_1667(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1656(&(Global_1946804->f_1497.f_1[iVar1])) || func_493(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1667(iVar1, iVar3);
					}
				}
			}
			switch (func_497(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_497(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1667(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_497(&(uParam0->f_1[iVar1])) || func_493(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1667(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

void func_1208(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1209(struct<4> Param0)
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
			if (func_1773(Param0))
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
			func_1774(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1208(8);
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
			if (func_1773(Param0))
			{
				return;
			}
			func_1774(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1208(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1070(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1210(bool bParam0)
{
	return func_1024(1328661203, func_1775(), -1591664384, bParam0);
}

bool func_1211(int iParam0, bool bParam1)
{
	if (func_497(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_495(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1212(bool bParam0)
{
	iVar0 = func_475(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1024(271701509, func_1210(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1024(271701509, func_1210(bParam0), 12999093, 0);
}

bool func_1213(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_497(iParam0);
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

bool func_1214(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_475(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1215(int iParam0, int iParam1)
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

int func_1216(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1217(int iParam0, int iParam1)
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

void func_1218(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1219(int iParam0, int iParam1)
{
	iVar0 = func_713(*iParam0);
	iVar1 = func_712(*iParam0);
	if (iParam1 < 1 || iParam1 > func_718(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1220(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1221(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1222(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1223(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1224(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1225(int iParam0)
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

bool func_1226(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_995(iParam0))
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

int func_1227(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_471(iParam0, 0))
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

int func_1228(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1611(&iParam0);
	if (!func_471(iParam0, 0))
	{
		return 0;
	}
	if (!func_501(0))
	{
		bParam2 = true;
	}
	iVar0 = func_999(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1613(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_475(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1229(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_493(iParam0, -5284486))
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
		if (func_1776(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_678(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_681(iVar62, iVar61);
					if (func_471(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1229(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1229(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1776(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1230(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1777(1);
}

void func_1231(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1778(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_334(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1778(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_334(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1232()
{
	return Global_40.f_4283.f_325;
}

bool func_1233(int iParam0)
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

bool func_1234(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1235(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1236(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1237(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1238(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_403();
	bVar1 = false;
	if (bVar0 && !func_1101(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1101(37)) && !func_1101(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1101(43)) && !func_1101(44))
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

int func_1239()
{
	return Global_40.f_1095.f_3054;
}

bool func_1240(int iParam0)
{
	iParam0 = func_277(iParam0);
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

bool func_1241(int iParam0, var uParam1)
{
	if (!func_1779(iParam0))
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

int func_1242()
{
	if (func_403())
	{
		if (!func_1101(3))
		{
			return func_1780(43);
		}
		if (func_1101(38) && !func_1101(43))
		{
			return func_1781(8);
		}
	}
	return 0;
}

bool func_1243(int iParam0)
{
	if (!func_258(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1782(iParam0));
}

Vector3 func_1244(int iParam0, int iParam1)
{
	func_1241(15, &Var0);
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

int func_1245(int iParam0, int iParam1)
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
	iVar0 = func_1783(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1241(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1784(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1246(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1785(iParam0);
	if (func_573(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1247(int iParam0)
{
	if (!func_1241(15, &Var0))
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

bool func_1248(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_1786(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1787(5))
	{
		if (func_1788(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1482(vParam0);
	if (bParam6)
	{
		iVar1 = func_381(vParam0, 1);
		if (func_116(iVar1) || func_1789(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1790(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1791())
	{
		if (func_1792(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1793(iVar0))
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
	if (!func_1794(iParam3, iParam4))
	{
		return false;
	}
	if (func_1795(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1796(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_403())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1797(vParam0, bParam10) || func_1798(vParam0, bParam10))
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

int func_1249(vector3 vParam0)
{
	iVar0 = func_1799(vParam0, 0f, 0f, 0, 2);
	return func_1799(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1250(int iParam0)
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

char* func_1251(int iParam0)
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

char* func_1252(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1800(iVar0);
}

char* func_1253(int iParam0)
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

void func_1254(char[4] cParam0, int iParam1)
{
	iVar0 = func_132(iParam1);
	if (!func_1579(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*cParam0->f_1[iVar0])[iVar1] = 63603;
		clear_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1255(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1579(iVar0))
	{
		cParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

bool func_1256(char[4] cParam0)
{
	if (!does_entity_exist(iVar419) || is_entity_dead(iVar419))
	{
		iLocal_422 = func_1801(-2014377075, 2801.95f, -1186.243f, 49.9367f, 21.9978f, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0);
		return false;
	}
	set_entity_only_damaged_by_player(iVar419, true);
	remove_all_ped_weapons(iVar419, true, true);
	set_ped_relationship_group_hash(iVar419, 623901053);
	func_1802(iVar419, 0, 1);
	set_blocking_of_non_temporary_events(iVar419, true);
	set_ped_config_flag(iVar419, 253, true);
	set_ped_config_flag(iVar419, 169, true);
	set_ped_can_be_targetted(iVar419, false);
	func_1803(iVar419, 0);
	func_151(cParam0, iVar419, 0, 0, 0, 0, 0);
	if (func_449(cParam0, iVar419))
	{
		func_451(cParam0, iVar419, 128);
	}
	return true;
}

bool func_1257(char[4] cParam0)
{
	if (!func_259(26))
	{
		return false;
	}
	if (is_entity_dead(&(Local_14.f_16[0])))
	{
		func_1804(0, 1);
		return false;
	}
	if (!func_1804(2, 1))
	{
		return false;
	}
	if (!func_1804(1, 1))
	{
		return false;
	}
	if (!is_entity_dead(&(Local_14.f_16[0])))
	{
		set_blocking_of_non_temporary_events(&(Local_14.f_16[0]), false);
		func_151(cParam0, &(Local_14.f_16[0]), "StrSheriff_01", 0, 0, 0, 0);
		func_145(cParam0, &(Local_14.f_16[0]), "UTP1_Sheriff", 0);
		_0x986f7a51ee3e1f92(&(Local_14.f_16[0]), 0);
	}
	if (!is_entity_dead(&(Local_14.f_16[2])))
	{
		func_151(cParam0, &(Local_14.f_16[2]), 0, 0, 0, 0, 0);
		func_145(cParam0, &(Local_14.f_16[2]), "UTP1_Deputy", 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_16[2]), false);
		func_1805(&(Local_14.f_16[2]), 0.9f, 0);
		func_982(&(Local_14.f_16[2]), 1);
		_0x986f7a51ee3e1f92(&(Local_14.f_16[2]), 0);
	}
	if (!is_entity_dead(&(Local_14.f_16[1])))
	{
		func_151(cParam0, &(Local_14.f_16[1]), 0, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_16[1]), false);
		func_982(&(Local_14.f_16[1]), 1);
		_0x986f7a51ee3e1f92(&(Local_14.f_16[1]), 0);
	}
	func_653(&uLocal_228);
	return true;
}

bool func_1258(char[4] cParam0, struct<4> Param1)
{
	if (!does_entity_exist(iVar412))
	{
		iLocal_419 = func_159(cParam0);
	}
	if (!is_entity_dead(iVar412))
	{
		iVar0 = func_33(cParam0);
		if (iVar0 < iLocal_209)
		{
			func_1806(6, iVar412, 1300659195);
			if (!func_1807(iVar412))
			{
				return false;
			}
			func_1808(6, iVar412, 1300659195, 1);
		}
		else
		{
			func_1806(6, iVar412, -571427255);
			if (!func_1807(iVar412))
			{
				return false;
			}
			func_1808(6, iVar412, -571427255, 1);
		}
		func_1809(cParam0, iVar412, 0);
		if (iVar0 != iLocal_205 && iVar0 != iLocal_204)
		{
			func_929(iVar412, Param1, 2, 1073741824);
		}
		set_ped_can_ragdoll_from_player_impact(iVar412, false);
		set_blocking_of_non_temporary_events(iVar412, true);
		set_combat_float(iVar412, 3, 0.75f);
		set_ped_flee_attributes(iVar412, 512, true);
		iLocal_538 = get_ped_accuracy(iVar412);
		iLocal_539 = round((to_float(iVar531) * 0.9f));
		set_ped_accuracy(iVar412, iVar532);
		_set_ped_infinite_ammo_clip(iVar412, true);
		set_ragdoll_blocking_flags(iVar412, 262145);
		if (iVar0 < iLocal_205)
		{
			remove_all_ped_weapons(iVar412, true, true);
		}
		else if (iVar0 == iLocal_205)
		{
			func_1331(1);
		}
		else if (iVar0 < iLocal_209)
		{
			func_1331(2);
		}
		else
		{
			func_1331(4);
		}
		func_145(cParam0, iVar412, "MICAH_BELL", 0);
		func_151(cParam0, iVar412, 0, 0, 0, 0, 0);
		func_1811(cParam0, iVar412, 346256, 0, 0, 67108863, 1023, 3, -1);
		if (iVar0 < iLocal_206)
		{
			func_164(cParam0, iVar412, 0);
			func_165(6, 1);
		}
		if (iVar0 >= iLocal_206)
		{
			func_165(6, 0);
			func_1314(cParam0, iVar412, 1105014447, 422991367, 1, 1);
		}
	}
	else
	{
		return false;
	}
	if (func_33(cParam0) == 25)
	{
		if (is_entity_dead(iVar413))
		{
			iLocal_420 = func_1812(6, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			return false;
		}
	}
	return true;
}

void func_1259(int iParam0)
{
	Global_40.f_9.f_21 = (Global_40.f_9.f_21 || iParam0);
}

void func_1260(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_1261(char[4] cParam0)
{
	func_1813(&(cParam0->f_7375));
}

void func_1262()
{
	if (is_entity_dead(&(Local_14.f_16[0])))
	{
		return;
	}
	if (!does_entity_exist(iVar424))
	{
		iLocal_426 = create_object(-1473388640, -1811.077f, -354.2801f, 164.4462f, true, true, false, false, true);
	}
	if (!_is_anim_scene_started(&(iLocal_522[11]), false))
	{
		set_anim_scene_entity(&(iLocal_522[11]), "cs_strsheriff_01", &(Local_14.f_16[0]), 0);
		set_anim_scene_entity(&(iLocal_522[11]), "p_pen01x", iVar424, 0);
		start_anim_scene(&(iLocal_522[11]));
		_set_anim_scene_playback_list_bool(&(iLocal_522[11]), "pl_IG12_Sheriff_Aggro", true);
	}
}

int func_1263()
{
	if (!func_166(iVar417, 0))
	{
		return 0;
	}
	if (!func_166(Global_35, 0))
	{
		return 0;
	}
	if (!_is_anim_scene_started(&(iLocal_522[0]), false))
	{
		set_anim_scene_entity(&(iLocal_522[0]), func_1251(iVar417), iVar417, 0);
		set_anim_scene_entity(&(iLocal_522[0]), func_1251(Global_35), Global_35, 0);
		start_anim_scene(&(iLocal_522[0]));
		_set_anim_scene_playback_list_bool(&(iLocal_522[0]), "pl_base", true);
	}
	return 1;
}

void func_1264(char[4] cParam0)
{
	if (func_187(64))
	{
		if (is_entity_in_volume(Global_35, iVar487, true, 0))
		{
			if (!func_26(&uLocal_225))
			{
				func_27(&uLocal_225, 1);
			}
			else if (!func_1355("UTP1_SHERWRN"))
			{
				if (func_1283(&uLocal_225) > 8f || ((func_1283(&uLocal_225) > 3f && get_current_ped_weapon(Global_35, &iVar0, true, 0, false)) && iVar0 != -1569615261))
				{
					func_470(8192);
				}
			}
			else
			{
				func_27(&uLocal_225, 1);
			}
		}
	}
	if (((_does_volume_exist(iVar474) && is_entity_in_volume(Global_35, iVar474, true, 0)) && !is_entity_in_volume(Global_35, iVar487, true, 0)) && is_projectile_type_within_distance(func_169(9, 4), -1504859554, 3f, true))
	{
		_0x785177e4d57d7389(player_id(), 481893872, 0, 0, -1);
		func_40(0);
		_0x062b4a4a3396351d(player_id());
		bVar1 = true;
	}
	else
	{
		func_40(1);
	}
	if (((!func_187(4) && !is_explosion_in_sphere(25, func_169(9, 4), 1f)) && !func_468(4)) && !bVar1)
	{
		if (func_1814(&(Local_14.f_16[0]), 0, &uLocal_381, &uLocal_409, 0, 0))
		{
			bVar2 = true;
		}
		if (func_1814(&(Local_14.f_16[1]), 0, &uLocal_381, &uLocal_409, 0, 0))
		{
			bVar2 = true;
		}
		if (func_1814(&(Local_14.f_16[2]), 0, &uLocal_381, &uLocal_409, 0, 0))
		{
			bVar2 = true;
		}
		if (func_266(Local_14.f_14) && func_1815(Local_14.f_14, Global_35, 1))
		{
			bVar2 = true;
		}
		if (func_969(player_id(), 1, 0, 1))
		{
			bVar2 = true;
		}
		if (func_1816(Global_35, &(Local_14.f_16), 0.75f, 1))
		{
			bVar2 = true;
		}
		if (func_1271(Global_35, iVar465, 0, 1))
		{
			bVar2 = true;
		}
		if (func_187(8192))
		{
			bVar2 = true;
		}
		if (func_1817())
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		if (!is_entity_dead(Global_35))
		{
			if (!is_entity_dead(&(Local_14.f_16[0])))
			{
				func_1818();
				func_1819(&(Local_14.f_16[0]));
				func_1820(&(Local_14.f_16[0]), 1);
			}
			func_27(&uLocal_285, 1);
		}
		if (func_187(8192))
		{
			iLocal_631 = func_1276(cParam0);
			func_135(cParam0, 13);
		}
		else
		{
			iLocal_631 = func_1276(cParam0);
			func_135(cParam0, 11);
		}
		func_140(cParam0, iLocal_203, 8);
		block_dispatch_service_resource_creation(15, true);
		block_dispatch_service_resource_creation(6, true);
		_0xd6c0a8c7c0b2f82c(player_id(), 0);
		func_470(4);
	}
	if (func_26(&uLocal_285) && (func_1275(&uLocal_285, 1.5f) || is_ped_shooting(Global_35)))
	{
		if (!is_entity_dead(Global_35))
		{
			if (!is_entity_dead(&(Local_14.f_16[1])))
			{
				clear_ped_tasks_immediately(&(Local_14.f_16[1]), false, true);
				func_1821(&(Local_14.f_16[1]), -1595050198, 1, 1);
				_blip_set_modifier(get_blip_from_entity(&(Local_14.f_16[1])), -1034486097);
				_0x1854217c640b39ec(&(Local_14.f_16[1]), Global_35, 0f, 0f, 0f, 1f, 0, 0);
				task_combat_ped(&(Local_14.f_16[1]), Global_35, 0, 0);
				set_ped_combat_attributes(&(Local_14.f_16[1]), 50, true);
				set_ped_combat_attributes(&(Local_14.f_16[1]), 71, true);
				iLocal_592[1] = 1;
			}
			if (!is_entity_dead(&(Local_14.f_16[2])))
			{
				func_1821(&(Local_14.f_16[2]), -1595050198, 1, 1);
				_blip_set_modifier(get_blip_from_entity(&(Local_14.f_16[2])), -1034486097);
				set_ped_sphere_defensive_area(&(Local_14.f_16[2]), func_169(0, 3), 1f, 0, false, 0);
				task_combat_ped(&(Local_14.f_16[2]), Global_35, 0, 0);
				iLocal_592[2] = 1;
			}
			func_653(&uLocal_285);
		}
	}
	if (func_187(4) && _does_anim_scene_exist(&(iLocal_522[11])))
	{
		if (_0x8d81e7824b7753f7(&(iLocal_522[11]), "s_IG12_Sheriff_Seated_Loop", 1))
		{
			set_anim_scene_rate(&(iLocal_522[11]), 5f);
		}
		else
		{
			set_anim_scene_rate(&(iLocal_522[11]), 1.25f);
			if (!bVar609)
			{
				if (_0x8d81e7824b7753f7(&(iLocal_522[11]), "s_IG12_Sheriff_Aggro", 1) && _get_anim_scene_progress(&(iLocal_522[11])) > 0.734f)
				{
					if (does_entity_exist(iVar426))
					{
						activate_physics(iVar426);
						apply_force_to_entity(iVar426, 3, 0f, -8f, 4f, 0f, 0f, 0f, 0, true, true, true, false, true);
						iLocal_612 = 1;
					}
				}
			}
		}
		if ((!_is_anim_scene_started(&(iLocal_522[11]), false) || _0x005e6f28dd7ed58d(&(iLocal_522[11]), "cs_strsheriff_01")) || func_1385(&(iLocal_522[11])))
		{
			func_1821(&(Local_14.f_16[0]), -1595050198, 1, 1);
			_blip_set_modifier(get_blip_from_entity(&(Local_14.f_16[0])), -1034486097);
			set_blocking_of_non_temporary_events(&(Local_14.f_16[0]), true);
			set_ped_sphere_defensive_area(&(Local_14.f_16[0]), func_169(0, 8), 2f, 1, false, 0);
			open_sequence_task(&iLocal_628);
			task_shoot_at_entity(0, Global_35, 1500, -687903391, 0);
			task_go_to_coord_while_aiming_at_entity(0, func_169(0, 8), Global_35, 1f, 1, 1.5f, 0f, 1, 0, 0, -687903391, 20000, 0);
			task_combat_ped(0, Global_35, 0, 0);
			close_sequence_task(iVar625);
			task_perform_sequence(&(Local_14.f_16[0]), iVar625);
			clear_sequence_task(&iLocal_628);
			_0x2208438012482a1a(&(Local_14.f_16[0]), false, false);
			iLocal_592[0] = 1;
			_delete_anim_scene(&(iLocal_522[11]));
		}
	}
	if (func_187(4))
	{
		if (!bVar593)
		{
			if ((is_entity_in_volume(Global_35, iVar463, true, 0) || is_entity_in_volume(Global_35, iVar464, true, 0)) || is_entity_in_volume(Global_35, iVar465, true, 0))
			{
				iLocal_596 = 1;
			}
		}
		else
		{
			if ((func_166(&(Local_14.f_16[1]), 0) && iLocal_592[1]) // PointerArith)
			{
				func_50(&(Local_14.f_16[1]));
				set_ped_combat_attributes(&(Local_14.f_16[1]), 50, true);
			}
			if ((func_166(&(Local_14.f_16[2]), 0) && iLocal_592[2]) // PointerArith)
			{
				func_50(&(Local_14.f_16[2]));
				set_ped_combat_attributes(&(Local_14.f_16[2]), 50, true);
			}
			if ((func_166(&(Local_14.f_16[0]), 0) && iLocal_592[0]) // PointerArith)
			{
				func_50(&(Local_14.f_16[0]));
				set_ped_combat_attributes(&(Local_14.f_16[0]), 50, true);
			}
		}
	}
}

void func_1265(char[4] cParam0)
{
	if (is_entity_in_volume(Global_35, iVar487, true, 0))
	{
		func_470(524288);
	}
	if (func_187(4))
	{
		return;
	}
	switch (iLocal_160)
	{
		case 0:
			if (is_entity_in_volume(Global_35, iVar487, true, 0))
			{
				func_27(&uLocal_222, 0);
				if (func_1275(&uLocal_222, 2f) || (get_current_ped_weapon(Global_35, &iVar1, true, 0, false) && iVar1 != -1569615261))
				{
					iLocal_631 = func_1276(cParam0);
					if (get_current_ped_weapon(Global_35, &iVar1, true, 0, false) && iVar1 == -1569615261)
					{
						if (!is_entity_dead(&(Local_14.f_16[2])))
						{
							task_turn_ped_to_face_entity(&(Local_14.f_16[2]), Global_35, -1, -1082130432, -1082130432, -1082130432);
						}
						if (!is_entity_dead(&(Local_14.f_16[1])))
						{
							task_look_at_entity(&(Local_14.f_16[1]), Global_35, -1, 0, 51, 0);
						}
						func_135(cParam0, 10);
					}
					else
					{
						if (!is_entity_dead(&(Local_14.f_16[1])))
						{
							open_sequence_task(&iVar0);
							task_turn_ped_to_face_entity(0, Global_35, -1, 3f, 0.25f, -1082130432);
							task_swap_weapon(0, 1, 0, 0, 0);
							task_aim_at_entity(0, Global_35, -1, 1, 0);
							close_sequence_task(iVar0);
							task_perform_sequence(&(Local_14.f_16[1]), iVar0);
							clear_sequence_task(&iVar0);
						}
						if (!is_entity_dead(&(Local_14.f_16[2])))
						{
							open_sequence_task(&iVar0);
							task_stand_still(0, 500);
							task_swap_weapon(0, 1, 0, 0, 0);
							task_aim_at_entity(0, Global_35, -1, 1, 0);
							close_sequence_task(iVar0);
							task_perform_sequence(&(Local_14.f_16[2]), iVar0);
							clear_sequence_task(&iVar0);
						}
						iLocal_572 = 1;
						func_135(cParam0, 15);
					}
					func_653(&uLocal_222);
					iLocal_160 = 1;
				}
			}
			else
			{
				func_653(&uLocal_222);
			}
			break;
		case 1:
			if (func_187(32) || func_187(524288))
			{
				if (!bVar569)
				{
					if (get_current_ped_weapon(Global_35, &iVar1, true, 0, false) && iVar1 != -1569615261)
					{
						if (!is_entity_dead(&(Local_14.f_16[1])))
						{
							open_sequence_task(&iVar0);
							task_turn_ped_to_face_entity(0, Global_35, -1, 3f, 0.25f, -1082130432);
							task_swap_weapon(0, 1, 0, 0, 0);
							task_aim_at_entity(0, Global_35, -1, 1, 0);
							close_sequence_task(iVar0);
							task_perform_sequence(&(Local_14.f_16[1]), iVar0);
							clear_sequence_task(&iVar0);
						}
						if (!is_entity_dead(&(Local_14.f_16[2])))
						{
							open_sequence_task(&iVar0);
							task_stand_still(0, 500);
							task_swap_weapon(0, 1, 0, 0, 0);
							task_aim_at_entity(0, Global_35, -1, 1, 0);
							close_sequence_task(iVar0);
							task_perform_sequence(&(Local_14.f_16[2]), iVar0);
							clear_sequence_task(&iVar0);
						}
						iLocal_572 = 1;
						func_135(cParam0, 15);
					}
				}
				if (!func_187(64))
				{
					if (!func_26(&uLocal_222) && is_entity_in_volume(Global_35, iVar487, true, 0))
					{
						func_27(&uLocal_222, 1);
					}
					if (!is_entity_in_volume(Global_35, iVar487, true, 0))
					{
						func_653(&uLocal_222);
						iLocal_160 = 0;
					}
					if (func_1283(&uLocal_222) > 4f)
					{
						if (!is_entity_dead(&(Local_14.f_16[1])))
						{
							clear_ped_tasks(&(Local_14.f_16[1]), 1, 0);
							open_sequence_task(&iVar0);
							task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
							close_sequence_task(iVar0);
							task_perform_sequence(&(Local_14.f_16[1]), iVar0);
							clear_sequence_task(&iVar0);
							if (!is_entity_dead(&(Local_14.f_16[2])))
							{
								clear_ped_tasks(&(Local_14.f_16[2]), 1, 0);
								set_blocking_of_non_temporary_events(&(Local_14.f_16[2]), true);
								task_aim_at_entity(&(Local_14.f_16[2]), Global_35, -1, 0, 0);
								set_ped_config_flag(&(Local_14.f_16[2]), 297, true);
							}
							iLocal_631 = func_1276(cParam0);
							func_135(cParam0, 30);
							iLocal_160 = 3;
						}
					}
				}
			}
			break;
	}
}

void func_1266(char[4] cParam0)
{
	if (!is_entity_dead(iVar416))
	{
		switch (iLocal_212)
		{
			case 0:
				if (is_entity_in_volume(Global_35, iVar463, true, 0))
				{
					if (func_10(iVar373))
					{
						_0xdd1232b332cbb9e7(3, 1, 0);
						if (!func_1290() || func_1355("UTP1_GRAB"))
						{
							func_1284(cParam0, "UTP1_JAILHRY", 0);
						}
					}
					else if (func_187(4))
					{
						if (iLocal_194 == 3)
						{
							func_1284(cParam0, "UTP1_JAILGET", 0);
						}
					}
					func_232(&uLocal_222);
					func_470(32);
					func_1260(&iLocal_212, 1);
				}
				break;
			case 1:
				break;
		}
	}
}

void func_1267(char[4] cParam0)
{
	if ((iLocal_194 == 13 || bVar568) || iLocal_195 >= 1)
	{
		return;
	}
	if (!is_entity_in_volume(Global_35, iVar487, true, 0))
	{
		if (iVar829 > 0)
		{
			if (_is_anim_scene_started(&(iLocal_522[12]), false))
			{
				reset_anim_scene(&(iLocal_522[12]), 0);
				func_1386(33554432);
				Var0 = { func_235(4, 3) };
				task_follow_nav_mesh_to_coord(iVar416, Var0, 1f, 20000, 0.25f, 0, Var0.f_3);
				Var4 = { func_235(0, 7) };
				task_follow_nav_mesh_to_coord(iVar419, Var4, 1f, 20000, 0.25f, 0, Var4.f_3);
			}
			return;
		}
		if (!_is_anim_scene_started(&(iLocal_522[0]), false))
		{
			if (_is_anim_scene_started(&(iLocal_522[12]), false))
			{
				reset_anim_scene(&(iLocal_522[12]), 0);
				func_1386(33554432);
			}
			if (_is_anim_scene_loaded(&(iLocal_522[0]), true, false) && _0x23e33cb9f4a3f547(&(iLocal_522[0]), "pl_base"))
			{
				func_1263();
			}
		}
	}
	else if (func_1573() && !_is_anim_scene_started(&(iLocal_522[12]), false))
	{
		if (_is_anim_scene_started(&(iLocal_522[0]), false))
		{
			reset_anim_scene(&(iLocal_522[0]), 0);
		}
		if (_is_anim_scene_loaded(&(iLocal_522[12]), true, false) && _0x23e33cb9f4a3f547(&(iLocal_522[12]), "pl_IG13_Standing_Idle"))
		{
			func_1822();
		}
		else
		{
			load_anim_scene(&(iLocal_522[12]));
			_0xdf7b5144e25cd3fe(&(iLocal_522[12]), "pl_IG13_Bomb_Breakout_Enter");
			_0xdf7b5144e25cd3fe(&(iLocal_522[12]), "pl_IG13_Bomb_Breakout_Exit");
			_0xdf7b5144e25cd3fe(&(iLocal_522[12]), "pl_IG13_Cower_Impatient_Loop");
			_0xdf7b5144e25cd3fe(&(iLocal_522[12]), "pl_IG13_Cower_Loop");
			_0xdf7b5144e25cd3fe(&(iLocal_522[12]), "pl_IG13_Key_Breakout");
			_0xdf7b5144e25cd3fe(&(iLocal_522[12]), "pl_IG13_Standing_Idle");
		}
	}
}

void func_1268()
{
	if (!func_399(iVar516, 32768))
	{
		if (has_player_damaged_at_least_one_ped(player_id()) || is_ped_shooting(Global_35))
		{
			clear_player_has_damaged_at_least_one_ped(player_id());
			func_426(&uLocal_518, 32768);
		}
	}
}

bool func_1269(char[4] cParam0)
{
	if (bVar767)
	{
		return true;
	}
	vVar0 = { -1814.152f, -360.891f, 161.079f };
	vVar3 = { -1817.544f, -362.0417f, 161.0887f };
	if (iVar766 == 0)
	{
		uLocal_769 = _0x6f3068258a499e52(-1205874435, vVar0, 11);
		return false;
	}
	else if (_0x1ff441d7954f8709(iVar766))
	{
		if (!does_entity_exist(iVar421) && does_entity_exist(_0x4735e2a4bb83d9da(iVar766)))
		{
			iLocal_424 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(iVar766));
			return false;
		}
	}
	if (!does_entity_exist(iVar422))
	{
		iLocal_425 = create_object(2051399415, vVar3, true, true, false, false, true);
		set_entity_invincible(iVar422, true);
		return false;
	}
	if (does_entity_exist(iVar421) && does_entity_exist(iVar422))
	{
		vVar6 = { get_entity_coords(iVar421, true, false) };
		func_1823(iVar421, vVar6);
		freeze_entity_position(iVar421, true);
		func_432(cParam0, iVar421, 0, 0, 0, 0, 0);
		iLocal_770 = 1;
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1270()
{
	return func_399(iVar516, 4);
}

bool func_1271(int iParam0, int iParam1, int iParam2, bool bParam3)
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

struct<8> func_1272(int iParam0)
{
	StringCopy(&cVar0, func_1824(iParam0), 64);
	StringConCat(&cVar0, "_ABANDON", 64);
	return cVar0;
}

void func_1273(char[4] cParam0, char[4] cParam1, bool bParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	func_1825(cParam0, &cParam1, "", bParam9, bParam10);
}

void func_1274()
{
	if (!func_187(8192) && !func_1270())
	{
		disable_control_action(0, 130948705, false);
		disable_control_action(0, 42190210, false);
		disable_control_action(0, -1292666904, false);
		fVar0 = func_1434(Global_36, func_169(9, 4), 1);
		if (absf((fVar0 - get_entity_heading(Global_35))) <= 90f)
		{
			set_ped_max_move_blend_ratio(Global_35, 1f);
		}
	}
}

bool func_1275(var uParam0, float fParam1)
{
	if (!func_26(uParam0))
	{
		return false;
	}
	if (func_914(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_1276(char[4] cParam0)
{
	return cParam0->f_599;
}

void func_1277(char[4] cParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	sVar0 = func_1603(iParam7, sParam1, sParam3, sParam4, sParam5, sParam6);
	if (get_hash_key(sParam1) != cParam0->f_5302)
	{
		_uilog_set_cached_objective(sVar0);
		cParam0->f_5302 = get_hash_key(sParam1);
		_uilog_add_or_update_objective(1, func_85(cParam0), get_hash_key(sParam1), sParam1, fParam2 >= 0.9f, false, false);
	}
	func_140(cParam0, func_33(cParam0), 33554432);
}

bool func_1278(char[4] cParam0, char* sParam1, int iParam2, float fParam3, char* sParam4)
{
	if (iParam2 == 0 || iParam2 == 4)
	{
		if (func_1290() || func_225())
		{
			return false;
		}
	}
	else if (iParam2 == 7 && func_226())
	{
		return false;
	}
	else if (iParam2 == 6 && func_1826(sParam1))
	{
		func_653(&(cParam0->f_13106));
		return true;
	}
	if (iParam2 != 2 && iParam2 != 3)
	{
		func_27(&(cParam0->f_13106), 0);
	}
	if ((func_1275(&(cParam0->f_13106), fParam3) || fParam3 <= 0f) || (iParam2 == 2 && iParam2 == 3))
	{
		switch (iParam2)
		{
			case 0:
				if (!func_1284(cParam0, sParam1, 0))
				{
					return false;
				}
				break;
			case 1:
				func_1284(cParam0, sParam1, 0);
				break;
			case 2:
			case 3:
				bVar0 = iParam2 == 2;
				if (!is_string_null_or_empty(sParam4))
				{
					if (_0x1ecc76792f661cf5(sParam4))
					{
						pause_scripted_conversation(sParam4, bVar0, true, false, true);
						func_653(&(cParam0->f_13106));
						return false;
					}
					else if (!_0xd89504d9d7d5057d(sParam4) || !_0xf01c570e0a0a1e67(sParam4))
					{
						if (iParam2 == 3)
						{
							func_1284(cParam0, sParam1, 0);
						}
						else if (!func_1284(cParam0, sParam1, 0))
						{
							return false;
						}
					}
					if (_0xd89504d9d7d5057d(sParam4) && _0xf01c570e0a0a1e67(sParam4))
					{
						if (!func_26(&(cParam0->f_13106)) && func_1284(cParam0, sParam1, 0))
						{
							func_27(&(cParam0->f_13106), 0);
							return false;
						}
						if (func_26(&(cParam0->f_13106)))
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
					func_1284(cParam0, sParam1, 0);
				}
				else if (!func_1284(cParam0, sParam1, 0))
				{
					return false;
				}
				break;
			case 4:
			case 6:
				func_1281(cParam0, sParam1, 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				break;
			case 5:
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1281(cParam0, sParam1, 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
				break;
			case 7:
				func_733(sParam1, 10000, 0, 0, 0, 1);
				break;
			case 8:
				func_113(1);
				func_733(sParam1, 10000, 0, 0, 0, 1);
				break;
			case 9:
				func_113(1);
				func_1827(sParam1, 0, 0, 1);
				break;
		}
		func_653(&(cParam0->f_13106));
		return true;
	}
	return false;
}

int func_1279(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	iVar0 = _blip_add_for_radius(iParam0, vParam1, fParam4);
	if (bParam5)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

bool func_1280()
{
	if ((((!_0xa2cac9def0195e6f(0) && !func_225()) && is_screen_faded_in()) && !is_screen_fading_in()) && !func_1828())
	{
		return true;
	}
	return false;
}

var func_1281(char[4] cParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, float fParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10)
{
	func_1277(cParam0, sParam1, fParam5, sParam6, sParam7, sParam8, sParam9, iParam10);
	if (bParam4)
	{
		_uilog_set_has_displayed_cached_objective();
		uVar0 = func_970(sParam1, iParam3, bParam4, 1, sParam6, sParam7, sParam8, sParam9, iParam10);
	}
	else if (!func_1829(cParam0, sParam1))
	{
		sVar1 = func_1603(iParam10, sParam1, sParam6, sParam7, sParam8, sParam9);
		_uilog_set_has_displayed_cached_objective();
		uVar0 = func_1602(sVar1, iParam3, 0, 0, 0, 1);
	}
	return uVar0;
}

bool func_1282(char[4] cParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1830(iParam2))
	{
		if (bParam3)
		{
			func_1356(sParam1, bParam4, 0);
		}
		StringCopy(&cVar0, sParam1, 24);
		func_1831(&(cParam0->f_5310), cVar0, 0, -1, 0, 0);
		return true;
	}
	return false;
}

float func_1283(var uParam0)
{
	if (!func_26(uParam0))
	{
		return 0f;
	}
	if (func_599(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_650() - uParam0->f_1);
}

bool func_1284(char[4] cParam0, char* sParam1, bool bParam2)
{
	StringCopy(&cVar0, sParam1, 24);
	if (func_1831(&(cParam0->f_5310), cVar0, 0, -1, bParam2, 0))
	{
		return true;
	}
	return false;
}

float func_1285(char[4] cParam0)
{
	return func_914(&(cParam0->f_600));
}

int func_1286(char[4] cParam0)
{
	return cParam0->f_598;
}

bool func_1287(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = sParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_1832(iParam0, &Var0);
}

void func_1288(char[4] cParam0)
{
	if (!bVar602)
	{
		func_1277(cParam0, "UTP1_PM_OBJ1", -1082130432, 0, 0, -1, -1, 0);
		func_1281(cParam0, "UTP1_PM_OBJ1", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
		func_1314(cParam0, iVar416, 1105014447, 422991367, 1, 1);
		iLocal_605 = 1;
	}
}

void func_1289(char[4] cParam0, int iParam1)
{
	if (func_1290())
	{
		func_135(cParam0, iParam1);
	}
	else if (func_1285(cParam0) > 10f && func_900(iVar415, Global_35, 10f, 1))
	{
		func_1284(cParam0, "UTP1_MICURG", 0);
		task_look_at_entity(iVar415, Global_35, 5000, 0, 51, 0);
		func_135(cParam0, iParam1);
	}
}

bool func_1290()
{
	return func_1833(1);
}

bool func_1291(char[4] cParam0)
{
	if (iLocal_195 >= 1)
	{
		func_1834();
		if (!func_1354(Global_35, iVar487, 1, 0) && iLocal_195 < 7)
		{
			func_1273(cParam0, func_1272(6), 1, 0);
			return false;
		}
	}
	if (func_1275(&uLocal_346, 2f))
	{
		if (iVar601 == 1)
		{
			iLocal_604 = 0;
		}
	}
	if (func_1354(Global_35, iVar487, 1, 0))
	{
		if (is_explosion_in_sphere(25, get_entity_coords(iVar416, true, false), 2f) && iVar601 == 0)
		{
			func_1825(cParam0, "ALLY_ATTACK_MICAH", "", 1, 0);
		}
	}
	switch (iLocal_194)
	{
		case 0:
			if (func_1270())
			{
				func_974(&iLocal_435);
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if (func_166(&(Local_14.f_16[iVar0]), 0) && iVar0 < 3)
					{
						_0x18ff3110cf47115d(&(Local_14.f_16[iVar0]), 1, 0);
					}
					iVar0++;
				}
				func_1835(2);
			}
			break;
		case 2:
			if (!func_1367(Local_14.f_14, 2))
			{
				if (func_1836())
				{
					func_1341(-493957506, 1);
					func_1820(&(Local_14.f_16[0]), 1);
					func_1820(&(Local_14.f_16[1]), 1);
					func_1820(&(Local_14.f_16[2]), 1);
					func_1837(&(Local_14.f_16[0]), -789827416, 1, -1608851079);
					func_1837(&(Local_14.f_16[1]), -789827416, 1, -1608851079);
					func_1837(&(Local_14.f_16[2]), -789827416, 1, -1608851079);
					func_135(cParam0, 20);
					func_1835(3);
				}
			}
			break;
		case 3:
			if (does_entity_exist(Local_772.f_6))
			{
				_0xa6a76d666a281f2d(Local_772.f_6, -789827416);
			}
			if (func_356(-789827416, 1, 0))
			{
				if (does_entity_exist(Local_772.f_6))
				{
					func_186(&(Local_772.f_6), 0, 1, 1);
				}
				func_1838(&(Local_14.f_16[0]), -789827416, -1);
				func_1838(&(Local_14.f_16[1]), -789827416, -1);
				func_1838(&(Local_14.f_16[2]), -789827416, -1);
				iLocal_376 = func_1839("UTP1_UC_UC", -719620017, func_169(3, 5), 1070386381, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
				func_16(1, 0);
				func_45();
				func_135(cParam0, 21);
				func_1835(4);
			}
			break;
		case 4:
			func_1840(cParam0);
			func_1841(iVar373, -2135659340, 0, 1);
			_uiprompt_set_ambient_group_this_frame(&(iLocal_430[0]), 1.6f, 3, 1, -2135659340, "UTP1_CELLD", 0);
			if (func_904(Global_35, &(iLocal_430[0]), 1, 1) < 1.7f)
			{
				func_1842(0);
			}
			if (func_1562(iVar373, 1))
			{
				func_1843();
				func_11(&iLocal_376, 1, 1);
				func_135(cParam0, -1);
				iLocal_200 = 0;
				func_1835(5);
			}
			break;
		case 5:
			func_1842(1);
			if (func_1844(Global_35, 1))
			{
				iLocal_201 = 0;
				func_1835(6);
			}
			break;
		case 6:
			if (func_1845(Global_35, -1814.843f, -352.8174f, 160.4112f))
			{
				func_1835(7);
			}
			break;
		case 7:
			func_232(&uLocal_267);
			set_player_control(player_id(), false, 256, false);
			task_enter_anim_scene(Global_35, &(iLocal_522[12]), "player_zero", "pl_IG13_Key_Breakout", 1069379748, 0, 0, 20000, -1082130432);
			func_1835(8);
			break;
		case 8:
			if (_0x337f1cc8ee895601(&(iLocal_522[12]), "player_zero"))
			{
				func_1846();
				func_232(&uLocal_267);
				func_1835(9);
			}
			break;
		case 9:
			if ((!_is_anim_scene_started(&(iLocal_522[12]), false) && func_1275(&uLocal_267, 2f)) || _get_anim_scene_progress(&(iLocal_522[12])) > 0.736f)
			{
				clear_ped_tasks(Global_35, 1, 0);
				set_player_control(player_id(), true, 0, false);
				func_1284(cParam0, "UTP1_KEYEXIT", 0);
				if (func_1354(Global_35, iVar463, 1, 0) || func_1354(Global_35, iVar464, 1, 0))
				{
					task_look_at_entity(Global_35, iVar416, 4000, 0, 51, 0);
				}
				if (_0x8a3945405b31048f() > 0.8f)
				{
					func_195(0.8f);
				}
				func_923(iVar456, 0, 0, 0);
				func_1548(iVar456, vLocal_644, uVar644);
				func_1835(12);
			}
			break;
		case 12:
			func_1835(13);
			break;
		case 13:
			func_1834();
			if (!bVar576)
			{
				if ((func_1385(&(iLocal_522[12])) || _0x005e6f28dd7ed58d(&(iLocal_522[12]), "CS_MicahBell")) || func_1847())
				{
					func_1848();
					iLocal_579 = 1;
				}
			}
			else if (func_1849(cParam0))
			{
				if (!bVar577)
				{
					func_135(cParam0, 16);
					iLocal_580 = 1;
				}
			}
			if (!func_1354(iVar416, iVar487, 1, 0) || !func_1354(Global_35, iVar487, 1, 0))
			{
				func_1848();
				func_1295(cParam0, iLocal_205, 2);
				func_1296(cParam0, iLocal_205, 1, 1, 0);
				func_1850(&(cParam0->f_7375));
				func_1338();
				func_183(1);
				func_184(2);
				func_184(4);
				func_1288(cParam0);
				return true;
			}
			break;
	}
	if (does_entity_exist(iVar425) && !is_entity_dead(iVar425))
	{
		set_entity_coords(iVar425, -1814.93f, -354.147f, 161.6569f, true, false, true, true);
	}
	switch (iLocal_195)
	{
		case 0:
			if (iLocal_194 >= 3 && iLocal_194 < 5)
			{
				get_current_ped_weapon(Global_35, &iVar1, true, 0, false);
				if ((iVar1 == -1504859554 && is_entity_in_volume(Global_35, iVar487, true, 0)) && func_1337(Global_35, func_169(3, 5), 2f, 1, 1))
				{
					if (!func_187(8192))
					{
						disable_control_action(0, 184129944, false);
						disable_control_action(0, 130948705, false);
					}
					if (is_disabled_control_pressed(0, 130948705) || is_disabled_control_pressed(0, 184129944))
					{
						set_player_control(player_id(), false, 256, false);
						_0x94a3c1b804d291ec(Global_35, 1, 0, 1, 1);
						set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
						task_enter_anim_scene(Global_35, &(iLocal_522[12]), "player_zero", "pl_IG13_Bomb_Breakout_Enter", 1069379748, 0, 0, 20000, -1082130432);
						func_1324(1);
						iLocal_604 = 1;
						func_232(&uLocal_267);
						func_135(cParam0, 9);
						func_1851(1);
						func_1852();
						_0x7f458b543006c8fe(902070893, 16);
					}
				}
			}
			break;
		case 1:
			func_1842(1);
			if (_0x337f1cc8ee895601(&(iLocal_522[12]), "player_zero"))
			{
				if (func_1355("UTP1_JAILGET"))
				{
					func_1356("UTP1_JAILGET", 0, 0);
				}
				func_1853();
				func_1851(2);
			}
			break;
		case 2:
			if (_is_anim_scene_started(&(iLocal_522[12]), false))
			{
				if (_0x8d81e7824b7753f7(&(iLocal_522[12]), "s_IG13_Bomb_Enter", 1))
				{
					set_anim_scene_bool(&(iLocal_522[12]), "b_breakout", false, false);
					if (!does_entity_exist(iVar425))
					{
						if (_get_anim_scene_progress(&(iLocal_522[12])) > 0.495f)
						{
							func_1854();
						}
					}
				}
				if (_0x005e6f28dd7ed58d(&(iLocal_522[12]), "player_zero"))
				{
					set_player_control(player_id(), true, 0, false);
					func_692(-1504859554, 1, 1, 562618531, 0);
					_0x74c90aaacc1dd48f(iVar425);
					func_923(iVar456, 0, 0, 0);
					func_1548(iVar456, vLocal_644, uVar644);
					func_1851(3);
				}
			}
			break;
		case 3:
			if (does_entity_exist(iVar425))
			{
				if (is_entity_dead(iVar425) || has_entity_been_damaged_by_entity(iVar425, Global_35, 0, 0))
				{
					func_232(&uLocal_267);
					func_1851(4);
				}
			}
			if (func_1855())
			{
				func_232(&uLocal_267);
				func_1851(4);
			}
			break;
		case 4:
			func_27(&uLocal_346, 0);
			func_1856();
			func_1851(5);
			break;
		case 5:
			if ((_is_anim_scene_started(&(iLocal_522[12]), false) && _0x1f0e401031e20146(&(iLocal_522[12]), "pl_IG13_Bomb_Breakout_Exit")) && _get_anim_scene_progress(&(iLocal_522[12])) > 0.128f)
			{
				func_1851(7);
				func_1835(13);
			}
			break;
	}
	return false;
}

void func_1292(char[4] cParam0)
{
	switch (iVar829)
	{
		case 0:
			if (func_834(Global_35, 1, 0, 0) == -1504859554)
			{
				func_1311();
			}
			if (func_1857(cParam0))
			{
				func_1324(1);
				if (iVar830 == 0 && _is_anim_scene_started(&(iLocal_522[14]), false))
				{
					func_1858();
				}
				else
				{
					Var0 = { func_235(4, 3) };
					task_follow_nav_mesh_to_coord(iVar416, Var0, 1f, 20000, 0.25f, 0, Var0.f_3);
					Var4 = { func_235(0, 7) };
					task_follow_nav_mesh_to_coord(iVar419, Var4, 1f, 20000, 0.25f, 0, Var4.f_3);
				}
				if (!bVar598)
				{
					iLocal_631 = func_1276(cParam0);
					func_135(cParam0, 9);
					iLocal_601 = 1;
				}
				func_1311();
				iLocal_832 = 1;
			}
			break;
		case 1:
			vVar8 = { func_169(9, 4) };
			if (is_explosion_in_sphere(25, vVar8, 3f) && !is_entity_in_volume(Global_35, iVar487, true, 0))
			{
				if (does_rayfire_map_object_exist(iVar627))
				{
					_play_sound_from_position("Jail_Cell_Wall_Explode_Dynamite", vVar8, 0, false, 0, true, 0);
					set_state_of_rayfire_map_object(iVar627, 6);
				}
				if (_is_imap_active(2137790641))
				{
					_remove_imap(2137790641);
				}
				if (_is_imap_active(-515396642))
				{
					_remove_imap(-515396642);
				}
				if (does_entity_exist(iVar422))
				{
					if (does_rope_exist(iVar431))
					{
						detach_rope_from_entity(iVar431, iVar422);
					}
					delete_object(&iLocal_425);
				}
				func_183(4);
				func_184(1);
				func_184(4);
				func_1859(cParam0, "NormalStart");
				func_951(cParam0);
				iLocal_832 = 19;
			}
			break;
	}
}

void func_1293(char[4] cParam0)
{
	if (func_820(&(cParam0->f_7375), 128) || func_820(&(cParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(cParam0->f_7375.f_804))
		{
			_delete_anim_scene(cParam0->f_7375.f_804);
		}
		func_1860(&(cParam0->f_7375));
		func_1435(&(cParam0->f_7375), 128, 1);
		func_1435(&(cParam0->f_7375), 256, 1);
		func_1435(&(cParam0->f_7375), 4096, 1);
	}
}

void func_1294(char[4] cParam0)
{
	func_1861(&(cParam0->f_7375));
}

void func_1295(char[4] cParam0, int iParam1, int iParam2)
{
	func_565(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

bool func_1296(char[4] cParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam1 <= -1 || iParam1 >= 27)
	{
		return false;
	}
	if (!bParam2)
	{
		func_99(cParam0, 512);
	}
	func_1255(cParam0, func_33(cParam0), iParam1);
	if (bParam3)
	{
		func_952(cParam0, iParam1, 2);
	}
	if (bParam4)
	{
		func_1862(cParam0);
	}
	return true;
}

void func_1297(char[4] cParam0, int iParam1)
{
	func_767(&(cParam0->f_7375), iParam1);
}

void func_1298(char[4] cParam0, char[4] cParam1)
{
	func_1863(&(cParam0->f_7375), cParam1, func_162(cParam0, func_33(cParam0)) != 5);
}

void func_1299(bool bParam0)
{
	if (func_1864(Local_727[0]))
	{
		if (get_ped_config_flag(iVar416, 297, true) == 1)
		{
			set_ped_config_flag(iVar416, 297, false);
			set_ped_config_flag(iVar416, 130, false);
		}
		if (bParam0)
		{
			_0xe98d55c5983f2509(iVar416);
		}
	}
}

void func_1300()
{
	if (is_entity_in_volume(Global_35, iVar488, true, 0))
	{
		return;
	}
	if (func_1865(Global_35, &uLocal_491) && !func_1290())
	{
		func_27(&uLocal_261, 0);
		if (func_1275(&uLocal_261, fVar547))
		{
			func_1866();
			func_232(&uLocal_261);
			fLocal_549 = get_random_float_in_range(15f, 20f);
		}
	}
	else
	{
		func_653(&uLocal_261);
	}
}

bool func_1301()
{
	if (is_entity_in_volume(Global_35, iVar488, true, 0))
	{
		func_1299(0);
		return false;
	}
	if (!is_entity_in_volume(Global_35, iVar468, true, 0))
	{
		return false;
	}
	set_ped_reset_flag(Global_35, 195, true);
	if (func_1337(Global_35, func_169(9, 4), 4f, 1, 1) && iVar1094 < 2)
	{
		func_27(&uLocal_234, 0);
		if (func_1275(&uLocal_234, 5f) && is_ped_on_foot(Global_35))
		{
			func_1299(1);
			func_1867(iVar475, -1804.193f, -367.624f, 160.6708f, 1094713344);
			iLocal_201 = 0;
			iLocal_1096 = 2;
		}
	}
	else
	{
		func_653(&uLocal_234);
	}
	_get_anim_scene_entity_matrix(&(iLocal_522[0]), "ARTHUR", &uVar0, true, "pl_leadin", 2);
	if (iVar1094 >= 2)
	{
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, -1304887797, false);
		disable_control_action(0, 255439828, false);
		disable_control_action(0, 1287709438, false);
		disable_control_action(0, -2131587435, false);
		disable_control_action(0, -209515122, false);
		func_1868();
		func_1842(1);
	}
	switch (iVar1094)
	{
		case 0:
			if (!func_1864(Local_727[0]))
			{
				func_1869(Local_727[0], "INTERACT_GREET", 0, -163964935, 0, 0, 0, 1, 0);
				func_1869(Local_727[1], "INTERACT_INSULT", 0, 648122183, 0, 0, 0, 1, 0);
			}
			else
			{
				iLocal_1096 = iVar1094 + 1;
			}
			break;
		case 1:
			if (get_ped_config_flag(iVar417, 297, true) == 0)
			{
				set_ped_config_flag(iVar417, 297, true);
				set_ped_config_flag(iVar417, 130, true);
			}
			iLocal_762 = func_1870(&iLocal_419, &iLocal_706, 4f, &Local_727, 0.25f, 3, 1, 0, -2147448550, 0, 0, 2, -1082130432);
			if (iVar760 == 0 || iVar760 == 1)
			{
				func_1299(1);
				func_1867(iVar475, -1804.193f, -367.624f, 160.6708f, 1094713344);
				iLocal_201 = 0;
				iLocal_1096 = iVar1094 + 1;
			}
			else if ((get_frame_count() % 30) == 0)
			{
			}
			break;
		case 2:
			if (func_1845(Global_35, 0f, 0f, 0f))
			{
				iLocal_200 = 0;
				func_1871();
				iLocal_1096 = iVar1094 + 1;
			}
			break;
		case 3:
			if (func_1844(Global_35, 1))
			{
				if (is_player_control_on(player_id()))
				{
					set_player_control(player_id(), false, 4992, false);
				}
				task_enter_anim_scene(Global_35, &(iLocal_522[0]), "ARTHUR", "pl_leadin", 1069379748, 0, 0, 20000, -1082130432);
				iLocal_1096 = iVar1094 + 1;
			}
			break;
		case 4:
			if (func_1565(Global_35, 1369124074))
			{
				iLocal_1096 = iVar1094 + 1;
			}
			break;
		case 5:
			func_1303(340f, -70f, 70f);
			if (_0x337f1cc8ee895601(&(iLocal_522[0]), "ARTHUR"))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_1302()
{
	if (_is_anim_scene_started(&(iLocal_522[0]), false))
	{
		_set_anim_scene_playback_list_bool(&(iLocal_522[0]), "pl_leadin", true);
	}
}

void func_1303(float fParam0, float fParam1, float fParam2)
{
	fVar0 = get_entity_heading(Global_35);
	fVar1 = (fParam0 - fVar0);
	if (fVar1 > 180f)
	{
		fVar1 = (fVar1 - 360f);
	}
	fVar2 = (fParam1 + fVar1);
	fVar3 = (fParam2 + fVar1);
	fVar4 = get_gameplay_cam_relative_heading();
	if (fVar4 >= fVar2 && fVar4 <= fVar3)
	{
		_clamp_gameplay_cam_yaw(fVar2, fVar3);
	}
}

void func_1304(char[4] cParam0)
{
	Var0 = { func_1510(cParam0, func_35(cParam0)) };
	func_1872(cParam0, &Var0);
}

void func_1305(int iParam0, var uParam1)
{
	Global_40.f_9.f_21.f_1[iParam0] = uParam1;
}

void func_1306(char[4] cParam0, int iParam1)
{
	cParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1307(char[4] cParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_132(iParam2);
	if (!func_1579(iVar0))
	{
		return;
	}
	iVar1 = func_1580(iParam3);
	if (!func_1581(iVar1))
	{
		return;
	}
	(*cParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1308(char[4] cParam0, int iParam1, char[16] cParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1309(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

int func_1310(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_1873(iParam3, 1);
	bVar1 = func_1873(iParam3, 2);
	bVar2 = !func_1873(iParam3, 4);
	bVar3 = func_1873(iParam3, 8);
	bVar4 = !func_1873(iParam3, 16);
	bVar5 = func_1873(iParam3, 32);
	bVar6 = func_1873(iParam3, 64);
	return func_1874(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_1311()
{
	if (!bVar615)
	{
		if (does_rayfire_map_object_exist(iVar628))
		{
			if (get_state_of_rayfire_map_object(iVar628) != 5)
			{
				set_state_of_rayfire_map_object(iVar628, 4);
				iLocal_617 = 1;
			}
		}
	}
}

bool func_1312(int iParam0)
{
	return (Global_40.f_9.f_21 && iParam0) != 0;
}

void func_1313(int iParam0, int iParam1, bool bParam2)
{
	func_1108(iParam0, 0, 0);
	if (func_1109(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

int func_1314(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (is_entity_dead(iParam1))
	{
		return iVar0;
	}
	bVar1 = func_449(cParam0, iParam1);
	bVar2 = (is_entity_a_ped(iParam1) && func_446(get_ped_index_from_entity_index(iParam1)));
	if (bVar2)
	{
		iVar3 = func_447(get_ped_index_from_entity_index(iParam1));
	}
	if (bVar1)
	{
		func_452(cParam0, iParam1, 128);
		if (bParam4)
		{
			func_452(cParam0, iParam1, 1024);
		}
	}
	if (is_entity_a_ped(iParam1) && bParam4)
	{
		iVar0 = get_blip_from_entity(iParam1);
		if (bVar2)
		{
			func_1875(iVar3);
			if (does_blip_exist(iVar0))
			{
				_blip_set_modifier(iVar0, -546708623);
				if (bParam5)
				{
					_blip_set_modifier(iVar0, 231194138);
				}
			}
		}
		else if (func_449(cParam0, iParam1) && does_blip_exist(iVar0))
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
		if (func_453(cParam0, iParam1, &iVar4))
		{
			func_454(cParam0->f_5423[iVar4]);
		}
	}
	if (bVar2)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_455(iVar3);
	}
	return iVar0;
}

void func_1315(char* sParam0)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	_uilog_set_cached_objective(_create_var_string(2, sParam0));
}

void func_1316(char[4] cParam0)
{
	if (func_1312(1) || func_1270())
	{
		return;
	}
	if (func_1337(Global_35, func_169(3, 2), 6f, 1, 1))
	{
		func_1876(0, 1065353216);
		switch (iVar761)
		{
			case 0:
				func_1293(cParam0);
				func_1294(cParam0);
				func_1295(cParam0, func_35(cParam0), 2);
				StringCopy(&cLocal_765, "UTP1_INT", 32);
				StringCopy(&(cParam0->f_7375.f_800), "cutscene@UTP1_INT", 32);
				cParam0->f_7375.f_804 = _create_anim_scene(&cLocal_765, 0, 0, false, true);
				func_1297(cParam0, 8192);
				func_1313(1821044729, 1, 0);
				_0xa93f925f1942e434(1821044729, 1);
				func_1313(1514359658, 1, 0);
				iLocal_763 = 1;
				iLocal_764 = iVar761 + 1;
				break;
			case 1:
				if (func_1877(&(cParam0->f_7375), &cLocal_765, 1, 1))
				{
					iLocal_764 = iVar761 + 1;
				}
				break;
			case 2:
				if (func_1337(Global_35, func_169(3, 2), 2f, 1, 1))
				{
					if (func_1878())
					{
						iLocal_764 = iVar761 + 1;
					}
				}
				break;
			case 3:
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
				if (!func_1878())
				{
					iLocal_764 = iVar761 + 1;
				}
				break;
			case 4:
				if (func_1516(cLocal_765, &(cParam0->f_7375), cParam0))
				{
					func_916(0, 0);
					func_929(Global_35, func_235(3, 3), 2, 1073741824);
					func_1544(-668482597, 2000, 0, 1, 1, 0, 0, 0);
					func_929(&(Local_14.f_16[2]), func_235(0, 3), 2, 1073741824);
					func_1310(&(Local_14.f_16[2]), -183018591, -1, 1, 0, 1056964608, 1065353216, 0);
					if (!is_entity_dead(&(Local_14.f_16[1])))
					{
						task_use_nearest_scenario_to_coord_warp(&(Local_14.f_16[1]), func_169(0, 2), 2f, 0, true, false, true, false);
					}
					reset_anim_scene(&(iLocal_522[11]), 0);
					func_1262();
					func_1259(1);
					func_1317(cParam0);
				}
				break;
		}
	}
	else if (bVar760)
	{
		iLocal_764 = 0;
		func_190(1821044729, 1);
		_0xa93f925f1942e434(1821044729, 0);
		func_1293(cParam0);
		func_1294(cParam0);
		func_140(cParam0, func_35(cParam0), 2);
		StringCopy(&cLocal_765, "UTP1_MCS_1A", 32);
		StringCopy(&(cParam0->f_7375.f_800), "cutscene@UTP1_MCS_1A", 32);
		cParam0->f_7375.f_804 = _create_anim_scene(&cLocal_765, 0, 0, false, true);
		func_1297(cParam0, 8192);
		func_1298(cParam0, "NormalStart");
		iLocal_763 = 0;
	}
}

void func_1317(char[4] cParam0)
{
	if (iVar761 < 5)
	{
		func_190(1821044729, 1);
		_0xa93f925f1942e434(1821044729, 0);
		func_190(1514359658, 1);
		func_1293(cParam0);
		func_1294(cParam0);
		func_140(cParam0, func_35(cParam0), 2);
		StringCopy(&cLocal_765, "UTP1_MCS_1A", 32);
		StringCopy(&(cParam0->f_7375.f_800), "cutscene@UTP1_MCS_1A", 32);
		cParam0->f_7375.f_804 = _create_anim_scene(&cLocal_765, 0, 0, false, true);
		func_1297(cParam0, 8192);
		func_1298(cParam0, "NormalStart");
		iLocal_764 = 5;
	}
}

void func_1318(char[4] cParam0)
{
	if ((iLocal_194 == 13 || func_1286(cParam0) >= 1) || iLocal_195 >= 1)
	{
		return;
	}
	if (!is_entity_in_volume(Global_35, iVar487, true, 0))
	{
		if (iVar829 > 0)
		{
			if (_is_anim_scene_started(&(iLocal_522[12]), false))
			{
				reset_anim_scene(&(iLocal_522[12]), 0);
				func_1386(33554432);
				Var0 = { func_235(4, 3) };
				task_follow_nav_mesh_to_coord(iVar416, Var0, 1f, 20000, 0.25f, 0, Var0.f_3);
				Var4 = { func_235(0, 7) };
				task_follow_nav_mesh_to_coord(iVar419, Var4, 1f, 20000, 0.25f, 0, Var4.f_3);
			}
			return;
		}
		if (!_is_anim_scene_started(&(iLocal_522[14]), false))
		{
			if (_is_anim_scene_started(&(iLocal_522[12]), false))
			{
				reset_anim_scene(&(iLocal_522[12]), 0);
				func_1386(33554432);
			}
			if (_is_anim_scene_loaded(&(iLocal_522[14]), true, false) && _0x23e33cb9f4a3f547(&(iLocal_522[14]), "pl_Window_Idle_Base"))
			{
				func_1547(sVar624);
			}
		}
	}
	else if (func_1573() && !_is_anim_scene_started(&(iLocal_522[12]), false))
	{
		if (_is_anim_scene_started(&(iLocal_522[14]), false))
		{
			reset_anim_scene(&(iLocal_522[14]), 0);
		}
		if (_is_anim_scene_loaded(&(iLocal_522[12]), true, false) && _0x23e33cb9f4a3f547(&(iLocal_522[12]), "pl_IG13_Standing_Idle"))
		{
			func_1822();
		}
		else
		{
			load_anim_scene(&(iLocal_522[12]));
			_0xdf7b5144e25cd3fe(&(iLocal_522[12]), "pl_IG13_Bomb_Breakout_Enter");
			_0xdf7b5144e25cd3fe(&(iLocal_522[12]), "pl_IG13_Bomb_Breakout_Exit");
			_0xdf7b5144e25cd3fe(&(iLocal_522[12]), "pl_IG13_Cower_Impatient_Loop");
			_0xdf7b5144e25cd3fe(&(iLocal_522[12]), "pl_IG13_Cower_Loop");
			_0xdf7b5144e25cd3fe(&(iLocal_522[12]), "pl_IG13_Key_Breakout");
			_0xdf7b5144e25cd3fe(&(iLocal_522[12]), "pl_IG13_Standing_Idle");
		}
	}
}

int func_1319(int iParam0, vector3 vParam1, bool bParam4)
{
	iVar0 = _blip_add_for_coord(iParam0, vParam1);
	if (bParam4)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

bool func_1320()
{
	if (iVar762 >= 2 && iVar762 <= 4)
	{
		return true;
	}
	return false;
}

void func_1321(char[4] cParam0)
{
	if ((iVar830 >= 1 && iVar830 < 7) || iVar830 > 7)
	{
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, 1287709438, false);
		disable_control_action(0, 1934388793, false);
		disable_control_action(0, -1304887797, false);
		disable_control_action(0, -209515122, false);
		disable_control_action(0, -950261840, false);
		func_1868();
		func_1842(1);
	}
	if (iVar830 > 7)
	{
		_0x2804658eb7d8a50b(5, -1757981374);
		_clamp_gameplay_cam_yaw(-85f, 65f);
		_0x1c6306e5bc25c29c();
	}
	switch (iVar830)
	{
		case 0:
			if (!does_rope_exist(iVar431))
			{
				if (!has_model_loaded(2051399415))
				{
					return;
				}
				if (!has_model_loaded(-1205874435))
				{
					return;
				}
				if (!_0xb6cbd40f8ea69e8a(iVar422))
				{
					return;
				}
				if (!_0xb6cbd40f8ea69e8a(iVar421))
				{
					return;
				}
				if (!_get_anim_scene_entity_matrix(&(iLocal_522[1]), "p_cs_hookpulley01x", &vLocal_660, false, 0, 2))
				{
					return;
				}
				set_entity_coords(iVar422, vLocal_660, true, false, true, true);
				set_entity_rotation(iVar422, vLocal_660.f_3, 2, true);
				iLocal_434 = _add_rope_2(0f, 0f, 0f, 0f, 0f, 0f, 8.5f, 2, false, 32, 0.01f);
				_0x462ff2a432733a44(iVar431, iVar421, iVar422, 0f, 0f, 0f, 0f, 0f, 0f, "p_cs_stmdnky01x_chain", "p_cs_hookPulley01x_locator");
				_0xbb3e9b073e66c3c9(iVar431, 1, 0, 1, 0);
				_0xd699e688b49c0fd2(iVar431, 5f, 0.05f, 0.05f, 0);
				_0xf1ea2a881eb7f2cd(iVar431, 1);
				_0x21d0890d88dfb0b0(iVar431, 0, 1.8f, 0.4f, -0.6f, -0.4f, -0.95f, 0f, 0f, 90f, 2);
				_0x21d0890d88dfb0b0(iVar431, 1, 1f, 0.2f, 0.2f, 0f, 0f, 90f, 0f, 0f, 2);
				_0x461fcbdeb4d06717(iVar431, 1);
			}
			if (!func_10(iVar377) && does_rope_exist(iVar431))
			{
				vVar0 = { get_entity_coords(iVar422, true, false) };
				iLocal_380 = func_1839("UTP1_UC_GP", -719620017, vVar0, 2.5f, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
			}
			else
			{
				func_1841(iVar377, -854119246, 0, 1);
				_uiprompt_set_ambient_group_this_frame(iVar422, 2.5f, 1, 1, -854119246, "UTP1_STMDK", 0);
				if (func_904(Global_35, iVar422, 1, 1) < 2.6f)
				{
					func_1842(0);
				}
				if (func_1879() && func_1562(iVar377, 1))
				{
					func_11(&iLocal_380, 1, 1);
					iLocal_201 = 0;
					iLocal_200 = 0;
					iLocal_573 = 1;
					func_232(&uLocal_1084);
					iLocal_833 = 1;
					func_135(cParam0, 22);
					if (!is_projectile_type_within_distance(func_169(9, 4), -1504859554, 3f, true))
					{
						iLocal_832 = 0;
						func_1880();
					}
				}
			}
			break;
		case 1:
			if (func_1845(Global_35, 0f, 0f, 0f) && func_1844(Global_35, 1))
			{
				_0x18ff3110cf47115d(Global_35, 9, 0);
				_0x6569f31a01b4c097(Global_35, 2, 0);
				_0x6569f31a01b4c097(Global_35, 3, 0);
				task_enter_anim_scene(Global_35, &(iLocal_522[1]), "player_zero", "pl_IG23_Grab_Hook_Enter_Top", 1f, 1, 0, 20000, -1082130432);
				iLocal_833 = 2;
			}
			break;
		case 2:
			if (_is_anim_scene_started(&(iLocal_522[1]), false))
			{
				_0x923583741dc87bce(Global_35, "arthur_healthy");
				iLocal_833 = 3;
			}
			break;
		case 3:
			_0xce7a6c1d5cde1f9d(Global_35, iVar422, "p_cs_hookPulley01x_PH_L_HAND", "LOCO_ATTACH_PULLEY_HOOK");
			if ((!bVar1066 && _is_anim_scene_started(&(iLocal_522[1]), false)) && _get_anim_scene_progress(&(iLocal_522[1])) > 0.422f)
			{
				func_1881("Steam_Donkey_Hook_Pickup", Global_35, "UTP1_Sounds", 0, 0);
				iLocal_1069 = 1;
			}
			if ((((!_is_anim_scene_started(&(iLocal_522[1]), false) || _0xb89fcff19dafff28(&(iLocal_522[1]), "player_zero")) || _0x005e6f28dd7ed58d(&(iLocal_522[1]), "player_zero")) || _0xb89fcff19dafff28(&(iLocal_522[1]), "p_cs_hookpulley01x")) || _0x005e6f28dd7ed58d(&(iLocal_522[1]), "p_cs_hookpulley01x"))
			{
				func_1881("Steam_Donkey_Hook_Carry_Loop", Global_35, "UTP1_Sounds", 0, 0);
				_0xce7a6c1d5cde1f9d(Global_35, iVar422, "p_cs_hookPulley01x_PH_L_HAND", "LOCO_ATTACH_PULLEY_HOOK");
				attach_entity_to_entity(iVar422, Global_35, get_ped_bone_index(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				uLocal_502 = _0x0eb78c2b156635b1(-1612834106, -1818.183f, -359.8765f, 162.1378f, 0f, 0f, -19.03618f, 2f, 12.60547f, 2f);
				uLocal_503 = _0x0eb78c2b156635b1(-1612834106, -1811.71f, -361.1678f, 162.1378f, 0f, 0f, -18.59f, 2.755589f, 13.76017f, 2f);
				set_ragdoll_blocking_flags(Global_35, 64);
				set_player_control(player_id(), true, 0, false);
				iLocal_833 = 4;
			}
			break;
		case 4:
			if (iVar829 == 0)
			{
				if (!bVar1065 && func_1337(Global_35, func_169(9, 4), 4f, 1, 1))
				{
					func_1882();
					iLocal_1068 = 1;
				}
			}
			if (func_1337(Global_35, func_169(9, 4), 7.5f, 0, 1) || absf((func_1434(Global_36, func_169(9, 4), 1) - get_entity_heading(Global_35))) <= 60f)
			{
				func_1876(iVar3, 1065353216);
			}
			else
			{
				func_1876(iVar3, 0f);
			}
			if (!func_10(iVar377))
			{
				iLocal_380 = func_1839("UTP1_UC_AH", -719620017, func_169(9, 4), 2.5f, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
			}
			else
			{
				func_1841(iVar377, -181414495, 0, 1);
				_uiprompt_set_ambient_group_this_frame(&(iLocal_430[1]), 2.5f, 1, 1, -181414495, "UTP1_CELLW", 0);
				if (is_entity_in_volume(Global_35, iVar499, true, 0) || is_entity_in_volume(Global_35, iVar500, true, 0))
				{
					func_27(&uLocal_370, 0);
					if (func_1275(&uLocal_370, 90f))
					{
						bVar4 = true;
					}
				}
				else
				{
					func_653(&uLocal_370);
				}
				if (func_1883() && (func_1562(iVar377, 1) || bVar4))
				{
					func_11(&iLocal_380, 1, 1);
					_delete_volume(iVar499);
					_delete_volume(iVar500);
					clear_ragdoll_blocking_flags(Global_35, 64);
					task_enter_anim_scene(Global_35, &(iLocal_522[2]), "player_zero", "pl_IG23_Place_Hook_Side", 1f, 1, 0, 20000, -1082130432);
					iLocal_833 = 5;
					func_135(cParam0, 23);
				}
			}
			break;
		case 5:
			if (_is_anim_scene_started(&(iLocal_522[2]), false))
			{
				detach_entity(iVar422, false, true);
				_0x0f2a2175734926d8("Steam_Donkey_Hook_Carry_Loop", "UTP1_Sounds");
				_0x4fd80c3dd84b817b(Global_35);
				_0x3a50753042b6891b(Global_35, "p_cs_hookPulley01x_PH_L_HAND");
				if (iVar829 == 0)
				{
					func_1884();
				}
				func_232(&uLocal_1084);
				iLocal_833 = 6;
			}
			break;
		case 6:
			if ((!bVar1067 && _is_anim_scene_started(&(iLocal_522[2]), false)) && _get_anim_scene_progress(&(iLocal_522[2])) > 0.422f)
			{
				func_1881("Steam_Donkey_Hook_Attach_To_Jail_Cell", Global_35, "UTP1_Sounds", 0, 0);
				iLocal_1070 = 1;
			}
			if (!_is_anim_scene_started(&(iLocal_522[2]), false) || _0xb89fcff19dafff28(&(iLocal_522[2]), "player_zero"))
			{
				freeze_entity_position(iVar422, true);
				vLocal_638 = { get_entity_coords(iVar422, true, false) };
				vLocal_641 = { get_entity_rotation(iVar422, 2) };
				_0x18ff3110cf47115d(Global_35, 9, 1);
				_0x6569f31a01b4c097(Global_35, 2, 1);
				_0x6569f31a01b4c097(Global_35, 3, 1);
				func_232(&uLocal_1087);
				iLocal_833 = 7;
			}
			break;
		case 7:
			if (iVar829 == 0)
			{
				if (func_1275(&uLocal_1087, 15f))
				{
					func_1885();
					func_232(&uLocal_1087);
				}
			}
			if (!func_10(iVar377))
			{
				iLocal_380 = func_1839("UTP1_UC_SD", -719620017, -1814.215f, -362.8821f, 161.0893f, 1070386381, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
			}
			else
			{
				func_1841(iVar377, -854119246, 0, 1);
				_uiprompt_set_ambient_group_this_frame(&(iLocal_430[2]), 1.6f, 1, 1, -854119246, "UTP1_STMDK", 0);
				if (func_904(Global_35, &(iLocal_430[2]), 1, 1) < 1.7f)
				{
					func_1842(0);
				}
				if (func_1562(iVar377, 1))
				{
					func_11(&iLocal_380, 1, 1);
					func_974(&iLocal_436);
					iLocal_201 = 0;
					iLocal_200 = 0;
					Var5 = { func_235(4, 3) };
					task_follow_nav_mesh_to_coord(iVar416, Var5, 1f, 20000, 0.25f, 0, Var5.f_3);
					if (func_1276(cParam0) == 25)
					{
						func_135(cParam0, -1);
					}
					func_232(&uLocal_1084);
					iLocal_833 = 8;
				}
			}
			break;
		case 8:
			if (func_1845(Global_35, 0f, 0f, 0f) && func_1844(Global_35, 1))
			{
				task_enter_anim_scene(Global_35, &(iLocal_522[3]), "player_zero", "pl_IG25_Pull_Lever_Enter", 1069379748, 0, 0, 20000, -1082130432);
				iLocal_833 = 9;
			}
			break;
		case 9:
			if (_0x337f1cc8ee895601(&(iLocal_522[3]), "player_zero"))
			{
				func_1886();
				func_232(&uLocal_1084);
				iLocal_833 = 10;
			}
			break;
		case 10:
			if ((func_1385(&(iLocal_522[3])) || _0x005e6f28dd7ed58d(&(iLocal_522[3]), "player_zero")) || _0xb89fcff19dafff28(&(iLocal_522[3]), "player_zero"))
			{
				vLocal_1090 = { -1809.441f, -348.2588f, 163.6487f };
				vLocal_1093 = { 0f, 0f, 0f };
				Local_672.f_1 = -455129387;
				Local_672 = 916257999;
				Local_672.f_30 = "Idle";
				task_move_network_advanced_by_name_with_init_params(Global_35, "script_utp1_pulllever", &Local_672, vLocal_1090, vLocal_1093, 2, 0.5f, 0, 0, 128, 0);
				Local_672.f_1 = -455129387;
				Local_672 = -2091433748;
				Local_672.f_30 = "Idle";
				task_move_network_advanced_by_name_with_init_params(iVar421, "script_utp1_pulllever", &Local_672, vLocal_1090, vLocal_1093, 2, 0.5f, 0, 0, 128, 0);
				_0x2208438012482a1a(Global_35, false, false);
				if (!func_10(iVar377))
				{
					iLocal_380 = func_1339("UTP1_UC_PL", -1300031296, 9, 570, 4000, 20, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
					func_1887(iVar377, 14, 1, 1);
					func_1888(iVar377, 0, 1);
					func_1889(iVar377, 0, 1);
				}
				if (!func_10(iVar376))
				{
					iLocal_379 = func_1339("UTP1_UC_GL", 383189881, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
					func_1887(iVar376, 14, 1, 1);
					func_1888(iVar376, 1, 1);
					func_1889(iVar376, 1, 1);
				}
				func_1881("Steam_Donkey_Lever_Pulling", Global_35, "UTP1_Sounds", 0, 0);
				iLocal_833 = 11;
			}
			break;
		case 11:
			if (!func_187(2097152))
			{
				if (load_stream("JAIL_WINDOW_BREAK", "UTOPIA1_JAIL_CELL_WINDOW_BREAK_SOUNDSET"))
				{
					func_470(2097152);
				}
			}
			fVar9 = get_frame_time();
			if (func_26(&uLocal_1078) && fVar1070 < 0.15f)
			{
				func_653(&uLocal_1078);
			}
			if (func_1890(iVar376, 1))
			{
				if (!func_26(&uLocal_1078) || func_1275(&uLocal_1078, 2f))
				{
					iVar10 = 1;
					iVar11 = floor(func_1733(32f, 100f, fVar1070));
					set_pad_shake(0, floor((fVar9 * 1000f)), iVar11);
					if (func_1891(iVar377, 1))
					{
						func_1888(iVar377, 1, 1);
						func_1889(iVar377, 1, 1);
						_uiprompt_set_visible((*Global_1945938)[iVar377]->f_3, true);
						if (func_1892(Global_35, "Stop") || func_1892(Global_35, "Idle"))
						{
							if (func_1893())
							{
								request_task_move_network_state_transition(Global_35, "Pull");
								request_task_move_network_state_transition(iVar421, "Pull");
							}
						}
					}
				}
			}
			else
			{
				iVar10 = 0;
				if (func_1894(iVar377, 0))
				{
					func_1888(iVar377, 0, 1);
					func_1889(iVar377, 0, 1);
					func_232(&uLocal_1078);
					if (func_1892(Global_35, "Pull"))
					{
						if (func_1893())
						{
							request_task_move_network_state_transition(Global_35, "Stop");
							request_task_move_network_state_transition(iVar421, "Stop");
						}
					}
				}
			}
			fLocal_1074 = func_1895(iVar377, 1);
			if (iVar10 == 1)
			{
				if (fVar1071 < 0.2f)
				{
					fLocal_1075 = 0.2f;
				}
				else
				{
					fLocal_1075 = fVar1071;
				}
			}
			else
			{
				fLocal_1075 = 0f;
			}
			fVar12 = 0.5f;
			if (func_26(&uLocal_1081))
			{
				if (func_1275(&uLocal_1081, fVar12))
				{
					func_653(&uLocal_1081);
				}
				else
				{
					fVar13 = func_914(&uLocal_1081);
					fLocal_1073 = func_1733(fVar1073, fVar1074, (fVar13 / fVar12));
				}
			}
			else
			{
				fLocal_1076 = fVar1070;
				fLocal_1077 = fVar1072;
				func_27(&uLocal_1081, 0);
			}
			if (func_1896(iVar377, 1))
			{
				fLocal_1071 = (fVar1068 + 0.1f);
			}
			else
			{
				fLocal_1071 = (fVar1068 - (0.01f * get_frame_time()));
			}
			if (fVar1068 < 0.25f)
			{
				fLocal_1071 = 0.25f;
			}
			func_1897();
			if (fVar1071 >= 1f)
			{
				fLocal_1076 = fVar1070;
				fLocal_1077 = 1f;
				func_232(&uLocal_1081);
				fLocal_1072 = fVar1068;
				func_11(&iLocal_379, 1, 1);
				func_11(&iLocal_380, 1, 1);
				iLocal_833 = 12;
			}
			break;
		case 12:
			fVar14 = 0.5f;
			if (func_1275(&uLocal_1081, fVar14))
			{
				fLocal_1073 = 1f;
				_0x0f2a2175734926d8("Steam_Donkey_Lever_Pulling", "UTP1_Sounds");
				func_1898();
				set_gameplay_coord_hint(func_169(9, 4), 2000, 2000, 2000, 0);
				func_1881("Steam_Donkey_Activated", Global_35, "UTP1_Sounds", 0, 0);
				if (does_rope_exist(iVar431))
				{
					start_rope_winding(iVar431);
					uLocal_551 = _0x3d69537039f8d824(iVar431);
				}
				iLocal_833 = 13;
				func_232(&uLocal_1084);
			}
			else
			{
				fVar15 = func_914(&uLocal_1081);
				fLocal_1073 = func_1733(fVar1073, fVar1074, (fVar15 / fVar14));
				fLocal_1071 = func_1733(fVar1069, 1f, (fVar15 / fVar14));
				func_1897();
			}
			break;
		case 13:
			if (func_1275(&uLocal_1084, 4.5f))
			{
				if (does_rayfire_map_object_exist(iVar626))
				{
					set_state_of_rayfire_map_object(iVar626, 6);
					func_1881("Jail_Cell_Wall_Pulldown", Global_35, "UTP1_Sounds", 0, 0);
				}
				if (_is_imap_active(500829173))
				{
					_remove_imap(500829173);
				}
				if (_is_imap_active(1934919499))
				{
					_remove_imap(1934919499);
				}
				func_183(2);
				func_184(1);
				func_184(4);
				func_1859(cParam0, "NormalStart");
				func_951(cParam0);
				if (does_rope_exist(iVar431))
				{
					stop_rope_winding(iVar431);
				}
				func_232(&uLocal_1084);
				iLocal_833 = 14;
			}
			else
			{
				fVar16 = func_914(&uLocal_1084);
				fVar17 = (fVar16 / 4.5f);
				fVar18 = func_1733(fVar548, (fVar548 - 2f), fVar17);
				if (does_rope_exist(iVar431))
				{
					rope_force_length(iVar431, fVar18);
				}
			}
			break;
		case 14:
			fVar19 = 0.2f;
			fVar20 = 0.5f;
			if (func_26(&uLocal_1084))
			{
				if (func_1275(&uLocal_1084, (fVar19 + fVar20)))
				{
					set_entity_coords(iVar422, vLocal_660, true, false, true, true);
					set_entity_rotation(iVar422, vLocal_660.f_3, 2, true);
					freeze_entity_position(iVar422, true);
					func_653(&uLocal_1084);
				}
				else
				{
					fVar21 = func_914(&uLocal_1084);
					if (fVar21 >= fVar19)
					{
						if (_0x083d497d57b7400f(iVar422))
						{
							freeze_entity_position(iVar422, false);
						}
						fVar22 = ((fVar21 - fVar19) / fVar20);
						vVar23 = { func_1899(vLocal_638, vLocal_660, fVar22) };
						vVar26 = { func_1899(vLocal_641, vLocal_660.f_3, fVar22) };
						fVar29 = get_distance_between_coords(vVar23, vLocal_660, true);
						if (does_rope_exist(iVar431))
						{
							rope_force_length(iVar431, fVar29);
						}
						if (does_entity_exist(iVar422))
						{
							set_entity_coords(iVar422, vVar23, true, false, true, true);
							set_entity_rotation(iVar422, vVar26, 2, true);
						}
					}
				}
			}
			break;
	}
}

bool func_1322()
{
	if (!func_1900(-1, 1))
	{
		return false;
	}
	func_1901(Local_14.f_75, -183018591, 100, 1, 1);
	func_1902(Local_14.f_75, 1);
	func_1903(Local_14.f_75, 40);
	func_982(&(Local_14.f_77[0]), 1);
	func_982(&(Local_14.f_77[2]), 1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1805(&(Local_14.f_77[iVar0]), 0.9f, 0);
		_0x986f7a51ee3e1f92(&(Local_14.f_77[iVar0]), 0);
		set_ped_relationship_group_hash(&(Local_14.f_77[iVar0]), 1269650476);
		set_ped_config_flag(&(Local_14.f_77[iVar0]), 107, true);
		func_1821(&(Local_14.f_77[iVar0]), -1595050198, 1, 1);
		_blip_set_modifier(get_blip_from_entity(&(Local_14.f_77[iVar0])), -1034486097);
		iVar0++;
	}
	return true;
}

bool func_1323(char[4] cParam0, int iParam1)
{
	return func_820(&(cParam0->f_7375), iParam1);
}

void func_1324(bool bParam0)
{
	if (bParam0)
	{
		if (does_entity_exist(iVar416))
		{
			set_entity_invincible(iVar416, true);
			set_entity_proofs(iVar416, 4, false);
		}
		if (does_entity_exist(iVar419))
		{
			set_entity_invincible(iVar419, true);
			set_entity_proofs(iVar419, 4, false);
		}
	}
	else
	{
		if (does_entity_exist(iVar416))
		{
			set_entity_invincible(iVar416, false);
			set_entity_proofs(iVar416, 0, false);
		}
		if (does_entity_exist(iVar419))
		{
			set_entity_invincible(iVar419, false);
			set_entity_proofs(iVar419, 0, false);
		}
	}
}

void func_1325(char[4] cParam0, char[4] cParam1)
{
	func_1904(&(cParam0->f_7375), cParam1);
	func_389(cParam0, 33554432);
}

var func_1326(int iParam0)
{
	return &(Global_40.f_9.f_21.f_1[iParam0]);
}

bool func_1327(int iParam0)
{
	if (func_1654(81053684, iParam0))
	{
		return true;
	}
	if (func_1654(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

void func_1328(char[4] cParam0, int iParam1)
{
	func_1905(&(cParam0->f_7375.f_860), iParam1);
}

void func_1329(char[4] cParam0, int iParam1)
{
	func_1906(&(cParam0->f_7375.f_860), iParam1);
}

bool func_1330()
{
	if (!does_entity_exist(&(Local_14.f_16[4])))
	{
		Local_14.f_16[4] = func_1801(1830978939, -1752.837f, -408.3029f, 155.3812f, 29.3295f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_16[4]), "sherDeputy05");
		func_818(Local_14.f_14, &(Local_14.f_16[4]));
		func_819(&(Local_14.f_16[4]), Local_14);
		return false;
	}
	if (!func_1907(&(Local_14.f_16[4]), &(Local_14.f_48[1]), 0))
	{
		func_1874(&(Local_14.f_16[4]), -183018591, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_ped_into_vehicle(&(Local_14.f_16[4]), &(Local_14.f_48[1]), -1);
		set_ped_config_flag(&(Local_14.f_16[4]), 107, false);
		set_blocking_of_non_temporary_events(&(Local_14.f_16[4]), true);
		return false;
	}
	return true;
}

void func_1331(int iParam0)
{
	if (iParam0 != iVar800)
	{
		iLocal_803 = iParam0;
		bVar0 = get_current_ped_weapon(iVar416, &iVar2, true, 0, false);
		bVar1 = get_current_ped_weapon(iVar416, &iVar3, true, 1, false);
		switch (iParam0)
		{
			case 1:
			case 2:
				if (!bVar0 || iVar2 != 127400949)
				{
					_give_weapon_to_ped_2(iVar416, 127400949, -1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				}
				if (iParam0 == 2)
				{
					if (!bVar1 || iVar3 != 1210039241)
					{
						_give_weapon_to_ped_2(iVar416, 1210039241, -1, true, false, 1, false, 0.5f, 1f, 752097756, true, 0f, false);
					}
				}
				break;
			case 3:
				if ((!bVar0 || iVar2 != 36703333) || iVar3 != -1569615261)
				{
					remove_all_ped_weapons(iVar416, true, true);
					func_1874(iVar416, 36703333, 1, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				}
				break;
			case 4:
				if (((!bVar0 || !bVar1) || iVar2 != 36703333) || iVar3 != 13903789)
				{
					remove_all_ped_weapons(iVar416, true, true);
					func_1874(iVar416, 36703333, 1, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					func_1874(iVar416, 13903789, 1, 1, 1, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				}
				break;
		}
	}
}

void func_1332(int iParam0, int iParam1)
{
	_set_ped_body_component(iParam0, iParam1);
	_update_ped_variation(iParam0, false, true, true, true, false);
}

bool func_1333()
{
	if (!bVar560)
	{
		if (!func_936(-1, 1))
		{
			return false;
		}
		if (!func_1908(-1, 1))
		{
			return false;
		}
		func_1332(&(Local_14.f_95[0]), 140196785);
		iLocal_585 = 0;
		if (!func_1909())
		{
			return false;
		}
		set_vehicle_is_considered_by_player(&(Local_14.f_48[1]), false);
		set_vehicle_is_considered_by_player(&(Local_14.f_48[0]), false);
		func_929(&(Local_14.f_48[0]), func_235(13, 15), 2, 1073741824);
		_0x4ba972d0e5ad8122(&(Local_14.f_48[0]), 0);
		set_ped_into_vehicle(&(Local_14.f_95[0]), &(Local_14.f_48[0]), 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_95[0]), true);
		iLocal_562 = 1;
	}
	return true;
}

void func_1334()
{
	iVar0 = &Local_14.f_24[0];
	if ((func_166(iVar0, 0) && is_ped_human(iVar0)) && is_vehicle_driveable(&(Local_14.f_48[1]), false, false))
	{
		if (!is_ped_in_vehicle(iVar0, &(Local_14.f_48[1]), false))
		{
			set_ped_config_flag(iVar0, 107, false);
			func_1910(iVar0);
			set_ped_into_vehicle(iVar0, &(Local_14.f_48[1]), -2);
		}
	}
}

void func_1335()
{
	if (!func_166(iVar417, 0))
	{
		return;
	}
	if (_does_anim_scene_exist(&(iLocal_522[6])))
	{
		set_anim_scene_entity(&(iLocal_522[6]), func_1251(iVar417), iVar417, 0);
	}
}

void func_1336(int iParam0, bool bParam1, bool bParam2)
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

bool func_1337(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_1719(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_1338()
{
	if (does_entity_exist(&(Local_14.f_16[3])))
	{
	}
	else
	{
		func_1804(3, 0);
	}
	if (!is_entity_dead(&(Local_14.f_16[3])))
	{
		func_1874(&(Local_14.f_16[3]), -183018591, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_16[3]), true);
	}
}

int func_1339(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
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
		if (func_1120(iVar0, 2))
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
		func_1911(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, bParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_1340(int iParam0, int iParam1)
{
	if (!func_10(iParam0))
	{
		return;
	}
	iVar0 = func_199(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_allowed_action((*Global_1945938)[iVar0]->f_3, iParam1);
}

void func_1341(int iParam0, int iParam1)
{
	if (!func_187(128))
	{
		iParam1 = iParam1;
		_0x22741652985c84d0(player_id(), func_1913(func_1912(), 1));
		_0x22741652985c84d0(player_id(), -577559008);
		_0x22741652985c84d0(player_id(), 1039226266);
		func_40(1);
		block_dispatch_service_resource_creation(15, true);
		block_dispatch_service_resource_creation(6, true);
		_0x331d349e0380b097(400);
		_report_crime(player_id(), iParam0, 0, 0, true);
		_0x6bcf7b5cd338281a(_0xf70f00013a62f866(uVar472));
		func_1914(func_188(26));
		func_232(&uLocal_222);
		func_470(128);
	}
}

void func_1342(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	iVar0 = get_best_ped_weapon(iParam0, false, bParam1);
	if (!_0x705be297eebdb95d(iVar0))
	{
		iVar0 = _0x9f67929d98e7c6e8(iParam0, -594562071, 0, bParam1);
		if (iVar0 == 0)
		{
			iVar0 = _0x9f67929d98e7c6e8(iParam0, -1101297303, 0, bParam1);
		}
		if (iVar0 == 0)
		{
			iVar0 = _0x9f67929d98e7c6e8(iParam0, 416676503, 0, bParam1);
		}
		if (iVar0 == 0)
		{
			iVar0 = get_best_ped_weapon(iParam0, false, bParam1);
		}
	}
	if (iVar0 != 0)
	{
		set_current_ped_weapon(iParam0, iVar0, bParam2, 0, false, false);
	}
}

void func_1343(char[4] cParam0)
{
	iVar5 = 3080;
	switch (iLocal_161)
	{
		case 0:
			if (!is_entity_dead(&(Local_14.f_16[3])))
			{
				set_blocking_of_non_temporary_events(&(Local_14.f_16[3]), true);
				set_ped_relationship_group_hash(&(Local_14.f_16[3]), 1269650476);
			}
			func_232(&uLocal_222);
			iLocal_161 = 1;
			break;
		case 1:
			if (!func_399(iLocal_192, 1))
			{
				if (func_166(&(Local_14.f_16[0]), 0))
				{
					set_blocking_of_non_temporary_events(&(Local_14.f_16[0]), true);
					set_ped_relationship_group_hash(&(Local_14.f_16[0]), 1269650476);
					func_1821(&(Local_14.f_16[0]), -1595050198, 1, 1);
					vVar1 = { func_169(13, 5) };
					set_ped_sphere_defensive_area(&(Local_14.f_16[0]), vVar1, 2f, 0, false, 0);
					set_ped_sphere_defensive_area(&(Local_14.f_16[0]), func_169(13, 1), 4f, 0, true, 0);
					register_hated_targets_around_ped(&(Local_14.f_16[0]), 50f);
					task_look_at_entity(&(Local_14.f_16[0]), Global_35, -1, 24, 51, 0);
					open_sequence_task(&iVar0);
					task_follow_waypoint_recording(0, func_168(3), 0, iVar5, 12, 0, 0, -1);
					task_follow_waypoint_recording(0, func_168(3), 0, iVar5, -1, 0, 1, -1);
					task_put_ped_directly_into_cover(0, vVar1, 1000, 1, 0, 0, 0, 0, 0, 0, 0);
					task_combat_hated_targets_around_ped(0, 100f, 0, 0);
					close_sequence_task(iVar0);
					task_perform_sequence(&(Local_14.f_16[0]), iVar0);
					clear_sequence_task(&iVar0);
					func_1874(&(Local_14.f_16[0]), 379542007, 1, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					func_426(&iLocal_192, 1);
				}
				else
				{
					func_426(&iLocal_192, 1);
				}
			}
			if (!func_399(iLocal_192, 2))
			{
				if (func_166(&(Local_14.f_16[1]), 0))
				{
					set_blocking_of_non_temporary_events(&(Local_14.f_16[1]), true);
					set_ped_relationship_group_hash(&(Local_14.f_16[1]), 1269650476);
					func_1821(&(Local_14.f_16[1]), -1595050198, 1, 1);
					vVar1 = { func_169(13, 3) };
					set_ped_sphere_defensive_area(&(Local_14.f_16[1]), vVar1, 3f, 0, false, 0);
					set_ped_sphere_defensive_area(&(Local_14.f_16[1]), func_169(13, 5), 5f, 0, true, 0);
					set_ped_config_flag(&(Local_14.f_16[1]), 248, false);
					set_ped_shoot_rate(&(Local_14.f_16[1]), 300);
					register_hated_targets_around_ped(&(Local_14.f_16[1]), 100f);
					func_1874(&(Local_14.f_16[1]), -183018591, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					open_sequence_task(&iVar0);
					task_go_to_coord_while_aiming_at_entity(0, vVar1, iVar416, 3f, 1, 5f, 4f, 1, 0, 0, -957453492, 20000, 0);
					task_put_ped_directly_into_cover(0, vVar1, 1000, 1, 0, 0, 0, 0, 0, 0, 0);
					task_combat_hated_targets_around_ped(0, 100f, 0, 0);
					close_sequence_task(iVar0);
					task_perform_sequence(&(Local_14.f_16[1]), iVar0);
					clear_sequence_task(&iVar0);
					func_426(&iLocal_192, 2);
				}
				else
				{
					func_426(&iLocal_192, 2);
				}
			}
			if (!func_399(iLocal_192, 4))
			{
				if (func_166(&(Local_14.f_16[2]), 0))
				{
					func_1915(&(Local_14.f_16[2]), 379542007);
					func_1915(&(Local_14.f_16[2]), -598316488);
					set_blocking_of_non_temporary_events(&(Local_14.f_16[2]), true);
					set_ped_relationship_group_hash(&(Local_14.f_16[2]), 1269650476);
					func_1821(&(Local_14.f_16[2]), -1595050198, 1, 1);
					vVar1 = { func_169(13, 1) };
					set_ped_sphere_defensive_area(&(Local_14.f_16[2]), vVar1, 5f, 0, false, 0);
					set_ped_sphere_defensive_area(&(Local_14.f_16[2]), func_169(13, 2), 5f, 0, true, 0);
					register_hated_targets_around_ped(&(Local_14.f_16[2]), 50f);
					func_1874(&(Local_14.f_16[2]), -183018591, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					open_sequence_task(&iVar0);
					task_follow_waypoint_recording(0, func_168(2), 0, iVar5, 6, 0, 0, -1);
					task_follow_waypoint_recording(0, func_168(2), 0, iVar5, -1, 0, 1, -1);
					task_put_ped_directly_into_cover(0, vVar1, 1000, 1, 0, 0, 0, 0, 0, 0, 0);
					task_combat_hated_targets_around_ped(0, 100f, 0, 0);
					close_sequence_task(iVar0);
					task_perform_sequence(&(Local_14.f_16[2]), iVar0);
					clear_sequence_task(&iVar0);
					func_426(&iLocal_192, 4);
				}
				else
				{
					func_426(&iLocal_192, 4);
				}
			}
			if ((func_399(iLocal_192, 1) && func_399(iLocal_192, 2)) && func_399(iLocal_192, 4))
			{
				func_135(cParam0, 3);
				func_232(&uLocal_222);
				iLocal_161 = 4;
			}
			break;
		case 4:
			iVar4 = 0;
			if (!func_166(&(Local_14.f_16[0]), 0))
			{
				iVar4++;
			}
			if (!func_166(&(Local_14.f_16[1]), 0))
			{
				iVar4++;
			}
			if (!func_166(&(Local_14.f_16[2]), 0))
			{
				iVar4++;
			}
			if (does_entity_exist(&(Local_14.f_24[0])) && !func_166(&(Local_14.f_24[0]), 0))
			{
				iVar4++;
			}
			if ((iVar4 >= 2 || func_1275(&uLocal_228, 60f)) || (func_166(&(Local_14.f_16[3]), 0) && func_900(Global_35, &(Local_14.f_16[3]), 20f, 1)))
			{
				if (!is_entity_dead(&(Local_14.f_16[3])))
				{
					set_blocking_of_non_temporary_events(&(Local_14.f_16[3]), true);
					set_ped_relationship_group_hash(&(Local_14.f_16[3]), 1269650476);
					set_entity_lod_dist(&(Local_14.f_16[3]), 100);
					func_1821(&(Local_14.f_16[3]), -1595050198, 1, 1);
					_blip_set_modifier(get_blip_from_entity(&(Local_14.f_16[3])), -1034486097);
					vVar1 = { func_169(13, 0) };
					set_ped_sphere_defensive_area(&(Local_14.f_16[3]), vVar1, 3f, 0, false, 0);
					set_ped_sphere_defensive_area(&(Local_14.f_16[3]), func_169(13, 5), 3f, 0, true, 0);
					register_hated_targets_around_ped(&(Local_14.f_16[3]), 100f);
					open_sequence_task(&iVar0);
					if (!func_900(Global_35, &(Local_14.f_16[3]), 20f, 1))
					{
						task_follow_nav_mesh_to_coord(0, func_169(13, 4), 3f, 20000, 1f, 1, 40000f);
					}
					task_go_to_coord_and_aim_at_hated_entities_near_coord(0, vVar1, func_169(13, 11), 3f, true, 5f, 4f, false, 0, 0, -687903391);
					task_combat_hated_targets_around_ped(0, 100f, 0, 0);
					close_sequence_task(iVar0);
					task_perform_sequence(&(Local_14.f_16[3]), iVar0);
					clear_sequence_task(&iVar0);
					iLocal_161 = 7;
				}
			}
			break;
		case 5:
			if (func_166(&(Local_14.f_16[3]), 0))
			{
				set_combat_float(&(Local_14.f_16[3]), 0, 1f);
			}
			func_232(&uLocal_222);
			iLocal_161 = 6;
			break;
		case 6:
			if (func_1275(&uLocal_222, 2.5f))
			{
				if (func_166(&(Local_14.f_16[3]), 0))
				{
					set_combat_float(&(Local_14.f_16[3]), 0, 0.05f);
				}
				func_232(&uLocal_222);
				iLocal_161 = 7;
			}
			break;
	}
}

void func_1344(char[4] cParam0)
{
	func_27(&uLocal_228, 0);
	if (func_187(4))
	{
		vVar2 = { func_169(13, 7) };
		vVar5 = { get_entity_coords(&(Local_14.f_48[1]), true, false) };
		if (get_distance_between_coords(vVar5, vVar2, true) > 10f)
		{
			set_entity_only_damaged_by_player(&(Local_14.f_24[0]), true);
			set_entity_only_damaged_by_player(&(Local_14.f_16[4]), true);
		}
		else
		{
			set_entity_only_damaged_by_player(&(Local_14.f_24[0]), false);
			set_entity_only_damaged_by_player(&(Local_14.f_16[4]), false);
		}
	}
	func_1361();
	iVar1 = 0;
	if (!bVar607 && &iLocal_162[iVar1] >= 4)
	{
		if (func_166(&(Local_14.f_24[iVar1]), 0))
		{
			iVar8 = &Local_14.f_24[iVar1];
		}
		else if (func_166(&(Local_14.f_16[4]), 0))
		{
			iVar8 = &Local_14.f_16[4];
		}
		if (func_166(iVar8, 0))
		{
			func_145(cParam0, iVar8, "UTP1_Man", 0);
			if (func_1284(cParam0, "UTP1_STATE", 0))
			{
				iLocal_610 = 1;
			}
		}
	}
	switch (&iLocal_162[iVar1])
	{
		case 0:
			if ((((is_sphere_visible(func_169(13, 14), 10f) || func_1275(&uLocal_228, 1f)) || func_1348(Global_35, func_1916(2, 0), 1) < 20f) || func_1357(Local_14.f_14, 3) <= 2) || func_187(4))
			{
				iLocal_585 = 0;
				if (!func_1909())
				{
					return;
				}
				if (func_166(&(Local_14.f_24[iVar1]), 0) && is_ped_human(&(Local_14.f_24[iVar1])))
				{
					func_1334();
					iLocal_162[iVar1] = 1;
				}
			}
			break;
		case 1:
			if (!does_entity_exist(&(Local_14.f_48[1])))
			{
				return;
			}
			if (!func_166(&(Local_14.f_16[4]), 0))
			{
				return;
			}
			if (!is_ped_in_vehicle(&(Local_14.f_16[4]), &(Local_14.f_48[1]), false))
			{
				return;
			}
			if (!get_is_waypoint_recording_loaded(func_168(11)))
			{
				return;
			}
			if ((((is_sphere_visible(func_169(13, 14), 10f) || is_entity_on_screen(&(Local_14.f_48[1]))) || func_1275(&uLocal_228, 5f)) || func_1348(Global_35, func_1916(2, 0), 1) < 20f) || func_187(4))
			{
				if (func_1917(Local_14.f_22, 0))
				{
					set_ped_relationship_group_hash(&(Local_14.f_24[iVar1]), 1269650476);
					set_ped_sphere_defensive_area(&(Local_14.f_24[iVar1]), func_169(13, 7), 5f, 0, false, 0);
					set_entity_load_collision_flag(&(Local_14.f_24[iVar1]), 1);
					func_1821(&(Local_14.f_24[iVar1]), -1595050198, 1, 1);
					_blip_set_modifier(get_blip_from_entity(&(Local_14.f_24[iVar1])), -1034486097);
					register_target(&(Local_14.f_24[iVar1]), iVar416, 1);
					register_target(&(Local_14.f_24[iVar1]), Global_35, 1);
					register_target(&(Local_14.f_16[4]), iVar416, 1);
					register_target(&(Local_14.f_16[4]), Global_35, 1);
					register_target(iVar416, &(Local_14.f_16[4]), 1);
					set_ped_accuracy(&(Local_14.f_16[4]), 20);
					set_ped_accuracy(&(Local_14.f_24[iVar1]), 20);
					task_look_at_entity(&(Local_14.f_24[iVar1]), iVar416, -1, 12, 51, 0);
					open_sequence_task(&iVar0);
					task_combat_hated_targets_around_ped(0, 100f, 0, 0);
					func_1570(&(Local_14.f_24[0]), &iVar0, 0, 0, 1, 1);
					task_vehicle_follow_waypoint_recording(&(Local_14.f_16[4]), &(Local_14.f_48[1]), func_168(11), 67109378, 0, 2056, 15, -1082130432, 0, 4f, 0);
					iLocal_162[iVar1] = 2;
				}
			}
			break;
		case 2:
			if (is_waypoint_playback_going_on_for_vehicle(&(Local_14.f_48[1]), 0))
			{
				iVar9 = 0;
				vVar11 = { get_entity_coords(&(Local_14.f_48[1]), true, false) };
				if (waypoint_recording_get_closest_waypoint(func_168(11), vVar11, &iVar9))
				{
					if (iVar9 >= 15)
					{
						bVar10 = true;
					}
				}
				if (bVar10)
				{
					open_sequence_task(&iVar0);
					_task_vehicle_drive_to_destination(0, &(Local_14.f_48[1]), func_169(13, 7), 8f, 67109378, 1, 6f, 6f, 1);
					task_combat_hated_targets_around_ped(0, 100f, 0, 0);
					func_1570(&(Local_14.f_16[4]), &iVar0, 0, 0, 1, 1);
					iLocal_162[iVar1] = 3;
				}
			}
			break;
		case 3:
			if (!is_ped_in_any_vehicle(&(Local_14.f_24[iVar1]), false) && func_166(&(Local_14.f_24[iVar1]), 0))
			{
				clear_ped_tasks(&(Local_14.f_24[iVar1]), 1, 0);
				remove_ped_defensive_area(&(Local_14.f_24[iVar1]), false);
				_0x1854217c640b39ec(&(Local_14.f_24[iVar1]), iVar416, 0f, 0f, 0f, 5f, 0, 0);
				task_combat_hated_targets_around_ped(&(Local_14.f_24[iVar1]), 100f, 0, 0);
				iLocal_162[iVar1] = 5;
			}
			else if (func_1337(&(Local_14.f_24[iVar1]), func_169(13, 7), 8f, 1, 1))
			{
				open_sequence_task(&iVar0);
				task_leave_any_vehicle(0, 0, 0);
				task_combat_hated_targets_around_ped(0, 100f, 0, 0);
				func_1570(&(Local_14.f_24[0]), &iVar0, 0, 0, 1, 1);
				if ((!bVar562 && func_166(&(Local_14.f_95[0]), 0)) && !is_entity_dead(&(Local_14.f_48[0])))
				{
					open_sequence_task(&iVar0);
					task_pause(0, 500);
					task_vehicle_follow_waypoint_recording(0, &(Local_14.f_48[0]), func_168(11), 0, 0, 0, 17, -1082130432, 0, 2f, 0);
					func_1570(&(Local_14.f_95[0]), &iVar0, 0, 0, 1, 1);
					iLocal_565 = 1;
				}
				iLocal_162[iVar1] = 4;
			}
			else if ((((!bVar562 && func_166(&(Local_14.f_95[0]), 0)) && !is_entity_dead(&(Local_14.f_48[0]))) && func_904(Global_35, &(Local_14.f_48[0]), 1, 1) < 25f) && is_entity_on_screen(&(Local_14.f_48[0])))
			{
				_task_vehicle_drive_to_destination(&(Local_14.f_95[0]), &(Local_14.f_48[0]), -1736.283f, -411.5236f, 154.0618f, 8f, 0, 6, 10f, 10f, 0);
				iLocal_565 = 1;
			}
			break;
		case 4:
			if (!is_ped_in_any_vehicle(&(Local_14.f_24[iVar1]), false) && func_166(&(Local_14.f_24[iVar1]), 0))
			{
				if (!func_1367(Local_14.f_14, 0))
				{
					_0x1854217c640b39ec(&(Local_14.f_24[iVar1]), iVar416, 0f, 0f, 0f, 5f, 0, 0);
					iLocal_162[iVar1] = 5;
				}
			}
			break;
		case 5:
			break;
	}
}

void func_1345(char[4] cParam0)
{
	if (!func_166(iVar416, 0))
	{
		return;
	}
	switch (iLocal_168)
	{
		case 0:
			set_blocking_of_non_temporary_events(iVar416, true);
			if (func_1270() && !bVar566)
			{
				vVar1 = { func_169(13, 13) };
				fVar4 = func_1550(13, 13);
				set_ped_sphere_defensive_area(iVar416, vVar1, 5f, 0, false, 0);
				register_hated_targets_around_ped(iVar416, 200f);
				open_sequence_task(&iLocal_628);
				task_go_to_coord_and_aim_at_hated_entities_near_coord(0, vVar1, vVar1, 2f, true, 3f, 4f, true, 0, 0, -687903391);
				task_combat_hated_targets_around_ped(0, 100f, 0, 0);
				close_sequence_task(iVar625);
				task_perform_sequence(iVar416, iVar625);
				clear_sequence_task(&iLocal_628);
				_0x1f44b7e283c09ede(iVar416, 0.5f, 5000);
				iLocal_168 = 6;
			}
			else
			{
				vVar1 = { func_169(13, 10) };
				fVar4 = func_1550(13, 10);
				set_ped_sphere_defensive_area(iVar416, vVar1, 1.5f, 0, false, 0);
				iLocal_168 = 1;
			}
			break;
		case 1:
			if (func_1354(&(Local_14.f_16[2]), iVar482, 1, 0))
			{
				task_combat_ped(iVar416, &(Local_14.f_16[2]), 0, 0);
				_0x3c529a827998f9b3(iVar416, 200, 5000);
				iLocal_168 = 2;
			}
			if (!func_166(&(Local_14.f_16[2]), 0))
			{
				iLocal_168 = 3;
			}
			break;
		case 2:
			if (!func_166(&(Local_14.f_16[2]), 0) || !func_1354(&(Local_14.f_16[2]), iVar482, 1, 0))
			{
				task_put_ped_directly_into_cover(iVar416, func_169(5, 5), -1, 1, 1f, 0, 0, 0, 1, 0, 0);
				set_ped_combat_attributes(iVar416, 27, false);
				iLocal_168 = 3;
			}
			break;
		case 3:
			if (!func_26(&uLocal_273))
			{
				func_27(&uLocal_273, 1);
			}
			else if (func_1275(&uLocal_273, 5f) || is_entity_on_screen(&(Local_14.f_48[1])))
			{
				bVar5 = true;
			}
			if (bVar5)
			{
				if ((!func_166(&(Local_14.f_16[1]), 0) || func_1348(&(Local_14.f_16[1]), -1805.556f, -354.6701f, 163.144f, 1) > 2f) && ((bVar571 && !func_166(&(Local_14.f_77[0]), 0)) || !bVar571))
				{
					if (!func_1337(Global_35, func_169(13, 11), 2f, 1, 1) && is_ped_in_cover(iVar416, 0, 0))
					{
						if (func_1918())
						{
							iLocal_168 = 4;
						}
					}
					else
					{
						iLocal_168 = 5;
					}
				}
			}
			break;
		case 4:
			if (_is_anim_scene_started(&(iLocal_522[6]), false) && is_ped_ragdoll(iVar416))
			{
				_delete_anim_scene(&(iLocal_522[6]));
				bVar6 = true;
			}
			_0x140b3cb1d424a945(iVar416, -1);
			if ((_is_anim_scene_started(&(iLocal_522[6]), false) && _0x005e6f28dd7ed58d(&(iLocal_522[6]), func_1251(iVar416))) || func_1385(&(iLocal_522[6])))
			{
				bVar6 = true;
			}
			if (func_1337(Global_35, func_169(13, 11), 2f, 1, 1))
			{
				_delete_anim_scene(&(iLocal_522[6]));
				bVar6 = false;
				iLocal_168 = 5;
			}
			if (bVar6)
			{
				set_blocking_of_non_temporary_events(iVar416, true);
				vVar1 = { func_169(13, 11) };
				fVar4 = func_1550(13, 11);
				iLocal_438[1] = add_cover_point(vVar1, fVar4, 2, 0, 1, false);
				remove_ped_defensive_area(iVar416, false);
				set_ped_sphere_defensive_area(iVar416, vVar1, 2f, 0, false, 0);
				open_sequence_task(&iVar0);
				task_put_ped_directly_into_cover(0, vVar1, 1500, 1, 1f, 1, 1, &(iLocal_438[1]), 0, 0, 0);
				task_combat_hated_targets_around_ped(0, 100f, 0, 0);
				close_sequence_task(iVar0);
				task_perform_sequence(iVar416, iVar0);
				clear_sequence_task(&iVar0);
				_0x2208438012482a1a(iVar416, false, false);
				func_27(&uLocal_358, 0);
				func_135(cParam0, 5);
				func_232(&uLocal_243);
				iLocal_168 = 6;
			}
			break;
		case 5:
			set_blocking_of_non_temporary_events(iVar416, true);
			vVar1 = { -1809.087f, -360.3991f, 161.2269f };
			fVar4 = func_1550(13, 12);
			remove_ped_defensive_area(iVar416, false);
			set_ped_sphere_defensive_area(iVar416, vVar1, 3f, 0, false, 0);
			open_sequence_task(&iVar0);
			task_put_ped_directly_into_cover(0, vVar1, 1000, 1, 0, 0, 0, 0, 0, 0, 0);
			task_combat_hated_targets_around_ped(0, 100f, 0, 0);
			close_sequence_task(iVar0);
			task_perform_sequence(iVar416, iVar0);
			clear_sequence_task(&iVar0);
			func_135(cParam0, 5);
			func_232(&uLocal_243);
			iLocal_168 = 6;
			break;
		case 6:
			if (func_26(&uLocal_358))
			{
				if (func_1919(&uLocal_358, 1.5f))
				{
					vVar7 = { func_169(13, 11) };
					if (does_scripted_cover_point_exist_at_coords(vVar7, 0))
					{
						remove_cover_point(&(iLocal_438[1]));
					}
					task_combat_hated_targets(iVar416, -1f);
				}
			}
			if ((func_1357(Local_14.f_14, 3) == 0 && !func_166(&(Local_14.f_24[0]), 3)) && ((bVar571 && !func_1367(Local_14.f_75, 3)) || !bVar571))
			{
				func_232(&uLocal_237);
				iLocal_168 = 7;
			}
			break;
		case 7:
			if (func_1275(&uLocal_237, 0.5f))
			{
				iLocal_168 = 10;
			}
			break;
		case 10:
			break;
	}
}

void func_1346(char[4] cParam0)
{
	iVar5 = 0;
	while (iVar5 < 3)
	{
		switch (&iLocal_176[iVar5])
		{
			case 0:
				iLocal_176[iVar5] = 1;
				break;
			case 1:
				if (iVar5 == 0)
				{
					vVar1 = { func_235(13, 3) };
				}
				else if (iVar5 == 1)
				{
					vVar1 = { func_235(13, 5) };
				}
				else
				{
					vVar1 = { func_235(13, 1) };
				}
				iVar0 = add_cover_point(vVar1, vVar1.f_3, 2, 0, 1, false);
				set_ped_sphere_defensive_area(&(Local_14.f_77[iVar5]), vVar1, 5f, 0, false, 0);
				register_hated_targets_around_ped(&(Local_14.f_77[iVar5]), 100f);
				_0x8acc0506743a8a5c(&(Local_14.f_77[iVar5]), 1240409539, 2, -1082130432);
				open_sequence_task(&iLocal_628);
				task_go_to_coord_and_aim_at_hated_entities_near_coord_using_combat_style(0, vVar1, vVar1, 2f, 1, 5f, 1082130432, 1, 0, 0, -687903391);
				task_seek_cover_to_cover_point(0, iVar0, func_169(5, 5), 1000, 1, 1, 0);
				task_combat_hated_targets_around_ped(0, 100f, 0, 0);
				close_sequence_task(iVar625);
				task_perform_sequence(&(Local_14.f_77[iVar5]), iVar625);
				clear_sequence_task(&iLocal_628);
				iLocal_176[iVar5] = 2;
				break;
			case 2:
				break;
			case 3:
				break;
			case 5:
				break;
		}
		iVar5++;
	}
}

void func_1347(bool bParam0)
{
	func_27(&uLocal_228, 0);
	if (bParam0 && iLocal_167 > 0)
	{
		return;
	}
	switch (iLocal_167)
	{
		case 0:
			if (!func_1920())
			{
				return;
			}
			if ((((!func_166(&(Local_14.f_24[2]), 0) || is_entity_in_volume(Global_35, iVar472, true, 0)) || is_entity_in_volume(iVar416, iVar472, true, 0)) || func_1348(Global_35, func_1916(5, 0), 1) < 40f) || func_1275(&uLocal_228, 30f))
			{
				iLocal_167 = 1;
			}
			break;
		case 1:
			if (func_1917(Local_14.f_40, 0))
			{
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (iVar1 == 0)
					{
						vVar3 = { func_169(14, 10) };
						fVar6 = func_1550(14, 10);
						iVar2 = 19;
					}
					else if (iVar1 == 2)
					{
						vVar3 = { -1829.604f, -408.5079f, 161.4105f };
						fVar6 = 314.8787f;
					}
					else
					{
						vVar3 = { func_169(14, 12) };
						fVar6 = func_1550(14, 12);
						iVar2 = 18;
					}
					if (bVar578)
					{
						func_1921(&(Local_14.f_42[iVar1]));
					}
					if (iVar1 == 0)
					{
						func_1922(&(Local_14.f_42[iVar1]));
					}
					if (iVar1 == 2)
					{
						if (func_386() == 0)
						{
							set_ped_accuracy(&(Local_14.f_42[iVar1]), 65);
						}
						else
						{
							set_ped_accuracy(&(Local_14.f_42[iVar1]), 55);
						}
						func_1922(&(Local_14.f_42[iVar1]));
					}
					func_1821(&(Local_14.f_42[iVar1]), -1595050198, 1, 1);
					_blip_set_modifier(get_blip_from_entity(&(Local_14.f_42[iVar1])), -1034486097);
					if (iVar1 != 2)
					{
						iLocal_438[iVar2] = add_cover_point(vVar3, fVar6, 2, 0, 1, false);
					}
					set_ped_relationship_group_hash(&(Local_14.f_42[iVar1]), 1269650476);
					set_ped_sphere_defensive_area(&(Local_14.f_42[iVar1]), vVar3, 1f, 0, false, 0);
					bVar7 = func_900(Global_35, &(Local_14.f_42[iVar1]), 50f, 1);
					if (iVar1 == 2)
					{
						_set_ped_crouch_movement(&(Local_14.f_42[iVar1]), false, 0, false);
						open_sequence_task(&iVar0);
						task_follow_nav_mesh_to_coord(0, vVar3, 2f, -1, 2f, 8192, 40000f);
						task_combat_hated_targets_around_ped(0, 100f, 100663296, 0);
						func_1570(&(Local_14.f_42[iVar1]), &iVar0, 0, 0, 1, 1);
					}
					else
					{
						open_sequence_task(&iVar0);
						if (!bVar7)
						{
							task_follow_nav_mesh_to_coord(0, vVar3, 3f, 20000, 10f, 0, 40000f);
						}
						task_go_to_coord_and_aim_at_hated_entities_near_coord(0, vVar3, vVar3, 3f, true, 5f, 4f, true, 0, 0, -687903391);
						task_seek_cover_to_cover_point(0, &(iLocal_438[iVar2]), func_169(14, 1), 1000, 1, 0, 0);
						task_combat_hated_targets_around_ped(0, 100f, 0, 0);
						func_1570(&(Local_14.f_42[iVar1]), &iVar0, func_1600(bVar7, 0f, (to_float(iVar1) * 2f)), func_1600(bVar7, 0f, (to_float(iVar1) * 2.1f)), 1, 1);
					}
					iVar1++;
				}
				func_232(&uLocal_228);
				iLocal_167 = 3;
			}
			break;
		case 3:
			if (!func_166(&(Local_14.f_42[1]), 0) && func_166(&(Local_14.f_42[0]), 0))
			{
				vVar3 = { func_169(14, 12) };
				func_1923(&(Local_14.f_42[0]), vVar3, 2f, 0, 0);
				open_sequence_task(&iVar0);
				task_go_to_coord_and_aim_at_hated_entities_near_coord(0, vVar3, vVar3, 3f, true, 5f, 4f, true, 0, 0, -687903391);
				task_seek_cover_to_cover_point(0, &(iLocal_438[18]), func_169(14, 1), 1000, 1, 0, 0);
				task_combat_hated_targets_around_ped(0, 100f, 0, 0);
				func_1570(&(Local_14.f_42[iVar1]), &iVar0, 0.5f, 1.5f, 1, 1);
				iLocal_167 = 5;
			}
			break;
		case 5:
			break;
	}
}

float func_1348(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_1349()
{
	if (!does_entity_exist(&(Local_14.f_24[2])))
	{
		func_1924(2, 1);
		return false;
	}
	if (!does_entity_exist(&(Local_14.f_24[3])))
	{
		func_1924(3, 1);
		return false;
	}
	if (!bVar580)
	{
		func_1874(&(Local_14.f_24[2]), 379542007, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_24[2]), true);
		set_ped_config_flag(&(Local_14.f_24[2]), 107, true);
		func_1805(&(Local_14.f_24[2]), 0.9f, 0);
		_0x986f7a51ee3e1f92(&(Local_14.f_24[2]), 0);
		func_929(&(Local_14.f_24[3]), func_235(13, 9), 2, 1073741824);
		func_1398(&(Local_14.f_24[2]), &(Local_14.f_24[3]), 0, -1, 1);
		iLocal_582 = 1;
	}
	return true;
}

void func_1350()
{
	switch (iLocal_180)
	{
		case 0:
			if (func_166(&(Local_14.f_24[2]), 0) && func_166(&(Local_14.f_24[3]), 0))
			{
				func_1925(Local_14.f_24[2]);
				set_blocking_of_non_temporary_events(&(Local_14.f_24[2]), true);
				set_ped_relationship_group_hash(&(Local_14.f_24[2]), 1269650476);
				set_combat_float(&(Local_14.f_24[2]), 64, 120f);
				vVar0 = { func_169(14, 16) };
				set_ped_sphere_defensive_area(&(Local_14.f_24[2]), vVar0, 3f, 0, false, 0);
				set_ped_config_flag(&(Local_14.f_24[2]), 107, false);
				register_target(&(Local_14.f_24[2]), iVar417, 1);
				register_target(&(Local_14.f_24[2]), Global_35, 1);
				if (func_386() == 0)
				{
					set_ped_accuracy(&(Local_14.f_24[2]), 65);
				}
				else
				{
					set_ped_accuracy(&(Local_14.f_24[2]), 55);
				}
				if (!does_blip_exist(get_blip_from_entity(&(Local_14.f_24[2]))))
				{
					func_1821(&(Local_14.f_24[2]), -1595050198, 1, 1);
				}
				_blip_set_modifier(get_blip_from_entity(&(Local_14.f_24[2])), -1034486097);
				open_sequence_task(&iLocal_628);
				task_stand_still(0, 100);
				task_follow_waypoint_recording(0, func_168(4), 0, 4616, -1, 0, 1, -1);
				close_sequence_task(iVar626);
				task_perform_sequence(&(Local_14.f_24[2]), iVar626);
				clear_sequence_task(&iLocal_628);
				func_232(&uLocal_231);
			}
			iLocal_180 = 1;
			break;
		case 1:
			if (func_166(&(Local_14.f_24[2]), 0))
			{
				if (func_1275(&uLocal_231, 2.5f))
				{
					task_combat_hated_targets(&(Local_14.f_24[2]), -1f);
					set_ped_shoot_rate(&(Local_14.f_24[2]), 200);
					iLocal_180 = 2;
				}
			}
			break;
		case 2:
			if (!is_waypoint_playback_going_on_for_ped(&(Local_14.f_24[2]), 0))
			{
				task_combat_hated_targets(&(Local_14.f_24[2]), -1f);
				set_ped_shoot_rate(&(Local_14.f_24[2]), 200);
				iLocal_180 = 8;
			}
			break;
		case 8:
			break;
	}
	if (iLocal_180 >= 2)
	{
		if (!&iLocal_554[1])
		{
			if (!is_entity_dead(&(Local_14.f_24[3])) && (is_entity_dead(&(Local_14.f_24[2])) || !is_ped_on_mount(&(Local_14.f_24[2]))))
			{
				set_blocking_of_non_temporary_events(&(Local_14.f_24[3]), true);
				_task_flee_from_ped(&(Local_14.f_24[3]), Global_35, -1855.939f, -456.8706f, 164.4904f, 500f, -1, 16, 2.5f, 0);
				iLocal_554[1] = 1;
			}
		}
	}
}

bool func_1351(char[4] cParam0)
{
	if (func_1551(&(Local_14.f_51), 1))
	{
		return true;
	}
	if (!func_1926(-1, 1))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (func_166(&(Local_14.f_53[iVar0]), 0) && (!decor_exist_on(&(Local_14.f_53[iVar0]), func_1927()) || decor_get_int(&(Local_14.f_53[iVar0]), func_1927()) != 1))
			{
				if (iVar0 != 0)
				{
					func_1874(&(Local_14.f_53[iVar0]), 379542007, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					func_1805(&(Local_14.f_53[iVar0]), 0.9f, 0);
				}
				else
				{
					func_1874(&(Local_14.f_53[iVar0]), -183018591, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					func_1805(&(Local_14.f_53[iVar0]), 0.9f, 0);
					_set_entity_health(&(Local_14.f_53[iVar0]), (get_entity_health(&(Local_14.f_53[iVar0])) - 10), 0);
				}
				func_1928(&(Local_14.f_53[iVar0]));
				set_blocking_of_non_temporary_events(&(Local_14.f_53[iVar0]), true);
				if (iVar0 == 0)
				{
					func_145(cParam0, &(Local_14.f_53[iVar0]), "UTP1_VILLAGER_1", 0);
					func_1332(&(Local_14.f_53[iVar0]), -625287055);
				}
				else if (iVar0 == 1)
				{
					func_145(cParam0, &(Local_14.f_53[iVar0]), "UTP1_VILLAGER_2", 0);
					func_1922(&(Local_14.f_53[iVar0]));
				}
				else if (iVar0 == 2)
				{
					func_1332(&(Local_14.f_53[iVar0]), -1070257306);
					func_1922(&(Local_14.f_53[iVar0]));
				}
				else if (iVar0 == 3)
				{
					func_1928(&(Local_14.f_53[iVar0]));
					func_1332(&(Local_14.f_53[iVar0]), -173533621);
				}
				_0x986f7a51ee3e1f92(&(Local_14.f_53[iVar0]), 0);
				decor_set_int(&(Local_14.f_53[iVar0]), func_1927(), 1);
				return false;
			}
			iVar0++;
		}
	}
	return false;
}

void func_1352(char[4] cParam0)
{
	if (func_166(&(Local_14.f_53[0]), 0))
	{
		set_ped_reset_flag(&(Local_14.f_53[0]), 29, true);
	}
	switch (iLocal_169)
	{
		case 0:
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (func_166(&(Local_14.f_53[iVar4]), 0))
				{
					if (iVar4 == 1)
					{
						vVar1 = { func_169(15, 6) };
						task_put_ped_directly_into_cover(&(Local_14.f_53[iVar4]), vVar1, -1, 0, 0, 1, 0, 0, 0, 0, 0);
						set_ped_sphere_defensive_area(&(Local_14.f_53[iVar4]), func_169(15, 12), 7f, 0, false, 0);
						_0x8acc0506743a8a5c(&(Local_14.f_53[iVar4]), 1240409539, 2, -1082130432);
						set_ped_relationship_group_hash(&(Local_14.f_53[iVar4]), 1269650476);
					}
					else if (iVar4 == 2)
					{
						vVar1 = { -1797.005f, -426.8991f, 155.0652f };
						set_current_ped_weapon(&(Local_14.f_53[iVar4]), 379542007, false, 0, false, false);
						_set_ped_crouch_movement(&(Local_14.f_53[iVar4]), true, 0, false);
						task_follow_nav_mesh_to_coord(&(Local_14.f_53[iVar4]), vVar1, 2f, -1, 0.25f, 0, 30f);
					}
					else if (iVar4 == 3)
					{
						vVar1 = { -1791.191f, -422.5102f, 154.7953f };
						set_current_ped_weapon(&(Local_14.f_53[iVar4]), 379542007, false, 0, false, false);
						_set_ped_crouch_movement(&(Local_14.f_53[iVar4]), true, 0, false);
						task_follow_nav_mesh_to_coord(&(Local_14.f_53[iVar4]), vVar1, 2f, -1, 0.25f, 0, 30f);
					}
				}
				iVar4++;
			}
			iLocal_169 = 2;
			break;
		case 2:
			if (((((!func_166(&(Local_14.f_53[0]), 0) || func_1354(Global_35, iVar505, 1, 0)) || (iLocal_212 >= 15 && func_33(cParam0) == iLocal_207)) || (func_166(&(Local_14.f_53[1]), 0) && func_900(Global_35, &(Local_14.f_53[1]), 20f, 1))) || (func_166(&(Local_14.f_53[2]), 0) && func_900(Global_35, &(Local_14.f_53[2]), 20f, 1))) || (func_166(&(Local_14.f_53[3]), 0) && func_900(Global_35, &(Local_14.f_53[3]), 20f, 1)))
			{
				iVar4 = 0;
				while (iVar4 < 4)
				{
					if (func_166(&(Local_14.f_53[iVar4]), 0))
					{
						if (iVar4 == 2)
						{
							vVar1 = { -1809.026f, -417.0667f, 157.9466f };
							set_ped_sphere_defensive_area(&(Local_14.f_53[iVar4]), vVar1, 3f, 0, false, 0);
							_0x8acc0506743a8a5c(&(Local_14.f_53[iVar4]), 1240409539, 2, -1082130432);
							set_ped_relationship_group_hash(&(Local_14.f_53[iVar4]), 1269650476);
							func_982(&(Local_14.f_53[iVar4]), 1);
							_set_ped_crouch_movement(&(Local_14.f_53[iVar4]), false, 0, false);
						}
						else if (iVar4 == 3)
						{
							vVar1 = { func_169(15, 8) };
							set_ped_sphere_defensive_area(&(Local_14.f_53[iVar4]), vVar1, 3f, 0, false, 0);
							_0x8acc0506743a8a5c(&(Local_14.f_53[iVar4]), 1240409539, 2, -1082130432);
							set_ped_relationship_group_hash(&(Local_14.f_53[iVar4]), 1269650476);
							_set_ped_crouch_movement(&(Local_14.f_53[iVar4]), false, 0, false);
						}
						if (!does_blip_exist(get_blip_from_entity(&(Local_14.f_53[iVar4]))))
						{
							_blip_add_for_entity(831283580, &(Local_14.f_53[iVar4]));
							_blip_set_modifier(get_blip_from_entity(&(Local_14.f_53[iVar4])), -1034486097);
						}
						open_sequence_task(&iVar0);
						if (iVar4 == 3)
						{
							task_stand_still(0, 1500);
						}
						if (iVar4 == 2)
						{
							task_go_to_coord_and_aim_at_hated_entities_near_coord_using_combat_style(0, vVar1, Global_36, 2f, 1, 5f, 1082130432, 1, 0, 0, -687903391);
							task_put_ped_directly_into_cover(0, vVar1, 1000, 1, 0, 0, 0, 0, 0, 0, 0);
						}
						task_combat_hated_targets_around_ped(0, 100f, 0, 0);
						func_1570(&(Local_14.f_53[iVar4]), &iVar0, 0, 0, 1, 1);
					}
					iVar4++;
				}
				func_232(&uLocal_264);
				iLocal_169 = 3;
			}
			break;
		case 3:
			if (func_166(&(Local_14.f_53[1]), 0))
			{
				if (func_1275(&uLocal_264, 3f))
				{
					bVar5 = func_1929(iVar416, &(Local_14.f_53[0]), 1) < func_1929(Global_35, &(Local_14.f_53[0]), 1);
					open_sequence_task(&iVar0);
					task_go_to_coord_while_aiming_at_entity_using_combat_style(0, func_169(15, 12), func_1930(bVar5, iVar416, Global_35), 1f, 1, 0.5f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
					task_shoot_at_entity(0, Global_35, 2000, -687903391, 0);
					task_combat_hated_targets_around_ped(0, 100f, 0, 0);
					func_1570(&(Local_14.f_53[1]), &iVar0, 0, 0, 1, 1);
					iLocal_169 = 5;
				}
			}
			else
			{
				iLocal_169 = 5;
			}
			break;
		case 5:
			break;
	}
}

bool func_1353(int iParam0)
{
	if (-1829635046 == func_1931(81053684))
	{
		if (func_1327(iParam0))
		{
			return true;
		}
	}
	else if (func_1654(-525676072, iParam0))
	{
		if (func_1327(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_1354(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_1355(char* sParam0)
{
	return func_1932(sParam0);
}

void func_1356(char* sParam0, bool bParam1, bool bParam2)
{
	func_1933(sParam0, bParam1, bParam2);
}

int func_1357(struct<2> Param0, int iParam2)
{
	iVar0 = 0;
	if (!func_266(Param0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < func_267(Param0))
	{
		iVar2 = func_1583(Param0, iVar1);
		if (does_entity_exist(iVar2))
		{
			if (!is_entity_dead(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = get_ped_index_from_entity_index(iVar2);
					if (func_166(iVar3, iParam2))
					{
						iVar0++;
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_1358(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar0 = func_652(iParam0);
	sVar1 = func_334(iParam0, 0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (bParam1 && Global_1935630->f_12)
	{
		return;
	}
	if (bParam4 && !func_269(iParam0))
	{
		return;
	}
	if (!bParam1 && !func_978(iParam0, 37, 1))
	{
		return;
	}
	if (does_group_exist(get_player_group(player_id())) || (!bParam1 && Global_1935630->f_12))
	{
		if (!Global_1935630->f_12)
		{
			set_ped_config_flag(Global_35, 155, bParam1);
		}
		if (bParam1)
		{
			if (!func_1934(iParam0, 0))
			{
				if (is_ped_in_group(iVar0))
				{
					remove_ped_from_group(iVar0);
				}
				func_1935(iParam0, bParam5);
			}
		}
		else
		{
			func_1936(iParam0);
		}
		if (bParam1)
		{
			_0x2917e634206b9e17(iVar0, iParam3);
		}
		if (bParam1)
		{
			func_1137(iParam0, 37, 1);
		}
		else
		{
			func_979(iParam0, 37, 1);
		}
	}
}

var func_1359()
{
	return func_1937(1);
}

void func_1360(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		_set_entity_health(iParam0, iParam1, 0);
	}
}

void func_1361()
{
	if (!bVar589)
	{
		if ((does_entity_exist(&(Local_14.f_24[0])) && does_entity_exist(&(Local_14.f_16[4]))) && does_entity_exist(&(Local_14.f_48[1])))
		{
			if (!func_166(&(Local_14.f_16[4]), 0))
			{
				if (!_0x404527bc03da0e6c(&(Local_14.f_48[1])))
				{
					bring_vehicle_to_halt(&(Local_14.f_48[1]), 2f, 1, false);
				}
				if (!func_166(&(Local_14.f_24[0]), 0) || !is_ped_in_vehicle(&(Local_14.f_24[0]), &(Local_14.f_48[1]), false))
				{
					if (_0xa19447d83294e29f(&(Local_14.f_48[1]), &uVar0, &iVar1))
					{
						if (iVar1 > 0 && get_entity_speed(&(Local_14.f_48[1])) < 1f)
						{
							_0x7c06330bfdda182e(&(Local_14.f_48[1]));
							_0x141bc64c8d7c5529(&(Local_14.f_48[1]));
							_0xeba2081e0a5f4d17(&(Local_14.f_48[1]));
							_task_vehicle_drive_to_destination_2(&(Local_14.f_48[1]), -1798.67f, -342.1558f, 163.8509f, 8f, 69210112, 6, 10f, 10f);
							iLocal_591 = 1;
						}
					}
				}
			}
		}
	}
}

void func_1362(char[4] cParam0)
{
	if (!is_entity_dead(iVar416))
	{
		switch (iLocal_212)
		{
			case 0:
				if (bVar578)
				{
					func_1260(&iLocal_212, 27);
				}
				else
				{
					func_1260(&iLocal_212, 2);
				}
				break;
			case 2:
				set_blocking_of_non_temporary_events(iVar416, true);
				task_enter_anim_scene(iVar416, &(iLocal_522[7]), func_1251(iVar416), "pl_end", 5.05f, 1, 2, 20000, -1082130432);
				func_1260(&iLocal_212, 80);
				break;
			case 80:
				if (_is_anim_scene_started(&(iLocal_522[7]), false))
				{
					func_1260(&iLocal_212, 15);
				}
				break;
			case 15:
				if ((func_1385(&(iLocal_522[7])) || _0x005e6f28dd7ed58d(&(iLocal_522[7]), func_1251(iVar416))) || !_is_anim_scene_started(&(iLocal_522[7]), false))
				{
					set_ped_id_range(iVar416, 50f);
					vVar1 = { -1806.89f, -380.51f, 160.23f };
					set_ped_sphere_defensive_area(iVar416, vVar1, 5f, 0, false, 0);
					open_sequence_task(&iVar0);
					task_put_ped_directly_into_cover(0, vVar1, 2000, 1, 0, 1, 1, 0, 0, 0, 0);
					task_combat_hated_targets_around_ped(0, 100f, 0, 0);
					close_sequence_task(iVar0);
					task_perform_sequence(iVar416, iVar0);
					clear_sequence_task(&iVar0);
					_0x2208438012482a1a(iVar416, true, false);
					func_232(&uLocal_243);
					func_1260(&iLocal_212, 39);
				}
				else if (func_1337(Global_35, func_169(14, 1), 2f, 1, 1))
				{
					_delete_anim_scene(&(iLocal_522[7]));
					func_1260(&iLocal_212, 27);
				}
				break;
			case 27:
				set_blocking_of_non_temporary_events(iVar416, true);
				vVar1 = { func_169(14, 2) };
				remove_ped_defensive_area(iVar416, false);
				set_ped_sphere_defensive_area(iVar416, vVar1, 5f, 0, false, 0);
				open_sequence_task(&iVar0);
				task_follow_nav_mesh_to_coord(0, vVar1, 2f, 20000, 5f, 0, 40000f);
				task_combat_hated_targets_around_ped(0, 100f, 0, 0);
				close_sequence_task(iVar0);
				task_perform_sequence(iVar416, iVar0);
				clear_sequence_task(&iVar0);
				func_232(&uLocal_243);
				func_1260(&iLocal_212, 39);
				break;
			case 39:
				if (!func_166(&(Local_14.f_24[2]), 3))
				{
					if (func_1357(Local_14.f_40, 3) >= 1)
					{
						vVar1 = { func_169(14, 3) };
						fVar4 = func_1550(14, 3);
						iLocal_438[3] = add_cover_point(vVar1, fVar4, 2, 0, 1, false);
						vVar1 = { func_169(15, 0) };
						fVar4 = func_1550(15, 0);
						iLocal_438[12] = add_cover_point(vVar1, fVar4, 2, 0, 1, false);
						remove_ped_defensive_area(iVar416, false);
						_0xfc3db99c8144cd81(iVar416, iVar485, 0, false, 0);
						if (!func_1337(Global_35, func_169(14, 3), 2f, 1, 1) && !func_1271(Global_35, iVar495, 0, 1))
						{
							iLocal_557 = 1;
							task_put_ped_directly_into_cover(iVar416, func_169(14, 1), 2000, 1, 0, 0, 0, 0, 1, 0, 0);
							func_232(&uLocal_237);
							func_1260(&iLocal_212, 40);
						}
						else
						{
							iLocal_557 = 0;
							func_135(cParam0, 4);
							func_232(&uLocal_237);
							func_1260(&iLocal_212, 28);
						}
					}
					else
					{
						func_1260(&iLocal_212, 1);
					}
				}
				break;
			case 40:
				if (func_1275(&uLocal_237, 2f))
				{
					func_232(&uLocal_237);
					if (func_1348(iVar416, func_169(14, 1), 1) < 2f && is_ped_in_cover(iVar416, 0, 0))
					{
						if (func_1938())
						{
							if (func_1355("UTP1_ONBRIDGE"))
							{
								func_1356("UTP1_ONBRIDGE", 0, 0);
							}
							if (func_1355("UTP1_IG7"))
							{
								func_1356("UTP1_IG7", 0, 0);
							}
							func_135(cParam0, 5);
							func_1260(&iLocal_212, 28);
						}
					}
					else
					{
						func_135(cParam0, 4);
						func_1260(&iLocal_212, 28);
					}
				}
				break;
			case 28:
				if (bVar554)
				{
					_0x140b3cb1d424a945(iVar416, -1);
					if ((func_1385(&(iLocal_522[8])) || _0x005e6f28dd7ed58d(&(iLocal_522[8]), func_1251(iVar416))) || (!_is_anim_scene_started(&(iLocal_522[8]), false) && func_1275(&uLocal_237, 0.5f)))
					{
						vVar1 = { func_169(14, 3) };
						open_sequence_task(&iVar0);
						task_put_ped_directly_into_cover(0, vVar1, 1000, 1, 0, 1, 1, &(iLocal_438[3]), 0, 0, 0);
						task_combat_hated_targets_around_ped(0, 100f, 0, 0);
						close_sequence_task(iVar0);
						task_perform_sequence(iVar416, iVar0);
						clear_sequence_task(&iVar0);
						_0x2208438012482a1a(iVar416, false, false);
						func_653(&uLocal_237);
						func_232(&uLocal_243);
						fLocal_548 = get_random_float_in_range(1f, 3f);
						func_1260(&iLocal_212, 38);
					}
					else if (func_1337(Global_35, func_169(14, 3), 2f, 1, 1))
					{
						_delete_anim_scene(&(iLocal_522[8]));
						vVar1 = { func_169(15, 0) };
						remove_ped_defensive_area(iVar416, false);
						set_ped_sphere_defensive_area(iVar416, vVar1, 3f, 0, false, 0);
						open_sequence_task(&iVar0);
						task_follow_nav_mesh_to_coord(0, vVar1, 2f, 20000, 5f, 0, 40000f);
						task_combat_hated_targets_around_ped(0, 100f, 0, 0);
						close_sequence_task(iVar0);
						task_perform_sequence(iVar416, iVar0);
						clear_sequence_task(&iVar0);
						func_653(&uLocal_237);
						func_232(&uLocal_243);
						fLocal_548 = get_random_float_in_range(1f, 3f);
						func_1260(&iLocal_212, 38);
					}
				}
				if (!bVar554)
				{
					vVar1 = { func_169(15, 0) };
					open_sequence_task(&iVar0);
					task_go_to_coord_and_aim_at_hated_entities_near_coord(0, vVar1, func_169(14, 10), 2f, true, 5f, 4f, true, 0, 0, -687903391);
					task_put_ped_directly_into_cover(0, vVar1, 1000, 1, 0, 0, 0, &(iLocal_438[12]), 1, 0, 0);
					task_combat_hated_targets_around_ped(0, 100f, 0, 0);
					close_sequence_task(iVar0);
					task_perform_sequence(iVar416, iVar0);
					clear_sequence_task(&iVar0);
					func_653(&uLocal_237);
					func_232(&uLocal_243);
					fLocal_548 = get_random_float_in_range(1f, 3f);
					func_1260(&iLocal_212, 38);
				}
				break;
			case 38:
				func_1939(func_169(14, 3), func_169(15, 0));
				if (func_1357(Local_14.f_40, 3) <= 1)
				{
					func_27(&uLocal_237, 0);
					if (func_1275(&uLocal_237, fVar545))
					{
						func_1260(&iLocal_212, 41);
					}
				}
				break;
			case 41:
				if (!func_1367(Local_14.f_40, 3))
				{
					vVar1 = { func_169(14, 3) };
					set_blocking_of_non_temporary_events(iVar416, true);
					task_put_ped_directly_into_cover(iVar416, vVar1, -1, 1, 0, 0, 0, &(iLocal_438[3]), 1, 0, 0);
					func_1260(&iLocal_212, 1);
				}
				break;
		}
	}
}

bool func_1363(bool bParam0)
{
	bVar0 = true;
	if (func_1354(Global_35, iVar487, 1, 0) && !func_1354(iVar416, iVar487, 1, 0))
	{
		bVar0 = false;
	}
	if (func_904(Global_35, iVar416, 1, 1) > 20f)
	{
		bVar0 = false;
	}
	if (bParam0)
	{
		if (bVar0)
		{
			iLocal_598 = 0;
		}
		else
		{
			iLocal_598 = 1;
		}
	}
	return bVar0;
}

bool func_1364(char[4] cParam0)
{
	switch (iLocal_199)
	{
		case 0:
			if (func_1355("UTP1_SKPTOWN") && _is_anim_scene_started(&(iLocal_522[7]), false))
			{
				iLocal_199 = 1;
			}
			else if (iLocal_212 == 39)
			{
				iLocal_199 = 2;
			}
			break;
		case 1:
			if (((_is_anim_scene_started(&(iLocal_522[7]), false) && _get_anim_scene_progress(&(iLocal_522[7])) > 0.862f) || !_is_anim_scene_started(&(iLocal_522[7]), false)) || iLocal_212 == 39)
			{
				bVar0 = true;
			}
			else if (!func_1355("UTP1_SKPTOWN") || get_current_scripted_conversation_line("UTP1_SKPTOWN") == 2)
			{
				func_1278(cParam0, "UTP1_IG7", 1, 0, 0);
				bVar0 = true;
			}
			if (bVar0)
			{
				iLocal_199 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_1365()
{
	if (!func_166(Global_35, 0))
	{
		return false;
	}
	if (_0x285d36c5c72b0569(Global_35) <= 4f || is_ped_in_melee_combat(Global_35))
	{
		return true;
	}
	return false;
}

bool func_1366()
{
	if (!_is_anim_scene_started(&(iLocal_522[8]), false))
	{
		return false;
	}
	if (_is_anim_scene_started(&(iLocal_522[8]), false) && _get_anim_scene_progress(&(iLocal_522[8])) > 0.467f)
	{
		return false;
	}
	return true;
}

bool func_1367(struct<2> Param0, int iParam2)
{
	if (!func_266(Param0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < func_267(Param0))
	{
		iVar1 = func_1583(Param0, iVar0);
		if (does_entity_exist(iVar1))
		{
			if (!is_entity_dead(iVar1))
			{
				if (is_entity_a_ped(iVar1))
				{
					iVar2 = get_ped_index_from_entity_index(iVar1);
					if (func_166(iVar2, iParam2))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_1368(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_1940((*uParam0)[iVar0], bParam1);
		iVar0++;
	}
}

void func_1369(char[4] cParam0)
{
	if (!func_166(iVar416, 0))
	{
		return;
	}
	if (iLocal_212 > 15)
	{
		func_1941(-1940221046);
		func_1941(-1031036002);
	}
	switch (iLocal_212)
	{
		case 0:
			func_1942();
			func_1260(&iLocal_212, 8);
			break;
		case 8:
			if (func_166(&(Local_14.f_53[0]), 0))
			{
				fVar0 = 7.5f;
				if (((((func_1348(iVar416, func_169(15, 2), 1) < fVar0 || func_1348(iVar416, func_169(15, 1), 1) < fVar0) || func_1348(Global_35, func_169(15, 1), 1) < fVar0) || func_1348(Global_35, func_169(15, 2), 1) < fVar0) || func_1271(Global_35, iVar498, 76, 1)) || func_1271(iVar416, iVar498, 76, 1))
				{
					func_1313(-1940221046, 0, 0);
					func_1313(-1031036002, 0, 0);
					vVar1 = { -1814.595f, -422.038f, 159.0019f };
					vVar4 = { -1825.05f, -409.2289f, 160.1556f };
					set_ped_sphere_defensive_area(&(Local_14.f_53[0]), vVar1, 3f, 0, false, 0);
					_0x8acc0506743a8a5c(&(Local_14.f_53[0]), 1240409539, 2, -1082130432);
					set_ped_relationship_group_hash(&(Local_14.f_53[0]), 1269650476);
					register_hated_targets_around_ped(&(Local_14.f_53[0]), 200f);
					task_go_to_coord_and_aim_at_hated_entities_near_coord(&(Local_14.f_53[0]), vVar1, vVar4, 2f, true, 0.5f, 4f, true, 0, 0, -687903391);
					iLocal_611 = 1;
					func_232(&uLocal_237);
					func_1260(&iLocal_212, 2);
				}
			}
			else
			{
				func_1260(&iLocal_212, 2);
			}
			break;
		case 2:
			if (func_166(&(Local_14.f_53[0]), 0))
			{
				vVar7 = { -1814.595f, -422.038f, 159.0019f };
				if (func_1348(&(Local_14.f_53[0]), vVar7, 1) < 1.5f || func_1275(&uLocal_237, 5f))
				{
					if (!does_blip_exist(get_blip_from_entity(&(Local_14.f_53[0]))))
					{
						_blip_add_for_entity(831283580, &(Local_14.f_53[0]));
						_blip_set_modifier(get_blip_from_entity(&(Local_14.f_53[0])), -1034486097);
					}
					task_combat_hated_targets_around_ped(&(Local_14.f_53[0]), 50f, 100663296, 0);
					func_1260(&iLocal_212, 15);
				}
			}
			else
			{
				func_1260(&iLocal_212, 15);
			}
			break;
		case 15:
			func_653(&uLocal_237);
			func_232(&uLocal_243);
			clear_ped_tasks(iVar416, 1, 0);
			remove_ped_defensive_area(iVar416, false);
			set_ped_sphere_defensive_area(iVar416, func_169(15, 1), 3f, 1, false, 0);
			task_combat_hated_targets_around_ped(iVar416, 100f, 0, 0);
			func_135(cParam0, 1);
			func_1260(&iLocal_212, 20);
			break;
		case 20:
			func_1939(func_169(15, 1), func_169(15, 2));
			if (iLocal_170 >= 2)
			{
				fLocal_548 = get_random_float_in_range(5f, 7f);
				clear_ped_tasks(iVar416, 1, 0);
				remove_ped_defensive_area(iVar416, false);
				set_ped_sphere_defensive_area(iVar416, -1809.719f, -421.1858f, 157.5556f, 3f, 1, false, 0);
				task_combat_hated_targets_around_ped(iVar416, 100f, 0, 0);
				func_1260(&iLocal_212, 21);
			}
			break;
		case 21:
			func_1939(-1809.719f, -421.1858f, 157.5556f, -1806.123f, -416.305f, 156.8942f);
			if (iLocal_170 >= 5)
			{
				if ((func_1357(Local_14.f_51, 3) + func_1357(Local_14.f_58, 3)) <= 1)
				{
					func_27(&uLocal_237, 0);
					if (func_1275(&uLocal_237, fVar545))
					{
						func_1943(iVar416);
						func_1260(&iLocal_212, 29);
					}
				}
			}
			break;
		case 29:
			func_1939(-1809.719f, -421.1858f, 157.5556f, -1806.123f, -416.305f, 156.8942f);
			if (!func_166(iVar420, 0))
			{
				if (func_1367(Local_14.f_51, 3) || func_1367(Local_14.f_58, 3))
				{
					func_1260(&iLocal_212, 21);
				}
			}
			if (func_1357(Local_14.f_51, 3) <= 0 && func_1357(Local_14.f_58, 3) <= 0)
			{
				func_163(iVar416);
				func_1260(&iLocal_212, 87);
			}
			break;
	}
}

void func_1370(char[4] cParam0)
{
	switch (iLocal_170)
	{
		case 0:
			func_27(&uLocal_228, 0);
			vVar6 = { func_1916(8, 0) };
			if (!func_1389(vVar6, 0f, 1f, 0f, 1f) && !func_187(2))
			{
				if (((func_1944(Local_14.f_51) <= 1 && iLocal_169 > 0) || bVar594) || func_1275(&uLocal_228, 45f))
				{
					if (!func_1945())
					{
						return;
					}
					if (func_1337(Global_35, func_1916(8, 0), 40f, 1, 1) && !bVar594)
					{
						iLocal_170 = 4;
					}
					else
					{
						iLocal_170 = 1;
					}
				}
			}
			break;
		case 1:
			if (func_1917(Local_14.f_58, 0))
			{
				set_entity_only_damaged_by_player(&(Local_14.f_60[0]), true);
				set_entity_only_damaged_by_player(&(Local_14.f_60[1]), true);
				func_1821(&(Local_14.f_60[0]), -1595050198, 1, 1);
				_blip_set_modifier(get_blip_from_entity(&(Local_14.f_60[0])), -1034486097);
				vVar2 = { func_169(15, 5) };
				fVar5 = func_1550(15, 5);
				iVar1 = add_cover_point(vVar2, fVar5, 2, 2, 1, false);
				func_1946(&(Local_14.f_60[0]), iVar484, 0, 0);
				_0xcf0b19806473d324(&(Local_14.f_60[0]), vVar2);
				register_hated_targets_around_ped(&(Local_14.f_60[0]), 200f);
				_0x8acc0506743a8a5c(&(Local_14.f_60[0]), 1240409539, 2, -1082130432);
				open_sequence_task(&iVar0);
				task_go_to_coord_and_aim_at_hated_entities_near_coord_using_combat_style(0, vVar2, func_169(15, 15), 3f, 1, 5f, 1082130432, 1, 0, 0, -687903391);
				task_seek_cover_to_cover_point(0, iVar1, func_169(15, 1), 1000, 1, 0, 0);
				task_combat_hated_targets_around_ped(0, 100f, 0, 0);
				func_1570(&(Local_14.f_60[0]), &iVar0, 0, 0, 1, 1);
				vVar2 = { func_169(15, 14) };
				func_1821(&(Local_14.f_60[1]), -1595050198, 1, 1);
				_blip_set_modifier(get_blip_from_entity(&(Local_14.f_60[1])), -1034486097);
				func_1946(&(Local_14.f_60[1]), iVar484, 0, 0);
				register_hated_targets_around_ped(&(Local_14.f_60[1]), 200f);
				_0x8acc0506743a8a5c(&(Local_14.f_60[1]), 1240409539, 2, -1082130432);
				open_sequence_task(&iVar0);
				task_go_to_coord_and_aim_at_hated_entities_near_coord_using_combat_style(0, vVar2, func_169(15, 15), 3f, 1, 5f, 1082130432, 1, 0, 0, -687903391);
				task_combat_hated_targets_around_ped(0, 100f, 33554432, 0);
				func_1570(&(Local_14.f_60[1]), &iVar0, 2f, 2f, 1, 1);
				func_135(cParam0, 4);
				iLocal_170 = 2;
			}
			break;
		case 2:
			if (func_1337(&(Local_14.f_60[0]), func_169(15, 5), 15f, 1, 1) || func_1337(&(Local_14.f_60[1]), func_169(15, 14), 15f, 1, 1))
			{
				if (func_166(&(Local_14.f_60[0]), 0))
				{
					set_entity_only_damaged_by_player(&(Local_14.f_60[0]), false);
				}
				if (func_166(&(Local_14.f_60[1]), 0))
				{
					set_entity_only_damaged_by_player(&(Local_14.f_60[1]), false);
				}
				iLocal_170 = 3;
			}
			break;
		case 3:
			if (func_1565(&(Local_14.f_60[1]), 242628503) && get_sequence_progress(&(Local_14.f_60[1])) > 1)
			{
				set_ped_id_range(&(Local_14.f_60[1]), 60f);
				_0x3c529a827998f9b3(&(Local_14.f_60[1]), 500, 5000);
				iLocal_170 = 5;
			}
			break;
		case 4:
			if (!func_1945())
			{
				return;
			}
			if (func_1917(Local_14.f_58, 0))
			{
				func_1946(&(Local_14.f_60[0]), iVar484, 0, 0);
				register_hated_targets_around_ped(&(Local_14.f_60[0]), 200f);
				task_combat_hated_targets(&(Local_14.f_60[0]), -1f);
				func_1946(&(Local_14.f_60[1]), iVar484, 0, 0);
				register_hated_targets_around_ped(&(Local_14.f_60[1]), 200f);
				task_combat_hated_targets(&(Local_14.f_60[1]), -1f);
			}
			iLocal_170 = 5;
			break;
	}
}

void func_1371(char[4] cParam0)
{
	if (func_1275(&uLocal_270, 15f))
	{
		if (func_1278(cParam0, "UTP1_URGE", 0, 1f, 0))
		{
			func_232(&uLocal_270);
		}
	}
}

void func_1372(var uParam0, float fParam1, char* sParam2)
{
	*uParam0 = uVar414;
	uParam0->f_1 = fParam1;
	uParam0->f_5 = sParam2;
	uParam0->f_6 = 1;
}

bool func_1373(char[4] cParam0)
{
	if (!func_1947(-1, 1))
	{
		return false;
	}
	if (!is_entity_dead(&(Local_14.f_31[0])))
	{
		remove_all_ped_weapons(&(Local_14.f_31[0]), true, true);
		set_blocking_of_non_temporary_events(&(Local_14.f_31[0]), true);
		func_145(cParam0, &(Local_14.f_31[0]), "UTP1_Skinny", 0);
		set_ped_can_be_targetted(&(Local_14.f_31[0]), false);
		set_ped_relationship_group_hash(&(Local_14.f_31[0]), -1538724068);
		set_entity_invincible(&(Local_14.f_31[0]), true);
		func_1820(&(Local_14.f_31[0]), 0);
		_0x18ff3110cf47115d(&(Local_14.f_31[0]), 2, 0);
		_0x18ff3110cf47115d(&(Local_14.f_31[0]), 3, 0);
		_0x18ff3110cf47115d(&(Local_14.f_31[0]), 7, 0);
		func_151(cParam0, &(Local_14.f_31[0]), "NelsonNemesis", 0, 0, 0, 0);
	}
	if (!is_entity_dead(&(Local_14.f_31[1])))
	{
		remove_all_ped_weapons(&(Local_14.f_31[1]), true, true);
		set_blocking_of_non_temporary_events(&(Local_14.f_31[1]), true);
		func_145(cParam0, &(Local_14.f_31[1]), "UTP1_Maddy", 0);
		task_cower(&(Local_14.f_31[1]), -1, 0, 0);
		set_ped_can_be_targetted(&(Local_14.f_31[1]), false);
		set_entity_invincible(&(Local_14.f_31[1]), true);
		func_1820(&(Local_14.f_31[1]), 0);
		_0x18ff3110cf47115d(&(Local_14.f_31[1]), 2, 0);
		_0x18ff3110cf47115d(&(Local_14.f_31[1]), 3, 0);
		_0x18ff3110cf47115d(&(Local_14.f_31[1]), 7, 0);
		func_151(cParam0, &(Local_14.f_31[1]), "A_F_M_STRTOWNFOLK_01", 0, 0, 0, 0);
	}
	return true;
}

void func_1374()
{
	if (!bVar566)
	{
		return;
	}
	if (is_entity_in_volume(Global_35, iVar469, true, 0))
	{
		if (!bVar565)
		{
			_0x3946fc742ac305cd(player_id(), uVar417, "UTP1_IG4_IFM", -1771.196f, -432.002f, 153.6336f, 0, 0);
			iLocal_567 = 1;
		}
	}
	else if (bVar565)
	{
		_0xc67a4910425f11f1(player_id(), 0);
		iLocal_567 = 0;
	}
}

void func_1375(char[4] cParam0)
{
	if (func_1348(&(Local_14.f_65[0]), func_169(16, 6), 1) > 5f)
	{
		set_entity_only_damaged_by_player(&(Local_14.f_65[0]), true);
	}
	else
	{
		set_entity_only_damaged_by_player(&(Local_14.f_65[0]), false);
	}
	if (func_1348(&(Local_14.f_65[1]), func_169(16, 7), 1) > 5f)
	{
		set_entity_only_damaged_by_player(&(Local_14.f_65[1]), true);
	}
	else
	{
		set_entity_only_damaged_by_player(&(Local_14.f_65[1]), false);
	}
	switch (iLocal_171)
	{
		case 0:
			vVar5 = { func_1916(9, 0) };
			if (!func_1389(vVar5, 0f, 1f, 0f, 1f) && !func_187(2))
			{
				if (!func_1948(cParam0))
				{
					return;
				}
				iLocal_171 = 1;
			}
			break;
		case 1:
			iVar4 = 0;
			while (iVar4 < 2)
			{
				if (func_166(&(Local_14.f_65[iVar4]), 0))
				{
					if (iVar4 == 0)
					{
						vVar1 = { func_169(16, 6) };
					}
					else if (iVar4 == 1)
					{
						vVar1 = { func_169(16, 7) };
					}
					func_1821(&(Local_14.f_65[iVar4]), -1595050198, 1, 1);
					_blip_set_modifier(get_blip_from_entity(&(Local_14.f_65[iVar4])), -1034486097);
					set_ped_relationship_group_hash(&(Local_14.f_65[iVar4]), 1269650476);
					set_ped_sphere_defensive_area(&(Local_14.f_65[iVar4]), vVar1, 3f, 0, false, 0);
					_0x8acc0506743a8a5c(&(Local_14.f_60[1]), 1240409539, 2, -1082130432);
					_0x3c529a827998f9b3(&(Local_14.f_65[iVar4]), 200, 8000);
					_set_ped_crouch_movement(&(Local_14.f_65[iVar4]), true, 0, false);
					task_stand_still(&(Local_14.f_65[iVar4]), -1);
					func_27(&uLocal_343, 1);
					iLocal_171 = 2;
				}
				iVar4++;
			}
			break;
		case 2:
			if ((func_1275(&uLocal_343, 1.5f) || _0x7f9b9791d4cb71f6(Global_35, &(Local_14.f_65[0]), 0, 0) == 1) || _0x7f9b9791d4cb71f6(Global_35, &(Local_14.f_65[1]), 0, 0) == 1)
			{
				iVar4 = 0;
				while (iVar4 < 2)
				{
					if (func_166(&(Local_14.f_65[iVar4]), 0))
					{
						if (iVar4 == 0)
						{
							vVar1 = { func_169(16, 6) };
						}
						else if (iVar4 == 1)
						{
							vVar1 = { func_169(16, 7) };
						}
						_set_ped_crouch_movement(&(Local_14.f_65[iVar4]), false, 0, false);
						fVar9 = func_904(&(Local_14.f_65[iVar4]), Global_35, 1, 1);
						fVar10 = func_904(&(Local_14.f_65[iVar4]), iVar416, 1, 1);
						if (fVar9 < fVar10)
						{
							iVar8 = Global_35;
						}
						else
						{
							iVar8 = iVar416;
						}
						open_sequence_task(&iVar0);
						if (iVar4 == 0)
						{
							task_go_to_coord_while_aiming_at_entity_using_combat_style(0, vVar1, iVar8, 2f, 1, 5f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
						}
						else
						{
							if (!bVar594)
							{
								task_stand_still(0, get_random_int_in_range(0, 800));
							}
							task_go_to_coord_while_aiming_at_entity_using_combat_style(0, vVar1, iVar8, 2f, 1, 5f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
						}
						task_put_ped_directly_into_cover(0, vVar1, 1500, 0, 0, 0, 0, 0, 0, 0, 0);
						task_combat_hated_targets_around_ped(0, 100f, 0, 0);
						func_1570(&(Local_14.f_65[iVar4]), &iVar0, 0, 0, 1, 1);
						iLocal_171 = 3;
					}
					iVar4++;
				}
			}
			break;
		case 3:
			if (!func_166(&(Local_14.f_65[0]), 0) && func_166(&(Local_14.f_65[1]), 0))
			{
				func_50(&(Local_14.f_65[1]));
				_0x1854217c640b39ec(&(Local_14.f_65[1]), iVar416, 0f, 0f, 0f, 10f, 1, 0);
				set_ped_combat_attributes(&(Local_14.f_65[1]), 50, true);
				task_combat_hated_targets(&(Local_14.f_65[1]), -1f);
				iLocal_171 = 5;
			}
			break;
	}
}

void func_1376(char[4] cParam0)
{
	if (!func_166(iVar416, 0))
	{
		return;
	}
	if ((((((!func_187(2) && !func_1367(Local_14.f_51, 3)) && !func_1367(Local_14.f_58, 3)) && !func_1367(Local_14.f_63, 3)) && iLocal_212 != 29) && iLocal_212 != 30) && iLocal_212 != 47)
	{
		func_163(iVar416);
		func_1260(&iLocal_212, 29);
		func_470(2);
	}
	if ((((((iLocal_212 == 47 || iLocal_212 == 60) || iLocal_212 == 63) || iLocal_212 == 81) || iLocal_212 == 82) || iLocal_212 == 39) || iLocal_212 == 70)
	{
		if (is_ped_ragdoll(iVar416))
		{
			func_1825(cParam0, "ALLY_ATTACK_MICAH", "", 1, 0);
		}
	}
	switch (iLocal_212)
	{
		case 0:
			if (func_1357(Local_14.f_51, 3) <= 0 && func_1357(Local_14.f_58, 3) <= 0)
			{
				clear_ped_tasks(iVar416, 1, 0);
				set_blocking_of_non_temporary_events(iVar416, true);
				register_hated_targets_around_ped(iVar416, 200f);
				task_turn_ped_to_face_entity(iVar416, Global_35, -1, -1082130432, -1082130432, -1082130432);
				set_ped_sphere_defensive_area(iVar416, func_169(16, 0), 2f, 1, false, 0);
				set_ped_id_range(iVar416, 60f);
				func_135(cParam0, 2);
				func_232(&uLocal_237);
				func_1260(&iLocal_212, 1);
			}
			else
			{
				fLocal_548 = get_random_float_in_range(4f, 8f);
				func_135(cParam0, 1);
				func_1260(&iLocal_212, 56);
			}
			break;
		case 1:
			if (func_1355("UTP1_IG10_A"))
			{
				func_1260(&iLocal_212, 3);
			}
			break;
		case 3:
			task_enter_anim_scene(iVar416, &(iLocal_522[9]), func_1251(iVar416), "pbl_run_to_cover", 5.05f, 0, 2, 20000, -1082130432);
			func_1260(&iLocal_212, 80);
			break;
		case 80:
			if (_0x337f1cc8ee895601(&(iLocal_522[9]), func_1251(iVar416)) && func_1949())
			{
				func_1260(&iLocal_212, 2);
			}
			break;
		case 2:
			bVar6 = _is_anim_scene_started(&(iLocal_522[9]), false);
			if (bVar6)
			{
				_0x140b3cb1d424a945(iVar416, -1);
				if (bVar606 == 0)
				{
					if (_get_anim_scene_progress(&(iLocal_522[9])) > 0.5f)
					{
						iLocal_609 = 1;
					}
				}
			}
			if (func_1385(&(iLocal_522[9])) || _0x005e6f28dd7ed58d(&(iLocal_522[9]), func_1251(iVar416)))
			{
				vVar1 = { func_169(16, 0) };
				fVar4 = func_1550(16, 0);
				open_sequence_task(&iVar0);
				task_put_ped_directly_into_cover(0, vVar1, 500, 1, 0, 0, 0, 0, 0, 0, 0);
				task_combat_hated_targets_around_ped(0, 100f, 0, 0);
				func_1570(iVar416, &iVar0, 0, 0, 1, 1);
				_0x2208438012482a1a(iVar416, false, false);
				_0x3c529a827998f9b3(iVar416, 200, 4000);
				_0x1f44b7e283c09ede(iVar416, 0.5f, 4000);
				func_1260(&iLocal_212, 15);
			}
			else if (func_1337(Global_35, func_169(16, 0), 2f, 1, 1) && bVar606 == 0)
			{
				if (bVar6)
				{
					_delete_anim_scene(&(iLocal_522[9]));
				}
				set_blocking_of_non_temporary_events(iVar416, true);
				vVar1 = { func_169(16, 1) };
				remove_ped_defensive_area(iVar416, false);
				set_ped_sphere_defensive_area(iVar416, vVar1, 3f, 0, false, 0);
				open_sequence_task(&iLocal_628);
				task_go_to_coord_and_aim_at_hated_entities_near_coord(0, vVar1, func_169(16, 6), 2f, true, 5f, 4f, true, 0, 0, -687903391);
				task_combat_hated_targets_around_ped(0, 100f, 0, 0);
				close_sequence_task(iVar625);
				task_perform_sequence(iVar416, iVar625);
				clear_sequence_task(&iLocal_628);
				func_1260(&iLocal_212, 15);
			}
			break;
		case 15:
			if (bVar606)
			{
				func_27(&uLocal_361, 0);
				if (func_1275(&uLocal_361, 2f))
				{
					iLocal_609 = 0;
				}
			}
			if (!func_166(&(Local_14.f_65[0]), 0) && !bVar606)
			{
				clear_ped_tasks(iVar416, 1, 0);
				vVar1 = { func_169(16, 2) };
				fVar4 = func_1550(16, 2);
				iVar5 = add_cover_point(vVar1, fVar4, 2, 0, 1, false);
				remove_ped_defensive_area(iVar416, false);
				set_ped_sphere_defensive_area(iVar416, vVar1, 2f, 1, false, 0);
				open_sequence_task(&iVar0);
				if (func_166(&(Local_14.f_65[1]), 0))
				{
					task_go_to_coord_while_aiming_at_entity(0, vVar1, &(Local_14.f_65[1]), 2f, 1, 5f, 4f, 1, 0, 0, -687903391, 20000, 0);
					task_shoot_at_entity(0, &(Local_14.f_65[1]), 500, 1566631136, 0);
					task_seek_cover_to_cover_point(0, iVar5, func_169(17, 1), 1000, 1, 0, 0);
					task_combat_hated_targets_around_ped(0, 100f, 0, 0);
				}
				else
				{
					task_follow_nav_mesh_to_coord(0, vVar1, 3f, 20000, 4f, 0, 40000f);
				}
				func_1570(iVar416, &iVar0, 0, 0, 1, 1);
				func_653(&uLocal_237);
				fLocal_548 = get_random_float_in_range(1f, 3f);
				func_232(&uLocal_243);
				func_135(cParam0, 6);
				func_1260(&iLocal_212, 20);
			}
			break;
		case 20:
			func_1939(func_169(16, 2), func_169(16, 3));
			if (func_1357(Local_14.f_63, 3) <= 1)
			{
				func_27(&uLocal_237, 0);
				if (func_1275(&uLocal_237, fVar545))
				{
					remove_ped_defensive_area(iVar416, false);
					set_ped_sphere_defensive_area(iVar416, func_169(16, 5), 3f, 0, false, 0);
					func_1943(iVar416);
					func_1260(&iLocal_212, 29);
				}
			}
			break;
		case 29:
			if (!func_1367(Local_14.f_63, 3))
			{
				func_163(iVar416);
				clear_ped_tasks(iVar416, 1, 0);
				task_follow_waypoint_recording(iVar416, func_168(0), 0, 3080, -1, 0, 0, -1);
				func_232(&uLocal_237);
				func_470(2);
				func_135(cParam0, 7);
				func_1260(&iLocal_212, 30);
			}
			break;
		case 30:
			_get_anim_scene_entity_matrix(&(iLocal_522[5]), func_1251(iVar416), &vLocal_648, true, "pl_IG4_MicahArrivesShootsEntersHouse", 2);
			if (func_1337(iVar416, vLocal_648, 4f, 1, 1))
			{
				task_enter_anim_scene(iVar416, &(iLocal_522[5]), func_1251(iVar416), "pl_IG4_MicahArrivesShootsEntersHouse", 5.05f, 0, 3, 20000, -1082130432);
				_0x2208438012482a1a(iVar416, false, false);
				func_470(1024);
				func_1260(&iLocal_212, 47);
			}
			break;
		case 47:
			if (func_1337(Global_35, vLocal_648, 30f, 1, 1))
			{
				bVar7 = true;
			}
			if (_0x337f1cc8ee895601(&(iLocal_522[5]), func_1251(iVar416)) && func_1950(bVar7))
			{
				func_232(&uLocal_237);
				if (func_1355("UTP1_MCS3_LI"))
				{
					func_1356("UTP1_MCS3_LI", 0, 0);
				}
				iLocal_568 = 1;
				func_167(cParam0, iVar416, 0, 1);
				func_653(&uLocal_282);
				if (bVar7)
				{
					func_1260(&iLocal_212, 63);
				}
				else
				{
					func_1260(&iLocal_212, 60);
				}
			}
			break;
		case 60:
			if ((!_is_anim_scene_started(&(iLocal_522[5]), false) || _0x8d81e7824b7753f7(&(iLocal_522[5]), "S_Idle", 1)) && func_1337(Global_35, func_169(16, 4), 30f, 1, 1))
			{
				func_167(cParam0, iVar416, 0, 1);
				func_653(&uLocal_282);
				set_anim_scene_bool(&(iLocal_522[5]), "bLoopIdles", true, false);
				func_1260(&iLocal_212, 63);
			}
			break;
		case 63:
			if (_get_anim_scene_progress(&(iLocal_522[5])) > 0.75f)
			{
				func_1260(&iLocal_212, 81);
			}
			break;
		case 81:
			if (_get_anim_scene_progress(&(iLocal_522[5])) > 0.985f)
			{
				func_1336(&(Local_14.f_31[0]), 1, 0);
				set_ped_relationship_group_hash(&(Local_14.f_31[0]), 623901053);
				_set_anim_scene_playback_list_bool(&(iLocal_522[5]), "pl_MicahInsideHouse", true);
				func_232(&uLocal_237);
				func_1332(iVar416, -251280159);
				func_1260(&iLocal_212, 82);
			}
			break;
		case 82:
			if (_0x1f0e401031e20146(&(iLocal_522[5]), "pl_MicahInsideHouse") && _get_anim_scene_time(&(iLocal_522[5])) > 3f)
			{
				func_135(cParam0, 8);
				func_1260(&iLocal_212, 39);
			}
			break;
		case 39:
			if ((_get_anim_scene_progress(&(iLocal_522[5])) > 0.95f && !func_1337(Global_35, func_169(16, 4), 20f, 1, 1)) && iVar580 == 0)
			{
				set_anim_scene_paused(&(iLocal_522[5]), true);
			}
			if (_get_anim_scene_progress(&(iLocal_522[5])) > 0.95f && (func_1337(Global_35, func_169(16, 4), 20f, 1, 1) || iVar580 == 1))
			{
				func_1331(4);
				_set_anim_scene_playback_list_bool(&(iLocal_522[5]), "pl_MicahExitsHouse", true);
				set_anim_scene_paused(&(iLocal_522[5]), false);
				func_232(&uLocal_237);
				func_135(cParam0, 9);
				func_167(cParam0, iVar416, 0, 1);
				func_653(&uLocal_282);
				func_1260(&iLocal_212, 70);
			}
			break;
		case 70:
			func_167(cParam0, iVar416, 0, 1);
			func_653(&uLocal_282);
			if (_is_anim_scene_started(&(iLocal_522[5]), false) && _0x1f0e401031e20146(&(iLocal_522[5]), "pl_MicahExitsHouse"))
			{
				if (_get_anim_scene_progress(&(iLocal_522[5])) > 0.663f)
				{
					_delete_anim_scene(&(iLocal_522[5]));
					iVar8 = 1;
				}
			}
			if ((!_is_anim_scene_started(&(iLocal_522[5]), false) || _0x005e6f28dd7ed58d(&(iLocal_522[5]), func_1251(iVar416))) || _0xb89fcff19dafff28(&(iLocal_522[5]), func_1251(iVar416)))
			{
				iVar8 = 1;
			}
			if (iVar8 == 1)
			{
				if (iVar580 == 1)
				{
					func_1951(0);
					func_1260(&iLocal_212, 87);
				}
				else if (func_904(Global_35, iVar416, 1, 1) < 15f && is_entity_on_screen(iVar416))
				{
					func_1951(0);
					func_135(cParam0, 10);
					func_1260(&iLocal_212, 71);
				}
				else
				{
					func_1260(&iLocal_212, 72);
					open_sequence_task(&iVar0);
					func_1952(0, func_235(11, 6), 2f, -1, 1048576000, 0);
					task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
					func_1570(iVar416, &iVar0, 0, 0, 1, 1);
				}
				iLocal_568 = 0;
				_0xc67a4910425f11f1(player_id(), 0);
				func_167(cParam0, iVar416, 0, 1);
				func_653(&uLocal_282);
				func_232(&uLocal_237);
			}
			break;
		case 72:
			if (func_904(Global_35, iVar416, 1, 1) < 15f && is_entity_on_screen(iVar416))
			{
				func_1951(1);
				fLocal_552 = 4f;
				func_135(cParam0, 10);
				func_1260(&iLocal_212, 71);
				func_232(&uLocal_237);
			}
			break;
		case 71:
			if (func_1275(&uLocal_237, fVar549))
			{
				func_232(&uLocal_237);
				func_1260(&iLocal_212, 87);
			}
			break;
		case 56:
			if (func_1357(Local_14.f_51, 3) <= 2 && func_1357(Local_14.f_58, 3) <= 1)
			{
				func_27(&uLocal_237, 0);
				if (func_1275(&uLocal_237, fVar545))
				{
					func_1953(Local_14.f_51, get_entity_coords(iVar416, true, false), 7.5f, 1);
					func_1953(Local_14.f_58, get_entity_coords(iVar416, true, false), 7.5f, 1);
					if (func_166(&(Local_14.f_53[0]), 3) && !bVar608)
					{
						func_1336(&(Local_14.f_53[0]), 1, 0);
					}
					func_1943(iVar416);
					func_1260(&iLocal_212, 57);
				}
			}
			if (func_1357(Local_14.f_51, 3) <= 0 && func_1357(Local_14.f_58, 3) <= 0)
			{
				func_163(iVar416);
				func_1260(&iLocal_212, 0);
			}
			break;
		case 57:
			if (func_1357(Local_14.f_51, 3) <= 0 && func_1357(Local_14.f_58, 3) <= 0)
			{
				func_163(iVar416);
				func_1260(&iLocal_212, 0);
			}
			break;
	}
}

void func_1377(int iParam0)
{
	if (does_entity_exist(&(Local_14.f_48[0])))
	{
		if (iParam0 == 0 || func_1954(&(Local_14.f_48[0])))
		{
			func_1940(Local_14.f_95[0], 0);
			func_1955(Local_14.f_48[0], 0);
		}
	}
	if (does_entity_exist(&(Local_14.f_48[1])))
	{
		if (iParam0 == 0 || func_1954(&(Local_14.f_48[1])))
		{
			func_1940(Local_14.f_24[0], 0);
			func_1940(Local_14.f_16[4], 0);
			func_1955(Local_14.f_48[1], 0);
		}
	}
}

bool func_1378()
{
	if (bVar618)
	{
		return uVar622;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!does_entity_exist(&(Local_14.f_70[iVar0])))
		{
			func_1956(iVar0, 1);
			return false;
		}
		if (func_166(&(Local_14.f_70[iVar0]), 0) && (!decor_exist_on(&(Local_14.f_70[iVar0]), func_1927()) || decor_get_int(&(Local_14.f_70[iVar0]), func_1927()) != 1))
		{
			func_1874(&(Local_14.f_70[iVar0]), -183018591, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			set_blocking_of_non_temporary_events(&(Local_14.f_70[iVar0]), true);
			set_ped_relationship_group_hash(&(Local_14.f_70[iVar0]), 1269650476);
			func_982(&(Local_14.f_70[iVar0]), 1);
			_0x986f7a51ee3e1f92(&(Local_14.f_70[iVar0]), 0);
			set_entity_only_damaged_by_player(&(Local_14.f_70[iVar0]), true);
			if (iVar0 == 3)
			{
				_set_ped_crouch_movement(&(Local_14.f_70[iVar0]), true, 0, false);
				_0x2208438012482a1a(&(Local_14.f_70[iVar0]), false, false);
			}
			decor_set_int(&(Local_14.f_70[iVar0]), func_1927(), 1);
			iLocal_620 = 1;
			return false;
		}
		iVar0++;
	}
	iLocal_624 = 1;
	return true;
}

bool func_1379()
{
	if (bVar618)
	{
		return uVar623;
	}
	iVar0 = 1;
	while (iVar0 <= 2)
	{
		if (!does_entity_exist(&(Local_14.f_70[iVar0])))
		{
			func_1956(iVar0, 1);
			return false;
		}
		if ((func_166(&(Local_14.f_70[iVar0]), 0) && is_ped_human(&(Local_14.f_70[iVar0]))) && (!decor_exist_on(&(Local_14.f_70[iVar0]), func_1927()) || decor_get_int(&(Local_14.f_70[iVar0]), func_1927()) != 1))
		{
			func_1874(&(Local_14.f_70[iVar0]), -183018591, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			set_blocking_of_non_temporary_events(&(Local_14.f_70[iVar0]), true);
			set_ped_relationship_group_hash(&(Local_14.f_70[iVar0]), 1269650476);
			_0x986f7a51ee3e1f92(&(Local_14.f_70[iVar0]), 0);
			if (iVar0 == 1)
			{
				func_1922(&(Local_14.f_70[iVar0]));
			}
			else
			{
				func_982(&(Local_14.f_70[iVar0]), 1);
			}
			decor_set_int(&(Local_14.f_70[iVar0]), func_1927(), 1);
			iLocal_620 = 1;
			return false;
		}
		iVar0++;
	}
	iLocal_625 = 1;
	return true;
}

void func_1380()
{
	if (!func_399(iVar517, 1))
	{
		if (func_166(&(Local_14.f_70[0]), 0))
		{
			if (does_blip_exist(get_blip_from_entity(&(Local_14.f_70[0]))))
			{
				_blip_set_modifier(get_blip_from_entity(&(Local_14.f_70[0])), -1034486097);
				func_426(&uLocal_519, 1);
			}
		}
		if (func_166(&(Local_14.f_70[3]), 0))
		{
			if (does_blip_exist(get_blip_from_entity(&(Local_14.f_70[3]))))
			{
				_blip_set_modifier(get_blip_from_entity(&(Local_14.f_70[3])), -1034486097);
				func_426(&uLocal_519, 1);
			}
		}
	}
	switch (iLocal_172)
	{
		case 0:
			if (func_1378())
			{
				iLocal_172 = 1;
			}
			break;
		case 1:
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar4 == 0 || iVar4 == 3)
				{
					if (func_166(&(Local_14.f_70[iVar4]), 0))
					{
						if (!func_399(iVar517, 1))
						{
							func_1821(&(Local_14.f_70[iVar4]), -1595050198, 1, 1);
							_blip_set_modifier(get_blip_from_entity(&(Local_14.f_70[iVar4])), -1034486097);
							func_426(&uLocal_519, 1);
						}
						if (iVar4 == 0)
						{
							vVar1 = { func_169(17, 11) };
						}
						else
						{
							vVar1 = { -1764.67f, -399.867f, 154.8793f };
						}
						set_ped_relationship_group_hash(&(Local_14.f_70[iVar4]), 1269650476);
						if (bVar581)
						{
							set_ped_accuracy(&(Local_14.f_70[iVar4]), 50);
						}
						else
						{
							set_ped_accuracy(&(Local_14.f_70[iVar4]), 10);
						}
						set_ped_sphere_defensive_area(&(Local_14.f_70[iVar4]), vVar1, 5f, 0, false, 0);
						if (iVar4 == 0)
						{
							open_sequence_task(&iVar0);
							task_follow_nav_mesh_to_coord(0, vVar1, 3f, 20000, 5f, 0, 40000f);
							task_go_to_coord_while_aiming_at_entity(0, vVar1, iVar417, 3f, 1, 5f, 4f, 1, 0, 0, -687903391, 20000, 0);
							task_shoot_at_entity(0, iVar417, 2000, 0, 0);
							task_put_ped_directly_into_cover(0, vVar1, 100, 1, 0, 0, 0, 0, 0, 0, 0);
							task_combat_hated_targets_around_ped(0, 100f, 0, 0);
							func_1570(&(Local_14.f_70[0]), &iVar0, 0, 0, 1, 1);
						}
						else
						{
							_set_ped_crouch_movement(&(Local_14.f_70[iVar4]), false, 0, false);
							task_combat_hated_targets(&(Local_14.f_70[iVar4]), -1f);
						}
						iLocal_172 = 2;
					}
				}
				iVar4++;
			}
			break;
		case 2:
			if (!func_1354(iVar417, iVar460, 1, 0))
			{
				set_entity_only_damaged_by_player(&(Local_14.f_70[0]), false);
				set_entity_only_damaged_by_player(&(Local_14.f_70[3]), false);
				iLocal_172 = 5;
			}
			break;
		case 5:
			break;
	}
}

void func_1381()
{
	if (!func_399(iVar517, 2))
	{
		if (func_166(&(Local_14.f_70[1]), 0))
		{
			if (does_blip_exist(get_blip_from_entity(&(Local_14.f_70[1]))))
			{
				_blip_set_modifier(get_blip_from_entity(&(Local_14.f_70[1])), -1034486097);
				func_426(&uLocal_519, 2);
			}
		}
	}
	if (!func_399(iVar517, 4))
	{
		if (func_166(&(Local_14.f_70[2]), 0))
		{
			if (does_blip_exist(get_blip_from_entity(&(Local_14.f_70[2]))))
			{
				_blip_set_modifier(get_blip_from_entity(&(Local_14.f_70[2])), -1034486097);
				func_426(&uLocal_519, 4);
			}
		}
	}
	switch (iLocal_173)
	{
		case 0:
			if (func_187(67108864))
			{
				if (((func_1357(Local_14.f_34, 3) <= 1 || func_1354(Global_35, iVar481, 1, 0)) || func_1354(iVar417, iVar481, 1, 0)) || bVar581)
				{
					if (!func_1379())
					{
						return;
					}
					iLocal_173 = 1;
				}
			}
			if (func_1337(Global_35, func_1916(10, 1), 25f, 1, 1))
			{
				iLocal_173 = 4;
			}
			break;
		case 1:
			if (func_166(&(Local_14.f_70[1]), 0))
			{
				_0xfc3db99c8144cd81(&(Local_14.f_70[1]), iVar482, 0, false, 0);
				if (!func_399(iVar517, 2))
				{
					func_1821(&(Local_14.f_70[1]), -1595050198, 1, 1);
					_blip_set_modifier(get_blip_from_entity(&(Local_14.f_70[1])), -1034486097);
					func_426(&uLocal_519, 2);
				}
				open_sequence_task(&iLocal_628);
				task_follow_nav_mesh_to_coord(0, func_169(17, 16), 3f, 20000, 5f, 8193, 40000f);
				task_combat_hated_targets_around_ped(0, 100f, 0, 0);
				func_1570(&(Local_14.f_70[1]), &iLocal_628, 0, 0, 1, 1);
			}
			if (func_166(&(Local_14.f_70[2]), 0))
			{
				task_stand_still(&(Local_14.f_70[2]), -1);
			}
			func_232(&uLocal_228);
			iLocal_173 = 2;
			break;
		case 2:
			if (((((!func_1367(Local_14.f_34, 3) && !func_166(&(Local_14.f_70[1]), 3)) || func_1337(iVar417, func_169(17, 18), 9f, 1, 1)) || func_1337(Global_35, func_1916(10, 2), 5f, 1, 1)) || func_1275(&uLocal_228, 5f)) || func_904(Global_35, &(Local_14.f_70[2]), 1, 1) < 10f)
			{
				if (func_166(&(Local_14.f_70[2]), 0))
				{
					_0xfc3db99c8144cd81(&(Local_14.f_70[2]), iVar482, 0, false, 0);
					if (!func_399(iVar517, 4))
					{
						func_1821(&(Local_14.f_70[2]), -1595050198, 1, 1);
						_blip_set_modifier(get_blip_from_entity(&(Local_14.f_70[2])), -1034486097);
						func_426(&uLocal_519, 4);
					}
					vVar0 = { func_169(17, 17) };
					open_sequence_task(&iLocal_628);
					task_follow_nav_mesh_to_coord(0, vVar0, 3f, 20000, 8f, 8193, 40000f);
					task_go_to_coord_and_aim_at_hated_entities_near_coord(0, vVar0, vVar0, 3f, true, 4f, 4f, true, 0, 0, -687903391);
					task_combat_hated_targets_around_ped(0, 100f, 0, 0);
					func_1570(&(Local_14.f_70[2]), &iLocal_628, 0, 0, 1, 1);
				}
				iLocal_173 = 5;
			}
			break;
		case 4:
			if (!func_1379())
			{
				return;
			}
			if (func_166(&(Local_14.f_70[1]), 0))
			{
				_0xfc3db99c8144cd81(&(Local_14.f_70[1]), iVar482, 0, false, 0);
				_0x1854217c640b39ec(&(Local_14.f_70[1]), Global_35, 0f, 0f, 0f, 10f, 1, 0);
				task_combat_hated_targets_around_ped(&(Local_14.f_70[1]), 100f, 0, 0);
			}
			if (func_166(&(Local_14.f_70[2]), 0))
			{
				_0xfc3db99c8144cd81(&(Local_14.f_70[2]), iVar482, 0, false, 0);
				_0x1854217c640b39ec(&(Local_14.f_70[2]), Global_35, 0f, 0f, 0f, 10f, 1, 0);
				task_combat_hated_targets_around_ped(&(Local_14.f_70[2]), 100f, 0, 0);
			}
			iLocal_173 = 5;
			break;
		case 5:
			break;
	}
}

void func_1382()
{
	switch (iLocal_174)
	{
		case 0:
			func_27(&uLocal_228, 0);
			if (((func_1337(Global_35, func_169(17, 1), 8f, 1, 1) || func_1337(iVar417, func_169(17, 1), 8f, 1, 1)) || func_1275(&uLocal_228, 30f)) || bVar581)
			{
				if (!func_1957())
				{
					return;
				}
				func_470(67108864);
				iLocal_174 = 1;
			}
			break;
		case 1:
			iVar4 = 0;
			while (iVar4 < 3)
			{
				if (func_166(&(Local_14.f_36[iVar4]), 0))
				{
					if (iVar4 != 0)
					{
						if (iVar4 == 1)
						{
							vVar1 = { func_169(17, 8) };
						}
						else if (iVar4 == 2)
						{
							vVar1 = { func_169(17, 9) };
						}
						if (bVar581)
						{
							func_1921(&(Local_14.f_36[iVar4]));
						}
						_blip_add_for_entity(831283580, &(Local_14.f_36[iVar4]));
						_blip_set_modifier(get_blip_from_entity(&(Local_14.f_36[iVar4])), -1034486097);
						if (iVar4 == 2)
						{
							_0xfc3db99c8144cd81(&(Local_14.f_36[iVar4]), iVar492, 0, false, 0);
							_0x1854217c640b39ec(&(Local_14.f_36[iVar4]), Global_35, 0f, 0f, 0f, 10f, 1, 0);
							open_sequence_task(&iVar0);
							task_go_to_entity_while_aiming_at_entity(0, Global_35, Global_35, 2f, 1, 15f, 20f, 1, 0, -687903391, 0);
							task_combat_hated_targets_around_ped(0, 100f, 0, 0);
							func_1570(&(Local_14.f_36[iVar4]), &iVar0, 0, 0, 1, 1);
						}
						else
						{
							set_ped_sphere_defensive_area(&(Local_14.f_36[iVar4]), vVar1, 2f, 0, false, 0);
							open_sequence_task(&iVar0);
							task_follow_nav_mesh_to_coord(0, vVar1, 3f, 20000, 5f, 0, 40000f);
							task_combat_hated_targets_around_ped(0, 100f, 0, 0);
							func_1570(&(Local_14.f_36[iVar4]), &iVar0, 0, 0, 1, 1);
						}
					}
				}
				iVar4++;
			}
			iLocal_174 = 2;
			break;
		case 2:
			if (func_1357(Local_14.f_34, 3) <= 1)
			{
				iVar4 = 0;
				while (iVar4 < 3)
				{
					if (func_166(&(Local_14.f_36[iVar4]), 0) && iVar4 != 1)
					{
						remove_ped_defensive_area(&(Local_14.f_36[iVar4]), false);
						set_ped_combat_movement(&(Local_14.f_36[iVar4]), 2);
						_0x1854217c640b39ec(&(Local_14.f_36[iVar4]), iVar417, 0f, 0f, 0f, 10f, 0, 0);
						_0xfc3db99c8144cd81(&(Local_14.f_36[iVar4]), iVar481, 0, true, 0);
						iLocal_174 = 5;
					}
					iVar4++;
				}
			}
			break;
	}
}

void func_1383()
{
	vVar0 = { -1768.225f, -382.712f, 156.7462f };
	fVar3 = 145.3953f;
	vVar4 = { func_169(17, 7) };
	vVar7 = { -1772.18f, -409.7322f, 154.7623f };
	switch (iLocal_175)
	{
		case 0:
			if (func_166(&(Local_14.f_36[0]), 0))
			{
				if (func_1958(-1400732786))
				{
					iLocal_175 = 2;
				}
			}
			break;
		case 2:
			if (func_166(&(Local_14.f_36[0]), 0))
			{
				if (((func_1337(iVar417, vVar7, 3f, 1, 1) || func_1337(Global_35, vVar7, 3f, 1, 1)) || func_904(iVar417, &(Local_14.f_36[0]), 1, 1) < 10f) || func_904(Global_35, &(Local_14.f_36[0]), 1, 1) < 10f)
				{
					_set_entity_coords_and_heading(&(Local_14.f_36[0]), vVar0, fVar3, true, true, true);
					_blip_add_for_entity(831283580, &(Local_14.f_36[0]));
					_blip_set_modifier(get_blip_from_entity(&(Local_14.f_36[0])), -1034486097);
					if (bVar581)
					{
						func_1921(&(Local_14.f_36[0]));
					}
					set_ped_relationship_group_hash(&(Local_14.f_36[0]), 1269650476);
					task_go_to_coord_and_aim_at_hated_entities_near_coord(&(Local_14.f_36[0]), vVar4, vVar7, 2f, true, 0.5f, 4f, true, 0, 0, -687903391);
					iLocal_175 = 1;
				}
			}
			break;
		case 1:
			if (func_166(&(Local_14.f_36[0]), 0) && func_1565(&(Local_14.f_36[0]), 688521916))
			{
				iLocal_175 = 3;
			}
			break;
		case 3:
			if (func_166(&(Local_14.f_36[0]), 0))
			{
				if (func_1348(&(Local_14.f_36[0]), vVar4, 1) < 1.5f || !func_1565(&(Local_14.f_36[0]), 688521916))
				{
					set_ped_sphere_defensive_area(&(Local_14.f_36[0]), vVar4, 2f, 1, false, 0);
					task_combat_hated_targets_around_ped(&(Local_14.f_36[0]), 50f, 100663296, 0);
					iLocal_175 = 5;
				}
			}
			break;
		case 5:
			break;
	}
}

bool func_1384(char[4] cParam0)
{
	if (!func_166(iVar417, 0))
	{
		func_27(&uLocal_228, 0);
		if (!func_1275(&uLocal_228, 2.5f))
		{
			vVar0 = { func_169(7, 2) };
			fVar3 = func_1550(7, 2);
			iLocal_420 = func_1812(6, 1, 1, 0, 0, 1, 1, 1, 1, vVar0.x, vVar0.y, vVar0.z, fVar3, 0, 0, 0, 0);
		}
		else
		{
			iLocal_420 = func_1801(-941733863, func_169(7, 2), func_1550(7, 2), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		return false;
	}
	func_276(cParam0, 1);
	if (!func_166(iVar418, 0))
	{
		vVar0 = { func_169(7, 0) };
		fVar3 = func_1550(7, 0);
		if (func_437(cParam0, 1, vVar0.x, vVar0.y, vVar0.z, fVar3, 1, 1, 1))
		{
			iLocal_421 = func_271(cParam0);
			if (func_33(cParam0) < iLocal_210)
			{
				func_1556(7);
				func_1556(0);
				func_1556(1);
			}
		}
		return false;
	}
	func_1959(cParam0, iVar417, 6);
	func_151(cParam0, iVar418, "Horse_01", 0, 0, 0, 0);
	func_151(cParam0, iVar417, "Horse_01^1", 0, 0, 0, 0);
	_0xfd6943b6df77e449(iVar418, false);
	_0xfd6943b6df77e449(iVar417, false);
	set_ped_can_be_targetted(iVar417, false);
	set_entity_can_be_damaged_by_relationship_group(iVar418, false, 1269650476);
	set_entity_can_be_damaged_by_relationship_group(iVar418, false, 1030835986);
	set_entity_can_be_damaged_by_relationship_group(iVar417, false, 1269650476);
	set_entity_can_be_damaged_by_relationship_group(iVar417, false, 1030835986);
	set_entity_only_damaged_by_player(iVar418, true);
	set_entity_only_damaged_by_player(iVar417, true);
	_0xae6004120c18df97(iVar417, 0, 0);
	_0xba8818212633500a(iVar417, 0, 1);
	set_blocking_of_non_temporary_events(iVar418, true);
	task_stand_still(iVar418, -1);
	set_blocking_of_non_temporary_events(iVar417, true);
	task_stand_still(iVar417, -1);
	func_653(&uLocal_228);
	return true;
}

bool func_1385(int iParam0)
{
	return (!_does_anim_scene_exist(iParam0) || _is_anim_scene_finished(iParam0, false));
}

void func_1386(int iParam0)
{
	if (func_187(iParam0))
	{
		func_565(&uLocal_518, iParam0);
	}
}

bool func_1387(int iParam0, bool bParam1)
{
	if (!func_266(Local_14.f_34))
	{
		Local_14.f_34 = { func_429() };
	}
	if (func_1551(&(Local_14.f_34), 1))
	{
		return true;
	}
	if (!does_entity_exist(&(Local_14.f_36[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_36[0] = func_1801(317578190, -1767.29f, -381.8542f, 157.732f, 143.4892f, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0);
		set_ped_name_debug(&(Local_14.f_36[0]), "Vill6");
		func_818(Local_14.f_34, &(Local_14.f_36[0]));
		func_819(&(Local_14.f_36[0]), Local_14);
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
	if (!does_entity_exist(&(Local_14.f_36[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_36[1] = func_1801(-1638806549, -1778.085f, -375.1223f, 163.126f, 143.4892f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_36[1]), "Vill7");
		func_818(Local_14.f_34, &(Local_14.f_36[1]));
		func_819(&(Local_14.f_36[1]), Local_14);
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
	if (!does_entity_exist(&(Local_14.f_36[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_36[2] = func_1801(317578190, -1776.423f, -377.5621f, 159.9099f, 143.4892f, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0);
		set_ped_name_debug(&(Local_14.f_36[2]), "Vill8");
		func_818(Local_14.f_34, &(Local_14.f_36[2]));
		func_819(&(Local_14.f_36[2]), Local_14);
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
	func_1552(&(Local_14.f_34), 1);
	return true;
}

bool func_1388(int iParam0, int iParam1, bool bParam2)
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

bool func_1389(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_1390(int iParam0)
{
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	switch (iParam0)
	{
		case 0:
			cVar0 = func_168(12);
			iVar1 = -1;
			iVar2 = 1;
			break;
		case 2:
			cVar0 = func_168(13);
			iVar1 = -2;
			iVar2 = 1;
			iVar3 = 1;
			break;
	}
	cLocal_835[iParam0] = cVar0;
	cLocal_835[iParam0]->f_1 = iVar1;
	cLocal_835[iParam0]->f_3 = iVar2;
	cLocal_835[iParam0]->f_4 = iVar3;
}

void func_1391(char[4] cParam0)
{
	if (!func_166(iVar416, 0))
	{
		return;
	}
	switch (iLocal_212)
	{
		case 0:
			if (does_entity_exist(&(Local_14.f_70[0])))
			{
				func_1260(&iLocal_212, 56);
			}
			break;
		case 56:
			if (!func_166(&(Local_14.f_31[0]), 0))
			{
				if (func_166(&(Local_14.f_31[1]), 0))
				{
					task_cower(&(Local_14.f_31[1]), -1, 0, 0);
				}
				set_blocking_of_non_temporary_events(iVar416, true);
				vVar1 = { -1767.611f, -411.4888f, 154.0112f };
				fVar4 = func_1550(17, 1);
				set_ped_sphere_defensive_area(iVar416, vVar1, 5f, 0, false, 0);
				set_ped_id_range(iVar416, 60f);
				open_sequence_task(&iVar0);
				task_put_ped_directly_into_cover(0, vVar1, 1000, 1, 0, 0, 0, 0, 0, 0, 0);
				task_combat_ped(0, &(Local_14.f_70[0]), 0, 0);
				func_1570(iVar416, &iVar0, 0, 0, 1, 1);
				func_1260(&iLocal_212, 2);
			}
			break;
		case 2:
			if (!func_166(&(Local_14.f_70[0]), 0))
			{
				vVar1 = { func_169(17, 19) };
				fVar4 = func_1550(17, 19);
				iLocal_438[7] = add_cover_point(vVar1, fVar4, 2, 0, 1, false);
				func_1923(iVar416, vVar1, 5f, 0, 0);
				open_sequence_task(&iVar0);
				task_put_ped_directly_into_cover(0, vVar1, 1000, 1, 0, 0, 0, iVar5, 0, 0, 0);
				task_combat_hated_targets_around_ped(0, 100f, 0, 0);
				func_1570(iVar416, &iVar0, 0, 0, 1, 1);
				func_232(&uLocal_270);
				func_232(&uLocal_243);
				func_1260(&iLocal_212, 3);
			}
			break;
		case 3:
			if (!func_166(&(Local_14.f_36[0]), 0))
			{
				vVar1 = { func_169(17, 19) };
				open_sequence_task(&iVar0);
				if (!func_1337(iVar416, vVar1, 2f, 1, 1))
				{
					task_go_to_coord_and_aim_at_hated_entities_near_coord(0, vVar1, func_169(17, 7), 2f, false, 5f, 4f, true, 0, 0, -687903391);
				}
				task_combat_hated_targets_around_ped(0, 100f, 0, 0);
				func_1570(iVar416, &iVar0, 0, 0, 1, 1);
				func_232(&uLocal_270);
				func_232(&uLocal_243);
				func_1260(&iLocal_212, 15);
			}
			break;
		case 15:
			func_1939(func_169(17, 1), func_169(17, 2));
			if ((!func_166(&(Local_14.f_36[0]), 0) && !func_166(&(Local_14.f_36[2]), 0)) || func_1357(Local_14.f_34, 3) <= 1)
			{
				clear_ped_tasks(iVar416, 1, 0);
				vVar1 = { func_169(17, 3) };
				fVar4 = func_1550(17, 3);
				iVar5 = add_cover_point(vVar1, fVar4, 2, 0, 1, false);
				set_ped_sphere_defensive_area(iVar416, vVar1, 5f, 1, false, 0);
				open_sequence_task(&iVar0);
				task_put_ped_directly_into_cover(0, vVar1, 1000, 1, 0, 0, 0, iVar5, 0, 0, 0);
				task_seek_cover_to_cover_point(0, iVar5, func_169(17, 9), 1000, 1, 1, 0);
				task_combat_hated_targets_around_ped(0, 100f, 0, 0);
				func_1570(iVar416, &iVar0, 0, 0, 1, 1);
				func_135(cParam0, 2);
				func_653(&uLocal_237);
				fLocal_548 = get_random_float_in_range(1f, 3f);
				func_232(&uLocal_243);
				func_1260(&iLocal_212, 20);
			}
			break;
		case 20:
			func_1939(func_169(17, 3), func_169(17, 4));
			if (func_1357(Local_14.f_34, 3) <= 1)
			{
				func_27(&uLocal_237, 0);
				if (func_1275(&uLocal_237, fVar545))
				{
					remove_ped_defensive_area(iVar416, false);
					_0xfc3db99c8144cd81(iVar416, iVar480, 0, false, 0);
					func_1943(iVar416);
					func_1260(&iLocal_212, 29);
				}
			}
			break;
		case 29:
			if (!func_1367(Local_14.f_34, 3))
			{
				remove_ped_defensive_area(iVar416, false);
				_0xfc3db99c8144cd81(iVar416, iVar480, 1, false, 0);
				vVar1 = { func_169(17, 6) };
				open_sequence_task(&iVar0);
				task_go_to_coord_and_aim_at_hated_entities_near_coord(0, vVar1, vVar1, 2f, true, 10f, 4f, true, 8193, 0, -687903391);
				task_combat_hated_targets_around_ped(0, 100f, 0, 0);
				func_1570(iVar416, &iVar0, 0, 0, 1, 1);
				func_135(cParam0, 8);
				func_1260(&iLocal_212, 30);
			}
			break;
		case 30:
			if (func_187(67108864))
			{
				if (!func_1367(Local_14.f_34, 3) && !func_166(&(Local_14.f_70[1]), 3))
				{
					vVar1 = { func_169(17, 5) };
					remove_ped_defensive_area(iVar416, false);
					set_ped_sphere_defensive_area(iVar416, func_169(17, 6), 5f, 1, false, 0);
					open_sequence_task(&iVar0);
					task_go_to_coord_and_aim_at_hated_entities_near_coord(0, vVar1, vVar1, 2f, true, 3f, 4f, true, 0, 0, -687903391);
					task_combat_hated_targets_around_ped(0, 100f, 0, 0);
					func_1570(iVar416, &iVar0, 0, 0, 1, 1);
					func_135(cParam0, 3);
					func_1260(&iLocal_212, 1);
				}
			}
			break;
		case 1:
			if (!func_1367(Local_14.f_34, 3) && !func_1367(Local_14.f_68, 3))
			{
				vVar1 = { func_169(17, 5) };
				func_163(iVar416);
				clear_ped_tasks(iVar416, 1, 0);
				func_1960(iVar416, iVar417, 0, 2f, 20000);
				if (!func_900(iVar416, iVar417, 5f, 1))
				{
					func_1952(iVar417, func_235(7, 3), 1.25f, 20000, 1048576000, 0);
				}
				func_1260(&iLocal_212, 34);
			}
			break;
		case 34:
			func_1960(iVar416, iVar417, 0, 2f, 20000);
			if (is_ped_on_mount(iVar416))
			{
				open_sequence_task(&iVar0);
				task_follow_nav_mesh_to_coord(0, func_169(7, 3), 1.25f, 20000, 0.25f, 0, 40000f);
				task_achieve_heading(0, func_1550(7, 3), 0);
				task_stand_still(0, -1);
				close_sequence_task(iVar0);
				task_perform_sequence(iVar416, iVar0);
				clear_sequence_task(&iVar0);
				func_1260(&iLocal_212, 37);
			}
			break;
		case 37:
			if (func_1337(iVar416, func_169(7, 3), 2f, 1, 1))
			{
				func_1260(&iLocal_212, 35);
			}
			break;
		case 35:
			func_1260(&iLocal_212, 87);
			break;
		case 87:
			break;
	}
}

void func_1392(char[4] cParam0)
{
	if (!func_1961(4) && func_1337(iVar416, func_169(7, 12), 12f, 1, 1))
	{
		func_135(cParam0, 2);
		iLocal_1067 = 2;
		iLocal_1065 = 4;
		iLocal_1066 = 12;
		func_1962(4);
		func_1962(64);
		func_1963(128);
	}
	if (!func_1961(8) && func_1337(iVar416, func_169(10, 11), 60f, 1, 1))
	{
		func_135(cParam0, 10);
		iLocal_1067 = 3;
		iLocal_1066 = 15;
		func_1962(8);
		func_1962(64);
		func_1963(128);
	}
	if (!func_1961(16) && func_1337(iVar416, func_169(10, 12), 15f, 1, 1))
	{
		func_135(cParam0, 12);
		iLocal_1067 = 3;
		iLocal_1066 = 16;
		func_1962(16);
		func_1962(64);
		func_1963(128);
	}
	if (!func_1961(32) && func_1337(iVar416, func_169(10, 16), 15f, 1, 1))
	{
		iLocal_1067 = 3;
		iLocal_1066 = 20;
		func_1962(32);
		func_1962(64);
		func_1963(128);
	}
	if (func_1961(64))
	{
		if (!func_1961(128))
		{
			iVar0 = func_1964();
			iLocal_1065 = (iVar1064 - iVar0);
			if (iVar1062 > 2)
			{
				iLocal_1065 = 2;
			}
			iLocal_1065 = iVar1062 * 2;
			func_1962(128);
		}
		iLocal_575 = 0;
		iVar1 = 0;
		while (iVar1 < iVar1062)
		{
			if (!func_166(func_1965(iVar1063, iVar1), 0))
			{
				if (!func_1966(iVar1063, iVar1) || ((iVar1 % 2) != 0 && func_166(func_1965(iVar1063, (iVar1 - 1)), 0)))
				{
					func_1967(iVar1063, iVar1);
					iLocal_575 = 1;
					return;
				}
			}
			iVar1++;
		}
		func_1963(64);
	}
}

void func_1393(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, char[4] cParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((is_ped_human(uParam0[iVar0]) && !func_166(uParam0[iVar0], 0)) && uParam2[iVar0] > 2)
		{
			func_1336(uParam0[iVar0], 0, 0);
			func_1968((*uParam0)[iVar0 + 1], 1, 1, 0);
			set_ped_as_no_longer_needed((*uParam0)[iVar0]);
			set_ped_as_no_longer_needed((*uParam0)[iVar0 + 1]);
		}
		else if ((is_ped_human(uParam0[iVar0]) && func_166(uParam0[iVar0], 0)) && does_entity_exist(uParam0[iVar0 + 1]))
		{
			if ((is_waypoint_playback_going_on_for_ped(uParam0[iVar0], 0) && get_ped_waypoint_progress(uParam0[iVar0]) > (*cParam5)[iVar0]->f_3) && func_1396(iVar407))
			{
				fVar4 = 0f;
				(*cParam5)[iVar0]->f_2 = get_ped_waypoint_progress(uParam0[iVar0]);
				fVar4 = func_1969((*uParam0)[iVar0], (*cParam5)[iVar0], bParam6);
				waypoint_playback_override_speed(uParam0[iVar0], fVar4, 0, -1082130432, 0);
			}
			if (((!is_ped_on_mount(uParam0[iVar0]) && uParam2[iVar0] > 2) || func_1970(uParam0[iVar0], 0)) || func_1970(uParam0[iVar0 + 1], 0))
			{
				func_1336(uParam0[iVar0], 0, 0);
			}
			else if ((!func_900(uParam0[iVar0], iVar407, 100f, 1) && !func_900(uParam0[iVar0], Global_35, 100f, 1)) && uParam2[iVar0] > 2)
			{
				func_1940((*uParam0)[iVar0], 0);
			}
			else
			{
				switch (uParam2[iVar0])
				{
					case 0:
						if (func_1961(iParam3))
						{
							set_blocking_of_non_temporary_events(uParam0[iVar0 + 1], true);
							set_blocking_of_non_temporary_events(uParam0[iVar0], true);
							func_1803(uParam0[iVar0 + 1], 0);
							func_929(uParam0[iVar0 + 1], func_1971(iParam4, iVar0), 2, 1073741824);
							_0x9587913b9e772d29(uParam0[iVar0 + 1], 0);
							func_1398(uParam0[iVar0], uParam0[iVar0 + 1], 0, -1, 1);
							clear_ped_tasks(uParam0[iVar0], 1, 0);
							clear_ped_tasks(uParam0[iVar0 + 1], 1, 0);
							if (!bParam7)
							{
								(*uParam2)[iVar0] = 1;
							}
							else
							{
								(*uParam2)[iVar0] = 2;
							}
						}
						break;
					case 1:
						if (!bVar563 && !bVar564)
						{
							set_ped_relationship_group_hash(uParam0[iVar0], 1269650476);
							set_ped_can_be_targetted(uParam0[iVar0 + 1], false);
							if ((*cParam5)[iVar0]->f_4 == 1)
							{
								func_982(uParam0[iVar0], 1);
							}
							set_ped_flee_attributes(uParam0[iVar0], 512, true);
							set_ped_flee_attributes(uParam0[iVar0 + 1], 512, true);
							func_1874(uParam0[iVar0], -183018591, 1, 1, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
							_0xd8736efda38edc5c(uParam0[iVar0], get_entity_coords(uParam0[iVar0], true, false), 150f);
							set_blocking_of_non_temporary_events(uParam0[iVar0], true);
							register_target(iVar407, uParam0[iVar0], 1);
							func_1821(uParam0[iVar0], -118010418, 1, 1);
							clear_ped_tasks_immediately(uParam0[iVar0], false, true);
							clear_ped_tasks_immediately(uParam0[iVar0 + 1], false, true);
							iVar5 = 26176;
							if (iParam8 == -1)
							{
								iVar5 |= 8;
							}
							if (bParam9)
							{
								iVar5 |= 67108864;
							}
							else
							{
								iVar5 |= 2;
							}
							if ((*cParam5)[iVar0]->f_5 == 1)
							{
								iVar5 = 4194880;
							}
							task_follow_waypoint_recording(uParam0[iVar0], cParam5[iVar0], iParam8, iVar5, -1, 0, 1, -1);
							_0xd77ae48611b7b10a(uParam0[iVar0], 0.5f);
							func_232((*uParam1)[iVar0]);
							(*uParam2)[iVar0] = 17;
							iLocal_576 = 1;
						}
						break;
					case 2:
						if (!bVar563 && !bVar564)
						{
							set_ped_relationship_group_hash(uParam0[iVar0], 1269650476);
							set_ped_can_be_targetted(uParam0[iVar0 + 1], false);
							if ((*cParam5)[iVar0]->f_4 == 1)
							{
								func_982(uParam0[iVar0], 1);
							}
							set_ped_flee_attributes(uParam0[iVar0], 512, true);
							set_ped_flee_attributes(uParam0[iVar0 + 1], 512, true);
							func_1874(uParam0[iVar0], -183018591, 1, 1, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
							_0xd8736efda38edc5c(uParam0[iVar0], get_entity_coords(uParam0[iVar0], true, false), 150f);
							set_blocking_of_non_temporary_events(uParam0[iVar0], true);
							register_target(iVar407, uParam0[iVar0], 1);
							func_1821(uParam0[iVar0], -118010418, 1, 1);
							clear_ped_tasks_immediately(uParam0[iVar0], false, true);
							clear_ped_tasks_immediately(uParam0[iVar0 + 1], false, true);
							if (iParam4 == 20)
							{
								if (iVar0 == 0)
								{
									vVar1 = { func_169(10, 17) };
								}
								else
								{
									vVar1 = { func_169(10, 18) };
								}
							}
							open_sequence_task(&iLocal_628);
							task_follow_nav_mesh_to_coord(0, vVar1, 2f, 20000, 4f, 8192, 40000f);
							task_combat_hated_targets_around_ped(0, 150f, 0, 0);
							close_sequence_task(iVar616);
							task_perform_sequence(uParam0[iVar0], iVar616);
							clear_sequence_task(&iLocal_628);
							_0xd77ae48611b7b10a(uParam0[iVar0], 0.5f);
							func_232((*uParam1)[iVar0]);
							(*uParam2)[iVar0] = 3;
							iLocal_576 = 1;
						}
						break;
					case 3:
						if (iParam4 == 20 && (func_1337(Global_35, func_169(10, 19), 10f, 1, 1) || func_1275((*uParam1)[iVar0], 10f)))
						{
							task_follow_waypoint_recording(uParam0[iVar0], cParam5[iVar0], 0, 26122, -1, 0, 1, -1);
							(*uParam2)[iVar0] = 17;
						}
						break;
					case 17:
						if (!func_1396(iVar407))
						{
							clear_ped_tasks(uParam0[iVar0], 1, 0);
							_0x1854217c640b39ec(uParam0[iVar0], iVar407, 0f, 0f, 0f, 10f, 0, 0);
							register_target(iVar407, uParam0[iVar0], 1);
							register_target(Global_35, uParam0[iVar0], 1);
							task_combat_hated_targets(uParam0[iVar0], -1f);
							(*uParam2)[iVar0] = 18;
						}
						else
						{
							if (func_1275((*uParam1)[iVar0], 5f))
							{
								if (func_1972(uParam0[iVar0], Global_35, 3) && func_1972(uParam0[iVar0], iVar407, 3))
								{
									clear_ped_tasks(uParam0[iVar0], 1, 0);
									_0x1854217c640b39ec(uParam0[iVar0], iVar407, 0f, 0f, 0f, 10f, 0, 0);
									register_target(iVar407, uParam0[iVar0], 1);
									register_target(Global_35, uParam0[iVar0], 1);
									task_combat_hated_targets(uParam0[iVar0], -1f);
									(*uParam2)[iVar0] = 16;
									return;
								}
							}
							if (func_904(Global_35, uParam0[iVar0], 1, 1) < 3f)
							{
								if (iParam4 == 16)
								{
									fVar6 = 3f;
								}
								else if (iParam4 == 15 || iParam4 == 20)
								{
									fVar6 = -3f;
								}
								task_follow_waypoint_recording_at_offset(uParam0[iVar0], cParam5[iVar0], fVar6, 0, 26122, -1, 1);
								(*uParam2)[iVar0] = 14;
							}
							if ((*cParam5)[iVar0]->f_5 == 1)
							{
								if (is_waypoint_playback_going_on_for_ped(uParam0[iVar0], 0))
								{
									iVar7 = get_ped_waypoint_progress(uParam0[iVar0]);
									if (iVar7 >= (*cParam5)[iVar0]->f_6)
									{
										task_follow_waypoint_recording(uParam0[iVar0], cParam5[iVar0], 0, 26122, -1, 0, 1, -1);
										(*cParam5)[iVar0]->f_5 = 0;
									}
								}
							}
						}
						break;
					case 18:
						if (func_1396(iVar407))
						{
							clear_ped_tasks(uParam0[iVar0], 1, 0);
							remove_ped_defensive_area(uParam0[iVar0], false);
							(*uParam2)[iVar0] = 1;
						}
						break;
					case 14:
						if (func_904(Global_35, uParam0[iVar0], 1, 1) >= 3f)
						{
							func_232((*uParam1)[iVar0]);
							(*uParam2)[iVar0] = 15;
						}
						break;
					case 15:
						if (func_1275((*uParam1)[iVar0], 2f))
						{
							task_follow_waypoint_recording(uParam0[iVar0], cParam5[iVar0], 0, 26122, -1, 0, 1, -1);
							(*uParam2)[iVar0] = 17;
						}
						break;
					case 16:
						if (func_1972(Global_35, uParam0[iVar0], 3) || func_1972(iVar407, uParam0[iVar0], 3))
						{
							task_follow_waypoint_recording(uParam0[iVar0], cParam5[iVar0], 0, 26122, -1, 0, 1, -1);
							(*uParam2)[iVar0] = 17;
						}
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_1394(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_166(uParam0[iVar0], 0) || uParam1[iVar0] == 0)
		{
			if ((!func_900(uParam0[iVar0], iVar415, 100f, 1) && !func_900(uParam0[iVar0], Global_35, 100f, 1)) && uParam1[iVar0] > 0)
			{
				func_1940((*uParam0)[iVar0], 0);
			}
			switch (uParam1[iVar0])
			{
				case 0:
					if (func_1961(4) && !func_1961(64))
					{
						if ((iVar0 == 0 && func_1973(-1, 1)) || func_1551(&(Local_14.f_111), 1))
						{
							set_blocking_of_non_temporary_events(uParam0[iVar0], true);
							clear_ped_tasks(uParam0[iVar0], 1, 0);
							(*uParam1)[iVar0] = 1;
						}
					}
					break;
				case 1:
					if (!bVar571 && !bVar572)
					{
						set_ped_relationship_group_hash(uParam0[iVar0], 1269650476);
						set_ped_flee_attributes(uParam0[iVar0], 512, true);
						_0xd77ae48611b7b10a(uParam0[iVar0], 0.5f);
						func_1874(uParam0[iVar0], -183018591, 1, 1, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
						_0xd8736efda38edc5c(uParam0[iVar0], get_entity_coords(uParam0[iVar0], true, false), 150f);
						register_target(iVar415, uParam0[iVar0], 1);
						set_blocking_of_non_temporary_events(uParam0[iVar0], true);
						func_1923(uParam0[iVar0], func_1974(iVar0), 10f, 0, 0);
						open_sequence_task(&iLocal_628);
						task_follow_nav_mesh_to_coord(0, func_1974(iVar0), 3f, 20000, 20f, 0, 40000f);
						task_go_to_coord_and_aim_at_hated_entities_near_coord(0, func_1974(iVar0), func_1974(iVar0), 3f, true, 1f, 4f, true, 0, 0, -687903391);
						task_combat_hated_targets(0, -1f);
						close_sequence_task(iVar624);
						task_perform_sequence(uParam0[iVar0], iVar624);
						clear_sequence_task(&iLocal_628);
						_0x986f7a51ee3e1f92(uParam0[iVar0], 0);
						(*uParam1)[iVar0] = 4;
						iLocal_576 = 1;
					}
					break;
				case 4:
					break;
			}
		}
		iVar0++;
	}
}

struct<8> func_1395()
{
	StringCopy(&cVar0, "ALLY_DEAD_HORSE_PLAYER", 64);
	return cVar0;
}

bool func_1396(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_1397(int iParam0)
{
	iParam0 = func_277(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1975(iParam0, 32);
	func_279();
}

int func_1398(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

void func_1399(int iParam0)
{
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	switch (iParam0)
	{
		case 0:
			cVar0 = func_168(6);
			iVar1 = -1;
			iVar2 = 14;
			iVar3 = 1;
			break;
		case 2:
			cVar0 = func_168(7);
			iVar1 = -2;
			iVar2 = 16;
			iVar4 = 1;
			iVar5 = 16;
			break;
	}
	cLocal_868[iParam0] = cVar0;
	cLocal_868[iParam0]->f_1 = iVar1;
	cLocal_868[iParam0]->f_3 = iVar2;
	cLocal_868[iParam0]->f_4 = iVar3;
	cLocal_868[iParam0]->f_5 = iVar4;
	cLocal_868[iParam0]->f_6 = iVar5;
}

void func_1400(int iParam0)
{
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	switch (iParam0)
	{
		case 0:
			cVar0 = func_168(12);
			iVar1 = -1;
			iVar2 = 47;
			break;
		case 2:
			cVar0 = func_168(13);
			iVar1 = -2;
			iVar2 = 48;
			iVar3 = 1;
			break;
	}
	cLocal_901[iParam0] = cVar0;
	cLocal_901[iParam0]->f_1 = iVar1;
	cLocal_901[iParam0]->f_3 = iVar2;
	cLocal_901[iParam0]->f_4 = iVar3;
}

void func_1401(int iParam0)
{
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	switch (iParam0)
	{
		case 0:
			cVar0 = func_168(12);
			iVar1 = -2;
			iVar2 = 74;
			break;
		case 2:
			cVar0 = func_168(13);
			iVar1 = -3;
			iVar2 = 78;
			iVar3 = 1;
			break;
	}
	cLocal_934[iParam0] = cVar0;
	cLocal_934[iParam0]->f_1 = iVar1;
	cLocal_934[iParam0]->f_3 = iVar2;
	cLocal_934[iParam0]->f_4 = iVar3;
}

void func_1402(int iParam0)
{
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	switch (iParam0)
	{
		case 0:
			cVar0 = func_168(12);
			iVar1 = -2;
			iVar2 = 93;
			break;
		case 2:
			cVar0 = func_168(13);
			iVar1 = -3;
			iVar2 = 95;
			break;
	}
	cLocal_967[iParam0] = cVar0;
	cLocal_967[iParam0]->f_1 = iVar1;
	cLocal_967[iParam0]->f_3 = iVar2;
	cLocal_967[iParam0]->f_4 = iVar3;
}

void func_1403()
{
	_0x0d7fd6a55fd63aef(25, 3, 0);
	_0x0d7fd6a55fd63aef(6, 3, 0);
	_0x0d7fd6a55fd63aef(28, 3, 0);
	_0x0d7fd6a55fd63aef(21, 3, 0);
	_0x0d7fd6a55fd63aef(11, 3, 0);
	_0x0d7fd6a55fd63aef(12, 3, 0);
	_0x0d7fd6a55fd63aef(13, 3, 0);
	_0x0d7fd6a55fd63aef(29, 3, 0);
	_0x0d7fd6a55fd63aef(32, 3, 0);
}

void func_1404()
{
	*Var0[0] = { func_1971(15, 0) };
	*Var0[1] = { func_1971(15, 2) };
	*Var0[2] = { func_1971(16, 0) };
	*Var0[3] = { func_1971(16, 2) };
	*Var0[4] = { func_1971(20, 0) };
	*Var0[5] = { func_1971(20, 2) };
	iVar25 = 0;
	while (iVar25 < 6)
	{
		iLocal_540[iVar25] = create_tracked_point();
		if (_is_tracked_point_valid(&(iLocal_540[iVar25])))
		{
			set_tracked_point_info(&(iLocal_540[iVar25]), *Var0[iVar25], 0.5f);
		}
		iVar25++;
	}
	iLocal_619 = 1;
}

void func_1405()
{
	if (!func_166(iVar417, 0))
	{
		return;
	}
	if (func_166(iVar418, 0))
	{
		set_ped_reset_flag(iVar418, 145, true);
	}
	if (func_1407())
	{
		func_1976(iVar417, &uLocal_328);
		if (func_1355("UTP1_BANTEREND"))
		{
			set_ped_can_play_gesture_anims(iVar417, 1, 1);
			func_27(&uLocal_325, 0);
			if (func_1275(&uLocal_325, 2.5f))
			{
				if (!func_1565(iVar417, 150319005))
				{
					task_look_at_entity(iVar417, Global_35, 5000, 0, 51, 0);
					func_232(&uLocal_325);
				}
			}
		}
	}
	if (!func_187(65536))
	{
		if ((func_1407() && _is_ped_getting_into_a_mount_seat(iVar417, true)) && _get_wanted_intensity_for_player(player_id()) == 0)
		{
			clear_ped_tasks(iVar417, 1, 0);
			iLocal_437 = create_group(0);
			set_group_formation(iVar435, 10);
			set_ped_config_flag(iVar417, 279, true);
			set_ped_as_group_leader(iVar417, iVar435, false);
			_0xac22aa6df4d1c1de(player_id(), iVar417, -1082130432, -1082130432, 3, 2, 0);
			_0x02e741e19e39628c(iVar417, 3f);
			set_entity_invincible(iVar418, false);
			task_follow_waypoint_recording(iVar417, func_168(1), 0, 522, -1, 0, 1, -1);
			func_470(65536);
		}
	}
	else
	{
		set_ped_reset_flag(Global_35, 175, false);
	}
	if (iLocal_212 > 2)
	{
		if (!func_1396(Global_35) || !func_900(Global_35, iVar417, 10f, 1))
		{
			fVar4 = func_904(iVar417, Global_35, 1, 1);
			if (fVar4 > 60f)
			{
				fLocal_553 = 1.5f;
				set_ped_max_move_blend_ratio(iVar418, 1.5f);
			}
			else if (fVar4 > 50f)
			{
				fLocal_553 = 1.75f;
				set_ped_max_move_blend_ratio(iVar418, 1.75f);
			}
			else if (fVar4 > 40f)
			{
				fLocal_553 = 2f;
				set_ped_max_move_blend_ratio(iVar418, 2f);
			}
		}
		if (func_399(iVar516, 512) && !func_1407())
		{
			fLocal_553 = 2f;
			set_ped_max_move_blend_ratio(iVar418, 2f);
		}
	}
	if ((is_waypoint_playback_going_on_for_ped(iVar417, 0) && iLocal_212 > 2) && is_ped_on_mount(iVar417))
	{
		fVar5 = func_1977(&iLocal_419, func_168(1));
		fLocal_553 = fVar5;
		if (!func_187(65536))
		{
			waypoint_playback_override_speed(iVar417, fVar5, 0, -1082130432, 0);
		}
		else
		{
			func_1978(iVar417, fVar5, 0, 1045220557, 1, 1077936128, 1106247680, 1114636288, 1033476506, 1061158912, 1, 0, 1045220557, 0);
		}
	}
	if (!bVar556 && !is_ped_on_mount(iVar417))
	{
		func_1260(&iLocal_212, 34);
		iLocal_558 = 1;
	}
	if (!bVar568 && is_entity_in_volume(iVar417, iVar474, true, 0))
	{
		iLocal_570 = 1;
	}
	if (((iLocal_212 == 2 || iLocal_212 == 14) || iLocal_212 == 16) || iLocal_212 == 15)
	{
		if (!func_1565(iVar417, 658540077) && is_ped_on_mount(iVar417))
		{
			func_27(&uLocal_373, 0);
			if (func_1275(&uLocal_373, 0.5f))
			{
				func_1260(&iLocal_212, 32);
				func_653(&uLocal_373);
			}
		}
	}
	switch (iLocal_212)
	{
		case 0:
			if (get_is_waypoint_recording_loaded(func_168(1)))
			{
				task_follow_waypoint_recording(iVar417, func_168(1), 0, 522, -1, 0, 1, -1);
				set_entity_invincible(iVar418, true);
				func_1331(3);
				func_1260(&iLocal_212, 2);
			}
			break;
		case 2:
			if (func_166(&(Local_14.f_83[0]), 0))
			{
				set_entity_only_damaged_by_player(&(Local_14.f_83[0]), true);
			}
			if (func_166(&(Local_14.f_83[2]), 0))
			{
				set_entity_only_damaged_by_player(&(Local_14.f_83[2]), true);
			}
			if (is_entity_in_volume(iVar417, iVar477, true, 0))
			{
				iVar0 = 0;
				while (iVar0 <= 2)
				{
					if (func_166(&(Local_14.f_83[iVar0]), 0) && is_ped_human(&(Local_14.f_83[iVar0])))
					{
						register_target(iVar417, &(Local_14.f_83[iVar0]), 1);
						set_entity_only_damaged_by_player(&(Local_14.f_83[iVar0]), false);
					}
					iVar0++;
				}
				set_ped_accuracy(iVar417, 5);
				func_653(&uLocal_237);
				func_1260(&iLocal_212, 14);
			}
			break;
		case 14:
			if (func_1337(iVar417, func_169(10, 17), 35f, 1, 1) && func_166(&(Local_14.f_130[0]), 0))
			{
				waypoint_playback_start_shooting_at_ped(iVar417, &(Local_14.f_130[0]), 0, -687903391, -1082130432);
				set_ped_accuracy(iVar417, 65);
				func_1260(&iLocal_212, 16);
			}
			if (is_entity_in_volume(iVar417, iVar476, true, 0))
			{
				set_ped_accuracy(iVar417, 50);
				func_1260(&iLocal_212, 15);
			}
			break;
		case 16:
			if (func_187(65536))
			{
				func_1260(&iLocal_212, 4);
			}
			else if (!func_166(&(Local_14.f_130[0]), 0))
			{
				waypoint_playback_stop_aiming_or_shooting(iVar417);
				set_ped_accuracy(iVar417, 15);
				task_combat_hated_targets(iVar417, -1f);
				func_1260(&iLocal_212, 15);
			}
			if (is_entity_in_volume(iVar417, iVar476, true, 0))
			{
				set_ped_accuracy(iVar417, 50);
				func_1260(&iLocal_212, 15);
			}
			break;
		case 15:
			if (is_entity_in_volume(iVar417, iVar476, true, 0))
			{
				set_ped_accuracy(iVar417, 50);
			}
			if (func_1407())
			{
				func_1260(&iLocal_212, 4);
			}
			break;
		case 4:
			if (func_1337(iVar417, vLocal_632, 20f, 1, 1))
			{
				set_ped_max_move_blend_ratio(func_1414(iVar417), 1.25f);
			}
			else if (func_1337(iVar417, vLocal_632, 30f, 1, 1))
			{
				set_ped_max_move_blend_ratio(func_1414(iVar417), 1.75f);
			}
			break;
		case 34:
			if (func_1979())
			{
				func_1980();
				bVar6 = true;
			}
			clear_ped_tasks(iVar417, 1, 0);
			if (bVar6)
			{
				waypoint_recording_get_closest_waypoint(func_168(1), get_entity_coords(iVar417, true, false), &iVar7);
				waypoint_recording_get_coord(func_168(1), iVar7, &vVar1);
				func_1923(iVar417, vVar1, 5f, 1, 0);
				task_combat_hated_targets(iVar417, -1f);
				func_1260(&iLocal_212, 35);
			}
			else
			{
				if (!func_900(iVar418, iVar417, 10f, 1))
				{
					set_blocking_of_non_temporary_events(iVar418, true);
					task_follow_nav_mesh_to_coord(iVar418, get_entity_coords(iVar417, true, false), 2.5f, 20000, 5f, 0, 40000f);
					func_1981(iVar417, 869278708, 1971704925);
				}
				func_1260(&iLocal_212, 36);
			}
			break;
		case 35:
			if (!func_1979())
			{
				if (!func_900(iVar418, iVar417, 10f, 1))
				{
					set_blocking_of_non_temporary_events(iVar418, true);
					task_follow_nav_mesh_to_coord(iVar418, get_entity_coords(iVar417, true, false), 2.5f, 20000, 5f, 0, 40000f);
					func_1981(iVar417, 869278708, 1971704925);
				}
				func_1260(&iLocal_212, 36);
			}
			break;
		case 36:
			if (func_900(iVar418, iVar417, 15f, 1))
			{
				func_1960(iVar417, iVar418, 0, 2f, 20000);
				func_1260(&iLocal_212, 32);
			}
			break;
		case 32:
			if (_is_ped_getting_into_a_mount_seat(iVar417, true))
			{
				iLocal_558 = 0;
				task_follow_waypoint_recording(iVar417, func_168(1), 0, 522, -1, 0, 1, -1);
				func_1260(&iLocal_212, 15);
			}
			else if (!func_1565(iVar417, 1868526510))
			{
				func_1260(&iLocal_212, 34);
			}
			break;
	}
}

void func_1406()
{
	if (!func_399(iVar518, 1))
	{
		if (func_1337(iVar417, func_169(10, 0), 10f, 1, 1))
		{
			func_426(&uLocal_520, 1);
		}
	}
	if (!func_399(iVar518, 2))
	{
		if (func_1337(iVar417, func_169(10, 1), 10f, 1, 1))
		{
			func_426(&uLocal_520, 2);
		}
	}
	if (!func_399(iVar518, 8))
	{
		if (func_1337(iVar417, func_169(10, 2), 10f, 1, 1))
		{
			func_426(&uLocal_520, 8);
		}
	}
	if (!func_399(iVar518, 32))
	{
		if (func_1337(iVar417, func_169(10, 3), 10f, 1, 1))
		{
			func_426(&uLocal_520, 32);
		}
	}
	if (!func_399(iVar518, 64))
	{
		if (func_1337(iVar417, func_169(10, 4), 10f, 1, 1))
		{
			func_426(&uLocal_520, 64);
		}
	}
	if (!func_399(iVar518, 128))
	{
		if (func_1337(iVar417, func_169(10, 5), 10f, 1, 1))
		{
			func_426(&uLocal_520, 128);
		}
	}
}

bool func_1407()
{
	if ((((func_1961(4) && !func_1982(Local_14.f_81, 0)) && (func_1961(8) && !func_1982(Local_14.f_97, 0))) && (func_1961(16) && !func_1982(Local_14.f_104, 0))) && (func_1961(32) && !func_1982(Local_14.f_128, 0)))
	{
		return true;
	}
	return false;
}

void func_1408(char[4] cParam0, int iParam1)
{
	iVar0 = func_744(func_12(cParam0->f_607));
	if (func_745(iVar0))
	{
		func_1983(iVar0, iParam1);
	}
}

void func_1409(char* sParam0)
{
	if (is_control_pressed(0, -128997553) && is_ped_on_mount(Global_35))
	{
		func_27(&uLocal_355, 0);
	}
	if (iVar603 == 1 && is_ped_on_mount(Global_35))
	{
		set_ped_min_move_blend_ratio(iVar418, (1.75f + 0.25f));
		set_ped_min_move_blend_ratio(Global_35, (1.75f + 0.25f));
	}
	else
	{
		set_ped_min_move_blend_ratio(iVar418, 0f);
		set_ped_min_move_blend_ratio(Global_35, 0f);
	}
	if (iVar603 == 0 && (func_1275(&uLocal_355, 2f) || (func_1275(&uLocal_355, 0f) && is_control_pressed(0, -128997553))))
	{
		iLocal_606 = 1;
		use_waypoint_recording_as_assisted_movement_route(sParam0, 1, 1f, 1f, 1);
	}
	else if ((iVar603 == 1 && !is_control_pressed(0, -128997553)) || !is_ped_on_mount(Global_35))
	{
		func_653(&uLocal_355);
		iLocal_606 = 0;
		use_waypoint_recording_as_assisted_movement_route(sParam0, 0, 1065353216, 1056964608, 1);
	}
}

float func_1410(vector3 vParam0, vector3 vParam3)
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

bool func_1411(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	fVar0 = func_1984(get_entity_heading(iParam0));
	fParam4 = func_1984(fParam4);
	if (is_entity_at_coord(iParam0, vParam1, fParam5, fParam5, 2f, false, bParam7, 0) && absf((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

void func_1412()
{
	if (!func_399(iVar518, 1))
	{
		vLocal_632 = { func_169(10, 0) };
		vLocal_635.f_2 = func_1550(10, 0);
		return;
	}
	if (!func_399(iVar518, 2))
	{
		vLocal_632 = { func_169(10, 1) };
		vLocal_635.f_2 = func_1550(10, 1);
		return;
	}
	if (!func_399(iVar518, 8))
	{
		vLocal_632 = { func_169(10, 2) };
		vLocal_635.f_2 = func_1550(10, 2);
		return;
	}
	if (!func_399(iVar518, 32))
	{
		vLocal_632 = { func_169(10, 3) };
		vLocal_635.f_2 = func_1550(10, 3);
		return;
	}
	if (!func_399(iVar518, 64))
	{
		vLocal_632 = { func_169(10, 4) };
		vLocal_635.f_2 = func_1550(10, 4);
		return;
	}
	if (!func_399(iVar518, 128))
	{
		vLocal_632 = { func_169(10, 5) };
		vLocal_635.f_2 = func_1550(10, 5);
		return;
	}
	vLocal_632 = { func_169(10, 6) };
	vLocal_635.f_2 = func_1550(10, 6);
}

int func_1413()
{
	if (!func_1539())
	{
		return 0;
	}
	if (!func_1327(&iVar0))
	{
		return 0;
	}
	if (!func_1540(iVar0))
	{
		return 0;
	}
	return func_1542(iVar0, 0);
}

int func_1414(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		return get_mount(iParam0);
	}
	return 0;
}

bool func_1415(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

void func_1416(int iParam0)
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

char* func_1417()
{
	return "cutDeleteMe";
}

bool func_1418(struct<2> Param0, int iParam2)
{
	if (!func_266(Param0))
	{
		return false;
	}
	if (!does_entity_exist(iParam2))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < func_267(Param0))
	{
		if (func_268(Param0, iVar0) == iParam2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1419(int iParam0)
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

void func_1420(int iParam0)
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

void func_1421()
{
	iVar0 = func_1031(Global_35, 9, 1, 0);
	if (func_708(iVar0))
	{
		return;
	}
	iVar0 = func_1031(Global_35, 7, 1, 0);
	if (func_708(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1031(Global_35, 0, 1, 0);
	if (func_708(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1031(Global_35, 1, 1, 0);
	if (func_708(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1031(Global_35, 18, 1, 0);
	if (func_708(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1985();
	if (func_708(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1874(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1986(6291456, 0);
	if (func_708(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1874(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1422()
{
	return Global_1900383->f_393;
}

int func_1423(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1987(*uParam0, 0f, 0f, 0f))
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

void func_1424(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1425(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1426(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1427()
{
	return &Global_1899515;
}

void func_1428(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1429(int iParam0)
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

bool func_1430()
{
	return (func_1988() || func_1989());
}

void func_1431(bool bParam0)
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
	func_1990(0f);
	Global_1935436->f_11 = 1;
	if (func_315())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_1991();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1432(var uParam0)
{
	return uParam0->f_865;
}

float func_1433(var uParam0)
{
	return uParam0->f_868;
}

float func_1434(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_1435(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1436(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1437(var uParam0, int iParam1)
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

void func_1438(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1215(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1992(iParam4);
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

bool func_1439(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_696(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1440(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1441(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1439(1108822547, 6))
	{
		if (bParam2)
		{
			func_1438(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1442(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1443(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1442(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_696(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_696(iParam0, 1)])->f_10 || iParam1);
}

void func_1443(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_696(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_696(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_696(iParam0, 1)])->f_10 && iParam1));
}

bool func_1444(var uParam0)
{
	if (func_1993(&(uParam0->f_29), 62))
	{
		switch (func_1994())
		{
			case 1:
				if (!func_1993(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1993(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1993(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1993(&(uParam0->f_29), 32))
				{
					if (func_1993(&(uParam0->f_29), 2))
					{
						if (func_715(func_296()) < 5)
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

int func_1445(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1995(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1071("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1072(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_708(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1995(iParam1, 512) && func_1649(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1995(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1995(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1995(iParam1, 33554432)))
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
		func_994(iVar1);
	}
	if (func_708(iVar0))
	{
	}
	else if (!func_1995(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1445(uParam0, iParam1, iParam2);
	}
	else if (func_1995(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1446(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_1447(int iParam0)
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

void func_1448(var uParam0)
{
	if (!func_895(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_859(&(uParam0->f_1), 1);
	}
}

void func_1449(var uParam0)
{
	if (!func_895(*uParam0, 1))
	{
		request_ptfx_asset();
		func_859(uParam0, 1);
	}
}

bool func_1450(var uParam0)
{
	if (func_895(uParam0->f_2, 1))
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
		if (((func_229((*uParam0)[iVar0], 1048576) && are_strings_equal((*uParam0)[iVar0], sParam1)) && (*uParam0)[iVar0]->f_9 == sParam1->f_9) && (*uParam0)[iVar0]->f_10 == sParam1->f_10)
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
	func_597(sParam0, 1);
}

bool func_1465(var uParam0)
{
	if (func_895(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_895(uParam0->f_1, 1))
	{
		func_865(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_859(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1466(var uParam0)
{
	if (func_895(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_895(uParam0->f_3, 1))
	{
		func_867(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_859(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_859(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1467(var uParam0)
{
	if (func_895(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_895(uParam0->f_1, 1))
	{
		func_869(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_859(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1468(var uParam0, int iParam1)
{
	if (func_895(uParam0->f_1, 2))
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
	if (!func_895(uParam0->f_1, 1))
	{
		func_876(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_859(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1469(var uParam0)
{
	if (func_895(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_895(uParam0->f_2, 1))
	{
		func_878(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_859(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1470(var uParam0)
{
	if (func_895(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_895(uParam0->f_3, 1))
	{
		func_880(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_859(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1471(var uParam0)
{
	if (func_895(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_895(uParam0->f_1, 1))
	{
		func_882(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_859(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1472(var uParam0)
{
	if (func_895(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_895(uParam0->f_1, 1))
	{
		func_884(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_859(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1473(var uParam0)
{
	if (func_895(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_895(uParam0->f_2, 1))
	{
		func_886(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_859(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1474(var uParam0)
{
	if (func_895(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_895(uParam0->f_1, 1))
	{
		func_888(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_859(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1475(int iParam0)
{
	if (func_616(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1476(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_616(iParam0))
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
			if (func_978(iParam0, 2, 1))
			{
				func_979(iParam0, 2, 1);
			}
			if (func_727(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_1137(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_621(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_166(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_166(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_1996(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_1137(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1997(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_1137(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1997(iParam0, 1);
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
			if (!func_978(iParam0, 44, 0))
			{
				func_1137(iParam0, 44, 0);
			}
			if (func_1998(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_1997(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_979(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_1141(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_1999(iParam0, 0, 0, 1);
			}
			func_979(iParam0, 33, 1);
			func_979(iParam0, 34, 1);
			func_979(iParam0, 29, 1);
			if (!func_404(vVar0) && bParam7)
			{
				func_1997(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1997(iParam0, 4);
			}
			else
			{
				func_1997(iParam0, 5);
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
						func_1996(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_905(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_1997(iParam0, 4);
			}
			else
			{
				func_1997(iParam0, 5);
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
				if (func_2000(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_2001(iParam0, iParam13, 0);
						func_1808(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_978(iParam0, 25, 0))
						{
							func_979(iParam0, 25, 0);
						}
						func_1137(iParam0, 66, 0);
						func_1997(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1997(iParam0, 5);
				}
				func_1137(iParam0, 28, 1);
			}
			else
			{
				func_1997(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_1997(iParam0, 6);
			}
			break;
		case 6:
			if (func_166(Global_1360165[iParam0], 0))
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
					func_2002(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_2003(Global_1360165[iParam0], 1);
				}
			}
			func_1997(iParam0, 7);
		case 7:
			func_1141(iParam0, bParam9, bParam15, 0);
			func_458(iParam0, 4, bParam11);
			func_1138(iParam0);
			if (bParam20)
			{
				if (func_2004(Global_1360165[iParam0]))
				{
				}
			}
			func_2005(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_1997(iParam0, 0);
			func_728(iParam0, 16, 1);
			func_979(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1477(char[4] cParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_2006(iParam1, bParam3, bParam4, bParam6);
	if (!func_120(cParam0, 512))
	{
		if (func_120(cParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_1823(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_10781);
	}
	func_2007(cParam0, iParam1, iParam2, func_334(iParam2, 0));
	func_452(cParam0, iParam1, 512);
	if (bParam5)
	{
		func_452(cParam0, iParam1, 128);
	}
	else
	{
		func_451(cParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1478(int iParam0)
{
	if (!func_616(iParam0))
	{
		return;
	}
	iVar0 = func_652(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

void func_1479(char[4] cParam0, vector3 vParam1, float fParam4)
{
	cParam0->f_5417 = { vParam1 };
	cParam0->f_5420 = fParam4;
}

bool func_1480(int iParam0)
{
	iParam0 = func_277(iParam0);
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
	iParam0 = func_277(iParam0);
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
	func_2008(&Var0);
	func_2009(iParam0, Var0);
	func_2010(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_2011(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_2012(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_2013(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_2014(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_2015(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_2016(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_2017(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_2018(&(Global_40.f_1095.f_1[iParam0]->f_425));
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
	return func_2019(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1483(int iParam0)
{
	iParam0 = func_277(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_630(iParam0))
	{
		return false;
	}
	iVar0 = func_227(iParam0);
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
	func_624(iParam0);
	func_624(iParam0);
	func_2020(iParam0, iParam1);
	func_2021(iParam0, iParam1);
	func_2022(iParam0, iParam1);
	iVar1 = func_227(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_2023(iVar1);
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
	iVar3 = func_227(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_2023(iVar3);
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
	func_279();
}

bool func_1485()
{
	iVar0 = func_1422();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1486()
{
	iVar0 = func_1422();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_2024(0);
}

int func_1487(int iParam0)
{
	iParam0 = func_277(iParam0);
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
	iParam0 = func_277(iParam0);
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
	iParam0 = func_277(iParam0);
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
	iParam0 = func_277(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1751(&iVar0, &iVar1, &iVar2);
	func_1752(iParam0, iVar0);
	func_1753(iParam0, iVar1);
	func_1754(iParam0, iVar2);
	func_2025(iParam0, 1);
	func_2026(iParam0, 1);
}

void func_1491(int iParam0)
{
	iParam0 = func_277(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1975(iParam0, 1);
}

void func_1492(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_277(iParam0);
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
	iParam0 = func_277(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1150(iParam0, 1);
}

struct<2> func_1494(int iParam0)
{
	iParam0 = func_277(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_2027(iParam0, &uVar2))
	{
	}
	if (!func_2028(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1495()
{
	if (func_2029(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_2029(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_2029(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_2029(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_2029(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_2029(-415648720, &uVar11))
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
	func_2030(iParam0);
	func_2031(iParam0, uParam1);
	func_2032(iParam0);
	func_2033(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_2034(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1497(int iParam0)
{
	iParam0 = func_277(iParam0);
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
	*uParam1 = { func_2035(iParam0) };
	if (func_1987(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_906(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_2036(*iParam2, iVar0))
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
	switch (func_2037(uParam0))
	{
		case 0:
			uParam0->f_24 = func_296();
			iVar4 = func_296();
			func_1220(&iVar4, uParam0->f_6);
			func_1221(&iVar4, 0);
			func_1222(&iVar4, 0);
			if (func_1169(uParam0->f_24, iVar4, 1))
			{
				func_343(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_2038(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_2039(uParam0, 1);
			break;
		case 1:
			fVar5 = func_2040(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_2039(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_2040(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_343(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_715(iVar4), func_716(iVar4), func_717(iVar4));
				func_2041(get_clock_hours());
				func_2042(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1507(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1508(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_2043(2000);
	Global_16 = 0;
	func_2044();
	set_entity_invincible(Global_35, func_2045(*iParam0, 8));
	if (!func_2045(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_2045(*iParam0, 2) || func_2045(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_2045(*iParam0, 16))
	{
		func_246(1);
	}
	if (func_2045(*iParam0, 32))
	{
		func_525(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_2046(-1623728698, 0);
	}
	func_831(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1509(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1510(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_13;
}

int func_1511(var uParam0)
{
	return *uParam0;
}

bool func_1512(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1513(uParam0, 32768))
	{
		return true;
	}
	if (func_2047(uParam0) >= 3)
	{
		uParam0->f_2286 = func_969(get_player_index(), 0, 0, 1);
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
		func_2048(uParam0);
	}
	if (func_2047(uParam0) < 10)
	{
		if (func_2047(uParam0) == 3)
		{
			func_2049(uParam0, iParam5, bParam6);
		}
		else if (func_2047(uParam0) > 3)
		{
			if (func_1511(uParam0) == 0)
			{
				if (!func_1513(uParam0, 524288))
				{
					func_2050(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_2051(uParam0, 4);
					func_2052(uParam0, 10);
					func_2053(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1513(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_2054(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_1564(0);
			func_2055();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_2054(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_2056(uParam0, uParam0->f_2074))
				{
					if (func_2057(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_2058(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_2058(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_2059(uParam0);
			}
		}
	}
	bVar0 = func_2060(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1513(uParam0, 268435456) && bVar1) && !func_1513(uParam0, 262144))
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
				func_766(uParam0, 131072);
				func_766(uParam0, 268435456);
			}
		}
		if (func_2061(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_2054(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1511(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_2047(uParam0) == 3 || func_1513(uParam0, 131072))
	{
		func_2062(uParam0);
		if (!func_1513(uParam0, 262144))
		{
			if ((bVar0 && func_1513(uParam0, 65536)) || func_1513(uParam0, 131072))
			{
				func_766(uParam0, 32768);
				func_2051(uParam0, 4);
				func_2052(uParam0, 10);
				uParam0->f_2159 = 1;
				func_2053(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_2047(uParam0) >= 3)
	{
		func_2063(uParam0, iParam5);
		func_2064(uParam0);
		if (!func_2065(uParam0, 1))
		{
			func_2066(uParam0);
		}
		func_2067(uParam0);
	}
	switch (func_2047(uParam0))
	{
		case 0:
			func_2068(uParam0, Param1, iParam5);
			break;
		case 1:
			func_2069(uParam0);
			break;
		case 2:
			func_2070(uParam0);
			break;
		case 3:
			if (func_2071(uParam0))
			{
				func_2072(2);
				func_2058(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_232(&(uParam0->f_2262));
				func_2051(uParam0, 1);
				func_2073();
				func_2052(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1513(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_2047(uParam0) == 5)
			{
				if (func_2074(uParam0))
				{
					func_2051(uParam0, 2);
					func_2052(uParam0, 6);
				}
			}
			if (func_2047(uParam0) == 6)
			{
				if (func_2075(uParam0))
				{
					func_2051(uParam0, 3);
					func_2052(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1283(&(uParam0->f_2262)) >= 15f)
			{
				if (func_2076(uParam0, iParam5))
				{
					if (func_2077(uParam0))
					{
						uParam0->f_2075 = func_2078(uParam0);
						func_232(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_2051(uParam0, 6);
						func_2052(uParam0, 9);
					}
					else
					{
						func_2051(uParam0, 4);
						func_2052(uParam0, 10);
						func_2053(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_2076(uParam0, iParam5))
			{
				func_2053(uParam0, iParam5);
				func_2052(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1513(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1514(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1515(var uParam0, var uParam1)
{
	if (func_1513(uParam1, 32768))
	{
		Var0 = { func_2079(uParam0) };
		func_2080(uParam0, &Var0);
		if (func_1513(uParam1, 131072))
		{
			func_767(uParam0, 268435456);
			if (func_404(uParam0->f_865))
			{
				uParam0->f_865 = { func_2081(uParam1, uParam1->f_2074) };
			}
			if (func_404(uParam0->f_862))
			{
				uParam0->f_862 = { func_2081(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1513(uParam1, 268435456))
		{
			func_1905(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1513(uParam1, 524288))
	{
		func_767(uParam0, 67108864);
		func_1514(uParam1, 524288);
	}
	if (func_2061(uParam1, 128))
	{
		func_767(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_2054(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_1905(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

bool func_1516(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	func_2082(uParam4, &cParam0);
	if (func_820(uParam4, 2) && !func_820(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_2083(uParam4) != 1)
	{
		func_2084(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_2083(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_2085(uParam4, &cParam0, cParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_2086(uParam4, 4);
					return false;
				}
				else
				{
					if (func_2087(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_2088(cParam5);
				}
				func_2086(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_121(cParam5, func_33(cParam5), 262144))
				{
					if (!func_820(uParam4, 2097152))
					{
						func_1813(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_8(cParam5, 8) || func_820(uParam4, 134217728)))
				{
				}
				else
				{
					func_2089(uParam4);
				}
				func_232(&(uParam4->f_1));
				func_2086(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_2090(uParam4);
				if (!func_26(&(uParam4->f_1)))
				{
					func_27(&(uParam4->f_1), 0);
				}
				else if (func_914(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2086(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_1877(uParam4, &cParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_2086(uParam4, 4);
					}
					else if (!func_404(func_2091(uParam4)) && !func_1337(Global_35, func_2091(uParam4), 100f, 1, 1))
					{
						func_1420(1);
						start_player_teleport(get_player_index(), func_2091(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_914(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2086(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_290(cParam5) != 0 || (func_154(cParam5) == 1 && func_162(cParam5, func_33(cParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_16(1, 0);
						func_2085(uParam4, &cParam0, cParam5);
						func_2086(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_914(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_2086(uParam4, 4);
			}
			break;
		case 3:
			func_400(uParam4);
			if (func_2087(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_2088(cParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_820(uParam4, 512)))
			{
				if (!func_820(uParam4, 1024) && func_2092(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_820(uParam4, 512))
				{
					func_232(&(uParam4->f_1));
					func_767(uParam4, 512);
					func_2086(uParam4, 4);
				}
				else if (func_820(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_2084(uParam4);
			}
			if (func_820(uParam4, 524288))
			{
				if (IntToFloat(absi((func_2093(uParam4) - func_2094(uParam4)))) <= 2f)
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
				if (func_2095(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_2094(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_2096(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_2097(uParam4);
				return true;
			}
			else
			{
				if (func_820(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_232(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_767(uParam4, 512);
						func_1435(uParam4, 67108864, 1);
						func_2086(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_820(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_2094(uParam4) <= 5000) && func_2094(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_820(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1508(&(uParam4->f_861), 0);
					func_767(uParam4, 536870912);
				}
				if (func_2094(uParam4) >= 5000 && func_2094(uParam4) <= (func_2093(uParam4) - 5000))
				{
					func_2098();
				}
			}
			break;
		case 6:
			if (func_2096(uParam4))
			{
				func_2097(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_820(uParam4, 524288))
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
						func_767(uParam4, 1073741824);
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
				if (func_154(cParam5) == 1 && func_162(cParam5, func_33(cParam5)) >= 3)
				{
					if (func_2099(cParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2086(uParam4, 3);
					}
					else if (func_914(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2086(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_2087(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2086(uParam4, 3);
					}
					else if (func_914(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2086(uParam4, 3);
					}
				}
				if (func_2083(uParam4) == 3)
				{
					if (func_820(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_2086(uParam4, 4);
			break;
	}
	return false;
}

void func_1517(char[4] cParam0)
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
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_1417()))
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

bool func_1518(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_280(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_2100(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_281(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_2101(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1519(int iParam0)
{
	MemCopy(&cVar0, {func_280(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1520(int iParam0)
{
	Var0 = { func_1519(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1521(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_2102(iVar0));
		iVar0++;
	}
}

void func_1522(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1529(&(uParam0->f_1), 16384);
	}
	else
	{
		func_1528(&(uParam0->f_1), 16384);
	}
}

void func_1523(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1529(&(uParam0->f_1), 2048);
	}
	else
	{
		func_1528(&(uParam0->f_1), 2048);
	}
}

void func_1524(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1529(&(uParam0->f_1), 256);
	}
	else
	{
		func_1528(&(uParam0->f_1), 256);
	}
}

void func_1525(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1529(&(uParam0->f_1), 128);
	}
	else
	{
		func_1528(&(uParam0->f_1), 128);
	}
}

void func_1526(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1528(uParam0, 256);
	}
	else
	{
		func_1529(uParam0, 256);
	}
}

void func_1527(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_1528(uParam0, 268435456);
	}
	else
	{
		func_1529(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_1528(uParam0, 1073741824);
	}
	else
	{
		func_1529(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_1528(uParam0, 536870912);
	}
	else
	{
		func_1529(uParam0, 536870912);
	}
}

void func_1528(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1529(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1530(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_1531(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

int func_1532(int iParam0)
{
	if (!func_983(iParam0))
	{
		return 0;
	}
	if (!func_985(func_984(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_986(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_986(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_986(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_986(iParam0));
	return 1;
}

void func_1533(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_983(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

bool func_1534(int iParam0, int iParam1)
{
	iVar0 = 1;
	if (func_20() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = func_1783(func_77(), iParam0);
		}
		iVar1 = get_frame_count();
		if (Global_1914319->f_3[iParam0]->f_444 >= iVar1)
		{
			return Global_1914319->f_3[iParam0]->f_445;
		}
		iVar0 = (func_2103(iParam1) || func_2105(func_2104(iParam0)));
		Global_1914319->f_3[iParam0]->f_444 = iVar1;
		Global_1914319->f_3[iParam0]->f_445 = iVar0;
	}
	return iVar0;
}

void func_1535(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1608(iParam0, 1048576);
		func_1609(iParam0, 256);
		func_1609(iParam0, 512);
	}
	else
	{
		func_1609(iParam0, 1048576);
	}
}

void func_1536(int iParam0, bool bParam1)
{
	if (!func_1607(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1609(iParam0, 1);
	}
	else
	{
		func_1608(iParam0, 1);
	}
	func_2107(func_2106(iParam0), bParam1);
}

int func_1537(int iParam0, bool bParam1)
{
	if (!func_983(iParam0))
	{
		return 0;
	}
	if (!func_2108(iParam0, 2))
	{
		return 0;
	}
	if (func_2108(iParam0, 32) && !bParam1)
	{
		func_2109(iParam0, _create_persistent_character(func_984(iParam0)));
		if (func_20() == -1)
		{
			if (func_2108(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_986(iParam0));
				func_466(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_986(iParam0));
		}
		return 0;
	}
	if (!func_2110(iParam0) && func_20() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_986(iParam0)))
	{
		func_466(iParam0, 128);
		return 1;
	}
	func_2109(iParam0, _create_persistent_character(func_984(iParam0)));
	_0x4f81ead1de8fa19b(func_986(iParam0));
	if (func_2108(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_986(iParam0));
		func_466(iParam0, 2048);
	}
	return 1;
}

int func_1538(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_983(iParam0))
	{
		return 0;
	}
	if (!func_985(func_984(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_986(iParam0)))
	{
		func_1537(iParam0, 0);
		return 0;
	}
	if (func_2111(iParam0, bParam2))
	{
		return 1;
	}
	if (func_2108(iParam0, 32))
	{
		return 0;
	}
	if (!func_2111(iParam0, 0))
	{
		return 0;
	}
	vVar0 = { _0x5ee6fccc9c832ca2(func_986(iParam0)) };
	if (!func_404(vVar0))
	{
		if (is_sphere_visible_to_another_machine(vVar0, 2.5f, 1120403456))
		{
			return 0;
		}
	}
	if (bParam1 && !func_2111(iParam0, bParam2))
	{
		if (!func_2112(iParam0))
		{
			return 0;
		}
	}
	iVar3 = _0x0cadc3a977997472(func_986(iParam0), 0);
	if (does_entity_exist(iVar3))
	{
		return 1;
	}
	return 0;
}

bool func_1539()
{
	return Global_1946804->f_2792;
}

bool func_1540(int iParam0)
{
	if (func_2113())
	{
		return false;
	}
	if (!func_471(iParam0, 0))
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

int func_1541(int iParam0)
{
	return func_2114(iParam0);
}

int func_1542(int iParam0, int iParam1)
{
	bVar3 = func_927(iParam0);
	if (func_493(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_1353(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_2115();
			}
			else
			{
				iVar0 = func_2116();
			}
		}
		else if (func_399(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_2117();
		}
		else
		{
			iVar0 = func_2118();
		}
	}
	else if (func_1327(&iVar2))
	{
		if (func_493(iVar2, -1303648999))
		{
			iVar0 = func_2115();
		}
		else
		{
			iVar0 = func_2116();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_2117();
	}
	else
	{
		iVar0 = func_2118();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_1543(char[4] cParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	return func_2119(cParam0, iParam1, sParam2, iParam3, bParam4, bParam5);
}

void func_1544(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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

void func_1545(vector3 vParam0, float fParam3, int iParam4)
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

float func_1546(char[4] cParam0, char* sParam1)
{
	fVar0 = -1f;
	if (func_959(cParam0))
	{
		if (!is_string_null_or_empty(sParam1))
		{
			if (!are_strings_equal(&(cParam0->f_7375.f_800), sParam1))
			{
				return -1f;
			}
		}
		iVar1 = func_2120(cParam0);
		fVar2 = (IntToFloat(iVar1) / 1000f);
		iVar3 = func_2121(cParam0);
		fVar4 = (IntToFloat(iVar3) / 1000f);
		fVar0 = (fVar2 / fVar4);
	}
	return fVar0;
}

void func_1547(char* sParam0)
{
	if (is_entity_dead(iVar416))
	{
	}
	if (!_is_anim_scene_started(&(iLocal_522[14]), false))
	{
		set_anim_scene_entity(&(iLocal_522[14]), "MicahBell", iVar416, 0);
		start_anim_scene(&(iLocal_522[14]));
		_set_anim_scene_playback_list_bool(&(iLocal_522[14]), sParam0, true);
		sLocal_627 = sParam0;
	}
}

void func_1548(int iParam0, vector3 vParam1, float fParam4)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar1 = func_227(iVar0);
		iVar2 = 0;
		if (((does_entity_exist(iVar1) && !is_entity_dead(iVar1)) && _does_volume_exist(iParam0)) && is_entity_in_volume(iVar1, iParam0, true, 0))
		{
			if (is_ped_in_writhe(iVar1))
			{
				func_905(iVar1, vParam1, fParam4, 32, 1073741824);
			}
			else
			{
				clear_ped_tasks_immediately(iVar1, false, true);
				set_blocking_of_non_temporary_events(iVar1, true);
				func_905(iVar1, vParam1, fParam4, 2, 1073741824);
				iVar2 = _find_closest_active_scenario_point_of_type(vParam1, -1805387726, 2f, 0, false);
				func_1556(iVar0);
				if (_does_scenario_point_exist(iVar2))
				{
					_task_use_scenario_point(iVar1, iVar2, "", -1, false, true, 0, false, -1f, false);
				}
				else
				{
					task_stand_still(iVar1, -1);
				}
			}
		}
		iVar0++;
	}
}

int func_1549(vector3 vParam0, bool bParam3)
{
	if (_0xa24c1d341c6e0d53(0, 0, 0) || is_first_person_aim_cam_active())
	{
		set_gameplay_cam_relative_heading(0f, 1f);
		if (bParam3)
		{
			func_2122(vParam0);
		}
		func_2123(vParam0);
		return 1;
	}
	return 0;
}

float func_1550(int iParam0, int iParam1)
{
	return func_1134(iParam0, iParam1);
}

bool func_1551(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1552(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1553()
{
	set_bit(&(Global_1934765->f_301), 1);
	func_2124();
}

void func_1554(int iParam0)
{
	switch (iLocal_196)
	{
		case 0:
			func_1553();
			_set_weather_type(1420204096, false, true, true, 20f, false);
			iLocal_196 = 1;
			break;
		case 1:
			if (iParam0 >= iLocal_205)
			{
				if (func_2125(1420204096, 839715153, 0f, 0.65f, 60f, 0))
				{
					func_653(&uLocal_337);
					iLocal_196 = 2;
				}
			}
			break;
		case 2:
			if (iParam0 == iLocal_210 && func_1407())
			{
				if (func_2125(1420204096, 839715153, 0.65f, 0f, 15f, 0))
				{
					func_653(&uLocal_337);
					iLocal_196 = 3;
				}
			}
			break;
		case 3:
			if (func_2125(1420204096, -1233681761, 0f, 1f, 30f, 1))
			{
				func_653(&uLocal_337);
				iLocal_196 = 4;
			}
			break;
		case 4:
			_set_weather_type_frozen(false);
			_set_weather_type(-1233681761, true, true, false, 0f, false);
			iLocal_196 = 5;
			break;
		case 5:
			break;
	}
}

void func_1555()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_624(iVar0);
		func_625(iVar0);
		iVar0++;
	}
}

void func_1556(int iParam0)
{
	iParam0 = func_277(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1975(iParam0, 64);
	func_279();
}

bool func_1557(int iParam0)
{
	iParam0 = func_277(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1150(iParam0, 64))
	{
		return true;
	}
	return false;
}

bool func_1558(char[4] cParam0, int iParam1, char[4] cParam2, int iParam3, int iParam4, float fParam5, float fParam6, int iParam7)
{
	Var0 = { func_2126(iParam1) };
	Var8 = { func_2127(iParam1) };
	return func_2128(cParam0, func_652(iParam1), &Var0, &Var8, cParam2, iParam3, iParam4, fParam5, fParam6, iParam7, 1);
}

int func_1559(int iParam0, bool bParam1)
{
	if (!func_266(Local_14.f_1))
	{
		Local_14.f_1 = { func_429() };
	}
	if (func_1551(&(Local_14.f_1), 1))
	{
		return 1;
	}
	if (!does_entity_exist(&(Local_14.f_3[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_3[0] = func_1801(1127589605, -1783.469f, -372.9315f, 159.3891f, 127.7366f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[0]), "Entity_1");
		func_818(Local_14.f_1, &(Local_14.f_3[0]));
		func_819(&(Local_14.f_3[0]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_3[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_3[1] = func_1801(-1384606398, -1778.025f, -376.4988f, 159.91f, 131.7368f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[1]), "Entity_2");
		func_818(Local_14.f_1, &(Local_14.f_3[1]));
		func_819(&(Local_14.f_3[1]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_3[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_3[2] = func_1801(-1384606398, -1798.739f, -382.9828f, 160.2404f, 55.7373f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[2]), "Entity_3");
		func_818(Local_14.f_1, &(Local_14.f_3[2]));
		func_819(&(Local_14.f_3[2]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_3[3])) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_3[3] = func_1801(-1384606398, -1829.269f, -408.9633f, 162.4101f, 331.8993f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[3]), "Entity_4");
		func_818(Local_14.f_1, &(Local_14.f_3[3]));
		func_819(&(Local_14.f_3[3]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_3[4])) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_3[4] = func_1801(1127589605, -1832.474f, -415.7486f, 161.1478f, 233.8996f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[4]), "Entity_5");
		func_818(Local_14.f_1, &(Local_14.f_3[4]));
		func_819(&(Local_14.f_3[4]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 4)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_3[5])) && (iParam0 == -1 || iParam0 == 5))
	{
		Local_14.f_3[5] = func_1801(-1384606398, -1819.622f, -423.954f, 159.9971f, 109.9003f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[5]), "Entity_6");
		func_818(Local_14.f_1, &(Local_14.f_3[5]));
		func_819(&(Local_14.f_3[5]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 5)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_3[6])) && (iParam0 == -1 || iParam0 == 6))
	{
		Local_14.f_3[6] = func_1801(-1384606398, -1803.364f, -426.3567f, 158.7881f, 343.271f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[6]), "Entity_7");
		func_818(Local_14.f_1, &(Local_14.f_3[6]));
		func_819(&(Local_14.f_3[6]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 6)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_3[7])) && (iParam0 == -1 || iParam0 == 7))
	{
		Local_14.f_3[7] = func_1801(-1384606398, -1801.507f, -426.021f, 156.6895f, 345.2711f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[7]), "Entity_8");
		func_818(Local_14.f_1, &(Local_14.f_3[7]));
		func_819(&(Local_14.f_3[7]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 7)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_3[8])) && (iParam0 == -1 || iParam0 == 8))
	{
		Local_14.f_3[8] = func_1801(1127589605, -1756.353f, -390.0359f, 156.3184f, 55.9416f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[8]), "Entity_9");
		func_818(Local_14.f_1, &(Local_14.f_3[8]));
		func_819(&(Local_14.f_3[8]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 8)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_3[9])) && (iParam0 == -1 || iParam0 == 9))
	{
		Local_14.f_3[9] = func_1801(-1384606398, -1772.338f, -400.3941f, 155.9083f, 238.9317f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[9]), "Entity_10");
		func_818(Local_14.f_1, &(Local_14.f_3[9]));
		func_819(&(Local_14.f_3[9]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 9)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	func_1552(&(Local_14.f_1), 1);
	return 1;
}

void func_1560(char[4] cParam0)
{
	if (!func_166(Global_35, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_166(&(Local_14.f_3[iVar0]), 0))
		{
			switch (&iLocal_181[iVar0])
			{
				case 0:
					if (func_33(cParam0) < iLocal_210)
					{
						set_blocking_of_non_temporary_events(&(Local_14.f_3[iVar0]), false);
						set_ped_config_flag(&(Local_14.f_3[iVar0]), 168, true);
						set_ped_config_flag(&(Local_14.f_3[iVar0]), 130, false);
						if (does_scenario_exist_in_area(func_2129(0, iVar0), 5f, false, 0, false))
						{
							task_use_nearest_scenario_to_coord_warp(&(Local_14.f_3[iVar0]), func_2129(0, iVar0), 5f, 0, true, false, true, false);
						}
						else
						{
							func_2130(&(Local_14.f_3[iVar0]), -22664287, 0, 0, 0, -1082130432);
						}
						iLocal_181[iVar0] = 1;
					}
					break;
				case 1:
					if (!func_1565(&(Local_14.f_3[iVar0]), 1647992574) && !is_ped_fleeing(&(Local_14.f_3[iVar0])))
					{
						func_27(vLocal_291[iVar0], 0);
						if (func_1275(vLocal_291[iVar0], 3f))
						{
							_task_use_nearest_scenario_to_coord(&(Local_14.f_3[iVar0]), func_2129(0, iVar0), 5f, 0, true, false, true, false);
							func_232(vLocal_291[iVar0]);
						}
					}
					if (func_33(cParam0) >= iLocal_205)
					{
						set_blocking_of_non_temporary_events(&(Local_14.f_3[iVar0]), true);
						set_ped_can_be_targetted(&(Local_14.f_3[iVar0]), false);
						_0xeeed8fafec331a70(&(Local_14.f_3[iVar0]), Global_36, 2);
						task_cower(&(Local_14.f_3[iVar0]), -1, 0, 0);
						iLocal_181[iVar0] = 2;
					}
					break;
				case 2:
					vVar1 = { get_entity_coords(&(Local_14.f_3[iVar0]), true, false) };
					if ((is_bullet_in_area(vVar1, 30f, false) || func_900(&(Local_14.f_3[iVar0]), Global_35, 20f, 1)) || func_33(cParam0) >= iLocal_207)
					{
						open_sequence_task(&iLocal_628);
						if (iVar0 == 0 || iVar0 == 1)
						{
							task_follow_nav_mesh_to_coord(0, -1763.937f, -389.0887f, 156.7208f, 3f, 20000, 2f, 8193, 40000f);
						}
						if (iVar0 == 2 || iVar0 == 9)
						{
							task_follow_nav_mesh_to_coord(0, -1780.274f, -421.6139f, 154.0527f, 3f, 20000, 2f, 8193, 40000f);
						}
						task_smart_flee_ped(0, Global_35, 300f, -1, 1, 1077936128, 0);
						task_set_blocking_of_non_temporary_events(0, false);
						func_1570(&(Local_14.f_3[iVar0]), &iLocal_628, 0f, 2f, 1, 1);
						set_ped_keep_task(&(Local_14.f_3[iVar0]), true);
						iLocal_181[iVar0] = 3;
					}
					break;
				case 3:
					if (!func_900(&(Local_14.f_3[iVar0]), Global_35, 100f, 1))
					{
						set_blocking_of_non_temporary_events(&(Local_14.f_3[iVar0]), false);
						set_ped_can_be_targetted(&(Local_14.f_3[iVar0]), true);
						func_1940(Local_14.f_3[iVar0], 1);
						iLocal_181[iVar0] = 4;
					}
					break;
				case 4:
					break;
			}
		}
		iVar0++;
	}
}

void func_1561()
{
	if (!func_187(256))
	{
		if (_0xb16223cb7da965f0(player_id()))
		{
			func_470(256);
		}
	}
}

bool func_1562(int iParam0, bool bParam1)
{
	if (bParam1 && !func_10(iParam0))
	{
		return false;
	}
	iVar0 = func_199(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_1563(char[4] cParam0)
{
	vVar0 = { -1811.99f, -354.05f, 163.64f };
	if (!does_entity_exist(iVar426))
	{
		if (iVar768 == 0)
		{
			uLocal_771 = _0x6f3068258a499e52(-1321878957, vVar0, 7);
		}
		if (iVar768 != 0 && _0x1ff441d7954f8709(iVar768))
		{
			if (does_entity_exist(_0x4735e2a4bb83d9da(iVar768)))
			{
				iLocal_429 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(iVar768));
				if (does_entity_exist(iVar426))
				{
					if (func_120(cParam0, 4))
					{
						set_entity_coords(iVar426, -1811.99f, -354.05f, 163.64f, true, false, true, true);
						set_entity_rotation(iVar426, 0.13f, 0.4f, 109.57f, 2, true);
					}
				}
			}
		}
	}
}

void func_1564(bool bParam0)
{
	if (bParam0)
	{
		func_2131(4);
	}
	func_2131(2);
	set_bit(&(Global_1956580->f_1), 0);
}

bool func_1565(int iParam0, int iParam1)
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

bool func_1566()
{
	if (func_2132(&(uLocal_491[1])) > 0)
	{
		return true;
	}
	return false;
}

int func_1567(var uParam0, float fParam1)
{
	if ((((((!is_player_dead(player_id()) && is_player_playing(player_id())) && !is_player_free_aiming(player_id())) && !is_player_targetting_anything(player_id())) && !is_ped_aiming_from_cover(Global_35)) && !is_ped_shooting(Global_35)) && !is_ped_reloading(Global_35))
	{
		if (!func_26(uParam0))
		{
			func_232(uParam0);
		}
		else if (func_1283(uParam0) >= fParam1)
		{
			return 1;
		}
		else if (((fParam1 > 15f && func_2133(Global_35)) && is_ped_human(get_ped_index_from_entity_index(func_2134(Global_35)))) && func_1283(uParam0) < (fParam1 - 15f))
		{
			func_598(uParam0, (fParam1 - 15f));
		}
	}
	else if (func_26(uParam0))
	{
		func_653(uParam0);
	}
	return 0;
}

void func_1568(char[12] cParam0)
{
	Global_1934266->f_78.f_67 = { cParam0 };
}

bool func_1569(int iParam0)
{
	func_1108(iParam0, 0, 0);
	if (func_1109(iParam0))
	{
		return door_system_get_door_state(iParam0) == 0;
	}
	return false;
}

void func_1570(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_1571()
{
	switch (iVar800)
	{
		case 1:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				func_2135(&(Local_14.f_16[iVar0]), 1, iVar0);
				iVar0++;
			}
			iLocal_802 = 11;
			break;
		case 11:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_2135(&(Local_14.f_77[iVar0]), 11, iVar0);
				iVar0++;
			}
			iLocal_802 = 2;
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_2135(&(Local_14.f_24[iVar0]), 2, iVar0);
				iVar0++;
			}
			iLocal_802 = 5;
			break;
		case 5:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_2135(&(Local_14.f_42[iVar0]), 5, iVar0);
				iVar0++;
			}
			iLocal_802 = 7;
			break;
		case 7:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_2135(&(Local_14.f_53[iVar0]), 7, iVar0);
				iVar0++;
			}
			iLocal_802 = 8;
			break;
		case 8:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				func_2135(&(Local_14.f_60[iVar0]), 8, iVar0);
				iVar0++;
			}
			iLocal_802 = 9;
			break;
		case 9:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				func_2135(&(Local_14.f_65[iVar0]), 9, iVar0);
				iVar0++;
			}
			iLocal_802 = 10;
			break;
		case 10:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_2135(&(Local_14.f_70[iVar0]), 10, iVar0);
				iVar0++;
			}
			iLocal_802 = 4;
			break;
		case 4:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_2135(&(Local_14.f_36[iVar0]), 4, iVar0);
				iVar0++;
			}
			iLocal_802 = 1;
			break;
	}
}

void func_1572(int iParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	if (!_0x23e33cb9f4a3f547(iParam0, sParam1))
	{
		if (!_is_anim_scene_loaded(iParam0, true, false))
		{
			if (!_is_anim_scene_loading(iParam0, true))
			{
				load_anim_scene(iParam0);
			}
			else if ((get_frame_count() % 30) == 0)
			{
			}
		}
		else if (!_0x0df57f86fe71dbe5(iParam0, sParam1))
		{
			_0xdf7b5144e25cd3fe(iParam0, sParam1);
		}
		else if ((get_frame_count() % 30) == 0)
		{
		}
	}
}

bool func_1573()
{
	if (func_187(33554432))
	{
		return true;
	}
	if (is_entity_dead(iVar417))
	{
		return false;
	}
	if (is_entity_dead(iVar420))
	{
		return false;
	}
	if (!does_entity_exist(iVar425))
	{
		iLocal_427 = create_object(-1189470495, -1811.077f, -354.2801f, 164.4462f, true, true, false, false, true);
		return false;
	}
	if (_does_anim_scene_exist(&(iLocal_522[12])))
	{
		set_anim_scene_entity(&(iLocal_522[12]), "CS_MicahBell", iVar417, 0);
		set_anim_scene_entity(&(iLocal_522[12]), "cs_unidusterjail_01", iVar420, 0);
		set_anim_scene_entity(&(iLocal_522[12]), "p_key02x", iVar425, 0);
		set_anim_scene_entity(&(iLocal_522[12]), "player_zero", Global_35, 0);
		func_470(33554432);
		return true;
	}
	else
	{
		iLocal_522[12] = _create_anim_scene("script@story@utp1@ig@ig_13_micah_cell_door@ig_13_micah_cell_door", 0, 0, false, true);
	}
	return false;
}

void func_1574(char[4] cParam0)
{
	if (func_33(cParam0) == iLocal_206)
	{
		if (!func_399(iVar518, 1))
		{
			if ((func_266(Local_14.f_22) && func_2136(Local_14.f_22, Global_35, 37f)) || (func_266(Local_14.f_40) && func_2136(Local_14.f_40, Global_35, 37f)))
			{
				report_police_spotted_player(player_id());
				func_426(&uLocal_521, 1);
			}
		}
	}
	else if (func_33(cParam0) == iLocal_207)
	{
		if (!func_399(iVar518, 2))
		{
			if (func_266(Local_14.f_58) && func_2136(Local_14.f_58, Global_35, 37f))
			{
				report_police_spotted_player(player_id());
				func_426(&uLocal_521, 2);
			}
		}
	}
	else if (func_33(cParam0) == iLocal_208)
	{
		if (!func_399(iVar518, 4))
		{
			if (func_266(Local_14.f_63) && func_2136(Local_14.f_63, Global_35, 37f))
			{
				report_police_spotted_player(player_id());
				func_426(&uLocal_521, 4);
			}
		}
	}
	else if (func_33(cParam0) == iLocal_209)
	{
		if (!func_399(iVar518, 8))
		{
			if (func_266(Local_14.f_68) && func_2136(Local_14.f_68, Global_35, 37f))
			{
				report_police_spotted_player(player_id());
				func_426(&uLocal_521, 8);
			}
		}
	}
	else if (func_33(cParam0) == iLocal_210)
	{
		if (!func_399(iVar518, 16))
		{
			if (func_266(Local_14.f_81) && func_2136(Local_14.f_81, Global_35, 37f))
			{
				report_police_spotted_player(player_id());
				func_426(&uLocal_521, 16);
			}
		}
	}
}

void func_1575(var uParam0)
{
	switch (uParam0->f_6)
	{
		case 0:
			break;
		case 1:
			func_653(&(uParam0->f_2));
			uParam0->f_6 = 2;
			break;
		case 2:
			if (func_1355(uParam0->f_5))
			{
				uParam0->f_6 = 3;
			}
			break;
		case 3:
			if (!func_1355(uParam0->f_5))
			{
				uParam0->f_6 = 4;
			}
			break;
		case 4:
			func_27(&(uParam0->f_2), 0);
			stop_ped_speaking(*uParam0, true);
			uParam0->f_6 = 5;
			break;
		case 5:
			if (func_1275(&(uParam0->f_2), uParam0->f_1))
			{
				stop_ped_speaking(*uParam0, false);
				func_653(&(uParam0->f_2));
				uParam0->f_6 = 6;
			}
			break;
		case 6:
			break;
	}
}

void func_1576(char[4] cParam0)
{
	iVar16 = func_33(cParam0);
	iVar17 = func_132(iVar16);
	iVar18 = func_162(cParam0, iVar16);
	if (cParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2504)
		{
			if (func_229(cParam0->f_8269[iVar19], 1048576))
			{
				if (func_2137(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1464(cParam0->f_8269[iVar19]);
				}
				else if (func_2138(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_239(cParam0->f_8269[iVar19]);
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
			if (func_229(cParam0->f_8269.f_641[iVar19], 1048576))
			{
				if (func_2139(cParam0, cParam0->f_8269.f_641[iVar19], iVar16, iVar17, iVar18, 1))
				{
					func_2140(cParam0->f_8269.f_641[iVar19]);
					if (iVar19 < (cParam0->f_8269.f_2505 - 1))
					{
						_copy_memory(cParam0->f_8269.f_641[iVar19], cParam0->f_8269.f_641[(cParam0->f_8269.f_2505 - 1)], 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
					}
				}
			}
		}