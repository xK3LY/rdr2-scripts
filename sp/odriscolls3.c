void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_131 = -1679307491;
	fLocal_774 = 1f;
	StringCopy(&cLocal_1166, "DRUNK_SHAKE", 16);
	iLocal_1177 = -1;
	fLocal_1226 = 0.5f;
	fLocal_1227 = 0.5f;
	fLocal_1228 = 0.5f;
	fLocal_1256 = 0f;
	fLocal_1257 = 0.5f;
	fLocal_1258 = 0.5f;
	fLocal_1259 = 0.5f;
	fLocal_1260 = 0f;
	iLocal_1301 = 33;
	iLocal_1302 = -1118946704;
	iLocal_1306 = -1;
	iLocal_1326 = 8225;
	vLocal_1328 = { -1210.37f, -712.323f, 72.118f };
	vLocal_1331 = { 42f, -18f, 198f };
	vLocal_1334 = { 4.5f, 10f, 4.5f };
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_1490, 1073741824);
		func_2(&uLocal_1490, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_1490);
	func_5(&uLocal_1490);
	while (!func_6(&uLocal_1490, -2147483648))
	{
		func_7(&uLocal_1490);
		wait(0);
	}
	while (!func_2(&uLocal_1490, 0))
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
	iLocal_88 = func_125(uParam0);
	iLocal_88 = iLocal_88;
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
	func_163(0);
	func_164(0);
	if (_0x7409669c5ed50144(-1392528840))
	{
		_0x50b72a754ee64a71(-1392528840);
	}
	if (func_165(152))
	{
		func_166();
	}
	if (func_165(27))
	{
		_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
	}
	if (_0x927b810e43e99932(&Local_1202))
	{
		_0x0a5a4f1979abb40e(&Local_1202);
	}
	if (_0xdd0b7c5ae58f721d(&Local_1202))
	{
		_0x798be43c9393632b(&Local_1202);
	}
	func_167(0);
	func_168(0);
	func_169(1);
	func_170(0);
	func_171(1);
	func_172(0);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_173(iVar0, 0);
		iVar0++;
	}
	func_174(0);
	if (does_group_exist(iVar1176))
	{
		remove_group(iVar1176);
	}
	remove_all_cover_blocking_areas();
	_0x2412216fcc7b4e3e("script@Story@DST3@return_to_camp");
	set_random_trains(true);
	end_srl();
	func_175(1);
	if (!func_22(uParam0) == 0)
	{
		_display_hud_component(724769646);
		_display_hud_component(iLocal_131);
	}
	else
	{
		func_1(uParam0, 8);
	}
	set_entity_visible(Global_35, true);
	_0x95ee1dee1dcd9070(player_id(), 1);
	_0xa63fcad3a6fec6d2(player_id(), 1);
	_0xc67a4910425f11f1(player_id(), 0);
	stop_ped_speaking(Global_35, false);
	func_176(108);
	func_167(0);
	_0x67e21acc5c0c970c(Global_35, 0, true);
	func_177();
	func_60(0);
	func_178();
	func_179(1);
	func_180(uParam0, 1);
	func_113(1);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_181();
	func_182();
	func_183();
	func_184(uParam0, 0, 55, func_165(5));
	if (func_185(Global_35, -2108652971))
	{
		clear_ped_tasks(Global_35, 1, 0);
	}
	if (!is_entity_dead(Global_35))
	{
		if (is_player_playing(player_id()))
		{
			set_player_forced_aim(player_id(), false, 0, -1, false);
		}
		if (is_entity_attached(Global_35))
		{
			if (!is_ped_on_mount(Global_35))
			{
				detach_entity(Global_35, true, true);
			}
		}
		_0x9851de7aec10b4e1(get_entity_coords(Global_35, true, false), 100f, 1, 1);
	}
	iVar1 = 0;
	while (iVar1 < iVar1304)
	{
		if ((!is_entity_dead(Local_1307[iVar1]->f_7) && is_entity_a_mission_entity(Local_1307[iVar1]->f_7)) && does_entity_belong_to_this_script(Local_1307[iVar1]->f_7, true))
		{
			delete_mission_train(&(Local_1307[iVar1]->f_7));
			func_186(&(Local_1307[iVar1]));
		}
		iVar1++;
	}
	if (_0x0b7cb1300cbfe19c(Global_35, 1))
	{
		stop_anim_playback(Global_35, 0, false);
	}
	if (func_187(Global_35, 0))
	{
		if (!is_ped_injured(Global_35))
		{
			clear_ped_tasks(Global_35, 1, 0);
			clear_ped_secondary_task(Global_35);
		}
	}
	render_script_cams(false, false, 3000, true, false, 0);
	func_182();
	clear_weather_type_persist();
	set_time_scale(1f);
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
	if (!is_entity_dead(Global_35) && _is_ped_hogtied(Global_35))
	{
		_0x79559bad83ccd038(Global_35, 3, 0, 0, 0, 1090519040);
	}
	set_player_control(player_id(), true, 0, false);
	if (_0x083d497d57b7400f(Global_35))
	{
		freeze_entity_position(Global_35, false);
	}
	func_188(0);
	pause_clock(false, 0);
	if (!is_entity_visible(Global_35))
	{
		set_entity_visible(Global_35, true);
	}
	func_176(13);
	Local_133[7] = 0;
	func_189(7, 32);
	func_58(uParam0, 1);
	func_190(7, 0);
	func_191(1024);
	func_192(7);
	if (func_22(uParam0) == 0)
	{
		func_193((*Global_1835011)[uParam0->f_607]->f_1, 1);
	}
	else
	{
		func_193((*Global_1835011)[uParam0->f_607]->f_1, 0);
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		func_194(iVar2, 0);
		iVar2++;
	}
	if (_0xde0ea444735c1368(Local_89.f_20))
	{
		_0x2c87c3e1c7b96ee2(Local_89.f_20);
	}
	func_195();
	func_196();
	func_197();
	iVar3 = 0;
	while (iVar3 <= 2)
	{
		animpostfx_stop(func_198(iVar3));
		iVar3++;
	}
	if (func_199(func_22(uParam0)))
	{
		func_200(uParam0->f_607, 0, 12, 0);
	}
	if (func_22(uParam0) == 0)
	{
		if (_0x7c7e4ab748ea3b07())
		{
			func_201(0);
			func_202(func_12(23), 451);
		}
		func_203(0);
		func_204(3, 24, 0, 0);
	}
	func_205(-508205317);
	func_206(0);
	if (func_22(uParam0) == 0)
	{
		func_207(200f, 0, 0, 1);
		func_208(200f, 0, 0, 1);
		func_209(200f, 0, 0, 1);
	}
	func_210(0);
	func_39(1);
	if (func_82(32768))
	{
		_display_hud_component(iLocal_131);
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
	iVar0 = func_211(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_212(iVar0);
	*iParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_213(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (!func_214(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_215(iParam0) && !func_216(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_217(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_215(iParam0))
	{
		iParam2 = -1;
	}
	if (func_218(iParam0) == 3 || (func_218(iParam0) == 1 && _0x01f4d242765c6b24(func_217(iParam0))))
	{
		func_220(func_219(iParam0), func_217(iParam0), iParam2);
		if ((!func_214(Global_1572864->f_8) && !func_221(0, 1, 0)) && !func_222(&Global_1935630, 32768))
		{
			iVar0 = func_223(iParam0);
			if (iVar0 != -1)
			{
				func_224(0);
			}
			else if (func_219(iParam0) == 8)
			{
				iVar0 = func_225();
				if (iVar0 != -1)
				{
					func_224(0);
				}
			}
		}
	}
	func_226(iParam0, 0);
	if (func_227(0) == iParam0)
	{
		func_40(1);
		func_228(0);
		func_229(1);
	}
	func_230(iParam0, 1);
	func_231(iParam0);
}

void func_14()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_232(0);
	func_233(0);
	func_64(0);
	func_65(0);
	func_234(0);
	func_235(1f);
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
		func_236();
	}
	_0xa0cefcea390aab9b(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_237())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_238())
		{
			func_113(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_17(var uParam0, bool bParam1)
{
	Var0 = func_217(func_12(uParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(uParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_239(0);
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
		func_240(iVar0, iParam0);
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
		if (func_241((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_242((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_242((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_242((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(float fParam0)
{
	return func_243(*fParam0, 1);
}

void func_27(float fParam0, bool bParam1)
{
	if (bParam1 || !func_26(fParam0))
	{
		func_244(fParam0);
	}
}

bool func_28(var uParam0, bool bParam1)
{
	if (func_8(uParam0, 128) && func_29())
	{
		return true;
	}
	if (func_245(&(uParam0->f_13118)) >= 4000)
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
	func_246(!func_6(uParam0, 32), 1);
	func_1(uParam0, 32);
}

bool func_31(var uParam0)
{
	return true;
}

bool func_32()
{
	return func_214(Global_1572864->f_8);
}

int func_33(var uParam0)
{
	return uParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	Var4 = { func_247(iParam0) };
	Var0 = { Var4 };
	Var0.f_3 = Var4.f_3;
	return Var0;
}

int func_35(var uParam0)
{
	return func_248(uParam0, func_33(uParam0));
}

void func_36(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_232(0);
	func_249(func_12(uParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_241((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_250((*uParam0)[iVar0]);
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
			func_251(iVar0, 4096);
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
		func_252(Global_1935630, 4194304);
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
	func_253();
	func_254();
	func_255();
	func_256();
}

void func_43()
{
	if (func_257())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_258(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_259();
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
	func_260(1, iParam0, iParam1);
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
	return (func_261() || func_54());
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
	func_262(uParam0);
	func_263(uParam0, 0);
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
		func_264(iVar0);
		iVar0++;
	}
	func_265();
	func_266();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	if (func_267())
	{
		if (func_268(255))
		{
			if (!func_269(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_270(Global_1894899->f_2) && func_271(Global_1894899->f_2))
		{
			func_272(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_273(16);
			}
		}
		else if (func_270(Global_1894899->f_2) && !func_274(Global_1894899->f_2, 2))
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
		func_275(16);
		func_276();
		if (bVar0)
		{
			func_275(1);
		}
	}
}

void func_56(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_277(uParam0->f_5423[iVar0]))
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
	if (func_278(uParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_279(uParam0->f_5421))
		{
			iVar1 = func_280(uParam0->f_5421, iVar0);
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
		if (func_281(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_282(uParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(var uParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_283(uParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_284(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_285(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_286(7);
		}
		else
		{
			func_287(iVar0, 0);
		}
		func_288(uParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_289(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_189(iParam0, 32);
	func_290();
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
	Var0 = { func_291(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_292(iParam0) };
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
		func_234(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_234(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(var uParam0)
{
	func_293(&(uParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_241((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_242((*uParam1)[iVar0], 1);
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
	iVar0 = func_219(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_294(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_295(iVar1))
			{
				if (func_296(iVar1, 4))
				{
					func_297(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_298(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_294(iParam0);
		if (iVar3 == 59)
		{
			func_298(1);
		}
		else if (iVar3 == 61)
		{
			func_298(0);
		}
		else if (iVar3 == 83)
		{
			func_298(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_295(iVar0))
		{
			if (func_296(iVar0, 4))
			{
				if (func_296(iVar0, 16))
				{
					func_299(iVar0, 1);
				}
				if (func_296(iVar0, 8))
				{
					func_300(iVar0, 1);
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
		if (func_301(uParam0) == 0 && iVar0 == 0)
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
		func_302(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_303(uParam0);
	}
}

void func_75(var uParam0)
{
	iVar0 = 0;
	if (func_304(uParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_305(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
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
	if (!func_270(iParam0))
	{
		return;
	}
	bVar0 = func_274(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_306(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_308(iParam0, func_307());
			func_309(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_310(iParam0, 67108864);
		func_308(iParam0, -15);
	}
	func_311(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_312(11);
	}
	else
	{
		func_313(11);
	}
}

void func_80(int iParam0)
{
	if (func_314(iParam0, 0))
	{
		func_204(262144, 5, 0, 1);
		func_315(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_316(101, 7, 1f, 0, 1);
			func_316(89, 7, 1f, 0, 1);
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
	if (!func_214(iParam0))
	{
		return;
	}
	if (func_317(iParam0) == 4)
	{
		func_318(iParam0, func_307());
		if (!func_218(iParam0) == 5 && !func_218(iParam0) == 6)
		{
			if (bParam3)
			{
				func_226(iParam0, 6);
			}
			else
			{
				func_226(iParam0, 5);
			}
			func_231(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_219(iParam0);
	bVar1 = func_20() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_319(0, 2);
		if (!bVar1 && bParam1)
		{
			func_320();
		}
	}
	else
	{
		func_228(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_321(iParam0);
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
				if (bParam1 && func_218(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_294(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_294(iParam0)]->f_8), true);
						}
					}
					else if ((func_294(iParam0) != 95 && func_294(iParam0) != 82) && !func_322((*Global_1347702)[func_294(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_294(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_294(iParam0)]->f_8), true);
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
		func_324(func_294(iParam0), iVar6, func_323());
	}
	else if (iVar0 == 8)
	{
		func_326(func_294(iParam0), iVar6, func_323(), func_325());
	}
	if (!func_218(iParam0) == 5 && !func_218(iParam0) == 6)
	{
		iVar9 = func_327(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_328(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_329(func_294(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_330((iVar10 - 20), 0, iVar10);
					iVar11 = func_330((iVar11 - 10), 0, iVar11);
				}
				func_331(1);
				func_332(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_332(45, 0, 1);
				break;
			case 8:
				iVar10 = func_333(func_294(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_330((iVar10 - 20), 0, iVar10);
					iVar11 = func_330((iVar11 - 10), 0, iVar11);
				}
				func_332(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_334(func_294(iParam0)))
				{
					func_335(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_332(120, 0, 1);
				break;
			case 2:
				func_332(120, 0, 1);
				break;
			case 6:
				func_332(func_337(func_336(iParam0)), 0, 1);
				break;
			case 5:
				func_332(120, 0, 1);
				break;
		}
	}
	func_230(iParam0, 1);
	func_318(iParam0, func_307());
	func_231(iParam0);
	if ((!func_218(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_223(iParam0);
		if (iVar12 != -1)
		{
			func_224(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_225();
			if (iVar12 != -1)
			{
				func_224(0);
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
				switch (func_294(iParam0))
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
				if (func_295(func_294(iParam0)) && func_322((*Global_1347702)[func_294(iParam0)]->f_12, 4))
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
				if (func_294(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_294(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_218(iParam0) == 5 && !func_218(iParam0) == 6)
	{
		if (bParam3)
		{
			func_226(iParam0, 6);
		}
		else
		{
			func_226(iParam0, 5);
		}
		func_231(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_294(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_338();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_339(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(-1267972061);
						func_339(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(1619534881);
						func_339(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(-755457379);
						func_339(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(1015404643);
						func_339(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(-1724192342);
						func_339(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(1310680212);
						func_339(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(-566881549);
						func_339(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(-1753730528);
						func_339(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(147796381);
						func_339(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(-378547623);
						func_339(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(829545206);
						func_339(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(891318243);
						func_339(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_341();
						func_342(967523420);
						func_343();
						func_344();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_345(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_339(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_346(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_346(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_347(304805134, 1, 1);
						if (!func_348((*Global_1347702)[21]->f_15, 1))
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
						func_349();
						break;
					case 26:
						func_350();
						break;
					case 17:
						func_351(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_352())
						{
							func_353(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_354(-514575035, -1))
						{
							iVar15 = func_307();
							func_355(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_356(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_352())
						{
							func_353(1529685685);
						}
						break;
					case 34:
						if (func_352())
						{
							func_353(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_357();
						break;
					case 37:
						func_358();
						if (func_359())
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
						func_360();
						break;
					case 43:
						func_361();
						break;
					case 44:
						if (!func_348((*Global_1347702)[82]->f_15, 1))
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
						if (!func_348((*Global_1347702)[83]->f_15, 1))
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
						func_362();
						break;
					case 59:
						func_363();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_364();
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
						func_365();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_346(451, 0);
						}
						if (!func_366(-1992824800))
						{
							if (func_366(1520110311))
							{
								iVar16 = func_307();
								func_355(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_356(1937177603, iVar16, 1);
							}
						}
						if (func_367(4))
						{
							if (!func_368(684296857, 1, 0))
							{
								iVar17 = func_307();
								func_355(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_356(-1439688706, iVar17, 1);
							}
						}
						func_339(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_339(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_369(89200);
						func_369(2300);
						func_369(2300);
						break;
					case 68:
						func_370();
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
						func_371();
						func_369(-139100);
						break;
					case 69:
						if (func_348((*Global_1347702)[9]->f_15, 1))
						{
							func_369(-6000);
						}
						break;
					case 70:
						func_369(23400);
						func_369(1900);
						func_369(-15000);
						break;
					case 71:
						func_369(-5500);
						break;
				}
				break;
			case 8:
				switch (func_294(iParam0))
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
						func_372();
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
						func_373();
						break;
					case 66:
						func_374();
						func_375();
						break;
					case 67:
						if (!func_376(6))
						{
							func_377(6);
						}
						if (!func_376(3))
						{
							func_377(3);
						}
						if (func_352())
						{
							func_353(1534638301);
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
						if (func_348((*Global_1835011)[69]->f_1, 1))
						{
							func_378(0);
							func_369(40500);
						}
						else
						{
							func_378(0);
							func_369(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_294(iParam0))
				{
					case 0:
						switch (func_336(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_379(iParam0);
		func_380();
		switch (iVar0)
		{
			case 1:
				switch (func_294(iParam0))
				{
					case 4:
						func_381(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_381(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_381(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_381(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_381(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_381(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_381(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_382(iParam0);
						func_381(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_381(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_381(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_368(-2046502963, 1, 0))
						{
							func_339(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_381(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_381(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_381(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_382(iParam0) == 0)
						{
							func_381(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_381(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_322((*Global_1347702)[func_294(iParam0)]->f_12, 536870912))
				{
					func_383(11, 1);
				}
				switch (func_294(iParam0))
				{
					case 109:
						func_381(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_383(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_381(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_381(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_381(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_381(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_384(0, 10, 11, 2116153146))
				{
					func_381(iParam0, func_382(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_384(0, 7, 11, -379687487))
				{
					func_381(iParam0, func_385(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_384(0, 8, 11, -1386089015))
				{
					func_381(iParam0, func_385(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_384(0, 11, 11, -1952009645))
				{
					func_381(iParam0, func_385(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_384(0, 12, 11, 2065895756))
				{
					func_381(iParam0, func_385(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_218(iParam0) == 0)
			{
				if (func_217(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_217(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_220(func_219(iParam0), func_217(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_294(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_387(func_386(Global_1879514->f_1));
						if (iVar0 == 8 && func_294(iParam0) == 58)
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
						if (func_295(func_294(iParam0)) && func_322((*Global_1347702)[func_294(iParam0)]->f_12, 1))
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
			func_388(bParam2, iVar20);
		}
	}
	func_229(1);
	if ((bVar13 || func_129()) && (func_219(iParam0) == 1 || func_219(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_217(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_220(func_219(iParam0), func_217(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_219(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_384(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_389();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_216(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_215(iParam0))
	{
		if (!func_218(iParam0) == 5 && !func_218(iParam0) == 6)
		{
			if (bParam1)
			{
				func_226(iParam0, 6);
			}
			else
			{
				func_226(iParam0, 5);
			}
			func_231(iParam0);
		}
	}
	switch (func_219(iParam0))
	{
		case 1:
			switch (func_294(iParam0))
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
			switch (func_294(iParam0))
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
	vVar2 = { func_390((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_391(vVar2, uVar1, uVar0, 0);
	func_392(vVar2);
	Global_40.f_9.f_15 = func_393(vVar2, 0);
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
	func_394();
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
	func_395(Var10, 0);
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
	if (!func_214(iParam0))
	{
		return;
	}
	if (iParam0 != func_227(0))
	{
		return;
	}
	if (func_217(iParam0) == 0)
	{
	}
	iVar0 = func_219(iParam0);
	if (func_218(iParam0) == 3)
	{
		if (func_217(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_217(iParam0)))
		{
			if (func_219(iParam0) != 1 && func_219(iParam0) != 8)
			{
				func_220(func_219(iParam0), func_217(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_231(iParam0);
	func_40(1);
	func_228(0);
	func_226(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_331(1);
			func_332(15, 0, 1);
			break;
		case 4:
			func_332(10, 0, 1);
			break;
		case 8:
			func_332(10, 0, 1);
			break;
		case 9:
			func_332(10, 0, 1);
			break;
		case 2:
			func_332(10, 0, 1);
			break;
		case 6:
			func_332(10, 0, 1);
			break;
		case 5:
			func_332(10, 0, 1);
			break;
	}
	func_229(1);
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
	if (func_396(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_397(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_397(&(Global_1347343->f_11), 16384);
	}
	if (func_398() >= 2)
	{
		if (!func_396(Global_1347343->f_11, 16384))
		{
			func_397(&(Global_1347343->f_11), 8);
		}
		func_235(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_252(Global_1935630, 2048);
	func_399(bParam5);
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
			func_400(&(uParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		uParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(uParam0->f_7375.f_804);
	}
	if (func_222(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_401(uParam0, 67108864);
	}
}

int func_101(var uParam0)
{
	return func_402(&(uParam0->f_7375));
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
	return func_403() != -1;
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
	func_404(uParam0);
	uParam0->f_634[0] = 62441;
	uParam0->f_634[1] = 62441;
	uParam0->f_637 = 0;
	func_406(uParam0, *uParam1);
	func_407(uParam0);
}

void func_109(var uParam0)
{
	iVar0 = func_408(uParam0, -1074884633, 1);
	if (does_entity_exist(iVar0))
	{
		Local_941[3] = get_object_index_from_entity_index(iVar0);
	}
	iLocal_1177 = func_33(uParam0);
	func_409(&(uParam0->f_7375));
	func_410();
	func_411(uParam0);
	if (&Global_1905942 == -1)
	{
		func_412(Global_35);
	}
}

char[] func_110(int iParam0)
{
	if (!func_213(iParam0))
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
			func_413(iVar0, iVar1);
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
	if (!func_270(iParam0))
	{
		return false;
	}
	return func_274(iParam0, 33554432);
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
	return func_414(uParam0->f_1[func_132(iParam1)]->f_11, iParam2);
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
		func_415(&(uParam0->f_7375));
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
	return func_416(iParam0);
}

bool func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_417(Param0, Param0.f_3);
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
	if (!func_418())
	{
		return false;
	}
	if (!func_348((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_348((*Global_1835011)[2]->f_1, 1) && func_348((*Global_1347702)[120]->f_15, 1)) && !func_348((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_348((*Global_1835011)[37]->f_1, 1) && !func_348((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_348((*Global_1835011)[57]->f_1, 1) && !func_348((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_348((*Global_1835011)[26]->f_1, 1) && !func_348((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_348((*Global_1835011)[62]->f_1, 1) && func_348((*Global_1835011)[63]->f_1, 1)) && !func_348((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_348((*Global_1835011)[75]->f_1, 1) && !func_348((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_348((*Global_1835011)[76]->f_1, 1) && !func_348((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_348((*Global_1835011)[40]->f_1, 1) && func_348((*Global_1835011)[41]->f_1, 1)) && !func_348((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_348((*Global_1835011)[62]->f_1, 1) && func_348((*Global_1835011)[63]->f_1, 1)) && !func_348((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_348((*Global_1835011)[65]->f_1, 1) && func_348((*Global_1835011)[66]->f_1, 1)) && !func_348((*Global_1835011)[67]->f_1, 1))
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
	if (func_419(vParam1))
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
	func_244(&(uParam0->f_603));
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
		return func_420();
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
		func_421(uParam0->f_607);
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
	func_422(&(uParam0->f_638));
	func_423(&(uParam0->f_819));
	func_424(&(uParam0->f_1020));
	func_425(&(uParam0->f_1081));
	func_426(&(uParam0->f_1126));
	func_427(&(uParam0->f_5147));
	func_428(&(uParam0->f_1124));
	func_429(&(uParam0->f_5188));
	func_430(&(uParam0->f_5239));
	func_431(&(uParam0->f_5249));
	func_432(&(uParam0->f_5265));
	func_433(&(uParam0->f_5286));
}

void func_138(var uParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		Local_14 = create_itemset(true);
	}
	func_434(uParam0, 519003277, 2048);
	func_434(uParam0, 326498975, 2048);
	func_434(uParam0, -1127014626, 2048);
	func_434(uParam0, -1074884633, 2048);
	func_434(uParam0, 2030804811, 2048);
	func_434(uParam0, 1944593012, 2048);
	func_434(uParam0, -566878875, 2048);
	func_434(uParam0, 225514697, 2048);
	func_434(uParam0, 347599949, 2048);
	func_434(uParam0, 50483426, 2048);
	func_434(uParam0, -1273613561, 2048);
	func_434(uParam0, -763072541, 2048);
	func_434(uParam0, -164452766, 2048);
	func_434(uParam0, 519003277, 2048);
	func_434(uParam0, 326498975, 2048);
	func_434(uParam0, -1127014626, 2048);
	func_434(uParam0, -1074884633, 2048);
}

int func_139(var uParam0)
{
	vLocal_470[0]->f_2 = 524295;
	vLocal_470[1]->f_2 = 524295;
	vLocal_470[2]->f_2 = 1;
	vLocal_470[3]->f_2 = 524288;
	vLocal_470[4]->f_2 = 524288;
	vLocal_470[5]->f_2 = 524289;
	vLocal_470[6]->f_2 = 524288;
	vLocal_470[7]->f_2 = 524288;
	vLocal_470[8]->f_2 = 524288;
	vLocal_470[11]->f_2 = 6;
	vLocal_470[10]->f_2 = 6;
	vLocal_470[12]->f_2 = 7;
	vLocal_470[24]->f_2 = 1;
	vLocal_470[12]->f_2 = 192;
	vLocal_470[69]->f_2 = 16;
	vLocal_470[70]->f_2 = 16;
	vLocal_470[71]->f_2 = 16;
	vLocal_470[96]->f_2 = 16;
	vLocal_470[91]->f_2 = 2;
	vLocal_470[93]->f_2 = 2;
	func_435(uParam0, 32);
	return 1;
}

void func_140(var uParam0, int iParam1, int iParam2)
{
	func_436(&(uParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(var uParam0)
{
	func_103(uParam0, 2);
	func_103(uParam0, 1);
}

void func_142(var uParam0, int iParam1)
{
	func_437(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_291(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_292(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_145(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_438(&(uParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(var uParam0)
{
	if (!func_278(uParam0->f_5421))
	{
		uParam0->f_5421 = { func_439() };
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
	func_440(&(uParam0->f_7375), fParam1);
}

void func_150(var uParam0, float fParam1)
{
	func_441(&(uParam0->f_7375), fParam1);
}

void func_151(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_442(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_400(&(uParam0->f_10792), iParam1, sParam2, bParam6);
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
	if (!func_213(iParam0))
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
		if (func_443(uParam0, func_35(uParam0), 0))
		{
			func_140(uParam0, func_35(uParam0), 536870912);
		}
	}
	if (func_8(uParam0, 8192))
	{
		if (!func_8(uParam0, 536870912))
		{
			if (func_444(&(uParam0->f_1126), func_33(uParam0)))
			{
				func_99(uParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_443(uParam0, func_33(uParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_99(uParam0, 8192);
	}
}

void func_157(var uParam0)
{
	if ((((iVar1174 == 1 || iVar1174 == 2) || iVar1174 == 3) || iVar1174 == 4) || iVar1174 == 5)
	{
		_0xf45e46deecf7df6e(14336, 0, 0, -1, -1);
		_0xab0d553fe20a6e25(0f);
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
		set_scenario_ped_density_multiplier_this_frame(0f);
	}
}

bool func_158(var uParam0)
{
	if (func_445(uParam0) < 1)
	{
		func_446(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0);
		func_447(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
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
				func_448(uParam0);
			}
		}
		if (func_120(uParam0, 32))
		{
			func_449(uParam0);
		}
	}
	switch (func_445(uParam0))
	{
		case -1:
		case 0:
			func_450(uParam0, 1);
			break;
		case 1:
			if (func_451(uParam0))
			{
				if (func_120(uParam0, 4096))
				{
					func_450(uParam0, 2);
				}
				else
				{
					func_450(uParam0, 3);
				}
			}
			break;
		case 2:
			if (func_452(uParam0))
			{
				func_450(uParam0, 3);
			}
			break;
		case 3:
			if (func_453(uParam0))
			{
				func_450(uParam0, 4);
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
		func_454(uParam0, 0);
		return true;
	}
	if (func_455(uParam0))
	{
		iVar0 = func_33(uParam0);
		func_107(uParam0, func_35(uParam0));
		if (func_33(uParam0) == 26)
		{
			func_454(uParam0, 0);
			return true;
		}
		else if (func_121(uParam0, iVar0, 128))
		{
			func_455(uParam0);
		}
	}
	return false;
}

int func_162(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_10;
}

void func_163(bool bParam0)
{
	if ((bParam0 && func_165(28)) || (!bParam0 && !func_165(28)))
	{
		return;
	}
	if (bParam0)
	{
		set_bit(&(Global_1956580->f_1), 5);
		func_456(28);
	}
	else
	{
		clear_bit(&(Global_1956580->f_1), 5);
		func_176(28);
	}
}

void func_164(bool bParam0)
{
	if ((bParam0 && func_165(2)) || (!bParam0 && !func_165(2)))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= (37 - 1))
	{
		iVar0 = iVar1;
		if (bParam0)
		{
			func_457(iVar0);
		}
		else
		{
			func_458(iVar0);
		}
		iVar1++;
	}
	if (bParam0)
	{
		func_456(2);
	}
	else
	{
		func_176(2);
	}
}

bool func_165(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	return func_460(&(uLocal_123[iVar1]), func_459(iVar0));
}

void func_166()
{
	disable_control_action(0, -2131587435, false);
}

void func_167(bool bParam0)
{
	if ((bParam0 && func_165(36)) || (!bParam0 && !func_165(36)))
	{
		return;
	}
	if (bParam0)
	{
		if (does_entity_exist(&(Local_133[6])))
		{
			_0x1e017404784aa6a3(&(Local_133[6]), -2104494950);
		}
		if (does_entity_exist(&(Local_133[7])))
		{
			_0x1e017404784aa6a3(&(Local_133[7]), -2104494950);
		}
		_0x0d7fd6a55fd63aef(7, 3, 1);
		_0x0d7fd6a55fd63aef(25, 3, 1);
		_0x0d7fd6a55fd63aef(21, 3, 1);
		_0x0d7fd6a55fd63aef(19, 3, 1);
		_0x0d7fd6a55fd63aef(23, 3, 1);
		_0x0d7fd6a55fd63aef(22, 3, 1);
		_0x0d7fd6a55fd63aef(29, 3, 0);
		func_456(36);
	}
	else
	{
		if (does_entity_exist(&(Local_133[6])))
		{
			_0x2b4ce170de09f346(&(Local_133[6]), -2104494950);
		}
		if (does_entity_exist(&(Local_133[7])))
		{
			_0x2b4ce170de09f346(&(Local_133[7]), -2104494950);
		}
		_0x660a8f876df1d4f8(7);
		_0x660a8f876df1d4f8(25);
		_0x660a8f876df1d4f8(21);
		_0x660a8f876df1d4f8(19);
		_0x660a8f876df1d4f8(23);
		_0x660a8f876df1d4f8(22);
		_0x660a8f876df1d4f8(29);
		func_176(36);
	}
}

void func_168(bool bParam0)
{
	if (bParam0 && func_165(120))
	{
		return;
	}
	if (!bParam0 && !func_165(120))
	{
		return;
	}
	if (bParam0)
	{
		_0x4dbc4873707e8fd6(player_id(), 0.05f, 0.05f, 0.05f);
		_0xcbde59c48f2b06f5(Global_35, -764310200, 0f);
		func_456(120);
	}
	else
	{
		_0xcedc16930526f728(player_id());
		_0x6a190b94c2541a99(Global_35);
		func_176(120);
	}
}

void func_169(int iParam0)
{
	if (!is_entity_dead(Global_35))
	{
		_0xa3716a77dcf17424(Global_35, &(iLocal_781[1]), iParam0);
		_0xa3716a77dcf17424(Global_35, -160924582, iParam0);
	}
}

bool func_170(bool bParam0)
{
	if (bParam0 && func_165(91))
	{
		return true;
	}
	iLocal_1255 = get_interior_at_coords(-859.7f, -742.6f, 56.8f);
	if (!is_valid_interior(iVar1252))
	{
	}
	if (!is_interior_ready(iVar1252))
	{
	}
	if (bParam0)
	{
		if (!is_interior_entity_set_active(iVar1252, "loneMule_CandleOn"))
		{
			activate_interior_entity_set(iVar1252, "loneMule_CandleOn", 0);
		}
		else
		{
			func_462(func_461(16));
			if (!func_463(func_461(16)))
			{
				return false;
			}
			if (iVar1231 == 0)
			{
				iLocal_1234 = _0x6f3068258a499e52(func_464(func_461(16)), -859.7f, -742.6f, 56.8f, 7);
			}
			else if (_0x1ff441d7954f8709(iVar1231))
			{
				Local_941[16] = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(iVar1231));
				if (does_entity_exist(&(Local_941[16])))
				{
					_0xebdc12861d079aba(&(Local_941[16]), 1);
					func_465(&(Local_941[16]->f_1), 1);
					_0x2533f2ab0eb9c6f9(iVar1252, 1);
					_0xfe2b3d5500b1b2e4(iVar1252, 1);
					func_456(91);
					return true;
				}
			}
		}
	}
	else if (is_interior_entity_set_active(iVar1252, "loneMule_CandleOn"))
	{
		if (does_entity_exist(&(Local_941[16])))
		{
			if (!iVar1231 == 0)
			{
				_0xd2b9c78537ed5759(iVar1231);
				iLocal_1234 = 0;
			}
			set_object_as_no_longer_needed(Local_941[16]);
		}
		func_466(func_461(16));
		deactivate_interior_entity_set(iVar1252, "loneMule_CandleOn", true);
		_0x2533f2ab0eb9c6f9(iVar1252, 0);
		_0xfe2b3d5500b1b2e4(iVar1252, 0);
		func_176(91);
	}
	else
	{
		return true;
	}
	return false;
}

void func_171(bool bParam0)
{
	if (is_entity_dead(Global_35))
	{
		return;
	}
	if ((!bParam0 && func_165(29)) || (bParam0 && !func_165(29)))
	{
		return;
	}
	set_ped_can_leg_ik(Global_35, bParam0);
	if (bParam0)
	{
		set_ped_leg_ik_mode(Global_35, 2);
	}
	else
	{
		set_ped_leg_ik_mode(Global_35, 0);
	}
	if (bParam0)
	{
		func_176(29);
	}
	else
	{
		func_456(29);
	}
}

void func_172(bool bParam0)
{
	iVar0 = 1845216;
	iVar1 = 15;
	if (bParam0)
	{
		if (!func_165(148))
		{
			_0xb56d41a694e42e86(Local_89.f_31, iVar0, 0, 0, -1, -1, 0);
			_0x18262cafebb5fbe1(Local_89.f_31, iVar0, 0, 0, -1, -1, 0);
			uLocal_1338 = _0x4c39c95ae5db1329(Local_89.f_31, 0, iVar1);
			_0xc1799fafd2fdf52b(Local_89.f_31, 0, 0, 0);
			_0xe5ef9de716ff737e(Local_89.f_31, 0, 1);
			func_456(148);
		}
	}
	else if (func_165(148))
	{
		_0x74c2b3dc0b294102(Local_89.f_31);
		_0xa1cfb35069d23c23(Local_89.f_31);
		if (_0x91a5f9cbebb9d936(uVar1335))
		{
			remove_scenario_blocking_area(uVar1335, false);
		}
		_0xd17672447692478e(Local_89.f_31, 0);
		_0x5737199af2dc609f(Local_89.f_31, &vVar2, &vVar5);
		set_ped_paths_back_to_original(vVar2, vVar5, 0);
		_delete_volume(Local_89.f_31);
		func_176(148);
	}
}

void func_173(int iParam0, bool bParam1)
{
	if ((bParam1 && func_460(uVar1174, func_459(iParam0))) || (!bParam1 && !func_460(uVar1174, func_459(iParam0))))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			Var0 = { 666.5955f, -1244.908f, 43.1396f };
			Var0.f_3 = 1f;
			if (bParam1)
			{
				create_model_hide(Var0, Var0.f_3, 1600083684, true);
			}
			else
			{
				remove_model_hide(Var0, Var0.f_3, 1600083684, 0);
			}
			break;
		case 1:
			Var0 = { -859.4767f, -742.5208f, 56.7802f };
			Var0.f_3 = 1f;
			if (bParam1)
			{
				create_model_hide(Var0, Var0.f_3, -566994313, false);
				create_model_hide(Var0, Var0.f_3, 376980629, false);
				create_model_hide(Var0, Var0.f_3, -1043865229, false);
				create_model_hide(Var0, Var0.f_3, -1847721789, false);
				create_model_hide(Var0, Var0.f_3, 1665837639, false);
				Var0 = { -860.7357f, -742.3193f, 55.9638f };
				create_model_hide(Var0, Var0.f_3, 488855249, false);
			}
			else
			{
				remove_model_hide(Var0, Var0.f_3, -566994313, 0);
				remove_model_hide(Var0, Var0.f_3, 376980629, 0);
				remove_model_hide(Var0, Var0.f_3, -1043865229, 0);
				remove_model_hide(Var0, Var0.f_3, -1847721789, 0);
				remove_model_hide(Var0, Var0.f_3, 1665837639, 0);
				remove_model_hide(Var0, Var0.f_3, 488855249, 0);
			}
			break;
		case 2:
			if (bParam1)
			{
				create_model_hide(-869.9185f, -733.5781f, 58.8276f, 1f, -1588007813, true);
			}
			else
			{
				remove_model_hide(-869.9185f, -733.5781f, 58.8276f, 1f, -1588007813, 0);
			}
			break;
	}
	if (bParam1)
	{
		func_467(&uLocal_1178, func_459(iParam0));
	}
	else
	{
		func_468(&uLocal_1178, func_459(iParam0));
	}
}

void func_174(bool bParam0)
{
	if ((bParam0 && func_165(24)) || (!bParam0 && !func_165(24)))
	{
		return;
	}
	if (bParam0)
	{
		_0xd47d47efbf103fb8(Global_35, 5);
		func_456(24);
	}
	else
	{
		_0xd47d47efbf103fb8(Global_35, 0);
		func_176(24);
	}
}

void func_175(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

void func_176(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	func_468(uLocal_123[iVar1], func_459(iVar0));
}

void func_177()
{
	iVar0 = 0;
	while (iVar0 < iVar1004)
	{
		func_469(iVar0);
		iVar0++;
	}
}

void func_178()
{
	iVar0 = 0;
	while (iVar0 < iVar1369)
	{
		iVar1 = iVar0;
		if (_does_anim_scene_exist(&(Local_1371[iVar1])) && check_ownership_of_anim_scene(&(Local_1371[iVar1])))
		{
			_delete_anim_scene(&(Local_1371[iVar1]));
		}
		Local_1371[iVar1]->f_1 = 0;
		iVar0++;
	}
}

void func_179(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar772)
	{
		if (does_blip_exist(&(iLocal_775[iVar0])))
		{
			remove_blip(iLocal_775[iVar0]);
		}
		iVar0++;
	}
	if (bParam0)
	{
		iVar1 = 0;
		while (iVar1 <= 55)
		{
			if ((iVar1 == 0 || iVar1 == 1) || !func_470(iVar1) == -1)
			{
			}
			else if (does_blip_exist(Local_133[iVar1]->f_1))
			{
				remove_blip(&(Local_133[iVar1]->f_1));
			}
			iVar1++;
		}
	}
}

void func_180(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < iVar937)
	{
		func_471(uParam0, iVar0, bParam1);
		iVar0++;
	}
	func_472();
}

void func_181()
{
	_0xdd1232b332cbb9e7(4, 1, 0);
}

void func_182()
{
	iVar0 = 0;
	while (iVar0 < iVar1007)
	{
		if (does_cam_exist(&(iLocal_1009[iVar0])))
		{
			func_473(iVar0);
		}
		iVar0++;
	}
}

void func_183()
{
	iVar0 = 0;
	while (iVar0 < iVar935)
	{
		if (does_particle_fx_looped_exist(&(iLocal_937[iVar0])))
		{
			remove_particle_fx(&(iLocal_937[iVar0]), false);
		}
		iVar0++;
	}
	remove_ptfx_asset();
}

void func_184(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		if (iVar0 == 0)
		{
		}
		else if (bParam3)
		{
			if (iVar0 == 1)
			{
			}
			else
			{
				func_474(uParam0, iVar0, 0, 0);
			}
			iVar0++;
		}
	}
}

bool func_185(int iParam0, int iParam1)
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

void func_186(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < _0x635423d55ca84fc8(uParam0))
	{
		iVar1 = _0x8df5f6a19f99f0d5(uParam0, iVar0);
		set_model_as_no_longer_needed(iVar1);
		iVar0++;
	}
}

bool func_187(int iParam0, int iParam1)
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
	if (func_414(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_414(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_414(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_414(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_414(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_414(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_414(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_414(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_188(bool bParam0)
{
	if (bParam0 && func_165(26))
	{
		return;
	}
	if (!bParam0 && !func_165(26))
	{
		return;
	}
	if (bParam0)
	{
		func_475();
		func_476(1);
		func_207(-100f, 1, 0, 1);
		func_208(-100f, 1, 0, 1);
		func_209(-100f, 1, 0, 1);
		func_456(26);
	}
	else
	{
		func_476(0);
		func_207(200f, 1, 0, 1);
		func_208(200f, 1, 0, 1);
		func_209(200f, 1, 0, 1);
		func_477(8);
		func_176(26);
	}
}

void func_189(int iParam0, int iParam1)
{
	iParam0 = func_289(iParam0);
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

void func_190(int iParam0, bool bParam1)
{
	iParam0 = func_289(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_59(iParam0);
	func_478(iParam0);
	func_479(iParam0);
	func_480(iParam0);
	if (func_481(iParam0))
	{
		iVar0 = get_id_of_this_thread();
		if (func_285(iParam0) != iVar0)
		{
			return;
		}
	}
	func_482(iParam0, 4);
	if (bParam1)
	{
		func_482(iParam0, 16);
	}
}

void func_191(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 - (Global_1900383->f_316 && iParam0));
}

void func_192(int iParam0)
{
	iParam0 = func_289(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_189(iParam0, 64);
	func_290();
}

void func_193(int iParam0, bool bParam1)
{
	if (!func_214(iParam0))
	{
		return;
	}
	iVar0 = func_219(iParam0);
	iVar1 = -1;
	iVar2 = 0;
	bVar3 = false;
	if (iVar0 == 1)
	{
		iVar4 = func_294(iParam0);
		if (iVar4 == 23)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (func_483(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_484(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_485(iVar1, iVar2, bVar3);
			}
			iVar1 = 37;
			if (func_486(134, 0) && func_487(1) <= 1)
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 0;
			}
		}
		else if (iVar4 == 16)
		{
			iVar2 = 0;
			if (bParam1)
			{
				if (func_488(134))
				{
					if (func_483(134, iVar2, 0, 0, 0))
					{
					}
					else
					{
						func_484(134, iVar2, 0);
					}
				}
				else
				{
					func_485(134, iVar2, 0);
				}
				if (!func_489(138) && func_488(138))
				{
					if (func_483(138, 1, 0, 0, 0))
					{
					}
					else
					{
						func_484(138, 1, 0);
					}
				}
				else
				{
					func_485(138, 1, 0);
				}
			}
			else
			{
				func_485(134, iVar2, 0);
				func_485(138, 1, 0);
			}
			return;
		}
		else if (iVar4 == 46)
		{
			if (func_489(58))
			{
				iVar1 = 140;
				if (bParam1)
				{
					if (func_483(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_484(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_485(iVar1, iVar2, bVar3);
				}
			}
		}
		else if (iVar4 == 17)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (func_483(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_484(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_485(iVar1, iVar2, bVar3);
			}
			if (func_489(5) && func_490(12))
			{
				iVar1 = 21;
				iVar2 = 1;
				if (bParam1)
				{
					if (func_483(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_484(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_485(iVar1, iVar2, bVar3);
				}
			}
			iVar1 = 138;
			iVar2 = 0;
		}
		else if (iVar4 == 15)
		{
			iVar1 = 63;
			if (bParam1)
			{
				if (func_483(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_484(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_485(iVar1, iVar2, bVar3);
			}
			iVar1 = 59;
			if (bParam1)
			{
				if (func_483(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_484(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_485(iVar1, iVar2, bVar3);
			}
		}
		else if (iVar4 == 33)
		{
			iVar1 = 99;
		}
		else if (iVar4 == 73)
		{
			iVar1 = 10;
			iVar2 = 1;
		}
		else if (iVar4 == 24)
		{
			iVar1 = 21;
			iVar2 = 0;
		}
		else if (iVar4 == 10)
		{
			iVar1 = 63;
			if (bParam1)
			{
				if (func_483(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_484(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_485(iVar1, iVar2, bVar3);
			}
			if ((func_348((*Global_1835011)[11]->f_1, 1) && func_348((*Global_1835011)[14]->f_1, 1)) && func_348((*Global_1347702)[61]->f_15, 1))
			{
				iVar1 = 66;
				iVar2 = 1;
				if (bParam1)
				{
					if (func_483(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_484(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_485(iVar1, iVar2, bVar3);
				}
			}
			iVar1 = 59;
			iVar2 = 0;
		}
		else if (iVar4 == 55)
		{
			iVar1 = 64;
		}
	}
	else if (iVar0 == 8)
	{
		iVar5 = func_294(iParam0);
		if (iVar5 == 0)
		{
			if (func_491(15))
			{
				if (bParam1)
				{
					if (func_492(15, 0, 0))
					{
					}
				}
				else
				{
					func_493(15, 0);
				}
			}
			iVar1 = 97;
		}
		else if (iVar5 == 1)
		{
			iVar1 = 96;
			iVar2 = 1;
		}
		else if (iVar5 == 61)
		{
			if (func_491(15))
			{
				if (bParam1)
				{
					if (func_492(15, 0, 0))
					{
					}
				}
				else
				{
					func_493(15, 0);
				}
			}
			if (func_491(9))
			{
				if (bParam1)
				{
					if (func_492(9, 0, 0))
					{
					}
				}
				else
				{
					func_493(9, 0);
				}
			}
			if (!func_348((*Global_1347702)[63]->f_15, 1))
			{
				iVar1 = 63;
			}
			else
			{
				iVar1 = 97;
				iVar2 = 1;
			}
		}
		else if (iVar5 == 62)
		{
			if (func_491(15))
			{
				if (bParam1)
				{
					if (func_492(15, 0, 0))
					{
					}
				}
				else
				{
					func_493(15, 0);
				}
			}
			if (func_491(9))
			{
				if (bParam1)
				{
					if (func_492(9, 0, 0))
					{
					}
				}
				else
				{
					func_493(9, 0);
				}
			}
			iVar1 = 112;
			if (bParam1)
			{
				if (func_483(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_484(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_485(iVar1, iVar2, bVar3);
			}
			iVar1 = 97;
			if (bParam1)
			{
				if (func_483(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_484(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_485(iVar1, iVar2, bVar3);
			}
			iVar1 = 63;
		}
		else if (iVar5 == 64)
		{
			iVar1 = 65;
			iVar2 = 1;
		}
		else if (iVar5 == 76)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (func_483(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_484(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_485(iVar1, iVar2, bVar3);
			}
			iVar1 = 37;
		}
		else if (iVar5 == 82)
		{
			iVar1 = 83;
			iVar2 = 1;
			bVar3 = true;
		}
		else if (iVar5 == 96)
		{
			iVar1 = 2;
		}
		else if (iVar5 == 84)
		{
			iVar1 = 85;
			iVar2 = 1;
		}
		else if (iVar5 == 97)
		{
			if (func_348((*Global_1835011)[6]->f_1, 1) && func_348((*Global_1835011)[13]->f_1, 1))
			{
				iVar1 = 112;
				iVar2 = 1;
				bVar3 = false;
				if (bParam1)
				{
					if (func_483(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_484(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_485(iVar1, iVar2, bVar3);
				}
			}
			iVar1 = -1;
		}
		else if (iVar5 == 114)
		{
			if (func_348((*Global_1835011)[9]->f_1, 1))
			{
				iVar1 = 0;
				iVar2 = 1;
			}
		}
		else if (iVar5 == 134)
		{
			iVar1 = 95;
			if (bParam1)
			{
				if (func_483(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_484(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_485(iVar1, iVar2, bVar3);
			}
			iVar1 = 138;
		}
	}
	if (iVar1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (func_483(iVar1, iVar2, bVar3, 0, 0))
		{
		}
		else
		{
			func_484(iVar1, iVar2, bVar3);
		}
	}
	else
	{
		func_485(iVar1, iVar2, bVar3);
	}
}

void func_194(int iParam0, bool bParam1)
{
	if ((bParam1 && func_460(uLocal_132, func_459(iParam0))) || (!bParam1 && !func_460(uLocal_132, func_459(iParam0))))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			uVar0 = Local_89.f_23;
			break;
		case 1:
			uVar0 = Local_89.f_22;
			break;
		case 2:
			uVar0 = Local_89.f_25;
			break;
	}
	_0x5737199af2dc609f(uVar0, &vVar1, &vVar4);
	if (bParam1)
	{
		_0xc1799fafd2fdf52b(uVar0, 0, 0, 0);
		set_ped_paths_in_area(vVar1, vVar4, false, 1);
		func_467(&uLocal_132, func_459(iParam0));
	}
	else
	{
		_0xd17672447692478e(uVar0, 0);
		set_ped_paths_back_to_original(vVar1, vVar4, 0);
		func_468(&uLocal_132, func_459(iParam0));
	}
}

void func_195()
{
	_delete_volume(Local_89);
	_delete_volume(Local_89.f_1);
	_delete_volume(Local_89.f_2);
	_delete_volume(Local_89.f_3);
	_delete_volume(Local_89.f_4);
	_delete_volume(Local_89.f_5);
	_delete_volume(Local_89.f_6);
	_delete_volume(Local_89.f_7);
	_delete_volume(Local_89.f_8);
	_delete_volume(Local_89.f_9);
	_delete_volume(Local_89.f_10);
	_delete_volume(Local_89.f_11);
	_delete_volume(Local_89.f_12);
	_delete_volume(Local_89.f_13);
	_delete_volume(Local_89.f_14);
	_delete_volume(Local_89.f_15);
	_delete_volume(Local_89.f_16);
	_delete_volume(Local_89.f_17);
	_delete_volume(Local_89.f_18);
	_delete_volume(Local_89.f_19);
	_delete_volume(Local_89.f_20);
	_delete_volume(Local_89.f_21);
	_delete_volume(Local_89.f_22);
	_delete_volume(Local_89.f_23);
	_delete_volume(Local_89.f_24);
	_delete_volume(Local_89.f_25);
	_delete_volume(Local_89.f_26);
	_delete_volume(Local_89.f_27);
	_delete_volume(Local_89.f_28);
	_delete_volume(Local_89.f_29);
	_delete_volume(Local_89.f_30);
	_delete_volume(Local_89.f_31);
	_delete_volume(Local_89.f_32);
	_delete_volume(Local_89.f_33);
}

void func_196()
{
	iVar0 = 0;
	while (iVar0 < iVar468)
	{
		if (vLocal_470[iVar0]->f_1 == 5 && !&vLocal_470[iVar0] == 3)
		{
		}
		else
		{
			func_466(iVar0);
		}
		iVar0++;
	}
}

void func_197()
{
	iVar0 = 0;
	while (iVar0 < iVar468)
	{
		switch (&vLocal_470[iVar0])
		{
			case 0:
				break;
			case 1:
				if (vLocal_470[iVar0]->f_1 == 1)
				{
					request_model(func_464(iVar0), false);
				}
				else if (vLocal_470[iVar0]->f_1 == 2)
				{
					request_anim_dict(func_494(iVar0, 1));
				}
				else if (vLocal_470[iVar0]->f_1 == 3)
				{
					_0x72d4cb5db927009c(func_495(iVar0), -1, 0);
				}
				else if (vLocal_470[iVar0]->f_1 == 4)
				{
					request_waypoint_recording(func_496(iVar0));
				}
				else if (vLocal_470[iVar0]->f_1 == 5)
				{
					_0x2b6529c54d29037a(func_497(iVar0));
				}
				vLocal_470[iVar0] = 2;
				break;
			case 2:
				if (((((vLocal_470[iVar0]->f_1 == 1 && has_model_loaded(func_464(iVar0))) || (vLocal_470[iVar0]->f_1 == 2 && has_anim_dict_loaded(func_494(iVar0, 1)))) || (vLocal_470[iVar0]->f_1 == 3 && _0xff07cf465f48b830(func_495(iVar0)))) || (vLocal_470[iVar0]->f_1 == 4 && get_is_waypoint_recording_loaded(func_496(iVar0)))) || (vLocal_470[iVar0]->f_1 == 5 && _0x2c04d89a0fb4e244(func_497(iVar0))))
				{
					vLocal_470[iVar0] = 3;
				}
				break;
			case 3:
				break;
			case 4:
				if (vLocal_470[iVar0]->f_1 == 1)
				{
					set_model_as_no_longer_needed(func_464(iVar0));
				}
				else if (vLocal_470[iVar0]->f_1 == 2)
				{
					remove_anim_dict(func_494(iVar0, 1));
				}
				else if (vLocal_470[iVar0]->f_1 == 3)
				{
					_0xc3896d03e2852236(func_495(iVar0));
				}
				else if (vLocal_470[iVar0]->f_1 == 4)
				{
					remove_waypoint_recording(func_496(iVar0));
				}
				else if (vLocal_470[iVar0]->f_1 == 5)
				{
					_0x57a197ad83f66bbf(func_497(iVar0));
				}
				vLocal_470[iVar0] = 0;
				break;
		}
		iVar0++;
	}
}

char* func_198(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ODR3_Injured01Loop";
		case 1:
			return "ODR3_Injured02Loop";
		case 2:
			return "ODR3_Injured03Loop";
	}
	return "";
}

bool func_199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
	}
	return false;
}

void func_200(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_498(0, iParam1, 0, iParam2, iParam3);
}

void func_201(bool bParam0)
{
	if (!bParam0)
	{
		_0xe36d4a38d28d9cfb(0);
		_0x5d6182f3bce1333b(5, -142743235);
		func_499();
		return;
	}
	iVar0 = func_500(1);
	iVar1 = func_500(0);
	Local_1269.f_1 = iVar0;
	Local_1269 = iVar1;
	_0x5d6182f3bce1333b(5, -142743235);
	func_499();
	_0xe36d4a38d28d9cfb(1);
	func_499();
}

void func_202(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return;
	}
	func_501(iParam0, iParam1);
}

void func_203(bool bParam0)
{
	if (Global_43891)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_502(Global_35, iVar0, 0, 1);
		if (is_weapon_valid(iVar1))
		{
			if (_is_weapon_two_handed(iVar1) || func_503(iVar1))
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

void func_204(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_504(Global_1310750[iVar0], iParam0))
		{
			if (!func_505(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_506(iVar0) < func_507(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_316(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_205(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		_remove_imap(iParam0);
	}
}

void func_206(bool bParam0)
{
	if (bParam0)
	{
		func_508(-770240157);
		_0xdfea23ec90113657(-770240157);
		func_509("nav_odriscolls3_cabin");
	}
	else
	{
		func_205(-770240157);
		_0xdd0bc0edcb2162f6(-770240157);
		func_510("nav_odriscolls3_cabin");
	}
}

void func_207(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_20() == 0)
	{
		func_511(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_512(0);
	if (bParam1)
	{
		func_513(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_514();
	}
	if (bParam2)
	{
		fParam0 = func_515(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_517(0, func_516(fParam0, -100f, 100f), bParam1);
}

void func_208(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_20() == 0)
	{
		func_511(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_512(2);
	if (bParam1)
	{
		func_513(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_515(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_517(2, func_516(fParam0, -100f, 100f), bParam1);
}

void func_209(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_20() == 0)
	{
		func_511(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_512(1);
	if (bParam1)
	{
		func_513(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_515(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_517(1, func_516(fParam0, -100f, 100f), bParam1);
}

void func_210(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = -1;
		while (iVar0 <= 26)
		{
			if (!func_518(iVar0))
			{
			}
			else if (func_519(iVar0))
			{
			}
			else
			{
				if ((func_376(iVar0) || iVar0 == 1) || iVar0 == 2)
				{
					func_520(iVar0);
					iLocal_1342[iVar0] = 1;
				}
				if (does_entity_exist(func_521(iVar0)))
				{
					freeze_entity_position(func_521(iVar0), true);
				}
				func_522(iVar0, 1, 1, 1, 1);
			}
			iVar0++;
		}
		if (!func_523(2, 1))
		{
			func_524(2, 1);
			iLocal_1370 = 1;
		}
	}
	else
	{
		iVar0 = -1;
		while (iVar0 <= 26)
		{
			if (!func_518(iVar0))
			{
			}
			else if (func_519(iVar0))
			{
			}
			else
			{
				if (&iLocal_1342[iVar0])
				{
					func_377(iVar0);
				}
				if (does_entity_exist(func_521(iVar0)))
				{
					freeze_entity_position(func_521(iVar0), false);
				}
			}
			iVar0++;
		}
		if (bVar1367)
		{
			func_524(2, 0);
		}
	}
}

int func_211(int iParam0)
{
	return iParam0;
}

void func_212(int iParam0)
{
	if (!func_525(iParam0))
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

bool func_213(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_214(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_215(int iParam0)
{
	iVar0 = func_317(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_216(int iParam0)
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
		iVar0 = func_218(iParam0);
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

int func_217(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_218(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_526(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_219(int iParam0)
{
	if (!func_214(iParam0))
	{
		return 0;
	}
	return func_528(func_527(iParam0));
}

void func_220(int iParam0, int iParam1, int iParam2)
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

bool func_221(int iParam0, bool bParam1, bool bParam2)
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
		if (func_529())
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
		iVar0 = func_294(&(Global_1898164->f_1[0]));
		if (func_295(iVar0) && func_322((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_214(&(Global_1898164->f_1[0])))
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

bool func_222(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_223(int iParam0)
{
	switch (func_219(iParam0))
	{
		case 1:
			iVar0 = func_294(iParam0);
			return func_530(iVar0);
		case 8:
			iVar1 = func_294(iParam0);
			if (func_322((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_531(iVar1);
			}
			break;
	}
	return -1;
}

void func_224(bool bParam0)
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
		func_532(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_533();
		Global_1898077->f_9 = func_534(Global_1894899->f_2);
		func_535(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_225()
{
	if (!func_348((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_348((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_348((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_348((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_348((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_348((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_348((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_226(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return;
	}
	func_536(iParam0, iParam1);
}

int func_227(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_228(bool bParam0)
{
	if (!bParam0 && func_537(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_229(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_230(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_227(0) != iParam0)
	{
		return;
	}
	if (func_538(iParam0))
	{
		if (bParam1)
		{
			func_539(-525676072);
		}
		else
		{
			func_540(-525676072);
		}
	}
}

int func_231(int iParam0)
{
	return func_542(func_541(iParam0));
}

void func_232(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_233(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_234(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_235(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_236()
{
	if (func_10(Global_43801))
	{
		func_11(&Global_43801, 0, 0);
	}
}

bool func_237()
{
	return func_543(_0xc17f69e1418cd11f(3));
}

bool func_238()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_239(int iParam0)
{
	iParam0 = func_289(iParam0);
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

int func_240(int iParam0, int iParam1)
{
	if (!func_544(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_545(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_241(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_242(char* sParam0, bool bParam1)
{
	if (func_241(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_546(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_546(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_546(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_546(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_546(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_546(sParam0, 1);
		return true;
	}
	func_546(sParam0, 1);
	return false;
}

bool func_243(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_244(float fParam0)
{
	func_547(fParam0, 0f);
}

int func_245(float fParam0)
{
	if (!func_26(fParam0))
	{
		return round((fParam0->f_1 * 1000f));
	}
	if (func_548(fParam0))
	{
		return round((fParam0->f_2 * 1000f));
	}
	return (func_549() - round((fParam0->f_1 * 1000f)));
}

void func_246(bool bParam0, bool bParam1)
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
		func_550(0);
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

struct<4> func_247(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { func_551(1, 0) };
			break;
		case 1:
			Var0 = { func_551(1, 1) };
			break;
		case 2:
			Var0 = { func_551(1, 2) };
			break;
		case 3:
			Var0 = { func_551(1, 3) };
			break;
		case 4:
			Var0 = { func_551(1, 4) };
			break;
		case 5:
			Var0 = { func_551(1, 5) };
			break;
		case 6:
			Var0 = { -860.527f, -742.4977f, 57.0047f };
			Var0.f_3 = -113.39f;
			break;
		case 7:
			Var0 = { -862.2938f, -745.3156f, 55.958f };
			Var0.f_3 = 100f;
			break;
		case 8:
			Var0 = { func_551(1, 8) };
			break;
		case 25:
			Var0 = { func_551(1, 9) };
			break;
	}
	return Var0;
}

int func_248(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_9;
}

void func_249(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_219(iParam0) == 1)
	{
		cVar0 = func_110(func_552(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_219(iParam0) == 8)
	{
		cVar0 = func_554(func_553(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_555(1, 1);
	func_556(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_235(1f);
}

void func_250(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_546(sParam0, 2);
}

void func_251(int iParam0, int iParam1)
{
	if (!func_557(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_252(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_253()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_254()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_255()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_256()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_257()
{
	return func_558(get_id_of_this_thread());
}

void func_258(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_175(bParam0);
}

void func_259()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_260(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_261()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_262(var uParam0)
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

void func_263(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_264(int iParam0)
{
	if (!func_559(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_265()
{
	func_560(64);
}

void func_266()
{
	Global_1310750->f_16072 = 0;
}

bool func_267()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_268(int iParam0)
{
	return func_269(23, iParam0);
}

bool func_269(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_561(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_562())
	{
		return func_561(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_561(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_270(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_271(int iParam0)
{
	if (!func_270(iParam0))
	{
		return false;
	}
	return func_274(iParam0, 8);
}

void func_272(int iParam0, int iParam1)
{
	if (!func_270(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_273(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_274(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_275(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_276()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_274(iVar1, 1))
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
			else if (func_274(iVar1, 2))
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
				func_310(iVar1, 11);
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

bool func_277(var uParam0)
{
	if (func_563(uParam0, 1) || func_563(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_278(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_279(struct<2> Param0)
{
	if (!func_278(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_280(struct<2> Param0, int iParam2)
{
	if (!func_278(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_281(int iParam0)
{
	if (!func_518(iParam0))
	{
		return false;
	}
	if (!func_564(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_282(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_518(iParam1))
	{
		return;
	}
	if (!func_281(iParam1))
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
		func_565(uParam0, iParam2);
		func_566(iParam2);
	}
	func_567(iParam1);
	func_568(iParam1, 0);
	func_569(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_283(var uParam0)
{
	return uParam0->f_5411;
}

int func_284(int iParam0)
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

int func_285(int iParam0)
{
	iParam0 = func_289(iParam0);
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

void func_286(int iParam0)
{
	iParam0 = func_289(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_480(iParam0);
	if (func_481(iParam0))
	{
		if (func_285(iParam0) != iVar0)
		{
			return;
		}
	}
	func_478(iParam0);
	func_479(iParam0);
	iVar1 = func_239(iParam0);
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
			if (!func_570(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_571(iParam0);
	}
}

void func_287(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_572(iParam0))
	{
		return;
	}
	iVar0 = func_284(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_480(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_285(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_481(iVar0))
		{
			return;
		}
	}
	func_573(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_288(var uParam0, int iParam1)
{
	uParam0->f_5308 = (uParam0->f_5308 - (uParam0->f_5308 && iParam1));
}

int func_289(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_290()
{
	if (func_574(0))
	{
		func_575(0);
	}
	if (func_574(1))
	{
		func_575(1);
	}
	if (func_574(5))
	{
		func_575(5);
	}
	if (func_574(6))
	{
		func_478(6);
	}
}

struct<2> func_291(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_292(int iParam0)
{
	Var0 = { func_291(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_293(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_294(int iParam0)
{
	if (!func_214(iParam0))
	{
		return -1;
	}
	return func_576(func_527(iParam0));
}

bool func_295(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_296(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_297(int iParam0, bool bParam1)
{
	iVar0 = func_577(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_578(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_578(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_578(iParam0)))
			{
				_uilog_remove_entry(2, func_578(iParam0));
			}
		}
	}
	func_579(iParam0, 4);
	func_579(iParam0, 8);
	func_579(iParam0, 16);
}

void func_298(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_295(iVar0))
		{
			if (func_296(iVar0, 4))
			{
				func_299(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_299(int iParam0, bool bParam1)
{
	if (!func_296(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_577(iParam0), func_578(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_577(iParam0), func_578(iParam0), 2, "");
		func_580(iParam0, 16);
	}
	else
	{
		if (func_296(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_577(iParam0), func_578(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_577(iParam0), func_578(iParam0), 0, "");
		}
		func_579(iParam0, 16);
	}
}

void func_300(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_296(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_577(iParam0), func_578(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_296(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_577(iParam0), func_578(iParam0), 1, "");
		}
		func_580(iParam0, 8);
	}
	else
	{
		if (func_296(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_577(iParam0), func_578(iParam0), 0, "");
		}
		func_579(iParam0, 8);
	}
}

int func_301(var uParam0)
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

void func_302(int iParam0, int iParam1)
{
	if (func_574(0))
	{
		if (func_581(0))
		{
			func_582(0);
		}
	}
	if (func_574(1))
	{
		if (func_581(1))
		{
			func_582(1);
		}
	}
}

void func_303(var uParam0)
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
		if (func_447(uParam0, 0, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_304(var uParam0)
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

void func_305(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_583(iParam0, sParam4, iParam5);
	}
	func_584(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_306(int iParam0)
{
	if (!func_270(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_307()
{
	return &Global_1899515;
}

void func_308(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_309(int iParam0, int iParam1)
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

void func_310(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_311(int iParam0)
{
	if (!func_270(iParam0))
	{
		return;
	}
	if (func_585(iParam0))
	{
		func_586(iParam0);
	}
	else
	{
		func_587(iParam0);
	}
}

int func_312(int iParam0)
{
	if (func_588(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_313(int iParam0)
{
	if (func_589(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_314(int iParam0, int iParam1)
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

void func_315(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_590();
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

void func_316(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_591(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_317(int iParam0)
{
	if (!func_214(iParam0))
	{
		return -1;
	}
	return func_218(iParam0);
}

void func_318(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_319(bool bParam0, int iParam1)
{
	if (!bParam0 && func_537(373691918))
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
	func_228(bParam0);
	return 1;
}

void func_320()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_518(iVar17))
		{
			iVar18 = func_521(iVar17);
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
	func_592(&(Global_1359489->f_55));
	if (func_593(1777191912, 1))
	{
		func_594(1777191912, 1, 0);
	}
}

void func_321(int iParam0)
{
	if (!func_214(iParam0))
	{
		return;
	}
	func_596(iParam0, (func_595(iParam0) + shift_left(1, 16)));
}

bool func_322(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_323()
{
	return func_597() > 0;
}

void func_324(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_598(-1032423150, iParam1);
			break;
		case 18:
			func_598(294066959, iParam1);
			func_598(-1925639563, iParam1);
			func_598(-378582304, iParam1);
			func_598(-338306437, iParam1);
			break;
		case 20:
			func_598(437270255, iParam1);
			break;
		case 2:
			func_598(-304000413, iParam1);
			func_598(-533612796, iParam1);
			func_598(48036954, iParam1);
			break;
		case 23:
			func_598(193108691, iParam1);
			func_598(491732588, iParam1);
			func_598(671962088, iParam1);
			func_599(1);
			break;
		case 16:
			func_598(-1836056650, iParam1);
			func_598(-754657922, iParam1);
			func_598(-1752355838, iParam1);
			func_598(-1375324510, iParam1);
			break;
		case 59:
			func_598(-514392105, iParam1);
			func_598(-822060246, iParam1);
			if (func_600(146))
			{
				func_598(1372748575, iParam1);
			}
			func_599(1);
			break;
		case 76:
			func_598(1991352213, iParam1);
			if (func_601() == 0)
			{
				func_598(1852488616, iParam1);
			}
			else
			{
				func_598(-9866350, iParam1);
			}
			break;
		case 44:
			func_598(863852599, iParam1);
			func_598(1228374935, iParam1);
			func_598(1517889050, iParam1);
			func_598(830657578, iParam1);
			func_598(1901354958, iParam1);
			break;
		case 46:
			func_598(-582805654, iParam1);
			func_598(250378940, iParam1);
			func_598(-2143265426, iParam1);
			break;
		case 17:
			func_598(-941494139, iParam1);
			func_598(1641489521, iParam1);
			break;
		case 19:
			func_598(-1829423531, iParam1);
			func_598(-1590504752, iParam1);
			func_598(1357221321, iParam1);
			break;
		case 21:
			func_598(-1037992610, iParam1);
			func_598(-1286414399, iParam1);
			func_599(0);
			break;
		case 15:
			func_598(-1014460309, iParam1);
			func_598(-1030502825, iParam1);
			break;
		case 33:
			func_598(479388090, iParam1);
			func_598(-1396342239, iParam1);
			func_598(-619618632, iParam1);
			break;
		case 34:
			func_598(1193561641, iParam1);
			break;
		case 64:
			func_598(1363960851, iParam1);
			break;
		case 60:
			func_598(-1232453926, iParam1);
			func_598(-882833584, iParam1);
			break;
		case 73:
			func_598(2023205767, iParam1);
			break;
		case 74:
			func_598(-2135286513, iParam1);
			if (func_601() == 0)
			{
				func_598(33799444, iParam1);
			}
			else
			{
				func_598(-161343203, iParam1);
			}
			break;
		case 8:
			func_598(841639693, iParam1);
			func_598(358952323, iParam1);
			break;
		case 36:
			func_598(852538149, iParam1);
			func_598(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_598(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_598(1116039310, iParam1);
			}
			break;
		case 27:
			func_598(107633428, iParam1);
			func_598(335902282, iParam1);
			func_598(575673055, iParam1);
			func_598(-425944207, iParam1);
			break;
		case 28:
			func_598(-1941530250, iParam1);
			func_598(1399269304, iParam1);
			func_598(1839684664, iParam1);
			func_598(923168503, iParam1);
			func_598(-1485078322, iParam1);
			break;
		case 29:
			func_598(574995900, iParam1);
			func_598(-1691275407, iParam1);
			func_598(-1725307861, iParam1);
			break;
		case 31:
			func_598(-2108383238, iParam1);
			func_598(-1321828931, iParam1);
			func_598(-1632118592, iParam1);
			func_598(334938948, iParam1);
			break;
		case 4:
			func_598(115823701, iParam1);
			func_598(-1896939736, iParam1);
			func_598(-1830746356, iParam1);
			func_598(-1235169781, iParam1);
			func_599(0);
			break;
		case 6:
			func_598(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_598(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_598(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_598(-384176140, iParam1);
			}
			break;
		case 25:
			func_598(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_598(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_598(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_598(-1374849484, iParam1);
			}
			break;
		case 48:
			func_598(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_598(217772674, iParam1);
			}
			else
			{
				func_598(2071798160, iParam1);
			}
			if (func_602(51))
			{
				func_598(-792802286, iParam1);
			}
			break;
		case 49:
			func_598(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_598(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_598(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_598(1402120602, iParam1);
			}
			break;
		case 58:
			func_598(-1661934591, iParam1);
			break;
		case 50:
			func_598(-1713759426, iParam1);
			break;
		case 52:
			func_598(-314799932, iParam1);
			func_598(-462260432, iParam1);
			func_598(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_598(345256028, iParam1);
				func_598(-1635084094, iParam1);
			}
			else
			{
				func_598(114267347, iParam1);
			}
			break;
		case 32:
			func_598(615304157, iParam1);
			break;
		case 47:
			func_598(415434835, iParam1);
			break;
		case 69:
			func_598(1373465877, iParam1);
			if (func_348((*Global_1347702)[9]->f_15, 1))
			{
				func_598(-2058273527, iParam1);
			}
			break;
		case 70:
			func_598(451334985, iParam1);
			if (func_601() == 0)
			{
				func_598(-224150200, iParam1);
			}
			else
			{
				func_598(289012628, iParam1);
			}
			break;
		case 71:
			if (func_601() == 0)
			{
				func_598(-41692120, iParam1);
			}
			else
			{
				func_598(1537840678, iParam1);
			}
			break;
		case 37:
			func_598(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_598(1842132550, iParam1);
			}
			else
			{
				func_598(-785735240, iParam1);
			}
			func_598(-1605690566, iParam1);
			break;
		case 13:
			func_598(-731367459, iParam1);
			func_598(224176585, iParam1);
			func_598(-14545580, iParam1);
			break;
		case 53:
			func_598(1095274522, iParam1);
			break;
		case 54:
			func_598(-572027988, iParam1);
			break;
		case 56:
			func_598(1339307101, iParam1);
			func_598(2102267732, iParam1);
			break;
		case 57:
			func_598(710102686, iParam1);
			break;
		case 22:
			func_598(-1754368482, iParam1);
			func_598(-2071408557, iParam1);
			break;
		case 12:
			func_598(-181334543, iParam1);
			break;
		case 0:
			func_598(-2134669864, iParam1);
			func_598(-548289709, iParam1);
			func_598(-911271922, iParam1);
			func_598(-604455775, iParam1);
			break;
		case 1:
			func_599(1);
			break;
		case 3:
			if (func_359())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_598(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_598(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_325()
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

void func_326(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_598(-145926707, iParam1);
			func_598(-604922090, iParam1);
			func_598(-848690769, iParam1);
			break;
		case 1:
			func_598(-1477631591, iParam1);
			break;
		case 2:
			func_598(76112544, iParam1);
			break;
		case 9:
			func_598(1396404308, iParam1);
			func_598(-1357381228, iParam1);
			if (func_348((*Global_1835011)[69]->f_1, 1))
			{
				func_598(1902679064, iParam1);
			}
			else
			{
				func_598(-2146422425, iParam1);
			}
			break;
		case 22:
			func_598(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_598(-1934184559, iParam1);
				func_598(1281755988, iParam1);
			}
			else
			{
				func_598(-1745220872, iParam1);
				func_598(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_598(-1641504538, iParam1);
				func_598(-988014485, iParam1);
			}
			else if (func_600(26))
			{
				func_598(-343043950, iParam1);
				func_598(-640062214, iParam1);
			}
			else
			{
				func_598(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_598(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_598(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_598(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_598(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_598(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_598(1301690984, iParam1);
				}
			}
			else
			{
				func_598(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_598(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_598(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_598(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_598(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_598(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_598(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_598(-754570528, iParam1);
			}
			else
			{
				func_598(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_598(-2072125821, iParam1);
			}
			else
			{
				func_598(270040030, iParam1);
			}
			break;
		case 37:
			func_598(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_598(-505314737, iParam1);
				func_598(-1853052860, iParam1);
			}
			else
			{
				func_598(-1975624994, iParam1);
				func_598(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_598(1690231002, iParam1);
			}
			else
			{
				func_598(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_598(1225386280, iParam1);
			}
			else if (func_600(54))
			{
				func_598(-283235773, iParam1);
			}
			else
			{
				func_598(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_598(1355398007, iParam1);
			}
			else
			{
				func_598(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_598(574636806, iParam1);
			}
			else
			{
				func_598(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_598(821118338, iParam1);
			}
			else if (func_600(39))
			{
				func_598(846829260, iParam1);
			}
			else
			{
				func_598(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_382((*Global_1835011)[33]->f_1) == 1)
				{
					func_598(1422779093, iParam1);
				}
				else
				{
					func_598(-1769536986, iParam1);
				}
			}
			else
			{
				func_598(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_598(352134789, iParam1);
			}
			else if (func_600(43))
			{
				func_598(260723113, iParam1);
			}
			else
			{
				func_598(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_598(-457958799, iParam1);
			}
			else
			{
				func_598(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_600(41))
			{
				func_598(-546824600, iParam1);
			}
			else
			{
				func_598(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_598(1297261593, iParam1);
			}
			else
			{
				func_598(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_598(2068484886, iParam1);
			}
			else if (func_600(49))
			{
				func_598(-1489080639, iParam1);
				func_598(-2102244050, iParam1);
			}
			else
			{
				func_598(-1863040467, iParam1);
			}
			break;
		case 51:
			func_598(-2055943209, iParam1);
			break;
		case 58:
			if (func_348((*Global_1347702)[23]->f_15, 1))
			{
				func_598(1650066845, iParam1);
			}
			else
			{
				func_598(151370023, iParam1);
			}
			func_598(1426057961, iParam1);
			func_598(476379584, iParam1);
			break;
		case 59:
			func_598(-1638117866, iParam1);
			break;
		case 62:
			func_598(199541730, iParam1);
			break;
		case 63:
			func_598(1703485804, iParam1);
			func_598(-800449045, iParam1);
			break;
		case 65:
			func_598(-1678210868, iParam1);
			func_598(-1448238026, iParam1);
			func_598(-1200864845, iParam1);
			func_598(1473511536, iParam1);
			break;
		case 66:
			func_598(-1774490051, iParam1);
			func_598(-34645921, iParam1);
			func_598(174027075, iParam1);
			func_598(-1155999, iParam1);
			func_599(1);
			break;
		case 67:
			func_598(701612593, iParam1);
			func_598(-1069631343, iParam1);
			func_598(1673428882, iParam1);
			break;
		case 68:
			func_598(-739133286, iParam1);
			func_598(-2130089358, iParam1);
			func_598(2056190391, iParam1);
			func_598(1941753817, iParam1);
			func_599(0);
			break;
		case 70:
			func_598(-1217555753, iParam1);
			break;
		case 71:
			func_598(697048821, iParam1);
			break;
		case 73:
			func_598(-553148661, iParam1);
			break;
		case 75:
			func_598(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_598(1414263863, iParam1);
			}
			else
			{
				func_598(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_598(1835465936, iParam1);
				func_598(523715611, iParam1);
			}
			else if (func_600(78))
			{
				func_598(1420338873, iParam1);
			}
			else
			{
				func_598(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_598(10180941, iParam1);
			}
			else if (func_600(79))
			{
				func_598(768420635, iParam1);
			}
			else
			{
				func_598(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_598(-383601523, iParam1);
			}
			else
			{
				func_598(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_598(1606472408, iParam1);
			}
			else
			{
				func_598(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_598(-203571927, iParam1);
			}
			else
			{
				func_598(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_598(729886222, iParam1);
			}
			else
			{
				func_598(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_598(-714816362, iParam1);
			}
			else
			{
				func_598(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_598(-932932179, iParam1);
				func_598(-1458537240, iParam1);
			}
			else
			{
				func_598(-1764383885, iParam1);
				func_598(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_598(1741466706, iParam1);
			}
			else
			{
				func_598(1405815775, iParam1);
			}
			break;
		case 94:
			func_598(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_598(1905280979, iParam1);
			}
			else
			{
				func_598(-1966245299, iParam1);
			}
			func_598(721468880, iParam1);
			break;
		case 99:
			func_598(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_598(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_598(-1117781095, iParam1);
				}
				else
				{
					func_598(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_598(141494548, iParam1);
			}
			else
			{
				func_598(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_598(-369525697, iParam1);
			}
			else if (func_600(101))
			{
				func_598(1595015219, iParam1);
			}
			else
			{
				func_598(-321486961, iParam1);
			}
			break;
		case 103:
			func_598(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_598(793460477, iParam1);
				func_598(-1610242176, iParam1);
			}
			else if (func_600(103))
			{
				func_598(1830897187, iParam1);
			}
			else
			{
				func_598(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_598(1528309077, iParam1);
			}
			else if (func_600(104))
			{
				func_598(1864966105, iParam1);
			}
			else
			{
				func_598(-103336013, iParam1);
			}
			break;
		case 108:
			func_598(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_598(-1123227713, iParam1);
				func_598(-889574341, iParam1);
			}
			else
			{
				func_598(2065385917, iParam1);
				func_598(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_598(-887421691, iParam1);
			}
			else if (func_600(109))
			{
				func_598(-1318117949, iParam1);
			}
			else
			{
				func_598(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_598(284822762, iParam1);
				}
				else
				{
					func_598(-1425017554, iParam1);
				}
			}
			else if (func_600(110))
			{
				if (&Global_1357515 == 0)
				{
					func_598(553087292, iParam1);
				}
				else
				{
					func_598(-1766870331, iParam1);
					func_598(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_598(-1980598735, iParam1);
			}
			else
			{
				func_598(-442732098, iParam1);
				func_598(1955756409, iParam1);
			}
			break;
		case 115:
			func_598(394303528, iParam1);
			func_598(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_598(1182403394, iParam1);
			}
			else
			{
				func_598(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_598(924445424, iParam1);
			}
			else
			{
				func_598(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_598(430755273, iParam1);
				func_598(-1473879802, iParam1);
			}
			else
			{
				func_598(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_598(73885747, iParam1);
			}
			else if (func_600(117))
			{
				func_598(1559707913, iParam1);
			}
			else
			{
				func_598(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_598(-2103887972, iParam1);
			}
			else if (func_600(118))
			{
				func_598(-435828462, iParam1);
			}
			else
			{
				func_598(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_598(2054486196, iParam1);
			}
			else
			{
				func_598(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_598(-570086056, iParam1);
			}
			else if (func_600(121))
			{
				func_598(32337856, iParam1);
			}
			else
			{
				func_598(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_598(813493663, iParam1);
			}
			else if (func_600(122))
			{
				func_598(-2132763590, iParam1);
			}
			else
			{
				func_598(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_598(-66240572, iParam1);
				func_598(1563075046, iParam1);
			}
			else
			{
				func_598(-787011772, iParam1);
				func_598(-1523377438, iParam1);
			}
			break;
		case 127:
			func_598(61020800, iParam1);
			break;
		case 129:
			func_598(428985222, iParam1);
			break;
		case 131:
			func_598(-1393851036, iParam1);
			break;
		case 133:
			func_598(1559531342, iParam1);
			break;
		case 134:
			func_598(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_598(-1374407408, iParam1);
				}
				else
				{
					func_598(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_598(-472672138, iParam1);
				}
				else
				{
					func_598(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_598(-1678710489, iParam1);
			}
			else
			{
				func_598(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_598(1717582460, iParam1);
			}
			else
			{
				func_598(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_598(1568112362, iParam1);
				func_598(1388317526, iParam1);
			}
			else if (func_600(136))
			{
				func_598(-1597534828, iParam1);
				func_598(-1207918353, iParam1);
			}
			else
			{
				func_598(-1940891082, iParam1);
				func_598(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_598(448334530, iParam1);
				func_598(2145375502, iParam1);
			}
			else
			{
				func_598(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_598(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_598(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_598(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_598(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_598(-66616327, iParam1);
			}
			else
			{
				func_598(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_598(1862916706, iParam1);
			}
			else if (func_600(147))
			{
				func_598(675105199, iParam1);
			}
			else
			{
				func_598(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_598(174409701, iParam1);
			}
			else if (func_600(148))
			{
				func_598(-1730895475, iParam1);
			}
			else
			{
				func_598(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_598(1295237052, iParam1);
			}
			else if (func_600(149))
			{
				func_598(-788577684, iParam1);
			}
			else
			{
				func_598(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_327(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_219(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_552(iParam0);
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
					if (func_382((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_294(iParam0);
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
			iVar3 = func_294(iParam0);
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

int func_328(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_603(iParam0);
	iVar3 = func_604(iParam0);
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
				iVar1 = func_307();
				func_355(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_605(iParam0, 1);
			if (func_606(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_607(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_608(1, iParam0);
				}
				else
				{
					func_609(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_329(int iParam0, int iParam1)
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

int func_330(int iParam0, int iParam1, int iParam2)
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

void func_331(bool bParam0)
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

void func_332(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_610(iParam0, iParam1, bParam2);
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

int func_333(int iParam0, int iParam1)
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

bool func_334(int iParam0)
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

void func_335(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_611(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_612(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_613(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_614(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_613(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_336(int iParam0)
{
	if (!func_214(iParam0))
	{
		return -1;
	}
	return func_615(func_527(iParam0));
}

int func_337(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_338()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_616(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_339(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_617(iParam0, 0))
	{
		return false;
	}
	if (!func_618(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_619(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_620(iParam0, bParam2);
	iVar2 = 0;
	if (func_621(iParam0, 0, 0) == 0)
	{
		if (func_622(iParam0))
		{
			iVar5 = func_623(iParam0);
			iVar6 = func_624(iVar5);
			iVar7 = func_625(iVar6) + 1;
			func_626(iVar5);
			if (func_627(38))
			{
				func_346(483, 0);
			}
			else
			{
				func_346(482, 0);
			}
			if (iVar7 == func_628(iVar6))
			{
				func_339(func_629(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_418() && func_630(4))
				{
					if (func_418() && (func_631(38) || func_627(38)))
					{
						func_633(38, func_629(iVar6), 0, 0, func_632(), 0, -1, 0);
						func_634(2);
					}
					else
					{
						func_633(38, func_629(iVar6), 0, 0, func_632(), 0, -1, 0);
						func_634(1);
					}
				}
			}
			else if (func_418() && func_630(4))
			{
				if (func_418() && (func_631(38) || func_627(38)))
				{
					func_633(38, 0, 0, 0, func_632(), 0, -1, 0);
					func_634(2);
				}
				else
				{
					func_633(38, 0, 0, 0, func_632(), 0, -1, 0);
					func_634(1);
				}
			}
			if (func_418() && func_630(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_418() && (func_631(38) || func_627(38)))
					{
						func_635(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_635(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_636(iParam0) == -1037537535)
	{
		if ((!func_637(iParam0, 866047851) && !func_637(iParam0, -1979000645)) && !func_637(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_638(iParam0, 8388608) && !func_639(28))
	{
		func_640(28);
	}
	if (!bVar3)
	{
		if (func_637(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_641(iParam0) == -1447088266)
			{
				iVar1 = func_643(func_642(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_644(iVar1);
					}
					if (func_645(0) && func_646(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_647(iParam0, iVar0, iParam5);
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
						func_644(iParam0);
					}
					if (func_645(0) && func_646(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_647(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_636(iParam0) == -427144552)
		{
			if (!func_648(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_636(iParam0) == 307971639 && func_649(iParam0))
		{
			if (!func_650(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_637(iParam0, 866047851))
		{
			func_651(iParam0);
		}
		else if (func_637(iParam0, 2000026003))
		{
			func_652(iParam0);
		}
		else if (func_637(iParam0, -103750053))
		{
			func_95(func_653(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_654(-717883113, 2091222383), iVar0);
		}
		else if (func_637(iParam0, -121341956) && !func_637(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_348((*Global_1835011)[4]->f_1, 1))
				{
					func_346(498, 0);
				}
			}
			if (func_637(iParam0, -2017733358) || func_637(iParam0, -1369131378))
			{
				func_655(iParam0);
			}
		}
		else if (func_637(iParam0, -136654233))
		{
			if (func_637(iParam0, -1021472396))
			{
			}
		}
		else if (func_637(iParam0, -1466706512) && func_637(iParam0, 1147021565))
		{
			func_346(484, 0);
		}
		else if (func_637(iParam0, 1147021565) && func_637(iParam0, -524514947))
		{
		}
		else if (func_637(iParam0, 554195525))
		{
		}
		else if (func_637(iParam0, 589988438))
		{
			if (func_656())
			{
				func_657(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_637(iParam0, 787083290) && func_637(iParam0, 949916894))
		{
			func_658(iParam0);
		}
		else if (func_637(iParam0, -1718133314))
		{
			func_659(iParam0);
		}
		else if (func_637(iParam0, -1738650224))
		{
			func_660(iParam0);
		}
		else if (func_637(iParam0, -1112814642) && func_637(iParam0, 949916894))
		{
			func_661(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_637(iParam0, 1841149704))
		{
			func_662();
		}
		else if (func_637(iParam0, 606799272))
		{
			func_663(iParam0, iParam1);
			func_664(iParam0);
		}
		else if (func_637(iParam0, -1112814642) && func_637(iParam0, -1697809989))
		{
			func_665(iParam0, 0, 0, 0);
		}
		else if (func_637(iParam0, -2017733358) || func_637(iParam0, -1369131378))
		{
			func_655(iParam0);
		}
		else if (func_637(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_666(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_637(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_368(215778062, 1, 0))
					{
						func_339(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_368(670273567, 1, 0))
					{
						func_339(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_368(-967317137, 1, 0))
					{
						func_339(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_368(526074061, 1, 0))
					{
						func_339(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_368(-1045488665, 1, 0))
					{
						func_339(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_368(471514780, 1, 0))
					{
						func_339(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_637(iParam0, -839724752) && func_638(iParam0, 4))
		{
			if (!func_627(42))
			{
				func_667(iParam0);
			}
		}
		else if (func_637(iParam0, 1399091007))
		{
			func_668(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_637(iParam0, 1248798204))
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
				func_339(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_640(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_669(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_670(&iVar9, 0))
				{
					func_646(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_669(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_346(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_671();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_672();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_673();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_674();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_675();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_676(499813453, 854119837, 0);
				func_677(499813453, 0);
				func_678(1);
				break;
			case 2127812557:
				func_676(499813453, -1292544588, 0);
				func_677(499813453, 0);
				func_678(2);
				break;
			case 808991383:
				func_676(499813453, -1003325394, 0);
				func_677(499813453, 0);
				func_678(4);
				break;
			case 1134518629:
				func_676(666607663, -335460405, 0);
				func_677(666607663, 0);
				func_679(1);
				break;
			case 902940106:
				func_676(666607663, 903797617, 0);
				func_677(666607663, 0);
				func_679(2);
				break;
			case -418174898:
				func_676(666607663, 669728650, 0);
				func_677(666607663, 0);
				func_679(4);
				break;
			case -648114971:
				func_676(-220219788, 1214120047, 0);
				func_677(-220219788, 0);
				func_680(1);
				break;
			case 211153747:
				func_676(-220219788, 655769340, 0);
				func_677(-220219788, 0);
				func_680(2);
				break;
			case -32876996:
				func_676(-220219788, 885316185, 0);
				func_677(-220219788, 0);
				func_680(4);
				break;
			case 1191437462:
				func_676(218622660, -1491419385, 0);
				func_677(218622660, 0);
				func_681(1);
				break;
			case 1119149048:
				func_676(218622660, 1809565830, 0);
				func_677(218622660, 0);
				func_681(2);
				break;
			case 506073827:
				func_676(390004462, -628873767, 0);
				func_677(390004462, 0);
				func_682(1);
				break;
			case -1876986168:
				func_676(390004462, -405421956, 0);
				func_677(390004462, 0);
				func_682(2);
				break;
			case 2142623221:
				func_676(390004462, -1108972386, 0);
				func_677(390004462, 0);
				func_682(4);
				break;
			case 1508215381:
				func_676(6410548, 1053716392, 0);
				func_677(6410548, 0);
				func_683(1);
				break;
			case -888935280:
				func_676(6410548, 806507056, 0);
				func_677(6410548, 0);
				func_683(2);
				break;
			case -1252474566:
				func_676(6410548, 1571925350, 0);
				func_677(6410548, 0);
				func_683(4);
				break;
			case -1465702449:
				func_676(6410548, 1330352282, 0);
				func_677(6410548, 0);
				func_683(8);
				break;
			case -21093309:
				func_685(242, func_684(-21093309), 0);
				break;
			case 204375141:
				func_685(240, func_684(204375141), 0);
				break;
			case -417963070:
				func_685(241, func_684(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_686(594, 1934060482, 1, 1);
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
					func_686(594, 1110018439, 1, 1);
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
					func_686(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_686(594, -1228016946, 1, 1);
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
					func_686(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_686(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_346(488, 0);
				break;
			case 1613651027:
				func_346(491, 0);
				break;
			case -885810591:
				func_346(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_339(func_687(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_339(func_688(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_639(1))
				{
					func_346(487, 0);
				}
				break;
			case -898386032:
				func_346(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_346(496, 0);
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
		func_689(&iVar10);
		if (!func_690(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_645(0))
		{
			return true;
		}
		if (func_636(iParam0) == -1037537535)
		{
			func_691(iParam0);
		}
		if (func_637(iParam0, -1979000645))
		{
			func_692(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_645(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_339(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_693(iVar2, 0);
		}
	}
	Var35 = { func_694(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_695(iParam0);
	if (fParam6 > 0f)
	{
		if (func_637(iParam0, -839724752))
		{
			func_696(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_697(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_340(int iParam0)
{
	if (func_637(iParam0, 1989861793))
	{
		iVar0 = func_698(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_699(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_700(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_701(iVar14, iVar1);
					if (iVar15 != iParam0 && func_617(iVar15, 0))
					{
						if (func_702(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_703(iVar1);
				if (bVar13)
				{
					func_704(iParam0);
				}
				else
				{
					func_346(306, 0);
				}
			}
		}
	}
}

void func_341()
{
	if (func_20() != -1)
	{
		return;
	}
	func_705();
	func_706();
	func_707();
	func_708();
	func_709();
	func_710();
	func_711();
}

void func_342(int iParam0)
{
	func_712(iParam0, 1, 1, -142743235, 1);
	if (func_713(iParam0))
	{
		func_714(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_716(func_715(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_717(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_718() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_719(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_719(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_720(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_720(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_720(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_720(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_720(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_720(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_720(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_720(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_720(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_721(iVar8, iVar0))
				{
					func_722(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_721(iVar8, iVar0))
		{
			func_722(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_343()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_721(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_718() == -2125499975 || func_718() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_722(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_722(&vVar2, iVar5, iVar0);
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

void func_344()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_616(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_345(int iParam0, bool bParam1)
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
			if ((func_348((*Global_1835011)[59]->f_1, 1) || func_348((*Global_1347702)[1]->f_15, 1)) || func_215((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_593(403634348, 1))
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

void func_346(int iParam0, bool bParam1)
{
	func_723(iParam0, &iVar0, &iVar1);
	if (!func_724(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_725(iVar0, iVar1);
}

void func_347(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_716(iParam0, 1);
	func_726(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_726(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_727(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_726(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_726(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_348(int iParam0, bool bParam1)
{
	switch (func_317(iParam0))
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

void func_349()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_616(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_350()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_616(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_351(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_728(iParam1, 1, 0) };
		iParam3 = func_729(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_730(iParam3);
	return func_669(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_352()
{
	return _unlock_is_unlocked(99890643);
}

void func_353(int iParam0)
{
	if (!func_731(iParam0))
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

bool func_354(int iParam0, int iParam1)
{
	if (!func_732(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_733(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_734(Global_40.f_9910[iParam1], 4);
}

void func_355(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_735(*iParam0);
	iVar1 = func_736(*iParam0);
	iVar2 = func_737(*iParam0);
	iVar3 = func_738(*iParam0);
	iVar4 = func_739(*iParam0);
	iVar5 = func_740(*iParam0);
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
	iVar6 = func_741(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_741(iVar1, iVar0);
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
	func_742(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_356(int iParam0, int iParam1, bool bParam2)
{
	if (!func_732(iParam0))
	{
		return;
	}
	if (!func_743(iParam1))
	{
		return;
	}
	if (func_744(iParam1, 1))
	{
		return;
	}
	iVar0 = func_733(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_354(iParam0, -1))
	{
		return;
	}
	else
	{
		func_745(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_221(0, 0, 1))
		{
			func_388(0, 17);
		}
	}
}

void func_357()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_616(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_358()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_616(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_359()
{
	return _unlock_is_unlocked(-121456797);
}

void func_360()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_616(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_361()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_616(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_362()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_616(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_363()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_616(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_364()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_616(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_365()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_616(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_366(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_367(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_368(int iParam0, int iParam1, bool bParam2)
{
	if (!func_617(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_636(iParam0);
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
		if (!func_746(iParam0, 1))
		{
			return false;
		}
	}
	return func_621(iParam0, 0, bParam2) >= iParam1;
}

void func_369(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_747(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_747(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_370()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_616(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_371()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_616(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_372()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_616(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_373()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_616(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_374()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_616(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_375()
{
	if (func_748() > 1)
	{
		func_749();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_346(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_346(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_346(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_346(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_346(452, 1);
		}
	}
}

bool func_376(int iParam0)
{
	return func_750(iParam0, 4, 1);
}

void func_377(int iParam0)
{
	func_751(iParam0, 4, 1);
}

void func_378(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_379(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (!func_214(iParam0))
	{
		return;
	}
	func_252(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_219(iParam0))
	{
		case 1:
			func_95(func_654(909007663, -587839005), 1);
			iVar0 = func_294(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_530(iVar0))
			{
				case 0:
					func_95(func_654(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_654(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_654(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_654(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_654(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_654(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_654(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_654(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_654(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_654(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_654(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_294(iParam0);
			if (func_322((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_322((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_322((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_654(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_654(909007663, -2049243343), 1);
				}
			}
			if (func_322((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_531(iVar1))
				{
					case 0:
						func_95(func_654(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_654(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_654(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_654(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_654(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_654(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_654(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_654(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_654(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_654(909007663, 532323983), 1);
				}
			}
			else if (func_322((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_322((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_322((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_654(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_654(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_380()
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
	else if (func_222(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_221(0, 0, 1) || func_752()) || func_129())
	{
		return;
	}
	iVar0 = func_225();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_753(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_754(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_754(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_755(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_388(0, -1);
	}
	if (iVar2 > 0)
	{
		func_756("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_757(1, 0);
	Global_1956575->f_4 = 1;
}

void func_381(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_305(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_758(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_382(int iParam0)
{
	if (!func_214(iParam0))
	{
		return -1;
	}
	return func_759(iParam0);
}

int func_383(int iParam0, int iParam1)
{
	if (!func_760(iParam0))
	{
		return 0;
	}
	if (!func_418())
	{
		return 0;
	}
	if (!func_761(iParam0, &iVar0, &iVar1))
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

int func_384(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_762())
	{
		iVar2 = func_762();
	}
	iVar5 = func_763(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_527(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_527(iVar6) == 0)
			{
				return func_764(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_527(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_527(iVar6) == 0)
			{
				return func_764(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_764(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_385(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_765(1330954593, 0, -1);
		case 1:
			return func_765(1330954593, 0, -1);
		case 2:
			return func_765(1330954593, 0, -1) * 2;
		case 4:
			return func_765(1330954593, 0, -1);
		case 5:
			return func_765(1330954593, 0, -1);
		case 6:
			return func_765(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_765(1330954593, 0, -1) * 3;
		case 9:
			return func_765(1330954593, 0, -1) * 3;
		case 10:
			return func_765(1330954593, 0, -1) * 3;
		case 11:
			return func_765(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_386(int iParam0)
{
	if (!func_214(iParam0))
	{
		return cVar0;
	}
	switch (func_219(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_552(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_294(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_384(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_387(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_389();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_219(Global_1879514->f_1) == 1)
			{
				func_383(5, 1);
			}
			else if (func_219(Global_1879514->f_1) == 8 && (func_322((*Global_1347702)[func_294(Global_1879514->f_1)]->f_12, 1) || func_322((*Global_1347702)[func_294(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_383(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_388(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_766(&Global_0, 8);
	}
	if (!func_418() || func_20() != -1)
	{
		return;
	}
	func_766(&Global_0, 1);
}

int func_389()
{
	iVar0 = func_767(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_768(iVar0))
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

Vector3 func_390(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_769(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_419(vVar0))
	{
		vVar0 = { func_769(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_391(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_392(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_393(vector3 vParam0, int iParam3)
{
	iVar0 = func_77();
	if (func_270(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_770(vParam0, iParam3);
}

void func_394()
{
	func_771();
	func_772();
	func_773();
	_0x11b0a0b282fa9b10(0);
}

void func_395(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_774(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_775(&(Param0.f_10)))
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
			func_776(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_396(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_397(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_398()
{
	return Global_1572864->f_12;
}

void func_399(bool bParam0)
{
	if (func_543(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_777();
	Var1.f_3.f_3 = iVar0;
	if ((!func_778(Global_1347343->f_2) && !func_396(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_779();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_396(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_780();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_396(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_781();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_782(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_783(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_397(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_397(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_400(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_784(uParam0);
	iVar0 = func_785(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_786(iParam1);
		}
		iVar0 = func_787(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_788(uParam0);
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
		iVar0 = func_788(uParam0);
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
	func_789(uParam0, 2);
}

void func_401(var uParam0, int iParam1)
{
	func_790(&(uParam0->f_7375), iParam1);
}

int func_402(var uParam0)
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

int func_403()
{
	return func_552(func_791());
}

void func_404(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < func_420())
	{
		func_792(uParam0, iVar0);
		iVar0++;
	}
}

int func_405(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_406(var uParam0, var uParam1)
{
	uParam0->f_607 = uParam1;
}

void func_407(var uParam0)
{
	func_798(uParam0, 0, 1, 117413, 117554, 117629, 118287, 119725, "ODR3_INT", 2, 14);
	func_798(uParam0, 1, 2, 119951, 120386, 120482, 120573, 122766, "", 0, 13);
	func_798(uParam0, 2, 3, 122993, 123390, 123590, 123662, 124598, "ODR3_MCS1", 7186, 13);
	func_798(uParam0, 3, 4, 124811, 124886, 125037, 125085, 126726, "", 2064, 9);
	func_798(uParam0, 4, 5, 126800, 126907, 127391, 127679, 130212, "ODR3_MCS2", 16779282, 3);
	func_798(uParam0, 5, 6, 130227, 130600, 130623, 130643, 130938, "", 16779264, 1);
	func_798(uParam0, 6, 7, 130953, 131185, 131642, 131950, 132289, "", 3072, 2);
	func_798(uParam0, 7, 8, 132337, 132618, 133147, 133291, 135985, "", 0, 29);
	func_798(uParam0, 8, 25, 136133, 136191, 136245, 136357, 136854, "", 1040, 11);
	func_798(uParam0, 25, 26, 136874, 137089, 137281, 137659, 137700, "ODR3_EXT", 3090, 9);
	func_140(uParam0, 26, 16);
}

int func_408(var uParam0, int iParam1, bool bParam2)
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
			if (!decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_844()) && get_entity_model(iVar1) == iParam1)
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

void func_409(var uParam0)
{
	iVar12 = 0;
	while (iVar12 < 65)
	{
		*uParam0->f_13[iVar12] = { Var0 };
		iVar12++;
	}
}

void func_410()
{
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		vLocal_470[iVar0]->f_1 = 1;
		iVar0++;
	}
	iVar0 = 45;
	while (iVar0 <= 81)
	{
		vLocal_470[iVar0]->f_1 = 2;
		iVar0++;
	}
	iVar0 = 82;
	while (iVar0 <= 90)
	{
		vLocal_470[iVar0]->f_1 = 3;
		iVar0++;
	}
	iVar0 = 91;
	while (iVar0 <= 95)
	{
		vLocal_470[iVar0]->f_1 = 4;
		iVar0++;
	}
	iVar0 = 96;
	while (iVar0 <= 100)
	{
		vLocal_470[iVar0]->f_1 = 5;
		iVar0++;
	}
	StringCopy(&Local_1202, "generic_hint_cam", 64);
	StringCopy(&(Local_1202.f_8), "GENERIC_HINT_CAM", 64);
	Local_1307[0]->f_1 = { func_845(7, 0) };
	Local_1307[0]->f_4 = 1;
	Local_1307[1]->f_1 = { func_845(7, 1) };
	Local_1307[1]->f_4 = 0;
	Local_1123[0] = 3.1f;
	Local_1123[1] = &Local_1123[0];
	Local_1123[2]->f_4 = 0f;
	Local_1123[2]->f_5 = 1f;
	Local_1123[2] = 3.75f;
	Local_1123[2]->f_2 = 0.5f;
	Local_1123[2]->f_3 = 0.5f;
	Local_1123[4]->f_4 = 0f;
	Local_1123[4]->f_5 = 1f;
	Local_1123[4] = 9.375f;
	Local_1123[4]->f_2 = 0.5f;
	Local_1123[4]->f_3 = 0.5f;
	Local_1123[5]->f_4 = 0f;
	Local_1123[5]->f_5 = 1f;
	Local_1123[5] = &Local_1123[4];
	Local_1123[5]->f_2 = 0.5f;
	Local_1123[5]->f_3 = 0.5f;
	Local_1123[6]->f_4 = 0f;
	Local_1123[6]->f_5 = 1f;
	Local_1123[6] = &Local_1123[4];
	Local_1123[6]->f_2 = 0.5f;
	Local_1123[6]->f_3 = 0.5f;
	func_846();
	Local_1015[0] = 6;
	Local_1015[0]->f_5 = 30f;
	Local_1015[0]->f_6 = 15f;
	Local_1015[0]->f_11 = 22;
	Local_1015[0]->f_12 = 1;
	Local_1015[1] = 2;
	Local_1015[1]->f_6 = 50f;
	Local_1015[1]->f_11 = 23;
	Local_1015[1]->f_12 = 1;
	Local_1015[2] = 5;
	Local_1015[2]->f_5 = 0f;
	Local_1015[2]->f_6 = 250f;
	Local_1015[2]->f_8 = { _0xf70f00013a62f866(Local_89.f_6) };
	Local_1015[2]->f_11 = 29;
	Local_1015[2]->f_12 = 2;
	Local_1015[3] = 4;
	Local_1015[3]->f_5 = 0f;
	Local_1015[3]->f_11 = 33;
	Local_1015[3]->f_12 = 2;
	Local_1015[4] = 4;
	Local_1015[4]->f_5 = 0f;
	Local_1015[4]->f_11 = 38;
	Local_1015[4]->f_12 = 4;
	Local_1015[5] = 4;
	Local_1015[5]->f_5 = to_float(2147483647);
	Local_1015[5]->f_11 = 40;
	Local_1015[5]->f_12 = 112;
	Local_1015[6] = 4;
	Local_1015[6]->f_5 = 0f;
	Local_1015[6]->f_11 = 45;
	Local_1015[6]->f_12 = 128;
	Local_1015[7] = 4;
	Local_1015[7]->f_5 = 0f;
	Local_1015[7]->f_11 = 69;
	Local_1015[7]->f_12 = 128;
}

void func_411(var uParam0)
{
	Local_1371[1]->f_3 = 1;
	Local_1371[2]->f_3 = 1;
	Local_1371[10]->f_3 = 1;
	Local_1371[10]->f_2 = 0;
	Local_1371[11]->f_3 = 1;
	Local_1371[13]->f_3 = 1;
	Local_1371[14]->f_2 = 0;
	Local_1371[14]->f_3 = 1;
	Local_1371[16]->f_2 = 0;
	Local_1371[17]->f_2 = 0;
	Local_1371[21]->f_3 = 1;
}

void func_412(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = Global_35;
	}
	func_847();
	Global_1905942 = Global_40.f_7729;
	if (func_848(32768))
	{
		func_849(&(Global_1946804->f_1735.f_120));
		func_850();
	}
	if (Global_40.f_7729 <= -1)
	{
		Global_1905942 = 0;
		func_851(iParam0, &Global_1905942, &(Global_1946804->f_1735), 0, Global_1946804->f_1497, 0);
	}
	else if (Global_40.f_7729 <= 5)
	{
		func_851(iParam0, &Global_1905942, &(Global_1946804->f_1735), 0, Global_1946804->f_1497, 0);
	}
	else
	{
		func_851(iParam0, &Global_1905942, &(Global_1946804->f_1735), 0, 0, 0);
	}
}

void func_413(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_414(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_415(var uParam0)
{
	if (!func_852(uParam0, 4))
	{
		if (func_853(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_854(uParam0) };
		if (!func_853(uParam0->f_860, 524288))
		{
			func_855(&(uParam0->f_872));
		}
		func_856(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_857(uParam0, 0f, 0f, 0f);
		func_858(uParam0);
		func_859(uParam0);
		func_860(uParam0, 0f, 0f, 0f, 0, 0);
		func_861(uParam0);
		func_790(uParam0, 4);
		func_862(uParam0, 0);
		func_863(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_416(int iParam0)
{
	if (func_864(iParam0))
	{
		return func_865(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_417(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_555(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_866(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_867(0, 0);
		if (func_731(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_868(1, 0);
		}
	}
	else
	{
		func_868(1, 0);
	}
	func_233(0);
	func_556(0, vParam0, uParam3);
	return 1;
}

bool func_418()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_419(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_420()
{
	return 26;
}

void func_421(int iParam0)
{
	if (!func_213(iParam0))
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

void func_422(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_869((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_423(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_870((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_424(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_871((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_425(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_872((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_426(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_873((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_427(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_874((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_428(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_429(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_875((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_430(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_876((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_431(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_877((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_432(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_878((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_433(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_879((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_434(var uParam0, int iParam1, int iParam2)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_880(&(uParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_881(&(uParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_638[iVar0] = iParam1;
	uParam0->f_638[iVar0]->f_2 = (uParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_435(var uParam0, int iParam1)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	uParam0->f_1124.f_1 = (uParam0->f_1124.f_1 || iParam1);
}

void func_436(int iParam0, int iParam1)
{
	func_467(iParam0, iParam1);
}

void func_437(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_882((*uParam0)[iVar0]))
		{
			if (func_883((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_884((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_885((*uParam1)[iVar0]))
		{
			if (func_883((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_886((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_887((*uParam2)[iVar0]))
		{
			if (func_883((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_888((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_889((*uParam3)[iVar0]))
		{
			if (func_883((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_890((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_883(uParam4->f_1, iParam12))
	{
		func_891(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_892((*uParam5)[iVar0]))
		{
			if (func_883((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_893((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_892((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_894((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_883((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_895((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_896((*uParam6)[iVar0]))
		{
			if (func_883((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_897((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_898((*uParam7)[iVar0]))
		{
			if (func_883((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_899((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_900((*uParam8)[iVar0]))
		{
			if (func_883((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_901((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_902((*uParam9)[iVar0]))
		{
			if (func_883((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_903((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_904((*uParam10)[iVar0]))
		{
			if (func_883((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_905((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_906((*uParam11)[iVar0]))
		{
			if (func_883((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_907((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_438(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_908(uParam0, iParam1, sParam2))
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

struct<2> func_439()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_440(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_441(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_442(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_909(&(uParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_400(&(uParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_443(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(uParam0->f_8269)))
	{
		if (!func_121(uParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_910(uParam0->f_607)}, 3);
			if (func_911(&(uParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(uParam0->f_8269)))
				{
					func_912(&(uParam0->f_8269));
				}
				func_140(uParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_913(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_444(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_892((*uParam0)[iVar0]))
		{
			if (func_883((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_914((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_915((*uParam0)[iVar0]))
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

int func_445(var uParam0)
{
	return uParam0->f_596;
}

bool func_446(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	iVar0 = func_916(func_61(uParam0));
	if (!func_29())
	{
		vVar2 = { func_126(uParam0->f_607) };
	}
	if (func_917(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_447(var uParam0, bool bParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(uParam0->f_5411))
	{
		if (!func_120(uParam0, 16777216))
		{
			if (!func_918(uParam0))
			{
				func_103(uParam0, 16777216);
			}
			else
			{
				Var0.f_10 = 7;
				Var0 = 0;
				Var0.f_1 = 0;
				Var0.f_6 = fParam2;
				Var0.f_6.f_1 = fParam3;
				Var0.f_6.f_2 = fParam4;
				Var0.f_9 = fParam5;
				Var0.f_10 = 1;
				iVar11 = 0;
				iVar12 = func_919(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(uParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == uParam0->f_5411)
						{
							func_103(uParam0, 16777216);
						}
						else if (func_920(iVar12, uParam0->f_5411, 5f, 1))
						{
							if (func_921(iVar12))
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
		if (func_922(&iVar17, func_125(uParam0), vVar14, 0f, 0, 0, 1, 1, 1))
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
		Var18.f_6 = fParam2;
		Var18.f_6.f_1 = fParam3;
		Var18.f_6.f_2 = fParam4;
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
		iVar13 = func_919(&iVar29, &Var18);
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
		func_923(uParam0, bParam1);
		if (!func_120(uParam0, 256))
		{
			if (!func_120(uParam0, 32768))
			{
				vVar14.x = fParam2;
				vVar14.f_1 = fParam3;
				vVar14.f_2 = fParam4;
				if ((!func_921(iVar13) || func_924(Global_35, iVar13, 1, 1) > 200f) && !func_419(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(iVar13, false);
						func_925(iVar13, vVar14, fParam5, 2, 1073741824);
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

void func_448(var uParam0)
{
	if (!func_120(uParam0, 32) && func_128(uParam0, 3))
	{
		if (func_926(uParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(uParam0, 32);
		}
	}
	if (!func_120(uParam0, 32))
	{
		if (func_927(&(uParam0->f_609), uParam0->f_607))
		{
			func_103(uParam0, 32);
		}
	}
}

void func_449(var uParam0)
{
	if (!func_120(uParam0, 128))
	{
		if (func_120(uParam0, 16384))
		{
			func_928(uParam0);
			if (func_929(uParam0))
			{
				func_51(&(uParam0->f_10792));
				func_930(uParam0, 2097152);
				func_288(uParam0, 16384);
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
			func_928(uParam0);
			MemCopy(&Var0, {func_155(func_61(uParam0))}, 4);
			if (func_931(uParam0, Var0))
			{
				if (func_445(uParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(uParam0, 128);
			}
		}
		else
		{
			if (func_445(uParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(uParam0, 128);
		}
	}
}

void func_450(var uParam0, int iParam1)
{
	uParam0->f_596 = iParam1;
}

bool func_451(var uParam0)
{
	iVar0 = 1;
	if (!func_932(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_446(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_447(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
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
		MemCopy(&cVar1, {func_910(uParam0->f_607)}, 3);
		if (func_933(&(uParam0->f_8269), &cVar1, 0, 1, 1))
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
		if (func_934(&(uParam0->f_13115)) < 30f)
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

bool func_452(var uParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_934(&(uParam0->f_603)) >= uParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_935()) && func_934(&(uParam0->f_603)) < (uParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(uParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(uParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(uParam0->f_607)));
			func_288(uParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_936(0, 0);
		func_288(uParam0, 4096);
		return true;
	}
	return false;
}

bool func_453(var uParam0)
{
	iLocal_1177 = func_33(uParam0);
	if (does_entity_exist(&(Local_941[3])))
	{
		delete_object(Local_941[3]);
	}
	if (iVar1174 >= 6)
	{
		func_456(19);
	}
	if (!func_165(10))
	{
		if (!func_937(iVar1174))
		{
			func_197();
			return false;
		}
	}
	if (iVar1174 >= 4 && !iVar1174 == 24)
	{
		if (!func_938(1))
		{
			return false;
		}
		else
		{
			if (iVar1174 > 7)
			{
				if (!func_939())
				{
					return false;
				}
			}
			if (!func_940(1, 0))
			{
				return false;
			}
		}
	}
	iVar0 = iVar1174;
	iVar1 = func_941(uParam0);
	if (!func_942(uParam0))
	{
		return false;
	}
	if (does_entity_exist(&(Local_133[1])) && !is_entity_dead(&(Local_133[1])))
	{
		func_943(1, 1);
		Local_133[1] = &Local_133[1];
		set_animal_tuning_bool_param(&(Local_133[1]), 48, true);
		_0xf74e134f40192884(&(Local_133[1]), 2);
		set_blocking_of_non_temporary_events(&(Local_133[1]), true);
		remove_all_shocking_events(true);
		set_ped_flee_attributes(&(Local_133[1]), 512, true);
		set_ped_flee_attributes(&(Local_133[1]), 16384, true);
		set_ped_config_flag(&(Local_133[1]), 136, false);
		_0xba8818212633500a(&(Local_133[1]), 0, 0);
		_0x2eb75fb86c41f026(&(Local_133[1]), 3, 0);
		set_ped_config_flag(&(Local_133[1]), 113, true);
		set_ped_config_flag(&(Local_133[1]), 168, false);
		func_103(uParam0, 1);
		func_456(42);
	}
	if (!func_165(7))
	{
		func_944();
		func_456(7);
	}
	if ((iVar1174 == 3 || iVar1174 == 4) || iVar1174 == 5)
	{
		func_945(7);
	}
	if (iVar1174 > 4)
	{
		func_946();
	}
	if (iVar1174 == 0)
	{
		if (iVar1 == 0)
		{
			func_947(6);
			func_947(8);
		}
		else if (iVar1 == 2)
		{
			func_442(uParam0, &(Local_133[8]), "HoseaMatthews", 0, 0, 0, 0);
			func_442(uParam0, &(Local_133[9]), "MollyOshea", 0, 0, 0, 0);
			func_442(uParam0, &(Local_133[11]), "MrPearson", 0, 0, 0, 0);
		}
	}
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 8)
	{
		func_176(13);
	}
	else
	{
		func_456(13);
	}
	func_949(uParam0, 154963);
	func_951(uParam0, 155161);
	request_ptfx_asset();
	switch (iVar0)
	{
		case 1:
		case 2:
		case 3:
			_set_weather_type(1632247697, true, true, false, 0f, false);
			break;
		case 4:
			_set_weather_type(-173507739, true, true, false, 0f, false);
			break;
		case 5:
			_set_weather_type(433385945, true, true, false, 0f, false);
			break;
	}
	switch (iVar1174)
	{
		case 1:
			set_clock_time(8, 26, 0);
			break;
		case 2:
			set_clock_time(10, 0, 0);
			break;
		case 3:
			set_clock_time(15, 0, 0);
			break;
		case 4:
		case 5:
			set_clock_time(20, 50, 0);
			break;
		case 6:
			set_clock_time(22, 0, 0);
			break;
		case 7:
		case 8:
		case 25:
			set_clock_time(0, 0, 0);
			break;
	}
	if ((!iVar0 == 6 && !iVar0 == 7) && !iVar0 == 8)
	{
		pause_clock(true, 0);
	}
	else
	{
		pause_clock(false, 0);
	}
	if (((iVar0 == 4 || iVar0 == 5) || iVar0 == 6) || iVar0 == 7)
	{
		func_194(2, 1);
	}
	Local_133[0] = Global_35;
	func_943(0, 1);
	func_952(-464836488, 1, 0);
	func_39(0);
	if (_0x7409669c5ed50144(-1392528840))
	{
		_0x50b72a754ee64a71(-1392528840);
	}
	return true;
}

void func_454(var uParam0, int iParam1)
{
	func_66(iParam1);
	uParam0->f_10783 = iParam1;
}

bool func_455(var uParam0)
{
	func_953(uParam0);
	func_954(uParam0);
	iVar0 = func_33(uParam0);
	iVar1 = func_35(uParam0);
	iVar2 = func_162(uParam0, iVar0);
	if (func_8(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_929(uParam0);
		}
	}
	func_955(uParam0);
	func_956(uParam0);
	func_957(uParam0);
	func_958(uParam0);
	func_959(uParam0);
	func_960(uParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_961(uParam0);
	}
	if ((func_33(uParam0) == 0 && iVar2 < 3) && func_301(uParam0) == 0)
	{
		func_449(uParam0);
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
			if (func_962(uParam0, iVar0, 0))
			{
				if (func_963(uParam0, func_33(uParam0)) != -1 && _0x62de46f061caa468() < func_963(uParam0, func_33(uParam0)))
				{
					_0xf008e0ba1fe1d644((func_963(uParam0, func_33(uParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(uParam0) == 25 || func_33(uParam0) == 26) && func_82(32768))
				{
					func_401(uParam0, 524288);
				}
				if (func_120(uParam0, 4))
				{
					if (!func_8(uParam0, 4))
					{
						func_964(uParam0, iVar0);
						func_99(uParam0, 4);
					}
					func_965(uParam0);
					func_966(uParam0, iVar0, 1);
				}
				else
				{
					func_966(uParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_932(uParam0))
			{
				if (func_967(uParam0))
				{
					if (func_8(uParam0, 4))
					{
						func_930(uParam0, 4);
					}
					func_966(uParam0, iVar0, 2);
				}
			}
			else if (func_968(uParam0) >= uParam0->f_13144)
			{
				if (func_8(uParam0, 4))
				{
					func_930(uParam0, 4);
				}
				func_966(uParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_962(uParam0, iVar0, 2))
			{
				if (!func_969(uParam0))
				{
					func_966(uParam0, iVar0, 4);
					if (func_970(uParam0, iVar0, iVar1))
					{
						func_966(uParam0, iVar0, 5);
					}
				}
				else
				{
					func_971(uParam0);
					func_966(uParam0, iVar0, 3);
					if (func_972(uParam0, iVar0))
					{
						func_966(uParam0, iVar0, 4);
						if (func_970(uParam0, iVar0, iVar1))
						{
							func_966(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_973(uParam0))
			{
				func_972(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_972(uParam0, iVar0))
			{
				func_966(uParam0, iVar0, 4);
				if (func_970(uParam0, iVar0, iVar1))
				{
					func_966(uParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_970(uParam0, iVar0, iVar1))
			{
				func_966(uParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_974(uParam0);
				func_975(uParam0, iVar0);
				func_976(uParam0);
				func_977(uParam0);
				if (func_121(uParam0, iVar1, 2))
				{
					if (func_978(uParam0, iVar1))
					{
						func_979(uParam0, iVar1);
					}
				}
			}
			if (func_962(uParam0, iVar0, 5))
			{
				if (func_962(uParam0, iVar0, 7))
				{
					if (!func_121(uParam0, func_33(uParam0), 67108864))
					{
						func_980(uParam0, func_33(uParam0));
					}
					func_981(uParam0, iVar1);
					func_954(uParam0);
					return true;
				}
				else
				{
					func_966(uParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(uParam0, func_33(uParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(uParam0, func_33(uParam0), 16))
					{
						do_screen_fade_in(0);
						func_982(0);
					}
					func_140(uParam0, func_33(uParam0), 4194304);
				}
				if ((func_983(get_player_index(), 0, 0, 1) && !func_120(uParam0, 8192)) && !func_121(uParam0, func_33(uParam0), 8))
				{
					func_47(1, 0);
					func_984("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_985(uParam0))
					{
						func_966(uParam0, iVar0, 6);
					}
				}
				if (func_8(uParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(uParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_930(uParam0, 268435456);
					}
				}
				if (func_120(uParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_288(uParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_974(uParam0);
				func_975(uParam0, iVar0);
				func_976(uParam0);
				func_977(uParam0);
				if (func_121(uParam0, func_35(uParam0), 2))
				{
					if (func_978(uParam0, func_35(uParam0)))
					{
						func_979(uParam0, func_35(uParam0));
					}
				}
			}
			if ((!func_983(get_player_index(), 0, 0, 1) || func_120(uParam0, 8192)) || func_121(uParam0, func_33(uParam0), 8))
			{
				if (func_962(uParam0, iVar0, 5))
				{
					if (func_986(uParam0))
					{
						func_966(uParam0, iVar0, 7);
					}
				}
				else
				{
					func_986(uParam0);
					func_966(uParam0, iVar0, 5);
				}
			}
			else
			{
				func_962(uParam0, iVar0, 5);
				func_987(uParam0);
			}
			break;
		case 7:
			if (func_962(uParam0, iVar0, 7))
			{
				if (!func_121(uParam0, func_33(uParam0), 67108864))
				{
					func_980(uParam0, func_33(uParam0));
				}
				func_981(uParam0, iVar1);
				func_954(uParam0);
				return true;
			}
			break;
		default:
			func_966(uParam0, iVar0, 7);
			break;
	}
	return false;
}

void func_456(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	func_467(uLocal_123[iVar1], func_459(iVar0));
}

void func_457(int iParam0)
{
	if (func_988(iParam0))
	{
		iVar3 = func_989(iParam0);
		iVar1 = func_990(iVar3);
		iVar2 = 0;
		while (iVar2 <= (iVar1 - 1))
		{
			iVar4 = func_991(iVar3, iVar2);
			iVar0 = iVar4;
			if (func_589(&(Global_1425247->f_3), iVar0, 2))
			{
				if (!bVar5 && (func_992(iVar4) == 3 || func_992(iVar4) == 4))
				{
					func_993(14);
					bVar5 = true;
				}
			}
			iVar2++;
		}
	}
	else
	{
		iVar0 = iParam0;
		if (func_589(&(Global_1425247->f_3), iVar0, 2))
		{
			if (func_992(iParam0) == 3 || func_992(iParam0) == 4)
			{
				func_993(14);
			}
		}
	}
}

void func_458(int iParam0)
{
	if (func_988(iParam0))
	{
		iVar3 = func_989(iParam0);
		iVar1 = func_990(iVar3);
		iVar2 = 0;
		while (iVar2 <= (iVar1 - 1))
		{
			iVar4 = func_991(iVar3, iVar2);
			iVar0 = iVar4;
			if (func_588(&(Global_1425247->f_3), iVar0, 2))
			{
			}
			iVar2++;
		}
	}
	else
	{
		iVar0 = iParam0;
		if (func_588(&(Global_1425247->f_3), iVar0, 2))
		{
		}
	}
}

int func_459(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

bool func_460(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_461(int iParam0)
{
	Var0 = { func_994(iParam0) };
	return Var0.f_6;
}

void func_462(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!&vLocal_470[iParam0] == 0)
	{
		return;
	}
	vLocal_470[iParam0] = 1;
}

bool func_463(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	return &vLocal_470[iParam0] == 3;
}

int func_464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1944593012;
		case 1:
			return -566878875;
		case 2:
			return 1225208808;
		case 3:
			return -346700962;
		case 4:
			return -1690877284;
		case 5:
			return 984264800;
		case 6:
			return -1707202053;
		case 7:
			return 1618031732;
		case 8:
			return 1695129705;
		case 9:
			return 2070393450;
		case 11:
			return -820975767;
		case 10:
			return 347599949;
		case 12:
			return -1038436471;
		case 13:
			return -1250098797;
		case 14:
			return -247265944;
		case 15:
			return -1038436471;
		case 16:
			return -1679658797;
		case 17:
			return 1582986780;
		case 18:
			return 1104697660;
		case 19:
			return -164452766;
		case 20:
			return -544816550;
		case 21:
			return 962088794;
		case 22:
			return 253923078;
		case 23:
			return -1946016570;
		case 24:
			return -1006095118;
		case 25:
			return 1276753332;
		case 26:
			return 488855249;
		case 27:
			return 279593638;
		case 33:
			return -1970375879;
		case 34:
			return 2140637263;
		case 35:
			return -1345750404;
		case 36:
			return -1329546951;
		case 37:
			return -1149728937;
		case 38:
			return -276754226;
		case 39:
			return 519003277;
		case 40:
			return 326498975;
		case 41:
			return -1127014626;
		case 42:
			return -1074884633;
		case 43:
			return 1665837639;
		case 28:
			return 237310259;
		case 30:
			return 1935100224;
		case 31:
			return 480074467;
		case 29:
			return -965956337;
		case 32:
			return 827857784;
		case 44:
			return -895862876;
	}
	return 0;
}

void func_465(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_466(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!&vLocal_470[iParam0] == 3)
	{
		return;
	}
	vLocal_470[iParam0] = 4;
}

void func_467(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_468(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_469(int iParam0)
{
	if (_0xc276fe69dda22bad(&(iLocal_1006[iParam0])))
	{
		remove_cover_point(&(iLocal_1006[iParam0]));
	}
}

int func_470(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 0;
		case 7:
			return 6;
		case 8:
			return 5;
		case 9:
			return 16;
		case 10:
			return 15;
		case 11:
			return 17;
		case 12:
			return 20;
		case 13:
			return 21;
		case 14:
			return 19;
		case 15:
			return 3;
	}
	return -1;
}

void func_471(var uParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(&(Local_941[iParam1])))
	{
		if (bParam2)
		{
			func_995(uParam0, &(Local_941[iParam1]));
			func_996(&(uParam0->f_7375), &(Local_941[iParam1]), 0);
		}
		if ((does_entity_exist(&(Local_941[iParam1])) && is_entity_a_mission_entity(&(Local_941[iParam1]))) && does_entity_belong_to_this_script(&(Local_941[iParam1]), true))
		{
			if (func_997(Local_941[iParam1]->f_1, 1))
			{
				set_object_as_no_longer_needed(Local_941[iParam1]);
			}
			else
			{
				delete_object(Local_941[iParam1]);
			}
		}
	}
}

void func_472()
{
	iVar0 = 0;
	while (iVar0 < Local_14.f_69)
	{
		if ((does_entity_exist(&(Local_14.f_69[iVar0])) && _0x88ad6cc10d8d35b2(&(Local_14.f_69[iVar0]))) && !_0xa7e51b53309eac97(&(Local_14.f_69[iVar0])))
		{
			delete_object(Local_14.f_69[iVar0]);
		}
		iVar0++;
	}
}

void func_473(int iParam0)
{
	if (!does_cam_exist(&(iLocal_1009[iParam0])))
	{
		return;
	}
	if (is_cam_active(&(iLocal_1009[iParam0])))
	{
		set_cam_active(&(iLocal_1009[iParam0]), false);
	}
	if (is_cam_shaking(&(iLocal_1009[iParam0])))
	{
		stop_cam_shaking(&(iLocal_1009[iParam0]), true);
	}
	destroy_cam(&(iLocal_1009[iParam0]), false);
}

void func_474(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (func_998(iParam1))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (does_entity_exist(&(Local_133[iParam1])))
	{
		if (is_entity_a_mission_entity(&(Local_133[iParam1])))
		{
			if (does_entity_belong_to_this_script(&(Local_133[iParam1]), true))
			{
				iVar0 = _get_rider_of_mount(&(Local_133[iParam1]), true);
				if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
				{
					if (iVar0 == Global_35)
					{
						return;
					}
				}
				func_995(uParam0, &(Local_133[iParam1]));
				func_996(&(uParam0->f_7375), &(Local_133[iParam1]), 0);
				if (_does_anim_scene_exist(uParam0->f_7375.f_804))
				{
					if (!is_string_null_or_empty(sParam2))
					{
						if (_0x6f1f0b17109309da(uParam0->f_7375.f_804, sParam2))
						{
							remove_anim_scene_entity(uParam0->f_7375.f_804, sParam2, &(Local_133[iParam1]));
						}
					}
				}
				if (func_470(iParam1) == -1)
				{
					if (iParam1 == 2 || iParam1 == 3)
					{
						iVar1 = -1;
						if (iParam1 == 2)
						{
							iVar1 = func_470(6);
						}
						else if (iParam1 == 3)
						{
							iVar1 = func_470(7);
						}
						if (!iVar1 == -1)
						{
							func_999(&(Local_133[iParam1]), iVar1, 1, 1, 1);
						}
					}
					else if (iParam1 == 1)
					{
						func_58(uParam0, 1);
						func_190(7, 0);
						func_190(1, 0);
						Local_133[iParam1] = 0;
					}
					else
					{
						delete_ped(Local_133[iParam1]);
					}
				}
				else
				{
					func_1000(func_470(iParam1), 0);
					func_568(func_470(iParam1), 0);
					func_282(uParam0, func_470(iParam1), &(Local_133[iParam1]), 0, !bParam3, 1, 0);
					Local_133[iParam1] = 0;
				}
			}
		}
	}
	Local_133[iParam1]->f_4 = 0;
	func_943(iParam1, 0);
	Local_133[iParam1]->f_3 = 0;
}

void func_475()
{
	iVar0 = player_ped_id();
	disable_attribute_overpower(iVar0, 0);
	disable_attribute_overpower(iVar0, 1);
	disable_attribute_overpower(iVar0, 2);
	disable_attribute_overpower(iVar0, 19);
	disable_attribute_overpower(iVar0, 18);
	disable_attribute_overpower(iVar0, 20);
}

void func_476(int iParam0)
{
	Global_1347477->f_118 = iParam0;
	Global_1347477->f_6 = iParam0;
}

void func_477(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

void func_478(int iParam0)
{
	iParam0 = func_289(iParam0);
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

void func_479(int iParam0)
{
	iParam0 = func_289(iParam0);
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

void func_480(int iParam0)
{
	iParam0 = func_289(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_285(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_573(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_573(iParam0);
	}
}

bool func_481(int iParam0)
{
	iParam0 = func_289(iParam0);
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

void func_482(int iParam0, int iParam1)
{
	iParam0 = func_289(iParam0);
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

bool func_483(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_295(iParam0))
	{
		return true;
	}
	if (!func_486(iParam0, 0))
	{
		if (iParam1 == 0)
		{
			return true;
		}
		func_1001(iParam0, 0);
	}
	if (bParam2)
	{
		if (!func_1002((*Global_1347702)[iParam0]->f_13, 1024))
		{
			func_1003(&((*Global_1347702)[iParam0]->f_13), 1024);
		}
	}
	if (bParam4 && !func_1002((*Global_1347702)[iParam0]->f_13, 8192))
	{
		func_1003(&((*Global_1347702)[iParam0]->f_13), 8192);
	}
	if (is_thread_active((*Global_1347702)[iParam0]->f_42, false))
	{
		if (func_1002((*Global_1347702)[iParam0]->f_13, 64))
		{
			return true;
		}
		return false;
	}
	if (!func_1004(iParam0))
	{
		func_1005((*Global_1347702)[iParam0]->f_15);
	}
	else if (bParam3 && !func_1006((*Global_1347702)[iParam0]->f_15))
	{
		func_1007((*Global_1347702)[iParam0]->f_15);
	}
	if (!func_1002((*Global_1347702)[iParam0]->f_13, 256))
	{
		func_1003(&((*Global_1347702)[iParam0]->f_13), 256);
	}
	return false;
}

void func_484(int iParam0, int iParam1, bool bParam2)
{
	if (func_489(iParam0))
	{
		return;
	}
	if (iParam1 == 1 || func_486(iParam0, 0))
	{
		if ((bParam2 || func_322((*Global_1347702)[iParam0]->f_12, 65536)) || func_1008(iParam0))
		{
			if (bParam2 && !func_1002((*Global_1347702)[iParam0]->f_13, 1024))
			{
				func_1003(&((*Global_1347702)[iParam0]->f_13), 1024);
			}
			func_1009(&((*Global_1347702)[iParam0]->f_12), 1024);
			func_1009(&((*Global_1347702)[iParam0]->f_12), 32768);
			func_1010(iParam0);
		}
	}
}

void func_485(int iParam0, int iParam1, bool bParam2)
{
	if (!func_295(iParam0))
	{
		return;
	}
	func_1011(iParam0, 1, iParam1, 1, 32);
	if (bParam2 && func_1002((*Global_1347702)[iParam0]->f_13, 1024))
	{
		func_1012(&((*Global_1347702)[iParam0]->f_13), 1024);
	}
	if (func_1004(iParam0))
	{
		func_1013((*Global_1347702)[iParam0]->f_15);
	}
	if (iParam1 == 1)
	{
		func_1014(iParam0, 1);
	}
}

bool func_486(int iParam0, bool bParam1)
{
	if (func_20() != -1)
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

int func_487(bool bParam0)
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
						if (func_322((*Global_1347702)[iVar1]->f_12, 1))
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
							if (func_213(iVar2) && !func_1015(iVar2))
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

bool func_488(int iParam0)
{
	if (func_218((*Global_1347702)[iParam0]->f_15) == 2 || iParam0 == func_553(Global_1347343->f_2))
	{
		return true;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 32 != 0)
	{
		return true;
	}
	fVar0 = vdist2(func_1016(iParam0), Global_36);
	if (fVar0 < ((*Global_1347702)[iParam0]->f_16 * (*Global_1347702)[iParam0]->f_16))
	{
		return true;
	}
	return false;
}

bool func_489(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_295(iParam0))
	{
		return false;
	}
	return func_348((*Global_1347702)[iParam0]->f_15, 1);
}

bool func_490(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_348((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_491(int iParam0)
{
	if (!func_213(iParam0))
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

bool func_492(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_213(iParam0))
	{
		return true;
	}
	if (func_82(32768))
	{
		return true;
	}
	if (is_thread_active((*Global_1835011)[iParam0]->f_16, false))
	{
		return true;
	}
	iVar0 = func_1017(func_12(iParam0));
	if ((*Global_1835011)[iParam0]->f_71)
	{
		return true;
	}
	if (!func_216(func_12(iParam0)))
	{
		func_1018(iParam0, 0, 0, -1);
	}
	if (func_1019(iVar0))
	{
		if (!(*Global_1835011)[iParam0]->f_71)
		{
			if (bParam1)
			{
				func_1020(iVar0, 256);
			}
			if (bParam2)
			{
				func_1020(iVar0, 512);
			}
			(*Global_1835011)[iParam0]->f_71 = 1;
			return true;
		}
	}
	return false;
}

void func_493(int iParam0, bool bParam1)
{
	if (!func_213(iParam0))
	{
		return;
	}
	iVar0 = func_1017(func_12(iParam0));
	if (func_1019(iVar0) && (*Global_1835011)[iParam0]->f_71)
	{
		(*Global_1835011)[iParam0]->f_71 = 0;
	}
	if (!bParam1)
	{
		func_1021(iParam0, -1, 0, 1, 0, 0, 0);
		func_13(func_12(iParam0), 1, 2);
	}
}

char* func_494(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 45:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "000_enter";
			}
			break;
		case 46:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "000_exit";
			}
			break;
		case 47:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "045_enter";
			}
			break;
		case 48:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "045_exit";
			}
			break;
		case 49:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "090_enter";
			}
			break;
		case 50:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "090_exit";
			}
			break;
		case 51:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "135_enter";
			}
			break;
		case 52:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "135_exit";
			}
			break;
		case 53:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "180_enter";
			}
			break;
		case 54:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "180_exit";
			}
			break;
		case 55:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "225_enter";
			}
			break;
		case 56:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "225_exit";
			}
			break;
		case 57:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "270_enter";
			}
			break;
		case 58:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "270_exit";
			}
			break;
		case 59:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "315_enter";
			}
			break;
		case 60:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "315_exit";
			}
			break;
		case 64:
			if (bParam1)
			{
				return "script_re@duel_winner@taunt";
			}
			else
			{
				return "chicken_shit_ped01";
			}
			break;
		case 65:
			if (bParam1)
			{
				return "MECH_LOCO_M@GENERIC@NORMAL@UNARMED@SINGLE_STEP@LONG@LF@-180";
			}
			else
			{
				return "step_face_180";
			}
			break;
		case 61:
			if (bParam1)
			{
				return "MECH_LOCO@GENERIC@HANDCUFFED";
			}
			else
			{
				return "idle";
			}
			break;
		case 62:
			if (bParam1)
			{
				return "MECH_LOCO_M@CHARACTER@ARTHUR@FIDGETS@WEATHER@SNOW_COLD@UNARMED";
			}
			else
			{
				return "rub_arms_b";
			}
			break;
		case 63:
			if (bParam1)
			{
				return "MECH_PICKUP@OBJECT";
			}
			else
			{
				return "loot";
			}
			break;
		case 66:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "315_enter";
			}
			break;
		case 67:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "315_loop";
			}
			break;
		case 68:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "315_exit";
			}
			break;
		case 69:
			if (bParam1)
			{
				return "MINI_GAMES@STORY@ODRISCOLLS3@SWING@ARTHUR";
			}
			break;
		case 70:
			if (bParam1)
			{
				return "MINI_GAMES@STORY@ODRISCOLLS3@SWING@SHACKLE";
			}
			break;
		case 71:
			if (bParam1)
			{
				return "MINI_GAMES@STORY@ODRISCOLLS3@SWING@CHAIN";
			}
			break;
		case 72:
			if (bParam1)
			{
				return "mini_games@story@odr3@surgery_heat";
			}
			break;
		case 73:
			if (bParam1)
			{
				return "mini_games@story@odr3@surgery_gouge";
			}
			break;
		case 74:
			if (bParam1)
			{
				return "mini_games@story@odr3@surgery_pour";
			}
			break;
		case 75:
			if (bParam1)
			{
				return "mini_games@story@odr3@surgery_cauterize";
			}
			break;
		case 76:
			if (bParam1)
			{
				return "ai_react@male_stand@BIG_INTRO@FORWARD";
			}
			else
			{
				return "reaction_forward_big_intro_a";
			}
			break;
		case 77:
			if (bParam1)
			{
				return "amb_work@world_human_inspect@male_a@stand_enter";
			}
			else
			{
				return "enter_back";
			}
			break;
		case 78:
			if (bParam1)
			{
				return "amb_work@world_human_inspect@male_a@idle_b";
			}
			else
			{
				return "idle_f";
			}
			break;
		case 79:
			if (bParam1)
			{
				return "amb_work@world_human_inspect@male_a@stand_exit";
			}
			else
			{
				return "exit_front";
			}
			break;
		case 80:
			if (bParam1)
			{
				return "script_story@odr3@ig@ig18_ig19_pass_out_regain_consciousness_on_horse";
			}
			else
			{
				return "passed_out_loop_front_right_arthur";
			}
			break;
		case 81:
			if (bParam1)
			{
				return "script_story@odr3@ig@ig18_ig19_pass_out_regain_consciousness_on_horse";
			}
			else
			{
				return "weary_loop_arthur";
			}
			break;
	}
	return "";
}

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return &(iLocal_781[3]);
		case 84:
			return &(iLocal_781[0]);
		case 85:
			return &(iLocal_781[1]);
		case 86:
			return &(iLocal_781[8]);
		case 87:
			return &(iLocal_781[2]);
		case 88:
			return &(iLocal_781[6]);
		case 89:
			return uVar1266;
		case 90:
			return Local_1269.f_1;
	}
	return 0;
}

char* func_496(int iParam0)
{
	switch (iParam0)
	{
		case 91:
			return "odr3_s1_ride_to_meet";
		case 92:
			return "odr3_s1_odriscolls";
		case 93:
			return "odr3_s2_gps_to_overlook";
		case 94:
			return "odr3_s3_ride_river";
		case 95:
			return "odr3_s9_cme";
	}
	return "";
}

char* func_497(int iParam0)
{
	switch (iParam0)
	{
		case 96:
			return "script_odriscolls3_mini_game_swinging";
		case 97:
			return "script_surgery_heat";
		case 98:
			return "script_surgery_gouge";
		case 99:
			return "script_Surgery_Pour_with_requests";
		case 100:
			return "script_Surgery_Cauterize";
	}
	return "";
}

void func_498(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_1022(Global_1393447, 1);
	func_1023();
	func_1024();
	func_1025((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_549() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_1026();
		if (iParam1 == -1)
		{
			if (func_997(iParam0, 1))
			{
				func_204(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_997(iParam0, 2))
			{
				func_204(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_997(iParam0, 4))
			{
				func_204(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_1027(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_315(to_float(iVar0), 1, 0);
	}
	else
	{
		func_315((to_float(200) / 3f), 1, 0);
	}
}

int func_499()
{
	if (!func_1029(-1898635967, func_1028(), 1))
	{
		return 0;
	}
	if (func_359())
	{
		if (!func_1029(146323340, func_1028(), 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_500(bool bParam0)
{
	if (is_entity_dead(Global_35))
	{
		return 0;
	}
	if (bParam0)
	{
		if (has_ped_got_weapon(Global_35, 1534638301, 0, true))
		{
			iVar0 = 1534638301;
		}
		else if (has_ped_got_weapon(Global_35, 1529685685, 0, true))
		{
			iVar0 = 1529685685;
		}
		else if (has_ped_got_weapon(Global_35, -2082646505, 0, true))
		{
			iVar0 = -2082646505;
		}
		else if (has_ped_got_weapon(Global_35, -2055158210, 0, true))
		{
			iVar0 = -2055158210;
		}
		else if (has_ped_got_weapon(Global_35, 1701864918, 0, true))
		{
			iVar0 = 1701864918;
		}
		else if (has_ped_got_weapon(Global_35, 34411519, 0, true))
		{
			iVar0 = 34411519;
		}
		else if (has_ped_got_weapon(Global_35, 2075992054, 0, true))
		{
			iVar0 = 2075992054;
		}
		else if (has_ped_got_weapon(Global_35, 127400949, 0, true))
		{
			iVar0 = 127400949;
		}
		else if (has_ped_got_weapon(Global_35, 379542007, 0, true))
		{
			iVar0 = 379542007;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (has_ped_got_weapon(Global_35, 1905553950, 0, true))
	{
		iVar0 = 1905553950;
	}
	else if (has_ped_got_weapon(Global_35, 1676963302, 0, true))
	{
		iVar0 = 1676963302;
	}
	else if (has_ped_got_weapon(Global_35, 1999408598, 0, true))
	{
		iVar0 = 1999408598;
	}
	else if (has_ped_got_weapon(Global_35, -1471716628, 0, true))
	{
		iVar0 = -1471716628;
	}
	else if (has_ped_got_weapon(Global_35, -1783478894, 0, true))
	{
		iVar0 = -1783478894;
	}
	else if (has_ped_got_weapon(Global_35, -183018591, 0, true))
	{
		iVar0 = -183018591;
	}
	else
	{
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		if (bParam0)
		{
			iVar0 = 379542007;
		}
		else
		{
			iVar0 = 1676963302;
		}
	}
	return iVar0;
}

void func_501(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

int func_502(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_503(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

bool func_504(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_505(int iParam0)
{
	if (!func_559(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_506(int iParam0)
{
	if (func_559(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_507(int iParam0)
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

void func_508(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		_request_imap(iParam0);
	}
}

void func_509(char* sParam0)
{
	if (!_0x5ac0944c156e5f44(sParam0))
	{
		_0x7c334ff4d9215912(sParam0);
	}
}

void func_510(char* sParam0)
{
	if (_0x5ac0944c156e5f44(sParam0))
	{
		_0x527b97c203bb8606(sParam0);
	}
}

void func_511(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_515(iParam0, fParam1, 1);
	}
	func_1031(iParam0, (func_1030(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_512(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_513(float fParam0)
{
	if (fParam0 >= (100f - 1f))
	{
		play_sound_frontend("Core_Full", "Consumption_Sounds", true, 0);
	}
	else
	{
		play_sound_frontend("Core_Fill_Up", "Consumption_Sounds", true, 0);
	}
}

void func_514()
{
	Global_40.f_11095.f_11[14] = 100f;
	set_attribute_points(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_515(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = func_307();
	func_1032(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_1033(iParam0, 2);
	if (func_1035(iVar0, func_1034(iParam0, 2), 1))
	{
		func_1036(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_346(88, bParam2);
		return 0f;
	}
	func_1037(iParam0, func_307(), 2);
	func_1036(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_516(float fParam0, float fParam1, float fParam2)
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

void func_517(int iParam0, float fParam1, bool bParam2)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_639(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_1038(ceil(&(Global_40.f_11095[iParam0])));
	_set_attribute_core_value(Global_35, func_1039(iParam0), iVar0);
	func_1041(func_1040(iParam0), (100f * (to_float(iVar0) / 100f)), 0);
	if (((fParam1 <= func_1042(15) && iParam0 == 1) && is_ped_on_foot(Global_35)) && !is_ped_swimming(Global_35))
	{
		func_346(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_346(func_1043(iParam0), 1);
	}
	sVar1 = func_1044(iParam0);
	if (!is_string_null_or_empty(sVar1))
	{
		_0x437c08db4febe2bd(Global_35, sVar1, to_float(iVar0), -1);
	}
}

bool func_518(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_519(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 6:
		case 15:
		case 17:
		case 19:
		case 20:
		case 21:
			return true;
	}
	return false;
}

void func_520(int iParam0)
{
	func_1045(iParam0, 4, 1);
}

int func_521(int iParam0)
{
	if (!func_1046(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_522(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_518(iParam0))
	{
		return;
	}
	if (func_564(iParam0))
	{
		if (!func_281(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_1047(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_1048(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_521(iParam0);
	if (((does_entity_exist(iVar1) && func_1049(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_1050(iParam0, 2, 1);
	}
	else
	{
		func_1051(iParam0);
		func_1050(iParam0, 1, 1);
	}
}

bool func_523(int iParam0, bool bParam1)
{
	if (Global_1357549->f_1497.f_8 == 0)
	{
		return false;
	}
	if (bParam1)
	{
		return (Global_1357549->f_1497.f_8 && iParam0) == iParam0;
	}
	return (Global_1357549->f_1497.f_8 && iParam0) != 0;
}

void func_524(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1357549->f_1497.f_8 = (Global_1357549->f_1497.f_8 || iParam0);
	}
	else
	{
		Global_1357549->f_1497.f_8 = (Global_1357549->f_1497.f_8 - (Global_1357549->f_1497.f_8 && iParam0));
	}
}

bool func_525(int iParam0)
{
	return func_1052(iParam0, 2);
}

int func_526(int iParam0)
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

int func_527(int iParam0)
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

int func_528(int iParam0)
{
	return iParam0 & 31;
}

bool func_529()
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

int func_530(int iParam0)
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

int func_531(int iParam0)
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

void func_532(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_533()
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

int func_534(int iParam0)
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

void func_535(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_536(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1053(iParam0);
	}
	else
	{
		func_1054(iParam0, iParam1);
	}
	func_1055();
}

bool func_537(int iParam0)
{
	iVar0 = func_1056(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_538(int iParam0)
{
	if (!func_214(iParam0))
	{
		return false;
	}
	switch (func_219(iParam0))
	{
		case 1:
			switch (func_294(iParam0))
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
			switch (func_294(iParam0))
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

void func_539(int iParam0)
{
	iVar2 = func_1057(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_641(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1059(func_1058(iParam0), 6);
}

void func_540(int iParam0)
{
	iVar2 = func_1057(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_641(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1060(func_1058(iParam0), 6);
}

int func_541(int iParam0)
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

int func_542(int iParam0)
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
	func_1061(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_543(int iParam0)
{
	return iParam0 != 0;
}

bool func_544(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_545(int iParam0, var uParam1)
{
	if (!func_544(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1062(iParam0, *uParam1, 0);
	func_1063(uParam1);
	Global_1935183->f_24 = 1;
}

void func_546(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_547(float fParam0, float fParam1)
{
	fParam0->f_1 = (func_590() - fParam1);
	func_1064(fParam0, 1);
	func_1065(fParam0, 2);
	fParam0->f_2 = 0f;
}

bool func_548(float fParam0)
{
	return func_243(*fParam0, 2);
}

int func_549()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_550(bool bParam0)
{
	if (func_1066())
	{
		Global_1357509 = 1;
	}
	if (func_1067(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

struct<4> func_551(int iParam0, int iParam1)
{
	return func_1068(iParam0, iParam1);
}

int func_552(int iParam0)
{
	if (func_219(iParam0) == 1)
	{
		return func_294(iParam0);
	}
	return -1;
}

int func_553(int iParam0)
{
	if (func_219(iParam0) == 8)
	{
		return func_294(iParam0);
	}
	return -1;
}

char[] func_554(int iParam0)
{
	if (!func_295(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_555(int iParam0, bool bParam1)
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
		func_1069(1, bParam1);
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
		(*Global_2621440)[iParam0]->f_9.f_14 = func_307();
	}
}

void func_556(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_393(vParam1, 1);
}

bool func_557(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_558(int iParam0)
{
	return Global_43884 == iParam0;
}

bool func_559(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_560(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_561(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_562()
{
	return Global_1109400->f_245;
}

bool func_563(var uParam0, int iParam1)
{
	return func_414(uParam0->f_64, iParam1);
}

bool func_564(int iParam0)
{
	return func_750(iParam0, 16, 1);
}

void func_565(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_1070(uParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_1071(uParam0, get_object_index_from_entity_index(iParam1)))
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

void func_566(int iParam0)
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

void func_567(int iParam0)
{
	func_1072(iParam0, 8, 0);
}

void func_568(int iParam0, bool bParam1)
{
	if (!func_1046(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1073(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_1072(iParam0, 1, 0);
		}
	}
	func_1072(iParam0, 16, bParam1);
}

void func_569(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_518(iParam0))
	{
		return;
	}
	if (func_564(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_1050(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_568(iParam0, 0);
	func_1072(iParam0, 4, 0);
	func_567(iParam0);
	func_1074(iParam0);
	func_1075(iParam0, 37, 1);
	bVar0 = func_187(Global_1360165[iParam0], 0);
	iVar1 = func_1048(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_1047(iParam0, 64, 1))
	{
		func_1075(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_1075(iParam0, 33, 1);
		func_1075(iParam0, 34, 1);
		func_1076(iParam0, 1056964608, -1, 1061158912);
		func_1077(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_1050(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_1050(iParam0, 35, 1);
			if (bParam8)
			{
				func_1050(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1078(iParam0, 0);
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
		func_1075(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_1050(iParam0, 33, 1);
		func_1077(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_592(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_1050(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_522(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_1047(iParam0, 45, 1))
	{
		func_1075(iParam0, 45, 1);
	}
	func_1045(iParam0, 16, 1);
	func_1075(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_187(func_1079(iParam0), 0))
		{
			func_999(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_570(int iParam0)
{
	if (!func_1080(iParam0))
	{
		return false;
	}
	if (!func_352())
	{
		return true;
	}
	return false;
}

void func_571(int iParam0)
{
	iParam0 = func_289(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_574(iParam0))
	{
		return;
	}
	iVar0 = func_239(iParam0);
	func_1081(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_570(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1082(iParam0, 0);
	func_573(iParam0);
}

bool func_572(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_284(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_573(int iParam0)
{
	iParam0 = func_289(iParam0);
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

bool func_574(int iParam0)
{
	iParam0 = func_289(iParam0);
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

void func_575(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_239(iParam0);
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
	if (func_1083(iParam0, 64))
	{
		func_478(iParam0);
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
	bVar3 = func_639(42);
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
				func_1084(&((*Global_1900383)[iParam0]->f_27));
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
		func_478(iParam0);
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
		if (func_1085(1) < 1)
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
		func_1086(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1083(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1087(iParam0);
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
	fVar15 = func_1088(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1089(iParam0))
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
		func_1090((*Global_1900383)[iParam0]->f_26);
		func_1091((*Global_1900383)[iParam0]->f_26);
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
	if (func_921(iVar0) && !bVar9)
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
	iVar21 = func_1085(iParam0);
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

int func_576(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_577(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_578(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_579(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_580(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_581(int iParam0)
{
	iParam0 = func_289(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_574(iParam0))
	{
		return false;
	}
	iVar0 = func_239(iParam0);
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

void func_582(int iParam0)
{
	iParam0 = func_289(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_574(iParam0))
	{
		return;
	}
	iVar0 = func_239(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_583(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_747(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_584(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1092())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_747(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1093(iVar0);
			func_1094(iVar0, 0, 0);
		}
		func_747(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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

bool func_585(int iParam0)
{
	if (!func_270(iParam0))
	{
		return false;
	}
	return func_274(iParam0, 67108864);
}

void func_586(int iParam0)
{
	StringCopy(&cVar0, func_1095(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1096(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_587(int iParam0)
{
	StringCopy(&cVar0, func_1095(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1096(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_588(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_589(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

float func_590()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_591(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1097(iParam0) == 1 && bParam7)
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

void func_592(float fParam0)
{
	fParam0->f_1 = 0f;
	fParam0->f_2 = 0f;
	*fParam0 = 0;
}

bool func_593(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1098(iParam0);
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

int func_594(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_607(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_595(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_596(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_597()
{
	return Global_40.f_11095.f_35;
}

void func_598(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1099(iParam0, 0);
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
		func_599(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_599(int iParam0)
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
			func_1099(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1100(1);
	}
}

bool func_600(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_601()
{
	iVar0 = func_1101((*Global_1347702)[9]->f_15);
	iVar1 = func_1101((*Global_1835011)[69]->f_1);
	if (func_1035(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_602(int iParam0)
{
	if (!func_213(iParam0))
	{
		return false;
	}
	return func_348((*Global_1835011)[iParam0]->f_1, 1);
}

int func_603(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1102(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1103(iVar6);
	}
	return iVar5;
}

int func_604(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1104(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_605(int iParam0, bool bParam1)
{
	func_1105(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_606(int iParam0)
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

void func_607(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_605(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_608(2, *uParam0);
		}
		else
		{
			func_609(2, *uParam0);
		}
	}
	func_1106(uParam0);
}

void func_608(int iParam0, int iParam1)
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

void func_609(int iParam0, int iParam1)
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

void func_610(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1107(iParam0, iParam1, bParam2);
}

int func_611(int iParam0)
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

int func_612(int iParam0)
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

void func_613(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1108();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1109(iParam0);
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
	if (func_639(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1110())
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
	Global_40.f_11095.f_35 = func_330(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1108();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1111(iVar1);
		func_1113(func_1112(), 0, 4000);
		func_1114(Global_40.f_11095.f_35);
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
		func_1115(0);
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
				if (iParam0 > func_612(14))
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
					sParam4 = func_1116(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_747(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_747(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_612(4))
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
					sParam4 = func_1116(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_747(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_747(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
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
		func_383(10, 1);
	}
}

void func_614(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_615(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_616(int iParam0)
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

bool func_617(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_618(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_1117(iParam0) && func_1118(iParam0))
		{
			func_1119(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_619(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1120(iParam0, iParam1);
	Var0 = { func_728(iParam0, 0, 1) };
	iVar5 = func_1121(iParam0, &Var0, 0, 0);
	iVar6 = func_1122(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_637(iParam0, -2051813666))
		{
			func_346(583, 1);
		}
		else
		{
			func_346(582, 0);
		}
	}
	if (func_1123(iParam0, &Var0, *iParam1, 0, 0))
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

void func_620(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_698(iParam0, -949239683))
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

int func_621(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_617(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_636(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1124(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1125(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_1057(bParam2), iParam0, 0);
	return iVar2;
}

bool func_622(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_623(iParam0) != 0;
}

int func_623(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1126())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1127(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_624(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_625(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1126())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_624(iVar0))
		{
			if (func_368(func_1127(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_626(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1128(48);
	func_388(0, -1);
}

bool func_627(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_348((*Global_1347702)[iParam0]->f_15, 1);
}

int func_628(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_629(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_630(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_348((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_631(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_295(iParam0))
	{
		return false;
	}
	return func_215((*Global_1347702)[iParam0]->f_15);
}

int func_632()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_368(func_1129(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_633(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_418() && (func_631(38) || func_627(38)))
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
			if (func_418() && (func_631(39) || func_627(39)))
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
			iVar9 = func_1130(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_418() && (func_631(41) || func_627(41)))
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
			if (func_418() && (func_631(49) || func_627(49)))
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
			iVar9 = func_1130(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1131(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1132(iParam0, iVar13, iVar14))
	{
	}
	if (func_1133(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1134(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1135(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1136(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1137(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_634(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_635(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_418() && (func_631(38) || func_627(38)))
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
			if (func_418() && (func_631(39) || func_627(39)))
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
			if (func_418() && (func_631(49) || func_627(49)))
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
		if (func_418() && (func_631(38) || func_627(38)))
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
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_754(_create_var_string(2, sVar0), _create_var_string(2, func_1139(func_629(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_418() && (func_631(39) || func_627(39)))
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
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_418() && (func_631(49) || func_627(49)))
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
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_636(int iParam0)
{
	if (!func_617(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_637(int iParam0, int iParam1)
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

bool func_638(int iParam0, int iParam1)
{
	if (!func_617(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_639(int iParam0)
{
	if (!func_1140(iParam0))
	{
		return false;
	}
	return func_1141(iParam0);
}

void func_640(int iParam0)
{
	if (!func_1140(iParam0))
	{
		return;
	}
	func_1142(iParam0);
	func_1143(iParam0);
}

int func_641(int iParam0)
{
	if (!func_617(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_642(int iParam0, bool bParam1)
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
	if (func_617(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1144(iVar0) || func_122(iVar0))
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

int func_643(int iParam0, bool bParam1)
{
	if (!func_617(iParam0, 0))
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

void func_644(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_731(iParam0))
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

bool func_645(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_1057(bParam0));
}

bool func_646(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_728(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1145((386 + iVar28), 1);
			if (func_1146(iParam0, &Var0, iVar5, 0))
			{
				if (func_1147(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1148(iParam0, Var0, iVar5, 0) };
					func_1149(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_645(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_647(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1150(iParam0, iParam1);
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

bool func_647(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_649(iParam0))
	{
		return false;
	}
	if (!func_645(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_648(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_643(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_644(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1151(iVar0);
			}
		}
		if (!func_1123(iParam0, &uVar1, 1, 0, 0))
		{
			func_1119(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1152(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_646(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_646(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_646(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1110())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1153(iVar0))
				{
					func_646(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_646(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_502(Global_35, 2, 0, 1);
				if ((((func_731(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_639(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_731(iVar7) && func_639(24))
				{
					if (!func_646(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_646(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_646(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_346(480, 1);
	}
	return true;
}

bool func_649(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_650(int iParam0, int iParam1, int iParam2)
{
	if (!func_649(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_731(iVar4))
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
	if (func_368(611073244, 1, 0) && iParam2 == -897553835)
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
		func_685(func_1154(iParam0), func_684(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_348((*Global_1835011)[14]->f_1, 1))
			{
				func_346(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_645(0))
	{
		if (func_647(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_690(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_651(int iParam0)
{
	if ((iParam0 == -615217896 && !func_359()) || iParam0 != -615217896)
	{
		if (func_1155(Global_35, iParam0, &uVar0))
		{
			func_669(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_675();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_675();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_675();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_673();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_671();
			break;
	}
}

void func_652(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_671();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_672();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_673();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_674();
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
			func_675();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1156();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1157();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_653(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_654(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_655(int iParam0)
{
	bVar0 = func_637(iParam0, -2017733358);
	if (func_1158() < 3)
	{
		if (bVar0)
		{
			if (func_1160(func_1159(iParam0), iParam0))
			{
				func_685(79, func_684(func_1159(iParam0)), 1);
			}
			else
			{
				func_685(78, func_684(func_1159(iParam0)), 1);
			}
		}
		else
		{
			func_685(80, func_684(func_1161(iParam0)), 1);
		}
	}
}

bool func_656()
{
	if (((((func_1162(839908568, 400) || func_1162(-1134030454, 400)) || func_1162(623353496, 400)) || func_1162(-344413337, 400)) || func_1162(-1664948962, 400)) || func_1162(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_657(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_765(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_583(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_584(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_658(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_633(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_635(51, 0, 0, 0, 0, -1, 0);
			func_1163(8192);
			break;
		case 581047644:
			func_633(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_635(51, 0, 0, 0, 0, -1, 0);
			func_1163(524288);
			break;
		case -644199619:
			func_633(39, 0, 0, 0, 0, 0, 1, 0);
			func_635(39, 0, 0, 0, 0, -1, 0);
			func_1164(16);
			break;
		case 684296857:
			func_633(41, 0, 0, 0, 0, 0, 1, 0);
			func_635(41, 0, 0, 0, 0, -1, 0);
			func_1165(8);
			break;
		case 466137807:
			func_633(49, 0, 0, 0, 0, 0, 1, 0);
			func_635(49, 0, 0, 0, 0, -1, 0);
			func_1166(16);
			break;
		case -1087522507:
			func_633(43, 0, 0, -1791518714, func_1167(1), 0, -1, 0);
			func_1168(1);
			break;
		case -405829000:
			func_633(43, 0, 0, -2087881550, func_1167(2), 0, -1, 0);
			func_1168(2);
			break;
		case 378660860:
			func_633(43, 0, 0, 1908068621, func_1167(4), 0, -1, 0);
			func_1168(4);
			break;
		case 1566111097:
			func_633(43, 0, 0, 1611247019, func_1167(8), 0, -1, 0);
			func_1168(8);
			break;
		case 1276007140:
			func_633(43, 0, 0, 1319635688, func_1167(16), 0, -1, 0);
			func_1168(16);
			break;
	}
}

void func_659(int iParam0)
{
	if (func_1169() == 1)
	{
		if (func_627(39))
		{
			func_346(342, 0);
		}
		else
		{
			func_346(343, 0);
			func_1164(1);
		}
	}
	if (func_1169() >= 30)
	{
		func_346(344, 0);
	}
	func_633(39, 0, 0, 0, 0, 0, -1, 0);
	func_635(39, 0, 0, func_1169(), 30, 1, 0);
}

void func_660(int iParam0)
{
	if (func_1170() == 1)
	{
		if (func_627(49))
		{
			func_346(409, 0);
		}
		else
		{
			func_346(410, 0);
			func_1166(1);
		}
	}
	if (func_1170() >= 10)
	{
		func_346(411, 0);
	}
	func_633(49, 0, 0, 0, 0, 0, -1, 0);
	func_635(49, 0, 0, func_1170(), 10, 1, 0);
}

void func_661(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_346(437, 0);
			func_346(440, 0);
			func_1171(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_633(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_635(51, 0, 0, sVar0, func_1130(-949689219, 20), 1, 0);
			func_1163(1);
			func_952(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1171(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_633(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_635(51, 0, 0, sVar0, func_1130(-1248968496, 20), 1, 0);
			func_1163(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1171(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_633(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_635(51, 0, 0, sVar0, func_1130(1706369307, 20), 1, 0);
			func_1163(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1171(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_633(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_635(51, 0, 0, sVar0, func_1130(1520110311, 20), 1, 0);
			func_1163(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_346(438, 0);
			func_1171(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_633(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_635(51, 0, 0, sVar0, func_1130(-1992824800, 20), 1, 0);
			func_1163(32768);
			break;
		default:
			func_346(439, 0);
			break;
	}
}

void func_662()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_663(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_627(43))
		{
			if (iParam0 == 281887510)
			{
				func_346(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_346(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_346(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_346(400, 0);
			}
		}
		else if (func_637(iParam0, 412399755))
		{
			func_1172(-1791518714);
			if (func_1173() == 0)
			{
				func_388(0, 10);
				iVar1 = func_1174(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1175(iParam0) < func_1176(iParam0))
					{
						func_633(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_635(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_627(44))
		{
			if (iParam0 == -222563712)
			{
				func_346(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_346(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_346(401, 0);
			}
		}
		else if (func_637(iParam0, 709057512))
		{
			func_1172(-2087881550);
			if (func_1173() == 1)
			{
				func_388(0, 10);
				iVar1 = func_1174(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1175(iParam0) < func_1176(iParam0))
					{
						func_633(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_635(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_627(45))
		{
			if (iParam0 == 2116770557)
			{
				func_346(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_346(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_346(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_346(398, 0);
			}
		}
		else if (func_637(iParam0, -1478961327))
		{
			func_1172(1908068621);
			if (func_1173() == 2)
			{
				func_388(0, 10);
				iVar1 = func_1174(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1177(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1178(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1128(48);
					}
					if (func_1175(iParam0) < func_1176(iParam0))
					{
						func_633(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_635(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1175(iParam0) < func_1176(iParam0))
					{
						func_633(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_635(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_627(46))
		{
			if (iParam0 == 2085530337)
			{
				func_346(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_346(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_346(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_346(406, 0);
			}
		}
		else if (func_637(iParam0, -1238404098))
		{
			func_1172(1611247019);
			if (func_1173() == 3)
			{
				func_388(0, 10);
				iVar1 = func_1174(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1175(iParam0) < func_1176(iParam0))
					{
						func_633(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_635(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_627(47))
		{
			if (iParam0 == -1521783510)
			{
				func_346(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_346(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_346(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_346(403, 0);
			}
		}
		else if (func_637(iParam0, 1160548794))
		{
			func_1172(1319635688);
			if (func_1173() == 4)
			{
				func_388(0, 10);
				iVar1 = func_1174(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1175(iParam0) < func_1176(iParam0))
					{
						func_633(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_635(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_664(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1177(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1178(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1128(48);
		}
	}
}

void func_665(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_368(func_1179(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1180(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1181(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_666(int iParam0, int iParam1, int iParam2)
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
				func_657(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_657(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_657(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_657(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_657(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_657(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_657(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_657(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_657(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_657(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_657(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_657(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_657(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1182())
			{
				func_657(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_657(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_657(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_657(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_657(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_657(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_657(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_657(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_657(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_657(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_657(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_657(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_657(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_667(int iParam0)
{
	if (func_627(41))
	{
		func_346(363, 0);
	}
	else
	{
		func_346(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1183(-1865241121);
			func_1184(-642026005);
			func_1185(-642026005);
			func_388(0, 10);
			break;
		case -2108314374:
			func_1183(2117142684);
			func_1184(-940584364);
			func_1185(-940584364);
			func_388(0, 10);
			break;
		case -1193798153:
			func_1183(-1409326024);
			func_1184(1972645282);
			func_1185(1972645282);
			func_388(0, 10);
			break;
		case -787702678:
			func_1183(-641744968);
			func_1184(1667205433);
			func_1185(1667205433);
			func_388(0, 10);
			break;
		case -804542901:
			func_1183(-946988203);
			func_1184(1362715885);
			func_1185(1362715885);
			func_388(0, 10);
			break;
		case -1696275132:
			func_1183(-646136018);
			func_1184(1053540370);
			func_1185(1053540370);
			func_388(0, 10);
			break;
		case -161595323:
			func_1183(-955835837);
			func_1184(-1100103852);
			func_1185(-1100103852);
			func_388(0, 10);
			break;
		case -1114363619:
			func_1183(-179276075);
			func_1184(-1409869209);
			func_1185(-1409869209);
			func_388(0, 10);
			break;
		case -368407134:
			func_1183(-492711560);
			func_1184(-1760235357);
			func_1185(-1760235357);
			func_388(0, 10);
			break;
		case 1997759228:
			func_1183(1764383959);
			func_1184(-138366827);
			func_1185(-138366827);
			func_388(0, 10);
			break;
		case 1265573293:
			func_1183(317501533);
			func_1184(-1261163843);
			func_1185(-1261163843);
			func_388(0, 10);
			break;
		case -1030441283:
			func_1183(817753087);
			func_1184(-963523016);
			func_1185(-963523016);
			func_388(0, 10);
			break;
		case -1490884871:
			func_1183(576606016);
			func_1184(560825326);
			func_1185(560825326);
			func_388(0, 10);
			break;
		case -395458616:
			func_1183(814934957);
			func_1184(858269539);
			func_1185(858269539);
			break;
	}
}

void func_668(int iParam0, int iParam1)
{
	func_1186(iParam0, iParam1, &uVar0);
}

int func_669(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_728(iParam1, 1, 0) };
		iParam3 = func_729(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1187(iParam1, iParam2, func_716(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1188(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_716(iParam3, 1)])
			{
				func_727(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_848(32768) && iParam1 != &Global_1946804->f_57[func_716(iParam3, 1)])
			{
				func_850();
				func_727(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_727(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1189(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_727(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1190(0);
			func_1191(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_727(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_670(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_502(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_502(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1192("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1193(&Var3, iVar2, iVar0, iVar1))
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
						func_1194(iVar0);
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

void func_671()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_672()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_673()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_674()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_675()
{
	func_1195();
	func_1196();
	func_1197();
}

void func_676(int iParam0, int iParam1, bool bParam2)
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

void func_677(int iParam0, bool bParam1)
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
	func_1138(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_678(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_679(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_680(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_681(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_682(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_683(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_684(int iParam0)
{
	if (!func_617(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_685(int iParam0, int iParam1, bool bParam2)
{
	func_723(iParam0, &iVar0, &iVar1);
	if (!func_724(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1198(iParam0, 1024))
	{
		return;
	}
	func_725(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_686(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_723(iParam0, &iVar0, &iVar1);
	if (!func_724(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1198(iParam0, 1024))
	{
		return;
	}
	func_725(iVar0, iVar1);
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

int func_687()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1126())
	{
		return func_688();
	}
	iVar4 = (func_1126() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1126())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1199(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1127(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_688()
{
	iVar0 = get_random_int_in_range(0, func_1126());
	return func_1127(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_689(int iParam0)
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

bool func_690(int iParam0, int iParam1, int iParam2)
{
	if (!func_617(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_728(iParam0, 0, 1) };
	Var5 = { func_1148(iParam0, Var0, Var0.f_4, 0) };
	return func_1200(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_691(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_641(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1201(81053684, 0) <= 0)
			{
				func_727(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_727(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1202(iParam0);
			if (func_1203(iVar0))
			{
				func_1204(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_727(30, iParam0, 0, 0, 0);
			}
			if (func_718() == -2125499975 || func_718() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_727(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_718() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_727(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1205(-525676072, 0))
			{
				if (func_1206(-525676072, &iVar1))
				{
					func_727(33, iVar1, 0, 0, 0);
				}
			}
			func_727(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1207(99217379))
		{
			func_669(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_640(24);
		if (func_670(&iVar2, 0))
		{
			func_646(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_692(int iParam0)
{
	if (func_637(iParam0, 943695443))
	{
		func_1208(0, iParam0);
	}
	else if (func_637(iParam0, -2096528786))
	{
		func_1208(1, iParam0);
	}
	else if (func_637(iParam0, -1094167013))
	{
		func_1208(2, iParam0);
	}
	else if (func_637(iParam0, 1936654645))
	{
		func_1208(3, iParam0);
	}
	else if (func_637(iParam0, 1306489306))
	{
		func_1208(4, iParam0);
	}
	else if (func_637(iParam0, 435762317))
	{
		func_1208(5, iParam0);
	}
	else if (func_637(iParam0, 1259363210))
	{
		func_1208(6, iParam0);
	}
	else if (func_637(iParam0, 881398259))
	{
		func_1208(7, iParam0);
	}
	else if (func_637(iParam0, -541549214))
	{
		func_1208(8, iParam0);
	}
	else if (func_637(iParam0, 130796156))
	{
		func_1208(-1, iParam0);
	}
}

int func_693(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1209(&Var4, 1356624740);
	return func_1210(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_694(int iParam0)
{
	if (!func_617(iParam0, 0))
	{
		return Var0;
	}
	if (func_637(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_637(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_637(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_637(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_695(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_348((*Global_1835011)[4]->f_1, 1))
				{
					func_346(109, 1);
				}
			}
			break;
	}
}

void func_696(int iParam0, char* sParam1)
{
	sVar0 = func_1212(func_1211(0));
	func_747(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1213(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_697(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_617(iParam0, 0))
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
	if (!func_1214())
	{
		func_1215(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1216(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1216(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_638(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_636(iParam0);
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
	else if (!func_1217(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1218(_create_var_string(10, &cVar2, _create_var_string(0, func_684(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_637(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_684(iParam0));
	}
	func_747(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_698(int iParam0, int iParam1)
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

struct<10> func_699(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_700(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_701(int iParam0, int iParam1)
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

bool func_702(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_617(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1219(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1219(iParam0, Var2, 1))
				{
					if (func_1220(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1220(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_346(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_221(0, 0, 1))
		{
			func_388(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_703(int iParam0)
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

void func_704(int iParam0)
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
		func_346(iVar0, 0);
	}
}

void func_705()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1221(0);
			_unlock_set_unlocked(-121456797, false);
			func_499();
		}
		return;
	}
	if (!func_348((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1222();
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
	func_1221(1);
}

void func_706()
{
	if (!func_348((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_339(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_707()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1223(0);
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
	if (!func_348((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1223(1);
}

void func_708()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1224(15000, 0, 0, 0, 1);
			func_1223(0);
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
	if (!func_348((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_305(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1223(1);
}

void func_709()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_368(1191437462, 1, 0) && !func_215((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_339(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1225(1))
			{
				func_681(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_368(1119149048, 1, 0) && !func_215((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_339(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1225(2))
			{
				func_681(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1225(4))
		{
			func_681(4);
		}
		if (func_1225(0))
		{
			func_1226(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_368(1191437462, 1, 0))
			{
				func_712(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_368(1119149048, 1, 0))
			{
				func_712(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1225(1))
		{
			func_1226(1);
		}
		if (func_1225(2))
		{
			func_1226(2);
		}
		if (func_1225(4))
		{
			func_1226(4);
		}
		if (!func_1225(0))
		{
			func_681(0);
		}
	}
}

void func_710()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_348((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1227() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_644(127400949);
		if (func_646(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1227() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1228(-2055673461, Var1, 1423542233);
		func_1228(-202131179, Var1, -1264898804);
		func_1228(2013836545, Var1, 1592019450);
		func_1228(1497476650, Var1, 1117400455);
		func_1228(1063571467, Var1, 1150213537);
		func_1228(2107224237, Var1, 1598825281);
		func_1228(1747981656, Var1, -712527121);
		func_1228(-1371140647, Var1, 454332195);
		func_1228(-19142973, Var1, 256105670);
		func_1228(-2074737817, Var1, -1328061889);
		func_1228(-1114256243, Var1, -782241404);
		func_1228(-1653277288, Var1, 1669853467);
		func_1228(1869398132, Var1, -1559225678);
		func_1228(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_731(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_639(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_639(24) && func_731(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_731(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_639(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_711()
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

int func_712(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_617(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1124(iParam0, 1);
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
			func_697(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_368(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_694(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_621(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_621(iParam0, 0, 0) - iParam1) < 0)
		{
			func_712(iParam0, func_621(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_636(iParam0) == -427144552)
	{
		if (!func_1229(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1230(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_645(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_697(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1231(iParam0, iParam1);
	return 1;
}

bool func_713(int iParam0)
{
	switch (func_641(iParam0))
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

void func_714(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_641(iParam0))
	{
		case -2061583405:
			bVar0 = func_1232(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1232(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1232(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1232(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1232(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1232(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1233();
	}
	if (bParam1)
	{
		func_1234(0, 0);
	}
}

int func_715(int iParam0)
{
	Var0 = { func_728(iParam0, 1, 0) };
	return func_729(Var0.f_4);
}

int func_716(int iParam0, int iParam1)
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

void func_717(int iParam0)
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
		iVar0 = func_716(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1235(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_718()
{
	return Global_1946804->f_1;
}

bool func_719(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1236(iParam6);
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
		func_1238(uParam0, func_1237(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_716(iVar3, 1);
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
							if (func_1239(iVar3) && func_1240(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1241(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_720(int iParam0, int iParam1)
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

int func_721(int iParam0, int iParam1)
{
	vVar0 = { func_720(iParam0, iParam1) };
	return vVar0.x;
}

void func_722(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_723(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_724(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1242(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1243(iParam0))
	{
		return false;
	}
	if (func_1244(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1198(iParam0, 1)) || func_82(32768))
	{
		if (!func_1198(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1245())
	{
		return false;
	}
	return true;
}

void func_725(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_726(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_727(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1246(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1247(Var0);
}

struct<5> func_728(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1248(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_636(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1148(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1249(bParam1) };
			if (bParam2 && func_1250(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1146(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1146(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1147(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1251(bParam1) };
			switch (func_641(iParam0))
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
			if (func_1252(iParam0, -1823706425))
			{
				Var0 = { func_1148(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1252(iParam0, -1483207246))
			{
				Var0 = { func_1148(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1253(Var0, &Var27, bParam1, 0))
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

int func_729(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1254(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_730(int iParam0)
{
	func_1235(Global_1946804->f_1497.f_1[func_716(iParam0, 1)], 2, 6);
	func_1235(Global_1946804->f_1378.f_1[func_716(iParam0, 1)], 2, 6);
}

bool func_731(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_732(int iParam0)
{
	return iParam0 != 0;
}

int func_733(int iParam0)
{
	iVar0 = -1;
	if (!func_732(iParam0))
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

bool func_734(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_735(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1255(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_736(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_737(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_738(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_739(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_740(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_741(int iParam0, int iParam1)
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

void func_742(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1256(iParam0, iParam6);
	func_1257(iParam0, iParam5);
	func_1258(iParam0, iParam4);
	func_1259(iParam0, iParam3);
	func_1260(iParam0, iParam2);
	func_1261(iParam0, iParam1);
}

bool func_743(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_740(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_739(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_738(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_735(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_736(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_737(iParam0);
	if (iVar5 < 1 || iVar5 > func_741(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_744(int iParam0, bool bParam1)
{
	return func_1035(func_307(), iParam0, bParam1);
}

void func_745(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_746(int iParam0, int iParam1)
{
	if (!func_617(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1124(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1192("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1193(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_731(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1194(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1194(iVar1);
	}
	return false;
}

var func_747(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1262(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_748()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_459(iVar1);
		if (!_unlock_is_visible(func_1263(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_749()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_459(iVar0);
		if (!_unlock_is_visible(func_1263(iVar1)))
		{
			_unlock_set_visible(func_1263(iVar1), true);
		}
		iVar0++;
	}
}

bool func_750(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1046(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_751(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_518(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_752()
{
	return (func_222(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_753(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_617(iVar0, 0))
	{
		return 0;
	}
	if (!func_1264(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1265(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_637(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_728(iVar0, 0, 1) };
	iVar10 = func_1266(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1267(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1268(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_339(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1224(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_754(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_755(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_747(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_756(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_757(bool bParam0, bool bParam1)
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

void func_758(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1092())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1092())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_217(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_294(iParam0);
	if (func_219(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_219(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1269(1, iVar1);
					func_1269(8, iVar1);
					func_1269(7, iVar1);
					break;
				case 12:
					func_1269(6, iVar1);
					break;
				case 53:
					func_1269(3, iVar1);
					func_1269(7, iVar1);
					func_1269(4, iVar1);
					break;
				case 20:
					func_1269(8, iVar1);
					break;
				case 19:
					func_1269(1, iVar1);
					func_1269(2, iVar1);
					break;
				case 24:
					func_1269(3, iVar1);
					func_1269(9, iVar1);
					func_1269(20, iVar1);
					break;
				case 28:
					func_1269(1, iVar1);
					break;
				case 34:
					func_1269(23, iVar1);
					func_1269(2, iVar1);
					func_1269(18, iVar1);
					break;
				case 29:
					func_1269(0, iVar1);
					func_1269(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1269(0, iVar1);
					func_1269(3, iVar1);
					func_1269(2, iVar1);
					func_1269(11, iVar1);
					func_1269(6, iVar1);
					func_1269(25, iVar1);
					func_1269(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1269(5, iVar1);
					break;
				case 63:
					func_1269(1, iVar1);
					func_1269(3, iVar1);
					break;
				case 37:
					func_1269(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_384(0, 10, 11, 2116153146))
			{
				func_1269(7, iVar1);
				func_1269(4, iVar1);
			}
			else if (iParam0 == func_384(0, 7, 11, -379687487))
			{
				func_1269(8, iVar1);
				func_1269(15, iVar1);
			}
			else if (iParam0 == func_384(0, 8, 11, -1386089015))
			{
				func_1269(3, iVar1);
			}
			else if (iParam0 == func_384(0, 11, 11, -1952009645))
			{
				func_1269(6, iVar1);
				func_1269(3, iVar1);
			}
			else if (iParam0 == func_384(0, 12, 11, 2065895756))
			{
				func_1269(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1270()));
	if (!func_1271(629))
	{
		func_346(629, 0);
	}
}

int func_759(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_760(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_761(int iParam0, int iParam1, int iParam2)
{
	if (!func_760(iParam0))
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

int func_762()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_763(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_764(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1272(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_762())
	{
		return -1;
	}
	iVar0 = func_763(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_536(iVar1, 0);
	func_596(iVar1, 0);
	func_501(iVar1, 0);
	func_1273(iVar1, 0);
	func_1274(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1275(iVar1, iParam4);
	}
	return iVar1;
}

int func_765(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_368(1811977508, 1, 0))
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
			if (func_617(iVar25, 0) && func_637(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_766(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_767(int iParam0)
{
	if (!func_214(iParam0))
	{
		return 0;
	}
	cVar0 = func_386(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_768(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_769(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_1276(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1277() == 0 && !func_1278(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1279(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1280();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1281(Global_1310720->f_21))
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
			vVar7 = { func_1282(iVar0, iVar1) };
			bVar11 = func_1283(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_419(vVar7)) && func_1284(iVar0, bParam8, iParam12)) && !func_1285(iVar0)) || bVar11)
			{
				if (func_1286(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_770(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1287(vParam0);
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

void func_771()
{
	disable_script_brain_set(1);
}

void func_772()
{
}

void func_773()
{
	disable_script_brain_set(2);
}

bool func_774(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_775(char* sParam0)
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

void func_776(int iParam0)
{
	if (func_774(iParam0, 1))
	{
		func_1288(1);
	}
}

int func_777()
{
	return -1904156936;
}

bool func_778(int iParam0)
{
	if (!func_214(iParam0))
	{
		return false;
	}
	switch (func_219(iParam0))
	{
		case 1:
			iVar0 = func_294(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_294(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_779()
{
	return 166188472;
}

int func_780()
{
	return 2015838421;
}

int func_781()
{
	return 207908017;
}

var func_782(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_783(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_784(var uParam0)
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

int func_785(var uParam0, int iParam1)
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

char* func_786(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1289(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1290(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1291(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_787(var uParam0, char* sParam1)
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

int func_788(var uParam0)
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

void func_789(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_790(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_791()
{
	return Global_1572864->f_8;
}

void func_792(var uParam0, int iParam1)
{
	func_1292(uParam0, iParam1);
	func_1293(uParam0, iParam1, 26);
}

int func_793(var uParam0)
{
	if (func_941(uParam0) == 2)
	{
		if (!&iLocal_1482[0] == 6)
		{
			func_1294(uParam0);
			if (!&iLocal_1482[0] == 6)
			{
				return 0;
			}
		}
	}
	if (func_941(uParam0) == 1 || func_941(uParam0) == 2)
	{
		func_1295(Global_35, func_247(iVar1174), 2, 1073741824);
		func_1295(&(Local_133[6]), func_551(0, 1), 2, 1073741824);
		func_1295(&(Local_133[7]), func_551(0, 3), 2, 1073741824);
	}
	return 1;
}

int func_794(var uParam0)
{
	if (!func_941(uParam0) == 1)
	{
		func_1296(uParam0, &(Local_133[11]), 128);
		func_1296(uParam0, &(Local_133[8]), 128);
		func_1296(uParam0, &(Local_133[9]), 128);
	}
	func_462(91);
	func_173(0, 1);
	return 1;
}

int func_795(var uParam0)
{
	if (!func_463(91))
	{
		return 0;
	}
	func_409(&(uParam0->f_7375));
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 == 0)
		{
			iVar1 = 8;
			cVar2 = "HoseaMatthews";
		}
		else if (iVar0 == 1)
		{
			iVar1 = 9;
			cVar2 = "MollyOshea";
		}
		else if (iVar0 == 2)
		{
			iVar1 = 11;
			cVar2 = "MrPearson";
		}
	else
	{
		}
		else
		{
			if (iVar1 == 9 && func_165(38))
			{
			}
			else
			{
				func_995(uParam0, &(Local_133[iVar1]));
				func_996(&(uParam0->f_7375), &(Local_133[iVar1]), cVar2);
				if (_does_anim_scene_exist(uParam0->f_7375.f_804))
				{
					if (_get_anim_scene_ped(uParam0->f_7375.f_804, cVar2, false) == &Local_133[iVar1])
					{
						remove_anim_scene_entity(uParam0->f_7375.f_804, cVar2, &(Local_133[iVar1]));
					}
				}
			}
			iVar0++;
		}
	}
	func_456(8);
	func_456(9);
	func_194(1, 1);
	if (_does_scenario_point_exist(iVar1177))
	{
		_task_use_scenario_point(&(Local_133[8]), iVar1177, 0, 0, false, true, 0, false, -1f, false);
		_set_entity_coords_and_heading(&(Local_941[1]), 666.46f, -1244.86f, 43.14f, -131.26f, true, false, true);
	}
	if (_does_scenario_point_exist(iVar1178))
	{
		if (does_entity_exist(&(Local_941[2])))
		{
			_set_entity_coords_and_heading(&(Local_941[2]), 666.549f, -1243.185f, 43.1437f, -46f, true, false, true);
		}
		_task_use_scenario_point(&(Local_133[11]), iVar1178, 0, 0, false, true, 0, false, -1f, false);
	}
	func_474(uParam0, 9, 0, 1);
	func_194(0, 1);
	if (!is_entity_dead(&(Local_133[2])))
	{
		_set_entity_coords_and_heading(&(Local_133[2]), func_845(0, 2), func_1297(0, 2), true, false, true);
		_0x9587913b9e772d29(&(Local_133[2]), 0);
	}
	if (!is_entity_dead(&(Local_133[3])))
	{
		_set_entity_coords_and_heading(&(Local_133[3]), func_845(0, 4), func_1297(0, 4), true, false, true);
		_0x9587913b9e772d29(&(Local_133[3]), 0);
	}
	if (!is_entity_dead(&(Local_133[3])))
	{
		_set_entity_coords_and_heading(&(Local_133[3]), func_845(0, 4), func_1297(0, 4), true, false, true);
		_0x9587913b9e772d29(&(Local_133[3]), 0);
	}
	func_169(0);
	func_1298(7);
	func_167(1);
	set_current_ped_weapon(&(Local_133[7]), -1569615261, true, 0, false, false);
	_hide_ped_weapons(&(Local_133[7]), 2, false);
	set_ped_config_flag(&(Local_133[7]), 130, false);
	set_ped_config_flag(&(Local_133[7]), 315, false);
	set_ped_config_flag(&(Local_133[7]), 297, true);
	set_ped_config_flag(&(Local_133[7]), 317, true);
	set_ped_config_flag(&(Local_133[7]), 359, true);
	return 1;
}

int func_796(var uParam0)
{
	_0xc71d07c96946e263(player_id(), &(Local_133[1]));
	iLocal_1200 = func_1299(Global_35);
	iLocal_1201 = func_1299(&(Local_133[7]));
	if (func_1301(func_1300(25)))
	{
		if (get_current_scripted_conversation_line(func_1300(25)) >= 24 && iVar1197 >= 102)
		{
			func_1302(func_1300(25), 1, 0);
		}
	}
	func_1303(uParam0);
	func_1304(uParam0);
	if (func_165(34))
	{
		fVar0 = (func_1305(Global_35, _0xf70f00013a62f866(Local_89.f_18), 1) / get_distance_between_coords(func_845(0, 1), _0xf70f00013a62f866(Local_89.f_18), true));
		fVar0 = func_516(((fVar0 * -1f) + 1f), 0f, 1f);
		func_1306(6, 0, fVar0, &uLocal_1183);
	}
	else if (!func_165(30))
	{
		pause_clock(true, 0);
		func_456(30);
	}
	if (func_165(8))
	{
		if (is_entity_dead(&(Local_133[1])) || is_ped_fatally_injured(&(Local_133[1])))
		{
			func_1307(uParam0, func_1300(17), "", 1, 0);
		}
	}
	if (func_165(9))
	{
		if (is_entity_dead(&(Local_133[func_1308(6)])))
		{
			func_1307(uParam0, func_1300(18), "", 1, 0);
		}
		if (is_entity_dead(&(Local_133[func_1308(7)])))
		{
			func_1307(uParam0, func_1300(19), "", 1, 0);
		}
	}
	func_1309(uParam0);
	func_1310(uParam0);
	func_1311();
	switch (func_1312(uParam0))
	{
		case 0:
			func_1313(21);
			func_1314(0, &(Local_133[1]));
			func_1315(uParam0, 0);
			_set_weather_type(1632247697, true, true, true, 180f, false);
			func_134(uParam0, 1);
			break;
		case 1:
			if (func_1316(Global_35, &(Local_133[1]), 1))
			{
				if (!func_165(35))
				{
					if ((!has_ped_got_weapon(Global_35, 1402226560, 0, false) && !has_ped_got_weapon(Global_35, -506285289, 0, false)) && !has_ped_got_weapon(Global_35, 1311933014, 0, false))
					{
						func_1317(Global_35, &(iLocal_781[1]), -1, 0, 0, 1056964608, 1065353216, 0);
					}
					func_456(35);
				}
				if (Local_133[6]->f_2 == 27 && Local_133[7]->f_2 == 27)
				{
					func_1318(0);
					func_1314(1, &(Local_133[7]));
					func_1315(uParam0, 1);
					func_1319(func_470(7));
					func_1320(uParam0, &(Local_133[7]), -2045797884, 422991367, 1, 1);
					func_1313(24);
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_134(uParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_165(37))
			{
				if ((iVar1117 == 0 && !func_1321(1)) && !func_1322(1))
				{
					func_27(vLocal_792[5], 0);
					if (func_934(vLocal_792[5]) >= 16f)
					{
						func_1313(25);
						func_456(37);
					}
				}
			}
			if (!func_165(39))
			{
				if (iVar1197 >= 10)
				{
					if (!func_941(uParam0) == 1)
					{
						func_474(uParam0, 8, 0, 0);
						func_466(func_1323(8));
						func_471(uParam0, 1, 0);
						func_173(0, 0);
						if (_does_scenario_point_exist(iVar1177))
						{
							iLocal_1180 = 0;
						}
						func_474(uParam0, 11, 0, 0);
						func_466(func_1323(11));
						func_471(uParam0, 2, 0);
						if (_does_scenario_point_exist(iVar1178))
						{
							iLocal_1181 = 0;
						}
						func_456(39);
					}
					else
					{
						func_456(39);
					}
				}
			}
			else if (iVar1197 >= 79 || iVar1198 >= 79)
			{
				func_134(uParam0, 3);
			}
			break;
		case 3:
			func_462(11);
			func_462(10);
			func_462(13);
			func_462(92);
			if (((!func_463(11) || !func_463(10)) || !func_463(13)) || !func_463(92))
			{
			}
			else
			{
				if (func_1324(uParam0, 16, 23, 271))
				{
					iVar1 = 16;
					while (iVar1 <= 23)
					{
						set_entity_lod_dist(&(Local_133[iVar1]), 350);
						iVar1++;
					}
					func_134(uParam0, 5);
				}
				Jump @1434; //curOff = 1063
				if (Local_133[16]->f_2 == 15)
				{
					if (func_1299(Global_35) >= 94)
					{
						func_1325(16, 19, 26, 1);
					}
				}
				if (!is_entity_dead(Global_35) && !is_entity_dead(&(Local_133[7])))
				{
					if (iVar1197 >= 109 || iVar1198 >= 111)
					{
						if (is_entity_in_volume(Global_35, Local_89.f_21, true, 0) && is_entity_in_volume(&(Local_133[7]), Local_89.f_21, true, 0))
						{
							if (!is_entity_dead(&(Local_133[16])))
							{
								set_gameplay_entity_hint(&(Local_133[16]), 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
								if (func_1326(func_1300(25)))
								{
									func_1327(func_1300(25), 0, 0);
								}
								func_1313(26);
							}
						}
						func_1325(16, 19, 28, 1);
						func_134(uParam0, 6);
					}
				}
				Jump @1434; //curOff = 1268
				if (!func_1328(func_1300(26)) && !func_1301(func_1300(26)))
				{
					func_27(vLocal_792[6], 0);
					if (func_934(vLocal_792[6]) >= 1.5f)
					{
						func_1330(&(uParam0->f_5310), func_1329(27), 0, -1, 0, 0);
						func_462(93);
						func_134(uParam0, 7);
					}
				}
				Jump @1434; //curOff = 1364
				func_1331();
				if (is_entity_in_volume(Global_35, Local_89.f_18, true, 0))
				{
					if (func_1326(func_1300(27)))
					{
						func_1327(func_1300(27), 0, 0);
					}
					func_134(uParam0, 29);
					return 1;
				}
				Jump @1434; //curOff = 1424
				return 1;
			}
			return 0;
			default:
				break;
	}
}

int func_797(var uParam0)
{
	if (is_ped_in_group(&(Local_133[6])))
	{
		remove_ped_from_group(&(Local_133[6]));
	}
	if (is_ped_in_group(&(Local_133[7])))
	{
		remove_ped_from_group(&(Local_133[7]));
	}
	remove_group(iVar1176);
	func_167(0);
	func_176(8);
	func_1320(uParam0, &(Local_133[7]), -2045797884, 422991367, 0, 1);
	func_167(0);
	return 1;
}

void func_798(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(uParam0, iParam1, iParam9);
	func_1332(uParam0, iParam1);
	func_1293(uParam0, iParam1, iParam2);
	func_1333(uParam0, &iParam3, iParam1, 0);
	func_1333(uParam0, &iParam4, iParam1, 2);
	func_1333(uParam0, &iParam5, iParam1, 4);
	func_1333(uParam0, &iParam6, iParam1, 5);
	func_1333(uParam0, &iParam7, iParam1, 7);
	func_966(uParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1334(uParam0, iParam1, cVar0);
	func_1335(uParam0, iParam1, iParam10);
}

int func_799(var uParam0)
{
	if (!is_entity_dead(Global_35) && !is_entity_dead(&(Local_133[1])))
	{
		_set_ped_on_mount(Global_35, &(Local_133[1]), -1, true);
		_0x2208438012482a1a(Global_35, true, false);
		_set_entity_coords_and_heading(&(Local_133[1]), func_845(1, 1), func_1297(1, 1), true, false, true);
		freeze_entity_position(&(Local_133[1]), false);
		_0x9587913b9e772d29(&(Local_133[1]), 0);
		_0x2208438012482a1a(&(Local_133[1]), false, false);
	}
	set_gameplay_cam_relative_heading(0f, 1f);
	set_gameplay_cam_relative_pitch(0f, 1f);
	if (!is_entity_dead(&(Local_133[6])) && !is_entity_dead(&(Local_133[func_1308(6)])))
	{
		_set_ped_on_mount(&(Local_133[6]), &(Local_133[func_1308(6)]), -1, true);
		_set_entity_coords_and_heading(&(Local_133[func_1308(6)]), func_845(0, 5), func_1297(0, 5), true, false, true);
		_0x9587913b9e772d29(&(Local_133[func_1308(6)]), 0);
		_0x2208438012482a1a(&(Local_133[func_1308(6)]), true, false);
		_0x2208438012482a1a(&(Local_133[6]), true, false);
	}
	if (!is_entity_dead(&(Local_133[7])) && !is_entity_dead(&(Local_133[func_1308(7)])))
	{
		_set_ped_on_mount(&(Local_133[7]), &(Local_133[func_1308(7)]), -1, true);
		_set_entity_coords_and_heading(&(Local_133[func_1308(7)]), func_845(0, 6), func_1297(0, 6), true, false, true);
		_0x9587913b9e772d29(&(Local_133[func_1308(7)]), 0);
		_0x2208438012482a1a(&(Local_133[func_1308(7)]), true, false);
		_0x2208438012482a1a(&(Local_133[7]), true, false);
	}
	func_169(0);
	func_194(1, 1);
	func_456(8);
	func_456(9);
	set_clock_time(9, 0, 0);
	vVar0 = { func_1336(1, 2) };
	func_131(vVar0, 500f, 0, 0, 0, 0, 0);
	return 1;
}

int func_800(var uParam0)
{
	func_462(84);
	func_462(85);
	func_462(86);
	func_462(func_1323(5));
	func_462(func_461(4));
	func_462(45);
	if (!func_463(45))
	{
		return 0;
	}
	func_99(uParam0, 33554432);
	func_1325(16, 23, 0, 1);
	func_27(vLocal_792[0], 1);
	return 1;
}

int func_801(var uParam0)
{
	if (!func_934(vLocal_792[0]) >= 0.2f)
	{
		return 0;
	}
	_0x6a4d224fc7643941(&Local_1202);
	Local_1202.f_19 = &Local_133[6];
	func_943(6, 1);
	func_943(7, 1);
	_0x72d4cb5db927009c(&(iLocal_781[0]), -1, 0);
	func_1337(1);
	pause_clock(false, 0);
	func_176(30);
	return 1;
}

int func_802(var uParam0)
{
	if (!func_26(vLocal_792[11]))
	{
		if (func_983(player_id(), 1, 0, 1))
		{
			func_27(vLocal_792[11], 0);
		}
	}
	else if (func_934(vLocal_792[11]) >= 3f)
	{
		func_1339(uParam0, func_1338(20), 1, 0);
	}
	func_1340();
	if (func_165(56))
	{
		_0xc9caeaeec1256e54(iLocal_131);
	}
	if (func_165(48))
	{
		func_1341(0);
	}
	if (!func_165(30))
	{
		if (get_clock_hours() >= 9)
		{
			pause_clock(true, 0);
			func_456(30);
		}
	}
	set_ped_can_play_ambient_anims(Global_35, false);
	set_ped_can_play_ambient_base_anims(Global_35, false);
	set_ped_can_play_gesture_anims(Global_35, 0, 1);
	disable_control_action(0, 399753205, false);
	if (func_165(49))
	{
		disable_control_action(1, -1722177808, false);
		_clamp_gameplay_cam_yaw(-45f, 45f);
		_clamp_gameplay_cam_pitch(-40f, -16f);
		if (_0xa24c1d341c6e0d53(1, 0, 1) && !func_1342(Global_35))
		{
			set_entity_heading(Global_35, 100f);
		}
	}
	if (func_165(56))
	{
		func_1341(2);
	}
	if (func_165(9))
	{
		if (is_entity_dead(&(Local_133[func_1308(6)])))
		{
			func_1307(uParam0, func_1300(18), "", 1, 0);
		}
		if (is_entity_dead(&(Local_133[func_1308(7)])))
		{
			func_1307(uParam0, func_1300(19), "", 1, 0);
		}
	}
	if (!func_165(53))
	{
		if (func_1326(func_1300(31)))
		{
			if (!func_26(vLocal_792[14]))
			{
				if (get_current_scripted_conversation_line(func_1300(31)) == 1)
				{
					func_27(vLocal_792[14], 0);
				}
			}
			else if (!func_165(52))
			{
				if (func_934(vLocal_792[14]) >= 3.3f)
				{
					if (!Local_1169.f_1 == 0)
					{
						func_1343(7, &Local_1169, _0xf70f00013a62f866(Local_89.f_6));
						func_456(52);
					}
				}
			}
			else if (!func_165(53))
			{
				func_1344(&Local_1169);
				if (Local_1169.f_1 == 0)
				{
					func_456(53);
				}
			}
		}
	}
	func_1345(uParam0);
	func_1309(uParam0);
	func_1346(uParam0);
	func_1310(uParam0);
	if (!func_165(51))
	{
		if (!is_ped_on_mount(Global_35))
		{
			if ((has_ped_got_weapon(Global_35, -506285289, 0, false) || has_ped_got_weapon(Global_35, 1402226560, 0, false)) || has_ped_got_weapon(Global_35, 1311933014, 0, false))
			{
				func_1347(6);
			}
			else
			{
				func_1317(Global_35, &(iLocal_781[1]), -1, 0, 0, 1056964608, 1065353216, 0);
			}
			func_456(51);
		}
	}
	switch (func_1312(uParam0))
	{
		case 0:
			func_1318(1);
			func_1348(uParam0, &(Local_133[7]), 1);
			iVar0 = 6;
			while (iVar0 <= 7)
			{
				if (func_924(Global_35, &(Local_133[iVar0]), 1, 1) >= 100f)
				{
					if (iVar0 == 6)
					{
						Var1 = { func_551(0, 5) };
					}
					else if (iVar0 == 7)
					{
						Var1 = { func_551(0, 6) };
					}
					func_1295(&(Local_133[iVar0]), Var1, 2, 1073741824);
				}
				iVar0++;
			}
			func_1349();
			func_134(uParam0, 1);
			break;
		case 1:
			if (!func_165(46))
			{
				if (func_463(func_1323(5)) && func_463(func_461(4)))
				{
					if (func_1324(uParam0, 5, 5, 1))
					{
						func_1350(4);
						func_456(46);
					}
				}
			}
			vVar5 = { _0x3e2a25b2416dd67e(Local_89.f_16) };
			if (get_distance_between_coords(get_entity_coords(Global_35, true, false), _0xf70f00013a62f866(Local_89.f_16), true) < (vVar5.x * 1.2f))
			{
				if (Local_133[5]->f_2 == 1)
				{
					task_fly_to_coord(&(Local_133[5]), 3f, 369.1f, -12.8f, 107.4f, 1, 0);
					func_943(5, 29);
				}
				disable_control_action(0, -128997553, false);
			}
			if (is_ped_on_mount(Global_35))
			{
				if (Global_36.f_2 >= 130f)
				{
					func_1351(Global_35, _0xf70f00013a62f866(Local_89.f_6), vLocal_792[15], 20f, 15f, 6.2f, 6.1f, 6f, 0, 0, 1, 1, 1);
				}
				if (is_entity_in_volume(&(Local_133[1]), Local_89.f_6, true, 0) && !func_1352(Global_35, 501393341))
				{
					task_dismount_animal(Global_35, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_456(48);
				if (func_1353(7))
				{
					func_59(7);
				}
				if (func_1305(Global_35, _0xf70f00013a62f866(Local_89.f_6), 1) < (func_1354(Local_89.f_6) * 1f))
				{
					set_ped_max_move_blend_ratio(Global_35, 1f);
				}
				else if (func_1305(Global_35, _0xf70f00013a62f866(Local_89.f_6), 1) < (func_1354(Local_89.f_6) * 1.25f))
				{
					set_ped_max_move_blend_ratio(Global_35, 1.5f);
				}
				if (!is_entity_dead(&(Local_133[1])))
				{
					vVar8 = { _0xf70f00013a62f866(Local_89.f_6) };
					if (get_distance_between_coords(Global_36, vVar8, true) <= 20f && absf((Global_36.f_2 - vVar8.z)) <= 5f)
					{
						_0x437c08db4febe2bd(Global_35, "stealth", 1f, 1);
						if (!get_ped_config_flag(&(Local_133[1]), 136, true))
						{
							set_ped_config_flag(&(Local_133[1]), 136, true);
						}
						if (!func_165(50))
						{
							if (func_924(Global_35, &(Local_133[1]), 1, 1) >= 3f)
							{
								func_1355();
								task_follow_nav_mesh_to_coord(0, func_1336(1, 6), 1f, -1, 0.25f, 0, 40000f);
								_task_start_scenario_in_place(0, 696740378, -1, true, 0, -1f, false);
								func_1356(&(Local_133[1]), 0);
								func_456(50);
							}
						}
					}
				}
				if (is_entity_in_volume(Global_35, Local_89.f_16, true, 0))
				{
					func_1337(0);
					func_466(93);
					func_1357();
					func_1358();
					set_player_control(player_id(), false, 256, false);
					func_456(49);
					remove_blip(iLocal_775[0]);
					func_175(0);
					disable_control_action(0, 1606906090, false);
					func_1318(2);
					if (_0xa24c1d341c6e0d53(1, 0, 0))
					{
						_0xb8b207c34285e978(&Local_1202);
					}
					func_134(uParam0, 2);
				}
			}
			break;
		case 2:
			disable_control_action(0, 1606906090, false);
			if (_0x927b810e43e99932(&Local_1202))
			{
				_0x7b0279170961a73f(&Local_1202);
				if (!is_ped_on_mount(&(Local_133[6])))
				{
					_0x0a5a4f1979abb40e(&Local_1202);
				}
			}
			if (!func_165(58))
			{
				if (!func_1342(Global_35))
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
					_0xdd1232b332cbb9e7(1, 1, 0);
					if (is_pc_version())
					{
						func_1359(35);
					}
					else
					{
						func_1359(34);
					}
					func_1360(36);
					func_1319(func_470(6));
					func_1319(func_470(7));
					func_456(58);
				}
				else
				{
					_0xdd1232b332cbb9e7(1, 1, 0);
				}
			}
			else if (is_disabled_control_just_pressed(0, func_1361(0)))
			{
				if (_0x927b810e43e99932(&Local_1202))
				{
					_0x0a5a4f1979abb40e(&Local_1202);
				}
				set_player_control(player_id(), true, 0, false);
				set_player_forced_aim(player_id(), true, &(Local_133[6]), 21030, false);
				_0xdd1232b332cbb9e7(3, 1, 0);
				_0xdd1232b332cbb9e7(1, 1, 0);
				set_gameplay_entity_hint(&(Local_133[6]), func_1362(0), true, 2000, 2000, 2000, 0);
				func_134(uParam0, 3);
			}
			break;
		case 3:
			disable_control_action(0, 1606906090, false);
			func_462(11);
			func_462(10);
			func_462(12);
			func_462(func_1323(20));
			func_462(func_1323(21));
			func_462(func_1323(22));
			if (((((!func_463(11) || !func_463(10)) || !func_463(12)) || !func_463(func_1323(20))) || !func_463(func_1323(21))) || !func_463(func_1323(22)))
			{
				return 0;
			}
			if (func_1324(uParam0, 16, 16, 2063))
			{
				func_134(uParam0, 4);
			}
			break;
		case 4:
			disable_control_action(0, 1606906090, false);
			if (func_1324(uParam0, 17, 22, 2063))
			{
				func_1363(&(uParam0->f_7375), "MultiStart");
				func_134(uParam0, 5);
			}
			break;
		case 5:
			disable_control_action(0, 1606906090, false);
			if (!&iLocal_1482[1] == 6)
			{
				func_1364(uParam0);
			}
			_0x05bd5e4088b30a66(-5.8f, 26.64f);
			_set_first_person_cam_pitch_range(-34f, -20f);
			func_27(vLocal_792[16], 0);
			if (func_934(vLocal_792[16]) >= 5f && (func_26(vLocal_792[17]) && func_934(vLocal_792[17]) >= 5f))
			{
				if (&iLocal_1482[1] == 6)
				{
					func_134(uParam0, 29);
				}
			}
			break;
		case 29:
			disable_control_action(0, 1606906090, false);
			return 1;
	}
	return 0;
}

int func_803(var uParam0)
{
	disable_control_action(0, 1606906090, false);
	if (!is_entity_dead(&(Local_133[6])))
	{
		clear_ped_tasks(&(Local_133[6]), 1, 0);
	}
	if (!is_entity_dead(&(Local_133[7])))
	{
		clear_ped_tasks(&(Local_133[7]), 1, 0);
	}
	func_176(9);
	func_930(uParam0, 33554432);
	func_466(91);
	func_466(45);
	func_474(uParam0, 5, 0, 0);
	func_471(uParam0, 4, 0);
	func_466(func_1323(5));
	func_466(func_461(4));
	if (!has_ped_got_weapon(Global_35, &(iLocal_781[1]), 0, true))
	{
		func_1317(Global_35, &(iLocal_781[1]), -1, 0, 0, 1056964608, 1065353216, 0);
	}
	set_player_control(player_id(), true, 0, false);
	_0x798be43c9393632b(&Local_1202);
	set_blocking_of_non_temporary_events(&(Local_133[6]), true);
	set_blocking_of_non_temporary_events(&(Local_133[7]), true);
	func_169(1);
	func_175(1);
	return 1;
}

int func_804(var uParam0)
{
	bVar0 = true;
	iVar1 = func_941(uParam0);
	func_462(85);
	if (!func_165(59))
	{
		func_462(11);
		func_462(10);
		func_462(12);
		func_462(func_1323(20));
		func_462(func_1323(21));
		func_462(func_1323(22));
		if (((((!func_463(11) || !func_463(10)) || !func_463(12)) || !func_463(func_1323(20))) || !func_463(func_1323(21))) || !func_463(func_1323(22)))
		{
			return 0;
		}
		if (!func_1324(uParam0, 16, 16, 2063))
		{
			bVar0 = false;
		}
		if (!func_1324(uParam0, 17, 22, 2079))
		{
			bVar0 = false;
		}
		if (!func_463(85))
		{
			bVar0 = false;
		}
		if (!bVar0)
		{
			return 0;
		}
		else
		{
			func_456(59);
		}
	}
	if (iVar1 == 2)
	{
		if (!&iLocal_1482[1] == 6)
		{
			if (!func_1364(uParam0))
			{
				return 0;
			}
		}
		else
		{
			func_1365(&(uParam0->f_7375), "MultiStart", 0);
			func_1366(&(uParam0->f_7375), "MultiStart");
		}
	}
	if (!func_368(-160924582, 1, 0))
	{
		func_339(&(iLocal_781[0]), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	func_1317(Global_35, &(iLocal_781[1]), -1, 0, 0, 1056964608, 1065353216, 0);
	set_current_ped_weapon(Global_35, &(iLocal_781[1]), true, 0, false, false);
	func_456(51);
	return 1;
}

int func_805(var uParam0)
{
	func_1341(2);
	if (func_165(56))
	{
		_0xc9caeaeec1256e54(iLocal_131);
	}
	if (!is_entity_dead(Global_35))
	{
		set_entity_invincible(Global_35, true);
	}
	func_1367(func_1336(6, 1), 30f);
	if (!does_entity_exist(&(Local_941[7])))
	{
		Local_941[7] = _create_weapon_object(&(iLocal_781[8]), -1, func_1336(6, 7), true, 1f);
	}
	func_1368(uParam0, 2);
	func_1368(uParam0, 4);
	func_462(87);
	if (is_ped_on_mount(&(Local_133[6])))
	{
		_remove_ped_from_mount(&(Local_133[6]), true, false);
	}
	if (is_ped_on_mount(&(Local_133[7])))
	{
		_remove_ped_from_mount(&(Local_133[7]), true, false);
	}
	set_player_forced_aim(player_id(), false, 0, -1, false);
	func_401(uParam0, 524288);
	func_164(1);
	return 1;
}

int func_806(var uParam0)
{
	func_466(84);
	func_462(87);
	func_1317(Global_35, &(iLocal_781[1]), -1, 0, 0, 1056964608, 1065353216, 0);
	_0x95ee1dee1dcd9070(player_id(), 0);
	do_screen_fade_out(0);
	animpostfx_play(func_198(0));
	return 1;
}

int func_807(var uParam0)
{
	_0x8910c24b7e0046ec();
	func_1341(8);
	if (func_165(62))
	{
		func_1369(0);
		if (func_165(64))
		{
			func_1370(1f);
		}
	}
	func_1309(uParam0);
	func_1310(uParam0);
	switch (func_1312(uParam0))
	{
		case 0:
			if (!func_1371(uParam0) == 1)
			{
				func_135(uParam0, 1);
			}
			func_182();
			_set_ped_crouch_movement(Global_35, false, 0, false);
			func_194(1, 0);
			_hide_hud_component(iLocal_131);
			func_134(uParam0, 1);
			break;
		case 1:
			func_508(-508205317);
			func_474(uParam0, 19, "G_M_M_UNIDUSTER_01", 0);
			func_466(86);
			func_995(uParam0, &(Local_941[7]));
			func_996(&(uParam0->f_7375), &(Local_941[7]), "w_shotgun_doubleBarrel01");
			func_471(uParam0, 7, 0);
			func_201(1);
			func_466(85);
			func_176(9);
			func_474(uParam0, 1, 0, 0);
			func_945(7);
			func_474(uParam0, 2, 0, 0);
			func_474(uParam0, 3, 0, 0);
			func_474(uParam0, 6, 0, 0);
			func_474(uParam0, 7, 0, 0);
			func_466(0);
			func_466(1);
			func_474(uParam0, 16, 0, 0);
			func_474(uParam0, 18, 0, 0);
			func_474(uParam0, 17, 0, 0);
			func_474(uParam0, 20, 0, 0);
			func_474(uParam0, 22, 0, 0);
			func_474(uParam0, 21, 0, 0);
			func_466(11);
			func_466(13);
			func_176(16);
			func_176(15);
			_hide_hud_component(iLocal_131);
			func_1372(1, 1000);
			freeze_entity_position(Global_35, false);
			set_entity_coords(Global_35, func_845(2, 4), true, false, true, true);
			func_1372(0, 0);
			func_178();
			func_134(uParam0, 3);
			break;
		case 3:
			if (!func_1324(uParam0, 24, 31, 31))
			{
				return 0;
			}
			if (!Local_1371[0]->f_1 == 5)
			{
				func_1369(0);
				return 0;
			}
			remove_all_ped_weapons(&(Local_133[24]), true, true);
			remove_all_ped_weapons(&(Local_133[25]), true, true);
			remove_all_ped_weapons(&(Local_133[26]), true, true);
			remove_all_ped_weapons(&(Local_133[27]), true, true);
			func_456(62);
			func_134(uParam0, 4);
			break;
		case 4:
			func_145(uParam0, &(Local_133[24]), "ODR3_ODRISCOLL1", 0);
			func_145(uParam0, &(Local_133[25]), "ODR_PED6", 0);
			func_1373();
			set_player_control(player_id(), false, 256, false);
			func_1374(0, 1);
			func_1372(1, floor((10f * 1000f)));
			func_462(func_461(5));
			_hide_hud_component(iLocal_131);
			func_134(uParam0, 5);
			break;
		case 5:
			_0x90da5ba5c2635416();
			func_1369(1);
			func_1369(5);
			func_1369(2);
			func_462(func_461(5));
			if (_is_anim_scene_finished(&(Local_1371[0]), false))
			{
				func_1372(0, 0);
				func_1325(24, 27, 1, 1);
				func_113(1);
				if (!is_entity_dead(&(Local_133[25])))
				{
					set_gameplay_entity_hint(&(Local_133[25]), 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
				}
				func_134(uParam0, 6);
			}
			break;
		case 6:
			func_1369(1);
			func_1369(5);
			func_1369(2);
			if (((!Local_1371[1]->f_1 == 5 || !Local_1371[5]->f_1 == 5) || !Local_1371[2]->f_1 == 5) || !func_463(func_461(5)))
			{
			}
			else
			{
				func_1375();
				func_27(vLocal_792[20], 1);
				func_27(vLocal_792[22], 1);
				func_134(uParam0, 7);
				Jump @932; //curOff = 897
				func_1341(7);
				if (func_1376(uParam0))
				{
					func_134(uParam0, 29);
				}
				Jump @932; //curOff = 922
				return 1;
			}
			return 0;
			default:
				break;
	}
}

int func_808(var uParam0)
{
	func_178();
	if (((!is_entity_dead(&(Local_133[28])) && !is_entity_dead(&(Local_133[29]))) && !is_entity_dead(&(Local_133[30]))) && !is_entity_dead(&(Local_133[31])))
	{
		set_ped_config_flag(&(Local_133[28]), 136, false);
		set_ped_config_flag(&(Local_133[29]), 136, false);
		set_ped_config_flag(&(Local_133[30]), 136, false);
		set_ped_config_flag(&(Local_133[31]), 136, false);
	}
	_delete_volume(Local_89.f_30);
	_delete_volume(Local_89.f_32);
	animpostfx_stop(func_198(0));
	func_180(uParam0, 0);
	func_466(33);
	func_466(87);
	func_466(61);
	func_205(-508205317);
	_0xc67a4910425f11f1(player_id(), 0);
	func_176(14);
	func_194(0, 0);
	_display_hud_component(iLocal_131);
	return 1;
}

int func_809(var uParam0)
{
	if (!func_1324(uParam0, 24, 31, 31))
	{
		return 0;
	}
	_0x95ee1dee1dcd9070(player_id(), 0);
	func_58(uParam0, 1);
	if (!is_entity_dead(Global_35))
	{
		if (!_0x7c7e4ab748ea3b07())
		{
			func_201(1);
		}
	}
	func_164(1);
	return 1;
}

int func_810(var uParam0)
{
	func_163(1);
	set_player_control(player_id(), false, 256, false);
	func_1377(Global_35);
	func_456(13);
	func_145(uParam0, &(Local_133[24]), "ODR_PED7", 0);
	if (!is_entity_dead(Global_35))
	{
		set_entity_invincible(Global_35, true);
	}
	iVar0 = 24;
	while (iVar0 <= 31)
	{
		set_current_ped_weapon(&(Local_133[iVar0]), -1569615261, true, 0, false, false);
		set_current_ped_weapon(&(Local_133[iVar0]), -1569615261, true, 1, false, false);
		_hide_ped_weapons(&(Local_133[iVar0]), 2, true);
		iVar0++;
	}
	func_175(0);
	return 1;
}

int func_811(var uParam0)
{
	func_1325(24, 27, 1, 1);
	func_188(1);
	func_592(vLocal_792[0]);
	func_194(2, 1);
	animpostfx_play(func_198(1));
	return 1;
}

int func_812(var uParam0)
{
	func_1341(8);
	func_163(1);
	func_1341(6);
	func_1310(uParam0);
	switch (func_1312(uParam0))
	{
		case 0:
			if (!func_26(vLocal_792[0]))
			{
				func_462(94);
				func_462(func_461(19));
				func_1325(24, 27, 1, 1);
				func_1367(func_845(4, 0), 100f);
				iVar0 = 28;
				while (iVar0 <= 31)
				{
					if (iVar0 == 28)
					{
						Var1 = { func_551(4, 0) };
					}
					else if (iVar0 == 29)
					{
						Var1 = { func_551(4, 1) };
					}
					else if (iVar0 == 30)
					{
						Var1 = { func_551(4, 2) };
					}
					else if (iVar0 == 31)
					{
						Var1 = { func_551(4, 3) };
					}
					_set_entity_coords_and_heading(&(Local_133[iVar0]), Var1, Var1.f_3, true, false, true);
					_0x9587913b9e772d29(&(Local_133[iVar0]), 0);
					iVar0++;
				}
				_set_ped_on_mount(&(Local_133[24]), &(Local_133[28]), -1, true);
				_set_ped_on_mount(&(Local_133[25]), &(Local_133[29]), -1, true);
				_set_ped_on_mount(&(Local_133[26]), &(Local_133[30]), -1, true);
				_set_ped_on_mount(&(Local_133[27]), &(Local_133[31]), -1, true);
				_0x4e806a395d43a458(1);
				_0x18ff3110cf47115d(Global_35, 3, 1);
				_0x18ff3110cf47115d(Global_35, 16, 0);
				_0x18ff3110cf47115d(Global_35, 1, 0);
				_0x18ff3110cf47115d(Global_35, 14, 1);
				task_carriable(Global_35, _get_optimal_carry_config(Global_35, 1), &(Local_133[28]), 0, 0);
				set_clock_time(15, 0, 0);
				_set_weather_type(-173507739, true, true, false, 0f, false);
				func_1366(&(uParam0->f_7375), "MultiStart");
				func_27(vLocal_792[0], 0);
			}
			else
			{
				request_collision_at_coord(func_845(4, 0));
				if ((!func_463(94) || !func_463(func_461(19))) || !func_934(vLocal_792[0]) > 0.5f)
				{
				}
				else
				{
					func_1378(0, 1056964608);
					render_script_cams(true, false, 3000, true, false, 0);
					Var5 = { func_1379(0) };
					point_cam_at_coord(&(iLocal_1009[0]), get_offset_from_entity_in_world_coords(&(Local_133[28]), Var5.f_3));
					set_cam_near_clip(&(iLocal_1009[0]), 0.01f);
					set_cam_far_clip(&(iLocal_1009[0]), 50f);
					func_1380();
					set_entity_visible(Global_35, false);
					func_1380();
					func_1350(19);
					attach_entity_to_entity(&(Local_941[19]), &(Local_133[28]), get_ped_bone_index(&(Local_133[28]), 0), 0f, -0.625f, 0.7f, -121.68f, 0f, 0f, false, false, false, false, 2, true, false, false);
					iVar0 = 24;
					while (iVar0 <= 27)
					{
						task_follow_waypoint_recording(&(Local_133[iVar0]), func_496(94), 0, 4194344, -1, 0, 0, -1);
						_0x2208438012482a1a(&(Local_133[iVar0]), false, false);
						force_ped_motion_state(&(Local_133[func_1308(iVar0)]), -668482597, false, 0, false);
						iVar0++;
					}
					func_1313(39);
					_set_ped_component_disabled(&(Local_133[func_1308(24)]), -220774791, 1);
					_update_ped_variation(&(Local_133[func_1308(24)]), false, true, true, true, false);
					func_592(vLocal_792[0]);
					func_134(uParam0, 1);
					Jump @1637; //curOff = 809
					if (func_26(vLocal_792[24]) && func_934(vLocal_792[24]) < 4f)
					{
					}
					else
					{
						func_27(vLocal_792[0], 0);
						func_592(vLocal_792[24]);
						func_1372(1, 1000);
						func_1380();
						if (func_934(vLocal_792[0]) >= 5f)
						{
							if (!func_1328(func_1300(39)) && !func_1301(func_1300(39)))
							{
								if (func_1372(0, 1000))
								{
									func_471(uParam0, 19, 0);
									func_466(func_461(19));
									func_182();
									render_script_cams(false, false, 3000, true, false, 0);
									func_466(94);
									func_592(vLocal_792[0]);
									func_134(uParam0, 2);
								}
							}
						}
						Jump @1637; //curOff = 996
						if (!func_26(vLocal_792[0]))
						{
							set_clock_time(21, 0, 0);
							_set_weather_type(1632247697, true, true, false, 0f, false);
							func_1367(func_845(5, 0), 100f);
							iVar0 = 28;
							while (iVar0 <= 31)
							{
								if (iVar0 == 28)
								{
									Var1 = { func_551(5, 0) };
								}
								else if (iVar0 == 29)
								{
									Var1 = { func_551(5, 1) };
								}
								else if (iVar0 == 30)
								{
									Var1 = { func_551(5, 2) };
								}
								else if (iVar0 == 31)
								{
									Var1 = { func_551(5, 3) };
								}
								_set_entity_coords_and_heading(&(Local_133[iVar0]), Var1, Var1.f_3, true, false, true);
								_0x9587913b9e772d29(&(Local_133[iVar0]), 0);
								iVar0++;
							}
							func_206(1);
							func_27(vLocal_792[25], 0);
							func_27(vLocal_792[0], 0);
						}
						else
						{
							bVar20 = true;
							if (!func_165(75))
							{
								if (!func_165(74))
								{
									if (_0x513f8aa5bf2f17cf(-864.3f, -735.8f, 59.7f, 20f, 0) || func_934(vLocal_792[25]) >= 5f)
									{
										func_27(vLocal_792[25], 1);
										func_456(74);
									}
									else
									{
										bVar20 = false;
									}
								}
								else
								{
									if (func_934(vLocal_792[25]) >= 20f)
									{
										bVar21 = true;
									}
									if (!_0xcf45df50c7775f2a())
									{
										bVar21 = true;
									}
									if (_0x0909f71b5c070797())
									{
										bVar21 = true;
									}
									if (bVar21)
									{
										func_456(75);
									}
								}
							}
							func_1369(19);
							if (!func_165(75))
							{
								bVar20 = false;
							}
							if (!func_1381(1))
							{
								bVar20 = false;
							}
							if (!Local_1371[19]->f_1 == 5)
							{
								bVar20 = false;
							}
							if (!bVar20)
							{
								return 0;
							}
							func_1382(-1, 1);
							func_173(1, 1);
							func_1350(15);
							set_entity_visible(Global_35, true);
							_remove_ped_from_mount(Global_35, false, false);
							clear_ped_tasks_immediately(Global_35, true, true);
							func_1374(19, 1);
							func_1372(1, 1000);
							func_134(uParam0, 3);
						}
						Jump @1637; //curOff = 1493
						_0x90da5ba5c2635416();
						if (_0x005e6f28dd7ed58d(&(Local_1371[19]), "player_zero"))
						{
							do_screen_fade_out(0);
							iLocal_1339 = 0;
							func_134(uParam0, 29);
						}
						Jump @1637; //curOff = 1536
						if (func_938(1))
						{
							if (func_940(1, 1))
							{
								func_184(uParam0, 24, 31, 0);
								detach_entity(Global_35, true, true);
								_0x9ebd34958ab6f824(Global_35);
								clear_ped_tasks_immediately(Global_35, true, true);
								func_466(12);
								render_script_cams(false, false, 3000, true, false, 0);
								func_182();
								pause_clock(false, 0);
								func_27(vLocal_792[0], 1);
								return 1;
							}
						}
					}
				}
				return 0;
			}
			default:
				break;
	}
}

int func_813(var uParam0)
{
	func_1372(0, 0);
	if (!func_934(vLocal_792[0]) >= 3f)
	{
		return 0;
	}
	func_206(0);
	func_178();
	func_462(96);
	func_462(69);
	func_462(70);
	func_462(71);
	func_175(1);
	return 1;
}

int func_814(var uParam0)
{
	iVar0 = func_941(uParam0);
	if (iVar0 == 0)
	{
		return 1;
	}
	if (!func_1381(1))
	{
		return 0;
	}
	func_173(1, 1);
	func_1350(15);
	if (!is_entity_dead(Global_35))
	{
		if (!_0x7c7e4ab748ea3b07())
		{
			func_201(1);
		}
	}
	func_188(1);
	_0x95ee1dee1dcd9070(player_id(), 0);
	animpostfx_play(func_198(1));
	func_164(1);
	return 1;
}

int func_815(var uParam0)
{
	func_1383(uParam0, 524288);
	if (!func_170(1))
	{
		return 0;
	}
	if (_does_anim_scene_exist(uParam0->f_7375.f_804))
	{
		func_1363(&(uParam0->f_7375), "MultiStart");
	}
	else
	{
		func_1366(&(uParam0->f_7375), "MultiStart");
	}
	func_462(96);
	func_462(69);
	func_462(70);
	func_462(71);
	request_clip_set("CLIPSET@MINI_GAMES@STORY@ODRISCOLLS3@SWING@ARTHUR");
	request_clip_set("CLIPSET@MINI_GAMES@STORY@ODRISCOLLS3@SWING@SHACKLE");
	request_clip_set("CLIPSET@MINI_GAMES@STORY@ODRISCOLLS3@SWING@CHAIN");
	if (!func_165(80))
	{
		func_472();
		func_1382(-1, 1);
		Local_941[10] = &Local_14.f_69[0];
		Local_941[8] = &Local_14.f_69[1];
		set_entity_collision(&(Local_941[8]), false, false);
		Local_941[9] = &Local_14.f_69[2];
		set_entity_collision(&(Local_941[9]), false, false);
		Local_941[12] = &Local_14.f_69[3];
		set_entity_visible(&(Local_941[12]), false);
		func_1350(13);
		set_entity_coords(&(Local_941[13]), -860.023f, -742.223f, 56.771f, true, false, true, true);
		set_entity_rotation(&(Local_941[13]), -12.96f, 177f, -180f, 2, true);
		func_456(79);
		func_456(80);
	}
	if (!func_941(uParam0) == 1)
	{
		if (!&iLocal_1482[2] == 6)
		{
			func_1384(uParam0);
			if (!&iLocal_1482[2] == 6)
			{
				return 0;
			}
		}
	}
	clear_area(func_1385(4), 20f, 1065787);
	set_clock_time(21, 5, 0);
	pause_clock(true, 0);
	func_1372(1, 3000);
	func_456(13);
	func_27(vLocal_792[30], 1);
	func_113(1);
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
	_set_weather_type(-173507739, true, true, false, 0f, false);
	func_946();
	if (!is_entity_dead(Global_35))
	{
		set_entity_invincible(Global_35, true);
	}
	func_1350(11);
	iLocal_1339 = 0;
	return 1;
}

int func_816(var uParam0)
{
	if (!is_screen_faded_out())
	{
		do_screen_fade_out(0);
	}
	bVar0 = true;
	if (!func_938(1))
	{
		bVar0 = false;
	}
	func_1369(7);
	func_1369(8);
	if (!Local_1371[7]->f_1 == 5 || !Local_1371[8]->f_1 == 5)
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	_0xebdc12861d079aba(&(Local_941[16]), 1);
	func_184(uParam0, 0, 55, 0);
	func_1350(14);
	attach_entity_to_entity(&(Local_941[14]), Global_35, get_ped_bone_index(Global_35, 30226), func_1362(3), func_1362(0), false, false, false, false, 2, true, false, false);
	set_clock_time(20, 50, 0);
	pause_clock(true, 0);
	set_player_control(player_id(), true, 0, false);
	func_27(vLocal_792[0], 1);
	func_171(0);
	Local_1123[0]->f_2 = 0f;
	Local_1123[0]->f_3 = 0f;
	Local_1123[0]->f_4 = -1f;
	Local_1123[0]->f_5 = 1f;
	Local_1123[1]->f_2 = 0f;
	Local_1123[1]->f_3 = 0f;
	Local_1123[1]->f_4 = -1f;
	Local_1123[1]->f_5 = 1f;
	set_entity_visible(&(Local_941[15]), true);
	return 1;
}

int func_817(var uParam0)
{
	_0xc9caeaeec1256e54(iLocal_131);
	func_163(1);
	func_1341(8);
	func_1341(9);
	func_1386();
	func_1310(uParam0);
	if (func_165(81) && !func_165(82))
	{
		if (get_clock_hours() == 21)
		{
			pause_clock(true, 0);
			func_456(82);
		}
	}
	if (does_cam_exist(&(iLocal_1009[1])))
	{
		func_1387();
	}
	if (func_1388())
	{
		func_1389("swing", fVar1222);
		func_1389("bend", fVar1223);
		func_1390("start_swing_left", func_165(78));
	}
	switch (iVar1221)
	{
		case 0:
			func_1369(7);
			func_1369(8);
			if (func_934(vLocal_792[0]) >= 3f)
			{
				func_1315(uParam0, 5);
				_hide_hud_component(iLocal_131);
				set_clock_time(17, 0, 0);
				_set_weather_type(1500834021, true, true, false, 0f, false);
				fLocal_1168 = 0.1f;
				func_940(1, 1);
				func_135(uParam0, 4);
				func_1374(7, 1);
				iLocal_1224 = 1;
			}
			break;
		case 1:
			func_1369(7);
			func_1369(8);
			_0x90da5ba5c2635416();
			if (_is_anim_scene_active(&(Local_1371[7])))
			{
				func_1374(8, 1);
				set_clock_time(20, 50, 0);
				_set_weather_type(433385945, true, true, false, 0f, false);
				iLocal_1224 = 2;
			}
			break;
		case 2:
			func_1369(7);
			func_1369(8);
			if (!func_165(76))
			{
				if (is_sphere_visible(get_entity_coords(&(Local_941[10]), true, false), 0.1f))
				{
					_0xdd1232b332cbb9e7(1, 1, 0);
					func_1359(41);
					func_456(76);
				}
			}
			if (_0x005e6f28dd7ed58d(&(Local_1371[8]), "ARTHUR"))
			{
				if ((((((func_463(96) && func_463(69)) && func_463(70)) && func_463(71)) && has_clip_set_loaded("CLIPSET@MINI_GAMES@STORY@ODRISCOLLS3@SWING@ARTHUR")) && has_clip_set_loaded("CLIPSET@MINI_GAMES@STORY@ODRISCOLLS3@SWING@SHACKLE")) && has_clip_set_loaded("CLIPSET@MINI_GAMES@STORY@ODRISCOLLS3@SWING@CHAIN"))
				{
					Var0.f_6 = -1082130432;
					Var0.f_9 = -1082130432;
					Var0.f_1 = -455129387;
					Var0 = 903285382;
					Var0.f_30 = "Idle";
					task_move_network_advanced_by_name_with_init_params(Global_35, func_497(96), &Var0, -859.605f, -744.087f, 58.047f, func_1362(0), 2, 0, 0, 0, 128, 0);
					_0x2208438012482a1a(Global_35, true, false);
					Var0 = -498536776;
					task_move_network_advanced_by_name_with_init_params(&(Local_941[8]), func_497(96), &Var0, -859.605f, -744.087f, 58.047f, func_1362(0), 2, 0, 0, 0, 128, 0);
					force_entity_ai_and_animation_update(&(Local_941[8]), true);
					Var0 = -2069975310;
					task_move_network_advanced_by_name_with_init_params(&(Local_941[9]), func_497(96), &Var0, -859.605f, -744.087f, 58.047f, func_1362(0), 2, 0, 0, 0, 128, 0);
					force_entity_ai_and_animation_update(&(Local_941[9]), true);
					func_182();
					func_1378(1, 0.5f);
					func_1387();
					func_456(15);
					_0xdd1232b332cbb9e7(1, 1, 0);
					iLocal_1224 = 3;
				}
			}
			break;
		case 3:
			enable_control_action(0, func_1361(5), true);
			if (!func_10(iLocal_129))
			{
				iLocal_129 = func_1391(func_1300(1), func_1361(5), 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			}
			else
			{
				func_1392(iLocal_129, 0, 1, 1);
			}
			if (!get_control_normal(0, func_1361(5)) == 0f)
			{
				if (func_1388() && func_1393())
				{
					if (get_control_normal(0, func_1361(5)) < 0f)
					{
						func_456(78);
					}
					else
					{
						func_176(78);
					}
					func_1390("start_swing_left", func_165(78));
					func_1394("Swing_Progression");
					func_27(vLocal_792[29], 1);
					func_11(&iLocal_129, 1, 1);
					_0x7d654266025e921b(-1392528840);
					iLocal_1224 = 4;
				}
			}
			break;
		case 4:
			func_1369(9);
			if (func_1388() && func_1393())
			{
				fLocal_1227 = ((get_control_normal(0, func_1361(5)) + 1f) * 0.5f);
				if (iVar1230 == 1)
				{
					fLocal_1227 = func_516(fVar1224, 0f, 1f);
				}
				else if (iVar1230 == 2)
				{
					fLocal_1227 = func_516(fVar1224, 0.5f, 1f);
				}
				else
				{
					fLocal_1227 = 0.5f;
				}
				if (fVar1224 < fVar1225)
				{
					bVar34 = true;
				}
				fVar35 = absf((fVar1224 - fVar1225));
				fVar36 = ((fVar35 * 4f) * get_frame_time());
				if (bVar34)
				{
					fLocal_1228 = (fVar1225 - fVar36);
				}
				else
				{
					fLocal_1228 = (fVar1225 + fVar36);
				}
				fLocal_1226 = fVar1225;
				if (func_165(90))
				{
					fLocal_1230 = 1f;
				}
				else
				{
					if (fVar1226 < fVar1227)
					{
						bVar37 = true;
					}
					fVar35 = absf((fVar1227 - fVar1226));
					fVar36 = ((fVar35 * func_1395(bVar37, 1.25f, 0.75f)) * get_frame_time());
					if (bVar37)
					{
						fLocal_1229 = (fVar1226 + fVar36);
					}
					else
					{
						fLocal_1229 = (fVar1226 - fVar36);
					}
				}
				fLocal_1225 = fVar1226;
				if (has_anim_event_fired(Global_35, 1329733664))
				{
					iLocal_1233 = 1;
				}
				else if (has_anim_event_fired(Global_35, -1593132626))
				{
					iLocal_1233 = 2;
				}
				else
				{
					iLocal_1233 = 0;
				}
				if ((iVar1230 == 1 && !func_165(88)) || (iVar1230 == 2 && !func_165(89)))
				{
					func_592(vLocal_792[28]);
					func_176(89);
					func_176(88);
					func_176(84);
					func_176(85);
					func_176(86);
					func_176(87);
					if (iVar1230 == 1)
					{
						func_456(88);
					}
					else if (iVar1230 == 2)
					{
						func_456(89);
					}
				}
				else if (iVar1230 == 0)
				{
				}
				if ((iVar1230 == 1 && func_165(88)) || (iVar1230 == 2 && func_165(89)))
				{
					if (!func_165(85) && !func_165(87))
					{
						if (!func_165(84))
						{
							if ((iVar1230 == 1 && fVar1225 < (0.5f - 0.125f)) || (iVar1230 == 2 && fVar1225 > (0.5f + 0.125f)))
							{
								func_27(vLocal_792[27], 0);
								if (func_934(vLocal_792[27]) >= 0.1f)
								{
									func_456(84);
								}
							}
							else if (func_26(vLocal_792[27]))
							{
								func_1396(vLocal_792[27]);
							}
						}
						else if (!func_165(86))
						{
							fLocal_1230 = func_516((fVar1227 + 0.25f), 0f, 1f);
							func_456(86);
						}
					}
					if (!func_165(85))
					{
						if ((iVar1230 == 1 && fVar1224 > (0.5f + 0.125f)) || (iVar1230 == 2 && fVar1224 < (0.5f - 0.125f)))
						{
							func_27(vLocal_792[26], 0);
							if (func_934(vLocal_792[26]) >= 0.4f)
							{
								func_456(85);
							}
						}
						else if (func_26(vLocal_792[26]))
						{
							func_1396(vLocal_792[26]);
						}
					}
					else if (!func_165(87))
					{
						fLocal_1230 = func_516((fVar1227 - 0.4f), 0f, 1f);
						func_592(vLocal_792[26]);
						func_456(87);
					}
				}
				else if (iVar1230 == 0)
				{
					if (func_26(vLocal_792[26]))
					{
						func_592(vLocal_792[26]);
					}
					if (func_26(vLocal_792[27]))
					{
						func_592(vLocal_792[27]);
					}
					if (!func_165(90))
					{
						if (func_165(89))
						{
							if (func_10(iVar1229))
							{
								func_11(&iLocal_1232, 1, 1);
							}
							func_1397(1);
						}
						else if (func_165(88))
						{
							if (func_10(iVar1228))
							{
								func_11(&iLocal_1231, 1, 1);
							}
							func_1397(2);
						}
					}
					func_176(89);
					func_176(88);
					func_176(84);
					func_176(85);
					func_176(86);
					func_176(87);
				}
				if (fVar1224 == 0.5f)
				{
					func_27(vLocal_792[28], 0);
					if (func_934(vLocal_792[28]) >= 0.7f)
					{
						fLocal_1230 = func_516((fVar1227 - (1f * get_frame_time())), 0f, 1f);
					}
				}
				else
				{
					func_592(vLocal_792[28]);
				}
				if (fVar1222 >= 0.98f)
				{
					if (!func_10(iLocal_130) && !func_165(90))
					{
						iLocal_130 = func_1391(func_1300(4), func_1361(8), 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						if (!has_anim_event_fired(Global_35, -1046849350))
						{
							func_1392(iLocal_130, 0, 0, 1);
						}
					}
					else
					{
						if (func_10(iLocal_130))
						{
							if (has_anim_event_fired(Global_35, -1046849350))
							{
								func_1392(iLocal_130, 0, 1, 1);
							}
							else
							{
								func_1392(iLocal_130, 0, 0, 1);
							}
							if (func_1398(iLocal_130, 1))
							{
								func_11(&iLocal_130, 1, 1);
								if (func_10(iVar1228))
								{
									func_11(&iLocal_1231, 1, 1);
								}
								if (func_10(iVar1229))
								{
									func_11(&iLocal_1232, 1, 1);
								}
								func_456(90);
							}
						}
						if (func_165(90))
						{
							if (!func_165(92))
							{
								if (iVar1230 == 1)
								{
									func_456(92);
								}
							}
							else if (iVar1230 == 0)
							{
								iLocal_1224 = 5;
							}
						}
					}
				}
				else if (func_10(iLocal_130))
				{
					func_11(&iLocal_130, 1, 1);
				}
			}
			break;
		case 5:
			if (func_1374(9, 1))
			{
				func_462(97);
				func_462(72);
				_0x6035e8fbca32ac5e();
				func_466(96);
				func_466(69);
				func_466(70);
				func_466(71);
				func_135(uParam0, 5);
				iLocal_1224 = 6;
			}
			break;
		case 6:
			if (does_cam_exist(&(iLocal_1009[1])))
			{
				func_182();
			}
			func_1369(10);
			if (_is_anim_scene_active(&(Local_1371[9])))
			{
				if (func_1374(10, 1))
				{
					set_entity_visible(&(Local_941[12]), true);
					pause_clock(false, 0);
					func_456(81);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_818(var uParam0)
{
	func_1399(8);
	return 1;
}

int func_819(var uParam0)
{
	func_173(1, 1);
	bVar0 = true;
	if (!func_170(1))
	{
		bVar0 = false;
	}
	func_462(97);
	func_462(72);
	if (!func_463(97) || !func_463(72))
	{
		bVar0 = false;
	}
	if (!func_1381(1))
	{
		bVar0 = false;
	}
	else if (!func_165(1))
	{
		func_1350(14);
		attach_entity_to_entity(&(Local_941[14]), Global_35, get_ped_bone_index(Global_35, 30226), func_1362(3), func_1362(0), false, false, false, false, 2, true, false, false);
		func_1382(-1, 1);
		Local_941[10] = &Local_14.f_69[0];
		Local_941[8] = &Local_14.f_69[1];
		Local_941[9] = &Local_14.f_69[2];
		Local_941[12] = &Local_14.f_69[3];
		func_1350(13);
		func_1350(11);
		func_1350(15);
		func_456(1);
	}
	if (func_165(1))
	{
		func_1369(10);
		if (!Local_1371[10]->f_1 == 5)
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (!is_entity_dead(Global_35))
	{
		if (!_0x7c7e4ab748ea3b07())
		{
			func_201(1);
		}
	}
	_0x95ee1dee1dcd9070(player_id(), 0);
	func_1374(10, 1);
	func_456(15);
	func_188(1);
	func_171(0);
	func_940(1, 1);
	animpostfx_play(func_198(1));
	if (!is_entity_dead(Global_35))
	{
		set_entity_invincible(Global_35, true);
	}
	func_164(1);
	return 1;
}

int func_820(var uParam0)
{
	pause_clock(false, 0);
	fLocal_1168 = 0.2f;
	return 1;
}

int func_821(var uParam0)
{
	Local_1235 = 0;
	func_940(1, 1);
	return 1;
}

int func_822(var uParam0)
{
	set_player_control(player_id(), true, 0, false);
	_0xc9caeaeec1256e54(iLocal_131);
	func_163(1);
	func_1386();
	_0x2804658eb7d8a50b(5, -1752297782);
	if (!func_165(94))
	{
		func_1315(uParam0, 5);
		func_456(94);
	}
	func_1310(uParam0);
	func_1341(9);
	func_1341(8);
	func_1369(10);
	func_1369(11);
	func_1369(12);
	func_1369(13);
	if (!func_165(93))
	{
		if (get_clock_hours() >= 21 && get_clock_minutes() >= 0)
		{
			pause_clock(true, 0);
			func_456(93);
		}
	}
	switch (func_1312(uParam0))
	{
		case 0:
			if (func_1400())
			{
				func_134(uParam0, 2);
			}
			break;
		case 2:
			if (func_1401())
			{
				func_134(uParam0, 3);
			}
			break;
		case 3:
			if (func_1402())
			{
				func_462(func_1323(32));
				func_462(83);
				func_134(uParam0, 4);
			}
			break;
		case 4:
			if (func_1403())
			{
				if (_0x7409669c5ed50144(-1392528840))
				{
					_0x50b72a754ee64a71(-1392528840);
				}
				func_1404();
				return 1;
			}
			break;
	}
	return 0;
}

int func_823(var uParam0)
{
	func_1399(12);
	return 1;
}

int func_824(var uParam0)
{
	func_1386();
	bVar0 = true;
	if (!func_170(1))
	{
		bVar0 = false;
	}
	if (!func_1381(1))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (!_0x7c7e4ab748ea3b07())
	{
		func_201(1);
	}
	_0x95ee1dee1dcd9070(player_id(), 0);
	if (!func_165(1))
	{
		func_1382(-1, 1);
		Local_941[10] = &Local_14.f_69[0];
		Local_941[8] = &Local_14.f_69[1];
		Local_941[9] = &Local_14.f_69[2];
		Local_941[12] = &Local_14.f_69[3];
		func_456(1);
	}
	func_456(15);
	func_456(100);
	func_456(14);
	func_173(1, 1);
	func_1350(11);
	func_1350(15);
	func_1404();
	_set_ped_component_disabled(Global_35, -675377005, 1);
	_update_ped_variation(Global_35, false, true, true, true, false);
	animpostfx_play(func_198(1));
	func_164(1);
	return 1;
}

int func_825(var uParam0)
{
	func_1386();
	_0xc9caeaeec1256e54(iLocal_131);
	func_163(1);
	func_462(func_1323(32));
	if (!func_463(func_1323(32)))
	{
		return 0;
	}
	bVar0 = true;
	iVar1 = 717;
	if (!func_941(uParam0) == 0)
	{
		iVar1 |= 16;
	}
	if (!func_1324(uParam0, 32, 32, iVar1))
	{
		bVar0 = false;
	}
	func_462(83);
	if (!func_463(83))
	{
		bVar0 = false;
	}
	if (!func_165(101) && does_entity_exist(&(Local_133[32])))
	{
		func_1350(17);
		set_entity_invincible(&(Local_941[17]), true);
		_0xebdc12861d079aba(&(Local_941[17]), 1);
		freeze_entity_position(&(Local_941[17]), true);
		func_456(101);
	}
	if (!func_165(101))
	{
		return 0;
	}
	func_1369(14);
	func_1369(15);
	if (!Local_1371[14]->f_1 == 5 || !Local_1371[15]->f_1 == 5)
	{
		return 0;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (!is_entity_dead(&(Local_133[32])))
	{
		remove_all_ped_weapons(&(Local_133[32]), true, true);
		set_ped_config_flag(&(Local_133[32]), 138, true);
		set_ped_config_flag(&(Local_133[32]), 21, true);
		_0x18ff3110cf47115d(&(Local_133[32]), 7, 0);
		_set_entity_health(&(Local_133[32]), 61, 0);
		func_145(uParam0, &(Local_133[32]), "ODR_PED1", 0);
		func_943(32, 29);
		func_1405(32, 1, 0);
		func_1406(get_entity_coords(&(Local_133[32]), true, false));
		func_1377(&(Local_133[32]));
	}
	func_206(1);
	_set_weather_type(-173507739, true, true, true, 30f, false);
	set_player_control(player_id(), false, 256, false);
	_hide_hud_component(iLocal_131);
	func_188(1);
	func_1407(&(Local_89.f_33), -1612834106);
	return 1;
}

int func_826(var uParam0)
{
	func_1386();
	_0xc9caeaeec1256e54(iLocal_131);
	if (func_941(uParam0) == 0)
	{
		if (_does_anim_scene_exist(&(Local_1371[13])))
		{
			if (_is_anim_scene_active(&(Local_1371[13])) || _0x8d81e7824b7753f7(&(Local_1371[13]), "s_Hold_Wound_After_Cauterize", 1))
			{
				iVar0 = 1;
			}
			else if (_0xf94692eb9dc15d74(&(Local_1371[13]), 0) || _is_anim_scene_finished(&(Local_1371[13]), false))
			{
				iVar0 = 1;
			}
			if (!iVar0 == 1)
			{
				return 0;
			}
		}
	}
	if (!func_941(uParam0) == 0)
	{
		func_27(vLocal_792[2], 0);
	}
	if (!Local_1371[14]->f_1 == 7)
	{
		func_1374(14, 1);
		freeze_entity_position(&(Local_941[17]), false);
	}
	if (!func_941(uParam0) == 0)
	{
		if (!func_934(vLocal_792[2]) >= 1f)
		{
			return 0;
		}
		else
		{
			func_592(vLocal_792[2]);
		}
	}
	func_1408(0);
	if (!is_entity_dead(Global_35))
	{
		set_entity_invincible(Global_35, false);
	}
	func_171(1);
	func_1409();
	func_207(-100f, 0, 0, 1);
	func_208(-100f, 0, 0, 1);
	func_209(-100f, 0, 0, 1);
	return 1;
}

int func_827(var uParam0)
{
	_0xcb9401f918cb0f75(Global_35, "odr3_basement", 1, 1);
	_disable_first_person_cam_this_frame();
	disable_control_action(0, -432665970, false);
	disable_control_action(0, -349518703, false);
	disable_control_action(0, -1591726981, false);
	disable_control_action(0, -1098542161, false);
	disable_control_action(0, 1101824977, false);
	disable_control_action(0, 966551065, false);
	disable_control_action(0, 668058244, false);
	func_1341(11);
	func_1341(12);
	func_1341(8);
	func_1310(uParam0);
	func_1386();
	if (func_165(100))
	{
		if (func_165(15))
		{
			func_176(15);
			func_456(16);
		}
	}
	if (!func_165(103))
	{
		func_1315(uParam0, 5);
		func_456(103);
	}
	switch (func_1312(uParam0))
	{
		case 0:
			if (does_cam_exist(&(iLocal_1009[2])))
			{
				render_script_cams(false, false, 3000, true, false, 0);
				func_182();
			}
			if (func_1410())
			{
				_display_hud_component(iLocal_131);
				func_1399(13);
				pause_clock(false, 0);
				func_1399(14);
				func_1399(15);
				if (_is_imap_active(-1192199739))
				{
					_remove_imap(-1192199739);
				}
				if (!_is_imap_active(-65072454))
				{
					_request_imap(-65072454);
				}
				func_134(uParam0, 29);
				return 1;
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_828(var uParam0)
{
	func_177();
	func_472();
	func_1381(0);
	if (_0xde0ea444735c1368(Local_89.f_20))
	{
		_0x2c87c3e1c7b96ee2(Local_89.f_20);
	}
	func_173(1, 0);
	return 1;
}

int func_829(var uParam0)
{
	func_190(7, 0);
	func_288(uParam0, 1);
	bVar0 = true;
	if (!func_170(1))
	{
		bVar0 = false;
	}
	if (!func_1324(uParam0, 20, 23, 565))
	{
		bVar0 = false;
	}
	func_462(func_461(15));
	func_462(func_461(11));
	func_462(func_461(17));
	if ((!func_463(func_461(15)) || !func_463(func_461(11))) || !func_463(func_461(17)))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	Local_133[1] = func_283(uParam0);
	func_103(uParam0, 1);
	func_188(1);
	if (!_0x7c7e4ab748ea3b07())
	{
		func_201(1);
	}
	_0x95ee1dee1dcd9070(player_id(), 0);
	func_456(16);
	func_1317(Global_35, -764310200, 3, 1, 0, 1f, 0f, 0);
	func_206(1);
	func_1404();
	func_173(1, 1);
	func_1350(11);
	func_1350(15);
	_set_ped_component_disabled(Global_35, -675377005, 1);
	_update_ped_variation(Global_35, false, true, true, true, false);
	animpostfx_play(func_198(1));
	return 1;
}

int func_830(var uParam0)
{
	_0xcb9401f918cb0f75(Global_35, "odr3_basement", 1, 1);
	func_27(vLocal_792[35], 0);
	bVar0 = true;
	func_1409();
	if (((((((((((((!func_463(76) || !func_463(77)) || !func_463(78)) || !func_463(79)) || !func_463(func_1323(20))) || !func_463(func_1323(21))) || !func_463(func_1323(22))) || !func_463(func_1323(23))) || !func_463(func_461(20))) || !func_463(func_461(19))) || !func_463(func_461(18))) || !func_463(func_1323(54))) || !func_463(func_1323(55))) || !func_1411(0))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 1581;
	if (!func_941(uParam0) == 0)
	{
		iVar1 |= 16;
	}
	if (!func_1324(uParam0, 20, 23, iVar1))
	{
		bVar0 = false;
	}
	if (!func_1324(uParam0, 33, 53, iVar1))
	{
		bVar0 = false;
	}
	else if (!func_165(137))
	{
		_0x6a4d224fc7643941(&Local_1202);
		Local_1202.f_19 = &Local_133[34];
		func_456(137);
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar2 = 20;
	while (iVar2 <= 23)
	{
		set_animal_tuning_bool_param(&(Local_133[iVar2]), 48, true);
		if (iVar2 == 20 || iVar2 == 23)
		{
			_task_start_scenario_in_place(&(Local_133[iVar2]), -1587187585, -1, false, 0, -1f, false);
		}
		iVar2++;
	}
	func_1350(19);
	func_1350(18);
	freeze_entity_position(&(Local_941[18]), true);
	func_1412(1024);
	pause_clock(true, 0);
	func_1413(1);
	_set_weather_type(-173507739, true, true, true, 30f, false);
	func_164(0);
	func_940(1, 0);
	func_173(2, 1);
	return 1;
}

int func_831(var uParam0)
{
	_0xcb9401f918cb0f75(Global_35, "odr3_basement", 1, 1);
	func_456(14);
	iLocal_1271 = 0;
	func_1414(uParam0);
	iLocal_1272 = 0;
	func_1415(&iLocal_1272, 1);
	func_1350(23);
	func_1350(24);
	func_1350(25);
	func_1350(26);
	func_168(1);
	func_456(129);
	vVar0.x = Local_89.f_29;
	vVar0.f_2 = 11;
	_0x733077295ab51304(&vVar0);
	func_163(0);
	func_207(-100f, 0, 0, 1);
	func_208(-100f, 0, 0, 1);
	func_209(-100f, 0, 0, 1);
	return 1;
}

int func_832(var uParam0)
{
	_0x9f9a829c6751f3c7(player_id(), 47, 1);
	func_1416();
	func_1386();
	if (!func_165(107))
	{
		func_1315(uParam0, 5);
		func_456(107);
	}
	if (!func_165(115))
	{
		if (does_entity_exist(&(Local_133[1])))
		{
			if (is_entity_dead(&(Local_133[1])))
			{
				Local_1015[6]->f_11 = 46;
				func_1318(6);
				func_1315(uParam0, 6);
				func_456(115);
			}
		}
	}
	func_1417();
	if (!is_ped_on_mount(Global_35))
	{
		set_ped_max_move_blend_ratio(Global_35, 2f);
		if (is_control_just_pressed(0, -822242784))
		{
			stop_ped_speaking(Global_35, true);
			func_456(108);
		}
	}
	else if (!func_165(138))
	{
		trigger_music_event("ODRISC3_HORSE");
		func_456(138);
	}
	set_ped_reset_flag(Global_35, 253, true);
	set_ped_reset_flag(Global_35, 21, true);
	if (func_1418(60, 36))
	{
		if (!func_165(128))
		{
			if (!func_165(140))
			{
				if ((does_entity_exist(&(Local_133[34])) && is_entity_dead(&(Local_133[34]))) && (does_entity_exist(&(Local_133[36])) && is_entity_dead(&(Local_133[36]))))
				{
					func_1419(uParam0, -2032065324);
					func_456(128);
				}
			}
		}
	}
	if (does_entity_exist(&(Local_941[19])))
	{
		_0xc3abcfbc7d74afa5(&(Local_941[19]), 7, 1);
	}
	if (func_165(122))
	{
		if (is_ped_on_mount(Global_35))
		{
			_0xcb9401f918cb0f75(Global_35, "Injury", 1, 1);
			_0x437c08db4febe2bd(Global_35, "Injury", 1f, 1);
		}
		else
		{
			_0xcb9401f918cb0f75(Global_35, "odr3_outside", 1, 1);
		}
	}
	else
	{
		_0xcb9401f918cb0f75(Global_35, "odr3_basement", 1, 1);
	}
	set_ped_reset_flag(Global_35, 151, true);
	_0xcf213a5fc3abfc08(-878f, 715f, 220f);
	func_1414(uParam0);
	func_1420(uParam0);
	func_1309(uParam0);
	func_1310(uParam0);
	func_1421(uParam0);
	func_1422();
	func_1369(18);
	if (func_26(vLocal_792[44]))
	{
		if (func_245(vLocal_792[44]) >= 10000)
		{
			func_1359(67);
			func_592(vLocal_792[44]);
		}
	}
	func_1341(12);
	if (!func_165(125))
	{
		func_1341(8);
	}
	if ((!func_165(30) && get_clock_hours() < 4) && get_clock_hours() >= 3)
	{
		pause_clock(true, 0);
		func_456(30);
	}
	if (func_165(118) && !func_165(139))
	{
		func_1359(68);
		func_456(139);
	}
	switch (func_1312(uParam0))
	{
		case 0:
			if (func_1423(33, 46, 17) == func_1424(33, 36))
			{
				_0xc67a4910425f11f1(player_id(), 0);
				func_1425(Local_89.f_33);
				func_134(uParam0, 1);
			}
			break;
		case 1:
			if (is_entity_in_volume(Global_35, Local_89.f_4, true, 0))
			{
			}
			else
			{
				func_145(uParam0, &(Local_133[34]), "ODR_PED2", 0);
				func_1313(47);
				if (!_0xa24c1d341c6e0d53(1, 0, 1))
				{
					func_1426(3, 1056964608);
					func_1427(3, 1);
					render_script_cams(true, true, 1500, true, false, 0);
					if (_get_ped_crouch_movement(Global_35))
					{
						bVar4 = true;
					}
					if (bVar4)
					{
						iVar5 = 24;
					}
					else
					{
						iVar5 = 0;
					}
					func_1428(Global_35, 76, 1.5f, -1f, -1, iVar5);
					_0x2208438012482a1a(Global_35, true, false);
				}
				else
				{
					if (_0xdd0b7c5ae58f721d(&Local_1202))
					{
						if (!_0x927b810e43e99932(&Local_1202))
						{
							_0xb8b207c34285e978(&Local_1202);
						}
					}
					func_456(106);
				}
				func_940(1, 0);
				func_145(uParam0, &(Local_133[34]), "ODR_PED2", 0);
				func_1313(47);
				set_player_control(player_id(), false, 0, false);
				_display_hud_component(724769646);
				func_27(vLocal_792[36], 1);
				func_1325(33, 36, 30, 1);
				func_1325(37, 38, 30, 1);
				func_134(uParam0, 2);
				Jump @2690; //curOff = 1000
				if (_0x927b810e43e99932(&Local_1202))
				{
					_0x7b0279170961a73f(&Local_1202);
				}
				disable_control_action(0, 2139949496, false);
				if (func_165(106))
				{
					disable_control_action(0, 1301263553, false);
					disable_control_action(0, -39308912, false);
				}
				else
				{
					disable_control_action(0, -1450761377, false);
					disable_control_action(0, -771458680, false);
				}
				if (!func_165(109))
				{
					if (func_1429(Global_35, 76))
					{
						if (func_1430(Global_35, 76) >= 0.6f)
						{
							stop_anim_task(Global_35, func_494(76, 1), func_494(76, 0), -1f);
							func_456(109);
						}
					}
				}
				bVar6 = true;
				func_1431(uParam0);
				if (!func_1432())
				{
					bVar6 = false;
				}
				if (!func_1431(uParam0))
				{
					bVar6 = false;
				}
				if (!func_1324(uParam0, 54, 55, 1))
				{
					bVar6 = false;
				}
				if (func_1429(Global_35, 76))
				{
					func_1433(Global_35, 76, 0.4f);
				}
				if (func_934(vLocal_792[36]) >= 7f && bVar6)
				{
					iLocal_1271 = 2;
					set_player_control(player_id(), true, 0, false);
					if (does_cam_exist(&(iLocal_1009[3])))
					{
						func_1406(-868.7f, -747.5f, 60.2f);
						render_script_cams(false, true, 1500, true, false, 0);
						func_473(3);
					}
					if (_0x927b810e43e99932(&Local_1202))
					{
						_0x0a5a4f1979abb40e(&Local_1202);
						_0x798be43c9393632b(&Local_1202);
					}
					func_466(76);
					func_1434();
					func_134(uParam0, 3);
				}
				Jump @2690; //curOff = 1360
				if (is_entity_in_volume(Global_35, Local_89.f_19, true, 0))
				{
					func_456(122);
					func_174(1);
					func_134(uParam0, 4);
				}
				Jump @2690; //curOff = 1397
				if (is_ped_on_mount(Global_35))
				{
					if (!func_165(127))
					{
						func_1315(uParam0, 7);
						iLocal_775[2] = func_1435(408396114, func_1336(0, 0), 1);
						set_blip_name_from_text_file(&(iLocal_775[2]), func_1300(16));
						_blip_set_modifier(&(iLocal_775[2]), -1878373110);
						func_59(7);
						func_456(127);
					}
				}
				else if (func_165(127))
				{
					if (does_blip_exist(&(iLocal_775[2])))
					{
						remove_blip(iLocal_775[2]);
					}
					func_1298(7);
					func_1315(uParam0, 6);
					func_176(127);
				}
				if (func_1418(30, 3))
				{
					if ((is_ped_on_mount(Global_35) && !is_entity_in_volume(Global_35, Local_89.f_5, true, 0)) || (!is_ped_on_mount(Global_35) && !is_entity_in_volume(Global_35, Local_89.f_28, true, 0)))
					{
						if (func_1436(120f, 33, 46) == 0)
						{
							fVar7 = func_1437(33, 46);
							if (fVar7 > 30f)
							{
								func_456(140);
								func_1325(33, 46, 10, 1);
								set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
								set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
								task_swap_weapon(Global_35, 1, 1, 0, 0);
								func_462(95);
								func_462(81);
								func_462(80);
								_0x1b3c2d961f5fc0e1(func_1438(6));
								func_134(uParam0, 5);
							}
						}
					}
				}
				Jump @2690; //curOff = 1745
				func_164(1);
				if (is_ped_on_mount(Global_35))
				{
					disable_control_action(0, -822242784, false);
					disable_control_action(0, -874806616, false);
				}
				else if (does_entity_exist(_get_last_mount(Global_35)))
				{
					if (get_distance_between_coords(get_entity_coords(Global_35, true, false), get_entity_coords(_get_last_mount(Global_35), true, false), true) >= 20f)
					{
						bVar8 = true;
					}
					else
					{
						func_27(vLocal_792[40], 1);
					}
				}
				else
				{
					bVar8 = true;
				}
				disable_control_action(0, -128997553, false);
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, 1618006066, false);
				disable_control_action(0, -1046962283, false);
				disable_control_action(0, -1304887797, false);
				vVar0 = { func_1439(0) };
				request_collision_at_coord(vVar0);
				func_27(vLocal_792[40], 0);
				if (!func_934(vLocal_792[40]) >= 15f)
				{
					if (is_ped_on_mount(Global_35))
					{
						if (!func_165(132))
						{
							if (func_934(vLocal_792[40]) >= (15f - 9f))
							{
								if (get_mount(Global_35) == &Local_133[1])
								{
									if (func_1440(get_mount(Global_35)) == 1)
									{
										func_1313(62);
									}
									else
									{
										func_1313(63);
									}
								}
								else
								{
									func_1313(64);
								}
								func_456(132);
							}
						}
					}
				}
				else
				{
					bVar8 = true;
				}
				if (!bVar8)
				{
				}
				else
				{
					if (is_ped_on_mount(Global_35))
					{
						if (Local_1371[18]->f_1 == 5)
						{
							if (func_1321(1) || func_1322(1))
							{
							}
							else
							{
								func_456(130);
								Local_133[4] = get_mount(Global_35);
								func_943(4, 1);
								set_player_control(player_id(), false, 256, false);
								set_entity_invincible(Global_35, true);
								set_entity_invincible(&(Local_133[4]), true);
								set_ped_reset_flag(&(Local_133[4]), 105, true);
								_task_move_in_traffic_2(&(Local_133[4]), func_1336(0, 0), 1073741824, func_1441(get_ped_desired_move_blend_ratio(&(Local_133[4])), 1.75f), 2568, 0);
								func_1374(18, 1);
								func_456(123);
								func_134(uParam0, 6);
								Jump @2354; //curOff = 2263
								if (func_1418(10, 7))
								{
									if (!func_1442())
									{
										if (get_ground_z_for_3d_coord(get_entity_coords(Global_35, true, false), &fVar9, false))
										{
											set_ped_to_ragdoll_with_fall(Global_35, 8000, 10000, 0, 0f, 0f, -1f, fVar9, 0f, 0f, 0f, 0f, 0f, 0f);
											func_176(123);
											func_27(vLocal_792[41], 0);
											func_134(uParam0, 6);
										}
									}
								}
								Jump @2690; //curOff = 2354
								vVar0 = { func_1439(0) };
								request_collision_at_coord(vVar0);
								if (!func_165(131))
								{
									_hide_ped_weapons(Global_35, 2, true);
								}
								_disable_first_person_cam_this_frame();
								disable_control_action(0, -822242784, false);
								disable_control_action(0, -874806616, false);
								if (func_165(123))
								{
									if (_is_anim_scene_active(&(Local_1371[18])))
									{
										do_screen_fade_out(0);
										func_134(uParam0, 29);
									}
								}
								else if (func_934(vLocal_792[41]) >= 1f)
								{
									if (func_1372(0, 2000))
									{
										func_134(uParam0, 29);
									}
								}
								Jump @2690; //curOff = 2493
								vVar0 = { func_1439(0) };
								request_collision_at_coord(vVar0);
								_disable_first_person_cam_this_frame();
								if (!func_165(123))
								{
									if (!func_1443(uParam0))
									{
									}
									else
									{
										if (func_170(0))
										{
											func_184(uParam0, 32, 53, 0);
											func_471(uParam0, 13, 0);
											func_471(uParam0, 17, 0);
											func_471(uParam0, 19, 0);
											func_471(uParam0, 23, 0);
											func_471(uParam0, 24, 0);
											func_471(uParam0, 25, 0);
											func_471(uParam0, 26, 0);
											func_466(83);
											func_466(89);
											func_466(90);
											func_466(77);
											func_466(78);
											func_466(79);
											func_466(func_461(19));
											func_466(func_461(16));
											func_1399(18);
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
			default:
				break;
	}
}

int func_833(var uParam0)
{
	Local_1307[iVar1321]->f_6 = 7;
	func_1422();
	func_182();
	func_206(0);
	func_466(10);
	func_466(35);
	func_176(14);
	set_time_scale(1f);
	stop_gameplay_cam_shaking(true);
	animpostfx_stop(func_198(1));
	set_player_control(player_id(), true, 0, false);
	func_168(0);
	func_173(2, 0);
	if (func_165(129))
	{
		func_1419(uParam0, 1879618288);
	}
	func_474(uParam0, 54, 0, 0);
	func_474(uParam0, 55, 0, 0);
	func_27(vLocal_792[45], 0);
	remove_all_cover_blocking_areas();
	return 1;
}

int func_834(var uParam0)
{
	_0x1b3c2d961f5fc0e1(func_1438(6));
	if (!func_165(4))
	{
		func_939();
		func_456(4);
	}
	func_174(1);
	Local_133[4] = &Local_133[1];
	func_943(4, 1);
	return 1;
}

int func_835(var uParam0)
{
	vVar0 = { func_1439(0) };
	request_collision_at_coord(vVar0);
	Local_133[6]->f_3 = 0;
	Local_133[7]->f_3 = 0;
	func_940(1, 0);
	func_172(1);
	return 1;
}

int func_836(var uParam0)
{
	vVar0 = { func_1439(0) };
	request_collision_at_coord(vVar0);
	func_1444(uParam0, "MultiStart");
	func_1445(uParam0, "MultiStart");
	func_99(uParam0, 4194304);
	func_149(uParam0, 100f);
	func_150(uParam0, 120f);
	_hide_ped_weapons(Global_35, 2, true);
	set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
	animpostfx_play(func_198(2));
	return 1;
}

int func_837(var uParam0)
{
	if (!func_165(142))
	{
		func_99(uParam0, 4194304);
	}
	if (!func_165(145))
	{
		if (!func_165(144))
		{
			if (!&Global_1905942 == -1)
			{
				if (func_1446())
				{
					func_456(144);
				}
			}
		}
		else if (func_1447())
		{
			func_456(145);
		}
	}
	func_1448();
	_0xe296208c273bd7f0(0, 0, 0, 17, 1, 0);
	func_1369(21);
	func_1341(12);
	request_collision_at_coord(vVar1);
	switch (func_1312(uParam0))
	{
		case 0:
			vVar1 = { func_1439(0) };
			request_collision_at_coord(vVar1);
			bVar0 = true;
			func_462(func_461(31));
			if (!func_463(func_461(31)))
			{
				bVar0 = false;
			}
			iVar9 = 6;
			while (iVar9 <= 15)
			{
				if ((((((!iVar9 == 6 && !iVar9 == 7) && !iVar9 == 10) && !iVar9 == 11) && !iVar9 == 12) && !iVar9 == 13) && !iVar9 == 14)
				{
				}
				else if (!Local_133[iVar9]->f_3 == 7)
				{
					Var5 = { func_1449(iVar9, 0, 8) };
					if (!func_1450(uParam0, iVar9, 0, 1, 0, Var5, 1))
					{
						bVar0 = false;
					}
					else
					{
						func_1296(uParam0, &(Local_133[iVar9]), 128);
						set_entity_visible(&(Local_133[iVar9]), false);
					}
				}
				iVar9++;
			}
			if (bVar0)
			{
				func_1350(31);
				func_134(uParam0, 1);
			}
			break;
		case 1:
			vVar1 = { func_1439(0) };
			request_collision_at_coord(vVar1);
			if (func_1451(uParam0))
			{
				func_135(uParam0, 6);
				func_1452(1);
				func_149(uParam0, 9998f);
				func_150(uParam0, 9999f);
				func_134(uParam0, 2);
			}
			break;
		case 2:
			if (func_1453(uParam0))
			{
				func_134(uParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_838(var uParam0)
{
	func_466(95);
	func_60(0);
	return 1;
}

int func_839(var uParam0)
{
	iVar0 = 1;
	func_462(func_461(31));
	if (!func_463(func_461(31)))
	{
		iVar0 = 0;
	}
	else if (!does_entity_exist(&(Local_941[31])))
	{
		func_1350(31);
	}
	func_1369(21);
	if (!Local_1371[21]->f_1 == 5)
	{
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!&iLocal_1482[3] == 6)
	{
		func_1451(uParam0);
		return 0;
	}
	iVar1 = func_941(uParam0);
	if (iVar1 == 1 || iVar1 == 2)
	{
		if (!func_939())
		{
			return 0;
		}
	}
	iLocal_1489 = add_scenario_blocking_area(-896.4f, -774.7f, 38f, -824.9f, -686.3f, 72f, 0, 16);
	iLocal_1489 = iVar1486;
	func_176(16);
	func_176(15);
	return 1;
}

int func_840(var uParam0)
{
	func_401(uParam0, 131072);
	_0xe296208c273bd7f0(0, 0, 0, 17, 1, 0);
	if (!func_165(153))
	{
		if (func_941(uParam0) == 0)
		{
			func_1454(2, Global_35, 0, &(Local_133[4]), 0, 1092616192, 1103626240);
			if (!_get_anim_scene_time(&(Local_1371[20])) >= (_get_anim_scene_duration(&(Local_1371[20])) - 0.1f))
			{
				return 0;
			}
			func_1454(3, Global_35, 0, &(Local_133[4]), 0, 1092616192, 1103626240);
			_0x43037abfe214a851();
			func_456(153);
			return 0;
		}
	}
	func_940(1, 0);
	if (!func_82(32768))
	{
		func_1455(uParam0, -1, 0);
	}
	func_1368(uParam0, 2);
	func_1368(uParam0, 4);
	return 1;
}

int func_841(var uParam0)
{
	if (is_player_control_on(player_id()))
	{
		set_player_control(player_id(), false, 0, false);
	}
	if (func_165(149))
	{
		if (!func_165(150))
		{
			do_screen_fade_out(0);
			if (_get_anim_scene_time(&(Local_1371[21])) >= 3.75f)
			{
				do_screen_fade_in(1000);
				func_456(150);
			}
		}
	}
	if (!is_entity_dead(Global_35))
	{
		clear_ped_env_dirt(Global_35);
		set_ped_sweat(Global_35, 0f);
	}
	func_471(uParam0, 31, 0);
	if (func_165(27))
	{
		_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
	}
	if (func_82(32768))
	{
		return 1;
	}
	vVar1 = { 663.0497f, -1229.854f, 44.396f };
	fVar4 = 161.36f;
	func_288(uParam0, 1);
	if (!func_447(uParam0, 1, vVar1.x, vVar1.y, vVar1.z, fVar4, 1, 1, 1))
	{
		bVar0 = false;
	}
	if (_does_anim_scene_exist(&(Local_1371[21])))
	{
		if (_is_anim_scene_started(&(Local_1371[21]), false))
		{
			if (_get_anim_scene_time(&(Local_1371[21])) >= (_get_anim_scene_duration(&(Local_1371[21])) - 1.6f))
			{
				func_1372(0, 1000);
			}
		}
		else if (_0xf94692eb9dc15d74(&(Local_1371[21]), 0))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Local_133[1] = func_283(uParam0);
		_set_entity_coords_and_heading(&(Local_133[1]), vVar1, fVar4, true, false, true);
		_0x06aade17334f7a40(&(Local_133[1]), vVar1);
		func_176(17);
		iLocal_1339 = 3;
		return 1;
	}
	return 0;
}

int func_842(var uParam0)
{
	if (func_165(27))
	{
		_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
	}
	if (func_938(0))
	{
		return 1;
	}
	return 0;
}

int func_843(var uParam0)
{
	func_1456((*Global_1835011)[uParam0->f_607]->f_1);
	func_456(5);
	func_1(uParam0, 4);
	if (func_165(27))
	{
		_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
	}
	return 1;
}

char* func_844()
{
	return "cutDeleteMe";
}

Vector3 func_845(int iParam0, int iParam1)
{
	return func_1457(iParam0, iParam1);
}

void func_846()
{
	Local_89 = _create_volume_aggregate();
	_0x39816f6f94f385ad(Local_89, -544.8278f, 399.2536f, 85.64386f, 0f, 0f, 0f, 10.75f, 10f, 6f);
	_0x39816f6f94f385ad(Local_89, -553.3588f, 396.089f, 85.644f, 0f, 0f, 0f, 3.75f, 9.5f, 6f);
	_0x39816f6f94f385ad(Local_89, -552.7037f, 401.6336f, 85.644f, 0f, 0f, 47.75f, 4f, 2f, 6f);
	_0x39816f6f94f385ad(Local_89, -541.3427f, 404.4531f, 85.644f, 0f, 0f, 0f, 4.25f, 8.25f, 6f);
	_0x39816f6f94f385ad(Local_89, -541.2624f, 405.205f, 85.644f, 0f, 0f, 46.50001f, 6.75f, 3.5f, 6f);
	_0x39816f6f94f385ad(Local_89, -542.0309f, 402.5838f, 85.644f, 0f, 0f, -19.5f, 5f, 13f, 6f);
	Local_89.f_1 = _create_volume_box(-548.9683f, 393.8341f, 85.644f, 0f, 0f, -24.24999f, 24.75f, 7f, 6f);
	Local_89.f_2 = _create_volume_cylinder(-852.5347f, -706.927f, 60.56326f, 0f, 0f, 0f, 60f, 60f, 10f);
	Local_89.f_3 = _create_volume_cylinder(-865.701f, -592.6326f, 68.19862f, 0f, 0f, 0f, 40f, 40f, 10f);
	Local_89.f_4 = _create_volume_box(-861.0254f, -744.1687f, 57.13982f, 0f, 0f, 20.24999f, 6f, 6.5f, 2f);
	Local_89.f_5 = _create_volume_cylinder(-857.7269f, -771.7311f, 66.91647f, 0f, 0f, 0f, 330f, 330f, 40f);
	Local_89.f_6 = _create_volume_cylinder(462.5026f, 58.14717f, 135.0551f, 0f, 0f, -0.025685f, 5f, 5f, 2f);
	Local_89.f_7 = _create_volume_aggregate();
	_0x39816f6f94f385ad(Local_89.f_7, -881.258f, -736.6337f, 59.79215f, 0f, 0f, 19f, 10f, 15f, 2f);
	_0x39816f6f94f385ad(Local_89.f_7, -875.3309f, -734.5929f, 59.79215f, 0f, 0f, 19f, 2.5f, 12.5f, 2f);
	_0x39816f6f94f385ad(Local_89.f_7, -870.77f, -733.0226f, 59.79215f, 0f, 0f, 19f, 2.5f, 5f, 2f);
	_0x39816f6f94f385ad(Local_89.f_7, -873.0518f, -733.8082f, 59.79215f, 0f, 0f, 19f, 2.5f, 10f, 2f);
	Local_89.f_8 = _create_volume_box(-842.4326f, -666.416f, 62.35727f, 0f, 0f, 17.5f, 200f, 2f, 46f);
	Local_89.f_9 = _create_volume_box(-1034.959f, -676.6127f, 79.55116f, 0f, 0f, -11.5f, 200f, 2f, 46f);
	Local_89.f_10 = _create_volume_cylinder(674.0331f, -1249.968f, 45.53361f, 0f, 0f, 0f, 32f, 32f, 5f);
	Local_89.f_11 = _create_volume_cylinder(-866.0486f, -732.846f, 59.70185f, 0f, 0f, 0f, 1.2f, 1f, 1f);
	Local_89.f_12 = _create_volume_cylinder(675.9578f, -1242.402f, 45.53361f, 0f, 0f, 0f, 40f, 40f, 5f);
	Local_89.f_13 = _create_volume_box(-545.8317f, 399.7288f, 87.19109f, 0f, 0f, 0f, 6.75f, 9.5f, 4f);
	Local_89.f_14 = _create_volume_cylinder(675.9578f, -1242.426f, 45.53361f, 0f, 0f, 0f, 140f, 140f, 10f);
	Local_89.f_15 = _create_volume_aggregate();
	_0x39816f6f94f385ad(Local_89.f_15, 459.5794f, 58.14141f, 134.8017f, 0f, 0f, 13.75001f, 1.5f, 6f, 2f);
	_0x39816f6f94f385ad(Local_89.f_15, 459.9276f, 62.10038f, 134.8017f, 0f, 0f, -19.74999f, 1.5f, 4f, 2f);
	_0x39816f6f94f385ad(Local_89.f_15, 462.0773f, 54.04677f, 134.8017f, 0f, 0f, 62.25f, 1.5f, 4f, 2f);
	Local_89.f_16 = _create_volume_box(459.9813f, 57.20532f, 135.055f, 0f, 0f, 15.99999f, 6f, 10f, 4f);
	Local_89.f_17 = _create_volume_box(814.0551f, -337.11f, 87.25781f, 0f, 0f, 0f, 12f, 12f, 3f);
	Local_89.f_18 = _create_volume_cylinder(573.9523f, 210.0925f, 128.6858f, 0f, 0f, 0f, 45f, 45f, 4f);
	Local_89.f_19 = _create_volume_box(-866.0743f, -746.6395f, 60.08978f, 0f, -8.499995f, 20f, 3f, 4.5f, 2f);
	Local_89.f_20 = _create_volume_box(-865.4642f, -734.1829f, 59.51987f, 0f, 0f, 28.00001f, 11f, 6f, 2f);
	Local_89.f_21 = _create_volume_box(821.4885f, -370.1398f, 88.53259f, 0f, 0f, 0f, 100f, 100f, 20f);
	Local_89.f_22 = _create_volume_box(422.5007f, 37.37281f, 108.3498f, 0f, 0f, 0f, 64f, 128f, 16f);
	Local_89.f_23 = _create_volume_box(772.7662f, 21.9545f, 111.4828f, 0f, 0f, 0f, 259f, 514.5f, 120.25f);
	Local_89.f_24 = _create_volume_cylinder(-870.1011f, -743.7218f, 57.18891f, 0f, 0f, 0f, 45f, 45f, 10f);
	Local_89.f_25 = _create_volume_box(-868.2285f, -617.1415f, 58.89547f, 0f, 0f, 0f, 666f, 519.75f, 80f);
	Local_89.f_26 = _create_volume_cylinder(406.694f, 38.0396f, 107.062f, 0f, 0f, 0f, 1f, 1f, 1f);
	Local_89.f_27 = _create_volume_cylinder(407.368f, 39.7832f, 106.972f, 0f, 0f, 0f, 1f, 1f, 1f);
	Local_89.f_28 = _create_volume_cylinder(-877.9708f, -723.0764f, 66.91647f, 0f, 0f, 0f, 220f, 220f, 40f);
	Local_89.f_29 = _create_volume_box(-866.652f, -732.7656f, 59.65343f, 0f, 0f, 19f, 4f, 1f, 2f);
	Local_89.f_30 = _create_volume_box(-545.5493f, 399.3469f, 89.30523f, 0f, 0f, -6.75001f, 60f, 1f, 20f);
	Local_89.f_31 = _create_volume_box(685.7278f, -1183.635f, 50.25746f, 0f, 0f, -13.5f, 175.5f, 88.75f, 8f);
	Local_89.f_32 = _create_volume_box(-532.3943f, 404.438f, 89.30523f, 0f, 0f, 10.49999f, 1f, 17.25f, 20f);
	Local_89.f_33 = _create_volume_box(-863.9876f, -745.8814f, 56.92363f, 0f, 0f, 19f, 1f, 3f, 2f);
}

void func_847()
{
	func_1458(&(Global_1946804->f_1735));
}

bool func_848(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_849(var uParam0)
{
	*uParam0 = Global_1946804->f_2776;
	uParam0->f_1 = Global_1946804->f_2776.f_1;
	uParam0->f_8 = Global_1946804->f_2776.f_8;
	uParam0->f_2 = Global_1946804->f_2776.f_2;
	uParam0->f_3[0] = &Global_1946804->f_2776.f_3[0];
	uParam0->f_3[1] = &Global_1946804->f_2776.f_3[1];
	uParam0->f_3[2] = &Global_1946804->f_2776.f_3[2];
	uParam0->f_3[3] = &Global_1946804->f_2776.f_3[3];
	uParam0->f_9 = Global_1946804->f_2776.f_9;
	uParam0->f_10 = Global_1946804->f_2776.f_10;
	uParam0->f_11 = Global_1946804->f_2776.f_11;
	uParam0->f_12 = 0;
}

void func_850()
{
	func_1459(&(Global_1946804->f_2776));
	func_1460(32768);
	func_1461(1108822547, 8, 6);
}

bool func_851(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = -1;
	if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = iParam1;
	}
	if (iParam4 != 0)
	{
		iVar1 = iParam4;
	}
	else
	{
		iVar1 = func_1462(iParam1);
	}
	if (iVar0 == -1 && !func_1463(iVar1, func_718()))
	{
		return true;
	}
	if (uParam2->f_1 != 0 && func_1464(uParam2, 1))
	{
		if (uParam2->f_1 == iVar1)
		{
			if (bParam3)
			{
				return func_1465(iParam0, uParam2);
			}
			else
			{
				return true;
			}
		}
		else if (uParam2->f_1 != iVar1)
		{
			func_1458(uParam2);
		}
	}
	if (!func_1464(uParam2, 1))
	{
		func_1466(&(uParam2->f_1));
		if (!bParam5)
		{
			if (!func_1467(&(uParam2->f_1), &uVar2, iVar1, iVar0, 1, 0))
			{
				return true;
			}
		}
		uParam2->f_1 = iVar1;
		func_1468(uParam2, 1);
	}
	if (!bParam3)
	{
		return true;
	}
	return func_1465(iParam0, uParam2);
}

bool func_852(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_853(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_854(var uParam0)
{
	return uParam0->f_862;
}

void func_855(var uParam0)
{
	if (func_1469(&iVar0))
	{
		if (func_617(iVar0, 0))
		{
			if (func_641(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_669(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_617(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_856(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1470(-1);
	}
	func_1471(1);
	set_entity_invincible(Global_35, true);
	if (!func_853(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_853(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_853(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_853(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_853(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_853(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_853(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_853(*iParam0, 4) && !func_853(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_853(*iParam0, 2048))
	{
		func_868(0, 0);
	}
	if (func_853(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_853(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_853(*iParam0, 8192))
	{
		func_1472();
	}
	if (!func_853(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_853(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_853(*iParam0, 1024))
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
		if (!func_853(*iParam0, 16))
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
						if (func_1473() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_419(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1474(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1475(2);
						func_1476(-1);
						func_1477(vVar3);
						func_1479(func_1478());
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
	if (!func_853(*iParam0, 4096))
	{
		func_1480(Global_35);
	}
	if (!func_853(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_853(*iParam0, 2097152))
	{
		if (func_1481() || _0x50f124e6ef188b22(Global_35))
		{
			func_1482(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_857(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_858(var uParam0)
{
	if (func_852(uParam0, 2048) && !func_419(func_1483(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_852(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_925(iVar1, func_1483(uParam0), func_1484(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_852(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_925(iVar3, func_1483(uParam0), func_1484(uParam0), 2, 1073741824);
		}
	}
}

void func_859(var uParam0)
{
	if ((func_852(uParam0, 268435456) && !func_419(func_1483(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1483(uParam0) };
			func_925(iVar0, vVar1, func_1485(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_860(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_419(vParam1))
	{
		func_1486(uParam0, 2048, 1);
	}
	else
	{
		func_790(uParam0, 2048);
		if (bParam5)
		{
			func_790(uParam0, -2147483648);
		}
	}
}

void func_861(var uParam0)
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
					if (!func_1487(uParam0->f_13[iVar0], 8))
					{
						if (func_731(func_502(iVar1, 0, 1, 0)))
						{
							if (!func_1488(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_731(func_502(iVar1, 1, 1, 0)))
						{
							if (!func_1488(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_862(var uParam0, bool bParam1)
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

void func_863(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			func_1246(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1489(iParam1, 29, bVar4, 1, 0);
			func_1489(iParam1, 31, bVar4, 1, 0);
			func_1489(iParam1, 30, bVar4, 1, 0);
			func_1489(iParam1, 22, bVar4, 1, 0);
			func_1489(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_848(32768) && func_1490(1108822547, 8)) && func_1491(10, iParam3))
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
			iVar3 = func_1254(iVar1, 1);
			if (func_1490(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1491(iVar1, iParam3))
				{
				}
				else if ((func_1490(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1490(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1489(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1493(iVar3, 1, 6);
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
								func_1489(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1490(iVar3, 1))
							{
								func_1461(iVar3, 1, 6);
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

bool func_864(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1494((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_865(int iParam0)
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

int func_866(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_867(int iParam0, int iParam1)
{
	return func_1495(&uVar0, iParam0, iParam1);
}

void func_868(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_731(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_477(1);
	}
}

void func_869(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_870(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_871(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_872(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_873(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_874(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_875(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_876(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_877(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_878(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_879(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_880(var uParam0, int iParam1)
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

int func_881(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_882((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_882(var uParam0)
{
	return *uParam0 != 0;
}

bool func_883(var uParam0, int iParam1)
{
	iVar0 = func_1496(iParam1);
	return (uParam0 && iVar0) != 0;
}

void func_884(var uParam0)
{
	if (!func_914(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_1497(&(uParam0->f_1), 1);
	}
}

bool func_885(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_886(var uParam0)
{
	if (!func_914(uParam0->f_3, 1))
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
		func_1497(&(uParam0->f_3), 1);
	}
}

bool func_887(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_888(var uParam0)
{
	if (!func_914(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_1497(&(uParam0->f_1), 1);
	}
}

bool func_889(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_890(var uParam0)
{
	if (func_914(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_914(uParam0->f_1, 1))
	{
		func_1498(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_1497(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_891(var uParam0)
{
	if (func_914(*uParam0, 2))
	{
		return true;
	}
	if (!func_914(*uParam0, 1))
	{
		func_1499(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_1497(uParam0, 2);
		return true;
	}
	return false;
}

bool func_892(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_893(var uParam0)
{
	if (!func_914(uParam0->f_2, 1))
	{
		if (func_1500(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1501(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_325())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1110())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_1497(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_894(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_895(var uParam0, int iParam1)
{
	if (!func_914(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_1497(&(uParam0->f_1), 1);
	}
}

bool func_896(var uParam0)
{
	return *uParam0 != 0;
}

void func_897(var uParam0)
{
	if (!func_914(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_1497(&(uParam0->f_2), 1);
	}
}

bool func_898(var uParam0)
{
	return *uParam0 != 0;
}

void func_899(var uParam0)
{
	if (!func_914(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_1497(&(uParam0->f_3), 1);
	}
}

bool func_900(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_901(var uParam0)
{
	if (!func_914(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_1497(&(uParam0->f_1), 1);
	}
}

bool func_902(var uParam0)
{
	return func_1502(*uParam0);
}

void func_903(var uParam0)
{
	if (!func_914(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_1497(&(uParam0->f_1), 1);
	}
}

bool func_904(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_905(var uParam0)
{
	if (!func_914(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_1497(&(uParam0->f_2), 1);
	}
}

bool func_906(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_907(var uParam0)
{
	if (!func_914(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_1497(&(uParam0->f_1), 1);
	}
}

bool func_908(var uParam0, int iParam1, char* sParam2)
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

void func_909(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_786(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1503(uParam0, iParam1);
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
		iVar1 = func_1504(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1505(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1506(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1507(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1508(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_910(int iParam0)
{
	if (!func_213(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_911(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_933(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1509(uParam0, 0))
			{
				if (func_1510(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1511(uParam0, 1, &iVar0))
					{
					}
					if (func_1512(uParam0, 3, &cVar2))
					{
					}
					if (func_1511(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1511(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1511(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1511(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1511(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1513(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_546((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_546(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_546(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_241(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_1282[uParam0->f_2506]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1513(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_546(uParam0->f_2243[uParam0->f_2507], 1048576);
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
			if (func_1509(uParam0, 12))
			{
				if (func_1511(uParam0, 13, &iVar0))
				{
				}
				if (func_1511(uParam0, 14, &iVar1))
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

void func_912(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_241((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_241((*uParam0)[iVar0], 1))
		{
			func_1514((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_913(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_882((*uParam0)[iVar1]))
		{
			if (func_883((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1515((*uParam0)[iVar1]))
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
		if (func_885((*uParam1)[iVar1]))
		{
			if (func_883((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1516((*uParam1)[iVar1]))
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
		if (func_887((*uParam2)[iVar1]))
		{
			if (func_883((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1517((*uParam2)[iVar1]))
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
		if (func_889((*uParam3)[iVar1]))
		{
			if (func_883((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_890((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_883(uParam4->f_1, iParam12))
	{
		if (!func_891(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_892((*uParam5)[iVar1]))
		{
			if (func_883((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1500((*uParam5)[iVar1]))
				{
					if (!func_915((*uParam5)[iVar1]))
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
		if (func_892((*uParam5)[iVar1]))
		{
			if (func_883((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1500((*uParam5)[iVar1]))
				{
					if (func_915((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_894((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1518((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_896((*uParam6)[iVar1]))
		{
			if (func_883((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1519((*uParam6)[iVar1]))
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
		if (func_898((*uParam7)[iVar1]))
		{
			if (func_883((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1520((*uParam7)[iVar1]))
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
		if (func_900((*uParam8)[iVar1]))
		{
			if (func_883((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1521((*uParam8)[iVar1]))
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
		if (func_902((*uParam9)[iVar1]))
		{
			if (func_883((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1522((*uParam9)[iVar1]))
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
		if (func_904((*uParam10)[iVar1]))
		{
			if (func_883((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1523((*uParam10)[iVar1]))
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
		if (func_906((*uParam11)[iVar1]))
		{
			if (func_883((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1524((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_914(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_915(var uParam0)
{
	if (func_914(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_914(uParam0->f_2, 1))
	{
		func_893(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_1497(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_916(int iParam0)
{
	if (!func_213(iParam0))
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

bool func_917(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_518(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_281(iParam1)) && func_1525(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1526(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1527(uParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1528(iParam1);
		return true;
	}
	return false;
}

bool func_918(var uParam0)
{
	if (!func_419(uParam0->f_5417))
	{
		return true;
	}
	switch (uParam0->f_607)
	{
		case 7:
			func_1529(uParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1529(uParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1529(uParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1529(uParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1529(uParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1529(uParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1529(uParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1529(uParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1529(uParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1529(uParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1529(uParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1529(uParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1529(uParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1529(uParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1529(uParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1529(uParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1529(uParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1529(uParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1529(uParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1529(uParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1529(uParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1529(uParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1529(uParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1529(uParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1529(uParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1529(uParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1529(uParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1529(uParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1529(uParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1529(uParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1529(uParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1529(uParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1529(uParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_419(uParam0->f_5417);
}

int func_919(int iParam0, var uParam1)
{
	uParam1->f_10 = func_289(uParam1->f_10);
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
		if (func_419(uParam1->f_6))
		{
		}
	}
	bVar0 = func_418();
	if (*uParam1)
	{
		if (bVar0 && !func_348((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1530(5))
			{
				func_571(5);
				func_1531(5);
				func_1476(0);
				func_1475(0);
			}
		}
	}
	if (func_1532(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_348((*Global_1835011)[37]->f_1, 1)) && !func_348((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_348((*Global_1835011)[43]->f_1, 1)) && !func_348((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_239(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_574(iVar1))
	{
		bVar3 = true;
		if (func_1533(iVar1))
		{
			bVar4 = true;
		}
		if (func_581(iVar1))
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
				func_582(uParam1->f_10);
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
			if (!func_1530(0) && func_1530(1))
			{
				func_1534(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1535())
			{
				func_1536();
			}
			func_1476(0);
			func_1475(0);
			func_1477(uParam1->f_6);
		}
	}
	if (!func_574(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1537(uParam1->f_10) == 0 || func_1538(uParam1->f_10) == 0) || func_1539(uParam1->f_10) == 0)
			{
				func_1540(uParam1->f_10);
			}
			func_1541(uParam1->f_10);
			func_1542(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_239(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_574(iVar1))
	{
		bVar3 = true;
		if (func_1533(iVar1))
		{
			bVar4 = true;
		}
		if (func_581(iVar1))
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
			if (!func_419(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1543(uParam1->f_10))
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
			Var8 = { func_1544(uParam1->f_10) };
			Var10 = { func_1545() };
			func_1546(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_481(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1547(uParam1->f_10);
		if (uParam1->f_2 && !func_419(uParam1->f_6))
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
	func_480(uParam1->f_10);
	if (func_481(uParam1->f_10))
	{
		iVar16 = func_285(uParam1->f_10);
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

bool func_920(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_921(int iParam0)
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

bool func_922(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1548(iParam1))
	{
		return false;
	}
	iVar0 = func_1549(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
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

void func_923(var uParam0, bool bParam1)
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

float func_924(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_925(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1550(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1551(iParam0))
	{
		if (func_921(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_414(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_925(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_925(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_414(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_414(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_414(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_414(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_414(iParam5, 129))
	{
		if (func_414(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_414(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_414(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_414(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1551(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_414(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_414(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_926(int iParam0, int iParam1, int iParam2)
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

bool func_927(var uParam0, int iParam1)
{
	switch (func_1552(uParam0))
	{
		case 0:
			if (!func_1553(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1554(uParam0, 1);
			break;
		case 1:
			func_1555(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_856(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1554(uParam0, 2);
			break;
		case 2:
			if (func_1556(uParam0))
			{
				func_1557(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1554(uParam0, 3);
			}
			break;
		case 3:
			if (func_934(&(uParam0->f_3)) >= 1f)
			{
				func_1554(uParam0, 4);
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
			func_1558(&iVar1, 0);
			release_script_audio_bank();
			func_1554(uParam0, 0);
			return true;
	}
	return false;
}

void func_928(var uParam0)
{
	if (!func_120(uParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(uParam0->f_607)}, 8);
		func_1559(&uVar0, 15000, 0, 0, 0, 1);
		func_103(uParam0, 524288);
	}
}

bool func_929(var uParam0)
{
	iVar0 = func_35(uParam0);
	if (func_162(uParam0, func_33(uParam0)) <= 3)
	{
		iVar0 = func_33(uParam0);
	}
	Var1 = { func_1560(uParam0, iVar0) };
	if (func_1562(&(uParam0->f_10792), Var1, func_1561(&(uParam0->f_10792)), 0))
	{
		func_140(uParam0, func_33(uParam0), 262144);
		if (func_1563(&(uParam0->f_10792), 524288))
		{
			func_401(uParam0, 67108864);
			func_1564(&(uParam0->f_10792), 524288);
		}
		func_1565(&(uParam0->f_7375), &(uParam0->f_10792));
		return true;
	}
	return false;
}

void func_930(var uParam0, int iParam1)
{
	uParam0->f_5307 = (uParam0->f_5307 - (uParam0->f_5307 && iParam1));
}

bool func_931(var uParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(uParam0, 16777216))
	{
		func_1566(uParam0);
		func_1567(uParam0);
		return true;
	}
	if (func_1568(Param1, &(uParam0->f_7375), uParam0))
	{
		return true;
	}
	if (func_154(uParam0) == 0)
	{
		func_954(uParam0);
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
			func_1569(uParam0);
			func_930(uParam0, 524288);
			func_1570(uParam0);
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

bool func_932(var uParam0)
{
	iVar0 = 1;
	if (!func_1571(func_61(uParam0), func_120(uParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1572(func_61(uParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1573(func_61(uParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_443(uParam0, func_33(uParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(uParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_910(uParam0->f_607)}, 3);
	if (!func_23(&(uParam0->f_8269)))
	{
		if (!func_933(&(uParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_933(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1574(uParam0);
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

float func_934(float fParam0)
{
	if (!func_26(fParam0))
	{
		return fParam0->f_1;
	}
	if (func_548(fParam0))
	{
		return fParam0->f_2;
	}
	return (func_590() - fParam0->f_1);
}

bool func_935()
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

void func_936(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

bool func_937(int iParam0)
{
	bVar2 = true;
	iVar0 = 0;
	while (iVar0 < iVar467)
	{
		iVar1 = iVar0;
		if (func_883(vLocal_470[iVar1]->f_2, iParam0))
		{
			if (&vLocal_470[iVar1] == 0)
			{
				func_462(iVar1);
				bVar2 = false;
			}
			else if (&vLocal_470[iVar1] == 2)
			{
				bVar2 = false;
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		func_456(10);
	}
	return bVar2;
}

int func_938(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (((!iVar1336 == 3 && !iVar1336 == 4) && !iVar1336 == 5) && !iVar1336 == 0)
			{
				func_1575(3);
			}
			return func_1576();
		case 1:
			if ((!iVar1336 == 0 && !iVar1336 == 1) && !iVar1336 == 2)
			{
				func_1575(0);
			}
			return func_1577();
	}
	return 0;
}

bool func_939()
{
	if (!_0xa0bc8faed8cfeb3c(Global_35))
	{
		return false;
	}
	if (func_165(21))
	{
		return true;
	}
	_set_ped_body_component(Global_35, 2072259397);
	_set_ped_body_component(Global_35, -88712922);
	_set_ped_body_component(Global_35, 361527976);
	_update_ped_variation(Global_35, false, true, true, true, false);
	func_456(21);
	return false;
}

bool func_940(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		if ((func_165(22) && bParam1) || (func_165(23) && !bParam1))
		{
			return true;
		}
	}
	if (!is_entity_dead(Global_35))
	{
		if (bParam1)
		{
			apply_ped_damage_pack(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L", 0f, 1f);
			apply_ped_damage_pack(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L", 0f, 1f);
			apply_ped_damage_pack(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L", 0f, 1f);
			apply_ped_damage_pack(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L", 0f, 1f);
			apply_ped_damage_pack(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L", 0f, 1f);
			func_456(22);
			func_176(23);
		}
		else
		{
			apply_ped_damage_pack(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L_Cauterized", 0f, 1f);
			apply_ped_damage_pack(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L_Cauterized", 0f, 1f);
			apply_ped_damage_pack(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L_Cauterized", 0f, 1f);
			apply_ped_damage_pack(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L_Cauterized", 0f, 1f);
			apply_ped_damage_pack(Global_35, "PD_ODR3_Arthur_Wound_Shoulder_L_Cauterized", 0f, 1f);
			func_456(23);
			func_176(22);
		}
		return true;
	}
	return false;
}

int func_941(var uParam0)
{
	if (func_8(uParam0, 8) && !func_120(uParam0, 4))
	{
		return 0;
	}
	if (((iVar1174 == 0 && !func_120(uParam0, 4)) && !func_128(uParam0, 1)) && !func_128(uParam0, 2))
	{
		return 0;
	}
	if (func_120(uParam0, 4) && !func_128(uParam0, 2))
	{
		return 1;
	}
	return 2;
}

bool func_942(var uParam0)
{
	iVar0 = 1;
	iVar25 = func_33(uParam0);
	iVar26 = func_941(uParam0);
	if ((iVar25 == 0 || iVar25 == 1) || iVar25 == 2)
	{
		bVar21 = true;
		bVar22 = true;
		bVar23 = true;
		if (iVar25 == 0 && !iVar26 == 1)
		{
			bVar24 = true;
		}
		if (iVar25 == 0)
		{
			if (iVar26 == 1)
			{
				Var1 = { func_551(0, 1) };
				Var17 = { func_551(0, 0) };
			}
			else
			{
				Var1 = { func_1578(10, 0) };
				Var17 = { 663.0721f, -1230.414f, 36.3808f };
			}
			Var9 = { func_551(0, 2) };
			Var5 = { func_551(0, 3) };
			Var13 = { func_551(0, 4) };
		}
		else if (iVar25 == 1)
		{
			Var17 = { func_551(1, 1) };
			Var1 = { func_551(0, 5) };
			Var9 = { func_551(0, 5) };
			Var5 = { func_551(0, 6) };
			Var13 = { func_551(0, 6) };
		}
		else if (iVar25 == 2)
		{
			Var17 = { func_1578(1, 6) };
			Var1 = { func_551(0, 7) };
			Var9 = { func_1578(1, 1) };
			Var5 = { func_551(0, 8) };
			Var13 = { func_1578(1, 4) };
		}
	}
	if (iVar25 == 8)
	{
		bVar23 = true;
		Var17 = { func_1578(0, 2) };
	}
	if (bVar21)
	{
		if (!Local_133[func_1308(6)]->f_3 == 7)
		{
			if (func_1579(uParam0, 2, 6, 0, 1, 0, Var9, 1))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		if (!Local_133[6]->f_3 == 7)
		{
			if (func_1450(uParam0, 6, ((iVar26 == 0 && iVar25 == 0) && func_414(func_382(func_12(23)), 1)), 1, 0, Var1, 0))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (bVar22)
	{
		if (!Local_133[func_1308(7)]->f_3 == 7)
		{
			if (func_1579(uParam0, func_1308(7), 7, 0, 1, 0, Var13, 1))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		if (!Local_133[7]->f_3 == 7)
		{
			if (func_1450(uParam0, 7, (iVar26 == 0 && iVar25 == 0), 1, 0, Var5, 0))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (bVar24)
	{
		Var27 = { 671.6998f, -1251.066f, 42.7555f };
		if (!Local_133[8]->f_3 == 7)
		{
			if (func_1450(uParam0, 8, func_414(func_382(func_12(23)), 2), 1, 1, Var27, 1))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		if (!Local_133[9]->f_3 == 7)
		{
			if (func_1450(uParam0, 9, func_414(func_382(func_12(23)), 4), 1, 1, Var27, 1))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		if (!Local_133[11]->f_3 == 7)
		{
			if (func_1450(uParam0, 11, func_414(func_382(func_12(23)), 8), 1, 1, Var27, 1))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (bVar23 && !Local_133[1]->f_2 == 1)
	{
		func_288(uParam0, 1);
		if (func_447(uParam0, 1, Var17, Var17.f_1, Var17.f_2, Var17.f_3, 1, 1, 1))
		{
			Local_133[1] = func_283(uParam0);
			if (does_entity_exist(&(Local_133[1])) && !is_entity_dead(&(Local_133[1])))
			{
				func_943(1, 1);
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_943(int iParam0, int iParam1)
{
	Local_133[iParam0]->f_2 = iParam1;
}

void func_944()
{
	iLocal_781[0] = -160924582;
	iLocal_781[2] = 1845102363;
	iLocal_781[1] = 0;
	if (has_ped_got_weapon(Global_35, 1402226560, 0, false))
	{
		iLocal_781[1] = 1402226560;
	}
	else if (has_ped_got_weapon(Global_35, -506285289, 0, false))
	{
		iLocal_781[1] = -506285289;
	}
	else if (func_122(1402226560))
	{
		iLocal_781[1] = 1402226560;
	}
	else if (func_122(1402226560))
	{
		iLocal_781[1] = -506285289;
	}
	else
	{
		iLocal_781[1] = 1402226560;
	}
	if (&iLocal_781[1] == 0)
	{
	}
	iLocal_781[7] = 379542007;
	iLocal_781[4] = 379542007;
	iLocal_781[5] = 1676963302;
	iLocal_781[3] = -164645981;
	iLocal_781[6] = 1676963302;
	iLocal_781[8] = 1845102363;
	if (func_122(-764310200))
	{
		iLocal_781[9] = -764310200;
	}
	iVar0 = 0;
	while (iVar0 < iVar779)
	{
		iVar0++;
	}
}

void func_945(int iParam0)
{
	iParam0 = func_289(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_482(iParam0, 64);
	func_290();
}

void func_946()
{
	_add_blood_pool(-859.7f, -744f, 56.1f, true);
	_add_blood_pool(-859.813f, -743.966f, 56.1f, true);
	_add_blood_pool(-859.702f, -743.883f, 56.1f, true);
	_add_blood_pool(-859.7f, -744.8f, 56.1f, true);
	_add_blood_pool(-860.4f, -744.4f, 56.1f, true);
	_add_blood_pool(-861.8f, -745.5f, 56.1f, true);
	_add_blood_pool(-862.7f, -745.9f, 56.1f, true);
	_add_blood_pool(-863.6f, -745.9f, 56.3f, true);
	_add_blood_pool(-861f, -745.8f, 56.1f, true);
}

void func_947(int iParam0)
{
	if (Local_133[iParam0]->f_3 == 7 && !is_entity_dead(&(Local_133[iParam0])))
	{
		_set_entity_coords_and_heading(&(Local_133[iParam0]), func_1336(10, 0), func_1580(10, 0), true, false, true);
		_0x9587913b9e772d29(&(Local_133[iParam0]), 0);
		set_entity_visible(&(Local_133[iParam0]), true);
		set_entity_collision(&(Local_133[iParam0]), true, false);
		freeze_entity_position(&(Local_133[iParam0]), false);
	}
}

int func_948(var uParam0)
{
	switch (iVar1174)
	{
		case 0:
			if (!func_165(31))
			{
				func_1581(uParam0);
				func_456(31);
			}
			func_1582(uParam0);
			break;
		case 2:
			if (!func_165(61))
			{
				func_1581(uParam0);
				func_456(61);
			}
			func_1583(uParam0);
			break;
		case 4:
			if (!func_165(83))
			{
				func_1581(uParam0);
				func_456(83);
			}
			func_1584(uParam0);
			break;
		case 25:
			if (!func_165(146))
			{
				func_1581(uParam0);
				func_456(146);
			}
			func_1585(uParam0);
			break;
	}
	return 1;
}

void func_949(var uParam0, int iParam1)
{
	uParam0->f_8266 = iParam1;
	func_103(uParam0, 1024);
}

int func_950(var uParam0)
{
	switch (func_33(uParam0))
	{
		case 0:
			if (func_165(33))
			{
				func_1586(iVar1196);
				func_456(32);
			}
			func_1587();
			remove_anim_scene_entity(uParam0->f_7375.f_804, "Dutch", &(Local_133[6]));
			remove_anim_scene_entity(uParam0->f_7375.f_804, "MicahBell", &(Local_133[7]));
			_set_entity_coords_and_heading(&(Local_133[6]), 676.4988f, -1241.685f, 43.8f, -29.28f, true, false, true);
			_set_entity_coords_and_heading(&(Local_133[7]), 677.2648f, -1243.689f, 43.8f, -49.12f, true, false, true);
			_0x9587913b9e772d29(&(Local_133[6]), 0);
			_0x9587913b9e772d29(&(Local_133[7]), 0);
			break;
		case 2:
			func_1588(2);
			func_1588(3);
			break;
		case 25:
			do_screen_fade_out(0);
			break;
	}
	return 1;
}

void func_951(var uParam0, int iParam1)
{
	uParam0->f_8267 = iParam1;
	func_103(uParam0, 131072);
}

void func_952(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1589(1497516462);
			func_1590(2016141805);
			func_1590(1010885152);
			func_1590(-502324015);
			break;
		case 2016141805:
			func_1590(1497516462);
			func_1589(2016141805);
			func_1590(1010885152);
			func_1590(-502324015);
			break;
		case 1010885152:
			func_1590(1497516462);
			func_1590(2016141805);
			func_1589(1010885152);
			func_1590(-502324015);
			break;
		case -502324015:
			func_1590(1497516462);
			func_1590(2016141805);
			func_1590(1010885152);
			func_1589(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1590(-538889627);
			func_1590(-538880323);
			func_1590(-1056767524);
			func_1589(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1591();
			func_1589(iParam0);
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
			func_1592();
			func_1589(iParam0);
			break;
		case 2019386373:
			func_1590(-664252410);
			func_1590(2109952320);
			func_1589(2019386373);
			break;
		case -664252410:
			func_1590(2019386373);
			func_1590(2109952320);
			func_1589(-664252410);
			break;
		case 2109952320:
			func_1590(2019386373);
			func_1590(-664252410);
			func_1589(2109952320);
			break;
		case -1674179981:
			func_1590(-1835851517);
			func_1590(-1838352012);
			func_1589(-1674179981);
			break;
		case -1835851517:
			func_1590(-1674179981);
			func_1590(-1838352012);
			func_1589(-1835851517);
			break;
		case -1838352012:
			func_1590(-1674179981);
			func_1590(-1835851517);
			func_1589(-1838352012);
			break;
		case -1717960576:
			func_1590(210001842);
			func_1589(-1717960576);
			break;
		case 210001842:
			func_1590(-1717960576);
			func_1589(210001842);
			break;
		case -150493654:
			func_1590(-1271608261);
			func_1590(1846061697);
			func_1590(-1145519186);
			func_1589(-150493654);
			break;
		case -1271608261:
			func_1590(-150493654);
			func_1590(1846061697);
			func_1590(-1145519186);
			func_1589(-1271608261);
			break;
		case 1846061697:
			func_1590(-150493654);
			func_1590(-1271608261);
			func_1590(-1145519186);
			func_1589(1846061697);
			break;
		case -1145519186:
			func_1590(-150493654);
			func_1590(-1271608261);
			func_1590(1846061697);
			func_1589(-1145519186);
			break;
		case 1766284049:
			func_1590(280705402);
			func_1590(1926308480);
			func_1589(1766284049);
			break;
		case 280705402:
			func_1590(1766284049);
			func_1590(1926308480);
			func_1589(280705402);
			break;
		case 1926308480:
			func_1590(1766284049);
			func_1590(280705402);
			func_1589(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1590(439465264);
				func_1589(1609506757);
			}
			else
			{
				func_1590(1609506757);
				func_1590(439465264);
			}
			break;
		case 439465264:
			if (func_537(1609506757))
			{
				if (bParam1)
				{
					func_1589(439465264);
				}
				else
				{
					func_1590(439465264);
				}
			}
			break;
		case 1822001510:
			func_1590(-1612662716);
			func_1589(1822001510);
			break;
		case -1612662716:
			func_1590(1822001510);
			func_1589(-1612662716);
			break;
		case 1306158345:
			func_1590(1952610440);
			func_1590(-223469678);
			func_1590(-404698347);
			func_1590(1517904467);
			func_1589(1306158345);
			break;
		case 1952610440:
			func_1590(1306158345);
			func_1590(-223469678);
			func_1590(-404698347);
			func_1590(1517904467);
			func_1589(1952610440);
			break;
		case -223469678:
			func_1590(1306158345);
			func_1590(1952610440);
			func_1590(-404698347);
			func_1590(1517904467);
			func_1589(-223469678);
			break;
		case -404698347:
			func_1590(1306158345);
			func_1590(1952610440);
			func_1590(-223469678);
			func_1590(1517904467);
			func_1589(-404698347);
			break;
		case 1517904467:
			func_1590(1306158345);
			func_1590(1952610440);
			func_1590(-223469678);
			func_1590(-404698347);
			func_1589(1517904467);
			break;
		case 1376646519:
			func_1590(931649776);
			func_1590(-434590080);
			func_1590(1743048395);
			func_1590(449774763);
			func_1589(1376646519);
			break;
		case 931649776:
			func_1590(1376646519);
			func_1590(-434590080);
			func_1590(1743048395);
			func_1590(449774763);
			func_1589(931649776);
			break;
		case -434590080:
			func_1590(1376646519);
			func_1590(931649776);
			func_1590(1743048395);
			func_1590(449774763);
			func_1589(-434590080);
			break;
		case 1743048395:
			func_1590(1376646519);
			func_1590(931649776);
			func_1590(-434590080);
			func_1590(449774763);
			func_1589(1743048395);
			break;
		case 449774763:
			func_1590(1376646519);
			func_1590(931649776);
			func_1590(-434590080);
			func_1590(1743048395);
			func_1589(449774763);
			break;
		case -1414537028:
			func_1590(38162571);
			func_1590(1350391819);
			func_1590(54073871);
			func_1589(-1414537028);
			break;
		case 38162571:
			func_1590(-1414537028);
			func_1590(1350391819);
			func_1590(54073871);
			func_1589(38162571);
			break;
		case 1350391819:
			func_1590(-1414537028);
			func_1590(38162571);
			func_1590(54073871);
			func_1589(1350391819);
			break;
		case 54073871:
			func_1590(-1414537028);
			func_1590(38162571);
			func_1590(1350391819);
			func_1589(54073871);
			break;
		case 198200492:
			func_1589(198200492);
			func_1590(-1124061431);
			func_1590(52706132);
			func_1590(-259123672);
			break;
		case -1124061431:
			func_1590(198200492);
			func_1589(-1124061431);
			func_1590(52706132);
			func_1590(-259123672);
			break;
		case 52706132:
			func_1590(198200492);
			func_1590(-1124061431);
			func_1589(52706132);
			func_1590(-259123672);
			break;
		case -259123672:
			func_1590(198200492);
			func_1590(-1124061431);
			func_1590(52706132);
			func_1589(-259123672);
			break;
		case -919512195:
			func_1589(-919512195);
			func_1590(-1925798111);
			func_1590(420709909);
			func_1590(1703426636);
			break;
		case -1925798111:
			func_1589(-1925798111);
			func_1590(-919512195);
			func_1590(420709909);
			func_1590(1703426636);
			break;
		case 420709909:
			func_1589(420709909);
			func_1590(-919512195);
			func_1590(-1925798111);
			func_1590(1703426636);
			break;
		case 1703426636:
			func_1589(1703426636);
			func_1590(-919512195);
			func_1590(-1925798111);
			func_1590(420709909);
			break;
		case -1223121209:
			func_1589(-1223121209);
			func_1590(630808005);
			break;
		case 630808005:
			func_1589(630808005);
			func_1590(-1223121209);
			break;
		case 1453909576:
			func_1589(1453909576);
			func_1590(1643531967);
			break;
		case 1643531967:
			func_1589(1643531967);
			func_1590(1453909576);
			break;
		case 0:
			func_1589(0);
			func_1590(473295046);
			func_1590(-1738165526);
			break;
		case 473295046:
			func_1589(473295046);
			func_1590(0);
			func_1590(-1738165526);
			break;
		case -1738165526:
			func_1589(-1738165526);
			func_1590(0);
			func_1590(473295046);
			break;
		case 932909855:
			func_1589(932909855);
			func_1590(2051822093);
			break;
		case 2051822093:
			func_1589(2051822093);
			func_1590(932909855);
			break;
		case 405586984:
			func_1589(405586984);
			func_1590(1509509592);
			func_1590(-959357075);
			func_1590(-1311865656);
			break;
		case 1509509592:
			func_1589(1509509592);
			func_1590(405586984);
			func_1590(-959357075);
			func_1590(-1311865656);
			break;
		case -959357075:
			func_1589(-959357075);
			func_1590(1509509592);
			func_1590(405586984);
			func_1590(-1311865656);
			break;
		case -1311865656:
			func_1589(-1311865656);
			func_1590(1509509592);
			func_1590(-959357075);
			func_1590(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1589(-524145696);
			}
			else
			{
				func_1590(-524145696);
			}
			func_1590(1626481264);
			func_1590(282809459);
			break;
		case 282809459:
			func_1589(282809459);
			func_1590(1626481264);
			func_1590(-524145696);
			break;
		case 1626481264:
			func_1589(1626481264);
			func_1590(-524145696);
			func_1590(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1589(885203519);
			}
			else
			{
				func_1590(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1589(-1080627546);
			}
			else
			{
				func_1590(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_537(iParam0))
				{
					func_1589(iParam0);
				}
			}
			else if (func_537(iParam0))
			{
				func_1590(iParam0);
			}
			break;
	}
}

void func_953(var uParam0)
{
	if (func_165(29))
	{
		_0x0eabf182fbb63d72(Global_35, 5, 1);
	}
	if (func_165(152))
	{
		func_166();
	}
	if (func_165(15) || func_165(16))
	{
		func_1593();
	}
	if (func_165(0))
	{
		func_176(0);
	}
	if (func_165(13))
	{
		func_1594(0);
	}
	if (func_165(14))
	{
		func_1370(fVar771);
	}
	func_197();
	iLocal_1176 = get_frame_count();
	iLocal_1177 = func_33(uParam0);
	func_176(25);
	if (((((iVar1174 == 2 || iVar1174 == 3) || iVar1174 == 4) || iVar1174 == 5) || iVar1174 == 6) || iVar1174 == 7)
	{
		func_1341(0);
		func_456(25);
	}
	if (func_165(25))
	{
		_0xf45e46deecf7df6e(14336, 0, 0, -1, -1);
		_0xab0d553fe20a6e25(0f);
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
		set_scenario_ped_density_multiplier_this_frame(0f);
	}
	if (((iVar1174 == 4 || iVar1174 == 5) || iVar1174 == 6) || iVar1174 == 7)
	{
		if (!func_26(vLocal_792[1]) || func_934(vLocal_792[1]) >= 30f)
		{
			func_27(vLocal_792[1], 1);
			func_1595(0.75f);
		}
	}
}

void func_954(var uParam0)
{
	if (!func_23(&(uParam0->f_8269)))
	{
		return;
	}
	if (!func_121(uParam0, func_33(uParam0), 268435456))
	{
		return;
	}
	func_1596(uParam0);
}

void func_955(var uParam0)
{
	if (!func_8(uParam0, 8388608))
	{
		if (func_162(uParam0, func_33(uParam0)) == 5 || func_162(uParam0, func_33(uParam0)) == 6)
		{
			if (!func_237())
			{
				if (func_934(&(uParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_244(&(uParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_956(var uParam0)
{
	if (func_121(uParam0, func_33(uParam0), 8388608))
	{
		if (func_1597(uParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1598();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1599(uParam0, func_33(uParam0), 8388608);
		}
	}
}

void func_957(var uParam0)
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
		if (func_261() || func_54())
		{
			func_99(uParam0, 1048576);
		}
	}
	else if (!func_261() && !func_54())
	{
		func_930(uParam0, 1048576);
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
			func_930(uParam0, 134217728);
		}
	}
}

void func_958(var uParam0)
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

void func_959(var uParam0)
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

void func_960(var uParam0)
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

int func_961(var uParam0)
{
	if ((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_277(uParam0->f_5423[iVar0]))
		{
			func_1600(uParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_962(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1601(iVar0))
	{
		return false;
	}
	iVar1 = func_1602(iParam2);
	if (!func_1603(iVar1))
	{
		return false;
	}
	if (!func_1604(uParam0, iParam1, iParam2))
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

int func_963(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_21;
}

int func_964(var uParam0, int iParam1)
{
	return 1;
}

void func_965(var uParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_244(&(uParam0->f_603));
	}
}

void func_966(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_967(var uParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(uParam0->f_13109)))
	{
		func_27(&(uParam0->f_13109), 0);
	}
	else if (func_934(&(uParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_278(uParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_279(uParam0->f_5421))
		{
			iVar2 = func_280(uParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = func_1605(uParam0->f_5421, iVar1);
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

float func_968(var uParam0)
{
	return func_934(&(uParam0->f_603));
}

bool func_969(var uParam0)
{
	if ((func_120(uParam0, 4) || func_120(uParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_970(var uParam0, int iParam1, int iParam2)
{
	if (func_8(uParam0, -2147483648))
	{
		return true;
	}
	if (func_962(uParam0, iParam1, 4))
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
		func_1606(uParam0);
		if (func_1607(uParam0))
		{
			func_1608(uParam0);
		}
		if (func_121(uParam0, func_33(uParam0), 33554432) && func_8(uParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_930(uParam0, 524288);
		func_1609(&(uParam0->f_7375), 4);
		if (func_1597(uParam0))
		{
			func_140(uParam0, func_33(uParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1598();
		}
		return true;
	}
	return false;
}

void func_971(var uParam0)
{
	func_1610(uParam0);
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

bool func_972(var uParam0, int iParam1)
{
	if (func_120(uParam0, 16384))
	{
		if (func_929(uParam0))
		{
			func_51(&(uParam0->f_10792));
			func_930(uParam0, 2097152);
			func_288(uParam0, 16384);
			func_103(uParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(uParam0, 4))
	{
		func_964(uParam0, iParam1);
		func_99(uParam0, 4);
	}
	Var0 = { func_1560(uParam0, iParam1) };
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		if (func_8(uParam0, 2097152))
		{
			if (func_929(uParam0))
			{
				func_930(uParam0, 2097152);
				func_931(uParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_931(uParam0, Var0);
		}
	}
	else if (func_8(uParam0, 2097152))
	{
		if (func_929(uParam0))
		{
			func_930(uParam0, 2097152);
			func_1567(uParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		return func_931(uParam0, Var0);
	}
	return true;
}

bool func_973(var uParam0)
{
	return func_1611(&(uParam0->f_7375));
}

void func_974(var uParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1612(uParam0))
		{
			func_454(uParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1613(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

int func_975(var uParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(uParam0, func_33(uParam0), 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13145)
	{
		if (func_277(uParam0->f_5423[iVar1]))
		{
			if (func_1614(uParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1615(uParam0, uParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_976(var uParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1616(uParam0))
		{
			func_454(uParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1613(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

void func_977(var uParam0)
{
	switch (func_1617(&iVar0))
	{
		case 1:
			func_1339(uParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(uParam0->f_13178))
			{
				uParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_214(iVar0) && iVar0 == func_12(uParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(uParam0->f_13178, bVar9);
			break;
	}
}

bool func_978(var uParam0, int iParam1)
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

int func_979(var uParam0, int iParam1)
{
	if (func_8(uParam0, 16777216))
	{
		func_1566(uParam0);
		func_930(uParam0, 65536);
		return 0;
	}
	if (!func_121(uParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1560(uParam0, iParam1) };
	if (func_1618(uParam0, &Var0))
	{
		if (!func_8(uParam0, 65536))
		{
			func_99(uParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_980(var uParam0, int iParam1)
{
	func_1619(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1, func_248(uParam0, iParam1));
}

void func_981(var uParam0, int iParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 67108864))
	{
		if (does_blip_exist(uParam0->f_5303))
		{
			remove_blip(&(uParam0->f_5303));
		}
		uParam0->f_7374 = 0;
		func_966(uParam0, iParam1, 2);
		func_134(uParam0, 0);
		func_135(uParam0, 0);
		func_99(uParam0, 8);
		func_930(uParam0, -2147483648);
		func_140(uParam0, func_33(uParam0), 67108864);
		func_930(uParam0, 4);
		func_930(uParam0, 8192);
		func_930(uParam0, 536870912);
		func_288(uParam0, 4);
		func_65(0);
		func_64(0);
		func_930(uParam0, 2);
		func_45();
		uParam0->f_5302 = 0;
		func_1620(uParam0);
		if ((func_35(uParam0) == 25 || func_35(uParam0) == 26) && func_82(32768))
		{
			func_401(uParam0, 524288);
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
				func_1621(1, 1);
			}
		}
	}
}

void func_982(bool bParam0)
{
	if (!func_221(0, 0, 1) || bParam0)
	{
		iVar0 = func_1108();
		iVar1 = func_1111(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1395(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1395(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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

bool func_983(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1622(bParam1, bParam2, bParam3);
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

var func_984(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1623(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1624(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1623(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_985(var uParam0)
{
	return true;
}

bool func_986(var uParam0)
{
	return true;
}

int func_987(var uParam0)
{
	return 1;
}

bool func_988(int iParam0)
{
	iVar0 = func_989(iParam0);
	return (iVar0 != -1 && iVar0 != 0);
}

int func_989(int iParam0)
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
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
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
			return 1;
		case 16:
			return 1;
		case 17:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 0;
		case 21:
			return 0;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 0;
		case 27:
			return 0;
		case 28:
			return 0;
		case 29:
			return 0;
		case 30:
			return 0;
		case 31:
			return 0;
		case 32:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 35:
			return 0;
		case 36:
			return 0;
		default:
			break;
	}
	return -1;
}

int func_990(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 5;
		default:
			break;
	}
	return -1;
}

int func_991(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			return func_1625(iParam1);
		default:
			break;
	}
	return -1;
}

int func_992(int iParam0)
{
	return &(Global_1425247->f_12[iParam0]);
}

void func_993(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		_0xdd1232b332cbb9e7(1, 1, 0);
	}
	func_756(func_1626(iParam0), 10000, 0, 0, 0, 1);
}

struct<7> func_994(int iParam0)
{
	Var0.f_6 = -1;
	switch (iParam0)
	{
		case 0:
			Var0 = { 655.6217f, -1251.418f, 42.6823f };
			Var0.f_3 = { 0f, 0f, 135.14f };
			Var0.f_6 = 24;
			break;
		case 1:
			Var0 = { 666.599f, -1244.91f, 43.1356f };
			Var0.f_3 = { 0f, 0f, -134.213f };
			Var0.f_6 = 24;
			break;
		case 2:
			Var0 = { 666.181f, -1243.55f, 43.1394f };
			Var0.f_3 = { 0f, 0f, -39.6912f };
			Var0.f_6 = 24;
			break;
		case 4:
			Var0 = { 459.6345f, 55.1907f, 133.77f };
			Var0.f_3 = { 0f, 0f, 160.04f };
			Var0.f_6 = 25;
			break;
		case 5:
			Var0 = { -545.3f, 397.3f, 87.2f };
			Var0.f_3 = { 0f, 90f, 0f };
			Var0.f_6 = 33;
			break;
		case 13:
			Var0 = { func_845(1, 5) };
			Var0.f_3 = { func_845(1, 5) };
			Var0.f_6 = 38;
			break;
		case 14:
			Var0 = { func_845(1, 5) };
			Var0.f_3 = { func_1362(0) };
			Var0.f_6 = 34;
			break;
		case 15:
			Var0 = { -860.552f, -742.473f, 55.939f };
			Var0.f_3 = { -3.814f, 0f, 96.204f };
			Var0.f_6 = 26;
			break;
		case 17:
			Var0.f_6 = 31;
			break;
		case 10:
			Var0.f_6 = 39;
			break;
		case 8:
			Var0.f_6 = 40;
			break;
		case 9:
			Var0.f_6 = 41;
			break;
		case 12:
			Var0.f_6 = 42;
			break;
		case 11:
			Var0 = { -859.6823f, -742.6375f, 56.7512f };
			Var0.f_6 = 43;
			break;
		case 16:
			Var0.f_6 = 37;
			break;
		case 18:
			Var0 = { -866.1f, -732.663f, 58.7567f };
			Var0.f_3 = { 0f, 0f, 20.88f };
			Var0.f_6 = 27;
			break;
		case 20:
			Var0 = { -866.15f, -732.804f, 58.9605f };
			Var0.f_3 = { 1.65032f, 37.3885f, -147.878f };
			Var0.f_6 = 35;
			break;
		case 19:
			Var0.f_6 = 36;
			break;
		case 23:
			Var0 = { -829.3891f, -603.7919f, 57.4328f };
			Var0.f_6 = 31;
			break;
		case 24:
			Var0 = { -835.6995f, -597.3657f, 56.9936f };
			Var0.f_6 = 31;
			break;
		case 25:
			Var0 = { -1054.51f, -603.02f, 77.68f };
			Var0.f_6 = 31;
			break;
		case 26:
			Var0 = { -1053.338f, -688.8571f, 70.0215f };
			Var0.f_6 = 31;
			break;
		case 27:
			Var0 = { -863.52f, -733.99f, 58.69f };
			Var0.f_3 = { 0f, 2f, -81.93f };
			Var0.f_6 = 28;
			break;
		case 28:
			Var0 = { -849.68f, -726.35f, 58.1f };
			Var0.f_3 = { 0f, 0f, -20.05f };
			Var0.f_6 = 29;
			break;
		case 29:
			Var0 = { -851.47f, -725.87f, 58.44f };
			Var0.f_3 = { 0f, 10f, 0f };
			Var0.f_6 = 30;
			break;
		case 30:
			Var0 = { -849.53f, -725.61f, 58.35f };
			Var0.f_3 = { -5f, -7f, 158.76f };
			Var0.f_6 = 32;
			break;
		case 31:
			Var0 = { 654.4f, -1243.5f, 43.3f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 44;
			break;
		default:
			break;
	}
	return Var0;
}

void func_995(var uParam0, int iParam1)
{
	func_1505(&(uParam0->f_7375), iParam1);
	func_1627(&(uParam0->f_10792), iParam1);
}

void func_996(var uParam0, int iParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(uParam0->f_804))
	{
		return;
	}
	if (!func_1488(uParam0, iParam1))
	{
		return;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_1628(uParam0, iParam1);
	}
	if (_0x6f1f0b17109309da(uParam0->f_804, sParam2))
	{
		if (((is_entity_a_ped(iParam1) && does_entity_exist(_get_anim_scene_ped(uParam0->f_804, sParam2, false))) || (is_entity_an_object(iParam1) && does_entity_exist(_get_anim_scene_object(uParam0->f_804, sParam2, false)))) || (is_entity_a_vehicle(iParam1) && does_entity_exist(_get_anim_scene_vehicle(uParam0->f_804, sParam2, false))))
		{
			remove_anim_scene_entity(uParam0->f_804, sParam2, iParam1);
		}
	}
}

bool func_997(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_998(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return true;
	}
	return false;
}

void func_999(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_1046(iParam1))
	{
		return;
	}
	iVar0 = func_1079(iParam1);
	if (func_1629(iParam1))
	{
		if (!func_1630(iParam1))
		{
			return;
		}
	}
	func_1075(iParam1, 39, 1);
	func_1631(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_1631(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_1631(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_1050(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1632(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_1000(int iParam0, bool bParam1)
{
	if (!func_1046(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1073(&((*Global_1360165)[iParam0]->f_12), 16))
		{
			func_1072(iParam0, 16, 0);
		}
	}
	func_1072(iParam0, 1, bParam1);
}

int func_1001(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_322((*Global_1347702)[iParam0]->f_12, 2097152))
		{
			if (func_348((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_322((*Global_1347702)[iParam0]->f_12, 256))
		{
			if (!func_348((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_1633(iParam0);
}

bool func_1002(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1003(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1004(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_295(iParam0))
	{
		return false;
	}
	return func_216((*Global_1347702)[iParam0]->f_15);
}

int func_1005(int iParam0)
{
	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_1634(iParam0))
	{
		return -1;
	}
	if (func_20() != -1)
	{
		iVar2 = func_1017(iParam0);
		if (iVar2 >= 0)
		{
			func_1635(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*(*Global_1898346)[iVar1] = { Var3 };
			func_1636(iVar1, 1);
			func_1635(iParam0, 1);
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
		iVar2 = func_1017(iParam0);
		if (iVar2 >= 0)
		{
			func_1635(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_214(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*(*Global_1898346)[iVar0] = { Var3 };
					func_1636(iVar0, 1);
					func_1635(iParam0, 1);
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

bool func_1006(int iParam0)
{
	return func_317(iParam0) == 2;
}

void func_1007(int iParam0)
{
	func_1637(iParam0);
}

bool func_1008(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_44 != -1)
	{
		if ((*Global_1347702)[iParam0]->f_44 != 0)
		{
			if (!func_1638((*Global_1347702)[iParam0]->f_44))
			{
				return false;
			}
		}
	}
	return true;
}

void func_1009(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1010(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_518(&((*Global_1347702)[iParam0]->f_29[iVar1])))
			{
				func_1640(&iVar0, func_1639(&((*Global_1347702)[iParam0]->f_29[iVar1])));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_1003(&((*Global_1347702)[iParam0]->f_13), 2);
		}
		else if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
		{
			if (func_1642(iVar0, (*Global_1347702)[iParam0]->f_15, 1, (*Global_1347702)[iParam0]->f_27, func_1641()))
			{
				func_1003(&((*Global_1347702)[iParam0]->f_13), 2);
			}
		}
		else
		{
			func_1003(&((*Global_1347702)[iParam0]->f_13), 2);
		}
	}
}

void func_1011(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_295(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		func_1643(iParam0);
	}
	if (func_1002((*Global_1347702)[iParam0]->f_13, 256))
	{
		func_1012(&((*Global_1347702)[iParam0]->f_13), 256);
	}
	if (func_322((*Global_1347702)[iParam0]->f_12, 1024))
	{
		func_1644(&((*Global_1347702)[iParam0]->f_12), 1024);
	}
	if (iParam1 == 1)
	{
		func_1645(iParam0, 0);
	}
	func_1646(iParam0);
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

void func_1012(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1013(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_214(iParam0))
	{
		return;
	}
	if (func_216(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	iVar0 = func_1017(iParam0);
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

void func_1014(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			func_1012(&((*Global_1347702)[iParam0]->f_13), 2);
			_0x748c5f51a18cb8f0(0);
			func_1011(iParam0, 1, 1, iParam1, 32);
			_0x748c5f51a18cb8f0(1);
			iVar1 = (Global_40.f_1094 - 1);
			if (iVar0 < iVar1)
			{
				if (func_295(&(Global_40.f_450[iVar1])))
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

bool func_1015(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return true;
	}
	return false;
}

Vector3 func_1016(int iParam0)
{
	if (!func_295(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1647(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

int func_1017(int iParam0)
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

int func_1018(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_1648(iParam0))
	{
		return 0;
	}
	if ((func_348((*Global_1347702)[59]->f_15, 1) && !func_348((*Global_1347702)[61]->f_15, 1)) && Global_40.f_9052.f_21 & 2 == 0)
	{
		return 0;
	}
	if (func_1649(player_id(), 1, 0))
	{
		if ((!does_blip_exist((*Global_1835011)[iParam0]->f_27) && !func_1650(iParam0)) && !Global_43891)
		{
			func_1652(iParam0, vdist2(func_1651(iParam0), Global_36), -1, 1, 1);
			func_1653((*Global_1835011)[iParam0], 2);
		}
		return 0;
	}
	if (bParam2)
	{
		if (!func_1642(func_1654(iParam0), func_12(iParam0), 0, (*Global_1835011)[iParam0]->f_21, iParam3))
		{
			return 0;
		}
		if (func_487(1) > 1)
		{
			if ((*Global_1835011)[iParam0]->f_73 <= 0)
			{
				(*Global_1835011)[iParam0]->f_73 = get_game_timer();
			}
			if ((get_game_timer() - (*Global_1835011)[iParam0]->f_73) < 60000)
			{
				if (func_1655(iParam0, 0, 1))
				{
					return 0;
				}
				if ((iParam0 == 15 && Global_1357549->f_1494 & 32768 != 0) && func_1656(Global_35, func_126(iParam0), 50f, 1, 1))
				{
					if (!_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
					{
						(*Global_1835011)[iParam0]->f_72 = create_tracked_point();
						set_tracked_point_info((*Global_1835011)[iParam0]->f_72, func_126(iParam0), 5f);
					}
					if (is_screen_faded_in() && (is_tracked_point_visible((*Global_1835011)[iParam0]->f_72) || is_sphere_visible(func_126(iParam0), 2.5f)))
					{
						return 0;
					}
				}
			}
		}
	}
	iVar0 = func_1005((*Global_1835011)[iParam0]->f_1);
	if (!func_1019(iVar0))
	{
		return 0;
	}
	else if ((*Global_1835011)[iParam0]->f_73 != 0)
	{
		(*Global_1835011)[iParam0]->f_73 = 0;
		func_1657(iParam0);
		if (_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
		{
			destroy_tracked_point((*Global_1835011)[iParam0]->f_72);
		}
	}
	if (bParam1)
	{
		func_1007((*Global_1835011)[iParam0]->f_1);
	}
	else if (!&Global_1879534)
	{
		func_229(4);
	}
	return 1;
}

bool func_1019(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

void func_1020(int iParam0, int iParam1)
{
	if (!func_1019(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 || iParam1);
}

void func_1021(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6)
{
	if (!func_1019(iParam1))
	{
		iParam1 = func_1017(func_12(iParam0));
		if (!func_1019(iParam1))
		{
			return;
		}
	}
	if (does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		if ((bParam2 || bParam6) && (!func_1658(iParam0, -1) || (*Global_1835011)[iParam0]->f_70))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 724623647);
		}
		else
		{
			if (func_238())
			{
				if (does_blip_exist((*Global_1835011)[iParam0]->f_27))
				{
					if ((*Global_1835011)[iParam0]->f_27 == Global_1905944->f_5698)
					{
						func_1659(1);
					}
				}
			}
			set_this_script_can_remove_blips_created_by_any_script(true);
			remove_blip(&((*Global_1835011)[iParam0]->f_27));
			if (func_1658(iParam0, -1) && func_1660(iParam0))
			{
				func_1652(iParam0, fParam5, iParam1, bParam2, 1);
				func_1653((*Global_1835011)[iParam0], 2);
			}
		}
	}
	else if ((bParam2 && !func_1015(iParam0)) && !Global_43891)
	{
		func_1652(iParam0, fParam5, iParam1, bParam2, 1);
	}
	if (func_1661(iParam1, 48))
	{
		set_script_as_no_longer_needed(&((*Global_1835011)[iParam0]->f_12));
	}
	if ((is_thread_active((*Global_1835011)[iParam0]->f_16, false) && !func_1662(iParam0)) && !func_1661(iParam1, 1024))
	{
		force_cleanup_for_thread_with_this_id((*Global_1835011)[iParam0]->f_16, 1);
	}
	if (_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
	{
		destroy_tracked_point((*Global_1835011)[iParam0]->f_72);
	}
	if (bParam4)
	{
		func_1013((*Global_1835011)[iParam0]->f_1);
	}
	else
	{
		func_1663(iParam1, 3831);
	}
	(*Global_1835011)[iParam0]->f_73 = 0;
}

void func_1022(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1023()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_1664(iVar0, 128))
		{
			func_1665(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_1024()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_1664(iVar0, 128) && func_1664(iVar0, 1))
		{
			func_1665(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_1025(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_1026()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_1666(iVar0, 16777216))
		{
			if (!func_1667(iVar0))
			{
				func_1668(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_1027(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_591(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_591(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_591(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_591(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_591(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_591(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_591(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

struct<4> func_1028()
{
	Var0 = { func_1248(0) };
	return func_1148(856287005, Var0, -218846335, 0);
}

bool func_1029(int iParam0, struct<4> Param1, bool bParam5)
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
			if (func_617(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1669(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1670(&Var7);
					if (func_1200(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							func_1671(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

float func_1030(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1672();
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1955569->f_753.f_5[iParam0]);
		case 1:
			return &(Global_1955569->f_866.f_2.f_5[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_1031(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_1672();
	}
	iVar0 = player_ped_id();
	if (bParam2)
	{
		if (fParam1 >= 100f)
		{
			play_sound_frontend("Core_Full", "Consumption_Sounds", true, 0);
		}
		else
		{
			play_sound_frontend("Core_Fill_Up", "Consumption_Sounds", true, 0);
		}
	}
	if (bParam3)
	{
		func_1673(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_1674(iVar0, iParam0, fParam1);
	func_1675(iParam0, fParam1, bParam4, iParam5);
	if (!is_entity_dead(iVar0))
	{
		_set_attribute_core_value(iVar0, func_1039(iParam0), ceil(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1032(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_735(*iParam0);
	iVar1 = func_736(*iParam0);
	iVar2 = func_737(*iParam0);
	iVar3 = func_738(*iParam0);
	iVar4 = func_739(*iParam0);
	iVar5 = func_740(*iParam0);
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
		iVar7 = func_741(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_742(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_1033(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1672();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1955569->f_753.f_5[iParam0]->f_2;
		case 1:
			return Global_1955569->f_866.f_2.f_5[iParam0]->f_2;
		default:
			break;
	}
	return -1;
}

int func_1034(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1672();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1955569->f_753.f_5[iParam0]->f_1;
		case 1:
			return Global_1955569->f_866.f_2.f_5[iParam0]->f_1;
		default:
			break;
	}
	return -15;
}

bool func_1035(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_743(iParam1) || !func_743(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1036(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1672();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0]->f_2 = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0]->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_1037(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1672();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0]->f_1 = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0]->f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_1038(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

int func_1039(int iParam0)
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

int func_1040(int iParam0)
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

void func_1041(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1676(iParam0, 0, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[0]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[0]), bParam2);
}

float func_1042(int iParam0)
{
	fVar0 = (to_float(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_1043(int iParam0)
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

char* func_1044(int iParam0)
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

void func_1045(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_518(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

bool func_1046(int iParam0)
{
	return iParam0 > -1;
}

bool func_1047(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1046(iParam0))
		{
			return false;
		}
	}
	func_1677(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

int func_1048(int iParam0, bool bParam1)
{
	if (!func_518(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1678(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

float func_1049(int iParam0)
{
	if (!func_1046(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_1050(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1046(iParam0))
		{
			return;
		}
	}
	func_1677(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_1051(int iParam0)
{
	iVar0 = func_521(iParam0);
	iVar1 = func_1048(iParam0, 0);
	func_1679(iParam0, iVar0);
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

bool func_1052(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_1053(int iParam0)
{
	iVar0 = func_526(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1680(iVar0);
}

int func_1054(int iParam0, int iParam1)
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
			func_1681(iVar2);
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

void func_1055()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_1056(int iParam0, int iParam1)
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

int func_1057(bool bParam0)
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

int func_1058(int iParam0)
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

void func_1059(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_1060(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_1061(int iParam0, int iParam1)
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
			func_1682((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1682(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_214(&(Global_1898164->f_1[0])))
	{
		func_226(&(Global_1898164->f_1[0]), 3);
	}
}

void func_1062(int iParam0, int iParam1, bool bParam2)
{
	if (!func_544(iParam0))
	{
		return;
	}
	func_1683(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_1063(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_1064(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 || iParam1);
}

void func_1065(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 - (*fParam0 && iParam1));
}

bool func_1066()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_1067(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1684(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

struct<4> func_1068(int iParam0, int iParam1)
{
	Var0 = { func_1457(iParam0, iParam1) };
	Var0.f_3 = func_1685(iParam0, iParam1);
	return Var0;
}

void func_1069(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1686();
	}
	else
	{
		return;
	}
	func_1687();
	Global_40.f_9.f_14 = func_307();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1688())
		{
			func_392(Global_1310720->f_1);
		}
		else if (func_1641() == func_393(Global_36, 1) && func_1689() != 2)
		{
			func_392(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_392(Global_36);
		}
		func_1690(Global_36, &vVar0, &uVar4);
		if (!func_1688())
		{
			if (func_1691(vVar0, Global_36) < func_1691(Global_40.f_9.f_7, Global_36))
			{
				func_392(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_393(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1690(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_252(Global_1935630, 8192);
	}
	func_1692();
}

bool func_1070(var uParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_277(uParam0->f_5423[iVar0]))
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

bool func_1071(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (((func_277(uParam0->f_5423[iVar0]) && is_entity_an_object(&(uParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(uParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(uParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1072(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1046(iParam0))
	{
		return;
	}
	func_1693(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_1073(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1074(int iParam0)
{
	func_1050(iParam0, 36, 1);
}

void func_1075(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1046(iParam0))
		{
			return;
		}
	}
	func_1677(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_1076(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_518(iParam0))
	{
		iVar1 = func_521(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1694(iParam0);
		}
	}
	if (func_1047(iParam0, 5, 1))
	{
		set_ped_config_flag(func_521(iParam0), 137, true);
	}
}

void func_1077(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1046(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1075(iParam0, 50, 1);
		func_1075(iParam0, 48, 1);
		func_1075(iParam0, 49, 1);
		func_1075(iParam0, 51, 1);
		func_1075(iParam0, 52, 1);
		func_1075(iParam0, 54, 1);
		func_1075(iParam0, 55, 1);
	}
	else
	{
		func_1050(iParam0, 50, 1);
		func_1050(iParam0, 48, 1);
		func_1050(iParam0, 49, 1);
		func_1050(iParam0, 51, 1);
		if (bParam3)
		{
			func_1050(iParam0, 54, 1);
		}
		else
		{
			func_1075(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_1050(iParam0, 52, 1);
			if (bParam3)
			{
				func_1050(iParam0, 55, 1);
			}
		}
		else
		{
			func_1075(iParam0, 52, 1);
			if (!bParam3)
			{
				func_1075(iParam0, 55, 1);
			}
		}
	}
}

void func_1078(int iParam0, bool bParam1)
{
	if (!func_1046(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_521(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_521(iParam0), 204, false);
	}
}

int func_1079(int iParam0)
{
	if (!func_518(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

bool func_1080(int iParam0)
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

void func_1081(int iParam0)
{
	iParam0 = func_289(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_239(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1695(iVar6);
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

void func_1082(int iParam0, int iParam1)
{
	iParam0 = func_289(iParam0);
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

bool func_1083(int iParam0, int iParam1)
{
	iParam0 = func_289(iParam0);
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

void func_1084(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1697(func_1696(255), 109029619));
	}
	else if (func_325())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1110();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1085(int iParam0)
{
	iParam0 = func_289(iParam0);
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

void func_1086(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1697(func_1696(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_325())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1110())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1087(int iParam0)
{
	iParam0 = func_289(iParam0);
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

float func_1088(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1089(int iParam0)
{
	iParam0 = func_289(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1537(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1085(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1085(iParam0) + 1;
	fVar6 = func_1698(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1699(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1090(int iParam0)
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

void func_1091(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1092()
{
	if (func_359())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1093(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1700((Global_40.f_4283.f_325 + iParam0));
}

void func_1094(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1092())
	{
		func_747(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_747(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1095(int iParam0)
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

char* func_1096(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1097(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1098(int iParam0)
{
	func_1105(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1099(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1100(1);
	}
}

void func_1100(bool bParam0)
{
	if (bParam0)
	{
		func_465(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1701(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1101(int iParam0)
{
	if (!func_214(iParam0))
	{
		return -15;
	}
	return func_1702(iParam0);
}

bool func_1102(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1103(int iParam0)
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

bool func_1104(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1105(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1703(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1106(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1107(int iParam0, int iParam1, bool bParam2)
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

int func_1108()
{
	iVar0 = func_597();
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

int func_1109(int iParam0)
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
	fVar1 = func_1395(absf(fVar1) < 1f, func_1395(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_1110()
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

int func_1111(int iParam0)
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

int func_1112()
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

void func_1113(int iParam0, bool bParam1, int iParam2)
{
	func_1704((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1705(iParam0);
}

void func_1114(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1706(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1115(bool bParam0)
{
	bVar3 = false;
	if (func_1707(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1708(iVar5, &iVar2, &iVar0))
			{
				if (!func_617(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1709(iVar2);
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
							if (func_636(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1108() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1108() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1710();
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

char* func_1116(int iParam0)
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

bool func_1117(int iParam0)
{
	return func_636(iParam0) == -427144552;
}

bool func_1118(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_638(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1123(iParam0, &uVar0, 1, 0, 0);
	}
	return func_368(iParam0, 1, 0);
}

void func_1119(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_636(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_643(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_644(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_621(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_697(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1120(int iParam0, int iParam1)
{
	if (func_637(iParam0, 58855631))
	{
		func_1265(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1121(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_617(iParam0, 0))
	{
		return 0;
	}
	if (!func_645(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_1057(bParam3), iParam0);
}

int func_1122(int iParam0, bool bParam1)
{
	if (func_649(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_1057(bParam1), iParam0, 0);
}

bool func_1123(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1711(&iParam0);
	if (!func_617(iParam0, 0))
	{
		return false;
	}
	if (!func_645(0))
	{
		bParam3 = true;
	}
	if (func_1117(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1249(0) };
			Var4.f_9 = -1591664384;
			if (!func_1146(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1147(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1250(iParam0, 1))
			{
				if (!func_1146(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1147(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1712(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1121(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1669(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_1057(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1124(int iParam0, int iParam1)
{
	if (!func_617(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_636(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_637(iParam0, 1399091007))
	{
		func_1186(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1125(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1713(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1714(&Var0, func_1249(0));
	}
	if (!func_1715(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1194(iVar14);
	return uVar15;
}

int func_1126()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1127(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1128(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1716(iParam0);
	fVar1 = func_1717(iParam0);
	if ((Global_1347477->f_117 || !func_639(31)) || !func_1718(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1719(iVar0) >= 7)
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
	func_1720(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_747(_create_var_string(6, func_1721(iParam0), fVar1), "itemtype_textures", func_1722(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1129(int iParam0)
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

int func_1130(int iParam0, int iParam1)
{
	if (!func_1279(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1131(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_632() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1723(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1724(), 12);
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
			else if (func_1169() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1725(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1169(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1726(), 13);
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
			else if (func_1170() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1727(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1170(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1130(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1132(int iParam0, int iParam1, int iParam2)
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

bool func_1133(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1134(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1135(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1728(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_368(iVar2, 1, 0) || func_1730(func_1729(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1139(func_1728(iVar0))), func_1139(func_1728(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1169() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1731(iVar0)), func_1731(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1725() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1731(iVar0)), func_1731(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1731(iVar0)), func_1731(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1179(iParam3, func_1732(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1175(iVar2) - iParam7) >= func_1130(iParam3, func_1733(iVar0));
				}
				else
				{
					bVar1 = func_1175(iVar2) >= func_1130(iParam3, func_1733(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1175(iVar2) + iParam7) >= func_1130(iParam3, func_1733(iVar0));
			}
			else
			{
				bVar1 = func_1175(iVar2) >= func_1130(iParam3, func_1733(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1734(iVar2)), func_1734(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1735(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1736(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1736(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1170() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1737(iVar0)), func_1737(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1727() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1737(iVar0)), func_1737(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1737(iVar0)), func_1737(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1179(iParam3, func_1732(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1175(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1738(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1738(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1739(iVar2)), func_1739(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1136(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1726() >= 13)
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

bool func_1137(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_214(func_227(0)) && ((func_1740(0) == 1 || func_1740(0) == 8) || func_1740(0) == 6))
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

var func_1138(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1139(int iParam0)
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

bool func_1140(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1141(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1142(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1143(int iParam0)
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
			func_1741(1);
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
			func_1742(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1742(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1742(3);
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
			func_1743(1);
			break;
		case 34:
			func_1744(1);
			break;
		case 35:
			func_1745(1);
			break;
		case 36:
			break;
		case 37:
			func_1746(0);
			break;
		case 38:
			func_1747(0);
			break;
		case 39:
			func_1748(0);
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
			if ((!&Global_1879534 && func_418()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_754("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_346(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_418()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_754("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_346(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_418()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_754("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_346(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_418()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_754("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_346(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1207(99217379) || func_1749(99217379) == 2110595215)
				{
					if (func_1110())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_368(iVar0, 1, 0))
					{
						func_690(iVar0, 1, 752097756);
					}
					func_669(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_368(1013902307, 1, 0))
				{
					func_690(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_368(1013902307, 1, 0))
				{
					func_690(1013902307, 1, 752097756);
				}
				if (!func_368(142640135, 1, 0))
				{
					func_690(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_368(786809402, 1, 0))
				{
					func_690(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_368(786809402, 1, 0))
				{
					func_690(786809402, 1, 752097756);
				}
				if (!func_368(-518019409, 1, 0))
				{
					func_690(-518019409, 1, 752097756);
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
			func_1750();
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

bool func_1144(int iParam0)
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

int func_1145(int iParam0, int iParam1)
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

bool func_1146(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1669(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1147(int iParam0, var uParam1, int iParam2)
{
	if (func_1751(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1148(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_617(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_1057(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1149(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1752(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1253(*uParam1, &Var0, bParam6, 0))
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
	if (!func_645(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_1057(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1150(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1753(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1151(int iParam0)
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
	iVar2 = func_307();
	func_355(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1152(int iParam0)
{
	if (func_503(iParam0))
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

bool func_1153(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1154(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_639(50))
			{
				if (!func_639(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_639(51))
			{
				if (!func_639(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1155(int iParam0, int iParam1, var uParam2)
{
	if (!func_617(iParam1, 0))
	{
		return false;
	}
	if (func_636(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_641(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_715(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_637(iParam1, 866047851))
	{
		iVar5 = func_716(iVar4, 1);
		if (func_1754(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_641(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_637(iParam1, -1638171711))
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
			if (func_1755(1868067663, &uVar0))
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
				iVar10 = func_1756(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1756(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_641(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_637(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1757(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1156()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1157()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1158()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_368(func_1758(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1159(int iParam0)
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

bool func_1160(int iParam0, int iParam1)
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
	if (func_368(iVar0, 1, 0) && func_368(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1161(int iParam0)
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

bool func_1162(int iParam0, int iParam1)
{
	iVar0 = func_1759(iParam0);
	if (iVar0 != -15)
	{
		func_355(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_744(iVar0, 1);
	}
	return false;
}

void func_1163(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1164(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1165(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1166(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1167(int iParam0)
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
	iVar1 = func_1175(iVar9);
	iVar2 = func_1175(iVar10);
	iVar3 = func_1175(iVar11);
	iVar5 = func_1176(iVar9);
	iVar6 = func_1176(iVar10);
	iVar7 = func_1176(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1175(iVar12);
		iVar8 = func_1176(iVar12);
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

void func_1168(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1169()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1760(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1170()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1171(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1738(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1738(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1738(iVar0))
		{
			*sParam2++;
		}
		if (func_1738(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1738(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1738(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1738(iVar0))
		{
			*sParam2++;
		}
		if (func_1738(iVar1))
		{
			*sParam2++;
		}
		if (func_1738(iVar0) && func_1738(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1738(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1738(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1738(iVar0))
		{
			*sParam2++;
		}
		if (func_1738(iVar1))
		{
			*sParam2++;
		}
		if (func_1738(iVar2))
		{
			*sParam2++;
		}
		if ((func_1738(iVar0) && func_1738(iVar1)) && func_1738(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1738(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1738(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1738(iVar0))
		{
			*sParam2++;
		}
		if (func_1738(iVar1))
		{
			*sParam2++;
		}
		if (func_1738(iVar2))
		{
			*sParam2++;
		}
		if (func_1738(iVar3))
		{
			*sParam2++;
		}
		if (((func_1738(iVar0) && func_1738(iVar1)) && func_1738(iVar2)) && func_1738(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1172(int iParam0)
{
	if (!func_1761(iParam0))
	{
		func_1763(func_1762(iParam0));
	}
}

int func_1173()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1761(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1174(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1175(iVar9);
	iVar2 = func_1175(iVar10);
	iVar3 = func_1175(iVar11);
	iVar5 = func_1176(iVar9);
	iVar6 = func_1176(iVar10);
	iVar7 = func_1176(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1175(iVar12);
		iVar8 = func_1176(iVar12);
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

int func_1175(int iParam0)
{
	if (func_368(iParam0, 1, 0))
	{
		iVar0 = func_621(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1176(int iParam0)
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

int func_1177(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1178(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1179(int iParam0, int iParam1)
{
	if (!func_1279(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1180(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1179(iParam1, 5) || iParam0 == func_1179(iParam1, 6)) || iParam0 == func_1179(iParam1, 7)) || iParam0 == func_1179(iParam1, 8)) || iParam0 == func_1179(iParam1, 9))
	{
		func_1171(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_633(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_635(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1181(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1179(iParam1, 5) || iParam0 == func_1179(iParam1, 6)) || iParam0 == func_1179(iParam1, 7)) || iParam0 == func_1179(iParam1, 8)) || iParam0 == func_1179(iParam1, 9))
	{
		if (func_1171(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_633(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_635(51, 0, 0, iVar0, func_1130(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_633(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_635(51, 0, 0, iVar0, func_1130(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1182()
{
	if (func_215((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1183(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1184(int iParam0)
{
	if (!func_1764(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1185(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1186(int iParam0, int iParam1, var uParam2)
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

bool func_1187(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1765();
	if (iParam2 == 39)
	{
		Var0 = { func_728(iParam0, 1, 0) };
		iParam2 = func_716(func_729(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_637(iParam0, 866047851) && func_1754(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_848(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1766(func_1254(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1767(iParam2);
	func_1768(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1235(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1235(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1241(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1769(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1770(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1770(&(Global_1946804->f_1378), 1, 0);
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
				func_1461(func_1254(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1188(bool bParam0, bool bParam1, bool bParam2)
{
	func_1771(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

int func_1189(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_716(iParam0, 1);
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

void func_1190(int iParam0)
{
	if (func_1772(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1773(Var0);
}

void func_1191(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1773(Var0);
}

bool func_1192(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_1057(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1193(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1194(int iParam0)
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

float func_1195()
{
	if (func_1774())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_512(2);
	}
	if (Global_1347477->f_119)
	{
		return func_512(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1775();
	fVar2 = func_1776();
	fVar3 = func_1777();
	fVar4 = func_1778();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1779()));
	fVar7 = (func_512(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1780(3, round((to_float(iVar8) * fVar10)), 0);
	func_1781(3, fVar9, fVar9 > 100f);
	return func_516(fVar7, -100f, 100f);
}

float func_1196()
{
	if (func_1774())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_512(1);
	}
	if (Global_1347477->f_119)
	{
		return func_512(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1775();
	fVar2 = func_1776();
	fVar3 = func_1777();
	fVar4 = func_1778();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1779()));
	fVar7 = (func_512(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1780(2, round((to_float(iVar8) * fVar10)), 0);
	func_1781(2, fVar9, fVar9 > 100f);
	return func_516(fVar7, -100f, 100f);
}

float func_1197()
{
	if (func_1774())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_512(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1782())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1783())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_512(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1775();
	fVar2 = func_1776();
	fVar3 = func_1777();
	fVar4 = func_1778();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1779()));
	fVar7 = (func_512(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1780(1, round((to_float(iVar8) * fVar10)), 0);
	func_1781(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_512(0);
	}
	return func_516(fVar7, -100f, 100f);
}

bool func_1198(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1199(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1200(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_617(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1123(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_645(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_1057(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1201(int iParam0, bool bParam1)
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
				return func_1784();
			}
			break;
	}
	return 0;
}

int func_1202(int iParam0)
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

bool func_1203(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1204(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1203(iParam0))
	{
		return;
	}
	if (func_1785(iParam0))
	{
		return;
	}
	if (!func_1786(iParam0))
	{
		func_1787(iParam0, 1, 0);
	}
	iVar0 = func_1462(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1788(iParam0, 512))
		{
			func_727(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_238() && !bParam1) && !func_221(0, 0, 1))
	{
		func_756(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1789(iParam0, 6);
	if (bParam2)
	{
		if (!func_221(0, 0, 1))
		{
			func_388(1, 4);
		}
	}
}

bool func_1205(int iParam0, bool bParam1)
{
	return func_1201(iParam0, 0) < func_1790(iParam0, bParam1);
}

bool func_1206(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_641(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1207(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_716(iParam0, 1)] != &Global_1946804->f_57[func_716(iParam0, 1)];
}

void func_1208(int iParam0, int iParam1)
{
	if (func_637(iParam1, 130796156))
	{
		func_1791(iParam1, 0);
	}
	else if (func_637(iParam1, 930141731))
	{
		func_1791(iParam1, 1);
		func_1792(iParam0);
	}
}

void func_1209(var uParam0, int iParam1)
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

int func_1210(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1793(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1794(uParam2, iParam0, Var1);
	return 1;
}

int func_1211(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1212(int iParam0)
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

int func_1213(int iParam0)
{
	if (!func_1795(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1214()
{
	return !&Global_1911774;
}

void func_1215(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1216(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1217(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1218(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1219(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1796(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1220(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1796(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1221(bool bParam0)
{
	if (bParam0)
	{
		func_339(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_499();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1797(2032023096);
		func_342(-615217896);
		func_712(655868243, 1, 1, -142743235, 1);
		func_1798(146323340, func_1028());
		Var0 = { func_1545() };
		if (func_1799(&Var0) == -1387633835)
		{
			func_1800(&Var0);
			func_1801(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1802(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1538(iVar6) == 2010625508)
			{
				func_1803(iVar6, iVar7);
				func_1804(iVar6, iVar8);
				func_1805(iVar6, iVar9);
				func_1806(iVar6, 0);
				if (func_1807(iVar6))
				{
					func_1808(iVar6);
				}
				iVar10 = func_1809(iVar8);
				func_1810(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

void func_1222()
{
	func_353(34411519);
	func_353(834124286);
	func_353(-570967010);
}

void func_1223(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_339(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_339(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_712(-1080874779, 3, 1, -142743235, 1);
		func_712(-223790555, 3, 1, -142743235, 1);
		func_712(1566032147, 3, 1, -142743235, 1);
		func_712(891311852, 5, 1, -142743235, 1);
		func_712(-1353737667, 5, 1, -142743235, 1);
		func_712(-330313895, 5, 1, -142743235, 1);
		func_712(-2051332199, 5, 1, -142743235, 1);
		func_712(1237770824, 5, 1, -142743235, 1);
		func_712(-1795542128, 3, 1, -142743235, 1);
		func_712(-1757588258, 3, 1, -142743235, 1);
		func_712(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1802(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1538(iVar0) == 153881023)
			{
				func_1803(iVar0, iVar1);
				func_1804(iVar0, iVar2);
				func_1805(iVar0, iVar3);
				func_1806(iVar0, 0);
				if (func_1807(iVar0))
				{
					func_1808(iVar0);
				}
				iVar4 = func_1809(iVar2);
				func_1810(iVar0, iVar4);
			}
			iVar0++;
		}
		func_499();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1224(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1811(iParam0);
	if (bParam3)
	{
		func_755(iParam0, sParam1, iParam2);
	}
}

bool func_1225(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1226(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1227()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1192("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1193(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1147(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1194(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1194(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1228(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1812(Param1, iParam5, &Var5, 0))
	{
		func_1149(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1200(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1671(Var19, 1);
}

bool func_1229(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1713(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1714(&Var0, func_1249(0));
	}
	if (!func_1715(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1193(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1149(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1194(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1230(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_617(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_728(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1813(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1148(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1149(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1231(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_637(iParam0, 606799272))
		{
			func_1814(iParam0, iParam1);
		}
		if (func_637(iParam0, -1112814642) && func_637(iParam0, -1697809989))
		{
			func_665(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1232(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1815(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_641(iParam0) != -999503751)
		{
			func_1816(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_641(iParam0) != -999503751)
	{
		func_1816(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1817(iParam0, 1);
	return 1;
}

void func_1233()
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

void func_1234(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1818(0);
	}
	if (bParam0)
	{
		func_1246(8);
		func_1246(512);
	}
	else
	{
		func_1246(8);
		func_1246(16);
	}
}

void func_1235(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1236(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_718();
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

int func_1237(int iParam0)
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

void func_1238(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1819(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1254(iVar0, 1);
			if (func_1491(iVar0, iParam1))
			{
				vVar4 = { func_720(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1490(iVar7, 4))
				{
					func_1461(iVar7, 4, 6);
				}
			}
			else
			{
				func_1493(iVar7, 4, 6);
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

bool func_1239(int iParam0)
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
	func_1820(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1240(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1241(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_641(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1491(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1768(iVar1, iVar3);
		}
	}
	if (func_1207(-1586649372) && func_1491(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1768(iVar1, iVar3);
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
						func_1768(iVar1, iVar3);
					}
				}
			}
			func_1821(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1821(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1768(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1821(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1768(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1768(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1821(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1821(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1768(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1821(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1768(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1768(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_641(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1768(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1757(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_641(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1768(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_637(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1768(iVar1, iVar3);
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
						func_1768(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1757(&(Global_1946804->f_1497.f_1[iVar1])) || func_637(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1768(iVar1, iVar3);
					}
				}
			}
			switch (func_641(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_641(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1768(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_641(&(uParam0->f_1[iVar1])) || func_637(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1768(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1242(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1243(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1198(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1198(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1244(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1198(iParam0, 65536) && !func_1198(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1198(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1198(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1245()
{
	return Global_1905944->f_5694;
}

void func_1246(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1247(struct<4> Param0)
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
			if (func_1822(Param0))
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
			func_1823(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1246(8);
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
			if (func_1822(Param0))
			{
				return;
			}
			func_1823(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1246(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1191(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1248(bool bParam0)
{
	return func_1148(1328661203, func_1824(), -1591664384, bParam0);
}

struct<4> func_1249(bool bParam0)
{
	iVar0 = func_1057(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1148(923904168, func_1248(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1148(923904168, func_1248(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1148(923904168, func_1248(bParam0), -740156546, 0);
}

bool func_1250(int iParam0, bool bParam1)
{
	if (func_641(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_639(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1251(bool bParam0)
{
	iVar0 = func_1057(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1148(271701509, func_1248(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1148(271701509, func_1248(bParam0), 12999093, 0);
}

bool func_1252(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_641(iParam0);
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

bool func_1253(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_1057(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1254(int iParam0, int iParam1)
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

int func_1255(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1256(int iParam0, int iParam1)
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

void func_1257(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1258(int iParam0, int iParam1)
{
	iVar0 = func_736(*iParam0);
	iVar1 = func_735(*iParam0);
	if (iParam1 < 1 || iParam1 > func_741(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1259(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1260(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1261(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1262(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1263(int iParam0)
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

bool func_1264(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_1117(iParam0))
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

int func_1265(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_617(iParam0, 0))
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

int func_1266(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1711(&iParam0);
	if (!func_617(iParam0, 0))
	{
		return 0;
	}
	if (!func_645(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1121(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1669(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_1057(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1267(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_637(iParam0, -5284486))
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
		if (func_1825(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_698(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_701(iVar62, iVar61);
					if (func_617(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1267(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1267(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1825(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1268(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1826(1);
}

void func_1269(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1827(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_345(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1827(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_345(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1270()
{
	return Global_40.f_4283.f_325;
}

bool func_1271(int iParam0)
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

bool func_1272(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1273(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1274(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1275(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1276(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_418();
	bVar1 = false;
	if (bVar0 && !func_490(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_490(37)) && !func_490(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_490(43)) && !func_490(44))
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
		if (func_1539(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1539(1) == 1)
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

int func_1277()
{
	return Global_40.f_1095.f_3054;
}

bool func_1278(int iParam0)
{
	iParam0 = func_289(iParam0);
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

bool func_1279(int iParam0, var uParam1)
{
	if (!func_1828(iParam0))
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

int func_1280()
{
	if (func_418())
	{
		if (!func_490(3))
		{
			return func_1829(43);
		}
		if (func_490(38) && !func_490(43))
		{
			return func_1830(8);
		}
	}
	return 0;
}

bool func_1281(int iParam0)
{
	if (!func_270(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1831(iParam0));
}

Vector3 func_1282(int iParam0, int iParam1)
{
	func_1279(15, &Var0);
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

int func_1283(int iParam0, int iParam1)
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
	iVar0 = func_1832(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1279(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1833(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1284(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1834(iParam0);
	if (func_537(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1285(int iParam0)
{
	if (!func_1279(15, &Var0))
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

bool func_1286(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_1835(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1836(5))
	{
		if (func_1837(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1532(vParam0);
	if (bParam6)
	{
		iVar1 = func_393(vParam0, 1);
		if (func_116(iVar1) || func_1838(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1839(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1840())
	{
		if (func_1841(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1842(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_393(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1843(iParam3, iParam4))
	{
		return false;
	}
	if (func_1844(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1845(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_418())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1846(vParam0, bParam10) || func_1847(vParam0, bParam10))
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

int func_1287(vector3 vParam0)
{
	iVar0 = func_1848(vParam0, 0f, 0f, 0, 2);
	return func_1848(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1288(int iParam0)
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

char* func_1289(int iParam0)
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
	return func_1501(iVar0);
}

char* func_1290(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1849(iVar0);
}

char* func_1291(int iParam0)
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

void func_1292(var uParam0, int iParam1)
{
	iVar0 = func_132(iParam1);
	if (!func_1601(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*uParam0->f_1[iVar0])[iVar1] = 62441;
		clear_bit(&(uParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1293(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1601(iVar0))
	{
		uParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

int func_1294(var uParam0)
{
	switch (&iLocal_1482[0])
	{
		case 0:
			iLocal_1482[0] = 1;
		case 1:
			iLocal_1482[0] = 2;
		case 2:
			iLocal_1482[0] = 3;
		case 3:
			if (is_entity_dead(&(Local_133[6])))
			{
			}
			if (is_entity_dead(&(Local_133[7])))
			{
			}
			func_442(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			func_442(uParam0, &(Local_133[6]), "Dutch", 0, 0, 0, 0);
			func_442(uParam0, &(Local_133[7]), "MicahBell", 0, 0, 0, 0);
			iLocal_1482[0] = 6;
			break;
		case 6:
			return 1;
	}
	return 0;
}

void func_1295(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_925(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1296(var uParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_1070(uParam0, iParam1, &iVar0))
	{
		return;
	}
	func_1850(uParam0->f_5423[iVar0], iParam2);
}

float func_1297(int iParam0, int iParam1)
{
	return func_1685(iParam0, iParam1);
}

void func_1298(int iParam0)
{
	iParam0 = func_289(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_482(iParam0, 32);
	func_290();
}

int func_1299(int iParam0)
{
	iVar0 = -1;
	if (!is_entity_dead(iParam0))
	{
		waypoint_recording_get_closest_waypoint(func_496(91), get_entity_coords(iParam0, true, false), &iVar0);
	}
	return iVar0;
}

char* func_1300(int iParam0)
{
	Var0 = { func_1851(iParam0) };
	return Var0;
}

bool func_1301(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0) && _0x1ecc76792f661cf5(sParam0))
	{
		return true;
	}
	return false;
}

void func_1302(char* sParam0, bool bParam1, bool bParam2)
{
	stop_scripted_conversation(sParam0, bParam1, bParam2);
}

void func_1303(var uParam0)
{
	if (!func_1852(uParam0, &(Local_133[1]), 1125515264, 0, 1, 1, -1925605092, 1084227584, 1103626240))
	{
		if (!func_1853(uParam0, func_470(7), func_496(91), 1117126656, 1125515264, 0, 1, 1, 1117126656, 422991367))
		{
			if (!func_165(44))
			{
				func_1320(uParam0, &(Local_133[7]), -2045797884, 422991367, 1, 1);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1854(uParam0, func_1300(23), -1082130432, 0, 0, -1, -1, 0);
				func_1360(23);
				func_456(44);
			}
		}
		else
		{
			func_176(44);
		}
	}
	else
	{
		func_176(44);
	}
}

void func_1304(var uParam0)
{
	if (!Local_133[16]->f_2 == 1 && !Local_133[16]->f_2 == 0)
	{
		vVar1 = { func_1336(10, 6) };
		_0xcf213a5fc3abfc08(vVar1.x, vVar1.y, 50f);
		vVar1 = { func_1336(10, 7) };
		_0xcf213a5fc3abfc08(vVar1.x, vVar1.y, 50f);
	}
	iVar0 = 16;
	while (iVar0 <= 19)
	{
		if (Local_133[iVar0]->f_2 == 12)
		{
		}
		else
		{
			if ((is_entity_dead(&(Local_133[iVar0])) && !Local_133[iVar0]->f_2 == 0) && !Local_133[iVar0]->f_2 == 33)
			{
				func_943(iVar0, 12);
			}
			if ((Local_133[16]->f_2 == 15 || Local_133[16]->f_2 == 26) || Local_133[16]->f_2 == 27)
			{
				if (is_ped_shooting(Global_35))
				{
					func_1325(16, 19, 28, 1);
				}
			}
			switch (Local_133[iVar0]->f_2)
			{
				case 1:
					if (!is_entity_dead(&(Local_133[func_1308(iVar0)])) && _0xa0bc8faed8cfeb3c(&(Local_133[func_1308(iVar0)])))
					{
						set_entity_load_collision_flag(&(Local_133[iVar0]), 1);
						set_entity_lod_dist(&(Local_133[iVar0]), 1000);
						set_entity_invincible(&(Local_133[iVar0]), true);
						_set_ped_on_mount(&(Local_133[iVar0]), &(Local_133[func_1308(iVar0)]), -1, true);
						_0x9587913b9e772d29(&(Local_133[func_1308(iVar0)]), 0);
						set_ped_relationship_group_hash(&(Local_133[iVar0]), -1538724068);
						set_ped_relationship_group_hash(&(Local_133[func_1308(iVar0)]), -1538724068);
						func_943(iVar0, 15);
					}
					break;
				case 26:
					if (iVar0 == 17 || iVar0 == 19)
					{
						fVar5 = -2f;
					}
					else if (iVar0 == 18)
					{
						fVar5 = 2f;
					}
					task_follow_waypoint_recording_at_offset(&(Local_133[iVar0]), func_496(92), fVar5, 0, 4194336, -1, 0);
					func_943(iVar0, 27);
					break;
				case 27:
					break;
				case 28:
					if (iVar0 == 16)
					{
						fVar4 = 3f;
						vVar1 = { func_1336(10, 6) };
					}
					else if (iVar0 == 17)
					{
						fVar4 = (3f + 0.5f);
						vVar1 = { func_1336(10, 6) };
					}
					else if (iVar0 == 18)
					{
						fVar4 = (3f + 0.9f);
						vVar1 = { func_1336(10, 6) };
					}
					else if (iVar0 == 19)
					{
						fVar4 = (3f + 1.1f);
						vVar1 = { func_1336(10, 7) };
					}
					func_1355();
					task_follow_nav_mesh_to_coord(0, vVar1, 2.5f, 20000, 0.25f, 0, 40000f);
					_task_flee_from_ped(0, Global_35, vVar1, 100f, -1, 0, 1077936128, 0);
					func_1356(&(Local_133[iVar0]), fVar4);
					func_27(vLocal_792[9], 0);
					func_943(iVar0, 29);
					break;
				case 29:
					if (func_1418(60, iVar0))
					{
						if ((func_1342(&(Local_133[iVar0])) && get_sequence_progress(&(Local_133[iVar0])) == 1) || func_934(vLocal_792[9]) >= 10f)
						{
							func_943(iVar0, 32);
						}
					}
					break;
				case 32:
					func_474(uParam0, iVar0, 0, 0);
					func_474(uParam0, func_1308(iVar0), 0, 0);
					if (iVar0 == 16)
					{
						func_466(11);
						func_466(13);
					}
					else if (Local_133[17]->f_2 == 0 && Local_133[18]->f_2 == 0)
					{
						func_466(10);
					}
					break;
			}
		}
		iVar0++;
	}
}

float func_1305(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_1306(int iParam0, int iParam1, float fParam2, var uParam3)
{
	switch (uParam3->f_3)
	{
		case 0:
			*uParam3 = func_307();
			iVar4 = func_307();
			func_1259(&iVar4, iParam0);
			func_1260(&iVar4, iParam1);
			func_1261(&iVar4, 0);
			if (func_1035(*uParam3, iVar4, 1))
			{
				func_355(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_1855(*uParam3, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam3->f_11 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			uParam3->f_3++;
			break;
		case 1:
			if (fParam2 >= 0.99f || fParam2 == -1f)
			{
				iVar4 = *uParam3;
				func_355(&iVar4, uParam3->f_11, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_738(iVar4), func_739(iVar4), func_740(iVar4));
				return 1;
			}
			iVar3 = round((IntToFloat(uParam3->f_11) * fParam2));
			iVar4 = *uParam3;
			func_355(&iVar4, iVar3, 0, 0, 0, 0, 0, 0);
			iVar8 = func_307();
			if (func_1035(iVar4, iVar8, 1))
			{
				set_clock_time(func_738(iVar4), func_739(iVar4), func_740(iVar4));
			}
			else
			{
				set_clock_time(func_738(iVar8), func_739(iVar8), func_740(iVar8));
			}
			if (func_737(iVar4) != get_clock_day_of_month())
			{
				set_clock_date(func_737(iVar4), func_736(iVar4), func_735(iVar4));
			}
			break;
	}
	return 0;
}

void func_1307(var uParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		func_454(uParam0, 2);
	}
	else
	{
		func_454(uParam0, 1);
	}
	StringCopy(&cVar0, sParam1, 64);
	func_1613(uParam0, cVar0);
	func_160(uParam0, 2);
	if (((!_0x139efb0a71dd9011() && !func_29()) && !func_6(uParam0, 80)) && bParam3)
	{
		func_30(uParam0);
	}
	func_27(&(uParam0->f_13118), 0);
}

int func_1308(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 6:
			return 2;
		case 7:
			return 3;
		case 16:
			return 20;
		case 17:
			return 21;
		case 18:
			return 22;
		case 19:
			return 23;
		case 24:
			return 28;
		case 25:
			return 29;
		case 26:
			return 30;
		case 27:
			return 31;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 41:
			return 51;
		case 42:
			return 52;
		case 43:
			return 53;
	}
	return -1;
}

void func_1309(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar1012)
	{
		if (func_883(Local_1015[iVar0]->f_12, func_33(uParam0)))
		{
			switch (Local_1015[iVar0]->f_1)
			{
				case 1:
					if (func_1856(uParam0))
					{
						func_592(&(Local_1015[iVar0]->f_2));
						Local_1015[iVar0]->f_1 = 3;
					}
					else
					{
						if (Local_1015[iVar0] & 2 != 0)
						{
							if (!does_entity_exist(Local_1015[iVar0]->f_7))
							{
								return;
							}
						}
						if (Local_1015[iVar0] & 4 != 0)
						{
							if (!func_26(&(Local_1015[iVar0]->f_2)))
							{
								func_27(&(Local_1015[iVar0]->f_2), 0);
							}
							if (func_934(&(Local_1015[iVar0]->f_2)) >= Local_1015[iVar0]->f_5)
							{
								func_592(&(Local_1015[iVar0]->f_2));
								Local_1015[iVar0]->f_1 = 4;
							}
						}
						if (Local_1015[iVar0] & 1 != 0)
						{
							if (func_1305(Global_35, Local_1015[iVar0]->f_8, 1) >= Local_1015[iVar0]->f_6)
							{
								Local_1015[iVar0]->f_1 = 4;
							}
						}
						if (Local_1015[iVar0] & 2 != 0)
						{
							if (func_924(Global_35, Local_1015[iVar0]->f_7, 1, 1) >= Local_1015[iVar0]->f_6)
							{
								Local_1015[iVar0]->f_1 = 4;
							}
						}
						Jump @391; //curOff = 335
						func_592(&(Local_1015[iVar0]->f_2));
						_0xdd1232b332cbb9e7(3, 1, 0);
						if (iVar1119 == 0)
						{
							func_1360(Local_1015[iVar0]->f_11);
							Local_1015[iVar0]->f_1 = 5;
						}
					}
					iVar0++;
					default:
						break;
			}
		}
	}
}

void func_1310(var uParam0)
{
	if ((iVar1119 == 0 && iVar1117 == 0) && iVar1118 == 0)
	{
		return;
	}
	if (iVar1119 != 0)
	{
		Var0 = { func_1851(iVar1119) };
		if (func_1857(uParam0, Var0, Var0.f_1, 0, 0))
		{
			iLocal_1122 = 0;
		}
	}
	if (iVar1117 != 0)
	{
		Var2 = { func_1851(iVar1117) };
		if (func_1857(uParam0, Var2, Var2.f_1, 0, 0))
		{
			iLocal_1120 = 0;
		}
	}
	if (iVar1118 != 0)
	{
		Var4 = { func_1851(iVar1118) };
		if (func_1857(uParam0, Var4, Var4.f_1, 0, 0))
		{
			iLocal_1121 = 0;
		}
	}
}

void func_1311()
{
	func_1858(&(Local_133[7]), vLocal_792[7]);
	func_1858(&(Local_133[6]), vLocal_792[8]);
	iVar0 = 6;
	while (iVar0 <= 7)
	{
		if (is_entity_dead(&(Local_133[iVar0])))
		{
			return;
		}
		switch (Local_133[iVar0]->f_2)
		{
			case 1:
				func_943(iVar0, 18);
				break;
			case 18:
				if (!is_entity_dead(&(Local_133[func_1308(iVar0)])))
				{
					task_mount_animal(&(Local_133[iVar0]), &(Local_133[func_1308(iVar0)]), 20000, -1, 1f, 1, 0, 0);
					func_943(iVar0, 19);
				}
				break;
			case 19:
				if (func_1316(&(Local_133[iVar0]), &(Local_133[func_1308(iVar0)]), 0))
				{
					set_ped_config_flag(&(Local_133[iVar0]), 167, true);
					if (func_1316(Global_35, &(Local_133[1]), 0))
					{
						func_943(iVar0, 26);
					}
					else
					{
						func_943(iVar0, 20);
					}
				}
				break;
			case 20:
				task_look_at_entity(&(Local_133[iVar0]), Global_35, -1, 48, 41, 1);
				func_943(iVar0, 21);
				break;
			case 21:
				if (func_1316(Global_35, &(Local_133[1]), 0))
				{
					task_clear_look_at(&(Local_133[iVar0]));
					func_943(iVar0, 26);
				}
				break;
			case 26:
				if (iVar0 == 6)
				{
					if ((func_1316(Global_35, &(Local_133[1]), 1) && func_1316(&(Local_133[6]), &(Local_133[2]), 1)) && func_1316(&(Local_133[7]), &(Local_133[3]), 1))
					{
						clear_ped_tasks(&(Local_133[iVar0]), 1, 0);
						func_1859();
						func_943(6, 27);
						func_943(7, 27);
					}
				}
				break;
			case 27:
				if (iVar0 == 7)
				{
					if (func_1301(func_1300(25)))
					{
						func_1860(&(Local_133[7]), func_1300(25), 1, 1);
						func_1860(&(Local_133[6]), func_1300(25), 1, 1);
					}
					if (func_1301(func_1300(27)))
					{
						func_1860(&(Local_133[7]), func_1300(27), 1, 1);
						func_1860(&(Local_133[6]), func_1300(27), 1, 1);
					}
					if (func_1301(func_1300(27)))
					{
						fVar1 = 1.501f;
					}
					else
					{
						fVar1 = 1.75f;
					}
					if (func_1301(func_1300(27)))
					{
						set_ped_max_move_blend_ratio(&(Local_133[3]), 1.75f);
					}
					func_1861(&(Local_133[7]), fVar1, 0, 1045220557, 0, 1077936128, 25f, 35f, 1033476506, 1061158912, 1, 1, 1045220557, 0);
					if (is_waypoint_playback_going_on_for_ped(&(Local_133[iVar0]), 0))
					{
						if (!func_165(43))
						{
							if (iVar1199 >= 69 && iVar1199 < 71)
							{
								_0xd5bd1b5318a81994(uVar1177, 1);
								func_456(43);
							}
							if (iVar1199 >= 89 && iVar1199 < 91)
							{
								_0xd5bd1b5318a81994(uVar1177, 1);
								func_456(43);
							}
							if (iVar1199 >= 100 && iVar1199 < 102)
							{
								_0xd5bd1b5318a81994(uVar1177, 1);
								func_456(43);
							}
						}
						else
						{
							if (iVar1199 >= 78 && iVar1199 < 80)
							{
								_0xd5bd1b5318a81994(uVar1177, 0);
								func_176(43);
							}
							if (iVar1199 >= 97 && iVar1199 < 98)
							{
								_0xd5bd1b5318a81994(uVar1177, 0);
								func_176(43);
							}
							if (iVar1199 >= 110 && iVar1199 < 112)
							{
								_0xd5bd1b5318a81994(uVar1177, 0);
								func_176(43);
							}
						}
					}
				}
				if (is_entity_in_volume(&(Local_133[iVar0]), Local_89.f_18, true, 0))
				{
					func_943(7, 13);
					func_943(6, 13);
				}
				break;
			case 13:
				if (iVar0 == 7)
				{
					func_1313(31);
					func_456(45);
					func_27(vLocal_792[10], 0);
					_0x0c6b89876262a99d(player_id(), &(Local_133[iVar0]));
				}
				func_943(iVar0, 14);
				break;
			case 14:
				if (!func_934(vLocal_792[10]) >= 5f)
				{
				}
				else
				{
					remove_ped_from_group(&(Local_133[iVar0]));
					func_1355();
					if (iVar0 == 6)
					{
						task_follow_nav_mesh_to_coord(0, func_845(0, 5), 2.5f, 20000, 0.25f, 0, 40000f);
					}
					else if (iVar0 == 7)
					{
						task_follow_nav_mesh_to_coord(0, func_845(0, 5), 2.5f, 20000, 0.25f, 0, 40000f);
					}
					task_look_at_entity(0, Global_35, -1, 48, 41, 0);
					task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
					func_1356(&(Local_133[iVar0]), func_1395(iVar0 == 7, 0f, 1.3f));
					force_ped_motion_state(&(Local_133[func_1308(iVar0)]), -530524, false, 0, false);
					_0x2208438012482a1a(&(Local_133[iVar0]), true, false);
					func_943(iVar0, 15);
				}
				iVar0++;
				default:
					break;
		}
	}
}

int func_1312(var uParam0)
{
	return uParam0->f_598;
}

void func_1313(int iParam0)
{
	iLocal_1120 = iParam0;
}

void func_1314(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	Local_1015[iParam0]->f_7 = iParam1;
}

void func_1315(var uParam0, int iParam1)
{
	Var0 = { func_1851(Local_1015[iParam1]->f_11) };
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_1854(uParam0, Var0, -1082130432, 0, 0, -1, -1, 0);
	func_592(&(Local_1015[iParam1]->f_2));
	iVar2 = 0;
	while (iVar2 < iVar1011)
	{
		if (!Local_1015[iVar2]->f_1 == 0)
		{
			func_1318(iVar2);
		}
		iVar2++;
	}
	Local_1015[iParam1]->f_1 = 1;
}

bool func_1316(int iParam0, int iParam1, bool bParam2)
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

int func_1317(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_1862(iParam3, 1);
	bVar1 = func_1862(iParam3, 2);
	bVar2 = !func_1862(iParam3, 4);
	bVar3 = func_1862(iParam3, 8);
	bVar4 = !func_1862(iParam3, 16);
	bVar5 = func_1862(iParam3, 32);
	bVar6 = func_1862(iParam3, 64);
	return func_1863(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_1318(int iParam0)
{
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_592(&(Local_1015[iParam0]->f_2));
	Local_1015[iParam0]->f_1 = 0;
}

void func_1319(int iParam0)
{
	func_1072(iParam0, 8, 1);
}

int func_1320(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (is_entity_dead(iParam1))
	{
		return iVar0;
	}
	bVar1 = func_1864(uParam0, iParam1);
	bVar2 = (is_entity_a_ped(iParam1) && func_1865(get_ped_index_from_entity_index(iParam1)));
	if (bVar2)
	{
		iVar3 = func_1866(get_ped_index_from_entity_index(iParam1));
	}
	if (bVar1)
	{
		func_1867(uParam0, iParam1, 128);
		if (bParam4)
		{
			func_1867(uParam0, iParam1, 1024);
		}
	}
	if (is_entity_a_ped(iParam1) && bParam4)
	{
		iVar0 = get_blip_from_entity(iParam1);
		if (bVar2)
		{
			func_1319(iVar3);
			if (does_blip_exist(iVar0))
			{
				_blip_set_modifier(iVar0, -546708623);
				if (bParam5)
				{
					_blip_set_modifier(iVar0, 231194138);
				}
			}
		}
		else if (func_1864(uParam0, iParam1) && does_blip_exist(iVar0))
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
		if (func_1070(uParam0, iParam1, &iVar4))
		{
			func_1600(uParam0->f_5423[iVar4]);
		}
	}
	if (bVar2)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1868(iVar3);
	}
	return iVar0;
}

bool func_1321(int iParam0)
{
	return _0xfe5c6177064bd390(iParam0);
}

bool func_1322(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

int func_1323(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 0;
		case 7:
			return 1;
		case 8:
			return 2;
		case 9:
			return 3;
		case 10:
			return 4;
		case 11:
			return 5;
		case 12:
			return 6;
		case 13:
			return 7;
		case 14:
			return 8;
		case 15:
			return 9;
		case 16:
			return 11;
		case 5:
			return 18;
		case 17:
		case 18:
		case 19:
		case 24:
		case 25:
		case 26:
		case 27:
		case 32:
		case 33:
		case 34:
		case 35:
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
			return 10;
		case 1:
		case 2:
		case 3:
		case 28:
		case 29:
		case 30:
		case 31:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
			return 12;
		case 20:
			return 13;
		case 22:
			return 14;
		case 21:
			return 15;
		case 23:
			return 16;
		case 54:
		case 55:
			return 17;
	}
	return -1;
}

bool func_1324(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_165(0) && !func_997(iParam3, 16))
	{
		return false;
	}
	iVar0 = func_1424(iParam1, iParam2);
	iVar1 = func_1869(iParam1, iParam2);
	if (iParam3 & 16 != 0)
	{
		iVar2 = func_1424(iParam1, iParam2);
	}
	else
	{
		iVar2 = 1;
	}
	iVar4 = 0;
	while (iVar4 < iVar2)
	{
		iVar0 = func_1424(iParam1, iParam2);
		iVar1 = func_1869(iParam1, iParam2);
		iVar5 = (iParam1 + iVar1);
		iVar6 = iVar5;
		if (iVar1 == iVar0)
		{
			if (iParam3 & 4 != 0)
			{
				iVar7 = iParam1;
				while (iVar7 <= iParam2)
				{
					if (!is_entity_dead(&(Local_133[iVar7])))
					{
						if (!_0xa0bc8faed8cfeb3c(&(Local_133[iVar7])))
						{
							return false;
						}
						else if (func_1870(iVar7, &iVar3) && !func_1871(iVar7, 1))
						{
							_set_ped_body_component(&(Local_133[iVar7]), iVar3);
							_update_ped_variation(&(Local_133[iVar7]), false, true, true, true, false);
							func_1872(iVar7, 1);
						}
					}
					iVar7++;
				}
			}
			return true;
		}
		func_462(func_1323(iVar6));
		if (!func_463(func_1323(iVar6)))
		{
			return false;
		}
		Var8 = { func_1449(iVar6, 0, func_33(uParam0)) };
		Local_133[iVar6] = func_1875(func_464(func_1323(iVar6)), Var8, Var8.f_3, 1, 1, func_1873(iVar6), 1, func_1874(iVar6), !func_1870(iVar6, &iVar3), iParam3 & 8 == 0, 0, 0, 0);
		func_456(0);
		if (iParam3 & 2048 != 0)
		{
			func_1876(iVar6, 0);
		}
		if (iParam3 & 1 != 0)
		{
			set_blocking_of_non_temporary_events(&(Local_133[iVar6]), true);
		}
		if (iParam3 & 2 != 0)
		{
			set_entity_invincible(&(Local_133[iVar6]), true);
		}
		if (iParam3 & 32 != 0)
		{
			func_1877(&(Local_133[iVar6]), 0);
		}
		if (iParam3 & 64 != 0)
		{
			func_1878(&(Local_133[iVar6]), 0);
		}
		if (iParam3 & 128 != 0)
		{
			_0x18ff3110cf47115d(&(Local_133[iVar6]), 2, 0);
			_0x18ff3110cf47115d(&(Local_133[iVar6]), 3, 0);
			_0x18ff3110cf47115d(&(Local_133[iVar6]), 7, 0);
		}
		if (iParam3 & 256 != 0)
		{
			_0x9587913b9e772d29(&(Local_133[iVar6]), 0);
		}
		if (iParam3 & 512 != 0)
		{
			set_ped_config_flag(&(Local_133[iVar6]), 301, true);
		}
		if (iParam3 & 1024 != 0)
		{
			func_1879(iVar6, 0);
		}
		func_943(iVar6, 1);
		iVar4++;
	}
	return false;
}

void func_1325(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (bParam3 && (Local_133[iVar0]->f_2 == 0 || Local_133[iVar0]->f_2 == 12))
		{
		}
		else
		{
			func_943(iVar0, iParam2);
		}
		iVar0++;
	}
}

bool func_1326(char* sParam0)
{
	return func_1301(sParam0);
}

void func_1327(char* sParam0, bool bParam1, bool bParam2)
{
	func_1302(sParam0, bParam1, bParam2);
}

bool func_1328(char* sParam0)
{
	return _0xd89504d9d7d5057d(sParam0);
}

Vector3 func_1329(int iParam0)
{
	StringCopy(&cVar0, func_1300(iParam0), 24);
	return cVar0;
}

bool func_1330(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_1880(cParam1, cParam0);
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

void func_1331()
{
	func_1882(Global_35, func_1881(func_845(0, 5), func_845(0, 6), 0.5f), 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 1, 0);
}

void func_1332(var uParam0, int iParam1)
{
	uParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1333(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_132(iParam2);
	if (!func_1601(iVar0))
	{
		return;
	}
	iVar1 = func_1602(iParam3);
	if (!func_1603(iVar1))
	{
		return;
	}
	(*uParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(uParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1334(var uParam0, int iParam1, char[16] cParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1335(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

Vector3 func_1336(int iParam0, int iParam1)
{
	return func_1883(iParam0, iParam1);
}

void func_1337(bool bParam0)
{
	if (bParam0)
	{
		_start_gps_custom_route_from_waypoint_recording_route(func_496(93), 0, -1, 76603059, false, true);
	}
	else
	{
		clear_gps_custom_route();
	}
	set_gps_custom_route_render(bParam0, 3, 30);
}

struct<8> func_1338(int iParam0)
{
	StringCopy(&cVar0, func_1300(iParam0), 64);
	return cVar0;
}

void func_1339(var uParam0, char[4] cParam1, bool bParam2, int iParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	func_1307(uParam0, &cParam1, "", bParam9, bParam10);
}

void func_1340()
{
	if (iVar1220 == -1)
	{
		return;
	}
	func_27(vLocal_792[12], 0);
	if (func_26(vLocal_792[12]))
	{
		if (func_934(vLocal_792[12]) < 2f)
		{
			return;
		}
	}
	switch (iVar1220)
	{
		case 0:
			iVar0 = _create_volume_box(461.9827f, 161.2422f, 113.2551f, 0f, 0f, -15.5f, 57.75f, 80f, 20f);
			break;
		case 1:
			iVar0 = _create_volume_box(431.9578f, 89.60015f, 113.9916f, 0f, 0f, -15.27942f, 57.75f, 80f, 20f);
			break;
		case 2:
			iVar0 = _create_volume_box(417.2783f, 29.42196f, 113.9916f, 0f, 0f, 37.97058f, 70f, 80f, 20f);
			break;
		case 3:
			iVar0 = _create_volume_box(472.9663f, -10.90625f, 117.9072f, 0f, 0f, 57.47058f, 70f, 80f, 20f);
			break;
		case 4:
			iVar0 = _create_volume_box(459.8409f, 54.1201f, 133.9201f, 0f, 0f, 57.47058f, 20f, 20f, 20f);
			break;
	}
	if (_does_volume_exist(iVar0))
	{
		_0x2fcd528a397e5c88(iVar0, 1064968);
		iLocal_1222 = iVar1220 + 1;
		if (iVar1220 == 5)
		{
			iLocal_1222 = -1;
		}
		_delete_volume(iVar0);
		func_244(vLocal_792[12]);
	}
}

void func_1341(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_1884();
			break;
		case 5:
			disable_control_action(0, -2131587435, false);
			disable_control_action(0, 1938056823, false);
			disable_control_action(0, -241441915, false);
			disable_control_action(0, 184129944, false);
			disable_control_action(0, -1384133541, false);
			disable_control_action(0, -914910537, false);
			disable_control_action(0, -399233038, false);
			disable_control_action(0, -824104112, false);
			disable_control_action(0, 1663574939, false);
			break;
		case 6:
			disable_control_action(0, 693204415, false);
			disable_control_action(0, -473983589, false);
			disable_control_action(0, 1855403240, false);
			break;
		case 2:
			disable_control_action(0, 1606906090, false);
			disable_control_action(0, 1663574939, false);
			disable_control_action(0, 1395223413, false);
			disable_control_action(0, -1053137564, false);
			disable_control_action(0, 129547951, false);
			disable_control_action(0, -1105246567, false);
			disable_control_action(0, -124244224, false);
			disable_control_action(0, 130948705, false);
			disable_control_action(0, 42190210, false);
			disable_control_action(0, -485697785, false);
			disable_control_action(0, 1312975214, false);
			disable_control_action(0, 2109526038, false);
			disable_control_action(0, -1377110900, false);
			disable_control_action(0, 814057702, false);
			disable_control_action(0, 1287709438, false);
			disable_control_action(0, 1934388793, false);
			disable_control_action(0, -209515122, false);
			disable_control_action(0, 1301263553, false);
			disable_control_action(0, -39308912, false);
			disable_control_action(0, -620139643, false);
			disable_control_action(0, -719620017, false);
			disable_control_action(0, -1404316431, false);
			disable_control_action(0, 1618006066, false);
			disable_control_action(0, -432665970, false);
			disable_control_action(0, -1819459471, false);
			disable_control_action(0, -1304887797, false);
			disable_control_action(0, -128997553, false);
			disable_control_action(0, 992265328, false);
			disable_control_action(2, 992265328, false);
			break;
		case 4:
			disable_control_action(0, 130948705, false);
			func_1341(3);
			break;
		case 3:
			disable_control_action(0, -813019446, false);
			disable_control_action(0, -2131587435, false);
			disable_control_action(0, -640622144, false);
			disable_control_action(0, -562475458, false);
			disable_control_action(0, -485697785, false);
			disable_control_action(0, 1312975214, false);
			disable_control_action(0, 2109526038, false);
			disable_control_action(0, -1377110900, false);
			disable_control_action(0, 1287709438, false);
			disable_control_action(0, 1934388793, false);
			disable_control_action(0, -209515122, false);
			disable_control_action(0, 1301263553, false);
			disable_control_action(0, -39308912, false);
			disable_control_action(0, -620139643, false);
			disable_control_action(0, -719620017, false);
			disable_control_action(0, -1404316431, false);
			disable_control_action(0, 1618006066, false);
			disable_control_action(0, -432665970, false);
			disable_control_action(0, -1819459471, false);
			disable_control_action(0, -1304887797, false);
			disable_control_action(0, -128997553, false);
			disable_control_action(0, 992265328, false);
			break;
		case 7:
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 130948705, false);
			disable_control_action(0, 42190210, false);
			disable_control_action(0, -640622144, false);
			disable_control_action(0, -128997553, false);
			disable_control_action(0, -562475458, false);
			disable_control_action(0, -1292666904, false);
			disable_control_action(0, -1242632265, false);
			disable_control_action(0, 578288361, false);
			disable_control_action(0, -1105246567, false);
			disable_control_action(0, 1743595310, false);
			disable_control_action(0, -1404316431, false);
			disable_control_action(0, -2131587435, false);
			disable_control_action(0, -1046962283, false);
			disable_control_action(0, 1618006066, false);
			disable_control_action(0, 184129944, false);
			disable_control_action(0, 1938056823, false);
			disable_control_action(0, -241441915, false);
			disable_control_action(0, -1384133541, false);
			disable_control_action(0, -914910537, false);
			disable_control_action(0, -399233038, false);
			disable_control_action(0, -432665970, false);
			disable_control_action(0, -349518703, false);
			disable_control_action(0, -1591726981, false);
			disable_control_action(0, -1098542161, false);
			break;
		case 8:
			disable_control_action(0, 1287709438, false);
			break;
		case 1:
			disable_control_action(0, -874806616, false);
			disable_control_action(0, 130948705, false);
			disable_control_action(0, -128997553, false);
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, -824104112, false);
			disable_control_action(0, 1301263553, false);
			disable_control_action(0, -39308912, false);
			disable_control_action(0, 308778731, false);
			disable_control_action(0, 1002303471, false);
			disable_control_action(0, -1450761377, false);
			disable_control_action(0, -771458680, false);
			break;
		case 9:
			disable_control_action(0, -1404316431, false);
			disable_control_action(0, -620139643, false);
			disable_control_action(0, -562475458, false);
			disable_control_action(0, -1292666904, false);
			disable_control_action(0, -1242632265, false);
			disable_control_action(0, 578288361, false);
			disable_control_action(0, 42190210, false);
			disable_control_action(0, -2131587435, false);
			disable_control_action(0, 2011525043, false);
			disable_control_action(0, 527275493, false);
			disable_control_action(0, 1938056823, false);
			disable_control_action(0, -241441915, false);
			disable_control_action(0, 184129944, false);
			disable_control_action(0, -399233038, false);
			disable_control_action(0, -349518703, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, -1046962283, false);
			disable_control_action(0, 1618006066, false);
			disable_control_action(0, -824104112, false);
			disable_control_action(0, 1663574939, false);
			disable_control_action(0, 2056295390, false);
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1080745902, false);
			disable_control_action(0, -1496944061, false);
			disable_control_action(0, 824284304, false);
			disable_control_action(0, -657519467, false);
			disable_control_action(0, -2128655846, false);
			disable_control_action(0, -1514287812, false);
			disable_control_action(0, 1743595310, false);
			disable_control_action(0, -1582581421, false);
			disable_control_action(0, 866072368, false);
			disable_control_action(0, 752170046, false);
			disable_control_action(0, -1384133541, false);
			disable_control_action(0, -914910537, false);
			disable_control_action(0, 2110430325, false);
			disable_control_action(0, -1220818313, false);
			disable_control_action(0, 1354373751, false);
			disable_control_action(0, 1829968318, false);
			break;
		case 10:
			disable_control_action(0, -874806616, false);
			break;
		case 11:
			disable_control_action(0, 255439828, false);
			break;
		case 12:
			_0xa63fcad3a6fec6d2(player_id(), 0);
			break;
		case 13:
			disable_control_action(0, 1287709438, false);
			disable_control_action(0, -2131587435, false);
			disable_control_action(0, -432665970, false);
			disable_control_action(0, -1404316431, false);
			break;
	}
}

bool func_1342(int iParam0)
{
	if (get_script_task_status(iParam0, 242628503, true) == 0 || get_script_task_status(iParam0, 242628503, true) == 1)
	{
		return true;
	}
	return false;
}

void func_1343(int iParam0, var uParam1, vector3 vParam2)
{
	*uParam1 = iParam0;
	uParam1->f_1 = 1;
	uParam1->f_2 = { vParam2 };
}

void func_1344(var uParam0)
{
	if (is_entity_dead(&(Local_133[*uParam0])))
	{
		return;
	}
	switch (uParam0->f_1)
	{
		case 1:
			uParam0->f_5 = func_1885(&(Local_133[*uParam0]), uParam0->f_2, 1);
			uParam0->f_6 = func_1885(&(Local_133[*uParam0]), uParam0->f_2, 2);
			func_1428(&(Local_133[*uParam0]), uParam0->f_5, 0.8f, -0.5f, -1, 26);
			uParam0->f_1 = 2;
			break;
		case 2:
			if (func_1429(&(Local_133[*uParam0]), uParam0->f_5))
			{
				if (func_1430(&(Local_133[*uParam0]), uParam0->f_5) >= 0.884f)
				{
					func_1428(&(Local_133[*uParam0]), uParam0->f_6, 1f, -0.8f, -1, 24);
					uParam0->f_1 = 0;
				}
			}
			break;
		case 0:
			break;
	}
}

void func_1345(var uParam0)
{
	if (func_1418(30, 2))
	{
		if (!func_165(54))
		{
			if (func_1886(Global_35, _0xf70f00013a62f866(Local_89.f_6), 1) >= 72900f)
			{
				func_1315(uParam0, 3);
				func_456(54);
			}
		}
		else if (func_1886(Global_35, _0xf70f00013a62f866(Local_89.f_6), 1) <= 67600f)
		{
			_0xdd1232b332cbb9e7(1, 1, 0);
			func_1315(uParam0, 2);
			func_176(54);
		}
		else if (func_1886(Global_35, _0xf70f00013a62f866(Local_89.f_6), 1) >= 136900f)
		{
			func_1307(uParam0, func_1300(28), "", 1, 0);
		}
	}
}

void func_1346(var uParam0)
{
	iVar0 = 6;
	while (iVar0 <= 7)
	{
		if (is_entity_dead(&(Local_133[iVar0])))
		{
			return;
		}
		switch (Local_133[iVar0]->f_2)
		{
			case 1:
				func_462(91);
				if (func_941(uParam0) == 0)
				{
					if (iVar0 == 7)
					{
						_0x0c6b89876262a99d(player_id(), &(Local_133[iVar0]));
					}
				}
				func_943(iVar0, 16);
				break;
			case 16:
				if (iVar0 == 6)
				{
					if (func_1305(Global_35, func_845(0, 5), 1) < func_1305(&(Local_133[6]), func_845(0, 5), 1))
					{
						bVar14 = true;
					}
					if (func_924(Global_35, &(Local_133[6]), 1, 1) <= 30f || bVar14)
					{
						func_1355();
						task_follow_nav_mesh_to_coord(0, func_845(0, 5), 2.001f, 20000, 0.25f, 0, 40000f);
						task_turn_ped_to_face_entity(0, Global_35, 0, -1082130432, -1082130432, -1082130432);
						task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
						func_1356(&(Local_133[6]), 0);
						_0x2208438012482a1a(&(Local_133[6]), true, false);
						if (func_941(uParam0) == 0)
						{
							force_ped_motion_state(&(Local_133[func_1308(6)]), -530524, false, 0, false);
						}
						func_1355();
						task_follow_nav_mesh_to_coord(0, func_845(0, 6), 2.001f, 20000, 0.25f, 0, 40000f);
						task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
						func_1356(&(Local_133[7]), 0.2f);
						_0x2208438012482a1a(&(Local_133[7]), true, false);
						if (func_941(uParam0) == 0)
						{
							force_ped_motion_state(&(Local_133[func_1308(7)]), -530524, false, 0, false);
						}
						if (!func_165(45))
						{
							func_1313(31);
						}
						func_456(45);
						func_943(6, 17);
						func_943(7, 17);
					}
				}
				break;
			case 17:
				if (iVar0 == 6)
				{
					func_27(vLocal_792[18], 0);
					if (!func_165(47))
					{
						if (_0x1ecc76792f661cf5(func_1300(31)))
						{
							func_456(47);
						}
					}
					if (!func_165(47))
					{
						if (func_934(vLocal_792[18]) < 10f)
						{
						}
						else
						{
							func_1331();
							if (!func_26(vLocal_792[13]))
							{
								if (_0x1ecc76792f661cf5(func_1300(31)))
								{
									if (get_current_scripted_conversation_line(func_1300(31)) >= 2)
									{
										func_27(vLocal_792[13], 0);
									}
								}
							}
							else if (func_934(vLocal_792[13]) >= 6f)
							{
								bVar13 = true;
							}
							if (!bVar13)
							{
								if (func_924(Global_35, &(Local_133[6]), 1, 1) >= 30f)
								{
									bVar13 = true;
								}
							}
							if (!bVar13)
							{
								if (func_934(vLocal_792[18]) >= 30f)
								{
								}
							}
							if (bVar13)
							{
								func_1315(uParam0, 2);
								func_943(6, 28);
								func_943(7, 28);
							}
							Jump @2117; //curOff = 776
							if (!func_463(91))
							{
							}
							else
							{
								if (iVar0 == 6)
								{
									func_1407(&(Local_89.f_26), 665633627);
								}
								else if (iVar0 == 7)
								{
									func_1407(&(Local_89.f_27), 665633627);
								}
								set_blocking_of_non_temporary_events(&(Local_133[iVar0]), true);
								Var5 = { func_1887(iVar0 == 6, func_1578(1, 1), func_1578(1, 4)) };
								Var9 = { func_1887(iVar0 == 6, func_1578(1, 2), func_1578(1, 5)) };
								set_ped_config_flag(&(Local_133[iVar0]), 167, false);
								func_1355();
								if (iVar0 == 7)
								{
									task_turn_ped_to_face_coord(0, Var5, 0);
								}
								task_follow_waypoint_recording(0, func_496(91), 0, 27656, -1, 0, 0, -1);
								task_follow_nav_mesh_to_coord(0, Var5, 1.75f, -1, 0.25f, 0, Var5.f_3);
								task_dismount_animal(0, 0, 0, 0, 0, 0);
								func_1356(&(Local_133[iVar0]), func_1395(iVar0 == 7, 0f, 2.5f));
								func_943(iVar0, 29);
								Jump @2117; //curOff = 1011
								if (is_waypoint_playback_going_on_for_ped(&(Local_133[iVar0]), func_496(91)))
								{
									if (get_ped_waypoint_progress(&(Local_133[iVar0])) >= 188)
									{
										if (iVar0 == 6)
										{
											Var1 = { func_1578(1, 0) };
										}
										else if (iVar0 == 7)
										{
											Var1 = { func_1578(1, 3) };
										}
										task_follow_nav_mesh_to_coord(&(Local_133[iVar0]), Var1, 1.75f, 40000, 0.25f, 0, Var1.f_3);
										func_943(iVar0, 38);
									}
								}
								Jump @2117; //curOff = 1124
								if (func_1352(&(Local_133[iVar0]), 713668775))
								{
								}
								else
								{
									if (func_165(56))
									{
										Var5 = { func_1887(iVar0 == 6, func_1578(1, 1), func_1578(1, 4)) };
										func_1355();
										task_follow_waypoint_recording(0, func_496(91), 40000, 27658, -1, 0, 0, -1);
										task_follow_nav_mesh_to_coord(0, Var5, 1.75f, -1, 0.25f, 0, Var5.f_3);
										task_dismount_animal(0, 0, 0, 0, 0, 0);
										func_1356(&(Local_133[iVar0]), func_1395(iVar0 == 6, 0f, 3f));
										func_943(iVar0, 39);
									}
									else if (func_1418(30, 0))
									{
										if (func_924(&(Local_133[iVar0]), Global_35, 1, 1) <= 20f)
										{
											if (func_165(45) && iVar1117 == 0)
											{
												func_943(iVar0, 36);
											}
										}
									}
									Jump @2117; //curOff = 1334
									if (!func_1342(&(Local_133[iVar0])) && !is_ped_on_mount(&(Local_133[iVar0])))
									{
										func_943(iVar0, 14);
									}
									Jump @2117; //curOff = 1375
									Var9 = { func_1887(iVar0 == 6, func_1578(1, 2), func_1578(1, 5)) };
									set_blocking_of_non_temporary_events(&(Local_133[iVar0]), false);
									task_clear_look_at(&(Local_133[iVar0]));
									func_1355();
									task_follow_nav_mesh_to_coord(0, Var9, 1f, 20000, 0.25f, 512, Var9.f_3);
									task_achieve_heading(0, Var9.f_3, 0);
									if (iVar0 == 6)
									{
										task_stand_still(0, -1);
									}
									else if (iVar0 == 7)
									{
										task_stand_still(0, -1);
									}
									func_1356(&(Local_133[iVar0]), 0);
									func_943(iVar0, 15);
									Jump @2117; //curOff = 1508
									if (iVar0 == 6)
									{
										if (!func_26(vLocal_792[17]))
										{
											if (!is_ped_on_mount(&(Local_133[6])) && !is_ped_on_mount(&(Local_133[7])))
											{
												func_27(vLocal_792[17], 0);
											}
										}
									}
									Jump @2117; //curOff = 1572
									if (!_0x77525bbf433f2cd6(&(Local_133[iVar0])) && !_0x40c9155af8bc13f3(&(Local_133[iVar0])))
									{
										set_blocking_of_non_temporary_events(&(Local_133[iVar0]), true);
										func_1355();
										task_follow_nav_mesh_to_coord(0, func_1888(iVar0 == 6, func_1336(1, 2), func_1336(1, 5)), 1f, 20000, 0.25f, 512, func_1395(iVar0 == 6, func_1580(1, 2), func_1580(1, 5)));
										func_1356(&(Local_133[iVar0]), 0);
										func_943(iVar0, 35);
									}
									Jump @2117; //curOff = 1699
									if (!func_1342(&(Local_133[iVar0])))
									{
										func_943(iVar0, 14);
									}
									Jump @2117; //curOff = 1724
									if (iVar0 == 6)
									{
										func_1313(32);
										func_1355();
										task_turn_ped_to_face_coord(0, _0xf70f00013a62f866(Local_89.f_6), 0);
										task_turn_ped_to_face_coord(0, _0xf70f00013a62f866(Local_89.f_6), 2000);
										task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
										func_1356(&(Local_133[iVar0]), 0);
									}
									else if (iVar0 == 7)
									{
										func_1355();
										task_look_at_entity(0, Global_35, -1, 48, 41, 0);
										task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
										func_1356(&(Local_133[iVar0]), 0);
									}
									func_943(iVar0, 37);
									Jump @2117; //curOff = 1877
									if (iVar0 == 6)
									{
										if ((func_1342(&(Local_133[6])) && get_sequence_progress(&(Local_133[6])) == 1) && !func_165(55))
										{
											func_1343(6, &Local_1169, _0xf70f00013a62f866(Local_89.f_6));
											func_456(55);
										}
									}
									if (!Local_1169.f_1 == 0)
									{
										func_1344(&Local_1169);
									}
									if (func_1418(30, 0))
									{
										if (func_924(&(Local_133[iVar0]), Global_35, 1, 1) > 20f)
										{
											func_176(55);
											if (iVar0 == 6)
											{
												Var1 = { func_1578(1, 0) };
											}
											else if (iVar0 == 7)
											{
												Var1 = { func_1578(1, 3) };
											}
											func_1355();
											task_follow_nav_mesh_to_coord(0, Var1, 1.75f, 20000, 0.25f, 0, Var1.f_3);
											task_achieve_heading(0, Var1.f_3, -1);
											func_1356(&(Local_133[iVar0]), func_1395(iVar0 == 6, 0f, 0.6f));
											func_943(iVar0, 38);
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
				default:
					break;
		}
	}
}

void func_1347(int iParam0)
{
	Global_36606 = { func_1824() };
	Global_36610 = { func_1824() };
	Global_36605 = iParam0;
}

void func_1348(var uParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	bVar0 = (is_entity_a_ped(iParam1) && func_1865(get_ped_index_from_entity_index(iParam1)));
	if (bVar0)
	{
		iVar1 = func_1866(get_ped_index_from_entity_index(iParam1));
	}
	if (is_entity_a_ped(iParam1))
	{
		iVar2 = get_ped_index_from_entity_index(iParam1);
		if (bVar0)
		{
			func_567(iVar1);
			if (does_blip_exist(get_blip_from_entity(iVar2)))
			{
				_set_blip_flash_style(get_blip_from_entity(iVar2), -546708623);
				_set_blip_flash_style(get_blip_from_entity(iVar2), 231194138);
			}
		}
		else if (func_1864(uParam0, iParam1) && does_blip_exist(get_blip_from_entity(iParam1)))
		{
			_set_blip_flash_style(get_blip_from_entity(iParam1), -546708623);
			_set_blip_flash_style(get_blip_from_entity(iParam1), 231194138);
		}
		else
		{
			func_1889(iParam1);
		}
	}
	if (func_1864(uParam0, iParam1))
	{
		func_1296(uParam0, iParam1, 1024);
		if (bParam2)
		{
			func_1867(uParam0, iParam1, 128);
		}
		else
		{
			func_1296(uParam0, iParam1, 128);
		}
		if (func_1070(uParam0, iParam1, &iVar3))
		{
			func_1600(uParam0->f_5423[iVar3]);
		}
	}
	if (bVar0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1868(iVar1);
	}
}

void func_1349()
{
	iLocal_775[0] = func_1890(-1282792512, _0xf70f00013a62f866(Local_89.f_16), 7.5f, 1);
	_blip_set_modifier(&(iLocal_775[0]), -401963276);
	set_blip_name_from_text_file(&(iLocal_775[0]), func_1300(13));
}

void func_1350(int iParam0)
{
	if (does_entity_exist(&(Local_941[iParam0])))
	{
		return;
	}
	Var0 = { func_994(iParam0) };
	iVar7 = func_464(Var0.f_6);
	if (has_model_loaded(iVar7))
	{
		if (Var0 <= 1f && Var0 >= -1f)
		{
			vVar8 = { 100f, 100f, -100f };
		}
		else
		{
			vVar8 = { Var0 };
		}
		Local_941[iParam0] = create_object(iVar7, vVar8, true, true, false, false, true);
		set_entity_rotation(&(Local_941[iParam0]), Var0.f_3, 2, true);
	}
}

int func_1351(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14)
{
	func_1882(iParam0, vParam1, 0, iParam5, bParam6, bParam7, bParam8, bParam12, bParam13, bParam14, 0);
	iVar1 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar2 = get_vehicle_ped_is_in(iParam0, false);
	}
	bVar4 = func_1305(iParam0, vParam1, 1);
	if (!func_26(fParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (does_entity_exist(iVar1) || does_entity_exist(iVar2))
			{
				func_27(fParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		func_592(fParam4);
	}
	if (func_26(fParam4))
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
		if (func_934(fParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar1) && !func_1891(iParam0, 501393341))
			{
				if (is_ped_on_mount(iParam0))
				{
					task_dismount_animal(iParam0, 0, 0, 0, 0, 0);
					return 1;
				}
			}
			if (!is_entity_dead(iVar2) && !func_1891(iParam0, -828834893))
			{
				if (is_ped_in_any_vehicle(iParam0, false))
				{
					task_leave_any_vehicle(iParam0, 0, 0);
					return 1;
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
	return 0;
}

bool func_1352(int iParam0, int iParam1)
{
	return (get_script_task_status(iParam0, iParam1, true) == 0 || get_script_task_status(iParam0, iParam1, true) == 1);
}

bool func_1353(int iParam0)
{
	iParam0 = func_289(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1083(iParam0, 32))
	{
		return true;
	}
	return false;
}

float func_1354(int iParam0)
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

void func_1355()
{
	if (func_165(12))
	{
		close_sequence_task(iVar778);
		func_176(12);
	}
	clear_sequence_task(&uLocal_780);
	open_sequence_task(&uLocal_780);
	func_456(12);
}

void func_1356(int iParam0, float fParam1)
{
	if (!func_165(12))
	{
		return;
	}
	close_sequence_task(iVar776);
	if (func_187(iParam0, 0))
	{
		if (fParam1 == 0f)
		{
			task_perform_sequence(iParam0, iVar776);
		}
		else
		{
			_task_perform_sequence_2(iParam0, iVar776, fParam1, fParam1);
		}
	}
	func_176(12);
}

void func_1357()
{
	if (!is_entity_dead(Global_35))
	{
		if (!func_368(-160924582, 1, 0))
		{
			func_339(&(iLocal_781[0]), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
		iVar0 = _get_first_entity_ped_is_carrying(Global_35);
		if (does_entity_exist(iVar0))
		{
			_0xed00d72f81cf7278(iVar0, 0, 0);
		}
		set_current_ped_weapon(Global_35, &(iLocal_781[0]), false, 0, false, true);
		set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
		task_swap_weapon(Global_35, 1, 1, 0, 0);
		func_1355();
		task_set_crouch_movement(0, true, 0, false);
		task_follow_nav_mesh_to_coord(0, func_1336(6, 8), 1f, 20000, 0.25f, 0, 40000f);
		task_turn_ped_to_face_coord(0, func_1336(1, 2), 0);
		func_1356(Global_35, 0);
		func_456(56);
		func_456(13);
	}
}

void func_1358()
{
	if (!does_entity_exist(&(Local_133[1])) || is_entity_dead(&(Local_133[1])))
	{
		return;
	}
	func_1892(&(Local_133[1]), 4, 0f, 0f, 0f, 1);
	func_1892(&(Local_133[1]), 5, 0f, 0f, 0f, 1);
	func_1892(&(Local_133[1]), 6, 0f, 0f, 0f, 1);
}

void func_1359(int iParam0)
{
	iLocal_1121 = iParam0;
}

void func_1360(int iParam0)
{
	iLocal_1122 = iParam0;
}

int func_1361(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (is_pc_version())
			{
				return 130948705;
			}
			else
			{
				return -128997553;
			}
			break;
		case 1:
			return -39308912;
		case 2:
			return 1301263553;
		case 3:
			return -1450761377;
		case 4:
			return -1067115200;
		case 5:
			return 1301263553;
		case 6:
			return 1885667965;
		case 7:
			return -1260100172;
		case 8:
			return -1300031296;
		case 12:
			return 1301263553;
		case 13:
			return 1885667965;
		case 14:
			return -1260100172;
		case 15:
			return -1300031296;
		case 9:
			return 1301263553;
		case 10:
			return -39308912;
		case 11:
			return -1450761377;
		case 16:
			return -1300031296;
		case 17:
			return -173983219;
		case 18:
			return -1300031296;
		case 19:
			return -1292666904;
		case 24:
			return 130948705;
		case 20:
			return 1367437629;
		case 21:
			return 992265328;
		case 22:
			return -473983589;
		case 23:
			return -719620017;
		case 25:
			return -473983589;
		case 26:
			return 613911080;
	}
	return 1367437629;
}

Vector3 func_1362(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		case 1:
			return 0f, -10f, -0.02f;
		case 2:
			return 0.119f, 0.087f, -0.021f;
		case 3:
			return 0.128f, 0.056f, -0.03f;
		case 4:
			return 0.128f, 0.068f, -0.02f;
		case 5:
			return -859.7f, -742.66f, 56.73f;
		case 6:
			return -1210.31f, -713.123f, 71.958f;
		case 7:
			return 50f, -22f, 198f;
		case 8:
			return -866.018f, -732.451f, 59.0688f;
		case 9:
			return 20.6139f, -79.9293f, -177.039f;
		case 10:
			return -866.083f, -732.689f, 58.8119f;
		case 11:
			return -88.8339f, -112.772f, 31.9047f;
	}
	return 0f, 0f, 0f;
}

void func_1363(var uParam0, char* sParam1)
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
	func_1366(uParam0, sParam1);
	func_1486(uParam0, 2097152, 1);
	func_790(uParam0, 33554432);
	_set_anim_scene_playback_list_bool(uParam0->f_804, sParam1, true);
}

bool func_1364(var uParam0)
{
	switch (&iLocal_1482[1])
	{
		case 0:
			iLocal_1482[1] = 1;
		case 1:
			iLocal_1482[1] = 2;
		case 2:
			iLocal_1482[1] = 3;
		case 3:
			func_409(&(uParam0->f_7375));
			func_151(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			func_151(uParam0, &(Local_133[6]), "Dutch", 0, 0, 0, 0);
			func_151(uParam0, &(Local_133[7]), "MicahBell", 0, 0, 0, 0);
			func_151(uParam0, &(Local_133[16]), "ColmODriscoll", 0, 0, 0, 0);
			func_151(uParam0, &(Local_133[18]), "G_M_M_UniDuster_01^1", 0, 0, 0, 0);
			func_151(uParam0, &(Local_133[17]), "G_M_M_UNIDUSTER_01", 0, 0, 0, 0);
			func_151(uParam0, &(Local_133[20]), "Horse_01^1", 0, 0, 0, 0);
			func_151(uParam0, &(Local_133[22]), "Horse_01", 0, 0, 0, 0);
			func_151(uParam0, &(Local_133[21]), "Horse_01^2", 0, 0, 0, 0);
			iLocal_1482[1] = 6;
		case 6:
			return true;
	}
	return false;
}

void func_1365(var uParam0, char* sParam1, bool bParam2)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (func_1893(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (is_string_null_or_empty(uParam0->f_822[iVar0]))
		{
			if (!func_1894(uParam0, sParam1) || func_852(uParam0, 8388608))
			{
				StringCopy(uParam0->f_822[iVar0], sParam1, 64);
				if (!bParam2)
				{
					if (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_loaded(uParam0->f_804, true, false))
					{
						if (_0xa9016536015de29d(uParam0->f_804, sParam1))
						{
							_0xdf7b5144e25cd3fe(uParam0->f_804, sParam1);
						}
					}
					else
					{
						func_790(uParam0, 4194304);
					}
				}
				else
				{
					func_790(uParam0, 4194304);
				}
				return;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

void func_1366(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_806), sParam1, 64);
}

void func_1367(vector3 vParam0, float fParam3)
{
	clear_area(vParam0, fParam3, 3523083);
}

void func_1368(var uParam0, int iParam1)
{
	func_1895(&(uParam0->f_7375.f_861), iParam1);
}

void func_1369(int iParam0)
{
	switch (Local_1371[iParam0]->f_1)
	{
		case 0:
			Local_1371[iParam0]->f_1 = 1;
		case 1:
			Local_1371[iParam0] = _create_anim_scene(func_1896(iParam0, 1), 0, func_1896(iParam0, 0), false, true);
			Local_1371[iParam0]->f_1 = 2;
			break;
		case 2:
			if (_is_anim_scene_loaded(&(Local_1371[iParam0]), true, false))
			{
				if (Local_1371[iParam0]->f_3)
				{
					func_1897(iParam0);
				}
				Local_1371[iParam0]->f_1 = 3;
			}
			else if (!_is_anim_scene_loading(&(Local_1371[iParam0]), true))
			{
				load_anim_scene(&(Local_1371[iParam0]));
			}
			break;
		case 3:
			if (_is_anim_scene_loaded(&(Local_1371[iParam0]), true, false))
			{
				if (Local_1371[iParam0]->f_3)
				{
					func_1897(iParam0);
					if (Local_1371[iParam0]->f_4)
					{
						Local_1371[iParam0]->f_1 = 4;
					}
				}
				else
				{
					Local_1371[iParam0]->f_1 = 4;
				}
			}
			break;
		case 4:
			func_1897(iParam0);
			break;
		case 5:
			break;
		case 6:
			if (!_does_anim_scene_exist(&(Local_1371[iParam0])))
			{
			}
			if (!_is_anim_scene_loaded(&(Local_1371[iParam0]), true, false))
			{
			}
			start_anim_scene(&(Local_1371[iParam0]));
			Local_1371[iParam0]->f_1 = 7;
			break;
		case 7:
			if (_is_anim_scene_active(&(Local_1371[iParam0])))
			{
				Local_1371[iParam0]->f_1 = 8;
			}
			break;
		case 8:
			if (_is_anim_scene_finished(&(Local_1371[iParam0]), false))
			{
				Local_1371[iParam0]->f_1 = 9;
			}
			break;
		case 9:
			if (Local_1371[iParam0]->f_2)
			{
				Local_1371[iParam0]->f_1 = 10;
			}
			break;
		case 10:
			if (_does_anim_scene_exist(&(Local_1371[iParam0])))
			{
				_delete_anim_scene(&(Local_1371[iParam0]));
			}
			Local_1371[iParam0]->f_1 = 11;
			break;
	}
}

void func_1370(float fParam0)
{
	if (fParam0 <= 0f || fParam0 > 2f)
	{
		func_516(fParam0, 0f, 2f);
	}
	if (!func_26(vLocal_792[23]))
	{
		func_27(vLocal_792[23], 0);
	}
	fVar0 = (60f / (80f * fParam0));
	fVar1 = (0.2f * fParam0);
	if (!func_165(3))
	{
		if (func_934(vLocal_792[23]) >= fVar0)
		{
			set_pad_shake(0, 66, 128);
			func_456(3);
		}
	}
	else if (func_934(vLocal_792[23]) >= (fVar0 + fVar1))
	{
		set_pad_shake(0, 99, 64);
		func_176(3);
		func_244(vLocal_792[23]);
	}
}

int func_1371(var uParam0)
{
	return uParam0->f_599;
}

bool func_1372(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!is_screen_faded_in() && !is_screen_fading_in())
		{
			do_screen_fade_in(iParam1);
		}
		if (is_screen_faded_in())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (!is_screen_faded_out() && !is_screen_fading_out())
	{
		do_screen_fade_out(iParam1);
	}
	if (is_screen_faded_out())
	{
		return true;
	}
	return false;
}

void func_1373()
{
	set_clock_time(17, 0, 0);
	func_1295(&(Local_133[24]), func_551(2, 0), 2, 1073741824);
	func_1295(&(Local_133[25]), func_551(2, 1), 2, 1073741824);
	func_1295(&(Local_133[26]), func_551(2, 2), 2, 1073741824);
	func_1295(&(Local_133[27]), func_551(2, 3), 2, 1073741824);
	func_1295(&(Local_133[28]), func_551(3, 0), 2, 1073741824);
	func_1295(&(Local_133[29]), func_551(3, 1), 2, 1073741824);
	func_1295(&(Local_133[30]), func_551(3, 2), 2, 1073741824);
	func_1295(&(Local_133[31]), func_551(3, 3), 2, 1073741824);
	_task_start_scenario_in_place(&(Local_133[28]), 696740378, 0, false, 0, -1f, false);
	_task_start_scenario_in_place(&(Local_133[29]), 696740378, 0, false, 0, -1f, false);
	_task_start_scenario_in_place(&(Local_133[30]), 696740378, 0, false, 0, -1f, false);
	_task_start_scenario_in_place(&(Local_133[31]), 696740378, 0, false, 0, -1f, false);
	detach_entity(Global_35, true, true);
	if (!_get_anim_scene_entity_matrix(&(Local_1371[0]), "ARTHUR", &Var0, false, 0, 2))
	{
		Var0 = { func_845(2, 4) };
		Var0.f_3.f_2 = func_1297(2, 4);
	}
	_set_entity_coords_and_heading(Global_35, Var0, Var0.f_3.f_2, true, false, true);
}

bool func_1374(int iParam0, bool bParam1)
{
	if (!Local_1371[iParam0]->f_1 == 5)
	{
		if (bParam1)
		{
		}
		return false;
	}
	Local_1371[iParam0]->f_1 = 6;
	func_1369(iParam0);
	return true;
}

void func_1375()
{
	set_clock_time(17, 0, 0);
	if (!is_entity_dead(&(Local_133[27])))
	{
		_set_ped_crouch_movement(&(Local_133[27]), false, 0, false);
	}
	if (!_get_anim_scene_entity_matrix(&(Local_1371[1]), "Shooter", &Var0, true, "pbl_Gang_Conversation", 2))
	{
	}
	if (!is_entity_dead(&(Local_133[24])))
	{
		_set_entity_coords_and_heading(&(Local_133[24]), Var0, Var0.f_6.f_2, true, false, true);
	}
	if (!_get_anim_scene_entity_matrix(&(Local_1371[1]), "Gang01", &Var0, true, "pbl_Gang_Conversation", 2))
	{
	}
	if (!is_entity_dead(&(Local_133[25])))
	{
		_set_entity_coords_and_heading(&(Local_133[25]), Var0, Var0.f_6.f_2, true, false, true);
	}
	if (!_get_anim_scene_entity_matrix(&(Local_1371[1]), "Gang02", &Var0, true, "pbl_Gang_Conversation", 2))
	{
	}
	if (!is_entity_dead(&(Local_133[26])))
	{
		_set_entity_coords_and_heading(&(Local_133[26]), Var0, Var0.f_6.f_2, true, false, true);
	}
	if (!_get_anim_scene_entity_matrix(&(Local_1371[1]), "Gang03", &Var0, true, "pbl_Gang_Conversation", 2))
	{
	}
	if (!is_entity_dead(&(Local_133[27])))
	{
		_set_entity_coords_and_heading(&(Local_133[27]), Var0, Var0.f_6.f_2, true, false, true);
	}
	func_1295(&(Local_133[28]), func_551(3, 0), 2, 1073741824);
	func_1295(&(Local_133[29]), func_551(3, 1), 2, 1073741824);
	func_1295(&(Local_133[30]), func_551(3, 2), 2, 1073741824);
	func_1295(&(Local_133[31]), func_551(3, 3), 2, 1073741824);
	if (!is_entity_dead(&(Local_133[28])))
	{
		_task_start_scenario_in_place(&(Local_133[28]), 696740378, -1, false, 0, -1f, false);
		set_ped_config_flag(&(Local_133[28]), 136, true);
		set_ped_config_flag(&(Local_133[28]), 471, true);
	}
	if (!is_entity_dead(&(Local_133[29])))
	{
		_task_start_scenario_in_place(&(Local_133[29]), 696740378, -1, false, 0, -1f, false);
		set_ped_config_flag(&(Local_133[29]), 136, true);
		set_ped_config_flag(&(Local_133[29]), 471, true);
	}
	if (!is_entity_dead(&(Local_133[30])))
	{
		_task_start_scenario_in_place(&(Local_133[30]), 696740378, -1, false, 0, -1f, false);
		set_ped_config_flag(&(Local_133[30]), 136, true);
		set_ped_config_flag(&(Local_133[30]), 471, true);
	}
	if (!is_entity_dead(&(Local_133[31])))
	{
		_task_start_scenario_in_place(&(Local_133[31]), 696740378, -1, false, 0, -1f, false);
		set_ped_config_flag(&(Local_133[31]), 136, true);
		set_ped_config_flag(&(Local_133[31]), 471, true);
	}
	set_ped_seeing_range(&(Local_133[24]), 6f);
	set_ped_seeing_range(&(Local_133[25]), 6f);
	set_ped_seeing_range(&(Local_133[26]), 6f);
	set_ped_seeing_range(&(Local_133[27]), 6f);
	func_1405(24, 1, 2);
	func_1405(25, 1, 2);
	func_1405(26, 1, 2);
	func_1405(27, 1, 2);
	func_462(61);
	if (!is_entity_dead(Global_35))
	{
		set_entity_heading(Global_35, 180f);
		clear_ped_tasks(Global_35, 1, 0);
		func_188(1);
	}
}

bool func_1376(var uParam0)
{
	if (is_entity_dead(Global_35) || is_entity_dead(&(Local_133[25])))
	{
		return false;
	}
	_0x90da5ba5c2635416();
	func_1369(1);
	func_1369(2);
	func_1369(3);
	func_1369(4);
	func_1369(5);
	switch (iVar1220)
	{
		case 0:
			func_1374(1, 1);
			func_1374(2, 1);
			func_1369(2);
			func_27(vLocal_792[0], 1);
			iLocal_1223 = 1;
			break;
		case 1:
			if (func_934(vLocal_792[0]) >= 1f)
			{
				if (func_1372(1, 3000))
				{
					func_1315(uParam0, 4);
					func_592(vLocal_792[0]);
					iLocal_1223 = 2;
				}
			}
			break;
		case 2:
			if (!func_165(67))
			{
				if (func_26(vLocal_792[0]))
				{
					if (func_934(vLocal_792[0]) >= 30f)
					{
						func_1359(37);
						func_456(67);
					}
				}
			}
			if (_0x8d81e7824b7753f7(&(Local_1371[2]), "s_Arthur_Looks_Around_Loop", 1))
			{
				if (!func_26(vLocal_792[0]))
				{
					func_27(vLocal_792[0], 1);
					set_player_control(player_id(), true, 0, false);
					_display_hud_component(iLocal_131);
				}
				if (absf(get_control_normal(0, func_1361(1))) >= 0.3f || absf(get_control_normal(0, func_1361(2))) >= 0.3f)
				{
					_0xdd1232b332cbb9e7(1, 1, 0);
					_set_anim_scene_playback_list_bool(&(Local_1371[2]), "pbl_Arthur_Escapes", true);
					iLocal_1223 = 3;
				}
			}
			break;
		case 3:
			if (_0x005e6f28dd7ed58d(&(Local_1371[2]), "ARTHUR"))
			{
				func_1407(&(Local_89.f_30), -1612834106);
				func_1407(&(Local_89.f_32), -1612834106);
				simulate_player_input_gait(player_id(), 1.5f, 1000, 0f, false, false);
				func_1428(Global_35, 61, 1090519040, -1056964608, -1, 25);
				iLocal_1223 = 4;
			}
			break;
		case 4:
			if (is_entity_in_volume(Global_35, Local_89.f_1, true, 0))
			{
				func_456(63);
			}
			if (!is_entity_in_volume(Global_35, Local_89.f_13, true, 0))
			{
				func_456(63);
			}
			if (func_934(vLocal_792[22]) >= 60f)
			{
				func_456(63);
			}
			if (func_165(63))
			{
				iLocal_1223 = 5;
			}
			break;
		case 5:
			if (((is_entity_dead(&(Local_133[24])) || is_entity_dead(&(Local_133[25]))) || is_entity_dead(&(Local_133[26]))) || is_entity_dead(&(Local_133[27])))
			{
				return true;
			}
			func_135(uParam0, 2);
			set_ped_seeing_range(&(Local_133[24]), 60f);
			set_ped_seeing_range(&(Local_133[25]), 60f);
			set_ped_seeing_range(&(Local_133[26]), 60f);
			set_ped_seeing_range(&(Local_133[27]), 60f);
			set_ped_combat_attributes(&(Local_133[24]), 30, true);
			_set_blip_flash_style(Local_133[24]->f_1, -662251075);
			_set_blip_flash_style(Local_133[25]->f_1, -662251075);
			_set_blip_flash_style(Local_133[26]->f_1, -662251075);
			_set_blip_flash_style(Local_133[27]->f_1, -662251075);
			_set_anim_scene_playback_list_bool(&(Local_1371[1]), "pbl_Gang_React_to_Player_Escape", true);
			_give_weapon_to_ped_2(&(Local_133[24]), &(iLocal_781[2]), 10, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			Local_941[6] = _0xc6a6789bb405d11c(&(Local_133[24]), 1);
			set_anim_scene_entity(&(Local_1371[5]), "SHOTGUN", &(Local_941[6]), 0);
			_give_weapon_to_ped_2(&(Local_133[24]), &(iLocal_781[2]), 10, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			set_current_ped_weapon(&(Local_133[24]), &(iLocal_781[2]), true, 0, false, false);
			func_1374(5, 1);
			iLocal_1223 = 6;
			break;
		case 6:
			set_ped_max_move_blend_ratio(Global_35, 2f);
			if (is_entity_dead(&(Local_133[24])))
			{
			}
			else
			{
				if (!func_26(vLocal_792[21]))
				{
					if (_0x005e6f28dd7ed58d(&(Local_1371[5]), "Shooter"))
					{
						task_aim_at_entity(&(Local_133[24]), Global_35, -1, 1, 0);
						force_ped_motion_state(&(Local_133[24]), 1063765679, false, 0, true);
						Var0.f_8 = -1082130432;
						Var0.f_14 = 1;
						Var0.f_13 = 1;
						Var0.f_12 = 1;
						Var0.f_3 = { _get_object_offset_from_coords(get_ped_bone_coords(Global_35, 21030, func_1362(0)), get_entity_heading(Global_35), -0.2f, 0f, 0f) };
						Var0 = { func_1881(get_entity_coords(&(Local_133[24]), true, false), get_entity_coords(Global_35, true, false), 0.1f) };
						Var0.f_6 = &iLocal_781[2];
						Var0.f_7 = 0f;
						Var0.f_11 = Global_35;
						_fire_single_bullet_ignore_entity_new(&Var0);
						func_27(vLocal_792[21], 0);
					}
				}
				else
				{
					if (does_entity_exist(&(Local_941[6])))
					{
						if (_0xf94692eb9dc15d74(&(Local_1371[5]), 0))
						{
							func_471(uParam0, 6, 0);
							_0x67e21acc5c0c970c(&(Local_133[24]), 0, true);
						}
					}
					if (!func_934(vLocal_792[21]) >= 0.2f)
					{
					}
					else
					{
						func_1374(3, 1);
						set_pad_shake(0, 2000, 222);
						func_135(uParam0, 3);
						func_940(1, 1);
						func_1318(4);
						_hide_hud_component(iLocal_131);
						func_145(uParam0, &(Local_133[24]), "ODR_PED6", 0);
						func_145(uParam0, &(Local_133[25]), "ODR3_ODRISCOLL1", 0);
						_0x6035e8fbca32ac5e();
						iLocal_1223 = 7;
						Jump @1668; //curOff = 1369
						func_163(1);
						if (_0x005e6f28dd7ed58d(&(Local_1371[3]), "ARTHUR"))
						{
							func_1399(1);
							set_anim_scene_entity(&(Local_1371[4]), "Shooter", &(Local_133[24]), 0);
							set_anim_scene_entity(&(Local_1371[4]), "Gang01", &(Local_133[25]), 0);
							set_anim_scene_entity(&(Local_1371[4]), "Gang03", &(Local_133[27]), 0);
							func_1374(4, 1);
							iLocal_1223 = 8;
						}
						Jump @1668; //curOff = 1473
						func_163(1);
						if (!func_165(65))
						{
							if (func_26(vLocal_792[21]))
							{
								if (func_245(vLocal_792[21]) >= 2000)
								{
									func_456(65);
									func_456(64);
								}
							}
						}
						if (func_165(65))
						{
							if (!func_165(66))
							{
								if (_0x8d81e7824b7753f7(&(Local_1371[4]), "s_Arthur_Shot_Point_Blank_Range", 1) && _get_anim_scene_time(&(Local_1371[4])) >= 8f)
								{
									func_176(64);
									set_pad_shake(0, 1000, 255);
									func_456(66);
								}
							}
						}
						if (_is_anim_scene_active(&(Local_1371[4])))
						{
							do_screen_fade_out(0);
							func_27(vLocal_792[24], 0);
							iLocal_1223 = 9;
							return true;
						}
						Jump @1668; //curOff = 1653
						func_163(1);
						return true;
					}
					return false;
				}
			}
			default:
				break;
	}
}

void func_1377(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_set_ped_component_disabled(iParam0, -1725579161, 1);
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1378(int iParam0, float fParam1)
{
	func_1426(iParam0, fParam1);
	func_1427(iParam0, 1);
	render_script_cams(true, false, 3000, true, false, 0);
}

struct<15> func_1379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 0.372f, -0.214f, 0.106f };
			Var0.f_3 = { 0.691f, -0.2f, -0.297f };
			Var0.f_6 = 72f;
			Var0.f_13 = 35f;
			break;
		case 1:
			Var0 = { -862.5888f, -745.315f, 57.19f };
			Var0.f_3 = { -0.4404f, 0.0506f, -68.5564f };
			Var0.f_6 = 50f;
			Var0.f_14 = 10f;
			Var0.f_7 = { -861.562f, -745.496f, 57.4464f };
			Var0.f_10 = { -2.40994f, 0.46253f, -46.8712f };
			Var0.f_13 = 50f;
			break;
		case 2:
			Var0 = { -859.315f, -742.611f, 56.972f };
			Var0.f_3 = { 2.1818f, 0.0491f, 85.9173f };
			Var0.f_6 = 32.2994f;
			break;
		case 6:
			Var0 = { -859.7786f, -742.5337f, 57.0596f };
			Var0.f_3 = { 0.2426f, 0.0794f, 85.4306f };
			Var0.f_6 = 37.8045f;
			break;
		case 7:
			Var0 = { -859.9454f, -742.5367f, 57.0901f };
			Var0.f_3 = { 1.0509f, 0.3513f, 76.9753f };
			Var0.f_6 = 37.0729f;
			break;
		case 8:
			Var0 = { -859.4204f, -741.9394f, 56.9579f };
			Var0.f_3 = { 2.2981f, 0.217f, 110.8169f };
			Var0.f_6 = 20.329f;
			break;
		case 9:
			Var0 = { -860.1362f, -743.3084f, 57.0389f };
			Var0.f_3 = { -5.8418f, 0.0889f, 17.9908f };
			Var0.f_6 = 38f;
			break;
		case 10:
			Var0 = { -860.2368f, -742.8105f, 57.1283f };
			Var0.f_3 = { -8.4311f, -0.0324f, 27.1247f };
			Var0.f_6 = 38f;
			break;
		case 11:
			Var0 = { -860.2751f, -742.7956f, 57.126f };
			Var0.f_3 = { -2.9398f, 0.0889f, 36.3771f };
			Var0.f_6 = 38f;
			break;
		case 3:
			Var0 = { -862.4896f, -744.7618f, 56.9179f };
			Var0.f_3 = { 23.9502f, 0.1425f, 115.4776f };
			Var0.f_6 = 43f;
			break;
		case 4:
			Var0 = { -1210.4f, -712.6f, 72.6f };
			Var0.f_3 = { 32.3f, 0.1f, -160.7f };
			Var0.f_6 = 57.2f;
			break;
		default:
			break;
	}
	return Var0;
}

void func_1380()
{
	Var0 = { func_1379(0) };
	set_cam_coord(&(iLocal_1009[0]), get_offset_from_entity_in_world_coords(&(Local_133[28]), Var0));
	vVar15 = { Var0.f_3 };
	vVar15.x = (vVar15.x + func_1899(1, (func_1898(4) * 0.8f)));
	vVar15.f_1 = (vVar15.y - func_1899(0, (get_control_normal(0, func_1361(3)) * 1f)));
	fVar18 = (absf(Local_1123[1]->f_2) + (absf(Local_1123[0]->f_2) / 2f));
	set_cam_fov(&(iLocal_1009[0]), func_1699(Var0.f_6, Var0.f_13, fVar18));
	point_cam_at_coord(&(iLocal_1009[0]), get_offset_from_entity_in_world_coords(&(Local_133[28]), vVar15));
}

bool func_1381(bool bParam0)
{
	if (bParam0)
	{
		func_462(func_461(13));
		func_462(func_461(10));
		func_462(func_461(8));
		func_462(func_461(9));
		func_462(func_461(12));
		func_462(func_461(11));
		func_462(func_461(14));
		func_462(func_461(15));
		func_462(func_461(17));
		if ((((((((func_463(func_461(13)) && func_463(func_461(10))) && func_463(func_461(8))) && func_463(func_461(9))) && func_463(func_461(12))) && func_463(func_461(11))) && func_463(func_461(14))) && func_463(func_461(15))) && func_463(func_461(17)))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	func_466(func_461(13));
	func_466(func_461(10));
	func_466(func_461(8));
	func_466(func_461(9));
	func_466(func_461(12));
	func_466(func_461(11));
	func_466(func_461(14));
	func_466(func_461(15));
	return true;
}

void func_1382(int iParam0, bool bParam1)
{
	if (!is_itemset_valid(Local_14.f_68))
	{
		Local_14.f_68 = create_itemset(true);
	}
	if (!does_entity_exist(&(Local_14.f_69[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_69[0] = create_object(519003277, -859.8f, -742.82f, 56.75f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_69[0]), -86.3137f, 6.8591f, -93.0248f, 2, true);
		freeze_entity_position(&(Local_14.f_69[0]), bParam1);
	}
	func_1900(&(Local_14.f_69[0]), Local_14);
	func_1900(&(Local_14.f_69[0]), Local_14.f_68);
	if (!does_entity_exist(&(Local_14.f_69[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_69[1] = create_object(326498975, -859.569f, -744.096f, 58.0732f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_69[1]), 6.8353f, 1.4369f, 125.163f, 2, true);
		freeze_entity_position(&(Local_14.f_69[1]), bParam1);
	}
	func_1900(&(Local_14.f_69[1]), Local_14);
	func_1900(&(Local_14.f_69[1]), Local_14.f_68);
	if (!does_entity_exist(&(Local_14.f_69[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_69[2] = create_object(-1127014626, -859.603f, -744.094f, 58.3943f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_69[2]), 0.3362f, 91.1119f, -163.176f, 2, true);
		freeze_entity_position(&(Local_14.f_69[2]), bParam1);
	}
	func_1900(&(Local_14.f_69[2]), Local_14);
	func_1900(&(Local_14.f_69[2]), Local_14.f_68);
	if (!does_entity_exist(&(Local_14.f_69[3])) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_69[3] = create_object(-1074884633, -859.7105f, -742.6176f, 56.761f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_69[3]), 0f, 0f, 0f, 2, true);
		freeze_entity_position(&(Local_14.f_69[3]), bParam1);
	}
	func_1900(&(Local_14.f_69[3]), Local_14);
	func_1900(&(Local_14.f_69[3]), Local_14.f_68);
}

void func_1383(var uParam0, int iParam1)
{
	func_1901(&(uParam0->f_7375.f_860), iParam1);
}

int func_1384(var uParam0)
{
	switch (&iLocal_1482[2])
	{
		case 0:
			iLocal_1482[2] = 1;
		case 1:
			func_462(func_1323(16));
			func_462(10);
			if (func_463(11) && func_463(10))
			{
				iLocal_1482[2] = 2;
			}
			break;
		case 2:
			bVar0 = true;
			if (!func_1324(uParam0, 16, 16, 15))
			{
				bVar0 = false;
			}
			if (!func_1324(uParam0, 18, 18, 15))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_1482[2] = 3;
			}
			break;
		case 3:
			_set_ped_body_component(&(Local_133[16]), -99272505);
			_update_ped_variation(&(Local_133[16]), false, true, true, true, false);
			func_409(&(uParam0->f_7375));
			func_151(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			func_151(uParam0, &(Local_133[16]), "ColmODriscoll", 0, 0, 0, 0);
			func_151(uParam0, &(Local_133[18]), "G_M_M_UniDuster_01", 0, 0, 0, 0);
			func_442(uParam0, &(Local_941[8]), "p_cs_shackleleg05x", 0, 0, 0, 0);
			func_442(uParam0, &(Local_941[9]), "p_cs_chainlink01x", 0, 0, 0, 0);
			if (!is_entity_dead(&(Local_941[15])))
			{
				func_442(uParam0, &(Local_941[15]), "p_chair23x", 0, 0, 0, 0);
			}
			iLocal_1482[2] = 6;
			break;
		case 6:
			return 1;
	}
	return 0;
}

Vector3 func_1385(int iParam0)
{
	vVar0 = { func_247(iParam0) };
	return vVar0;
}

void func_1386()
{
	if (!func_537(-464836488))
	{
		func_1589(-464836488);
	}
	func_205(-1192199739);
	func_508(-65072454);
}

void func_1387()
{
	vVar0 = { func_1362(1) };
	vVar0.x = (vVar0.x - (5f * func_1899(0, get_control_normal(0, func_1361(3)))));
	vVar0.f_2 = (vVar0.z - (5f * func_1899(1, get_control_normal(0, -771458680))));
	vVar3 = { get_ped_bone_coords(Global_35, 56200, func_1362(0)) };
	vVar3 = { get_ped_bone_coords(Global_35, 56200, func_1362(0)) };
	if (func_165(77))
	{
		vVar6 = { _get_object_offset_from_coords(vVar3, get_entity_heading(Global_35), vVar0) };
	}
	else
	{
		vVar6 = { -850.24f, -740.684f, 57.0828f };
		func_456(77);
	}
	point_cam_at_coord(&(iLocal_1009[1]), vVar6);
}

bool func_1388()
{
	return ((is_task_move_network_active(Global_35) && is_task_move_network_active(&(Local_941[8]))) && is_task_move_network_active(&(Local_941[9])));
}

void func_1389(char* sParam0, float fParam1)
{
	set_task_move_network_signal_float(Global_35, sParam0, fParam1);
	set_task_move_network_signal_float(&(Local_941[8]), sParam0, fParam1);
	set_task_move_network_signal_float(&(Local_941[9]), sParam0, fParam1);
}

void func_1390(char* sParam0, bool bParam1)
{
	set_task_move_network_signal_bool(Global_35, sParam0, bParam1);
	set_task_move_network_signal_bool(&(Local_941[8]), sParam0, bParam1);
	set_task_move_network_signal_bool(&(Local_941[9]), sParam0, bParam1);
}

int func_1391(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_1052(iVar0, 2))
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
		func_1902(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_1392(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_10(iParam0))
	{
		return;
	}
	iVar0 = func_211(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

bool func_1393()
{
	return ((is_task_move_network_ready_for_transition(Global_35) && is_task_move_network_ready_for_transition(&(Local_941[8]))) && is_task_move_network_ready_for_transition(&(Local_941[9])));
}

void func_1394(char* sParam0)
{
	request_task_move_network_state_transition(Global_35, sParam0);
	request_task_move_network_state_transition(&(Local_941[8]), sParam0);
	request_task_move_network_state_transition(&(Local_941[9]), sParam0);
}

bool func_1395(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

void func_1396(float fParam0)
{
	if (!func_26(fParam0))
	{
	}
	if (!func_548(fParam0))
	{
		fParam0->f_2 = (func_590() - fParam0->f_1);
		func_1064(fParam0, 2);
	}
}

void func_1397(int iParam0)
{
	if (iParam0 == 1)
	{
		iLocal_1231 = func_1391(func_1300(2), func_1361(6), 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		iVar0 = iVar1228;
	}
	else if (iParam0 == 2)
	{
		iLocal_1232 = func_1391(func_1300(3), func_1361(7), 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		iVar0 = iVar1229;
	}
	func_1903(iVar0, func_1361(5));
	func_1903(iVar0, func_1361(6));
	func_1903(iVar0, func_1361(7));
	func_1392(iVar0, 10, 1, 1);
	func_1392(iVar0, 14, 1, 1);
	func_1392(iVar0, 11, 1, 1);
}

bool func_1398(int iParam0, bool bParam1)
{
	if (bParam1 && !func_10(iParam0))
	{
		return false;
	}
	iVar0 = func_211(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_1399(int iParam0)
{
	if (_does_anim_scene_exist(&(Local_1371[iParam0])) && check_ownership_of_anim_scene(&(Local_1371[iParam0])))
	{
		_delete_anim_scene(&(Local_1371[iParam0]));
	}
	Local_1371[iParam0]->f_1 = 11;
}

bool func_1400()
{
	if (is_task_move_network_active(Global_35))
	{
		func_1904();
	}
	switch (iVar1233)
	{
		case 0:
			if (!func_165(98))
			{
				if (_get_anim_scene_time(&(Local_1371[10])) >= 1.4f)
				{
					_set_ped_component_disabled(Global_35, -675377005, 1);
					_update_ped_variation(Global_35, false, true, true, true, false);
					func_456(98);
				}
			}
			if (_0x8d81e7824b7753f7(&(Local_1371[10]), "s_Heat_File_IDLE", 1))
			{
				func_1399(9);
				fLocal_1251 = 0f;
				fLocal_1252 = 0f;
				set_entity_coords(&(Local_941[16]), func_1362(5), true, false, true, true);
				attach_entity_to_entity(&(Local_941[10]), Global_35, get_ped_bone_index(Global_35, 7966), func_1362(0), func_1362(0), false, false, false, false, 2, true, false, false);
				Var0.f_6 = -1082130432;
				Var0.f_9 = -1082130432;
				Var0.f_30 = "Heat_File";
				task_move_network_advanced_by_name_with_init_params(Global_35, func_497(97), &Var0, -907.96f, -749.18f, 58.1f, 0f, 0f, 0f, 2, 0, 0, 0, 131200, 0);
				_0x2208438012482a1a(Global_35, true, false);
				func_1378(2, 1056964608);
				Local_1235 = 1;
			}
			break;
		case 1:
			if (_does_anim_scene_exist(&(Local_1371[10])))
			{
				func_1399(10);
			}
			if (!is_task_move_network_active(Global_35))
			{
			}
			else
			{
				fVar34 = ((-get_control_normal(0, 1301263553) + 1f) * 0.5f);
				fVar35 = func_1899(2, fVar34);
				fLocal_1256 = fVar35;
				enable_control_action(0, 1301263553, true);
				enable_control_action(0, 1885667965, true);
				enable_control_action(0, -1260100172, true);
				if (fVar1249 < 0.8f && fVar1250 < 0.8f)
				{
					if (!func_10(iVar1259))
					{
						if (func_10(iVar1260))
						{
							func_11(&iLocal_1262, 1, 1);
						}
						if (func_10(iVar1261))
						{
							func_11(&iLocal_1263, 1, 1);
						}
						iLocal_1261 = func_1391(func_1300(5), 1301263553, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						func_1905(iVar1259, &(Local_941[10]), 0, 1, -1);
						func_1906(iVar1259);
					}
				}
				else if (fVar1249 < 0.8f && fVar1250 >= 0.8f)
				{
					if (!func_10(iVar1260))
					{
						if (func_10(iVar1259))
						{
							func_11(&iLocal_1261, 1, 1);
						}
						if (func_10(iVar1261))
						{
							func_11(&iLocal_1263, 1, 1);
						}
						iLocal_1262 = func_1391(func_1300(5), 1885667965, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						func_1905(iVar1260, &(Local_941[10]), 0, 1, -1);
						func_1906(iVar1260);
					}
				}
				else if (fVar1249 >= 0.8f && fVar1250 < 0.8f)
				{
					if (!func_10(iVar1261))
					{
						if (func_10(iVar1259))
						{
							func_11(&iLocal_1261, 1, 1);
						}
						if (func_10(iVar1260))
						{
							func_11(&iLocal_1262, 1, 1);
						}
						iLocal_1263 = func_1391(func_1300(5), -1260100172, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						func_1905(iVar1261, &(Local_941[10]), 0, 1, -1);
						func_1906(iVar1261);
					}
				}
				if ((func_10(iVar1259) || func_10(iVar1260)) || func_10(iVar1261))
				{
					_uiprompt_set_active_group_this_frame(_uiprompt_get_group_id_for_target_entity(&(Local_941[10])), func_1300(7), 1, 0, 0, 0);
				}
				if (!func_26(vLocal_792[0]))
				{
					func_27(vLocal_792[0], 1);
				}
				if (fVar1254 < 0.5f)
				{
					fLocal_774 = func_1699(1f, 1.5f, ((-fVar1254 * 2f) + 1f));
				}
				else if (fVar1254 > 0.5f)
				{
					fLocal_774 = func_1699(1f, 1.5f, ((fVar1254 * 2f) + -1f));
				}
				fLocal_774 = func_516(fVar772, 0f, 2f);
				func_1370(fVar772);
				fVar36 = (get_frame_time() * 0.5f);
				fVar37 = (get_frame_time() * 0.05f);
				if (fVar1254 <= (0.5f - 0.1f))
				{
					fLocal_1252 = (fVar1250 + fVar36);
					fLocal_1251 = (fVar1249 - fVar37);
				}
				else if (fVar1254 > (0.5f + 0.1f))
				{
					fLocal_1251 = (fVar1249 + fVar36);
					fLocal_1252 = (fVar1250 - fVar37);
				}
				else
				{
					fLocal_1251 = (fVar1249 - fVar37);
					fLocal_1252 = (fVar1250 - fVar37);
				}
				if (fVar1249 < 0f)
				{
					fLocal_1251 = 0f;
				}
				else if (fVar1249 > 1f)
				{
					fLocal_1251 = 1f;
				}
				if (fVar1250 < 0f)
				{
					fLocal_1252 = 0f;
				}
				else if (fVar1250 > 1f)
				{
					fLocal_1252 = 1f;
				}
				if (fVar1249 >= 0.8f && fVar1250 >= 0.8f)
				{
					_0x6035e8fbca32ac5e();
					detach_entity(&(Local_941[10]), true, true);
					if (func_10(iVar1259))
					{
						func_11(&iLocal_1261, 1, 1);
					}
					if (func_10(iVar1260))
					{
						func_11(&iLocal_1262, 1, 1);
					}
					if (func_10(iVar1261))
					{
						func_11(&iLocal_1263, 1, 1);
					}
					Local_1235 = 2;
				}
				func_244(vLocal_792[0]);
				Jump @1391; //curOff = 1308
				if (func_1374(11, 1))
				{
					func_466(97);
					func_466(72);
					func_462(98);
					func_462(73);
					func_1399(10);
					Local_1235 = 3;
				}
				Jump @1391; //curOff = 1355
				if (does_cam_exist(&(iLocal_1009[2])))
				{
					func_1907(2, 6, 3f, 0, 1);
					Local_1235 = 4;
					return true;
				}
			}
			return false;
			default:
				break;
	}
}

bool func_1401()
{
	if (is_task_move_network_active(Global_35))
	{
		set_task_move_network_signal_float(Global_35, "Horizontal", fVar1255);
		set_task_move_network_signal_float(Global_35, "Vertical", fVar1256);
		set_task_move_network_signal_float(Global_35, "Twist", fVar1257);
	}
	switch (iVar1233)
	{
		case 4:
			if (_0x8d81e7824b7753f7(&(Local_1371[11]), "s_Hover_Over_Wound", 1))
			{
				Var0.f_6 = -1082130432;
				Var0.f_9 = -1082130432;
				Var0.f_30 = "Ready";
				task_move_network_advanced_by_name_with_init_params(Global_35, func_497(98), &Var0, -907.96f, -749.18f, 58.1f, 0f, 0f, 0f, 2, 0, 0, 0, 128, 0);
				_0x2208438012482a1a(Global_35, true, false);
				if (is_task_move_network_active(Global_35))
				{
					fLocal_1257 = 0.5f;
					fLocal_1258 = 0.5f;
					fLocal_1259 = 0.5f;
					set_task_move_network_signal_float(Global_35, "Horizontal", fVar1255);
					set_task_move_network_signal_float(Global_35, "Vertical", fVar1256);
					set_task_move_network_signal_float(Global_35, "Twist", fVar1257);
				}
				remove_anim_scene_entity(&(Local_1371[11]), "File", &(Local_941[10]));
				remove_anim_scene_entity(&(Local_1371[11]), "Candle", &(Local_941[16]));
				freeze_entity_position(&(Local_941[16]), true);
				attach_entity_to_entity(&(Local_941[10]), Global_35, get_ped_bone_index(Global_35, 7966), func_1362(0), func_1362(0), false, false, false, false, 2, true, false, false);
				_0x6035e8fbca32ac5e();
				iLocal_129 = func_1391(func_1300(6), func_1361(15), 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				func_1905(iLocal_129, &(Local_941[10]), 0, 1, -1);
				_uiprompt_set_active_group_this_frame(_uiprompt_get_group_id_for_target_entity(&(Local_941[10])), func_1300(7), 1, 0, 0, 0);
				Local_1235 = 5;
			}
			break;
		case 5:
			func_1399(11);
			Local_1371[11]->f_1 = 0;
			func_456(95);
			_uiprompt_set_active_group_this_frame(_uiprompt_get_group_id_for_target_entity(&(Local_941[10])), func_1300(7), 1, 0, 0, 0);
			Local_1235 = 6;
			break;
		case 6:
			enable_control_action(0, func_1361(15), true);
			_uiprompt_set_active_group_this_frame(_uiprompt_get_group_id_for_target_entity(&(Local_941[10])), func_1300(7), 1, 0, 0, 0);
			if (is_task_move_network_active(Global_35))
			{
				if (func_1908(iLocal_129, 1))
				{
					if (is_task_move_network_ready_for_transition(Global_35))
					{
						func_11(&iLocal_129, 1, 1);
						func_1907(2, 7, 3f, 0, 1);
						_0x6035e8fbca32ac5e();
						if (is_task_move_network_active(Global_35))
						{
							fLocal_1257 = 0.5f;
							fLocal_1258 = 0.5f;
							fLocal_1259 = 0.5f;
							set_task_move_network_signal_float(Global_35, "Horizontal", fVar1255);
							set_task_move_network_signal_float(Global_35, "Vertical", fVar1256);
							set_task_move_network_signal_float(Global_35, "Twist", fVar1257);
						}
						request_task_move_network_state_transition(Global_35, "Gouge");
						if (is_task_move_network_active(Global_35))
						{
							fLocal_1257 = 0.5f;
							fLocal_1258 = 0.5f;
							fLocal_1259 = 0.5f;
							set_task_move_network_signal_float(Global_35, "Horizontal", fVar1255);
							set_task_move_network_signal_float(Global_35, "Vertical", fVar1256);
							set_task_move_network_signal_float(Global_35, "Twist", fVar1257);
						}
						func_27(vLocal_792[31], 0);
						Local_1235 = 7;
					}
				}
			}
			break;
		case 7:
			_uiprompt_set_active_group_this_frame(_uiprompt_get_group_id_for_target_entity(&(Local_941[10])), func_1300(7), 1, 0, 0, 0);
			if (func_26(vLocal_792[31]))
			{
				if (func_934(vLocal_792[31]) >= 0.786133f)
				{
					func_592(vLocal_792[31]);
				}
			}
			if (are_strings_equal(get_task_move_network_state(Global_35), "Gouge"))
			{
				Local_1235 = 8;
			}
			break;
		case 8:
			enable_control_action(0, func_1361(9), true);
			enable_control_action(0, func_1361(10), true);
			enable_control_action(0, func_1361(11), true);
			_uiprompt_set_active_group_this_frame(_uiprompt_get_group_id_for_target_entity(&(Local_941[10])), func_1300(7), 1, 0, 0, 0);
			if (!func_10(iLocal_129))
			{
				iLocal_129 = func_1391(func_1300(8), func_1361(9), 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				func_1392(iLocal_129, 14, 1, 1);
				func_1392(iLocal_129, 10, 1, 1);
			}
			if (!func_10(iLocal_130))
			{
				iLocal_130 = func_1391(func_1300(9), func_1361(11), 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				func_1392(iLocal_130, 14, 1, 1);
				func_1392(iLocal_130, 10, 1, 1);
			}
			_uiprompt_set_active_group_this_frame(_uiprompt_get_group_id_for_target_entity(&(Local_941[10])), func_1300(7), 1, 0, 0, 0);
			fLocal_1257 = func_1899(4, func_1898(9));
			fLocal_1258 = func_1899(5, func_1898(10));
			fLocal_1259 = func_1899(6, func_1898(11));
			func_1909(fVar1255, fVar1256, fVar1257);
			vVar34 = { fVar1255, fVar1256, fVar1257 };
			fVar37 = get_distance_between_coords(vVar34, Local_1235.f_10, true);
			Local_1235.f_9 = (Local_1235.f_9 + fVar37);
			fVar38 = (Local_1235.f_9 / 10f);
			fVar38 = func_516(1f, 0f, fVar38);
			iVar39 = -1;
			if (fVar37 > 0.005f)
			{
				iVar39 = floor(func_1699(0f, 255f, fVar38));
				func_1910(iVar39);
				if (fVar772 < 2.5f)
				{
					fLocal_774 = (fVar772 + (get_frame_time() * 1f));
				}
			}
			else
			{
				if (fVar772 > 1f)
				{
					fLocal_774 = (fVar772 - (get_frame_time() * 0.2f));
				}
				else if (fVar772 < 1f)
				{
					fLocal_774 = 1f;
				}
				fLocal_774 = func_516(80f, 0f, 2f);
				func_1370(fVar772);
			}
			Local_1235.f_10 = { vVar34 };
			vVar40 = { func_1881(func_1362(3), func_1362(4), fVar38) };
			attach_entity_to_entity(&(Local_941[14]), Global_35, get_ped_bone_index(Global_35, 30226), vVar40, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			fLocal_1168 = func_1699(0f, 1f, fVar38);
			if (fVar38 == 1f)
			{
				if (func_1374(11, 1))
				{
					func_11(&iLocal_129, 1, 1);
					func_11(&iLocal_130, 1, 1);
					func_466(98);
					func_466(73);
					func_462(99);
					func_462(74);
					stop_pad_shake(0);
					if (does_entity_exist(&(Local_941[14])))
					{
						delete_object(Local_941[14]);
					}
					if (does_particle_fx_looped_exist(&(iLocal_937[1])))
					{
						stop_particle_fx_looped(&(iLocal_937[1]), false);
					}
					_0x6035e8fbca32ac5e();
					set_anim_scene_entity(&(Local_1371[11]), "Shell", &(Local_941[13]), 0);
					detach_entity(&(Local_941[10]), true, true);
					fLocal_1168 = 0.3f;
					Local_1235 = 9;
				}
			}
			break;
		case 9:
			Local_1235 = 10;
			return true;
	}
	return false;
}

bool func_1402()
{
	func_1370(1f);
	switch (iVar1233)
	{
		case 10:
			if (_0x8d81e7824b7753f7(&(Local_1371[11]), "s_picks_up_rag_then_cartridge", 1))
			{
				if (does_cam_exist(&(iLocal_1009[2])))
				{
					render_script_cams(false, false, 3000, true, false, 0);
					func_473(2);
				}
			}
			if (_0xf94692eb9dc15d74(&(Local_1371[11]), 0))
			{
				Var0.f_6 = -1082130432;
				Var0.f_9 = -1082130432;
				Var0.f_30 = "ReadytoShake";
				task_move_network_advanced_by_name_with_init_params(Global_35, func_497(99), &Var0, -907.96f, -749.18f, 58.1f, 0f, 0f, 0f, 2, 0, 0, 0, 128, 0);
				_0x2208438012482a1a(Global_35, true, false);
				func_1378(2, 1056964608);
				func_1907(2, 8, 0f, 1, 1);
				render_script_cams(true, false, 3000, true, false, 0);
				set_entity_coords(&(Local_941[13]), -860.441f, -742.315f, 56.9937f, true, false, true, true);
				set_entity_rotation(&(Local_941[13]), -21.5262f, -39.0253f, 93.4809f, 2, true);
				func_456(96);
				Local_1235 = 11;
			}
			break;
		case 11:
			attach_entity_to_entity(&(Local_941[13]), Global_35, get_ped_bone_index(Global_35, 7966), func_1362(0), func_1362(0), false, false, false, false, 2, true, false, false);
			if (func_10(iLocal_129))
			{
				_uiprompt_set_active_group_this_frame(_uiprompt_get_group_id_for_target_entity(&(Local_941[13])), func_1300(43), 1, 0, 0, 0);
			}
			if (!Local_1371[10]->f_1 == 11)
			{
				func_1399(10);
				attach_entity_to_entity(&(Local_941[10]), Global_35, get_ped_bone_index(Global_35, 7966), func_1362(0), func_1362(0), false, false, false, false, 2, true, false, false);
			}
			if (!is_task_move_network_active(Global_35) || !is_task_move_network_ready_for_transition(Global_35))
			{
			}
			else
			{
				if (are_strings_equal(get_task_move_network_state(Global_35), "ReadyToShake"))
				{
					if (!func_10(iLocal_129))
					{
						func_1911();
					}
					if (func_1908(iLocal_129, 1))
					{
						func_11(&iLocal_129, 1, 1);
						uLocal_1253 = iVar1251 + 1;
						if (iVar1251 == 2)
						{
							_0xdd1232b332cbb9e7(3, 1, 0);
						}
						func_27(vLocal_792[33], 0);
						request_task_move_network_state_transition(Global_35, "Shake");
					}
				}
				else if (are_strings_equal(get_task_move_network_state(Global_35), "Shake"))
				{
					if (func_26(vLocal_792[33]))
					{
						if (func_934(vLocal_792[33]) >= 0.45f)
						{
							start_particle_fx_non_looped_on_entity(func_1912(0), &(Local_941[13]), 0.035f, -0.01f, 0f, 0f, 0f, 0f, 1f, false, false, false);
							func_592(vLocal_792[33]);
						}
					}
					if (!iVar1251 == 2)
					{
						if (has_anim_event_fired(Global_35, 1379624381))
						{
							func_1911();
						}
					}
					if (func_10(iLocal_129))
					{
						if (func_1398(iLocal_129, 1))
						{
							uLocal_1253 = iVar1251 + 1;
							request_task_move_network_state_transition(Global_35, "Shake");
							func_11(&iLocal_129, 1, 1);
						}
						else
						{
							if (has_anim_event_fired(Global_35, 1220809546))
							{
								if (!iVar1251 >= 2)
								{
									request_task_move_network_state_transition(Global_35, "ReadyToShake");
								}
								else
								{
									_0x6035e8fbca32ac5e();
									func_466(99);
									func_466(74);
									func_1374(13, 1);
									func_462(100);
									func_462(75);
									detach_entity(&(Local_941[13]), true, true);
									set_entity_coords(&(Local_941[13]), func_845(1, 5), true, false, true, true);
									Local_1235 = 12;
								}
							}
							Jump @876; //curOff = 844
							render_script_cams(false, false, 3000, true, false, 0);
							func_473(2);
							Local_1235 = 13;
							return true;
						}
						return false;
					}
				}
			}
			default:
				break;
	}
}

bool func_1403()
{
	if (is_task_move_network_active(Global_35))
	{
		set_task_move_network_signal_float(Global_35, "ArmPhase", fVar1258);
	}
	fVar0 = func_1898(17);
	if (iVar1233 == 16 || iVar1233 == 17)
	{
		if (does_cam_exist(&(iLocal_1009[2])))
		{
			func_1913(2, 9, 10, fVar1258);
		}
	}
	switch (iVar1233)
	{
		case 13:
			if (_get_anim_scene_time(&(Local_1371[13])) >= 2.23f)
			{
				Var1.f_6 = -1082130432;
				Var1.f_9 = -1082130432;
				Var1.f_30 = "ArmTransition";
				task_move_network_advanced_by_name_with_init_params(Global_35, func_497(100), &Var1, -907.96f, -749.18f, 58.1f, 0f, 0f, 0f, 2, 0, 0, 0, 128, 0);
				_0xdd1232b332cbb9e7(1, 1, 0);
				remove_anim_scene_entity(&(Local_1371[13]), "Candle", &(Local_941[16]));
				attach_entity_to_entity(&(Local_941[16]), Global_35, get_ped_bone_index(Global_35, 7966), func_1362(0), func_1362(0), false, false, false, false, 2, true, false, false);
				force_entity_ai_and_animation_update(&(Local_941[16]), true);
				Local_1235 = 14;
			}
			break;
		case 14:
			Local_1235 = 15;
			break;
		case 15:
			func_1378(2, 1056964608);
			func_1907(2, 9, 0f, 1, 1);
			render_script_cams(true, false, 3000, true, false, 0);
			func_1399(13);
			Local_1371[13]->f_1 = 0;
			func_456(97);
			Local_1235 = 16;
			break;
		case 16:
			if (_does_anim_scene_exist(&(Local_1371[13])))
			{
				if (_is_anim_scene_started(&(Local_1371[13]), false))
				{
					func_1399(13);
				}
			}
			func_1369(13);
			if (!func_10(iLocal_129))
			{
				iLocal_129 = func_1391(func_1300(10), func_1361(17), 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				func_1903(iLocal_129, func_1361(18));
				func_1392(iLocal_129, 10, 1, 1);
				func_1392(iLocal_129, 14, 1, 1);
				func_1392(iLocal_129, 11, 1, 1);
			}
			func_1914(&fVar0, &fLocal_1260, 0.5f, 1f, -0.197f);
			func_1370(func_1699(1f, 1.75f, fVar1252));
			if (fVar1258 >= 0.5f)
			{
				Local_1235 = 17;
			}
			break;
		case 17:
			func_1369(13);
			if (func_1915(iLocal_129, 1))
			{
				if (!func_10(iLocal_130))
				{
					iLocal_130 = func_1391(func_1300(11), func_1361(18), 13, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
					func_1903(iLocal_130, func_1361(17));
					func_1392(iLocal_130, 10, 1, 1);
					func_1392(iLocal_130, 14, 1, 1);
					func_1392(iLocal_130, 11, 1, 1);
				}
			}
			else if (func_10(iLocal_130))
			{
				func_11(&iLocal_130, 1, 1);
			}
			func_1917(&fLocal_1264, &fLocal_1260, (func_1916(iLocal_130, 1) && func_1915(iLocal_129, 1)), 1.1f, 1.1f, 1.169f, 0.235f, 0.958f, 0.383f, 0.5f);
			if (fVar1258 == 0.5f)
			{
				fLocal_1264 = 0.5f;
			}
			if (fVar1258 == 1f)
			{
				func_11(&iLocal_130, 1, 1);
				func_11(&iLocal_129, 1, 1);
				func_1907(2, 11, 1f, 0, 1);
				fLocal_1168 = 1f;
				func_27(vLocal_792[34], 0);
				func_456(99);
				fLocal_774 = 2f;
				func_456(14);
				detach_entity(&(Local_941[16]), true, true);
				shake_cam(&(iLocal_1009[2]), "MELEE_IMPACT_SHAKE", 4f);
				set_pad_shake(0, 1000, 128);
				_play_sound_from_entity(func_1438(5), &(Local_941[16]), func_1438(0), false, 0, 0);
				_0x6035e8fbca32ac5e();
				func_1374(13, 1);
				func_466(100);
				func_466(75);
				Local_1235 = 20;
				return true;
			}
			else if (!fVar0 > 0f && fVar1258 <= (0.5f + 0.05f))
			{
				func_11(&iLocal_130, 1, 1);
				Local_1235 = 16;
			}
			break;
		case 19:
			Local_1235 = 20;
			break;
		case 20:
			return true;
	}
	return false;
}

void func_1404()
{
	_set_ped_body_component(Global_35, 2072259397);
	_update_ped_variation(Global_35, false, true, true, true, false);
}

void func_1405(int iParam0, bool bParam1, int iParam2)
{
	if (is_entity_dead(&(Local_133[iParam0])))
	{
		return;
	}
	if (iParam0 >= 16 && iParam0 <= 53)
	{
		if (!does_blip_exist(Local_133[iParam0]->f_1))
		{
			Local_133[iParam0]->f_1 = get_blip_from_entity(&(Local_133[iParam0]));
		}
		if (bParam1)
		{
			if (!does_blip_exist(Local_133[iParam0]->f_1))
			{
				Local_133[iParam0]->f_1 = get_blip_from_entity(&(Local_133[iParam0]));
			}
			if (does_blip_exist(Local_133[iParam0]->f_1))
			{
				remove_blip(&(Local_133[iParam0]->f_1));
			}
			Local_133[iParam0]->f_1 = _blip_add_for_entity(831283580, &(Local_133[iParam0]));
			if (iParam2 == 1)
			{
				_blip_set_modifier(Local_133[iParam0]->f_1, -1034486097);
			}
			else if (iParam2 == 2)
			{
				_blip_set_modifier(Local_133[iParam0]->f_1, -662251075);
			}
			set_blip_name_from_text_file(Local_133[iParam0]->f_1, func_1300(15));
		}
		else if (does_blip_exist(Local_133[iParam0]->f_1))
		{
			remove_blip(&(Local_133[iParam0]->f_1));
		}
		return;
	}
}

void func_1406(vector3 vParam0)
{
	if (!Global_1935630->f_12)
	{
		func_1918(vParam0);
		func_1919(vParam0);
	}
}

void func_1407(var uParam0, int iParam1)
{
	vVar0 = { _0xf70f00013a62f866(*uParam0) };
	vVar3 = { _0x18675bc914891122(*uParam0) };
	vVar6 = { _0x3e2a25b2416dd67e(*uParam0) };
	_delete_volume(*uParam0);
	*uParam0 = _0x0eb78c2b156635b1(iParam1, vVar0, vVar3, vVar6);
}

void func_1408(int iParam0)
{
	Var0 = { func_1920(iParam0) };
	iLocal_1006[iParam0] = add_cover_point(Var0, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, false);
}

void func_1409()
{
	func_462(76);
	func_462(77);
	func_462(78);
	func_462(79);
	func_462(func_1323(20));
	func_462(func_1323(21));
	func_462(func_1323(22));
	func_462(func_1323(23));
	func_462(func_461(20));
	func_462(func_461(19));
	func_462(func_461(18));
	func_462(func_1323(54));
	func_462(func_1323(55));
}

bool func_1410()
{
	if (_does_anim_scene_exist(&(Local_1371[14])))
	{
		if (_0x8d81e7824b7753f7(&(Local_1371[14]), "s_search_enemy_discover", 1))
		{
			if (_0x005e6f28dd7ed58d(&(Local_1371[14]), "ARTHUR"))
			{
			}
		}
	}
	if (!iVar1263 == 7 && !iVar1263 == 8)
	{
		if (is_entity_dead(&(Local_133[32])))
		{
			bVar0 = true;
		}
		if (_0xb655db7582aec805(&(Local_133[32])))
		{
			bVar0 = true;
		}
		if (get_ped_config_flag(&(Local_133[32]), 11, true))
		{
			bVar0 = true;
		}
		vVar1 = { get_entity_coords(&(Local_133[32]), true, false) };
		if (vVar1.z < 40f)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (!is_entity_dead(&(Local_133[32])))
			{
				_set_entity_health(&(Local_133[32]), 0, Global_35);
			}
			set_player_control(player_id(), true, 0, false);
			_hide_hud_component(iLocal_131);
			func_943(32, 12);
			func_1921(7);
		}
	}
	switch (iVar1263)
	{
		case 0:
			if (Local_1371[14]->f_1 == 7)
			{
				_0x3946fc742ac305cd(player_id(), &(Local_133[32]), "BRT1_Blocker", -865.68f, -746.76f, 57.84f, 0, 0);
				func_456(11);
				func_1921(1);
			}
			break;
		case 1:
			if (_get_anim_scene_time(&(Local_1371[14])) >= 10f)
			{
				iLocal_129 = func_1391(func_1300(44), func_1361(19), 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				func_1905(iLocal_129, &(Local_133[32]), 0, 1, -1);
				func_1921(2);
			}
			break;
		case 2:
			if (func_10(iLocal_129))
			{
				_uiprompt_set_active_group_this_frame(_uiprompt_get_group_id_for_target_entity(&(Local_133[32])), func_1300(15), 1, 0, 0, 0);
				if (func_1908(iLocal_129, 1))
				{
					bVar4 = true;
				}
				if (((((is_control_just_pressed(0, func_1361(19)) || is_control_just_pressed(0, func_1361(24))) || is_control_just_pressed(0, func_1361(20))) || is_control_just_pressed(0, func_1361(21))) || is_control_just_pressed(0, func_1361(22))) || is_control_just_pressed(0, func_1361(23)))
				{
					bVar4 = true;
				}
				if (bVar4)
				{
					func_11(&iLocal_129, 1, 1);
					func_1921(3);
				}
				else if (_0x8d81e7824b7753f7(&(Local_1371[14]), "s_enemy_loop", 1))
				{
					if (func_10(iLocal_129))
					{
						func_11(&iLocal_129, 1, 1);
					}
					set_player_control(player_id(), true, 0, false);
					_set_anim_scene_playback_list_bool(&(Local_1371[14]), "pbl_enemy_turns_spots_arthur", true);
					func_1921(5);
				}
			}
			break;
		case 5:
			if (_0x005e6f28dd7ed58d(&(Local_1371[14]), "ODRISCOL"))
			{
				func_1922();
				set_player_control(player_id(), true, 0, false);
				task_combat_ped(&(Local_133[32]), Global_35, 1048576, 16);
				_0x2208438012482a1a(&(Local_133[32]), true, false);
				func_1921(6);
			}
			break;
		case 6:
			break;
		case 3:
			disable_control_action(0, -562475458, false);
			disable_control_action(0, 1963753488, false);
			if (_0x8d81e7824b7753f7(&(Local_1371[14]), "s_enemy_loop", 1))
			{
				if (func_1374(15, 1))
				{
					func_456(102);
					func_1922();
					func_1921(4);
				}
			}
			break;
		case 4:
			disable_control_action(0, -562475458, false);
			disable_control_action(0, 1963753488, false);
			if (_0x005e6f28dd7ed58d(&(Local_1371[15]), "ARTHUR"))
			{
				func_1921(7);
			}
			break;
		case 7:
			set_player_control(player_id(), true, 0, false);
			vVar5 = { get_entity_coords(Global_35, true, false) };
			get_ground_z_for_3d_coord(vVar5, &(vVar5.f_2), false);
			create_pickup(-794303221, vVar5, 0, 3, true, 0, 0, 0f, 0);
			func_697(-764310200, 3, 0, 0, 0);
			play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
			func_1921(8);
		case 8:
			if ((func_165(102) && _0xf94692eb9dc15d74(&(Local_1371[15]), 0)) || !func_165(102))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_1411(bool bParam0)
{
	iVar0 = 27;
	while (iVar0 <= 30)
	{
		func_462(func_461(iVar0));
		iVar0++;
	}
	if (bParam0)
	{
		return true;
	}
	iVar0 = 27;
	while (iVar0 <= 30)
	{
		if (!func_463(func_461(iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	iVar0 = 27;
	while (iVar0 <= 30)
	{
		if (!does_entity_exist(&(Local_941[iVar0])))
		{
			func_1350(iVar0);
		}
		iVar0++;
	}
	iVar0 = 27;
	while (iVar0 <= 30)
	{
		if (!does_entity_exist(&(Local_941[iVar0])))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1412(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_1413(int iParam0)
{
	if (!is_ped_injured(Global_35))
	{
		_0x6569f31a01b4c097(Global_35, 2, iParam0);
		_0x6569f31a01b4c097(Global_35, 3, iParam0);
	}
}

void func_1414(var uParam0)
{
	switch (iVar1268)
	{
		case 0:
			func_1923(33, 46, 0.1f, 0.1f, 1123024896, -1028390912, 1119092736);
			iLocal_1271 = 1;
			break;
		case 2:
			func_1923(33, 46, 8f, 1084227584, 1123024896, -1028390912, 1119092736);
			iLocal_1271 = 3;
			break;
		case 3:
			if (func_165(125))
			{
				iLocal_1271 = 4;
			}
			break;
		case 4:
			func_1923(33, 46, 24f, 12f, 1123024896, -1028390912, 1119092736);
			iLocal_1271 = 5;
			break;
		case 5:
			if (is_ped_on_mount(Global_35) && get_ped_desired_move_blend_ratio(get_mount(Global_35)) > 1.0011f)
			{
				iLocal_1271 = 8;
			}
			else if (_is_weapon_lantern(func_866(Global_35, 1, 0, 0)))
			{
				iLocal_1271 = 6;
			}
			break;
		case 6:
			func_1923(33, 46, 8f, 1084227584, 1123024896, -1028390912, 1119092736);
			iLocal_1271 = 7;
			break;
		case 7:
			if (!_is_weapon_lantern(func_866(Global_35, 1, 0, 0)))
			{
				if (func_165(125))
				{
					iLocal_1271 = 4;
				}
				else
				{
					iLocal_1271 = 2;
				}
			}
			break;
		case 8:
			func_1923(33, 46, 28f, 14f, 1123024896, -1028390912, 1119092736);
			iLocal_1271 = 9;
			break;
		case 9:
			if (!is_ped_on_mount(Global_35) || (is_ped_on_mount(Global_35) && get_ped_desired_move_blend_ratio(get_mount(Global_35)) <= 1.0011f))
			{
				iLocal_1271 = 4;
			}
			break;
	}
}

void func_1415(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1701(&(iParam0->f_1), 128);
	}
	else
	{
		func_465(&(iParam0->f_1), 128);
	}
}

void func_1416()
{
	if (((!does_entity_exist(&(Local_133[54])) || !does_entity_exist(&(Local_133[55]))) || is_entity_dead(&(Local_133[54]))) || is_entity_dead(&(Local_133[55])))
	{
		return;
	}
	switch (Local_133[54]->f_2)
	{
		case 1:
			iVar4 = 54;
			while (iVar4 <= 55)
			{
				vVar0 = { func_1449(iVar4, 0, 7) };
				set_entity_collision(&(Local_133[iVar4]), false, false);
				freeze_entity_position(&(Local_133[iVar4]), true);
				set_entity_invincible(&(Local_133[iVar4]), true);
				_set_entity_coords_and_heading(&(Local_133[iVar4]), vVar0, vVar0.f_3, true, false, true);
				iVar4++;
			}
			func_943(54, 15);
			break;
		case 15:
			if (func_165(118) || func_924(&(Local_133[54]), Global_35, 1, 1) < 4f)
			{
				func_943(54, 28);
			}
			break;
		case 28:
			iVar4 = 54;
			while (iVar4 <= 55)
			{
				vVar0 = { func_1449(iVar4, 1, 7) };
				freeze_entity_position(&(Local_133[iVar4]), false);
				set_entity_collision(&(Local_133[iVar4]), true, false);
				func_1355();
				task_fly_to_coord(0, 2f, vVar0, 1, 1);
				func_1356(&(Local_133[iVar4]), func_1395(iVar4 == 55, 0f, 1f));
				iVar4++;
			}
			func_943(54, 29);
			break;
		case 29:
			if (!func_1342(&(Local_133[54])))
			{
				if ((func_165(118) || func_924(&(Local_133[54]), Global_35, 1, 1) < 5f) || is_ped_on_mount(Global_35))
				{
					iVar4 = 54;
					while (iVar4 <= 55)
					{
						vVar0 = { func_1449(iVar4, 2, 7) };
						func_1355();
						task_fly_to_coord(0, 2f, vVar0, 1, 1);
						func_1356(&(Local_133[iVar4]), func_1395(iVar4 == 55, 0f, 1f));
						iVar4++;
					}
				}
			}
			break;
	}
}

void func_1417()
{
	if (Local_1371[16]->f_1 == 5 && Local_1371[17]->f_1 == 5)
	{
		if (!is_entity_playing_anim(&(Local_941[20]), "script_story@odr3@ig@ig16_collect_weapons_undetected", "ig16_collect_weapons_satchel", 1))
		{
			Var0 = { func_994(20) };
			set_entity_coords(&(Local_941[20]), Var0, true, false, true, true);
			set_entity_rotation(&(Local_941[20]), Var0.f_3, 2, true);
			set_entity_collision(&(Local_941[20]), false, false);
			freeze_entity_position(&(Local_941[20]), true);
			play_entity_anim(&(Local_941[20]), "ig16_collect_weapons_satchel", "script_story@odr3@ig@ig16_collect_weapons_undetected", 0.1f, true, false, false, 0f, 0);
		}
		if (is_entity_playing_anim(&(Local_941[20]), "script_story@odr3@ig@ig16_collect_weapons_undetected", "ig16_collect_weapons_satchel", 1))
		{
			_set_entity_anim_speed(&(Local_941[20]), "script_story@odr3@ig@ig16_collect_weapons_undetected", "ig16_collect_weapons_satchel", 0f);
		}
	}
}

bool func_1418(int iParam0, int iParam1)
{
	return ((iVar1172 + iParam1) % iParam0) == 0;
}

void func_1419(var uParam0, int iParam1)
{
	iVar0 = func_767(func_12(23));
	if (func_768(iVar0))
	{
		func_1924(iVar0, iParam1);
	}
}

void func_1420(var uParam0)
{
	func_1925(uParam0);
	if (func_165(121))
	{
		func_1926(33, 46);
	}
	else
	{
		func_1926(33, 38);
		if (!is_entity_in_volume(Global_35, Local_89.f_24, true, 0))
		{
			_set_weather_type(-702816767, true, true, true, 20f, false);
			_0xdd1232b332cbb9e7(1, 1, 0);
			_0xdd1232b332cbb9e7(4, 1, 0);
			func_145(uParam0, &(Local_133[39]), "ODR_PED1", 0);
			func_1313(60);
			if (func_165(124))
			{
				func_1359(65);
			}
			else
			{
				func_1359(66);
			}
			func_27(vLocal_792[44], 0);
			if (is_ped_on_mount(Global_35))
			{
				iLocal_1271 = 8;
			}
			else
			{
				iLocal_1271 = 4;
			}
			func_456(121);
		}
	}
	iVar6 = 33;
	iVar7 = 46;
	if (func_165(122))
	{
		if (!func_165(118))
		{
			if (func_1927(0))
			{
				func_456(118);
				vLocal_1303 = { get_entity_coords(Global_35, true, false) };
			}
			else
			{
				iVar8 = iVar6;
				while (iVar8 <= iVar7)
				{
					if (!is_entity_dead(&(Local_133[iVar8])))
					{
						if (func_1927(iVar8))
						{
							if (func_1928(iVar8))
							{
								if (!func_165(124))
								{
									func_456(124);
								}
							}
							if (Local_133[iVar8]->f_2 == 8 || Local_133[iVar8]->f_2 == 9)
							{
								func_176(129);
							}
							func_456(118);
							vLocal_1303 = { get_entity_coords(&(Local_133[iVar8]), true, false) };
						}
						else
						{
							iVar8++;
						}
						iVar8 = iVar6;
						while (iVar8 <= iVar7)
						{
							if (Local_133[iVar8]->f_2 == 12)
							{
								if (func_1871(iVar8, 8))
								{
									func_1929(iVar8, 8);
								}
							}
							else if (is_entity_dead(&(Local_133[iVar8])))
							{
								func_1930(iVar8);
								func_1872(iVar8, 8);
								func_943(iVar8, 12);
								set_entity_load_collision_flag(&(Local_133[iVar8]), 0);
								if (func_1931(iVar8))
								{
									iVar9 = func_1308(iVar8);
									if (!iVar9 == -1)
									{
										if (!is_entity_dead(&(Local_133[iVar9])))
										{
											if (iVar1322 >= 2)
											{
												func_1588(iVar9);
												func_1355();
												task_horse_action(0, 5, Global_35, 0);
												task_turn_ped_to_face_entity(0, Global_35, 0, -1082130432, -1082130432, -1082130432);
												_task_start_scenario_in_place(0, 696740378, -1, false, 0, -1f, false);
												func_1356(&(Local_133[iVar9]), 0);
												uLocal_1325 = iVar1322 + 1;
											}
											else
											{
												set_blocking_of_non_temporary_events(&(Local_133[iVar9]), false);
												set_ped_keep_task(&(Local_133[iVar9]), true);
												set_ped_as_no_longer_needed(Local_133[iVar9]);
												func_1355();
												task_horse_action(0, 5, Global_35, 0);
												task_smart_flee_ped(0, Global_35, -1f, -1, 0, 3f, 0);
												func_1356(&(Local_133[iVar9]), 0);
												func_943(iVar9, 0);
												set_ped_as_no_longer_needed(Local_133[iVar9]);
												uLocal_1325 = iVar1322 + 1;
											}
										}
									}
								}
							}
							else if (!func_165(121))
							{
								if (func_1932(iVar8) || func_1933(iVar8))
								{
								}
								else
								{
									if (func_165(122))
									{
										if ((func_165(118) && !iVar1303 == iVar8) && !func_1934(vLocal_1303, 20f))
										{
											_0x541b8576615c33de(Local_89.f_3, vLocal_1303);
											if (func_1871(iVar8, 32))
											{
												if (func_1935(Local_133[iVar8]->f_2))
												{
													func_1872(iVar8, 16384);
													func_943(iVar8, 6);
												}
											}
											else if (func_1936(Local_133[iVar8]->f_2))
											{
												func_27(vLocal_792[43], 1);
												func_943(iVar8, 40);
											}
										}
									}
									if (func_1937(Local_133[iVar8]->f_2))
									{
										iLocal_1300 = 0;
										if (func_1938(&(Local_133[iVar8]), 0, &iLocal_1272, &iLocal_1300, 0, 0))
										{
											if (iVar1297 == 128)
											{
												func_943(iVar8, 42);
											}
										}
									}
									if (func_1939(Local_133[iVar8]->f_2))
									{
										if (!func_1940(iVar8) == 0)
										{
											func_943(iVar8, 6);
										}
									}
									switch (Local_133[iVar8]->f_2)
									{
										case 1:
											if (iVar8 == 34)
											{
												func_1941(1);
											}
											func_1942(&iLocal_1272, &(Local_133[iVar8]));
											if (func_1931(iVar8))
											{
												func_1872(iVar8, 16);
												_set_ped_on_mount(&(Local_133[iVar8]), &(Local_133[func_1308(iVar8)]), -1, true);
											}
											if (func_1928(iVar8) || func_1943(iVar8))
											{
												func_1872(iVar8, 32);
												set_ped_config_flag(&(Local_133[iVar8]), 138, true);
											}
											set_ped_config_flag(&(Local_133[iVar8]), 21, true);
											set_ped_config_flag(&(Local_133[iVar8]), 137, false);
											func_1879(iVar8, 0);
											set_entity_load_collision_flag(&(Local_133[iVar8]), 1);
											remove_all_ped_weapons(&(Local_133[iVar8]), true, true);
											_0x18ff3110cf47115d(&(Local_133[iVar8]), 7, 0);
											func_943(iVar8, 2);
											break;
										case 2:
											if (func_1944(iVar8, 1))
											{
												func_943(iVar8, 3);
											}
											break;
										case 3:
											if (func_1944(iVar8, 0))
											{
												if (func_1932(iVar8) || func_1933(iVar8))
												{
													func_943(iVar8, 30);
												}
												else
												{
													func_943(iVar8, 16);
												}
											}
											break;
										case 16:
											task_stand_still(&(Local_133[iVar8]), -1);
											func_943(iVar8, 17);
											break;
										case 17:
											break;
										case 30:
											func_1405(iVar8, 1, 2);
											func_1945(iVar8);
											func_943(iVar8, 31);
											break;
										case 31:
											set_ped_reset_flag(&(Local_133[iVar8]), 301, true);
											if (iVar8 == 34)
											{
												if (!func_1342(&(Local_133[iVar8])))
												{
													if (func_165(105))
													{
														func_176(105);
													}
													else
													{
														func_456(105);
													}
													func_943(iVar8, 30);
												}
											}
											else if (iVar8 == 42)
											{
												if (!func_165(126))
												{
													if (func_1442())
													{
														if (!get_safe_coord_for_ped(_0xf70f00013a62f866(Local_89.f_2), false, &vVar3, 12))
														{
															vVar3 = { _0xf70f00013a62f866(Local_89.f_2) };
														}
														func_1355();
														task_follow_nav_mesh_to_coord(0, vVar3, 2.5f, 20000, 0.25f, 0, 40000f);
														task_wander_in_volume(0, Local_89.f_2, 1077936128, 1086324736, 0);
														func_1356(&(Local_133[iVar8]), 0);
														func_456(126);
													}
												}
											}
											break;
										case 42:
											iVar10 = _0x796eecff0c6d39be(&(Local_133[iVar8]), 0, 0);
											if (((iVar10 == 178452260 || iVar10 == 869302489) || iVar10 == -196899787) || iVar10 == 1589923363)
											{
												iVar11 = _0x822a001bcea5bd81(&(Local_133[iVar8]), iVar10, 0, 0);
											}
											if (iVar8 == 34)
											{
												func_1941(0);
											}
											if (func_866(&(Local_133[iVar8]), 1, 0, 0) == -164645981)
											{
												_0xcef4c65de502d367(&(Local_133[iVar8]), 0, 0, 1, 0);
											}
											else if (func_866(&(Local_133[iVar8]), 1, 1, 0) == -164645981)
											{
												_0xcef4c65de502d367(&(Local_133[iVar8]), 0, 1, 1, 0);
											}
											func_1947(iVar8, func_1946(get_ped_index_from_entity_index(iVar11)));
											if (!func_165(114) && !func_165(130))
											{
												iVar12 = get_random_int_in_range(0, 1);
												if (iVar12 == 0)
												{
													func_145(uParam0, &(Local_133[iVar8]), "ODR_PED1", 0);
													func_1313(48);
												}
												else if (iVar12 == 1)
												{
													func_145(uParam0, &(Local_133[iVar8]), "ODR_PED8", 0);
													func_1313(55);
												}
												func_456(114);
											}
											func_943(iVar8, 43);
											break;
										case 43:
											_0x437c08db4febe2bd(&(Local_133[iVar8]), "cautious", 1f, 1);
											break;
										case 6:
											func_1948(&(Local_133[iVar8]), 1114636288, 1084227584, 1123024896, -1028390912, 1119092736);
											func_1405(iVar8, 1, 1);
											if (func_1328(func_1300(60)) || func_1301(func_1300(60)))
											{
												func_1302(func_1300(60), 0, 0);
											}
											_0x802092b07e3b1eea(&(Local_133[iVar8]), get_entity_coords(Global_35, true, false), 3);
											if (iVar8 == 34)
											{
												func_1941(0);
											}
											if (!func_165(116))
											{
												if (func_1949())
												{
													func_145(uParam0, &(Local_133[iVar8]), "ODR_PED1", 0);
													if (func_165(125))
													{
														func_1330(&(uParam0->f_5310), func_1329(49), 0, -1, 0, 0);
														func_1950(iVar8, 7f);
													}
													else
													{
														func_1330(&(uParam0->f_5310), func_1329(48), 0, -1, 0, 0);
														func_1950(iVar8, 7f);
													}
												}
												else
												{
													func_145(uParam0, &(Local_133[iVar8]), "ODR_PED3", 0);
													if (func_165(125))
													{
														func_1330(&(uParam0->f_5310), func_1329(51), 0, -1, 0, 0);
														func_1950(iVar8, 7f);
													}
													else
													{
														func_1330(&(uParam0->f_5310), func_1329(50), 0, -1, 0, 0);
														func_1950(iVar8, 7f);
													}
												}
												func_27(vLocal_792[39], 0);
												func_456(116);
											}
											else if (func_934(vLocal_792[39]) >= 5f)
											{
												if (!func_165(133))
												{
													func_145(uParam0, &(Local_133[iVar8]), "ODR_PED1", 0);
													func_1330(&(uParam0->f_5310), func_1329(52), 0, -1, 0, 0);
													func_1950(iVar8, 7f);
													func_456(133);
												}
												else if (!func_165(134))
												{
													func_145(uParam0, &(Local_133[iVar8]), "ODR_PED2", 0);
													func_1330(&(uParam0->f_5310), func_1329(53), 0, -1, 0, 0);
													func_1950(iVar8, 7f);
													func_456(134);
												}
												else if (!func_165(135))
												{
													func_145(uParam0, &(Local_133[iVar8]), "ODR_PED3", 0);
													func_1330(&(uParam0->f_5310), func_1329(54), 0, -1, 0, 0);
													func_1950(iVar8, 7f);
													func_456(135);
												}
												else if (!func_165(136))
												{
													func_145(uParam0, &(Local_133[iVar8]), "ODR_PED8", 0);
													func_1330(&(uParam0->f_5310), func_1329(55), 0, -1, 0, 0);
													func_1950(iVar8, 7f);
													func_456(136);
												}
												func_244(vLocal_792[39]);
											}
											if (func_866(&(Local_133[iVar8]), 1, 0, 0) == &iLocal_781[3])
											{
												_0xcef4c65de502d367(&(Local_133[iVar8]), 0, 0, 1, 0);
											}
											func_943(iVar8, 7);
											break;
										case 7:
											func_943(iVar8, 8);
											break;
										case 40:
											if (func_1933(iVar8))
											{
												task_aim_at_coord(&(Local_133[iVar8]), vLocal_1303, -1, 0, 0);
												func_943(iVar8, 41);
											}
											else if (!get_safe_coord_for_ped(vLocal_1303 + Vector(0f, get_random_float_in_range(-20f, 20f), get_random_float_in_range(-20f, 20f)), false, &vVar0, 12))
											{
											}
											else
											{
												if (!func_165(139))
												{
													func_1359(68);
													func_456(139);
												}
												func_456(139);
												func_1355();
												task_follow_nav_mesh_to_coord(0, vVar0, func_1395(is_ped_on_mount(&(Local_133[iVar8])), 2.001f, 3f), 20000, 0.25f, 0, 40000f);
												task_wander_in_volume(0, Local_89.f_3, 1077936128, 1086324736, 0);
												func_1356(&(Local_133[iVar8]), 0);
												if (!func_26(vLocal_792[38]) || func_934(vLocal_792[38]) >= 10f)
												{
													if (!func_165(130))
													{
														func_145(uParam0, &(Local_133[iVar8]), "ODR_PED1", 0);
														func_1313(61);
														func_27(vLocal_792[38], 1);
													}
												}
												func_943(iVar8, 41);
												Jump @3193; //curOff = 2825
												if (!func_1933(iVar8))
												{
													if ((func_1342(&(Local_133[iVar8])) && get_sequence_progress(&(Local_133[iVar8])) == 1) && !func_1871(iVar8, 64))
													{
														if (iVar1117 == 0)
														{
															func_145(uParam0, &(Local_133[iVar8]), "ODR_PED1", 0);
														}
														func_1872(iVar8, 64);
													}
												}
												_0x437c08db4febe2bd(&(Local_133[iVar8]), "cautious", 1f, 1);
												if (func_26(vLocal_792[43]))
												{
													if (func_934(vLocal_792[43]) >= 60f)
													{
														func_176(139);
														func_592(vLocal_792[43]);
														func_943(iVar8, 30);
													}
												}
												Jump @3193; //curOff = 2989
												func_27(vLocal_792[37], 0);
												task_combat_ped(&(Local_133[iVar8]), Global_35, 16384, 16);
												func_943(iVar8, 9);
												Jump @3193; //curOff = 3030
												_task_smart_flee_style_ped(&(Local_133[iVar8]), Global_35, 3, 0, -1082130432, -1, 0);
												func_943(iVar8, 11);
												Jump @3193; //curOff = 3063
												if (func_1418(30, (9 + iVar8)))
												{
													if (!is_sphere_visible(get_entity_coords(&(Local_133[iVar8]), true, false), 1f))
													{
														if (is_ped_on_mount(&(Local_133[iVar8])))
														{
															_remove_ped_from_mount(&(Local_133[iVar8]), true, false);
														}
														_set_entity_health(&(Local_133[iVar8]), 0, 0);
														if (func_1931(iVar8))
														{
															if (!is_entity_dead(&(Local_133[func_1308(iVar8)])))
															{
																_task_smart_flee_style_ped(&(Local_133[func_1308(iVar8)]), Global_35, 3, 0, -1082130432, -1, 0);
															}
														}
													}
												}
											}
											iVar8++;
											func_176(118);
											default:
												break;
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

void func_1421(var uParam0)
{
	if (iVar1265 == 6)
	{
		return;
	}
	if (!func_165(117))
	{
		return;
	}
	set_ped_reset_flag(Global_35, 108, true);
	func_1369(16);
	func_1369(17);
	switch (iVar1265)
	{
		case 0:
			iLocal_1268 = 1;
		case 1:
			vVar0 = { get_entity_velocity(Global_35, -1) };
			fVar3 = vmag2(vVar0);
			if ((is_entity_in_volume(Global_35, Local_89.f_11, true, 0) && get_ped_desired_move_blend_ratio(Global_35) <= 1.1f) && fVar3 < 1.8f)
			{
				if (!func_10(iLocal_129))
				{
					iLocal_129 = func_1391(func_1300(12), func_1361(25), 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
					func_1392(iLocal_129, 10, 1, 1);
					func_1392(iLocal_129, 11, 1, 1);
					func_1905(iLocal_129, &(Local_941[18]), 0, 1, -1);
				}
				else
				{
					_uiprompt_set_active_group_this_frame(_uiprompt_get_group_id_for_target_entity(&(Local_941[18])), func_1300(14), 1, 0, 0, 0);
					if (func_1951(iLocal_129, 1))
					{
						func_11(&iLocal_129, 1, 1);
						iLocal_1268 = 2;
					}
				}
			}
			else if (func_10(iLocal_129))
			{
				func_11(&iLocal_129, 1, 1);
			}
			break;
		case 2:
			set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			task_swap_weapon(Global_35, 1, 1, 0, 0);
			if (func_1436(-1082130432, -1, -1) > 0)
			{
				iLocal_1487 = 17;
				func_1374(iVar1484, 1);
			}
			else
			{
				iLocal_1487 = 16;
				func_1374(iVar1484, 1);
			}
			_get_anim_scene_entity_matrix(&(Local_1371[iVar1484]), "ARTHUR", &uVar4, false, 0, 2);
			set_player_control(player_id(), false, 6400, true);
			if (does_blip_exist(&(iLocal_775[1])))
			{
				func_1952(iLocal_775[1]);
			}
			_0x140b3cb1d424a945(Global_35, iVar1266);
			task_enter_anim_scene(Global_35, &(Local_1371[iVar1484]), "ARTHUR", func_1896(iVar1484, 0), 1f, 1, 0, 20000, -1082130432);
			_0x2208438012482a1a(Global_35, true, false);
			iLocal_1268 = 3;
		case 3:
			if (_is_anim_scene_started(&(Local_1371[iVar1484]), false))
			{
				iLocal_1268 = 4;
			}
			break;
		case 4:
			if (_does_anim_scene_exist(&(Local_1371[iVar1484])))
			{
				if (_0x005e6f28dd7ed58d(&(Local_1371[iVar1484]), "ARTHUR"))
				{
					iLocal_1266 = get_ammo_in_ped_weapon(Global_35, -764310200);
					func_201(0);
					if (iVar1263 > 0)
					{
						func_1317(Global_35, -764310200, iVar1263, 0, 0, 1056964608, 1065353216, 0);
					}
					remove_anim_scene_entity(&(Local_1371[iVar1484]), "SATCHEL", &(Local_941[20]));
					func_471(uParam0, 20, 1);
					func_939();
					remove_anim_scene_entity(&(Local_1371[iVar1484]), "CARBINE", &(Local_941[21]));
					func_471(uParam0, 21, 0);
					func_1317(Global_35, iVar1266, -1, 1, 0, 1056964608, 1065353216, 0);
					remove_anim_scene_entity(&(Local_1371[iVar1484]), "Cattleman", &(Local_941[22]));
					func_471(uParam0, 22, 0);
					func_1317(Global_35, Local_1269.f_1, -1, 0, 0, 1056964608, 1065353216, 0);
					func_27(vLocal_792[42], 0);
					func_1419(uParam0, 90520578);
					vVar16 = { func_1920(1) };
					task_put_ped_directly_into_cover(Global_35, vVar16, floor((1f * 1000f)), 0, 0f, 0, 0, &(iLocal_1006[1]), 0, 0, 0);
					_0x2208438012482a1a(Global_35, true, false);
					func_456(125);
					_0x95ee1dee1dcd9070(player_id(), 1);
					iLocal_1268 = 5;
				}
				else if (iVar1484 == 17)
				{
					func_1953();
				}
			}
			break;
		case 5:
			if (func_934(vLocal_792[42]) >= 1f)
			{
				if (_is_anim_scene_finished(&(Local_1371[iVar1484]), false) && _0xf94692eb9dc15d74(&(Local_1371[iVar1484]), 0))
				{
					_0x1a7a802b2301edc0(Global_35);
					set_player_control(player_id(), true, 0, false);
					func_1399(16);
					func_1399(17);
					func_592(vLocal_792[42]);
					iLocal_1268 = 6;
				}
			}
			break;
	}
}

void func_1422()
{
	switch (Local_1307[iVar1322]->f_6)
	{
		case 0:
			Local_1307[iVar1322]->f_6 = 1;
			break;
		case 1:
			if (is_entity_in_volume(Global_35, Local_89.f_8, true, 0))
			{
				iLocal_1324 = 0;
				Local_1307[iVar1322]->f_6 = 2;
			}
			else if (is_entity_in_volume(Global_35, Local_89.f_9, true, 0))
			{
				iLocal_1324 = 1;
				Local_1307[iVar1322]->f_6 = 2;
			}
			break;
		case 2:
			iVar0 = 19;
			while (iVar0 <= 23)
			{
				func_462(iVar0);
				iVar0++;
			}
			bVar1 = true;
			iVar0 = 19;
			while (iVar0 <= 23)
			{
				if (!func_463(iVar0))
				{
					bVar1 = false;
				}
				iVar0++;
			}
			if (bVar1)
			{
				if (func_1954(&(Local_1307[iVar1322])))
				{
					Local_1307[iVar1322]->f_6 = 4;
				}
			}
			break;
		case 4:
			Local_1307[iVar1322]->f_7 = _create_mission_train(&(Local_1307[iVar1322]), Local_1307[iVar1322]->f_1, Local_1307[iVar1322]->f_4, true, true, true);
			Local_1307[iVar1322]->f_6 = 5;
			break;
		case 5:
			if (_0xbd3c4a2ed509205e(Local_1307[iVar1322]->f_7))
			{
				iLocal_775[3] = _blip_add_for_entity(-399496385, Local_1307[iVar1322]->f_7);
				_0x4182c037aa1f0091(Local_1307[iVar1322]->f_7, 0);
				set_vehicle_is_considered_by_player(Local_1307[iVar1322]->f_7, false);
				Local_1307[iVar1322]->f_6 = 6;
			}
			break;
		case 6:
			if (func_1418(90, 95))
			{
				if (func_924(Global_35, Local_1307[iVar1322]->f_7, 1, 1) >= 500f)
				{
					Local_1307[iVar1322]->f_6 = 7;
				}
			}
			break;
		case 7:
			if (does_blip_exist(&(iLocal_775[3])))
			{
				remove_blip(iLocal_775[3]);
			}
			if (does_entity_exist(Local_1307[iVar1322]->f_7))
			{
				delete_mission_train(&(Local_1307[iVar1322]->f_7));
			}
			iVar0 = 19;
			while (iVar0 <= 23)
			{
				func_466(iVar0);
				iVar0++;
			}
			func_186(&(Local_1307[iVar1322]));
			Local_1307[iVar1322]->f_6 = 8;
			break;
	}
}

int func_1423(int iParam0, int iParam1, int iParam2)
{
	iVar1 = iParam0;
	while (iVar1 <= iParam1)
	{
		if (Local_133[iVar1]->f_2 == iParam2)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1424(int iParam0, int iParam1)
{
	return (iParam1 - iParam0) + 1;
}

void func_1425(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_1426(int iParam0, float fParam1)
{
	Var0 = { func_1379(iParam0) };
	iLocal_1009[iParam0] = create_camera_with_params(26379945, Var0, Var0.f_3, Var0.f_6, false, 2);
	if (fParam1 > 0f && fParam1 < 1f)
	{
		shake_cam(&(iLocal_1009[iParam0]), "HAND_SHAKE", fParam1);
	}
}

void func_1427(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < iVar1005)
	{
		if (does_cam_exist(&(iLocal_1009[iVar0])))
		{
			set_cam_active(&(iLocal_1009[iVar0]), false);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (does_cam_exist(&(iLocal_1009[iParam0])))
		{
			set_cam_active(&(iLocal_1009[iParam0]), true);
		}
	}
}

void func_1428(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5)
{
	task_play_anim(iParam0, func_494(iParam1, 1), func_494(iParam1, 0), fParam2, fParam3, iParam4, iParam5, 0f, false, 0, false, 0, false);
}

bool func_1429(int iParam0, int iParam1)
{
	return is_entity_playing_anim(iParam0, func_494(iParam1, 1), func_494(iParam1, 0), 1);
}

float func_1430(int iParam0, int iParam1)
{
	return _get_entity_anim_current_time(iParam0, func_494(iParam1, 1), func_494(iParam1, 0));
}

bool func_1431(var uParam0)
{
	if (!func_165(119))
	{
		func_288(uParam0, 1);
		if (func_447(uParam0, 1, -850.948f, -727.9256f, 59.236f, -19.96f, 1, 1, 1))
		{
			Local_133[1] = func_283(uParam0);
			if (does_entity_exist(&(Local_133[1])) && !is_entity_dead(&(Local_133[1])))
			{
				if (func_1955(7))
				{
					func_192(7);
				}
				func_189(7, 64);
				func_482(7, 32);
				func_943(1, 1);
				func_103(uParam0, 1);
				func_1588(1);
				set_blocking_of_non_temporary_events(&(Local_133[1]), true);
				_task_use_nearest_scenario_to_coord(&(Local_133[1]), -851.3f, -727.8f, 58.4f, 2f, -1, false, false, false, false);
				func_1315(uParam0, 6);
				func_456(119);
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_1432()
{
	if (func_165(117))
	{
		return true;
	}
	if (does_entity_exist(&(Local_941[21])) && does_entity_exist(&(Local_941[22])))
	{
		return true;
	}
	bVar0 = true;
	if (Local_1269.f_1 == 0)
	{
		Local_1269.f_1 = func_1956(268435456, 1056964608, 1065353216);
	}
	if (!Local_1269.f_1 == 0)
	{
		func_462(90);
		if (!func_463(90))
		{
			bVar0 = false;
		}
	}
	if (iVar1267 == 0)
	{
		Local_1269 = func_1957(0, 1056964608, 1065353216);
	}
	if (!iVar1267 == 0)
	{
		func_462(89);
		if (!func_463(89))
		{
			bVar0 = false;
		}
	}
	if (!bVar0)
	{
		return false;
	}
	if (!get_max_ammo(Global_35, &iVar1, iVar1267))
	{
		iVar1 = 32;
	}
	if (!get_max_ammo(Global_35, &iVar2, Local_1269.f_1))
	{
		iVar2 = 32;
	}
	Local_941[21] = _create_weapon_object(iVar1267, iVar1, func_1362(8), true, 1f);
	if (does_entity_exist(&(Local_941[21])))
	{
		set_entity_rotation(&(Local_941[21]), func_1362(9), 2, true);
		freeze_entity_position(&(Local_941[21]), true);
	}
	Local_941[22] = _create_weapon_object(Local_1269.f_1, iVar2, func_1362(10), true, 1f);
	if (does_entity_exist(&(Local_941[22])))
	{
		set_entity_rotation(&(Local_941[22]), func_1362(11), 2, true);
		freeze_entity_position(&(Local_941[22]), true);
	}
	if (!does_entity_exist(&(Local_941[20])))
	{
		func_1350(20);
	}
	func_456(117);
	return true;
}

void func_1433(int iParam0, int iParam1, float fParam2)
{
	_set_entity_anim_speed(iParam0, func_494(iParam1, 1), func_494(iParam1, 0), fParam2);
}

void func_1434()
{
	iLocal_775[1] = _blip_add_for_coord(1664425300, get_entity_coords(&(Local_941[21]), true, false));
	set_blip_name_from_text_file(&(iLocal_775[1]), func_1300(14));
}

int func_1435(int iParam0, vector3 vParam1, bool bParam4)
{
	iVar0 = _blip_add_for_coord(iParam0, vParam1);
	if (bParam4)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

int func_1436(float fParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iVar2 = 0;
	}
	if (iParam2 == -1)
	{
		iVar3 = 55;
	}
	iVar1 = iVar2;
	while (iVar1 <= iVar3)
	{
		if (Local_133[iVar1]->f_2 == 9 || Local_133[iVar1]->f_2 == 8)
		{
			if (!fParam0 == -1f)
			{
				if (does_entity_exist(&(Local_133[iVar1])))
				{
					if (func_924(Global_35, &(Local_133[iVar1]), 1, 1) <= fParam0)
					{
						iVar0++;
					}
				}
			}
			else
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_1437(int iParam0, int iParam1)
{
	fVar0 = 999999.9f;
	iVar2 = iParam0;
	while (iVar2 <= iParam1)
	{
		if (does_entity_exist(&(Local_133[iVar2])) && !is_entity_dead(&(Local_133[iVar2])))
		{
			fVar1 = func_924(Global_35, &(Local_133[iVar2]), 1, 1);
			if (fVar1 < fVar0)
			{
				fVar0 = fVar1;
			}
		}
		iVar2++;
	}
	return fVar0;
}

char* func_1438(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ODR3_Sounds";
		case 3:
			return "Gooey";
		case 1:
			return "Incision";
		case 2:
			return "PeelBack";
		case 4:
			return "Tear";
		case 5:
			return "GunPowder_Ignite";
		case 6:
			return "script@Story@DST3@return_to_camp";
		case 7:
			return "lon_mule_int_02";
	}
	return "";
}

struct<4> func_1439(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 442.8f, -186.5f, 137.5f };
			Var0.f_3 = 66.7f;
			break;
		case 1:
			Var0 = { 702.3f, -526.4f, 70.6f };
			Var0.f_3 = 144.8f;
			break;
		case 2:
			Var0 = { 685.7f, -1194.7f, 46.8f };
			Var0.f_3 = -174f;
			break;
		default:
			break;
	}
	return Var0;
}

int func_1440(int iParam0)
{
	iVar0 = 1;
	fVar1 = _get_ped_face_feature(iParam0, 41611);
	if (fVar1 == 1f)
	{
		iVar0 = 2;
	}
	return iVar0;
}

float func_1441(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_1442()
{
	if (!Local_1307[iVar1322]->f_6 == 6)
	{
		return false;
	}
	if (is_entity_dead(Local_1307[iVar1322]->f_7))
	{
		return false;
	}
	iVar0 = _0x635423d55ca84fc8(&(Local_1307[iVar1322]));
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = get_train_carriage(Local_1307[iVar1322]->f_7, iVar2);
		if (is_ped_on_specific_vehicle(Global_35, iVar1))
		{
			return true;
		}
		iVar2++;
	}
	return false;
}

bool func_1443(var uParam0)
{
	switch (iVar1324)
	{
		case 0:
			func_58(uParam0, 1);
			Local_133[1] = 0;
			iLocal_1327 = 1;
			break;
		case 1:
			if (!does_entity_exist(&(Local_133[1])))
			{
				func_288(uParam0, 1);
				if (!func_447(uParam0, 1, -1207.97f, -716.3637f, 72.3763f, 49.43f, 1, 1, 1))
				{
					return false;
				}
				else
				{
					Local_133[1] = func_283(uParam0);
					func_103(uParam0, 1);
				}
			}
			Local_1123[0]->f_4 = -1f;
			Local_1123[0]->f_5 = 1f;
			Local_1123[1]->f_4 = -1f;
			Local_1123[1]->f_5 = 1f;
			func_176(15);
			Local_1340 = 1f;
			iLocal_1327 = 2;
			break;
		case 2:
			if (!does_entity_exist(&(Local_941[18])))
			{
				func_1350(18);
			}
			clear_ped_tasks_immediately(Global_35, false, true);
			set_entity_coords(Global_35, -1211.4f, -710.5f, 72.7f, true, false, true, true);
			vVar0 = { func_1449(1, 1, 7) };
			set_entity_visible(&(Local_941[18]), false);
			freeze_entity_position(&(Local_941[18]), true);
			set_entity_collision(&(Local_941[18]), false, false);
			set_entity_coords(&(Local_941[18]), func_1362(6), true, false, true, true);
			set_entity_rotation(&(Local_941[18]), func_1362(7), 2, true);
			_set_entity_coords_and_heading(&(Local_133[1]), vVar0, vVar0.f_3, true, false, true);
			_0x9587913b9e772d29(&(Local_133[1]), 0);
			_set_weather_type(-173507739, true, true, false, 0f, false);
			set_clock_time(23, 10, 0);
			_hide_hud_component(iLocal_131);
			set_player_control(player_id(), false, 256, false);
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
			func_27(vLocal_792[0], 1);
			iLocal_1327 = 3;
			break;
		case 3:
			if (!func_934(vLocal_792[0]) >= 2f)
			{
			}
			else
			{
				vVar0 = { func_1449(1, 2, 7) };
				func_1355();
				task_go_straight_to_coord(0, vVar0, 1f, 20000, 40000f, 1056964608, 0);
				task_stand_still(0, -1);
				func_1356(&(Local_133[1]), 0);
				if (func_1440(&(Local_133[1])) == 1)
				{
					func_1313(62);
				}
				else
				{
					func_1313(63);
				}
				_0xdd1232b332cbb9e7(3, 1, 0);
				task_look_at_entity(&(Local_133[1]), Global_35, floor((4.5f * 1000f)), 48, 41, 0);
				_0x2208438012482a1a(&(Local_133[1]), false, false);
				force_ped_motion_state(&(Local_133[1]), -668482597, false, 0, false);
				_0x90da5ba5c2635416();
				func_1378(4, 0f);
				shake_cam(&(iLocal_1009[4]), func_1958(cLocal_1166), 0.5f);
				do_screen_fade_in(3000);
				func_27(vLocal_792[0], 1);
				set_entity_coords(&(Local_941[18]), vLocal_1328, true, false, true, true);
				set_entity_rotation(&(Local_941[18]), vLocal_1331, 2, true);
				set_cam_coord(&(iLocal_1009[4]), get_entity_coords(&(Local_941[18]), true, false));
				iLocal_1327 = 4;
				Jump @870; //curOff = 747
				func_1959();
				if (func_934(vLocal_792[0]) >= 4.5f)
				{
					do_screen_fade_out(3000);
					iLocal_1327 = 5;
				}
				Jump @870; //curOff = 784
				func_1959();
				if (is_screen_faded_out())
				{
					set_player_control(player_id(), true, 0, false);
					detach_entity(Global_35, true, true);
					_display_hud_component(iLocal_131);
					_set_ped_on_mount(Global_35, &(Local_133[1]), -1, true);
					Local_133[4] = &Local_133[1];
					func_182();
					iLocal_1327 = 6;
					return true;
				}
				Jump @870; //curOff = 860
				return true;
			}
			return false;
			default:
				break;
	}
}

void func_1444(var uParam0, char[4] cParam1)
{
	func_1365(&(uParam0->f_7375), cParam1, func_162(uParam0, func_33(uParam0)) != 5);
}

void func_1445(var uParam0, char[4] cParam1)
{
	func_1366(&(uParam0->f_7375), cParam1);
	func_401(uParam0, 33554432);
}

bool func_1446()
{
	func_1246(131072);
	return func_1465(Global_35, &(Global_1946804->f_1735));
}

bool func_1447()
{
	return func_1960(Global_35, &(Global_1946804->f_1735));
}

void func_1448()
{
	switch (iVar1486)
	{
		case 0:
			if (func_1961(98, 1))
			{
				iLocal_1488 = 1;
			}
			break;
		case 1:
			func_210(1);
			iLocal_1488 = 2;
			break;
	}
}

struct<4> func_1449(int iParam0, int iParam1, int iParam2)
{
	Var0 = { Var0 };
	switch (iParam0)
	{
		case 1:
			if (iParam2 == 7)
			{
				if (iParam1 == 1)
				{
					Var0 = { -1207.97f, -716.3637f, 72.3763f };
					Var0.f_3 = 49.43f;
					return Var0;
				}
				else if (iParam1 == 2)
				{
					Var0 = { -1209.429f, -714.3657f, 72.963f };
					return Var0;
				}
			}
			break;
		case 39:
		case 49:
			if (iParam1 == 0)
			{
				Var0 = { -1082.241f, -689.3392f, 71.9217f };
				Var0.f_3 = -104.79f;
				return Var0;
			}
			else if (iParam1 == 3)
			{
				Var0 = { -1040.922f, -687.5663f, 69.6824f };
				Var0.f_3 = 219f;
				return Var0;
			}
			else if (iParam1 == 4)
			{
				Var0 = { -998.1f, -722.7f, 62.9f };
				Var0.f_3 = 219f;
				return Var0;
			}
			else if (iParam1 == 5)
			{
				Var0 = { -937.8821f, -757.4938f, 58.7402f };
				Var0.f_3 = 250f;
				return Var0;
			}
			else if (iParam1 == 6)
			{
				Var0 = { -844.3f, -790.5f, 53f };
				Var0.f_3 = 250f;
				return Var0;
			}
			else if (iParam1 == 7)
			{
				Var0 = { -1056.3f, -619.9f, 76.6f };
				Var0.f_3 = 12.4f;
				return Var0;
			}
			break;
		case 40:
		case 50:
			if (iParam1 == 0)
			{
				Var0 = { -729.3f, -632.8f, 41.9f };
				Var0.f_3 = 120f;
				return Var0;
			}
			else if (iParam1 == 3)
			{
				Var0 = { -779.8f, -668.7f, 52.6f };
				Var0.f_3 = 0f;
				return Var0;
			}
			else if (iParam1 == 4)
			{
				Var0 = { -726.7f, -736.4f, 49.5f };
				Var0.f_3 = 0f;
				return Var0;
			}
			else if (iParam1 == 5)
			{
				Var0 = { -783.7f, -809.1f, 50.6f };
				Var0.f_3 = 0f;
				return Var0;
			}
			else if (iParam1 == 6)
			{
				Var0 = { -859.7f, -782.7f, 53.9f };
				Var0.f_3 = 0f;
				return Var0;
			}
			break;
		case 41:
		case 51:
			if (iParam1 == 0)
			{
				Var0 = { -789.6f, -536.2f, 48.7f };
				Var0.f_3 = 150.9f;
				return Var0;
			}
			else if (iParam1 == 3)
			{
				Var0 = { -836.4f, -591.2f, 57.2f };
				Var0.f_3 = -158.3f;
				return Var0;
			}
			else if (iParam1 == 4)
			{
				Var0 = { -789.8f, -652.2f, 55.5f };
				Var0.f_3 = -152.3f;
				return Var0;
			}
			else if (iParam1 == 5)
			{
				Var0 = { -736.6f, -713.4f, 52f };
				Var0.f_3 = -133.3f;
				return Var0;
			}
			else if (iParam1 == 6)
			{
				Var0 = { -728f, -738.3f, 49.1f };
				Var0.f_3 = 30.5f;
				return Var0;
			}
			break;
		case 42:
			if (iParam1 == 0)
			{
				Var0 = { -1058.287f, -614.0875f, 77.3709f };
				Var0.f_3 = -114.39f;
				return Var0;
			}
			else if (iParam1 == 3)
			{
				Var0 = { -1003.7f, -636.7f, 74.1f };
				Var0.f_3 = -107.15f;
				return Var0;
			}
			else if (iParam1 == 4)
			{
				Var0 = { -961.3f, -640.5f, 73.5f };
				Var0.f_3 = -83.04f;
				return Var0;
			}
			else if (iParam1 == 5)
			{
				Var0 = { -931.3f, -640.8f, 72f };
				Var0.f_3 = -83.04f;
				return Var0;
			}
			else if (iParam1 == 6)
			{
				Var0 = { -904.6f, -641f, 70.7f };
				Var0.f_3 = -83.04f;
				return Var0;
			}
			break;
		case 43:
		case 53:
			if (iParam1 == 0)
			{
				Var0 = { -809.4f, -598f, 53.3f };
				Var0.f_3 = 124f;
				return Var0;
			}
			else if (iParam1 == 3)
			{
				Var0 = { -828.8f, -608f, 58.3f };
				Var0.f_3 = 131.9f;
				return Var0;
			}
			else if (iParam1 == 4)
			{
				Var0 = { -865.7f, -629.9f, 64.2f };
				Var0.f_3 = 49.1f;
				return Var0;
			}
			else if (iParam1 == 5)
			{
				Var0 = { -876.3f, -615.8f, 67.3f };
				Var0.f_3 = -54.1f;
				return Var0;
			}
			else if (iParam1 == 6)
			{
				Var0 = { -857.6f, -605.1f, 63.7f };
				Var0.f_3 = -111.1f;
				return Var0;
			}
			else if (iParam1 == 7)
			{
				Var0 = { -842.3f, -622.2f, 61.5f };
				Var0.f_3 = -48.7f;
				return Var0;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					Var0 = { -810.5f, -581.6f, 55.2f };
					Var0.f_3 = 106.3f;
					return Var0;
				case 3:
					Var0 = { -832.4f, -600.3f, 58.2f };
					Var0.f_3 = -154.6f;
					return Var0;
				case 4:
					Var0 = { -831.9f, -604.8f, 58.2f };
					Var0.f_3 = 175.8f;
					return Var0;
				case 5:
					Var0 = { -828.7f, -603.5f, 58.2f };
					Var0.f_3 = -109.1f;
					return Var0;
				case 6:
					Var0 = { -834.8f, -593.9f, 57.6f };
					Var0.f_3 = 10.6f;
					return Var0;
			}
			break;
		case 45:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1089.6f, -576.5f, 81.9f };
					Var0.f_3 = -62.8f;
					return Var0;
				case 3:
					Var0 = { -1056.6f, -602.5f, 78.2f };
					Var0.f_3 = -165.8f;
					return Var0;
				case 4:
					Var0 = { -1054.4f, -604.3f, 77.6f };
					Var0.f_3 = -130f;
					return Var0;
				case 5:
					Var0 = { -1060.5f, -601.6f, 78.8f };
					Var0.f_3 = 120.1f;
					return Var0;
				case 6:
					Var0 = { -1057.5f, -595.6f, 80.4f };
					Var0.f_3 = 3.4f;
					return Var0;
			}
			break;
		case 46:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1056.7f, -694.2f, 70.6f };
					Var0.f_3 = -103.2f;
					return Var0;
				case 3:
					Var0 = { -1052.2f, -687.6f, 71.2f };
					Var0.f_3 = -103.2f;
					return Var0;
				case 4:
					Var0 = { -1050f, -689.5f, 71f };
					Var0.f_3 = -134.3f;
					return Var0;
				case 5:
					Var0 = { -1049.6f, -686.9f, 70.6f };
					Var0.f_3 = 120.1f;
					return Var0;
				case 6:
					Var0 = { -1055.1f, -686.8f, 71.2f };
					Var0.f_3 = 90.1f;
					return Var0;
			}
			break;
		case 54:
			switch (iParam1)
			{
				case 0:
					Var0 = { -868.447f, -743.457f, 60.581f };
					Var0.f_3 = -190f;
					return Var0;
				case 1:
					Var0 = { -849.5f, -728.4f, 58.2f };
					Var0.f_3 = 0f;
					return Var0;
				case 2:
					Var0 = { -735.7f, -554.1f, 74.5f };
					return Var0;
			}
			break;
		case 55:
			switch (iParam1)
			{
				case 0:
					Var0 = { -868.627f, -743.553f, 60.581f };
					Var0.f_3 = -172f;
					return Var0;
				case 1:
					Var0 = { -847.8f, -727.6f, 58.1f };
					Var0.f_3 = 0f;
					return Var0;
				case 2:
					Var0 = { -735.7f, -554.1f, 74.5f };
					return Var0;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					Var0 = { 459.8409f, 54.1201f, 133.9201f };
					Var0.f_3 = 2.13f;
					return Var0;
			}
			break;
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 16:
			case 20:
				if (iParam2 == 0)
				{
					return func_1578(10, 1);
				}
				else if (iParam2 == 1 || iParam2 == 2)
				{
					return func_1578(6, 1);
				}
				else if (iParam2 == 4)
				{
					Var0 = { -874.3146f, -747.0599f, 58.371f };
					return Var0;
				}
				else if (iParam2 == 7)
				{
					Var0 = { -849.7007f, -724.3657f, 59.449f };
					Var0.f_3 = -98.44f;
					return Var0;
				}
				break;
			case 17:
			case 21:
				if (iParam2 == 0)
				{
					return func_1578(10, 2);
				}
				else if (iParam2 == 1 || iParam2 == 2)
				{
					return func_1578(6, 4);
				}
				else if (iParam2 == 7)
				{
					Var0 = { -851.4477f, -723.9618f, 59.647f };
					Var0.f_3 = -134.7f;
					return Var0;
				}
				break;
			case 18:
			case 22:
				if (iParam2 == 0)
				{
					return func_1578(10, 3);
				}
				else if (iParam2 == 1 || iParam2 == 2)
				{
					return func_1578(6, 6);
				}
				else if (iParam2 == 4)
				{
					Var0 = { -876.3886f, -746.8376f, 58.4796f };
					return Var0;
				}
				else if (iParam2 == 7)
				{
					Var0 = { -847.5931f, -724.2992f, 59.263f };
					Var0.f_3 = 152.7f;
					return Var0;
				}
				break;
			case 19:
			case 23:
				if (iParam2 == 0)
				{
					return func_1578(10, 4);
				}
				else if (iParam2 == 1 || iParam2 == 2)
				{
					return func_1578(6, 7);
				}
				else if (iParam2 == 7)
				{
					Var0 = { -845.5144f, -718.6787f, 59.9861f };
					Var0.f_3 = -124.03f;
					return Var0;
				}
				break;
			case 24:
				if (iParam2 == 2)
				{
					return func_551(2, 0);
				}
				else if (iParam2 == 3)
				{
					return func_551(4, 0);
				}
				break;
			case 25:
				if (iParam2 == 2)
				{
					return func_551(2, 1);
				}
				else if (iParam2 == 3)
				{
					return func_551(4, 1);
				}
				break;
			case 26:
				if (iParam2 == 2)
				{
					return func_551(2, 2);
				}
				else if (iParam2 == 3)
				{
					return func_551(4, 2);
				}
				break;
			case 27:
				if (iParam2 == 2)
				{
					return func_551(2, 3);
				}
				else if (iParam2 == 3)
				{
					return func_551(4, 3);
				}
				break;
			case 28:
				if (iParam2 == 2)
				{
					return func_551(3, 0);
				}
				else if (iParam2 == 3)
				{
					return func_551(4, 0);
				}
				break;
			case 29:
				if (iParam2 == 2)
				{
					return func_551(3, 1);
				}
				else if (iParam2 == 3)
				{
					return func_551(4, 1);
				}
				break;
			case 30:
				if (iParam2 == 2)
				{
					return func_551(3, 2);
				}
				else if (iParam2 == 3)
				{
					return func_551(4, 2);
				}
				break;
			case 31:
				if (iParam2 == 2)
				{
					return func_551(3, 3);
				}
				else if (iParam2 == 3)
				{
					return func_551(4, 3);
				}
				break;
			case 32:
				return func_551(6, 0);
			case 33:
				return func_551(6, 1);
			case 34:
				return func_551(6, 2);
			case 35:
				return func_551(6, 3);
			case 36:
				return func_551(6, 4);
			case 37:
			case 47:
				Var0 = { -919.9f, -697.9f, 65.3f };
				Var0.f_3 = -88.6f;
				return Var0;
			case 38:
			case 48:
				Var0 = { -855.1f, -661.6f, 64.4f };
				Var0.f_3 = 0f;
				return Var0;
			case 40:
			case 50:
				return func_1578(4, 10);
			case 41:
			case 51:
				return func_1578(4, 13);
			case 42:
			case 52:
				return func_1578(4, 16);
		}
		if (iParam2 == 8 || iParam2 == 25)
		{
			if (iParam1 == 0)
			{
				switch (iParam0)
				{
					case 6:
						return func_1578(0, 3);
					case 7:
						return func_1578(0, 5);
					case 10:
						return func_1578(0, 4);
					case 11:
						return func_1578(0, 6);
					case 12:
						return func_1578(0, 7);
					case 13:
						return func_1578(0, 8);
					case 14:
						return func_1578(0, 9);
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		switch (iParam0)
		{
			case 16:
			case 17:
			case 18:
				if (iParam2 == 0)
				{
					return func_1578(10, 6);
				}
				break;
			case 19:
				if (iParam2 == 0)
				{
					return func_1578(10, 7);
				}
				break;
		}
	}
	return func_551(0, 0);
}

bool func_1450(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, struct<4> Param5, bool bParam9)
{
	iVar0 = func_1962(iParam1);
	switch (Local_133[iParam1]->f_3)
	{
		case 0:
			if (bParam2)
			{
				Local_133[iParam1]->f_3 = 1;
			}
			else if (bParam3)
			{
				Local_133[iParam1]->f_3 = 3;
			}
			else if (bParam4)
			{
				Local_133[iParam1]->f_3 = 5;
			}
			else
			{
				Local_133[iParam1]->f_3 = 8;
			}
			break;
		case 1:
			iVar1 = func_408(uParam0, func_464(func_1323(iParam1)), 1);
			if (does_entity_exist(iVar1))
			{
				Local_133[iParam1] = get_ped_index_from_entity_index(iVar1);
			}
			if (does_entity_exist(&(Local_133[iParam1])))
			{
				if (!func_470(iParam1) == -1)
				{
					Local_133[iParam1]->f_3 = 2;
				}
				else
				{
					Local_133[iParam1]->f_3 = 6;
				}
			}
			else if (bParam3)
			{
				Local_133[iParam1]->f_3 = 3;
			}
			else if (bParam4)
			{
				Local_133[iParam1]->f_3 = 5;
			}
			else
			{
				Local_133[iParam1]->f_3 = 8;
			}
			break;
		case 2:
			if (func_917(uParam0, func_470(iParam1), Local_133[iParam1], 0, 0, 0, 0, 0, 0, iVar0, 1, 0, 1, 0))
			{
				Local_133[iParam1]->f_3 = 6;
			}
			break;
		case 3:
			if (!Local_133[iParam1]->f_2 == 1)
			{
				func_943(iParam1, 1);
			}
			if (func_470(iParam1) == -1)
			{
				if (bParam4)
				{
					Local_133[iParam1]->f_3 = 5;
				}
				else
				{
					Local_133[iParam1]->f_3 = 8;
				}
				return false;
			}
			if (func_917(uParam0, func_470(iParam1), Local_133[iParam1], 0, 0, 0, 0, 0, 0, iVar0, 1, 0, 1, 0))
			{
				if (bParam9)
				{
					if (func_419(Param5))
					{
					}
					else
					{
						func_1295(&(Local_133[iParam1]), Param5, 2, 1073741824);
					}
				}
				Local_133[iParam1]->f_3 = 6;
			}
			else
			{
				return false;
			}
			break;
		case 5:
			func_462(func_1323(iParam1));
			if (!func_463(func_1323(iParam1)))
			{
			}
			else
			{
				if (func_419(Param5))
				{
					Var2 = { get_entity_coords(Global_35, true, false) };
					Var2.f_3 = get_entity_heading(Global_35);
				}
				else
				{
					Var2 = { Param5 };
				}
				Local_133[iParam1] = func_1875(func_464(func_1323(iParam1)), Var2, Var2.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				Local_133[iParam1]->f_3 = 6;
				Jump @974; //curOff = 593
				if (!is_entity_dead(&(Local_133[iParam1])))
				{
					set_blocking_of_non_temporary_events(&(Local_133[iParam1]), true);
					if (!func_470(iParam1) == -1)
					{
						switch (func_470(iParam1))
						{
							case 0:
								func_145(uParam0, &(Local_133[iParam1]), "DUTCH", 0);
								break;
							case 6:
								func_145(uParam0, &(Local_133[iParam1]), "MICAH_BELL", 0);
								break;
							case 5:
								func_145(uParam0, &(Local_133[iParam1]), "HOSEA", 0);
								break;
							case 16:
								func_145(uParam0, &(Local_133[iParam1]), "MOLLY", 0);
								break;
							case 15:
								func_145(uParam0, &(Local_133[iParam1]), "MARYBETH", 0);
								break;
							case 17:
								func_145(uParam0, &(Local_133[iParam1]), "PEARSON", 0);
								break;
							case 20:
								func_145(uParam0, &(Local_133[iParam1]), "Karen", 0);
								break;
							case 21:
								func_145(uParam0, &(Local_133[iParam1]), "SWANSON", 0);
								break;
							case 19:
								func_145(uParam0, &(Local_133[iParam1]), "SUSAN", 0);
								break;
							case 7:
								func_145(uParam0, &(Local_133[iParam1]), "CHARLES_SMITH", 0);
								break;
							case 3:
								func_145(uParam0, &(Local_133[iParam1]), "BILL", 0);
								break;
							default:
								break;
						}
					}
					func_943(iParam1, 1);
					Local_133[iParam1]->f_3 = 7;
					return true;
				}
				Jump @974; //curOff = 957
				return true;
				Jump @974; //curOff = 964
				return false;
			}
			return false;
			default:
				break;
	}
}

bool func_1451(var uParam0)
{
	switch (&iLocal_1482[3])
	{
		case 0:
			func_409(&(uParam0->f_7375));
			iLocal_1482[3] = 1;
		case 1:
			iLocal_1482[3] = 2;
		case 2:
			iLocal_1482[3] = 3;
		case 3:
			func_151(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			func_151(uParam0, &(Local_133[6]), "Dutch", 0, 0, 0, 0);
			func_151(uParam0, &(Local_133[1]), "Horse_01", 0, 0, 0, 0);
			func_151(uParam0, &(Local_133[10]), "MARYBETH", 0, 0, 0, 0);
			func_151(uParam0, &(Local_133[7]), "MicahBell", 0, 0, 0, 0);
			func_151(uParam0, &(Local_133[11]), "MrPearson", 0, 0, 0, 0);
			func_151(uParam0, &(Local_133[12]), "karen", 0, 0, 0, 0);
			func_151(uParam0, &(Local_133[13]), "RevSwanson", 0, 0, 0, 0);
			func_151(uParam0, &(Local_133[14]), "SusanGrimshaw", 0, 0, 0, 0);
			func_909(&(uParam0->f_7375), &(Local_941[31]), "p_chair20x", 0, 0, 0);
			func_930(uParam0, 4194304);
			iLocal_1482[3] = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

void func_1452(int iParam0)
{
	iLocal_1337 = iParam0;
}

bool func_1453(var uParam0)
{
	_0x702b75dc9d3ede56(true);
	func_1369(20);
	_0x98a7cd5ea379a854();
	if (!is_entity_dead(&(Local_133[4])))
	{
		if (is_waypoint_playback_going_on_for_ped(Global_35, 0))
		{
			waypoint_playback_override_speed(Global_35, 1f, 1, -1f, 0);
		}
	}
	bVar8 = true;
	switch (iVar1334)
	{
		case 1:
			vVar1 = { func_1439(0) };
			request_collision_at_coord(vVar1);
			func_462(95);
			func_462(81);
			func_462(80);
			func_27(vLocal_792[46], 1);
			_hide_ped_weapons(Global_35, 2, true);
			func_176(16);
			func_176(15);
			if (!func_1316(Global_35, &(Local_133[4]), 0))
			{
				_set_ped_on_mount(Global_35, &(Local_133[4]), -1, true);
			}
			_set_entity_coords_and_heading(&(Local_133[4]), vVar1, vVar1.f_3, true, false, true);
			_0x9587913b9e772d29(&(Local_133[4]), 0);
			end_srl();
			prefetch_srl(func_1963(0));
			func_1452(2);
			break;
		case 2:
			vVar1 = { func_1439(0) };
			request_collision_at_coord(vVar1);
			if (func_26(vLocal_792[45]) && func_934(vLocal_792[45]) <= 3f)
			{
				bVar8 = false;
			}
			if (!func_463(95))
			{
				bVar8 = false;
			}
			if (!func_463(81))
			{
				bVar8 = false;
			}
			if (!func_463(80))
			{
				bVar8 = false;
			}
			if (!_0xaa235e2f2c09e952(func_1438(6)))
			{
				bVar8 = false;
			}
			if (!is_srl_loaded())
			{
				bVar8 = false;
			}
			if (bVar8)
			{
				if (!func_1316(Global_35, &(Local_133[4]), 0))
				{
					_set_ped_on_mount(Global_35, &(Local_133[4]), -1, true);
				}
				_set_entity_coords_and_heading(&(Local_133[4]), vVar1, vVar1.f_3, true, false, true);
				_0x9587913b9e772d29(&(Local_133[4]), 0);
				end_srl();
				func_1428(Global_35, 80, 1000f, -1056964608, -1, 17);
				vVar1 = { func_1439(1) };
				func_1454(0, Global_35, 0, &(Local_133[4]), 0, 1092616192, 1103626240);
				func_1454(1, Global_35, 0, &(Local_133[4]), 0, 1092616192, 1103626240);
				func_1454(2, Global_35, 0, &(Local_133[4]), 0, 1092616192, 1103626240);
				func_60(1);
				_0x5e3ccf03995388b5(get_hash_key(func_1964(0, 0)), get_entity_coords(&(Local_133[4]), true, false));
				_0xbc016635d6a73b31(func_1438(6), func_1964(0, 1), 5);
				func_244(vLocal_792[46]);
				task_follow_waypoint_recording(Global_35, func_496(95), 0, 4194312, -1, 0, 0, -1);
				_0x2208438012482a1a(Global_35, true, false);
				force_ped_motion_state(&(Local_133[4]), -668482597, false, 0, false);
				_0x2208438012482a1a(&(Local_133[4]), true, false);
				do_screen_fade_in(1000);
				_set_weather_type(1500834021, true, true, false, 0f, false);
				set_clock_time(22, 0, 0);
				prefetch_srl(func_1963(1));
				func_1372(1, 1000);
				func_27(vLocal_792[47], 1);
				func_1452(3);
			}
			break;
		case 3:
			func_1454(2, Global_35, 0, &(Local_133[4]), 0, 1092616192, 1103626240);
			vVar1 = { func_1439(1) };
			request_collision_at_coord(vVar1);
			vVar5 = { func_1965(1) };
			iVar0 = (func_1966(0) - func_245(vLocal_792[46]));
			fVar9 = to_float((_0x465f04f68ad38197(func_1438(6), func_1964(0, 1), 5) / 1000));
			if (func_1967(1, vVar5, iVar0) || func_934(vLocal_792[47]) >= fVar9)
			{
				func_27(vLocal_792[47], 1);
				func_1452(4);
			}
			break;
		case 4:
			vVar1 = { func_1439(1) };
			end_srl();
			prefetch_srl(func_1963(2));
			_set_entity_coords_and_heading(&(Local_133[4]), vVar1, vVar1.f_3, true, false, true);
			func_1454(1, Global_35, 0, &(Local_133[4]), 0, 1092616192, 1103626240);
			_0x9587913b9e772d29(&(Local_133[4]), 0);
			func_1428(Global_35, 81, 1000f, -1056964608, -1, 17);
			task_follow_waypoint_recording(Global_35, func_496(95), 0, 4194312, -1, 0, 0, -1);
			_0x2208438012482a1a(Global_35, true, false);
			force_ped_motion_state(&(Local_133[4]), -668482597, false, 0, false);
			_0x2208438012482a1a(&(Local_133[4]), true, false);
			_0xbc016635d6a73b31(func_1438(6), func_1964(1, 1), 5);
			func_244(vLocal_792[46]);
			_set_weather_type(1632247697, true, true, false, 0f, false);
			func_244(vLocal_792[46]);
			func_1452(5);
			break;
		case 5:
			func_1454(2, Global_35, 0, &(Local_133[4]), 0, 1092616192, 1103626240);
			vVar1 = { func_1439(2) };
			request_collision_at_coord(vVar1);
			vVar5 = { func_1965(2) };
			iVar0 = (func_1966(1) - func_245(vLocal_792[46]));
			fVar10 = to_float((_0x465f04f68ad38197(func_1438(6), func_1964(1, 1), 5) / 1000));
			if (func_1967(2, vVar5, iVar0) || func_934(vLocal_792[47]) >= fVar10)
			{
				func_27(vLocal_792[47], 1);
				func_1452(6);
			}
			break;
		case 6:
			func_1454(2, Global_35, 0, &(Local_133[4]), 0, 1092616192, 1103626240);
			end_srl();
			vVar1 = { func_1439(2) };
			_set_entity_coords_and_heading(&(Local_133[4]), vVar1, vVar1.f_3, true, false, true);
			func_1454(1, Global_35, 0, &(Local_133[4]), 0, 1092616192, 1103626240);
			_0x9587913b9e772d29(&(Local_133[4]), 0);
			func_1428(Global_35, 81, 1000f, -1056964608, -1, 17);
			task_follow_waypoint_recording(Global_35, func_496(95), 0, 4194312, -1, 0, 0, -1);
			_0x2208438012482a1a(Global_35, true, false);
			force_ped_motion_state(&(Local_133[4]), -668482597, false, 0, false);
			_0x2208438012482a1a(&(Local_133[4]), true, false);
			_0xa54d643d0773eb65(func_1438(6), func_1964(1, 1), 5);
			_0xbc016635d6a73b31(func_1438(6), func_1964(2, 1), 5);
			_0xffe9c53deea3db0b(iVar0, get_hash_key(func_1964(2, 0)), vVar1, true, 2147483647);
			func_27(vLocal_792[46], 1);
			func_930(uParam0, 4194304);
			func_244(vLocal_792[46]);
			func_456(142);
			func_1452(7);
			break;
		case 7:
			func_1454(2, Global_35, 0, &(Local_133[4]), 0, 1092616192, 1103626240);
			_0xffe9c53deea3db0b(iVar0, get_hash_key(func_1964(2, 0)), 680.5f, -1164.7f, 50.8f, true, 2147483647);
			if (!func_165(143))
			{
				if (func_1968(&(uParam0->f_7375), "ODR3_EXT", 1, 1))
				{
					func_456(143);
				}
			}
			if (func_934(vLocal_792[46]) >= (IntToFloat((func_1966(2) / 1000)) - _get_anim_scene_duration(&(Local_1371[20]))))
			{
				if (func_165(143))
				{
					attach_anim_scene_to_entity(&(Local_1371[20]), &(Local_133[4]), get_ped_bone_index(&(Local_133[4]), 0));
					stop_anim_task(Global_35, func_494(81, 1), func_494(81, 0), -3f);
					if (func_1374(20, 1))
					{
						func_1454(1, Global_35, 0, &(Local_133[4]), 0, 1092616192, 1103626240);
						func_1452(8);
						return true;
					}
				}
			}
			break;
		case 8:
			break;
	}
	return false;
}

void func_1454(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, float fParam6)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!func_997(iParam2, 1))
			{
				set_entity_invincible(iParam1, true);
				if (!is_entity_dead(iParam3))
				{
					set_entity_invincible(iParam3, true);
				}
				if (!is_entity_dead(iParam4))
				{
					set_entity_invincible(iParam4, true);
				}
			}
			set_ped_can_be_knocked_off_vehicle(iParam1, 1);
			break;
		case 1:
			if (!func_997(iParam2, 4))
			{
				iVar0 = _create_volume_box(_get_object_offset_from_coords(get_entity_coords(iParam1, true, false), get_entity_heading(iParam1), 0f, (fParam6 * 0.5f), 0f), 0f, 0f, get_entity_heading(iParam1), fParam5, fParam6, 10f);
				_0x2fcd528a397e5c88(iVar0, 1064968);
				_delete_volume(iVar0);
			}
			break;
		case 2:
			if (!func_997(iParam2, 8))
			{
				if (!is_entity_dead(iParam3))
				{
					if (!func_1316(iParam1, iParam3, 1))
					{
						_set_ped_on_mount(iParam1, iParam3, -1, true);
					}
				}
				else if (!is_entity_dead(iParam4))
				{
					if (!is_ped_on_specific_vehicle(iParam1, iParam4))
					{
						set_ped_into_vehicle(iParam1, iParam4, -1);
					}
				}
			}
			if (!func_997(iParam2, 16))
			{
				if (is_ped_on_mount(iParam1))
				{
					disable_control_action(0, -874806616, false);
				}
				else if (is_ped_in_any_vehicle(iParam1, false))
				{
					disable_control_action(0, -17122892, false);
				}
			}
			break;
		case 3:
			if (!func_997(iParam2, 2))
			{
				set_entity_invincible(iParam1, false);
				if (!is_entity_dead(iParam3))
				{
					set_entity_invincible(iParam3, false);
				}
				if (!is_entity_dead(iParam4))
				{
					set_entity_invincible(iParam4, false);
				}
			}
			set_ped_can_be_knocked_off_vehicle(iParam1, 0);
			break;
	}
}

void func_1455(var uParam0, int iParam1, int iParam2)
{
	if (func_82(32768))
	{
		return;
	}
	func_1969(&((*Global_1835011)[uParam0->f_607]->f_22), iParam1, iParam2);
}

int func_1456(int iParam0)
{
	if (!func_214(iParam0))
	{
		return 1;
	}
	iVar0 = func_219(iParam0);
	iVar1 = -1;
	iVar2 = 0;
	bVar3 = false;
	iVar4 = 1;
	if (iVar0 == 1)
	{
		iVar5 = func_294(iParam0);
		if (iVar5 == 23)
		{
			iVar4 = 1;
			iVar1 = 134;
			bVar3 = false;
			iVar2 = 0;
			if (func_483(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 37;
			bVar3 = false;
			if (func_486(134, 0) && func_487(1) <= 1)
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 0;
			}
			if (func_483(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 16)
		{
			iVar4 = 1;
			if (func_483(134, 1, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if (func_483(138, 1, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 46)
		{
			if (func_489(58))
			{
				iVar4 = 1;
				iVar1 = 140;
				if (func_483(iVar1, 0, 0, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
				return iVar4;
			}
			else
			{
				return 1;
			}
		}
		else if (iVar5 == 17)
		{
			iVar4 = 1;
			iVar1 = 134;
			if (func_483(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 138;
			if (func_483(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if (func_489(5) && func_490(12))
			{
				iVar1 = 21;
				if (func_483(iVar1, 1, 0, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			return iVar4;
		}
		else if (iVar5 == 15)
		{
			iVar4 = 1;
			iVar1 = 63;
			if (func_483(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 59;
			if (func_483(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 33)
		{
			iVar1 = 99;
		}
		else if (iVar5 == 73)
		{
			iVar1 = 10;
			iVar2 = 1;
		}
		else if (iVar5 == 24)
		{
			iVar1 = 21;
			iVar2 = 0;
		}
		else if (iVar5 == 10)
		{
			iVar4 = 1;
			iVar1 = 63;
			if (func_483(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if ((func_348((*Global_1835011)[11]->f_1, 1) && func_348((*Global_1835011)[14]->f_1, 1)) && func_348((*Global_1347702)[61]->f_15, 1))
			{
				iVar1 = 66;
				iVar2 = 1;
				if (func_483(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 59;
			iVar2 = 0;
			if (func_483(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 55)
		{
			iVar1 = 64;
		}
	}
	else if (iVar0 == 8)
	{
		iVar6 = func_294(iParam0);
		if (iVar6 == 0)
		{
			iVar4 = 1;
			if (func_491(15))
			{
				if (func_492(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 97;
			if (func_483(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 2)
		{
			iVar1 = 96;
		}
		else if (iVar6 == 61)
		{
			iVar4 = 1;
			if (func_491(15))
			{
				if (func_492(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (func_491(9))
			{
				if (func_492(9, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (!func_348((*Global_1347702)[63]->f_15, 1))
			{
				iVar1 = 63;
				iVar2 = 0;
			}
			else
			{
				iVar1 = 97;
				iVar2 = 1;
			}
			if (func_483(iVar1, iVar2, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 62)
		{
			iVar4 = 1;
			if (func_491(15))
			{
				if (func_492(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (func_491(9))
			{
				if (func_492(9, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 112;
			if (func_483(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 63;
			if (func_483(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 64)
		{
			iVar1 = 65;
			iVar2 = 1;
		}
		else if (iVar6 == 76)
		{
			iVar1 = 134;
			if (func_483(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 37;
			if (func_483(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 82)
		{
			iVar1 = 83;
			iVar2 = 1;
		}
		else if (iVar6 == 96)
		{
			iVar1 = 2;
		}
		else if (iVar6 == 1)
		{
			iVar1 = 96;
			iVar2 = 1;
		}
		else if (iVar6 == 97)
		{
			iVar4 = 1;
			if (func_348((*Global_1835011)[6]->f_1, 1) && func_348((*Global_1835011)[13]->f_1, 1))
			{
				iVar1 = 112;
				iVar2 = 1;
				bVar3 = false;
				if (func_483(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			return iVar4;
		}
		else if (iVar6 == 114)
		{
			if (func_348((*Global_1835011)[9]->f_1, 1))
			{
				iVar1 = 0;
				iVar2 = 1;
			}
		}
		else if (iVar6 == 134)
		{
			iVar4 = 1;
			iVar1 = 95;
			if (func_483(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 138;
			if (func_483(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
	}
	if (iVar1 == -1)
	{
		return 1;
	}
	if (func_483(iVar1, iVar2, bVar3, 0, 0))
	{
		return 1;
	}
	return 0;
}

Vector3 func_1457(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 682.751f, -1236.762f, 44f;
				case 1:
					return 674.749f, -1245.03f, 43.9384f;
				case 2:
					return 686.1007f, -1229.795f, 44.2394f;
				case 3:
					return 673.59f, -1246.17f, 43.8528f;
				case 4:
					return 691.25f, -1228.155f, 44.3057f;
				case 5:
					return 576.3982f, 211.3043f, 128.7836f;
				case 6:
					return 574.8192f, 215.0694f, 128.3182f;
				case 7:
					return 407.9201f, 32.5632f, 107.4515f;
				case 8:
					return 409.4345f, 30.9572f, 107.5863f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 668.42f, -1245.18f, 44.1039f;
				case 1:
					return 574.0912f, 221.4953f, 127.6389f;
				case 2:
					return 459.0367f, 55.6728f, 134.8933f;
				case 3:
					return -546.1608f, 391.441f, 87.8344f;
				case 4:
					return -860.3899f, -744.6414f, 56.9728f;
				case 5:
					return -860.3899f, -744.6414f, 56.9728f;
				case 6:
					return -861.3741f, -744.9619f, 56.9699f;
				case 7:
					return -861.3741f, -744.9619f, 56.9699f;
				case 8:
					return 442.8f, -186.5f, 137.5f;
				case 9:
					return 672.6711f, -1231.805f, 44.0323f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -547.2589f, 391.083f, 87.918f;
				case 1:
					return -547.5558f, 395.5418f, 88.1152f;
				case 2:
					return -546.1267f, 389.0597f, 87.6621f;
				case 3:
					return -544.7975f, 392.0254f, 87.7219f;
				case 4:
					return -545.664f, 396.658f, 87.9242f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -553.4178f, 388.0737f, 88.0903f;
				case 1:
					return -554.8318f, 392.0486f, 88.4488f;
				case 2:
					return -554.8452f, 398.3689f, 88.2291f;
				case 3:
					return -553.2543f, 400.2751f, 88.0964f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1042.068f, 429.984f, 54.6785f;
				case 1:
					return -1044.376f, 433.5345f, 54.5734f;
				case 2:
					return -1039.677f, 425.9865f, 54.9871f;
				case 3:
					return -1038.198f, 422.5345f, 55.3405f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -852.9872f, -729.9537f, 59.1827f;
				case 1:
					return -848.7188f, -728.8995f, 58.8388f;
				case 2:
					return -843.9165f, -724.0826f, 58.9466f;
				case 3:
					return -839.7863f, -723.0562f, 58.648f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -871.1052f, -746.0158f, 59.4568f;
				case 1:
					return -870.0963f, -732.2602f, 59.8865f;
				case 2:
					return -866.3245f, -751.0563f, 59.4128f;
				case 3:
					return -884.5085f, -747.2338f, 59.4074f;
				case 4:
					return -872.3051f, -742.6536f, 59.5887f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -666.932f, -515.5493f, 76.3865f;
				case 1:
					return -1185.029f, -509.6394f, 89.8865f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_1458(var uParam0)
{
	uParam0->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_134)
	{
		if (_0x93ffd92f05ec32fd(&(uParam0->f_135[iVar0])))
		{
			_0x13e7320c762f0477(&(uParam0->f_135[iVar0]));
		}
		uParam0->f_135[iVar0]->f_1 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1.f_1[iVar0] = { vVar1 };
		iVar0++;
	}
	func_1459(&(uParam0->f_120));
	uParam0->f_134 = 0;
	*uParam0 = 0;
}

void func_1459(var uParam0)
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

void func_1460(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

void func_1461(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_716(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_716(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_716(iParam0, 1)])->f_10 && iParam1));
}

int func_1462(int iParam0)
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

bool func_1463(int iParam0, int iParam1)
{
	iVar0 = func_1236(iParam1);
	func_1820(&(Global_1946804->f_964), iVar0, iParam0, -897569541, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	return _0xed4413cee1bf142c(&(Global_1946804->f_964));
}

bool func_1464(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_1465(int iParam0, var uParam1)
{
	if (uParam1->f_1 == 0)
	{
		return false;
	}
	if (!func_1464(uParam1, 2))
	{
		iVar1 = _get_metaped_type(iParam0);
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (&uParam1->f_1.f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				uParam1->f_135[uParam1->f_134] = _0xf6d9e1f3560cbf8e(iVar1, &(uParam1->f_1.f_1[iVar0]), 0, false, 0);
				uParam1->f_135[uParam1->f_134]->f_1 = iVar0;
				uParam1->f_134++;
			}
			iVar0++;
		}
		func_1468(uParam1, 2);
	}
	return func_1960(iParam0, uParam1);
}

void func_1466(var uParam0)
{
	*uParam0 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

bool func_1467(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!func_1970(uParam0, iParam3, iParam2) && !func_719(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_848(32768))
	{
		if (!*bParam1 || (*bParam1 && &uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0]))
		{
			func_1766(1108822547);
		}
		else
		{
			func_1971(1108822547);
		}
	}
	func_1770(uParam0, 0, 0);
	func_1818(iParam5);
	return true;
}

void func_1468(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1469(int iParam0)
{
	if (-1829635046 == func_1972(81053684))
	{
		if (func_1973(iParam0))
		{
			return true;
		}
	}
	else if (func_1755(-525676072, iParam0))
	{
		if (func_1973(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1470(int iParam0)
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

void func_1471(int iParam0)
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

void func_1472()
{
	iVar0 = func_502(Global_35, 9, 1, 0);
	if (func_731(iVar0))
	{
		return;
	}
	iVar0 = func_502(Global_35, 7, 1, 0);
	if (func_731(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_502(Global_35, 0, 1, 0);
	if (func_731(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_502(Global_35, 1, 1, 0);
	if (func_731(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_502(Global_35, 18, 1, 0);
	if (func_731(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1974();
	if (func_731(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1863(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1975(6291456, 0);
	if (func_731(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1863(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1473()
{
	return Global_1900383->f_393;
}

int func_1474(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1976(*uParam0, 0f, 0f, 0f))
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

void func_1475(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1476(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1477(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1478()
{
	return &Global_1899515;
}

void func_1479(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1480(int iParam0)
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

bool func_1481()
{
	return (func_1977() || func_1978());
}

void func_1482(bool bParam0)
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
	func_1979(0f);
	Global_1935436->f_11 = 1;
	if (func_325())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_1980();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1483(var uParam0)
{
	return uParam0->f_865;
}

float func_1484(var uParam0)
{
	return uParam0->f_868;
}

float func_1485(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_1486(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1487(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1488(var uParam0, int iParam1)
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

void func_1489(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1254(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1981(iParam4);
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

bool func_1490(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_716(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1491(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1492(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1490(1108822547, 6))
	{
		if (bParam2)
		{
			func_1489(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1493(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1461(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1493(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_716(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_716(iParam0, 1)])->f_10 || iParam1);
}

bool func_1494(var uParam0)
{
	if (func_1982(&(uParam0->f_29), 62))
	{
		switch (func_1983())
		{
			case 1:
				if (!func_1982(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1982(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1982(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1982(&(uParam0->f_29), 32))
				{
					if (func_1982(&(uParam0->f_29), 2))
					{
						if (func_738(func_307()) < 5)
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

int func_1495(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1984(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1192("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1193(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_731(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1984(iParam1, 512) && func_1751(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1984(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1984(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1984(iParam1, 33554432)))
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
		func_1194(iVar1);
	}
	if (func_731(iVar0))
	{
	}
	else if (!func_1984(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1495(uParam0, iParam1, iParam2);
	}
	else if (func_1984(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

int func_1496(int iParam0)
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

void func_1497(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1498(var uParam0)
{
	if (!func_914(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_1497(&(uParam0->f_1), 1);
	}
}

void func_1499(var uParam0)
{
	if (!func_914(*uParam0, 1))
	{
		request_ptfx_asset();
		func_1497(uParam0, 1);
	}
}

bool func_1500(var uParam0)
{
	if (func_914(uParam0->f_2, 1))
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

char* func_1501(int iParam0)
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

bool func_1502(int iParam0)
{
	return iParam0 != 0;
}

int func_1503(var uParam0, int iParam1)
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

int func_1504(var uParam0, char* sParam1)
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

void func_1505(var uParam0, int iParam1)
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

int func_1506(var uParam0)
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

void func_1507(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1508(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1509(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1510(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1511(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1511(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1511(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1511(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1511(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1511(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1511(uParam0, 5, iParam4))
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
			if (func_1511(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1511(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1511(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1512(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1513(var uParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_241((*uParam0)[iVar0], 1048576) && are_strings_equal((*uParam0)[iVar0], sParam1)) && (*uParam0)[iVar0]->f_9 == sParam1->f_9) && (*uParam0)[iVar0]->f_10 == sParam1->f_10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1514(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_546(sParam0, 1);
}

bool func_1515(var uParam0)
{
	if (func_914(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_914(uParam0->f_1, 1))
	{
		func_884(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_1497(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1516(var uParam0)
{
	if (func_914(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_914(uParam0->f_3, 1))
	{
		func_886(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_1497(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_1497(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1517(var uParam0)
{
	if (func_914(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_914(uParam0->f_1, 1))
	{
		func_888(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_1497(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1518(var uParam0, int iParam1)
{
	if (func_914(uParam0->f_1, 2))
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
	if (!func_914(uParam0->f_1, 1))
	{
		func_895(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_1497(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1519(var uParam0)
{
	if (func_914(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_914(uParam0->f_2, 1))
	{
		func_897(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_1497(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1520(var uParam0)
{
	if (func_914(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_914(uParam0->f_3, 1))
	{
		func_899(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_1497(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1521(var uParam0)
{
	if (func_914(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_914(uParam0->f_1, 1))
	{
		func_901(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_1497(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1522(var uParam0)
{
	if (func_914(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_914(uParam0->f_1, 1))
	{
		func_903(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_1497(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1523(var uParam0)
{
	if (func_914(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_914(uParam0->f_2, 1))
	{
		func_905(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_1497(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1524(var uParam0)
{
	if (func_914(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_914(uParam0->f_1, 1))
	{
		func_907(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_1497(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1525(int iParam0)
{
	if (func_518(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1526(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_518(iParam0))
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
			if (func_1047(iParam0, 2, 1))
			{
				func_1075(iParam0, 2, 1);
			}
			if (func_750(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_1050(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_569(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_187(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_187(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_1985(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_1050(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1986(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_1050(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1986(iParam0, 1);
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
			if (!func_1047(iParam0, 44, 0))
			{
				func_1050(iParam0, 44, 0);
			}
			if (func_1987(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_1986(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_1075(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_1077(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_1988(iParam0, 0, 0, 1);
			}
			func_1075(iParam0, 33, 1);
			func_1075(iParam0, 34, 1);
			func_1075(iParam0, 29, 1);
			if (!func_419(vVar0) && bParam7)
			{
				func_1986(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1986(iParam0, 4);
			}
			else
			{
				func_1986(iParam0, 5);
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
						func_1985(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_925(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_1986(iParam0, 4);
			}
			else
			{
				func_1986(iParam0, 5);
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
				if (func_1989(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_1990(iParam0, iParam13, 0);
						func_1991(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_1047(iParam0, 25, 0))
						{
							func_1075(iParam0, 25, 0);
						}
						func_1050(iParam0, 66, 0);
						func_1986(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1986(iParam0, 5);
				}
				func_1050(iParam0, 28, 1);
			}
			else
			{
				func_1986(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_1986(iParam0, 6);
			}
			break;
		case 6:
			if (func_187(Global_1360165[iParam0], 0))
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
					func_1992(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_1993(Global_1360165[iParam0], 1);
				}
			}
			func_1986(iParam0, 7);
		case 7:
			func_1077(iParam0, bParam9, bParam15, 0);
			func_1072(iParam0, 4, bParam11);
			func_1074(iParam0);
			if (bParam20)
			{
				if (func_1994(Global_1360165[iParam0]))
				{
				}
			}
			func_1995(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_1986(iParam0, 0);
			func_751(iParam0, 16, 1);
			func_1075(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1527(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_1996(iParam1, bParam3, bParam4, bParam6);
	if (!func_120(uParam0, 512))
	{
		if (func_120(uParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_1997(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_10781);
	}
	func_1998(uParam0, iParam1, iParam2, func_345(iParam2, 0));
	func_1867(uParam0, iParam1, 512);
	if (bParam5)
	{
		func_1867(uParam0, iParam1, 128);
	}
	else
	{
		func_1296(uParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1528(int iParam0)
{
	if (!func_518(iParam0))
	{
		return;
	}
	iVar0 = func_521(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

void func_1529(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_5417 = { vParam1 };
	uParam0->f_5420 = fParam4;
}

bool func_1530(int iParam0)
{
	iParam0 = func_289(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1539(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1531(int iParam0)
{
	iParam0 = func_289(iParam0);
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
	func_1999(&Var0);
	func_2000(iParam0, Var0);
	func_2001(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_2002(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_2003(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_2004(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_2005(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_2006(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_2007(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_2008(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_2009(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1532(vector3 vParam0)
{
	return func_2010(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1533(int iParam0)
{
	iParam0 = func_289(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_574(iParam0))
	{
		return false;
	}
	iVar0 = func_239(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_1534(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_478(iParam0);
	func_478(iParam0);
	func_2011(iParam0, iParam1);
	func_2012(iParam0, iParam1);
	func_2013(iParam0, iParam1);
	iVar1 = func_239(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_2014(iVar1);
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
	iVar3 = func_239(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_2014(iVar3);
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
	func_290();
}

bool func_1535()
{
	iVar0 = func_1473();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1536()
{
	iVar0 = func_1473();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_2015(0);
}

int func_1537(int iParam0)
{
	iParam0 = func_289(iParam0);
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

int func_1538(int iParam0)
{
	iParam0 = func_289(iParam0);
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

int func_1539(int iParam0)
{
	iParam0 = func_289(iParam0);
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

void func_1540(int iParam0)
{
	iParam0 = func_289(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1802(&iVar0, &iVar1, &iVar2);
	func_1803(iParam0, iVar0);
	func_1804(iParam0, iVar1);
	func_1805(iParam0, iVar2);
	func_2016(iParam0, 1);
	func_2017(iParam0, 1);
}

void func_1541(int iParam0)
{
	iParam0 = func_289(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_482(iParam0, 1);
}

void func_1542(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_289(iParam0);
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

bool func_1543(int iParam0)
{
	iParam0 = func_289(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1083(iParam0, 1);
}

struct<2> func_1544(int iParam0)
{
	iParam0 = func_289(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_2018(iParam0, &uVar2))
	{
	}
	if (!func_2019(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1545()
{
	if (func_2020(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_2020(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_2020(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_2020(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_2020(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_2020(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1546(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_2021(iParam0);
	func_2022(iParam0, uParam1);
	func_2023(iParam0);
	func_2024(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_2025(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1547(int iParam0)
{
	iParam0 = func_289(iParam0);
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

bool func_1548(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1549(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_1550(int iParam0)
{
	return iParam0;
}

bool func_1551(int iParam0)
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

int func_1552(var uParam0)
{
	return *uParam0;
}

bool func_1553(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_2026(iParam0) };
	if (func_1976(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_926(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_2027(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1554(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1555(var uParam0)
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

bool func_1556(var uParam0)
{
	switch (func_2028(uParam0))
	{
		case 0:
			uParam0->f_24 = func_307();
			iVar4 = func_307();
			func_1259(&iVar4, uParam0->f_6);
			func_1260(&iVar4, 0);
			func_1261(&iVar4, 0);
			if (func_1035(uParam0->f_24, iVar4, 1))
			{
				func_355(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_1855(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_2029(uParam0, 1);
			break;
		case 1:
			fVar5 = func_2030(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_2029(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_2030(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_355(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_738(iVar4), func_739(iVar4), func_740(iVar4));
				func_2031(get_clock_hours());
				func_2032(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1557(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1558(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_2033(2000);
	Global_16 = 0;
	func_2034();
	set_entity_invincible(Global_35, func_2035(*iParam0, 8));
	if (!func_2035(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_2035(*iParam0, 2) || func_2035(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_2035(*iParam0, 16))
	{
		func_258(1);
	}
	if (func_2035(*iParam0, 32))
	{
		func_669(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_2036(-1623728698, 0);
	}
	func_863(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1559(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1560(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_13;
}

int func_1561(var uParam0)
{
	return *uParam0;
}

bool func_1562(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1563(uParam0, 32768))
	{
		return true;
	}
	if (func_2037(uParam0) >= 3)
	{
		uParam0->f_2286 = func_983(get_player_index(), 0, 0, 1);
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
		func_2038(uParam0);
	}
	if (func_2037(uParam0) < 10)
	{
		if (func_2037(uParam0) == 3)
		{
			func_2039(uParam0, iParam5, bParam6);
		}
		else if (func_2037(uParam0) > 3)
		{
			if (func_1561(uParam0) == 0)
			{
				if (!func_1563(uParam0, 524288))
				{
					func_2040(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_2041(uParam0, 4);
					func_2042(uParam0, 10);
					func_2043(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1563(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_2044(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_1594(0);
			func_2045();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_2044(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_2046(uParam0, uParam0->f_2074))
				{
					if (func_2047(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_2048(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_2048(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_2049(uParam0);
			}
		}
	}
	bVar0 = func_2050(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1563(uParam0, 268435456) && bVar1) && !func_1563(uParam0, 262144))
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
				func_789(uParam0, 131072);
				func_789(uParam0, 268435456);
			}
		}
		if (func_2051(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_2044(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1561(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_2037(uParam0) == 3 || func_1563(uParam0, 131072))
	{
		func_2052(uParam0);
		if (!func_1563(uParam0, 262144))
		{
			if ((bVar0 && func_1563(uParam0, 65536)) || func_1563(uParam0, 131072))
			{
				func_789(uParam0, 32768);
				func_2041(uParam0, 4);
				func_2042(uParam0, 10);
				uParam0->f_2159 = 1;
				func_2043(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_2037(uParam0) >= 3)
	{
		func_2053(uParam0, iParam5);
		func_2054(uParam0);
		if (!func_2055(uParam0, 1))
		{
			func_2056(uParam0);
		}
		func_2057(uParam0);
	}
	switch (func_2037(uParam0))
	{
		case 0:
			func_2058(uParam0, Param1, iParam5);
			break;
		case 1:
			func_2059(uParam0);
			break;
		case 2:
			func_2060(uParam0);
			break;
		case 3:
			if (func_2061(uParam0))
			{
				func_2062(2);
				func_2048(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_244(&(uParam0->f_2262));
				func_2041(uParam0, 1);
				func_2063();
				func_2042(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1563(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_2037(uParam0) == 5)
			{
				if (func_2064(uParam0))
				{
					func_2041(uParam0, 2);
					func_2042(uParam0, 6);
				}
			}
			if (func_2037(uParam0) == 6)
			{
				if (func_2065(uParam0))
				{
					func_2041(uParam0, 3);
					func_2042(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_2066(&(uParam0->f_2262)) >= 15f)
			{
				if (func_2067(uParam0, iParam5))
				{
					if (func_2068(uParam0))
					{
						uParam0->f_2075 = func_2069(uParam0);
						func_244(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_2041(uParam0, 6);
						func_2042(uParam0, 9);
					}
					else
					{
						func_2041(uParam0, 4);
						func_2042(uParam0, 10);
						func_2043(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_2067(uParam0, iParam5))
			{
				func_2043(uParam0, iParam5);
				func_2042(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1563(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1564(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1565(var uParam0, var uParam1)
{
	if (func_1563(uParam1, 32768))
	{
		Var0 = { func_2070(uParam0) };
		func_1363(uParam0, &Var0);
		if (func_1563(uParam1, 131072))
		{
			func_790(uParam0, 268435456);
			if (func_419(uParam0->f_865))
			{
				uParam0->f_865 = { func_2071(uParam1, uParam1->f_2074) };
			}
			if (func_419(uParam0->f_862))
			{
				uParam0->f_862 = { func_2071(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1563(uParam1, 268435456))
		{
			func_1901(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1563(uParam1, 524288))
	{
		func_790(uParam0, 67108864);
		func_1564(uParam1, 524288);
	}
	if (func_2051(uParam1, 128))
	{
		func_790(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_2044(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_1901(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_1566(var uParam0)
{
	if (func_852(&(uParam0->f_7375), 128) || func_852(&(uParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(uParam0->f_7375.f_804))
		{
			_delete_anim_scene(uParam0->f_7375.f_804);
		}
		func_2072(&(uParam0->f_7375));
		func_1486(&(uParam0->f_7375), 128, 1);
		func_1486(&(uParam0->f_7375), 256, 1);
		func_1486(&(uParam0->f_7375), 4096, 1);
	}
}

void func_1567(var uParam0)
{
	func_2073(&(uParam0->f_7375));
}

bool func_1568(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	func_2074(uParam4, &uParam0);
	if (func_852(uParam4, 2) && !func_852(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_2075(uParam4) != 1)
	{
		func_2076(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_2075(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_2077(uParam4, &uParam0, uParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_2078(uParam4, 4);
					return false;
				}
				else
				{
					if (func_2079(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_2080(uParam5);
				}
				func_2078(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_121(uParam5, func_33(uParam5), 262144))
				{
					if (!func_852(uParam4, 2097152))
					{
						func_2081(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_8(uParam5, 8) || func_852(uParam4, 134217728)))
				{
				}
				else
				{
					func_2082(uParam4);
				}
				func_244(&(uParam4->f_1));
				func_2078(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_2083(uParam4);
				if (!func_26(&(uParam4->f_1)))
				{
					func_27(&(uParam4->f_1), 0);
				}
				else if (func_934(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2078(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_1968(uParam4, &uParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_2078(uParam4, 4);
					}
					else if (!func_419(func_2084(uParam4)) && !func_1656(Global_35, func_2084(uParam4), 100f, 1, 1))
					{
						func_1471(1);
						start_player_teleport(get_player_index(), func_2084(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_934(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2078(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_301(uParam5) != 0 || (func_154(uParam5) == 1 && func_162(uParam5, func_33(uParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_16(1, 0);
						func_2077(uParam4, &uParam0, uParam5);
						func_2078(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_934(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_2078(uParam4, 4);
			}
			break;
		case 3:
			func_415(uParam4);
			if (func_2079(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_2080(uParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_852(uParam4, 512)))
			{
				if (!func_852(uParam4, 1024) && func_2085(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_852(uParam4, 512))
				{
					func_244(&(uParam4->f_1));
					func_790(uParam4, 512);
					func_2078(uParam4, 4);
				}
				else if (func_852(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_2076(uParam4);
			}
			if (func_852(uParam4, 524288))
			{
				if (IntToFloat(absi((func_2086(uParam4) - func_2087(uParam4)))) <= 2f)
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
				if (func_2088(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_2087(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_2089(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_2090(uParam4);
				return true;
			}
			else
			{
				if (func_852(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_244(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_790(uParam4, 512);
						func_1486(uParam4, 67108864, 1);
						func_2078(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_852(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_2087(uParam4) <= 5000) && func_2087(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_852(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1558(&(uParam4->f_861), 0);
					func_790(uParam4, 536870912);
				}
				if (func_2087(uParam4) >= 5000 && func_2087(uParam4) <= (func_2086(uParam4) - 5000))
				{
					func_2091();
				}
			}
			break;
		case 6:
			if (func_2089(uParam4))
			{
				func_2090(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_852(uParam4, 524288))
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
						func_790(uParam4, 1073741824);
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
					if (func_2092(uParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2078(uParam4, 3);
					}
					else if (func_934(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2078(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_2079(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2078(uParam4, 3);
					}
					else if (func_934(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2078(uParam4, 3);
					}
				}
				if (func_2075(uParam4) == 3)
				{
					if (func_852(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_2078(uParam4, 4);
			break;
	}
	return false;
}

void func_1569(var uParam0)
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
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_844()))
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

void func_1570(var uParam0)
{
	func_2081(&(uParam0->f_7375));
}

bool func_1571(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_291(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_2093(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_292(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_2094(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1572(int iParam0)
{
	MemCopy(&cVar0, {func_291(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1573(int iParam0)
{
	Var0 = { func_1572(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1574(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_2095(iVar0));
		iVar0++;
	}
}

void func_1575(int iParam0)
{
	iLocal_1339 = iParam0;
}

int func_1576()
{
	switch (iVar1337)
	{
		case 3:
			if (_0xa0bc8faed8cfeb3c(Global_35))
			{
				if (!&Global_1905942 == -1)
				{
					func_2096(Global_35, 1);
				}
				else
				{
					func_2097(Global_35, 9, 1, 1, 0);
				}
				func_1575(5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_35))
			{
				func_456(17);
				func_1575(0);
				return 1;
			}
			break;
		case 0:
			return 1;
	}
	return 0;
}

int func_1577()
{
	switch (iVar1337)
	{
		case 0:
			if (_0xa0bc8faed8cfeb3c(Global_35))
			{
				func_2097(Global_35, 13, 1, 1, 0);
				func_669(Global_35, -482394719, 0, -358215195, 1, 1, 1, 0, 1, 0);
				func_1575(1);
			}
			break;
		case 1:
			if (_0xa0bc8faed8cfeb3c(Global_35))
			{
				_set_ped_component_disabled(Global_35, 1263923957, 1);
				if (func_165(19))
				{
					_set_ped_component_disabled(Global_35, -675377005, 1);
				}
				_update_ped_variation(Global_35, false, true, true, true, false);
				func_456(18);
				func_1575(2);
				return 1;
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

struct<4> func_1578(int iParam0, int iParam1)
{
	return func_2098(iParam0, iParam1);
}

bool func_1579(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, struct<4> Param6, bool bParam10)
{
	if (Local_133[iParam1]->f_3 == 7)
	{
		return true;
	}
	switch (Local_133[iParam1]->f_3)
	{
		case 0:
			if (bParam3)
			{
				Local_133[iParam1]->f_3 = 1;
			}
			else if (bParam4)
			{
				Local_133[iParam1]->f_3 = 3;
			}
			else if (bParam5)
			{
				Local_133[iParam1]->f_3 = 5;
			}
			break;
		case 1:
			Local_133[iParam1]->f_3 = 3;
			break;
		case 3:
			if (func_470(iParam2) == -1)
			{
				Local_133[iParam1]->f_3 = 5;
				return false;
			}
			Local_133[iParam1] = func_2099(func_470(iParam2), 1, 1, 0, 0, 0, 0, 1, bParam10, Param6, Param6.f_1, Param6.f_2, Param6.f_3, 0, 0, 0, 0);
			if (does_entity_exist(&(Local_133[iParam1])))
			{
				if (!is_entity_dead(&(Local_133[iParam1])))
				{
					set_entity_invincible(&(Local_133[iParam1]), true);
					func_943(iParam1, 1);
					Local_133[iParam1]->f_3 = 6;
				}
			}
			break;
		case 5:
			func_462(12);
			if (!func_463(12))
			{
				return false;
			}
			Local_133[iParam1] = func_1875(func_464(12), Param6, Param6.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			Local_133[iParam1]->f_3 = 6;
		case 6:
			if (is_entity_dead(&(Local_133[iParam1])))
			{
			}
			else if (!_0xa0bc8faed8cfeb3c(&(Local_133[iParam1])))
			{
			}
			else
			{
				func_943(iParam1, 1);
				set_blocking_of_non_temporary_events(&(Local_133[iParam1]), true);
				set_ped_config_flag(&(Local_133[iParam1]), 113, true);
				set_ped_config_flag(&(Local_133[iParam1]), 168, false);
				set_ped_flee_attributes(&(Local_133[iParam1]), 512, true);
				set_ped_flee_attributes(&(Local_133[iParam1]), 16384, true);
				_0x2eb75fb86c41f026(&(Local_133[iParam1]), 3, 0);
				set_animal_tuning_bool_param(&(Local_133[iParam1]), 48, true);
				_0xf74e134f40192884(&(Local_133[iParam1]), 2);
				clear_ped_tasks(&(Local_133[iParam1]), 1, 0);
				clear_ped_tasks_immediately(&(Local_133[iParam1]), false, true);
				task_stand_still(&(Local_133[iParam1]), -1);
				Local_133[iParam1]->f_3 = 7;
				return true;
			}
			return false;
			default:
				break;
	}
}

float func_1580(int iParam0, int iParam1)
{
	return func_2100(iParam0, iParam1);
}

int func_1581(var uParam0)
{
	switch (iVar1174)
	{
		case 0:
			if (!func_941(uParam0) == 1)
			{
				set_entity_coords(&(Local_133[6]), func_1336(10, 0), true, false, true, true);
				_0x9587913b9e772d29(&(Local_133[6]), 0);
			}
			iLocal_1195 = get_clock_hours();
			iLocal_1196 = get_clock_minutes();
			iLocal_1197 = get_clock_seconds();
			if (iVar1192 > 20 || (iVar1192 == 20 && iVar1193 > 20))
			{
				func_456(33);
			}
			if (!func_165(33))
			{
				if (iVar1192 < 4 || (iVar1192 == 4 && iVar1193 < 30))
				{
					func_456(33);
				}
			}
			if (func_165(33))
			{
				func_456(34);
			}
			else if (iVar1192 > 4 || (iVar1192 == 4 && iVar1193 >= 30))
			{
				if (iVar1192 < 6)
				{
					func_456(34);
				}
			}
			if (func_165(33))
			{
				func_742(&uLocal_1198, iVar1194, iVar1193, iVar1192, get_clock_day_of_month(), get_clock_month(), get_clock_year());
				func_742(&uLocal_1199, 0, 30, 4, get_clock_day_of_month(), get_clock_month(), get_clock_year());
				iVar1 = func_2101(iVar1195, iVar1196);
				iLocal_1182 = (iVar1 / 24);
			}
			if (_does_anim_scene_exist(uParam0->f_7375.f_804))
			{
				if (func_941(uParam0) == 0)
				{
					Local_941[0] = _get_anim_scene_object(uParam0->f_7375.f_804, "p_chairFolding02x", false);
					set_entity_as_mission_entity(&(Local_941[0]), true, true);
					Local_941[1] = _get_anim_scene_object(uParam0->f_7375.f_804, "p_chairFolding02x^1", false);
					if (does_entity_exist(&(Local_941[1])))
					{
						set_entity_as_mission_entity(&(Local_941[1]), true, true);
						set_entity_visible(&(Local_941[1]), true);
						freeze_entity_position(&(Local_941[1]), false);
						set_entity_collision(&(Local_941[1]), true, false);
					}
					set_entity_visible(&(Local_133[7]), true);
					set_entity_collision(&(Local_133[7]), true, false);
					freeze_entity_position(&(Local_133[7]), false);
					set_entity_visible(&(Local_133[9]), true);
					set_entity_collision(&(Local_133[9]), true, false);
					freeze_entity_position(&(Local_133[9]), false);
					set_entity_visible(&(Local_133[11]), true);
					set_entity_collision(&(Local_133[11]), true, false);
					freeze_entity_position(&(Local_133[11]), false);
				}
				else if (func_941(uParam0) == 2)
				{
					func_1350(1);
					set_anim_scene_entity(uParam0->f_7375.f_804, "p_chairFolding02x^1", &(Local_941[1]), 0);
				}
			}
			freeze_entity_position(&(Local_133[9]), false);
			break;
		case 2:
			iVar0 = 16;
			while (iVar0 <= 22)
			{
				if (func_1871(iVar0, 256))
				{
					func_1876(iVar0, 1);
				}
				iVar0++;
			}
			func_1295(&(Local_133[2]), func_551(0, 5), 2, 1073741824);
			func_1295(&(Local_133[3]), func_551(0, 6), 2, 1073741824);
			if (!is_entity_dead(&(Local_133[19])))
			{
				set_entity_visible(&(Local_133[19]), false);
			}
			if ((get_clock_hours() > 5 && get_clock_hours() <= 9) || (get_clock_hours() < 13 && get_clock_hours() >= 9))
			{
				set_clock_time(9, 0, 0);
			}
			func_1317(&(Local_133[16]), 379542007, -1, 0, 2, 1056964608, 1065353216, 0);
			break;
		case 4:
			break;
		case 25:
			animpostfx_stop(func_198(2));
			func_456(27);
			func_940(1, 0);
			iVar2 = 6;
			while (iVar2 <= 15)
			{
				if (!is_entity_dead(&(Local_133[iVar2])))
				{
					set_entity_visible(&(Local_133[iVar2]), true);
				}
				iVar2++;
			}
			func_2102(uParam0, 131072);
			break;
	}
	return 1;
}

int func_1582(var uParam0)
{
	if (!func_941(uParam0) == 1 && _does_anim_scene_exist(uParam0->f_7375.f_804))
	{
		if (!does_entity_exist(&(Local_941[2])))
		{
			Local_941[2] = _get_anim_scene_object(uParam0->f_7375.f_804, "p_chairFolding02x^2", false);
			if (does_entity_exist(&(Local_941[2])))
			{
				func_465(&(Local_941[2]->f_1), 1);
			}
		}
	}
	if (func_165(33) && !func_165(32))
	{
		if (func_941(uParam0) == 0 || func_941(uParam0) == 2)
		{
			if (_does_anim_scene_exist(uParam0->f_7375.f_804) && _is_anim_scene_started(uParam0->f_7375.f_804, false))
			{
				if ((((((((((((((((((((((((((((((has_anim_event_fired(Global_35, 909096297) || has_anim_event_fired(Global_35, 652547796)) || has_anim_event_fired(Global_35, 121526151)) || has_anim_event_fired(Global_35, -184306926)) || has_anim_event_fired(Global_35, 1394634574)) || has_anim_event_fired(Global_35, 1071302851)) || has_anim_event_fired(Global_35, -1145651079)) || has_anim_event_fired(Global_35, -1166426625)) || has_anim_event_fired(Global_35, -1476650748)) || has_anim_event_fired(Global_35, -1472733978)) || has_anim_event_fired(Global_35, -761515598)) || has_anim_event_fired(Global_35, -999844535)) || has_anim_event_fired(Global_35, -281351441)) || has_anim_event_fired(Global_35, -520401296)) || has_anim_event_fired(Global_35, 189113092)) || has_anim_event_fired(Global_35, -44103881)) || has_anim_event_fired(Global_35, 672554149)) || has_anim_event_fired(Global_35, 1375449203)) || has_anim_event_fired(Global_35, 1151931854)) || has_anim_event_fired(Global_35, -1328255409)) || has_anim_event_fired(Global_35, 2074280941)) || has_anim_event_fired(Global_35, -1922783376)) || has_anim_event_fired(Global_35, 1705924612)) || has_anim_event_fired(Global_35, 2022243769)) || has_anim_event_fired(Global_35, 1115525539)) || has_anim_event_fired(Global_35, 1414739278)) || has_anim_event_fired(Global_35, 823455438)) || has_anim_event_fired(Global_35, -75332694)) || has_anim_event_fired(Global_35, 222701361)) || has_anim_event_fired(Global_35, 1215474181)) || has_anim_event_fired(Global_35, 1530417040))
				{
					iVar0 = func_307();
					func_355(&iVar0, iVar1179, 0, 0, 0, 0, 0, 0);
					func_1586(iVar0);
				}
			}
		}
	}
	if (!func_165(40))
	{
		if (((_does_anim_scene_exist(uParam0->f_7375.f_804) && _get_anim_scene_time(uParam0->f_7375.f_804) >= 41.67f) || func_2085(&(uParam0->f_7375), 1)) || func_941(uParam0) == 1)
		{
			if (!is_entity_dead(&(Local_133[1])))
			{
				freeze_entity_position(&(Local_133[1]), false);
				_set_entity_coords_and_heading(&(Local_133[1]), func_845(0, 0), func_1297(0, 0), true, false, true);
				_0x9587913b9e772d29(&(Local_133[1]), 0);
				_0x2208438012482a1a(&(Local_133[1]), true, false);
				func_456(40);
			}
		}
	}
	if (!_does_scenario_point_exist(iVar1177))
	{
		if (_0x6eead6af637da752(666.6f, -1244.9f, 43.7f, -2097328111, 1f, 0))
		{
			iLocal_1180 = _find_closest_active_scenario_point_of_type(666.6f, -1244.9f, 43.7f, -2097328111, 1f, 0, false);
		}
	}
	if (!_does_scenario_point_exist(iVar1178))
	{
		if (_0x6eead6af637da752(666.1717f, -1243.589f, 43.6551f, -120888770, 1f, 0))
		{
			iLocal_1181 = _find_closest_active_scenario_point_of_type(666.1717f, -1243.589f, 43.6551f, -120888770, 1f, 0, false);
		}
	}
	if (!func_165(38))
	{
		if (_does_anim_scene_exist(uParam0->f_7375.f_804))
		{
			if (_get_anim_scene_time(uParam0->f_7375.f_804) >= 28.1f)
			{
				if (func_2103(uParam0, &(Local_133[9]), "MollyOshea", 0, 1, 0))
				{
					func_1587();
					func_456(38);
				}
			}
		}
	}
	if (!func_165(41))
	{
		if ((((func_2087(&(uParam0->f_7375)) > 1200 && func_2103(uParam0, &(Local_133[6]), "Dutch", 0, 1, 1)) || func_2085(&(uParam0->f_7375), 1)) || func_852(&(uParam0->f_7375), 262144)) || func_941(uParam0) == 1)
		{
			if (!is_entity_dead(&(Local_133[2])))
			{
				func_1295(&(Local_133[2]), func_551(0, 2), 2, 1073741824);
				if (func_941(uParam0) == 1)
				{
					_set_entity_coords_and_heading(&(Local_133[6]), 674.748f, -1245.03f, 43.9383f, 310.1477f, true, false, true);
					_0x9587913b9e772d29(&(Local_133[6]), 0);
				}
				task_mount_animal(&(Local_133[6]), &(Local_133[2]), 30000, -1, 1.5f, 1, 0, 0);
				_0x2208438012482a1a(&(Local_133[6]), true, false);
				force_ped_motion_state(&(Local_133[6]), -1415276238, false, 0, false);
			}
			func_943(6, 19);
			func_456(41);
		}
	}
	if (func_2103(uParam0, &(Local_133[7]), "MicahBell", 0, 1, 1))
	{
		if (!Local_133[7]->f_2 == 19)
		{
			if (!is_entity_dead(&(Local_133[3])))
			{
				func_1295(&(Local_133[3]), func_551(0, 4), 2, 1073741824);
				if (func_941(uParam0) == 1)
				{
					_set_entity_coords_and_heading(&(Local_133[7]), 673.553f, -1246.18f, 43.8481f, 290.0329f, true, false, true);
					_0x9587913b9e772d29(&(Local_133[7]), 0);
				}
				task_mount_animal(&(Local_133[7]), &(Local_133[3]), 30000, -1, 1.5f, 1, 0, 0);
				_0x2208438012482a1a(&(Local_133[7]), true, false);
				force_ped_motion_state(&(Local_133[7]), -1415276238, false, 0, false);
			}
			func_943(7, 19);
		}
	}
	if (func_2103(uParam0, Global_35, "Arthur", 0, 1, 1))
	{
		if (!is_entity_dead(&(Local_133[1])))
		{
			force_ped_motion_state(&(Local_133[1]), -1871534317, false, 0, false);
		}
		simulate_player_input_gait(player_id(), 1f, 2000, 0f, true, false);
		_0x2208438012482a1a(Global_35, true, false);
	}
	if (does_entity_exist(&(Local_941[0])) && _is_anim_scene_active(uParam0->f_7375.f_804))
	{
		func_465(&(Local_941[0]->f_1), 1);
		func_471(uParam0, 0, 0);
		func_466(24);
	}
	return 1;
}

int func_1583(var uParam0)
{
	if (func_2103(uParam0, Global_35, "Arthur", 0, 1, 1))
	{
		_hide_hud_component(724769646);
		if (!is_entity_dead(&(Local_133[19])))
		{
			set_entity_visible(&(Local_133[19]), true);
		}
		func_176(8);
		if (!is_entity_dead(&(Local_133[1])))
		{
			set_ped_config_flag(&(Local_133[1]), 136, false);
		}
		func_58(uParam0, 1);
		do_screen_fade_out(0);
	}
	return 1;
}

int func_1584(var uParam0)
{
	func_1369(7);
	func_1369(8);
	if (func_2103(uParam0, &(Local_133[16]), "ColmODriscoll", 0, 1, 1))
	{
		func_474(uParam0, 16, "ColmODriscoll", 0);
		func_466(func_1323(16));
	}
	if (func_2103(uParam0, &(Local_133[18]), "G_M_M_UniDuster_01", 0, 1, 1))
	{
		func_474(uParam0, 18, "G_M_M_UniDuster_01", 0);
		func_466(10);
	}
	return 1;
}

int func_1585(var uParam0)
{
	if (!func_82(32768))
	{
		if (!func_165(151))
		{
			if (_does_anim_scene_exist(uParam0->f_7375.f_804) && _is_anim_scene_started(uParam0->f_7375.f_804, false))
			{
				if (has_anim_event_fired(Global_35, 2030541885) || _get_anim_scene_time(uParam0->f_7375.f_804) >= (_get_anim_scene_duration(uParam0->f_7375.f_804) - 3.75f))
				{
					func_456(152);
					if (func_323())
					{
						_set_anim_scene_playback_list_bool(&(Local_1371[21]), "PBL_1", true);
					}
					else
					{
						_set_anim_scene_playback_list_bool(&(Local_1371[21]), "PBL_2", true);
					}
					func_1374(21, 1);
					func_456(151);
				}
			}
		}
	}
	else if (!func_165(147))
	{
		if (has_anim_event_fired(Global_35, 2030541885))
		{
			do_screen_fade_out(1000);
			func_456(147);
		}
	}
	return 1;
}

void func_1586(int iParam0)
{
	set_clock_time(func_738(iParam0), func_739(iParam0), func_740(iParam0));
	set_clock_date(func_737(iParam0), func_736(iParam0), func_735(iParam0));
}

void func_1587()
{
	_set_entity_coords_and_heading(&(Local_133[9]), 670f, -1262.8f, 43.7f, -42.2f, true, false, true);
	_0x9587913b9e772d29(&(Local_133[9]), 0);
	_task_use_nearest_scenario_to_coord(&(Local_133[9]), 671f, -1260f, 43.1f, 2f, -1, false, false, false, false);
	if (_0x6eead6af637da752(671f, -1260f, 43.1f, -1489483851, 5f, 1))
	{
		iVar0 = _find_closest_active_scenario_point_of_type(671f, -1260f, 43.1f, -1489483851, 5f, 1, false);
		if (_does_scenario_point_exist(iVar0))
		{
			_task_use_scenario_point(&(Local_133[9]), iVar0, 0, 0, true, false, 0, false, -1f, false);
			func_456(38);
		}
	}
}

void func_1588(int iParam0)
{
	set_animal_tuning_bool_param(&(Local_133[iParam0]), 48, true);
	_0xf74e134f40192884(&(Local_133[iParam0]), 2);
	remove_all_shocking_events(true);
	set_ped_flee_attributes(&(Local_133[iParam0]), 512, true);
	set_ped_flee_attributes(&(Local_133[iParam0]), 16384, true);
	_0x2eb75fb86c41f026(&(Local_133[iParam0]), 3, 0);
	set_ped_config_flag(&(Local_133[iParam0]), 113, true);
	set_ped_config_flag(&(Local_133[iParam0]), 168, false);
	clear_ped_tasks_immediately(&(Local_133[iParam0]), false, true);
	task_stand_still(&(Local_133[iParam0]), -1);
}

void func_1589(int iParam0)
{
	iVar0 = func_1056(iParam0, 1);
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

void func_1590(int iParam0)
{
	iVar0 = func_1056(iParam0, 1);
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

void func_1591()
{
	func_1590(-939420910);
	func_1590(-1187950766);
	func_1590(356365161);
	func_1590(753127042);
	func_1590(-2038424081);
	func_1590(1884271742);
	func_1590(459290420);
}

void func_1592()
{
	func_1590(704802028);
	func_1590(588987611);
	func_1590(2008888900);
	func_1590(1649996811);
	func_1590(227918160);
	func_1590(168171957);
	func_1590(1193080109);
	func_1590(-491981251);
	func_1590(-639037538);
	func_1590(-618620429);
}

void func_1593()
{
	if (is_entity_dead(Global_35))
	{
		return;
	}
	if (func_165(15))
	{
		if (iVar1175 == 5 || iVar1175 == 6)
		{
			if (func_165(99))
			{
				fVar0 = (((func_934(vLocal_792[34]) / 10f) * -1f) + 1f);
				fVar0 = func_516(fVar0, 0.1f, 1f);
				fLocal_1168 = fVar0;
				if (fVar0 == 0.1f)
				{
					func_176(99);
					func_456(100);
					func_592(vLocal_792[34]);
					func_456(100);
				}
			}
		}
	}
	else if (func_165(16))
	{
		if (is_ped_shooting(Global_35))
		{
			bVar1 = true;
			Local_1340.f_1 = (Local_1340.f_1 + 1f);
		}
		if (is_ped_jumping(Global_35))
		{
			if ((func_26(vLocal_792[3]) && func_934(vLocal_792[3]) >= 0.81f) || !func_26(vLocal_792[3]))
			{
				func_27(vLocal_792[3], 1);
				bVar1 = true;
				Local_1340.f_1 = (Local_1340.f_1 + 0.5f);
				func_27(vLocal_792[3], 0);
			}
		}
		if (_0x7a76104cc2cc69e8(Global_35, 0, 1))
		{
			bVar1 = true;
			Local_1340.f_1 = (Local_1340.f_1 + 2f);
		}
		if (_0x1d46b417f926d34d(Global_35))
		{
			if ((func_26(vLocal_792[4]) && func_934(vLocal_792[4]) >= 2f) || !func_26(vLocal_792[4]))
			{
				func_27(vLocal_792[4], 1);
				bVar1 = true;
				Local_1340.f_1 = (Local_1340.f_1 + 1.5f);
			}
		}
		if (Local_1340.f_1 < 0.5f)
		{
			if (_0xf60165e1d2c5370b(Global_35, &fVar2, &fVar3))
			{
				fVar4 = ((absf(fVar2) + absf(fVar3)) * 0.5f);
				fVar5 = func_2104(fVar4, 0f, 1.4f);
				fVar5 = func_516((fVar5 * 0.5f), 0f, 0.5f);
				Local_1340.f_1 = fVar5;
			}
		}
		Local_1340.f_1 = func_516(Local_1340.f_1, 0f, 2f);
		fVar6 = absf((fVar1338 - Local_1340.f_1));
		bVar7 = Local_1340.f_1 > fVar1338;
		fVar6 = (fVar6 * (func_1395(bVar7, 1f, 0.7f) * get_frame_time()));
		Local_1340 = (fVar1338 + func_1395(bVar7, fVar6, -fVar6));
		if (!bVar1)
		{
			Local_1340.f_1 = (Local_1340.f_1 - (0.7f * get_frame_time()));
		}
		Local_1340 = func_516(fVar1338, 0f, 1f);
		Local_1340.f_1 = func_516(Local_1340.f_1, 0f, 2f);
		if (fVar1338 > 0f)
		{
			fLocal_774 = fVar1338;
		}
		if (fVar1338 > 0.1f)
		{
			fLocal_774 = (fVar1338 + 1f);
			func_456(14);
		}
		else
		{
			func_176(14);
			fLocal_774 = 1f;
		}
	}
	func_2105(func_1395(func_165(15), fVar1166, fVar1338));
}

void func_1594(bool bParam0)
{
	if (bParam0)
	{
		func_1412(4);
	}
	func_1412(2);
	set_bit(&(Global_1956580->f_1), 0);
}

void func_1595(float fParam0)
{
	func_2106(ceil((to_float(300) - (to_float(300) * fParam0))));
}

void func_1596(var uParam0)
{
	iVar16 = func_33(uParam0);
	iVar17 = func_132(iVar16);
	iVar18 = func_162(uParam0, iVar16);
	if (uParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2504)
		{
			if (func_241(uParam0->f_8269[iVar19], 1048576))
			{
				if (func_2107(uParam0, uParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1514(uParam0->f_8269[iVar19]);
				}
				else if (func_2108(uParam0, uParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_250(uParam0->f_8269[iVar19]);
					{
					}
					{