void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	ScriptParam_0 = func_2(func_1());
	Var1.f_7 = 40;
	Var1.f_288 = 10;
	Var1.f_331 = 2;
	func_3(&Var1, iVar2478);
	if (has_force_cleanup_occurred(514))
	{
		func_4(&Var1);
		func_5(ScriptParam_0);
	}
	func_6(&ScriptParam_0, 0);
	iVar338 = 0;
	while (iLocal_340 < 95)
	{
		iVar337 = (iLocal_339 + func_8(func_7(iLocal_340), 1, 0));
		iVar338 = iLocal_340 + 1;
	}
	StringCopy(&(ScriptParam_0.f_35), "face_human@p_m_zero@base", 32);
	StringCopy(&(ScriptParam_0.f_39), "mood_sleeping", 32);
	ScriptParam_0.f_1 = 0;
	ScriptParam_0.f_17 = func_9(iVar2478);
	if (func_10(&Global_1935630, 131072))
	{
		set_player_invincible(player_id(), true);
	}
	ScriptParam_0.f_16 = 0;
	if (func_11() != 2)
	{
	}
	else
	{
		ScriptParam_0.f_16 = 1;
	}
	func_12(&ScriptParam_0);
	func_13(&uLocal_14);
	while (true)
	{
		if ((!func_14(iVar2478, 65536) && !func_10(&Global_1935630, 16384)) && !_0x99f92061efe908ba())
		{
			if (func_15(256))
			{
				func_16(iVar2478, 65536);
				func_6(&ScriptParam_0, 22);
			}
		}
		func_17(&ScriptParam_0, uLocal_45[0], &uLocal_2469, &iLocal_2470, &uLocal_2471);
		if (_does_volume_exist(ScriptParam_0.f_2))
		{
			if (!func_18(Global_35, ScriptParam_0.f_2, 0, 1))
			{
				if (ScriptParam_0.f_1 > 5 && ScriptParam_0.f_1 < 17)
				{
					if (ScriptParam_0.f_1 != 8 && !func_19())
					{
						if (!func_20(&ScriptParam_0))
						{
							func_21(&ScriptParam_0);
							if (ScriptParam_0.f_1 != 6)
							{
							}
							else
							{
								func_22(&Local_48);
							}
							func_6(&ScriptParam_0, 5);
						}
					}
				}
			}
			else
			{
				func_23(iVar2478);
			}
		}
		func_24(&Var1);
		switch (ScriptParam_0.f_1)
		{
			case 0:
				if (func_20(&ScriptParam_0))
				{
					func_25(&ScriptParam_0);
				}
				_text_database_request("CAMP");
				request_anim_dict(&(ScriptParam_0.f_35));
				func_6(&ScriptParam_0, 1);
				break;
			case 1:
				if (func_20(&ScriptParam_0))
				{
					func_25(&ScriptParam_0);
				}
				if (_text_database_has_loaded("CAMP") && has_anim_dict_loaded(&(ScriptParam_0.f_35)))
				{
					func_6(&ScriptParam_0, 2);
				}
				break;
			case 2:
				if (func_20(&ScriptParam_0))
				{
					switch (func_26(func_1()))
					{
						case 3:
						case 4:
							Global_40.f_9 = 1;
							break;
						default:
							Global_40.f_9 = 2;
							break;
					}
					func_27(&ScriptParam_0);
					func_25(&ScriptParam_0);
				}
				if (ScriptParam_0.f_15)
				{
					if (iVar0 <= 0)
					{
						iVar0 = get_game_timer();
					}
					ScriptParam_0.f_29 = _find_closest_active_scenario_point_of_type(ScriptParam_0.f_24, func_28(), ScriptParam_0.f_27, 0, false);
					if (_does_scenario_point_exist(ScriptParam_0.f_29))
					{
						func_29(&(ScriptParam_0.f_18), 1);
						func_6(&ScriptParam_0, 21);
					}
					else if (get_game_timer() > iVar0 + 8000)
					{
						do_screen_fade_in(500);
						func_6(&ScriptParam_0, 22);
					}
				}
				else
				{
					func_6(&ScriptParam_0, 5);
				}
				break;
			case 5:
				if (func_20(&ScriptParam_0) || func_14(iVar2478, 262144))
				{
					func_30(iVar2478, 524288);
					func_21(&ScriptParam_0);
					if (!func_31())
					{
						func_32(1);
					}
					func_33(1);
					func_25(&ScriptParam_0);
					func_30(iVar2478, 262144);
				}
				if (!func_34(&(ScriptParam_0.f_5[6])))
				{
					if (func_35(ScriptParam_0))
					{
						if (is_bit_set(Var1.f_330, 3))
						{
							ScriptParam_0.f_5[6] = func_37("CAMP_FT_PROMPT", -719620017, func_36(iVar2478), 1.5f, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, -820096546, 0);
						}
						else
						{
							ScriptParam_0.f_5[6] = func_37("CAMP_FT_PROMPT", -719620017, func_38(iVar2478), 1.5f, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, -820096546, 0);
						}
						func_39(&(ScriptParam_0.f_5[6]), 1616332288, 0, 1);
					}
				}
				if (!func_34(&(ScriptParam_0.f_5[5])))
				{
					if ((func_40(12) && !func_14(iVar2478, 2048)) && func_41())
					{
						if (!func_43(func_42(&ScriptParam_0)))
						{
							ScriptParam_0.f_5[5] = func_37("CAMP_CLOTHING", -719620017, func_42(&ScriptParam_0), 1.5f, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, -820096546, 0);
							func_39(&(ScriptParam_0.f_5[5]), -484761727, 0, 1);
							if (iLocal_339 <= 1)
							{
								func_44(&(ScriptParam_0.f_5[5]), 0, 1);
							}
						}
					}
				}
				if (!func_34(&(ScriptParam_0.f_5[1])))
				{
					if ((ScriptParam_0.f_17 && !ScriptParam_0.f_16) && !func_14(iVar2478, 2097152))
					{
						if (!func_43(func_45(&ScriptParam_0, -1773308460)))
						{
							ScriptParam_0.f_5[1] = func_37("PROPERTY_SHAVE", -719620017, func_45(&ScriptParam_0, -1773308460), 1.5f, 2, 0, 0, 4, 570, 4000, 10, 1073741824, 0, -820096546, 0);
							func_46(&(ScriptParam_0.f_5[1]), 1, 1);
							func_39(&(ScriptParam_0.f_5[1]), 242595732, 0, 1);
							_request_scenario_type(-1773308460, 15, 0, 0);
							request_model(1661492172, false);
							request_model(949441562, false);
							_0x5199405eabfbd7f0("CamTransition01");
							if (!_does_anim_scene_exist(iVar2466))
							{
								iLocal_2468 = _create_anim_scene("scenario@MECH@PLAYER_SHAVING@SHAVE_ALL_CAMP", 0, "PB_IDLE", false, true);
							}
							if (!_is_anim_scene_loaded(iVar2466, true, false) && !_is_anim_scene_loading(iVar2466, true))
							{
								load_anim_scene(iVar2466);
							}
						}
					}
				}
				if (!func_34(&(ScriptParam_0.f_5[7])))
				{
					if (!func_14(iVar2478, 16777216) && func_47())
					{
						vVar341 = { func_42(&ScriptParam_0) };
						if (iVar2478 != 7)
						{
						}
						else
						{
							vVar341 = { func_48() };
						}
						if (!func_43(vVar341))
						{
							ScriptParam_0.f_5[7] = func_37("CAMP_WEAPON_LOCKER", -473983589, vVar341, 1.5f, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, -820096546, 0);
							func_39(&(ScriptParam_0.f_5[7]), -484761727, 0, 1);
							request_script_with_name_hash(1937840514);
						}
					}
				}
				if (func_34(&(ScriptParam_0.f_5[6])))
				{
					if (is_bit_set(Var1.f_330, 3))
					{
						vVar344 = { func_36(iVar2478) };
					}
					else
					{
						vVar344 = { func_38(iVar2478) };
					}
					if (func_49(Global_35, vVar344, 1) < 1.5f)
					{
						_uiprompt_set_ambient_group_this_frame(Global_35, 1f, 1, 1, 1616332288, "FTRAVEL_GRP", 2);
					}
				}
				if (func_34(&(ScriptParam_0.f_5[1])))
				{
					if (func_49(Global_35, func_45(&ScriptParam_0, -1773308460), 1) < 1.5f)
					{
						if (!func_14(iVar2478, 8388608) || is_entity_in_volume(Global_35, ScriptParam_0.f_2, true, 0))
						{
							_uiprompt_set_ambient_group_this_frame(Global_35, 1f, 1, 1, 242595732, "SHAVE_GRP", 2);
						}
					}
				}
				if (func_34(&(ScriptParam_0.f_5[5])))
				{
					if (func_49(Global_35, func_42(&ScriptParam_0), 1) < 1.5f)
					{
						_uiprompt_set_ambient_group_this_frame(Global_35, 1f, 1, 1, -484761727, "WARDROBE", 2);
					}
				}
				else if (iVar2478 == 7 && func_34(&(ScriptParam_0.f_5[7])))
				{
					if (func_49(Global_35, func_48(), 1) < 1.5f)
					{
						_uiprompt_set_ambient_group_this_frame(Global_35, 1f, 1, 1, -484761727, "WARDROBE", 2);
					}
				}
				iVar347 = 0;
				get_current_ped_weapon(Global_35, &iVar347, true, 0, false);
				if ((((((((func_50(player_id(), 1, 0, 1) || func_51(Global_35, 0)) || is_ped_on_mount(Global_35)) || func_52()) || _is_any_app_running()) || iLocal_349 == -1016714371) || _0x69e181772886f48b(player_id())) || _0xd1f6b912785bfd35(player_id())) || _0xec7e480ff8bd0bed(Global_35))
				{
					if (!func_14(iVar2478, 4096))
					{
						func_53(&ScriptParam_0, 0);
						func_16(iVar2478, 4096);
					}
				}
				else if (func_14(iVar2478, 4096))
				{
					func_53(&ScriptParam_0, 1);
					func_30(iVar2478, 4096);
				}
				if ((_is_ped_using_scenario_hash(Global_35, -1054012177) || _is_ped_using_scenario_hash(Global_35, -2016812721)) || _is_ped_using_scenario_hash(Global_35, 1690225020))
				{
					if (!func_14(iVar2478, 4194304))
					{
						func_54(&ScriptParam_0, 0);
						func_16(iVar2478, 4194304);
					}
				}
				else if (func_14(iVar2478, 4194304))
				{
					func_54(&ScriptParam_0, 1);
					func_30(iVar2478, 4194304);
				}
				if (!func_14(iVar2478, 4096))
				{
					if (func_19())
					{
						func_55(1, 0, 0);
						func_56(&ScriptParam_0, 0, &Var1);
					}
				}
				if (!func_14(iVar2478, 4096) && !func_14(iVar2478, 4194304))
				{
					func_57(&ScriptParam_0);
					if (func_58(&(ScriptParam_0.f_5[6]), 1))
					{
						if (func_59(&Var1, iVar2478))
						{
							func_56(&ScriptParam_0, 1, &Var1);
						}
					}
					else if (func_58(&(ScriptParam_0.f_5[0]), 1))
					{
						func_56(&ScriptParam_0, 2, &Var1);
					}
					else if (func_58(&(ScriptParam_0.f_5[1]), 1))
					{
						if (_does_anim_scene_exist(iVar2466))
						{
							iVar348 = _find_closest_active_scenario_point_of_type(ScriptParam_0.f_24, -1773308460, 20f, 0, false);
							if (_does_scenario_point_exist(iLocal_350))
							{
								set_anim_scene_origin(iVar2466, _get_scenario_point_coords(iLocal_350, true), 0f, 0f, _get_scenario_point_heading(iLocal_350, true), 2);
							}
							else
							{
								set_anim_scene_origin(iVar2466, get_entity_coords(Global_35, true, false), 0f, 0f, get_entity_heading(Global_35), 2);
							}
						}
						func_13(&uLocal_14);
						func_60(&ScriptParam_0, 0);
						func_56(&ScriptParam_0, 3, &Var1);
					}
					else if (func_58(&(ScriptParam_0.f_5[5]), 1))
					{
						func_60(&ScriptParam_0, 0);
						func_56(&ScriptParam_0, 4, &Var1);
					}
					else if (func_58(&(ScriptParam_0.f_5[7]), 1))
					{
						func_56(&ScriptParam_0, 5, &Var1);
					}
					func_61(&ScriptParam_0);
				}
				break;
			case 3:
				if (func_20(&ScriptParam_0))
				{
					func_21(&ScriptParam_0);
					func_25(&ScriptParam_0);
				}
				if (does_cam_exist(ScriptParam_0.f_21) && !is_cam_active(ScriptParam_0.f_21))
				{
					func_62(&ScriptParam_0, 1);
				}
				if (ScriptParam_0.f_23 != 4)
				{
					if (ScriptParam_0.f_23 != 5)
					{
						if (is_ped_active_in_scenario(Global_35, 0) || (ScriptParam_0.f_23 == 1 && is_bit_set(Var1.f_330, 3)))
						{
							func_63(&ScriptParam_0);
						}
						else
						{
							if (!func_64(Global_35, -76381094))
							{
								func_56(&ScriptParam_0, ScriptParam_0.f_23, &Var1);
							}
							if (ScriptParam_0.f_23 == 3 || ScriptParam_0.f_23 == 2)
							{
								_disable_first_person_cam_this_frame_2();
							}
						}
					}
					else
					{
						func_63(&ScriptParam_0);
					}
				}
				else
				{
					func_63(&ScriptParam_0);
				}
				break;
			case 6:
				if (func_20(&ScriptParam_0))
				{
					func_65(&ScriptParam_0);
					func_21(&ScriptParam_0);
					func_25(&ScriptParam_0);
				}
				if (!func_66(&Local_48))
				{
					if (ScriptParam_0.f_23 == -1)
					{
						func_67();
						func_68(&ScriptParam_0, 0);
						func_6(&ScriptParam_0, 5);
					}
					else
					{
						render_script_cams(false, false, 3000, true, false, 0);
						func_69(&ScriptParam_0);
					}
				}
				func_60(&ScriptParam_0, 1);
				break;
			case 23:
				_0xc9caeaeec1256e54(474191950);
				if (has_script_with_name_hash_loaded(1937840514))
				{
					start_new_script_with_name_hash(1937840514, 1024);
					set_script_with_name_hash_as_no_longer_needed(1937840514);
					func_6(&ScriptParam_0, 24);
				}
				else
				{
					request_script_with_name_hash(1937840514);
				}
				break;
			case 24:
				_0xc9caeaeec1256e54(474191950);
				if (_get_number_of_references_of_script_with_name_hash(1937840514) <= 0)
				{
					func_6(&ScriptParam_0, 5);
				}
				break;
			case 7:
				if (func_20(&ScriptParam_0))
				{
					func_21(&ScriptParam_0);
					func_25(&ScriptParam_0);
				}
				func_6(&ScriptParam_0, 8);
				break;
			case 8:
				if (func_20(&ScriptParam_0))
				{
					func_70(&Var1);
					func_25(&ScriptParam_0);
				}
				if (func_71(&Var1))
				{
					if (ScriptParam_0.f_23 == -1)
					{
						func_67();
						func_6(&ScriptParam_0, 5);
						clear_ped_tasks(Global_35, 1, 0);
					}
					else
					{
						func_69(&ScriptParam_0);
						clear_ped_tasks(Global_35, 1, 0);
					}
				}
				else if (func_72(&Var1))
				{
					func_16(iVar2478, 131072);
					func_6(&ScriptParam_0, 17);
				}
				break;
			case 9:
				if (func_20(&ScriptParam_0))
				{
					func_73(&ScriptParam_0);
					func_25(&ScriptParam_0);
				}
				if (!func_19())
				{
					func_74(0);
					func_75(0, 0);
					func_76(1);
					func_67();
					func_77();
					func_78(1);
					func_79();
					if (ScriptParam_0.f_23 == -1)
					{
						func_6(&ScriptParam_0, 5);
					}
					else
					{
						func_69(&ScriptParam_0);
					}
				}
				break;
			case 11:
				if (func_20(&ScriptParam_0))
				{
					func_25(&ScriptParam_0);
					func_21(&ScriptParam_0);
				}
				iVar340 = func_80(iVar2478);
				if (func_81(iLocal_342))
				{
					_request_imap(iLocal_342);
				}
				Global_1395601 = 1;
				func_69(&ScriptParam_0);
				break;
			case 12:
				ScriptParam_0.f_68 = _0xa24c1d341c6e0d53(1, 0, 0);
				if (ScriptParam_0.f_68)
				{
					_disable_first_person_cam_this_frame_2();
					_0x8910c24b7e0046ec();
				}
				if (animpostfx_is_running("CamTransition01") || ScriptParam_0.f_68)
				{
					set_anim_scene_entity(iVar2466, "player", Global_35, 0);
					start_anim_scene(iVar2466);
					_0x2208438012482a1a(Global_35, false, false);
					func_6(&ScriptParam_0, 4);
				}
				break;
			case 4:
				if (func_20(&ScriptParam_0))
				{
					Local_48.f_2 = 25;
					Local_48.f_19 = 0;
					Local_48.f_3 = 151;
					Local_48.f_18 = 76;
					if (!bVar2465)
					{
						bLocal_2467 = func_83(&Local_48, func_82(25), -1, 1);
						func_84(1);
					}
					func_85();
					if (bVar2465)
					{
						func_87(&Local_48, 15335);
						func_89(&Local_48, 15377);
						if (func_90(&Local_48))
						{
							func_25(&ScriptParam_0);
						}
					}
				}
				func_60(&ScriptParam_0, 1);
				bVar339 = func_91(&Local_48);
				if (!bLocal_341)
				{
					func_92(&Local_48);
					bLocal_2467 = false;
					if (!ScriptParam_0.f_68)
					{
						ScriptParam_0.f_68 = 0;
						animpostfx_play("CamTransition01");
					}
					func_6(&ScriptParam_0, 13);
				}
				else
				{
					_disable_first_person_cam_this_frame();
					_0x8910c24b7e0046ec();
					func_93(&uLocal_14);
				}
				break;
			case 13:
				clear_ped_tasks(Global_35, 1, 0);
				func_94(10, 0, 0, 0, 0);
				func_95(Global_35, -1801499084, 1);
				func_96(&uLocal_14);
				func_97();
				func_67();
				func_84(0);
				set_ped_can_head_ik(player_ped_id(), true);
				func_69(&ScriptParam_0);
				break;
			case 21:
				if (func_20(&ScriptParam_0))
				{
					ScriptParam_0.f_23 = 0;
					if (_is_scenario_point_active(ScriptParam_0.f_29))
					{
						_task_use_scenario_point(Global_35, ScriptParam_0.f_29, 0, 0, false, true, 0, false, -1f, false);
						func_25(&ScriptParam_0);
					}
				}
				if ((((!Global_1935630->f_12 && !func_98()) && !func_99()) || func_100(&(ScriptParam_0.f_18)) > 8000) && Global_1310720->f_5 < (get_game_timer() - 2000))
				{
					if ((is_ped_active_in_scenario(Global_35, 0) || func_100(&(ScriptParam_0.f_18)) > 8000) || !_is_scenario_point_active(ScriptParam_0.f_29))
					{
						if (func_10(&Global_1935630, 131072))
						{
							func_101(Global_1935630, 131072);
						}
						func_62(&ScriptParam_0, 0);
						_0xa565fac215cbc77d();
						shutdown_loading_screen();
						func_102(1024);
						func_103();
						play_sound_frontend("TITLE_SCREEN_EXIT", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
						do_screen_fade_out(0);
						set_player_invincible(player_id(), false);
						func_104(0);
						func_105();
						func_106(&(ScriptParam_0.f_18));
						func_6(&ScriptParam_0, 16);
					}
				}
				break;
			case 10:
				if (func_20(&ScriptParam_0))
				{
					set_player_control(player_id(), true, 256, false);
					freeze_entity_position(Global_35, false);
					func_21(&ScriptParam_0);
					func_25(&ScriptParam_0);
				}
				if (does_entity_exist(Global_35) && !Global_1935630->f_12)
				{
					if (!ped_has_use_scenario_task(Global_35))
					{
						_display_hud_component(-1347445791);
						ScriptParam_0.f_4 = 0;
						func_68(&ScriptParam_0, 1);
						func_67();
						func_6(&ScriptParam_0, 5);
					}
				}
				break;
			case 16:
				if (func_20(&ScriptParam_0))
				{
					func_107(1);
					func_108(28, 1);
					if (!func_109())
					{
						do_screen_fade_in(500);
					}
					func_25(&ScriptParam_0);
				}
				if ((is_screen_faded_in() && !is_screen_fading_out()) && !is_screen_fading_in())
				{
					func_101(Global_1935630, 16384);
					func_68(&ScriptParam_0, 1);
					if (ScriptParam_0.f_23 != -1)
					{
						func_69(&ScriptParam_0);
					}
					else
					{
						func_6(&ScriptParam_0, 5);
					}
				}
				break;
			case 17:
				if (func_20(&ScriptParam_0))
				{
					func_25(&ScriptParam_0);
				}
				func_6(&ScriptParam_0, 18);
				break;
			case 18:
				if (func_20(&ScriptParam_0))
				{
					func_25(&ScriptParam_0);
				}
				if ((func_110(&Var1) && !func_10(&Global_1935630, 16384)) && !_0x99f92061efe908ba())
				{
					func_6(&ScriptParam_0, 20);
				}
				break;
			case 20:
				if (func_20(&ScriptParam_0))
				{
					func_25(&ScriptParam_0);
				}
				func_4(&Var1);
				func_6(&ScriptParam_0, 22);
				break;
			case 22:
				if (func_20(&ScriptParam_0))
				{
					func_25(&ScriptParam_0);
				}
				if (!func_10(&Global_1935630, 16384) && !_0x99f92061efe908ba())
				{
					func_4(&Var1);
				}
				func_5(ScriptParam_0);
				break;
		}
		wait(0);
	}
}

int func_1()
{
	return Global_1894899->f_2;
}

int func_2(int iParam0)
{
	if (!func_111(iParam0))
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

void func_3(var uParam0, int iParam1)
{
	if (func_112(iParam1))
	{
		set_bit(&(uParam0->f_330), 3);
	}
	else
	{
		clear_bit(&(uParam0->f_330), 3);
	}
}

void func_4(var uParam0)
{
	func_113(uParam0);
	func_114(uParam0);
	if (_does_anim_scene_exist(uParam0->f_332))
	{
		_delete_anim_scene(uParam0->f_332);
	}
	clear_bit(&(uParam0->f_330), 1);
	_0xd9edb2e4512d563e(0, false, 0f, 0f, 0f, 1f, false, 0f);
}

void func_5(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	func_115(&uParam0);
	terminate_this_thread();
}

void func_6(int iParam0, int iParam1)
{
	if (iParam0->f_1 != iParam1)
	{
		iParam0->f_1 = iParam1;
		func_116(iParam0);
	}
}

bool func_7(int iParam0)
{
	if (!func_117(iParam0))
	{
		return false;
	}
	if (func_118(iParam0, 4))
	{
		return true;
	}
	return false;
}

int func_8(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_9(int iParam0)
{
	if (!func_119(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
			return 1;
		case 15:
			if (func_120((*Global_1347702)[2]->f_15, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_10(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_11()
{
	return Global_40.f_4283.f_4;
}

void func_12(int iParam0)
{
	if (*iParam0 == 9)
	{
		iLocal_47 = _create_volume_box_with_custom_name(2638.082f, -1222.836f, 60.329f, 0f, 0f, 0f, 6.465f, 5.838f, 3.552f, "SaintDenis-volRentalRoomPedBlocking");
		if (_does_volume_exist(iLocal_47))
		{
			func_121(iLocal_47, 0);
			_0xb56d41a694e42e86(iLocal_47, 10208, 0, 0, -1, -1, 0);
			_0x18262cafebb5fbe1(iLocal_47, 10208, 0, 0, -1, -1, 0);
		}
	}
}

void func_13(char* sParam0)
{
	if (!_0xdd0b7c5ae58f721d(sParam0))
	{
		if (func_122() == 7 || func_122() == 8)
		{
			StringCopy(&(sParam0->f_8), "SHAVE_ORBIT_PRONGHORN_REQUEST", 64);
		}
		else if (func_122() == 3)
		{
			StringCopy(&(sParam0->f_8), "SHAVE_ORBIT_SHADY_REQUEST", 64);
		}
		else
		{
			StringCopy(&(sParam0->f_8), "SHAVE_ORBIT_REQUEST", 64);
		}
		StringCopy(sParam0, "shave_orbit_cam", 64);
		_0x6a4d224fc7643941(sParam0);
	}
}

bool func_14(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return false;
	}
	return (Global_40.f_9384[iParam0] && iParam1) != 0;
}

bool func_15(int iParam0)
{
	return (Global_1395601->f_4 && iParam0) != 0;
}

void func_16(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0] = (Global_40.f_9384[iParam0] || iParam1);
}

void func_17(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	if (func_43(iParam0->f_24))
	{
		return;
	}
	iParam0->f_29 = _find_closest_active_scenario_point_of_type(iParam0->f_24, -1773308460, 10f, 0, false);
	if (!_does_scenario_point_exist(iParam0->f_29))
	{
		return;
	}
	vVar0 = { _get_scenario_point_coords(iParam0->f_29, true) };
	if (!does_entity_exist(*uParam1))
	{
		if (*uParam4 == 0)
		{
			*uParam4 = _0x6f3068258a499e52(1661492172, vVar0, 15);
		}
		else if (_0x1ff441d7954f8709(*uParam4))
		{
			*uParam1 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(*uParam4));
		}
	}
	else
	{
		if (is_valid_interior(get_interior_from_entity(*uParam1)))
		{
			return;
		}
		if (_0x3ab6c7b0bb0df4b1(Global_35, -1) || !is_gameplay_cam_rendering())
		{
			return;
		}
		if (!_is_tracked_point_valid(*uParam2))
		{
			*uParam2 = create_tracked_point();
			set_tracked_point_info(*uParam2, get_entity_coords(*uParam1, true, false), 1f);
		}
		if (!*iParam3 && is_tracked_point_visible(*uParam2))
		{
			_0xa04ef43030593abc(*uParam1, 2);
			*iParam3 = 1;
		}
		else if (*iParam3 && !is_tracked_point_visible(*uParam2))
		{
			_0xa21af60c9f99ccc5();
			*iParam3 = 0;
		}
	}
}

bool func_18(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_19()
{
	return Global_1392040->f_6;
}

bool func_20(int iParam0)
{
	return iParam0->f_3;
}

void func_21(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iParam0->f_5)
	{
		if (func_34(&(iParam0->f_5[iVar0])))
		{
			func_123(iParam0->f_5[iVar0], 1, 1);
		}
		iVar0++;
	}
}

void func_22(var uParam0)
{
	if (func_124(uParam0))
	{
		func_92(uParam0);
	}
	if (is_bit_set(uParam0->f_2280.f_5, 10))
	{
		Global_1949598->f_1 = 0;
		if (!_0xa24c1d341c6e0d53(1, 0, 0))
		{
			animpostfx_play("CamTransition01");
		}
		_display_hud_component(-252438768);
		if (_does_volume_exist(uParam0->f_2280.f_1))
		{
			_0x74c2b3dc0b294102(uParam0->f_2280.f_1);
			_0x2c87c3e1c7b96ee2(uParam0->f_2280.f_1);
			remove_scenario_blocking_area(uParam0->f_2280.f_3, false);
			_delete_volume(uParam0->f_2280.f_1);
		}
		switch (func_125())
		{
			case -1:
				func_126(&(uParam0->f_2280));
				break;
		}
		func_127(uParam0->f_2280, 1);
		func_94(31, 0, 0, 0, 0);
		func_128(0);
		func_129(0, 1);
		func_130();
		clear_ped_tasks_immediately(uParam0->f_2280, false, true);
		set_entity_coords(uParam0->f_2280, uParam0->f_2280.f_15, true, false, true, true);
		set_entity_heading(uParam0->f_2280, uParam0->f_2280.f_18);
		_0x9587913b9e772d29(uParam0->f_2280, 0);
		func_131(1, uParam0->f_2280);
		set_gameplay_cam_relative_heading(uParam0->f_2280.f_19, 1f);
		set_gameplay_cam_relative_pitch(0f, 1f);
		_0x2208438012482a1a(uParam0->f_2280, false, false);
		set_player_control(player_id(), true, 0, false);
		func_132(uParam0);
		func_133(&(uParam0->f_2280.f_2));
		func_134();
	}
	func_135(&(uParam0->f_2280));
	uParam0->f_2280.f_5 = 0;
}

int func_23(int iParam0)
{
	if (!func_136() && iParam0 != 6)
	{
		return 0;
	}
	if (!func_137(Global_35, 0))
	{
		return 0;
	}
	disable_control_action(0, -562475458, false);
	disable_control_action(0, -640622144, false);
	disable_control_action(0, -455946723, false);
	set_ped_reset_flag(Global_35, 168, true);
	return 1;
}

void func_24(var uParam0)
{
	func_138(uParam0);
	switch (uParam0->f_331)
	{
		case 2:
			break;
		case 0:
			func_139(uParam0, 1);
			break;
		case 1:
			if (is_bit_set(uParam0->f_330, 2))
			{
				func_140(uParam0);
				func_16(uParam0->f_333, 256);
				func_139(uParam0, 3);
				if (func_1() == 71)
				{
					_0xd9edb2e4512d563e(0, true, -122.5f, -40.094f, 96f, 0.9f, false, 0f);
				}
			}
			break;
		case 3:
			switch (func_141(uParam0))
			{
				case 1:
					break;
				case 2:
					if (func_143(uParam0, func_142(uParam0)))
					{
						uParam0->f_335 = 0;
						iVar0 = func_144();
						if (!func_145(uParam0, &iVar0))
						{
						}
						else
						{
							iVar1 = func_146(uParam0);
							if (func_137(Global_35, 0))
							{
								set_entity_invincible(func_147(Global_35), true);
							}
							if (func_137(iVar1, 0))
							{
								set_entity_invincible(func_147(iVar1), true);
							}
							if (!func_148(iVar1))
							{
								func_149(iVar1, 1);
								uParam0->f_335 = 1;
							}
							if (!_does_anim_scene_exist(uParam0->f_332))
							{
								func_139(uParam0, 5);
							}
							else
							{
								set_anim_scene_entity(uParam0->f_332, "player", player_ped_id(), 0);
								set_anim_scene_entity(uParam0->f_332, "HORSE", func_146(uParam0), 0);
								do_screen_fade_out(1000);
								func_150(0);
								func_139(uParam0, 4);
							}
							func_113(uParam0);
						}
					}
					break;
				case 0:
					if (is_bit_set(uParam0->f_330, 3))
					{
						func_151(uParam0);
					}
					_0xd9edb2e4512d563e(0, false, 0f, 0f, 0f, 1f, false, 0f);
					func_139(uParam0, 9);
					break;
			}
			break;
		case 4:
			if (!_is_anim_scene_started(uParam0->f_332, false) && is_screen_faded_out())
			{
				start_anim_scene(uParam0->f_332);
				_0x6339c1ea3979b5f7("fast_travel_active", "Fast_Travel_Scenes");
				display_radar(false);
				display_hud(false);
			}
			if (!_is_anim_scene_finished(uParam0->f_332, false))
			{
				if (is_screen_faded_out() && ((((_0x8d81e7824b7753f7(uParam0->f_332, "Loop", 1) || _0x8d81e7824b7753f7(uParam0->f_332, "s_EXIT", 1)) || _0x8d81e7824b7753f7(uParam0->f_332, "s_EXIT_Left", 1)) || _0x8d81e7824b7753f7(uParam0->f_332, "s_EXIT_Right", 1)) || _get_anim_scene_progress(uParam0->f_332) >= 0.5f))
				{
					do_screen_fade_in(1000);
				}
				if ((_0x8d81e7824b7753f7(uParam0->f_332, "Loop", 1) || (_0x8d81e7824b7753f7(uParam0->f_332, "s_EXIT", 1) && _get_anim_scene_progress(uParam0->f_332) >= 0.65f)) || (_0x8d81e7824b7753f7(uParam0->f_332, "s_EXIT_Left", 1) && _get_anim_scene_progress(uParam0->f_332) >= 0.3f))
				{
					func_139(uParam0, 5);
				}
			}
			else
			{
				func_139(uParam0, 5);
			}
			break;
		case 5:
			if (func_152(uParam0) == 6)
			{
				func_139(uParam0, 6);
			}
			else
			{
				func_139(uParam0, 3);
			}
			break;
		case 6:
			if (!is_bit_set(uParam0->f_330, 4))
			{
				if (_0x3ab6c7b0bb0df4b1(Global_35, -1))
				{
					render_script_cams(false, false, 3000, true, false, 0);
					set_bit(&(uParam0->f_330), 4);
					_0xd9edb2e4512d563e(0, false, 0f, 0f, 0f, 1f, false, 0f);
				}
			}
			else if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && uParam0->f_335)
			{
				uParam0->f_335 = 0;
				func_153(func_146(uParam0), 1);
				_set_ped_body_component(func_146(uParam0), 1758465023);
			}
			if (_does_anim_scene_exist(uParam0->f_332) && is_screen_faded_out())
			{
				_delete_anim_scene(uParam0->f_332);
			}
			if (func_154(uParam0))
			{
				if (is_bit_set(uParam0->f_330, 3))
				{
					func_151(uParam0);
				}
				if (func_137(Global_35, 0))
				{
					set_entity_invincible(func_147(Global_35), false);
				}
				if (func_137(func_146(uParam0), 0))
				{
					set_entity_invincible(func_147(func_146(uParam0)), false);
				}
				func_139(uParam0, 7);
			}
			break;
		case 7:
			clear_bit(&(uParam0->f_330), 4);
			func_30(uParam0->f_333, 256);
			_0x9428447ded71fc7e("Fast_Travel_Scenes");
			func_139(uParam0, 8);
			break;
		case 8:
			break;
		case 9:
			func_30(uParam0->f_333, 256);
			func_113(uParam0);
			clear_bit(&(uParam0->f_330), 2);
			func_139(uParam0, 10);
			break;
		case 10:
			break;
	}
}

void func_25(int iParam0)
{
	iParam0->f_3 = 0;
}

int func_26(int iParam0)
{
	if (!func_111(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

void func_27(int iParam0)
{
	if (!_does_volume_exist(iParam0->f_2))
	{
		return;
	}
	vVar3 = { _0xf70f00013a62f866(iParam0->f_2) };
	vVar0 = { _0x3e2a25b2416dd67e(iParam0->f_2) };
	if (!func_43(vVar0))
	{
		if (vVar0.x >= vVar0.y)
		{
			fVar6 = vVar0.x;
		}
		else
		{
			fVar6 = vVar0.y;
		}
	}
	else
	{
		fVar6 = 20f;
	}
	iParam0->f_24 = { vVar3 };
	iParam0->f_27 = fVar6;
}

int func_28()
{
	iVar0 = func_1();
	iVar1 = func_2(iVar0);
	if (!func_119(iVar1))
	{
		return 0;
	}
	switch (iVar1)
	{
		case 1:
			return -1054012177;
		case 5:
			return 1097070152;
		case 15:
			if (!func_155(70))
			{
				return 1097070152;
			}
			else
			{
				return -1054012177;
			}
			break;
		default:
			return -1054012177;
	}
	return 0;
}

void func_29(var uParam0, bool bParam1)
{
	if (bParam1 || !func_156(uParam0))
	{
		func_157(uParam0);
	}
}

void func_30(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0] = (&Global_40.f_9384[iParam0] - (Global_40.f_9384[iParam0] && iParam1));
}

bool func_31()
{
	return Global_1905944->f_5694;
}

void func_32(int iParam0)
{
	Global_1905944->f_5694 = iParam0;
}

void func_33(bool bParam0)
{
	if (func_158())
	{
		if (func_159() == 0)
		{
			bParam0 = false;
		}
		if (func_159() == 7)
		{
			if ((((((func_160(61) || func_160(62)) || func_160(63)) || func_160(64)) || func_160(65)) || func_160(66)) || func_160(67))
			{
				bParam0 = false;
			}
		}
	}
	if (bParam0)
	{
		func_161(1073741824);
	}
	else
	{
		func_162(1073741824);
	}
}

bool func_34(int iParam0)
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

bool func_35(struct<17> Param0, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	if (func_163(9, 0))
	{
		return false;
	}
	if (func_164(Param0))
	{
		return false;
	}
	if (func_14(Param0, 128))
	{
		return false;
	}
	if (!func_14(Param0, 64))
	{
		return false;
	}
	if (Param0.f_16)
	{
	}
	if (func_43(func_45(&Param0, 1452327073)))
	{
		return false;
	}
	if (func_122() == 7)
	{
		return false;
	}
	if (func_122() == 8 && !func_155(73))
	{
		return false;
	}
	return true;
}

Vector3 func_36(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -121.9283f, -40.1821f, 94.5436f;
		case 2:
			return 650.6963f, -1247.359f, 42.6926f;
		case 0:
			return 2340.41f, 1354.968f, 105.3518f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_37(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_43(vParam2))
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
		if (func_165(iVar0, 2))
		{
			if (func_166(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
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
		func_167(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

Vector3 func_38(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 1905.507f, -1860.987f, 46.3492f;
		case 15:
			if (func_155(70))
			{
				return -1633.542f, -1356.915f, 83.4029f;
			}
			else if (func_155(73))
			{
				return -1667.943f, -1342.911f, 82.8886f;
			}
			else
			{
				return 0f, 0f, 0f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_39(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_34(iParam0))
	{
		return;
	}
	iVar0 = func_168(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

bool func_40(int iParam0)
{
	if (!func_169(iParam0))
	{
		return false;
	}
	return func_170(iParam0);
}

bool func_41()
{
	return &Global_1949598;
}

Vector3 func_42(int iParam0)
{
	switch (*iParam0)
	{
		case 8:
			return -326.2195f, 759.3564f, 120.6335f;
		case 0:
			return 2342.574f, 1358.693f, 105.4513f;
		case 1:
			return func_45(iParam0, 429473903);
		case 3:
			return func_45(iParam0, 429473903);
		case 4:
			return -124.7364f, -37.98547f, 94.63575f;
		case 2:
			return 654.4426f, -1245.271f, 42.6708f;
		case 5:
			return 2224.406f, -770.556f, 42.5253f;
		case 6:
			return 1904.4f, -1859.5f, 47.4f;
		case 7:
			return 0f, 0f, 0f;
		case 9:
			return 2638.767f, -1221.976f, 58.6005f;
		case 12:
			return 2976.987f, 575.8724f, 46.8771f;
		case 14:
			return -1811.204f, -369.914f, 165.4986f;
		case 15:
			if (func_155(70))
			{
				return -1649.888f, -1363.463f, 83.4029f;
			}
			else if (func_155(73))
			{
				return -1673.013f, -1338.766f, 83.14853f;
			}
			else
			{
				return 0f, 0f, 0f;
			}
			break;
	}
	return func_45(iParam0, 429473903);
}

bool func_43(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_44(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_34(iParam0))
	{
		return;
	}
	iVar0 = func_168(iParam0);
	if (bParam1)
	{
		func_171(iParam0, 4);
		func_172(iVar0, 1);
		func_173(iVar0, 1);
	}
	else
	{
		func_174(iParam0, 4);
		func_173(iVar0, 0);
	}
}

Vector3 func_45(int iParam0, int iParam1)
{
	if (*iParam0 == 15)
	{
		return -1649.097f, -1361.309f, 84.4029f;
	}
	else
	{
		iVar0 = _find_closest_active_scenario_point_of_type(iParam0->f_24, iParam1, 10f, 0, false);
	}
	if (_does_scenario_point_exist(iVar0))
	{
		return _get_scenario_point_coords(iVar0, true);
	}
	return 0f, 0f, 0f;
}

void func_46(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_34(iParam0))
	{
		return;
	}
	iVar0 = func_168(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_0xf4a5c4509bf923b1((*Global_1945938)[iVar0]->f_3, iParam1);
}

bool func_47()
{
	if (!does_script_with_name_hash_exist(1937840514))
	{
		return false;
	}
	if (_0x7c7e4ab748ea3b07())
	{
		return false;
	}
	return true;
}

Vector3 func_48()
{
	return -2594.96f, 453.46f, 146f;
}

float func_49(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_50(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_175(bParam1, bParam2, bParam3);
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

bool func_51(int iParam0, int iParam1)
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

bool func_52()
{
	if (_is_ped_carrying(Global_35) || func_176(Global_35))
	{
		return true;
	}
	return false;
}

void func_53(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 != 2)
		{
			if (func_34(&(iParam0->f_5[iVar0])))
			{
				func_44(&(iParam0->f_5[iVar0]), bParam1, 1);
			}
		}
		iVar0++;
	}
	func_33(bParam1);
}

void func_54(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 != 2)
		{
			if (func_34(&(iParam0->f_5[iVar0])))
			{
				func_44(&(iParam0->f_5[iVar0]), bParam1, 1);
				func_177(&(iParam0->f_5[iVar0]), bParam1, 1);
			}
		}
		iVar0++;
	}
	func_33(bParam1);
}

int func_55(bool bParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (!func_178(iVar1, bParam0, iParam1, bParam2))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_56(int iParam0, int iParam1, var uParam2)
{
	if (!func_179(iParam1))
	{
		return;
	}
	if (func_137(Global_35, 0))
	{
		func_180();
	}
	if (iParam0->f_14 > 0)
	{
		iParam0->f_14 = -1;
	}
	func_32(0);
	iVar2 = 0;
	iVar3 = 23922;
	iParam0->f_23 = iParam1;
	switch (iParam1)
	{
		case 4:
			iVar1 = 6;
			iParam0->f_43.f_9 = 1;
			iParam0->f_43.f_10 = 0;
			iVar0 = 429473903;
			iVar2 = 256;
			break;
		case 2:
			iVar1 = 11;
			iParam0->f_43.f_9 = 0;
			iVar0 = 1058019971;
			iVar2 = 256;
			break;
		case 3:
			iVar1 = 4;
			iParam0->f_43.f_9 = 0;
			if (*iParam0 != 6)
			{
				iParam0->f_43.f_10 = 0;
			}
			else
			{
				set_transition_timecycle_modifier("CAMP_Grooming_Shadybelle", 2f);
			}
			iVar0 = -1773308460;
			iVar2 = 256;
			break;
		case 1:
			iVar1 = 7;
			iVar0 = 1452327073;
			break;
		case 0:
			iVar1 = 9;
			func_6(iParam0, iVar1);
			return;
		case 5:
			func_6(iParam0, 3);
			return;
	}
	if (iParam1 == 4)
	{
		func_182(iParam0, iVar0, &vVar4, &uVar7, &uVar8);
		iParam0->f_30 = { vVar4 };
		iParam0->f_33 = uVar7;
		func_183(uVar8, vVar4, uVar7, 1073741824);
		func_184(vVar4, uVar7, vVar4, uVar7);
		func_185(0);
		Global_1949604->f_5865 = 0;
		func_187(func_186(iParam1));
		iParam0->f_28 = get_game_timer();
		func_188(16);
		func_6(iParam0, 3);
		return;
	}
	iParam0->f_29 = _find_closest_active_scenario_point_of_type(iParam0->f_24, iVar0, iParam0->f_27, 0, false);
	if (iParam0->f_29 != 0)
	{
		if (iParam1 == 3)
		{
			iParam0->f_30 = { _get_scenario_point_coords(iParam0->f_29, true) };
			iParam0->f_33 = _get_scenario_point_heading(iParam0->f_29, true);
			func_189(iParam0->f_29);
			if (func_190(&iVar9))
			{
				func_191(iVar9, 0);
			}
		}
		Stack.Push(iParam0);
		Call_Loc(iVar3);
		if (iParam1 == 3)
		{
			freeze_entity_position(Global_35, true);
		}
		if (iParam1 != 0)
		{
			set_player_control(player_id(), false, iVar2, false);
			clear_ped_tasks(Global_35, 1, 0);
		}
		iParam0->f_4 = 1;
		if (iParam1 == 1 && is_bit_set(uParam2->f_330, 3))
		{
			func_192(uParam2);
			func_70(uParam2);
		}
		else if (iParam1 == 3)
		{
			if (_is_tracked_point_valid(iVar2464))
			{
				destroy_tracked_point(iVar2464);
			}
			iLocal_2470 = 0;
			if (!_0xa24c1d341c6e0d53(1, 0, 0))
			{
				animpostfx_play("CamTransition01");
			}
		}
		else
		{
			_task_use_scenario_point(Global_35, iParam0->f_29, 0, 0, true, false, 0, false, -1f, false);
		}
		set_ped_config_flag(Global_35, 218, true);
		iParam0->f_28 = get_game_timer();
		func_187(func_186(iParam1));
		func_188(16);
		if (iParam1 == 3)
		{
			func_6(iParam0, 12);
		}
		else
		{
			func_6(iParam0, 3);
		}
	}
	else
	{
		func_6(iParam0, iVar1);
	}
}

void func_57(int iParam0)
{
	if (func_34(&(iParam0->f_5[1])))
	{
		func_193(&(iParam0->f_5[1]), "PROPERTY_SHAVE", 1);
		func_44(&(iParam0->f_5[1]), 1, 1);
	}
}

bool func_58(int iParam0, bool bParam1)
{
	if (bParam1 && !func_34(iParam0))
	{
		return false;
	}
	iVar0 = func_168(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_59(var uParam0, int iParam1)
{
	if (!func_119(iParam1))
	{
		return false;
	}
	uParam0->f_333 = iParam1;
	if (!func_194(uParam0, 0, 0, -1, 1))
	{
		return false;
	}
	if (!func_195(&(uParam0->f_7), 1, 0))
	{
		func_196("NO_REGION_FT", 10000, 0, 0, 0, 1);
		return false;
	}
	if (!func_197(uParam0))
	{
		return false;
	}
	clear_bit(&(uParam0->f_330), 2);
	set_bit(&(uParam0->f_330), 1);
	func_139(uParam0, 0);
	return true;
}

void func_60(int iParam0, bool bParam1)
{
	if (!func_198())
	{
		return;
	}
	switch (iParam0->f_43.f_10)
	{
		case 0:
			func_199(iParam0);
			iParam0->f_43.f_8 = _create_anim_scene(&(iParam0->f_43), 0, 0, false, true);
			load_anim_scene(iParam0->f_43.f_8);
			iParam0->f_43.f_10 = 1;
			break;
		case 1:
			if (_is_anim_scene_loaded(iParam0->f_43.f_8, true, false))
			{
				iParam0->f_43.f_10 = 2;
			}
			break;
		case 2:
			if (bParam1)
			{
				if (iParam0->f_43.f_9)
				{
					iParam0->f_30 = { get_entity_coords(Global_35, true, false) };
					iParam0->f_33 = get_entity_heading(Global_35);
					set_anim_scene_origin(iParam0->f_43.f_8, iParam0->f_30, 0f, 0f, iParam0->f_33, 2);
					attach_anim_scene_to_entity_preserving_location(iParam0->f_43.f_8, Global_35, -1);
					start_anim_scene(iParam0->f_43.f_8);
				}
				else if (does_object_of_type_exist_at_coords(iParam0->f_30, 3f, 949441562, false))
				{
					iVar0 = get_closest_object_of_type(iParam0->f_30, 3f, 949441562, false, false, false);
					iParam0->f_30 = { get_entity_coords(iVar0, true, false) };
					iParam0->f_33 = get_entity_heading(iVar0);
					set_anim_scene_origin(iParam0->f_43.f_8, iParam0->f_30, 0f, 0f, iParam0->f_33, 2);
					start_anim_scene(iParam0->f_43.f_8);
				}
				iParam0->f_43.f_10 = 3;
			}
			break;
		case 3:
			if (iParam0->f_43.f_9)
			{
				if (*iParam0 == 15)
				{
					set_timecycle_modifier("CAMP_Wardrobe_Beechers");
				}
				else
				{
					set_timecycle_modifier("CAMP_Wardrobe");
				}
			}
			else
			{
				set_transition_timecycle_modifier("CAMP_Grooming", 2f);
			}
			iParam0->f_43.f_10 = 4;
			break;
		case 4:
			break;
	}
}

void func_61(int iParam0)
{
	if (func_200(65536) && func_200(131072))
	{
		return;
	}
	if (func_201())
	{
		return;
	}
	if (func_202())
	{
		return;
	}
	if (bVar2469 && func_43(vLocal_2475))
	{
		return;
	}
	else if (func_43(vLocal_2475))
	{
		vLocal_2475 = { func_203(iParam0) };
	}
	if (func_34(iVar2470))
	{
		if (is_scripted_speech_playing(Global_35))
		{
			func_44(iVar2470, 0, 1);
		}
		else
		{
			func_44(iVar2470, 1, 1);
		}
	}
	if (vdist2(Global_36, vLocal_2475) < 4f)
	{
		if (!bVar2469)
		{
			if (func_137(Global_35, 0))
			{
				if (!does_entity_exist(iVar2471))
				{
					if (!func_43(vLocal_2475))
					{
						request_model(1077976463, false);
						if (!has_model_loaded(1077976463))
						{
							return;
						}
						iLocal_2474 = create_object(1077976463, vLocal_2475, true, true, false, false, false);
						_0xa22712e8471aa08e(get_object_index_from_entity_index(iVar2471), 1, 0);
						set_entity_visible(iVar2471, false);
						_0x870708a6e147a9ad(iVar2471, "LOOK_MIRROR", 3.75f, 3.75f, 0, 0, 0, 0, 0, -1);
						set_model_as_no_longer_needed(1077976463);
					}
					iLocal_2472 = 1;
				}
			}
		}
		else if (func_204() == iVar2471)
		{
			iLocal_2473 = func_205("ARTHUR_COMMENT", 648122183, iVar2471, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			func_206(iVar2470, iVar2471, 0, 1, -1);
		}
		else
		{
			func_123(&iLocal_2473, 1, 1);
		}
	}
	else if (bVar2469)
	{
		if (does_entity_exist(iVar2471))
		{
			delete_entity(&iLocal_2474);
		}
		if (func_34(iVar2470))
		{
			func_123(&iLocal_2473, 1, 1);
		}
		iLocal_2472 = 0;
	}
	if (func_34(iVar2470) && func_207(iVar2470, 1))
	{
		if (func_200(65536))
		{
			switch (iVar2476)
			{
				case 0:
					func_208(Global_35, "INSULT_REFLECTION_CONV_PART1", -128067431, 0, 1, 0, 2, 1);
					iLocal_2479 = 1;
					break;
				case 1:
					func_208(Global_35, "INSULT_REFLECTION_CONV_PART2", -128067431, 0, 1, 0, 2, 1);
					iLocal_2479 = 2;
					break;
				case 2:
					func_208(Global_35, "INSULT_REFLECTION_CONV_PART3", -128067431, 0, 1, 0, 2, 1);
					iLocal_2479 = 0;
					func_209(131072);
					if (does_entity_exist(iVar2471))
					{
						delete_entity(&iLocal_2474);
					}
					if (func_34(iVar2470))
					{
						func_123(&iLocal_2473, 1, 1);
					}
					iLocal_2472 = 0;
					break;
			}
		}
		else
		{
			switch (iVar2476)
			{
				case 0:
					func_208(Global_35, "INSULT_REFLECTION_CONV_PART1", -128067431, 0, 1, 0, 1, 1);
					iLocal_2479 = 1;
					break;
				case 1:
					func_208(Global_35, "INSULT_REFLECTION_CONV_PART2", -128067431, 0, 1, 0, 1, 1);
					iLocal_2479 = 2;
					break;
				case 2:
					func_208(Global_35, "INSULT_REFLECTION_CONV_PART3", -128067431, 0, 1, 0, 1, 1);
					iLocal_2479 = 0;
					func_209(65536);
					if (does_entity_exist(iVar2471))
					{
						delete_entity(&iLocal_2474);
					}
					if (func_34(iVar2470))
					{
						func_123(&iLocal_2473, 1, 1);
					}
					iLocal_2472 = 0;
					break;
			}
		}
	}
}

void func_62(int iParam0, bool bParam1)
{
	if (iParam0->f_21 == 0)
	{
		return;
	}
	iParam0->f_4 = 1;
	set_cam_active(iParam0->f_21, true);
	render_script_cams(true, bParam1, 3000, true, false, 0);
}

void func_63(int iParam0)
{
	switch (iParam0->f_23)
	{
		case 2:
			iParam0->f_43.f_9 = 0;
			func_6(iParam0, 11);
			break;
		case 3:
			iParam0->f_43.f_9 = 0;
			func_60(iParam0, 0);
			func_6(iParam0, 4);
			break;
		case 1:
			func_6(iParam0, 7);
			break;
		case 0:
			func_6(iParam0, 9);
			break;
		case 4:
			iParam0->f_43.f_9 = 1;
			func_60(iParam0, 0);
			func_6(iParam0, 6);
			break;
		case 5:
			func_6(iParam0, 23);
			break;
	}
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(true);
	}
}

bool func_64(int iParam0, int iParam1)
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

void func_65(int iParam0)
{
	Var0 = Global_35;
	Var0.f_14 = 180f;
	Var0.f_15 = 0;
	func_182(iParam0, 429473903, &(Var0.f_6), &(Var0.f_9), &(Var0.f_1));
	Var0.f_10 = { Var0.f_6 };
	Var0.f_13 = Var0.f_9;
	func_210(&Var0, &(Local_48.f_2280));
}

bool func_66(var uParam0)
{
	if (func_211(&(uParam0->f_2280)))
	{
		func_22(uParam0);
		return false;
	}
	uVar0 = uParam0->f_3;
	uVar1 = uParam0->f_2;
	uParam0->f_3 = 152;
	uParam0->f_2 = 24;
	if (!is_bit_set(uParam0->f_2280.f_5, 6))
	{
		if (is_bit_set(uParam0->f_2280.f_5, 7))
		{
			if (func_212(&(uParam0->f_2280)))
			{
				if (!is_bit_set(uParam0->f_2280.f_5, 8))
				{
					func_213(&(uParam0->f_2280));
				}
			}
			else if (is_bit_set(uParam0->f_2280.f_5, 8))
			{
				func_214(&(uParam0->f_2280));
			}
			if (is_bit_set(uParam0->f_2280.f_5, 8))
			{
				if (uParam0->f_2280.f_22)
				{
					if (get_distance_between_coords(Global_36, uParam0->f_2280.f_7, true) < uParam0->f_2280.f_10 && !func_215())
					{
						func_196("TF_PRONGHORN_WARDROBE", 10000, 0, 0, 0, 1);
					}
				}
				else if (func_58(uParam0->f_2280.f_4, 1))
				{
					set_bit(&(uParam0->f_2280.f_5), 6);
					func_214(&(uParam0->f_2280));
				}
			}
		}
	}
	else if (!is_bit_set(uParam0->f_2280.f_5, 5))
	{
		if (!is_bit_set(uParam0->f_2280.f_5, 3))
		{
			func_216(&(uParam0->f_2280));
			set_bit(&(uParam0->f_2280.f_5), 3);
		}
		if (!is_bit_set(uParam0->f_2280.f_5, 2))
		{
			func_217(uParam0);
		}
		if (!is_bit_set(uParam0->f_2280.f_5, 4))
		{
			if (func_218(&(uParam0->f_2280)))
			{
				set_bit(&(uParam0->f_2280.f_5), 4);
			}
		}
		if (is_bit_set(uParam0->f_2280.f_5, 2) && is_bit_set(uParam0->f_2280.f_5, 4))
		{
			func_219(&(uParam0->f_2280));
			set_bit(&(uParam0->f_2280.f_5), 5);
		}
	}
	else
	{
		if (!func_91(uParam0))
		{
			func_22(uParam0);
			uParam0->f_3 = uVar0;
			uParam0->f_2 = uVar1;
			return false;
		}
		set_ped_reset_flag(uParam0->f_2280, 258, true);
		switch (func_125())
		{
			case -1:
				func_220();
				break;
		}
	}
	uParam0->f_3 = uVar0;
	uParam0->f_2 = uVar1;
	return true;
}

void func_67()
{
	if (func_158())
	{
		func_221(0, 0);
		func_222(1, 7);
	}
}

void func_68(int iParam0, bool bParam1)
{
	if (does_cam_exist(iParam0->f_21) && is_cam_active(iParam0->f_21))
	{
		set_cam_active(iParam0->f_21, false);
		render_script_cams(false, bParam1, 3000, true, false, 0);
		destroy_cam(iParam0->f_21, true);
	}
	else
	{
		iVar0 = func_2(func_1());
		if (!func_119(iVar0))
		{
			return;
		}
	}
	iParam0->f_21 = 0;
}

void func_69(int iParam0)
{
	if (does_entity_exist(Global_35) && !Global_1935630->f_12)
	{
		_0xa3a9299c4f2adb98(Global_35);
	}
	if (iParam0->f_23 == 3)
	{
		vVar0 = { _get_scenario_point_coords(iParam0->f_29, true) };
		_0x4161648394262fdf(vVar0, 0.5f);
		if (_does_anim_scene_exist(iVar2465))
		{
			remove_anim_scene_entity(iVar2465, "player", Global_35);
			_delete_anim_scene(iVar2465);
		}
		_0xa21af60c9f99ccc5();
	}
	func_223(func_186(iParam0->f_23));
	if (iParam0->f_1 != 9)
	{
		func_224(&(iParam0->f_43));
	}
	iParam0->f_23 = -1;
	iParam0->f_29 = 0;
	func_6(iParam0, 10);
}

void func_70(var uParam0)
{
	set_bit(&(uParam0->f_330), 2);
}

bool func_71(var uParam0)
{
	if (uParam0->f_331 == 10)
	{
		return true;
	}
	return false;
}

bool func_72(var uParam0)
{
	if (uParam0->f_331 >= 4 && uParam0->f_331 <= 6)
	{
		return true;
	}
	return false;
}

void func_73(int iParam0)
{
	if (func_225(0))
	{
		if (func_227(Global_35, func_226(0), 1, 1) <= func_228(0))
		{
			func_229(func_226(0), *iParam0);
			return;
		}
	}
	if (func_225(1))
	{
		if (func_227(Global_35, func_226(0), 1, 1) <= func_228(1))
		{
			func_229(func_226(0), *iParam0);
			return;
		}
	}
}

void func_74(int iParam0)
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
			func_230(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_231(1);
	}
}

void func_75(int iParam0, bool bParam1)
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

void func_76(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

void func_77()
{
	if (func_232(&Global_1898437) && func_233(&Global_1898437) == 1)
	{
		iVar0 = func_234(&Global_1898437);
		if ((func_235(iVar0) && does_script_exist(&((*Global_1835011)[iVar0]->f_22))) && _get_number_of_references_of_script_with_name_hash(get_hash_key(&((*Global_1835011)[iVar0]->f_22))) > 0)
		{
			force_cleanup_for_all_threads_with_this_name(&((*Global_1835011)[iVar0]->f_22), 1);
		}
	}
}

void func_78(bool bParam0)
{
	iVar1 = 0;
	while (iVar1 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar1]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar1]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar1]->f_1])
				{
					case -2093459088:
						iVar0 = Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar1]->f_1]->f_2;
						if (func_235(iVar0))
						{
							if (func_236(iVar0))
							{
								func_237(iVar0, bParam0);
							}
						}
						break;
				}
			}
		}
		iVar1++;
	}
}

void func_79()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (func_238(&(Global_40.f_450[iVar0])))
		{
			if ((*Global_1347702)[&Global_40.f_450[iVar0]]->f_14 & 2 != 0)
			{
				func_239(&(Global_40.f_450[iVar0]), 1, 0);
			}
		}
		iVar0++;
	}
}

int func_80(int iParam0)
{
	if (!func_119(iParam0))
	{
		return func_240();
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
	return func_240();
}

bool func_81(int iParam0)
{
	return iParam0 != 0;
}

int func_82(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		case 3:
			return -2049683567;
		case 4:
			return -1639750081;
		case 6:
			return -543306319;
		case 7:
			return 93160283;
		case 8:
			return -1838611891;
		case 1:
			return 1619762084;
		case 2:
			return -2104053099;
		case 9:
			return -1431073983;
		case 10:
			return 887432345;
		case 11:
			return -238320361;
		case 26:
			return -1433937760;
		case 27:
			return -681691620;
		case 28:
			return -706234936;
		case 29:
			return -282099500;
		case 30:
			return 1450105278;
		case 31:
			return -732027686;
		case 5:
			return 379756162;
		case 15:
			return 2128397741;
		case 17:
			return -924263120;
		case 33:
			return 1915478031;
		case 12:
			return -1775364220;
		case 13:
			return -1504845897;
		case 14:
			return -1227686818;
		case 18:
			return 1442571063;
		case 19:
			return -997221403;
		case 22:
			return 285759500;
		case 20:
			return 1489861748;
		case 32:
			return -2132712788;
		case 34:
			return 1427539511;
		case 23:
			return -967055532;
		case 24:
			return 662159626;
		case 25:
			return 1743191502;
		case 21:
			return -830712656;
		default:
			break;
	}
	return 0;
}

bool func_83(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		if (!func_241(uParam0->f_3, uParam0->f_2, &(uParam0->f_2031)))
		{
			return false;
		}
		if (!func_242(uParam0, uParam0->f_19))
		{
			if (!func_243(iParam1, &(uParam0->f_2031)))
			{
				return false;
			}
			if (func_242(uParam0, uParam0->f_19))
			{
			}
			else
			{
				return false;
			}
		}
	}
	else
	{
		if (!func_243(iParam1, &(uParam0->f_2031)))
		{
			return false;
		}
		if (!func_244(uParam0, iParam2, 1, -1, 0, 1, 0, 0))
		{
			return false;
		}
	}
	uParam0->f_2031.f_71 = func_245(&(uParam0->f_2031));
	uParam0->f_2031.f_74 = 0;
	uParam0->f_2031.f_75 = 0;
	uParam0->f_2031.f_76 = 0;
	uParam0->f_2031.f_69 = 0;
	uParam0->f_2031.f_48 = 0;
	uParam0->f_2031.f_101 = 0;
	uParam0->f_2031.f_102 = -1;
	uParam0->f_2031.f_103 = -1;
	uParam0->f_2031.f_81 = 0;
	uParam0->f_2031.f_82 = 0;
	func_246(uParam0);
	func_247(uParam0);
	func_248();
	uParam0->f_2031.f_50 = _databinding_add_data_container_from_path("", "GenericShop");
	uParam0->f_2031.f_51 = _databinding_add_data_hash(uParam0->f_2031.f_50, "Title", get_hash_key(func_249(uParam0->f_2)));
	uParam0->f_2031.f_53 = _databinding_add_data_container(uParam0->f_2031.f_50, "Prompts");
	uParam0->f_2031.f_52 = _databinding_add_data_container(uParam0->f_2031.f_50, "Scene");
	uParam0->f_2031.f_54 = _databinding_add_data_container(uParam0->f_2031.f_52, "price_details");
	func_250(uParam0, 6, -2122634935);
	func_251(uParam0, 6, 1);
	func_252(uParam0, 6, 1);
	func_253(uParam0, 6, 0);
	func_250(uParam0, 1, -672301300);
	func_251(uParam0, 1, 1);
	func_252(uParam0, 1, 1);
	func_253(uParam0, 1, 0);
	func_250(uParam0, 2, 1891107858);
	func_251(uParam0, 2, 0);
	func_252(uParam0, 2, 0);
	func_253(uParam0, 2, 0);
	func_250(uParam0, 3, -405106071);
	func_251(uParam0, 3, 0);
	func_252(uParam0, 3, 0);
	func_253(uParam0, 2, 0);
	if (bParam3)
	{
		uParam0->f_2031.f_113 = 0;
		uParam0->f_2031.f_115 = 0;
		uParam0->f_2031.f_111 = 0;
		uParam0->f_2031.f_117 = 0;
		uParam0->f_2031.f_121 = 0;
		uParam0->f_2031.f_119 = 0;
	}
	uParam0->f_2031.f_123 = 31238;
	uParam0->f_2031.f_124 = 31871;
	uParam0->f_2031.f_125 = 32471;
	uParam0->f_2031.f_126 = 32590;
	uParam0->f_2031.f_46 = 1;
	return true;
}

void func_84(int iParam0)
{
	Global_1347477->f_118 = iParam0;
	Global_1347477->f_6 = iParam0;
}

void func_85()
{
	if (!_does_volume_exist(iVar2476))
	{
		iLocal_2478 = _create_volume_box_with_custom_name(func_258(player_id()), 0f, 0f, 0f, 2f, 2f, 2f, "Saving_PedBlocker");
	}
	_0xb56d41a694e42e86(iVar2476, 10208, 0, 0, -1, -1, 0);
	_0x18262cafebb5fbe1(iVar2476, 10208, 0, 0, -1, -1, 0);
}

void func_86(var uParam0, var uParam1, var uParam2)
{
	func_259(Global_35, 1, 1);
}

void func_87(var uParam0, int iParam1)
{
	uParam0->f_2031.f_118 = iParam1;
	uParam0->f_2031.f_117 = 1;
}

int func_88(var uParam0, var uParam1)
{
	return 1;
}

void func_89(var uParam0, int iParam1)
{
	uParam0->f_2031.f_116 = iParam1;
	uParam0->f_2031.f_115 = 1;
}

bool func_90(var uParam0)
{
	if (!func_260(uParam0))
	{
		return false;
	}
	if (_is_app_running(1289756680))
	{
		return true;
	}
	iVar0 = _launch_app_by_hash_with_entry(1289756680, -1102306668);
	if (iVar0 == 0)
	{
		uParam0->f_2031.f_47 = 1;
		return true;
	}
	return false;
}

bool func_91(var uParam0)
{
	iVar0 = 1;
	if (uParam0->f_2031.f_111)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(func_262(uParam0));
		Call_Loc(uParam0->f_2031.f_112);
	}
	set_ped_reset_flag(func_263(uParam0), 258, true);
	disable_control_action(0, -668070958, false);
	disable_control_action(0, 1250966545, false);
	disable_control_action(0, -2131587435, false);
	if (uParam0->f_2031.f_80)
	{
		func_264(uParam0, func_262(uParam0), 1);
		uParam0->f_2031.f_80 = 0;
	}
	if (func_265())
	{
		if (func_266(256))
		{
			if (Global_1914319->f_16855.f_3.f_2)
			{
				iVar1 = func_262(uParam0);
				if (!func_267(iVar1))
				{
				}
				Global_1914319->f_16855.f_3.f_2 = 0;
			}
			else
			{
				iVar2 = func_261(uParam0);
				uParam0->f_2031.f_70 = iVar2;
				if (!uParam0->f_2031.f_101)
				{
					if (!func_268(uParam0->f_2031.f_78, &(uParam0->f_2031)))
					{
					}
				}
				else
				{
					uParam0->f_2031.f_101 = 0;
				}
				uParam0->f_2031.f_78 = 0;
				if (uParam0->f_2031.f_102 <= -1)
				{
					uParam0->f_2031.f_102 = 0;
				}
				if (!func_269(uParam0))
				{
					return false;
				}
				else
				{
					if (uParam0->f_2031.f_117)
					{
						Stack.Push(uParam0);
						Stack.Push(iVar2);
						Stack.Push(func_261(uParam0));
						Call_Loc(uParam0->f_2031.f_118);
					}
					uParam0->f_2031.f_70 = iVar2;
				}
			}
			func_270(256);
		}
		else if (func_266(512))
		{
			iVar3 = func_261(uParam0);
			uVar4 = func_271(&(uParam0->f_2031));
			if (uParam0->f_2031.f_102 <= -1)
			{
				uParam0->f_2031.f_102 = uVar4;
			}
			uParam0->f_2031.f_70 = iVar3;
			if (uParam0->f_2031.f_99 && uParam0->f_2031.f_104.f_5 == iVar3)
			{
				if (!func_272(uParam0))
				{
				}
			}
			else if (!uParam0->f_2031.f_101 && func_273(uParam0))
			{
				iVar0 = 0;
				func_274(uParam0, 6);
			}
			else
			{
				if (!uParam0->f_2031.f_101)
				{
					if (!func_275(&(uParam0->f_2031)))
					{
					}
				}
				else
				{
					uParam0->f_2031.f_101 = 0;
				}
				if (!func_269(uParam0))
				{
					return false;
				}
				else
				{
					if (uParam0->f_2031.f_117)
					{
						Stack.Push(uParam0);
						Stack.Push(iVar3);
						Stack.Push(func_261(uParam0));
						Call_Loc(uParam0->f_2031.f_118);
					}
					uParam0->f_2319.f_8 = func_261(uParam0);
					uParam0->f_2319.f_9 = func_276(uParam0);
				}
			}
			iVar5 = func_277(0);
			if (func_278(iVar5, 0))
			{
				func_279(iVar5);
			}
			func_270(512);
		}
		if (func_266(64) || func_266(128))
		{
			if (!func_280(uParam0))
			{
			}
			func_270(128);
			func_270(64);
		}
		if (func_266(16))
		{
			if (!func_281(uParam0))
			{
			}
			if (!func_266(1024) && !uParam0->f_2031.f_81)
			{
				func_282(uParam0, 0);
			}
			else if (uParam0->f_2031.f_81)
			{
				uParam0->f_2031.f_81 = 0;
			}
			if (func_262(uParam0) == 2144984909 && !func_266(1024))
			{
				func_283(uParam0);
			}
			func_270(1024);
			func_270(16);
		}
		if (func_266(2))
		{
			if (func_266(4) || func_266(8))
			{
				bVar6 = func_266(8);
				func_284(uParam0, bVar6);
				func_270(4);
				func_270(8);
			}
			func_282(uParam0, 0);
			if (func_262(uParam0) == 2144984909)
			{
				func_283(uParam0);
			}
			func_270(2);
		}
		if (func_266(32768))
		{
			if (func_285() == 732138465)
			{
				func_286(uParam0);
				func_283(uParam0);
			}
			else if (!func_287(uParam0))
			{
			}
			func_270(32768);
		}
		if (func_266(8192))
		{
			if (_virtual_collection_exists(func_288()))
			{
				iVar7 = func_289(uParam0);
				if (iVar7 <= 0)
				{
				}
				else
				{
					_virtual_collection_set_size(func_288(), iVar7);
					func_290(uParam0, uParam0->f_2031.f_102);
					uParam0->f_2031.f_103 = uParam0->f_2031.f_102;
					uParam0->f_2031.f_102 = -1;
				}
			}
			func_270(8192);
		}
		if (func_266(16384))
		{
			func_291(uParam0);
			iVar8 = func_292();
			iVar9 = func_293();
			if (!func_294(uParam0, iVar9, iVar8))
			{
			}
			func_270(16384);
		}
		func_295();
	}
	if (Global_1914319->f_16855.f_3.f_4)
	{
		func_296(uParam0);
		func_297(uParam0);
		func_282(uParam0, 0);
		Global_1914319->f_16855.f_3.f_4 = 0;
	}
	iVar10 = func_262(uParam0);
	if ((((iVar10 == 94016929 || iVar10 == 178644271) || iVar10 == 1860655620) || iVar10 == -996064024) || iVar10 == -1548684311)
	{
		iVar11 = func_298(uParam0);
		if (does_entity_exist(iVar11))
		{
			_0x3fe4fb41ef7d2196(iVar11);
			if ((get_frame_count() % 60) == 0)
			{
			}
		}
	}
	Global_1914319->f_16855.f_34 = func_299(uParam0);
	Global_1914319->f_16855.f_32 = func_261(uParam0);
	Global_1914319->f_16855.f_33 = func_300(&(uParam0->f_2031));
	Global_1914319->f_16855.f_35 = iVar0;
	return iVar0;
}

void func_92(var uParam0)
{
	func_301(uParam0, &(uParam0->f_2031.f_58));
	if (!uParam0->f_2031.f_82)
	{
		func_302(uParam0, 1);
	}
	func_303(uParam0);
	uParam0->f_2031.f_46 = 0;
	uParam0->f_2031.f_47 = 0;
	_close_app_by_hash(1289756680);
	_databinding_remove_data_entry(uParam0->f_2031.f_50);
}

void func_93(char* sParam0)
{
	if (_0xdd0b7c5ae58f721d(sParam0))
	{
		if (_0x927b810e43e99932(sParam0))
		{
			_0x8370d34bd2e60b73();
			sParam0->f_16 = Global_35;
			sParam0->f_25 = 1;
			sParam0->f_27 = 200f;
			sParam0->f_28 = 20f;
			_0xac77757c05de9e5a(sParam0);
		}
		else
		{
			_0xb8b207c34285e978(sParam0);
			sParam0->f_16 = Global_35;
			sParam0->f_25 = 1;
			sParam0->f_27 = 200f;
			sParam0->f_28 = 20f;
			_0xac77757c05de9e5a(sParam0);
			_0x8370d34bd2e60b73();
			func_304(-1801499084, Global_35, 1, 1);
		}
		set_gameplay_cam_relative_heading(200f, 1f);
		set_gameplay_cam_relative_pitch(20f, 1f);
	}
	else
	{
		func_13(sParam0);
	}
	set_ped_can_head_ik(player_ped_id(), false);
}

void func_94(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_305(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_306(Var0);
}

void func_95(int iParam0, int iParam1, bool bParam2)
{
	func_307(iParam0, iParam1, bParam2, 1);
}

void func_96(var uParam0)
{
	func_308(0, 0);
	_0x0a5a4f1979abb40e(uParam0);
}

void func_97()
{
	if (_does_volume_exist(iVar2476))
	{
		_0x74c2b3dc0b294102(iVar2476);
		_0xa1cfb35069d23c23(iVar2476);
		_delete_volume(iVar2476);
	}
}

bool func_98()
{
	iVar1 = 0;
	while (iVar1 <= (Global_40.f_1094 - 1))
	{
		iVar0 = &Global_40.f_450[iVar1];
		if (func_309(iVar0))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_99()
{
	iVar0 = 0;
	while (iVar0 < &Global_1898346)
	{
		if (func_232(Global_1898330[iVar0]) && func_310(Global_1898330[iVar0]))
		{
			if (func_233(Global_1898330[iVar0]) == 1 && func_311(iVar0, 4))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_100(var uParam0)
{
	if (!func_156(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_312(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_313() - round((uParam0->f_1 * 1000f)));
}

void func_101(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_102(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_103()
{
	if (Global_1935630->f_3 != 0)
	{
		_0x00a15b94cba4f76f(Global_1935630->f_3);
		Global_1935630->f_3 = 0;
	}
}

void func_104(bool bParam0)
{
	if (Global_43891)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_314(Global_35, iVar0, 0, 1);
		if (is_weapon_valid(iVar1))
		{
			if (_is_weapon_two_handed(iVar1) || func_315(iVar1))
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

void func_105()
{
	func_101(Global_1935630, 4096);
	func_316();
	func_75(0, 0);
	func_317();
	func_318(0f, 0f, 0f);
	Global_40.f_9.f_15 = -1;
	func_319(0);
	Global_1310720->f_1 = { 0f, 0f, 0f };
	Global_40.f_9.f_10 = -1;
	Global_40.f_9.f_12 = 0;
	Global_40.f_9.f_13 = 0f;
	Global_1310720->f_4 = 0;
	Global_1310720->f_6 = 0;
	Global_1310720->f_7 = 0;
	Global_1310720->f_8 = 1;
	Global_1310720->f_13 = 0;
	Global_1310720->f_14 = 0;
	Global_1310720->f_12 = 0;
	Global_1310720->f_27 = 0;
	Global_1310720->f_28 = 0;
	Global_1310720->f_29 = -1;
	Global_1935630->f_4 = 0;
	Global_1897952->f_40 = 0;
	Global_1310720->f_24 = -1569615261;
	Global_1310720->f_22 = -1;
	func_320(0);
	func_321(0);
	display_radar(true);
	display_hud(true);
	func_322(1);
	func_323(0);
	if (is_audio_scene_active("DEATH_SCENE"))
	{
		stop_audio_scene("DEATH_SCENE");
	}
	if (is_audio_scene_active("DYING_SCENE"))
	{
		stop_audio_scene("DYING_SCENE");
	}
}

void func_106(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_107(int iParam0)
{
	if (does_entity_exist(player_ped_id()))
	{
		if (iParam0 == 1)
		{
			decor_set_bool(player_ped_id(), "JustSavedAtBed", true);
		}
		else if (decor_exist_on(player_ped_id(), "JustSavedAtBed"))
		{
			decor_remove(player_ped_id(), "JustSavedAtBed");
		}
	}
}

void func_108(int iParam0, bool bParam1)
{
	fVar0 = to_float(iParam0);
	if (Global_1347477->f_4 + 60000) > get_game_timer()
	{
		fVar0 = (to_float(iParam0) - Global_1347477->f_5);
	}
	if (fVar0 > 0f)
	{
		_0x51345ae20f22c261(player_id(), fVar0, 0, 0, 0);
		Global_1347477->f_5 = to_float(iParam0);
		func_324(2, 7000);
	}
	Global_1347477->f_4 = get_game_timer();
	func_325(0);
	if (bParam1)
	{
		func_326(100f);
	}
}

bool func_109()
{
	return false;
}

bool func_110(var uParam0)
{
	if (uParam0->f_331 == 8)
	{
		return true;
	}
	return false;
}

bool func_111(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

void func_113(var uParam0)
{
	_close_app_by_hash(1833066477);
	_databinding_remove_data_entry(uParam0->f_2);
	display_radar(true);
	func_84(0);
	uParam0->f_6 = 0;
}

void func_114(var uParam0)
{
	func_327(uParam0);
}

void func_115(int iParam0)
{
	func_68(iParam0, 0);
	if (iParam0->f_4)
	{
		set_player_control(player_id(), true, 256, false);
		freeze_entity_position(Global_35, false);
		iParam0->f_4 = 0;
	}
	_text_database_delete("CAMP");
	func_21(iParam0);
	_display_hud_component(-1347445791);
	if (get_ped_config_flag(Global_35, 218, true))
	{
		set_ped_config_flag(Global_35, 218, false);
	}
	func_328(0);
	if (!func_31())
	{
		func_32(1);
	}
	func_329();
	func_30(*iParam0, 65536);
	func_22(&Local_48);
	func_330(Global_35);
	func_107(0);
	func_101(Global_1935630, 131072);
	_0xa565fac215cbc77d();
	shutdown_loading_screen();
	func_102(1024);
	set_player_invincible(player_id(), false);
	if (does_entity_exist(iVar2471))
	{
		delete_entity(&iLocal_2474);
	}
	set_model_as_no_longer_needed(1077976463);
	func_123(&iLocal_2473, 1, 1);
	func_331();
	if (_is_tracked_point_valid(iVar2466))
	{
		destroy_tracked_point(iVar2466);
	}
	if (bVar2467)
	{
		_0xa21af60c9f99ccc5();
	}
	if (iVar2468 != 0)
	{
		_0xd2b9c78537ed5759(iVar2468);
	}
}

void func_116(int iParam0)
{
	iParam0->f_3 = 1;
}

bool func_117(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

bool func_118(int iParam0, int iParam1)
{
	if (!func_117(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_119(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_120(int iParam0, bool bParam1)
{
	switch (func_332(iParam0))
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

void func_121(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

int func_122()
{
	return Global_40.f_4283;
}

void func_123(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_34(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_168(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_333(iVar0);
	*iParam0 = 0;
}

bool func_124(var uParam0)
{
	return uParam0->f_2031.f_47;
}

int func_125()
{
	return Global_1572887->f_12;
}

void func_126(var uParam0)
{
	func_84(0);
	if (_is_anim_scene_started(uParam0->f_20, false))
	{
		abort_anim_scene(uParam0->f_20, false);
	}
}

void func_127(int iParam0, bool bParam1)
{
	_0xfea6126c34df2532(iParam0, bParam1);
	_0xa2116c1e4ed85c24(iParam0, !bParam1);
}

void func_128(int iParam0)
{
	if (func_334(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_335(Var0);
}

void func_129(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_336(0);
	}
	if (bParam0)
	{
		func_305(8);
		func_305(512);
	}
	else
	{
		func_305(8);
		func_305(16);
	}
}

void func_130()
{
	Global_1914319->f_19461.f_1 = 0;
	Global_1914319->f_19461.f_20 = 0;
	Global_1914319->f_19461.f_179 = 0;
	Global_1914319->f_19461.f_1 = 0;
	if (_uiprompt_is_valid(Global_1914319->f_19461.f_180))
	{
		_uiprompt_delete(Global_1914319->f_19461.f_180);
	}
}

void func_131(int iParam0, var uParam1)
{
	_0x67e21acc5c0c970c(uParam1, 16, iParam0);
	_0x67e21acc5c0c970c(uParam1, 15, iParam0);
	_0x67e21acc5c0c970c(uParam1, 7, iParam0);
	_0x67e21acc5c0c970c(uParam1, 8, iParam0);
	_0x67e21acc5c0c970c(uParam1, 17, iParam0);
	_0x67e21acc5c0c970c(uParam1, 5, iParam0);
	_0x67e21acc5c0c970c(uParam1, 21, iParam0);
	_0x67e21acc5c0c970c(uParam1, 25, iParam0);
	_0x67e21acc5c0c970c(uParam1, 23, iParam0);
	_0x67e21acc5c0c970c(uParam1, 19, iParam0);
	_0x67e21acc5c0c970c(uParam1, 9, iParam0);
	_0x67e21acc5c0c970c(uParam1, 10, iParam0);
	_0x67e21acc5c0c970c(uParam1, 22, iParam0);
	_0x67e21acc5c0c970c(uParam1, 20, iParam0);
	_0x67e21acc5c0c970c(uParam1, 18, iParam0);
	_0x67e21acc5c0c970c(uParam1, 6, iParam0);
	_0x67e21acc5c0c970c(uParam1, 0, iParam0);
	_0x67e21acc5c0c970c(uParam1, 1, iParam0);
}

void func_132(var uParam0)
{
}

void func_133(var uParam0)
{
	if (is_cam_rendering(*uParam0))
	{
		render_script_cams(false, false, 3000, true, false, 0);
	}
	if (is_cam_active(*uParam0))
	{
		set_cam_active(*uParam0, false);
	}
	if (does_cam_exist(*uParam0))
	{
		destroy_cam(*uParam0, false);
	}
}

void func_134()
{
	iVar1 = func_337();
	switch (iVar1)
	{
		case 3:
			return;
		case 2:
			bVar2 = true;
			break;
		case 0:
			bVar3 = true;
			break;
	}
	iVar4 = 0;
	while (iVar4 < 18)
	{
		iVar0 = func_338(iVar4);
		if (func_278(iVar0, 0))
		{
			if (func_339(iVar0) != -999503751)
			{
			}
			else
			{
				iVar1 = func_340(iVar0);
				switch (iVar1)
				{
					case 3:
						return;
					case 2:
						bVar2 = true;
						break;
					case 0:
						bVar3 = true;
						break;
				}
				if (bVar2 && bVar3)
				{
				}
				else
				{
					iVar4++;
				}
				if (!bVar2)
				{
					if (!bVar3)
					{
						func_32(1);
						func_341(76, 1);
					}
					else
					{
						func_32(1);
						func_341(74, 1);
					}
				}
				else if (!bVar3)
				{
					func_32(1);
					func_341(75, 1);
				}
			}
		}
	}
}

void func_135(var uParam0)
{
	_text_database_delete("WARD");
	_0x37d7bdba89f13959("CamTransition01");
	switch (func_125())
	{
		case -1:
			func_342(uParam0);
			break;
	}
}

bool func_136()
{
	return (Global_1894899 & 1 != 0 && func_1() != -1);
}

bool func_137(int iParam0, int iParam1)
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
	if (func_343(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_343(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_343(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_343(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_343(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_343(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_343(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_343(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_138(var uParam0)
{
	if (_0x99f92061efe908ba() || func_344(uParam0->f_318, 4))
	{
		disable_all_control_actions(2);
		disable_frontend_this_frame();
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
		_0xc0258742b034dfaf(0f);
		_0xdd1232b332cbb9e7(3, 1, 0);
		if (func_345())
		{
			func_346(1);
		}
		if (uParam0->f_323 != 3 && !get_player_invincible(player_id()))
		{
			set_entity_invincible(Global_35, true);
			if (func_137(uParam0->f_304.f_1, 0))
			{
				set_entity_invincible(func_147(uParam0->f_304.f_1), true);
			}
		}
		_0x36559148b78853b3(0, 0, 0);
		stop_current_playing_speech(Global_35, 0);
		switch (uParam0->f_323)
		{
			case 0:
				uParam0->f_323 = 4;
				break;
			case 1:
				if (!func_344(uParam0->f_318, 4))
				{
					func_347(&(uParam0->f_318), 4);
				}
				uParam0->f_320 = (_0x2f4d53023f826ff0() - 1);
				if (_0xdabfe48ba0d457aa() > uParam0->f_300)
				{
					uParam0->f_301 = uParam0->f_300;
					uParam0->f_300 = _0xdabfe48ba0d457aa();
					uParam0->f_303 = uParam0->f_302;
					uParam0->f_302 = _0xe5b76e5b56cd77dd();
				}
				if (_0x5d5e2102b174b8d2() || _0x7b8c2b846c05e5ad())
				{
					if (func_344(uParam0->f_318, 8))
					{
						func_348(&(uParam0->f_318), 8);
					}
					uParam0->f_323 = 2;
				}
				if (_0x27af48c62b281341() || !_0x99f92061efe908ba())
				{
					uParam0->f_323 = 3;
				}
				break;
			case 2:
				if (!func_349(uParam0))
				{
					_0x62d5f0588915b277();
				}
				else if (!_0x5d5e2102b174b8d2() && !_0x7b8c2b846c05e5ad())
				{
					func_350(uParam0->f_314, 2f, 1, 0, 0, 0, 0);
					uParam0->f_323 = 3;
				}
				break;
			case 3:
				if (_0x27af48c62b281341() || !_0x99f92061efe908ba())
				{
					func_150(1);
					display_radar(true);
					display_hud(true);
					func_351();
					_0xbc90bdf4e5228ea1();
					if (get_player_invincible(player_id()))
					{
						set_entity_invincible(Global_35, false);
					}
					if (func_137(uParam0->f_304.f_1, 0))
					{
						set_entity_invincible(func_147(uParam0->f_304.f_1), false);
					}
					func_347(&(uParam0->f_318), 1);
					if (func_344(uParam0->f_318, 2048))
					{
						func_352(uParam0);
					}
					func_353(1);
					if (uParam0->f_324)
					{
						Call_Loc(uParam0->f_329);
					}
					func_347(&(uParam0->f_318), 32);
					func_347(&(uParam0->f_318), 64);
					if (func_344(uParam0->f_318, 4))
					{
						func_348(&(uParam0->f_318), 4);
					}
					func_74(0);
					uParam0->f_323 = 4;
				}
				break;
		}
		if (uParam0->f_324)
		{
			Call_Loc(uParam0->f_326);
		}
	}
}

void func_139(var uParam0, int iParam1)
{
	uParam0->f_331 = iParam1;
}

int func_140(var uParam0)
{
	if (!_can_launch_app_by_hash(1833066477))
	{
	}
	else if (_launch_app_by_hash(1833066477) == 0)
	{
	}
	func_354(uParam0);
	func_84(1);
	uParam0->f_6 = 1;
	return 1;
}

int func_141(var uParam0)
{
	iVar0 = 1;
	display_radar(false);
	func_355(0);
	while (_event_manager_is_event_pending(1833066477))
	{
		if (_event_manager_peek_event(1833066477, &Var2))
		{
			if (Var2.f_2 == -997855324)
			{
				iVar0 = 0;
			}
			else
			{
				switch (Var2)
				{
					case -1740156697:
						iVar1 = func_356(_databinding_read_data_hash_string_from_parent(Var2.f_3, "itemName"));
						_databinding_write_data_string_from_parent(uParam0->f_2, "subFooter", func_358(func_357(iVar1)));
						break;
					case -1203660660:
						iVar1 = func_356(_databinding_read_data_hash_string_from_parent(Var2.f_3, "itemName"));
						uParam0->f_4 = iVar1;
						iVar0 = 2;
						break;
				}
			}
		}
		_event_manager_pop_event(1833066477);
	}
	return iVar0;
}

int func_142(var uParam0)
{
	return uParam0->f_4;
}

bool func_143(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		func_139(uParam0, 3);
		return false;
	}
	if (func_359(uParam0) > IntToFloat(func_360(1)))
	{
		func_139(uParam0, 3);
		return false;
	}
	if (!func_361(uParam0, iParam1))
	{
		return false;
	}
	sVar0 = func_362(iParam1);
	iVar1 = get_hash_key(sVar0);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x53764309c4618087(iVar1);
	}
	return true;
}

int func_144()
{
	if ((func_225(0) && !func_363(0)) && !func_364(0))
	{
		return func_226(0);
	}
	if ((func_225(1) && !func_363(1)) && !func_364(1))
	{
		return func_226(1);
	}
	return 0;
}

bool func_145(var uParam0, int iParam1)
{
	if ((!does_entity_exist(*iParam1) || is_entity_dead(*iParam1)) || is_ped_human(*iParam1))
	{
		return false;
	}
	uParam0->f_304.f_1 = *iParam1;
	_0x2a6d1daab9ebb262(*iParam1);
	return true;
}

int func_146(var uParam0)
{
	return uParam0->f_304.f_1;
}

int func_147(int iParam0)
{
	return iParam0;
}

bool func_148(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	return (_is_metaped_using_component(iParam0, -1163401704) || _is_metaped_using_component(iParam0, -1033766886));
}

void func_149(int iParam0, bool bParam1)
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

void func_150(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

void func_151(var uParam0)
{
	if (is_cam_rendering(uParam0->f_334))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		if (is_cam_active(uParam0->f_334))
		{
			set_cam_active(uParam0->f_334, false);
		}
		if (does_cam_exist(uParam0->f_334))
		{
			destroy_cam(uParam0->f_334, false);
		}
		func_365(uParam0->f_333);
	}
}

int func_152(var uParam0)
{
	if (func_344(uParam0->f_318, 64))
	{
		return 0;
	}
	if (func_344(uParam0->f_318, 4) || _0x99f92061efe908ba())
	{
		return 1;
	}
	if (uParam0->f_319 <= 0)
	{
		return 2;
	}
	if (Global_1935630->f_22)
	{
		return 3;
	}
	if (!func_344(uParam0->f_318, 2048) && !func_344(uParam0->f_318, 1024))
	{
		return 4;
	}
	if (uParam0->f_299 >= 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= uParam0->f_299)
		{
			_0xf11d7cb962fcd747(&(uParam0->f_288[iVar0]));
			iVar0++;
		}
	}
	else
	{
		if (func_344(uParam0->f_318, 2))
		{
			_0x6a6e79fbe8678c98();
		}
		_0xb9b9e47edb9d63db();
	}
	if (func_344(uParam0->f_318, 256) && uParam0->f_321 != 0)
	{
	}
	_0x36559148b78853b3(0, 0, 0);
	func_150(0);
	display_radar(false);
	display_hud(false);
	func_366();
	func_367(1);
	func_368(-1, 0, 0, 0, 0);
	func_369();
	_0xc6dcc2a3a8825c85(1);
	_0xcc61d8d6c19d9f14(3);
	_0x7cef4ac79f7e7fad(func_370(func_1()), func_370(uParam0->f_317), uParam0->f_314);
	uParam0->f_323 = 1;
	return 6;
}

void func_153(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	_0xa2f8b3b5fedfc100(iParam0, 1268180497);
	if (bParam1)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_154(var uParam0)
{
	return func_344(uParam0->f_318, 1);
}

bool func_155(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_120((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_156(var uParam0)
{
	return func_371(*uParam0, 1);
}

void func_157(var uParam0)
{
	func_372(uParam0, 0f);
}

bool func_158()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_159()
{
	switch (func_125())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

bool func_160(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_310((*Global_1835011)[iParam0]->f_1);
}

void func_161(int iParam0)
{
	if (func_373(iParam0))
	{
		Global_1392040 = (&Global_1392040 - (Global_1392040 && iParam0));
	}
}

void func_162(int iParam0)
{
	if (!func_373(iParam0))
	{
		Global_1392040 = (Global_1392040 || iParam0);
	}
}

bool func_163(int iParam0, bool bParam1)
{
	if (func_374(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_375(5000))
		{
			return true;
		}
	}
	switch (func_376(0))
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

bool func_164(int iParam0)
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

bool func_165(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_166(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_167(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_172(iParam0, 1);
	func_173(iParam0, 1);
	func_174(iParam0, 128);
}

int func_168(int iParam0)
{
	return iParam0;
}

bool func_169(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_170(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_171(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_172(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_165(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_173(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_174(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

int func_175(bool bParam0, bool bParam1, bool bParam2)
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

bool func_176(int iParam0)
{
	return (func_377(iParam0, 4) || func_377(iParam0, 5));
}

void func_177(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_34(iParam0))
	{
		return;
	}
	iVar0 = func_168(iParam0);
	func_172(iVar0, bParam1);
}

bool func_178(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (func_378(iParam0, 1, 0))
	{
		if (func_379(iParam0))
		{
			iVar0 = func_380(iParam0, 0);
			if (_0x800df3fc913355f3(iVar0))
			{
				if (!_0xa8120ebeaf290c7a(iVar0))
				{
					return false;
				}
				if (bParam3 && !_0xa0bc8faed8cfeb3c(func_381(iParam0)))
				{
					return false;
				}
				if ((bParam1 || !func_382(func_381(iParam0), 1116471296, -1082130432, -1082130432, -1082130432)) || is_screen_faded_out())
				{
					_0xd4b614179bcd0654(iVar0);
					func_383(iParam0, 0);
					if (iParam2 && func_384((*Global_1360165)[iParam0]->f_63))
					{
						func_385(iParam0, 65, 0);
					}
				}
				else
				{
					return false;
				}
			}
		}
	}
	return true;
}

bool func_179(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_180()
{
	if (func_386())
	{
		if (Global_1935630->f_44 == -1016714371)
		{
		}
		else
		{
			_hide_ped_weapons(Global_35, 2, false);
		}
	}
	else
	{
		_hide_ped_weapons(Global_35, 2, false);
	}
}

void func_181(var uParam0)
{
	uParam0->f_22 = -1f;
}

void func_182(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	iParam0->f_29 = _find_closest_active_scenario_point_of_type(iParam0->f_24, iParam1, iParam0->f_27, 0, false);
	switch (*iParam0)
	{
		case 8:
			*uParam2 = { -326.2195f, 759.3564f, 120.6335f };
			*uParam3 = 317.7293f;
			break;
		case 6:
			*uParam2 = { 1903.26f, -1860.007f, 46.3492f };
			*uParam3 = 220.176f;
			break;
		case 15:
			*uParam2 = { func_42(iParam0) };
			*uParam3 = 307.6539f;
			break;
		case 2:
			*uParam2 = { func_42(iParam0) };
			*uParam3 = 266.4176f;
			break;
		case 9:
			*uParam2 = { 2636.935f, -1221.742f, 58.5864f };
			*uParam3 = 265.5823f;
			break;
		case 10:
			*uParam2 = { -821.6326f, -1326.279f, 46.8783f };
			*uParam3 = 349.9606f;
			break;
		case 0:
			*uParam2 = { 2341.237f, 1359.271f, 105.3746f };
			*uParam3 = 291.4584f;
			break;
		case 5:
			*uParam2 = { 2224.406f, -770.556f, 42.5253f };
			*uParam3 = 275.9406f;
			break;
		case 11:
			*uParam2 = { 1331.55f, -1377.718f, 79.5101f };
			*uParam3 = 47.7593f;
			break;
		case 12:
			*uParam2 = { 2977.583f, 576.0204f, 46.8774f };
			*uParam3 = 178.7695f;
			break;
		case 13:
			*uParam2 = { 2945.712f, 1331.153f, 43.4578f };
			*uParam3 = 197.2195f;
			break;
		case 14:
			*uParam2 = { -1811.204f, -369.914f, 165.4986f };
			*uParam3 = 94.4751f;
			break;
		default:
			if (_does_scenario_point_exist(iParam0->f_29))
			{
				*uParam2 = { _get_scenario_point_coords(iParam0->f_29, true) };
				*uParam3 = (_get_scenario_point_heading(iParam0->f_29, true) - 180f);
			}
			break;
	}
	if (func_43(*uParam2))
	{
		*uParam2 = { get_entity_coords(Global_35, true, false) };
		*uParam3 = get_entity_heading(Global_35);
	}
	if (func_387())
	{
		*uParam4 = -1329576073;
	}
	else
	{
		*uParam4 = -1660189677;
	}
}

void func_183(var uParam0, vector3 vParam1, var uParam4, int iParam5)
{
	Global_1949604->f_5867 = uParam0;
	Global_1949604->f_5868 = { vParam1 };
	Global_1949604->f_5871 = uParam4;
	Global_1949604->f_5872 = iParam5;
}

void func_184(vector3 vParam0, var uParam3, vector3 vParam4, var uParam7)
{
	Global_1949604->f_5873 = { vParam0 };
	Global_1949604->f_5876 = uParam3;
	Global_1949604->f_5877 = { vParam4 };
	Global_1949604->f_5880 = uParam7;
}

void func_185(int iParam0)
{
	Global_1949604->f_5887 = iParam0;
}

int func_186(int iParam0)
{
	if (!func_179(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 4:
			return 128;
		case 3:
			return 64;
		case 5:
			return 512;
	}
	return 0;
}

void func_187(int iParam0)
{
	Global_1395601->f_4 = (Global_1395601->f_4 || iParam0);
}

void func_188(int iParam0)
{
	func_347(&(Global_1395601->f_3), iParam0);
}

void func_189(int iParam0)
{
	vVar0 = { _get_scenario_point_coords(iParam0, true) };
	iVar3 = create_itemset(false);
	iVar4 = _0x59b57c4b06531e1e(vVar0, 1f, iVar3, 3);
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		iVar6 = get_indexed_item_in_itemset(iVar5, iVar3);
		iVar7 = _0x18013392501ce5dc(iVar6);
		if (!is_entity_attached(iVar7))
		{
			freeze_entity_position(iVar7, true);
		}
		iVar5++;
	}
	destroy_itemset(iVar3);
}

bool func_190(int iParam0)
{
	if (func_388(81053684, iParam0))
	{
		return true;
	}
	if (func_388(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

int func_191(int iParam0, bool bParam1)
{
	if (!func_389())
	{
		return 0;
	}
	if (!func_390(iParam0))
	{
		return 0;
	}
	if (func_391(iParam0))
	{
		iVar0 = 0;
		if (func_339(iParam0) == 81053684)
		{
			if (bParam1)
			{
				func_392(&iVar0, 2);
			}
		}
		return func_393(iParam0, iVar0);
	}
	return 0;
}

void func_192(var uParam0)
{
	if (func_394(uParam0->f_333, &vVar0, &vVar3, &fVar6))
	{
		if (!does_cam_exist(uParam0->f_334))
		{
			uParam0->f_334 = create_camera_with_params(26379945, vVar0, vVar3, fVar6, false, 2);
		}
		else
		{
			set_cam_params(uParam0->f_334, vVar0, vVar3, fVar6, 0, 1, 1, 2, 1, 0);
		}
		if (!is_cam_active(uParam0->f_334))
		{
			set_cam_active(uParam0->f_334, true);
		}
		if (!is_cam_rendering(uParam0->f_334))
		{
			render_script_cams(true, false, 3000, true, false, 0);
		}
		func_395(uParam0->f_333);
	}
}

void func_193(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_34(iParam0))
	{
		return;
	}
	iVar0 = func_168(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

bool func_194(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_327(uParam0);
	uParam0->f_326 = 49694;
	uParam0->f_327 = 49702;
	uParam0->f_328 = 49710;
	uParam0->f_329 = 49718;
	func_145(uParam0, &iParam1);
	uParam0->f_304.f_2 = iParam2;
	uParam0->f_304.f_3 = iParam3;
	uParam0->f_304.f_4 = iParam4;
	uParam0->f_304.f_5 = 1f;
	uParam0->f_304.f_5.f_1 = 2000;
	uParam0->f_304.f_5.f_2 = 0f;
	uParam0->f_304.f_5.f_3 = 1;
	uParam0->f_304.f_5.f_4 = 0;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1f;
	func_348(&(uParam0->f_318), 128);
	uParam0->f_324 = func_400(uParam0);
	return uParam0->f_324;
}

bool func_195(var uParam0, bool bParam1, bool bParam2)
{
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		(*uParam0)[iVar1] = -1;
		(*uParam0)[iVar1]->f_3 = 0;
		(*uParam0)[iVar1]->f_4 = 99999999;
		(*uParam0)[iVar1]->f_5 = 0f;
		(*uParam0)[iVar1]->f_6 = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_401(iVar0))
		{
			if (func_402(iVar0, bParam2))
			{
				if (bParam1)
				{
					func_403(uParam0, iVar0);
				}
				else
				{
					func_404(uParam0, iVar0);
				}
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_3)
		{
			if (func_111(uParam0[iVar0]))
			{
				iVar2++;
				(*uParam0)[iVar0]->f_5 = func_405((*uParam0)[iVar0]->f_4);
			}
		}
		iVar0++;
	}
	return iVar2 > 0;
}

var func_196(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_197(var uParam0)
{
	iVar0 = Global_1900383[Global_40.f_1095];
	iVar1 = Global_1900383[1];
	if (iVar0 != 0 && does_entity_exist(iVar0))
	{
		if (func_363(7))
		{
			func_196("DEAD_HORSE_FT", 10000, 0, 0, 0, 1);
			return false;
		}
		if (func_364(7))
		{
			func_196("FAR_HORSE_FT", 10000, 0, 0, 0, 1);
			return false;
		}
	}
	else if (iVar1 != 0 && does_entity_exist(iVar1))
	{
		if (func_363(1))
		{
			func_196("DEAD_HORSE_FT", 10000, 0, 0, 0, 1);
			return false;
		}
		if (func_364(1))
		{
			func_196("FAR_HORSE_FT", 10000, 0, 0, 0, 1);
			return false;
		}
	}
	else
	{
		func_196("NO_HORSE_FT", 10000, 0, 0, 0, 1);
		return false;
	}
	if (func_406(uParam0) <= 0)
	{
		func_196("NO_REGION_FT", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

bool func_198()
{
	switch (func_1())
	{
		case 71:
		case 79:
		case 98:
			return true;
	}
	return false;
}

void func_199(int iParam0)
{
	if (!func_198())
	{
		return;
	}
	if (iParam0->f_43.f_9)
	{
		StringCopy(&(iParam0->f_43), "lightrig@wardrobe@wardrobe_camp_generic", 64);
	}
	else
	{
		StringCopy(&(iParam0->f_43), "lightrig@barber@barber_camp_generic", 64);
	}
}

bool func_200(int iParam0)
{
	switch (func_125())
	{
		case -1:
			return (Global_40.f_4283.f_2 && iParam0) != 0;
	}
	return false;
}

bool func_201()
{
	return Global_1898164->f_163;
}

bool func_202()
{
	if (func_125() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

Vector3 func_203(int iParam0)
{
	switch (*iParam0)
	{
		case 8:
			return -322.0917f, 759.3903f, 122.124f;
		case 11:
			return 1334.117f, -1375.125f, 80.9563f;
		case 14:
			return -1812.681f, -371.2848f, 166.9697f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_204()
{
	iVar0 = get_player_index();
	if (_0x3ee1f7a8c32f24e1(iVar0, &uVar1, 1, 0))
	{
		return uVar1;
	}
	if (get_player_target_entity(iVar0, &uVar1) || get_entity_player_is_free_aiming_at(iVar0, &uVar1))
	{
		return uVar1;
	}
	return uVar1;
}

int func_205(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_165(iVar0, 2))
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
				func_167(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_206(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_34(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_168(iParam0);
	func_407(iParam0, 18, 0, 1);
	func_407(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_207(int iParam0, bool bParam1)
{
	if (bParam1 && !func_34(iParam0))
	{
		return false;
	}
	iVar0 = func_168(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

bool func_208(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_408(iParam0, &Var0);
}

void func_209(int iParam0)
{
	switch (func_125())
	{
		case -1:
			Global_40.f_4283.f_2 = (Global_40.f_4283.f_2 || iParam0);
			break;
	}
}

void func_210(var uParam0, var uParam1)
{
	*uParam1 = *uParam0;
	uParam1->f_6 = uParam0->f_1;
	uParam1->f_11 = { uParam0->f_6 };
	uParam1->f_14 = uParam0->f_9;
	uParam1->f_15 = { uParam0->f_10 };
	uParam1->f_18 = uParam0->f_13;
	uParam1->f_19 = uParam0->f_14;
	uParam1->f_7 = { uParam0->f_2 };
	uParam1->f_10 = uParam0->f_5;
	if (uParam1->f_10 == 0f)
	{
		uParam1->f_10 = 1.25f;
	}
	if (uParam0->f_15)
	{
		set_bit(&(uParam1->f_5), 7);
	}
	else
	{
		set_bit(&(uParam1->f_5), 6);
	}
	set_bit(&(uParam1->f_5), 0);
}

bool func_211(var uParam0)
{
	if (!func_41())
	{
		return true;
	}
	if (is_entity_dead(*uParam0))
	{
		return true;
	}
	if (is_ped_in_any_vehicle(*uParam0, true))
	{
		return true;
	}
	if (is_ped_on_mount(*uParam0))
	{
		return true;
	}
	if (func_125() == -1)
	{
		return false;
	}
	if (func_409())
	{
		return true;
	}
	if (func_410(1, 255))
	{
		return true;
	}
	if (func_411())
	{
		return true;
	}
	if (func_412())
	{
		return true;
	}
	return false;
}

bool func_212(var uParam0)
{
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	if (!func_41())
	{
		return false;
	}
	if (func_125() != -1)
	{
		if (Global_1225639->f_12)
		{
			return false;
		}
		if (func_410(1, 255))
		{
			return false;
		}
	}
	else if (is_entity_dead(*uParam0))
	{
		return false;
	}
	if (func_413())
	{
		return false;
	}
	if (vdist(get_entity_coords(*uParam0, true, false), uParam0->f_7) > 3.5f)
	{
		return false;
	}
	if (is_ped_in_melee_combat(*uParam0))
	{
		return false;
	}
	if (is_ped_in_combat(*uParam0, 0))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(*uParam0, true))
	{
		return false;
	}
	if (is_ped_on_mount(*uParam0))
	{
		return false;
	}
	if (_is_ped_hogtied(*uParam0))
	{
		return false;
	}
	if (_is_ped_lassoed(*uParam0))
	{
		return false;
	}
	if (_0x0e99e3bf11bb6367(*uParam0))
	{
		return false;
	}
	if (_0x3bdfcf25b58b0415(*uParam0))
	{
		return false;
	}
	if (is_ped_using_any_scenario(*uParam0))
	{
		return false;
	}
	if (func_50(get_player_index(), 0, 0, 1))
	{
		return false;
	}
	if (func_414())
	{
		return false;
	}
	return true;
}

void func_213(var uParam0)
{
	if (func_34(uParam0->f_4))
	{
		func_123(&(uParam0->f_4), 1, 1);
	}
	if (func_125() == 0)
	{
		iVar0 = -473983589;
	}
	else
	{
		iVar0 = -719620017;
	}
	uParam0->f_4 = func_37("PLAYER_WARDROBE_MAIN_MENU", iVar0, uParam0->f_7, uParam0->f_10, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, -820096546, 0);
	if (func_415())
	{
		func_44(uParam0->f_4, 0, 1);
		uParam0->f_22 = 1;
	}
	else
	{
		uParam0->f_22 = 0;
	}
	set_bit(&(uParam0->f_5), 8);
}

void func_214(var uParam0)
{
	if (func_34(uParam0->f_4))
	{
		func_123(&(uParam0->f_4), 1, 1);
	}
	clear_bit(&(uParam0->f_5), 8);
}

bool func_215()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

void func_216(var uParam0)
{
	_text_database_request("WARD");
	_0x5199405eabfbd7f0("CamTransition01");
	switch (func_125())
	{
		case -1:
			func_416(uParam0);
			break;
	}
}

void func_217(var uParam0)
{
	if (!is_bit_set(uParam0->f_2280.f_5, 1))
	{
		if (func_83(uParam0, 1338309244, -1064259667, 1))
		{
			func_418(uParam0, 51372);
			func_89(uParam0, 52370);
			func_421(uParam0, 52825);
			func_87(uParam0, 52869);
			func_424(uParam0, 53004);
			func_425(uParam0, uParam0->f_2280.f_6);
			func_427(uParam0, func_426(&(uParam0->f_148.f_1754)));
			func_428();
			set_bit(&(uParam0->f_2280.f_5), 1);
		}
	}
	if (is_bit_set(uParam0->f_2280.f_5, 1))
	{
		if (!is_bit_set(uParam0->f_2280.f_5, 2))
		{
			if (func_90(uParam0))
			{
				set_bit(&(uParam0->f_2280.f_5), 2);
			}
		}
	}
}

int func_218(var uParam0)
{
	if (!_text_database_has_loaded("WARD"))
	{
		return 0;
	}
	if (_0xbf2dd155b2adcd0a("CamTransition01"))
	{
		return 0;
	}
	switch (func_125())
	{
		case -1:
			return func_429(uParam0);
		default:
			break;
	}
	return 0;
}

void func_219(var uParam0)
{
	if (!_0xa24c1d341c6e0d53(1, 0, 0))
	{
		animpostfx_play("CamTransition01");
	}
	_hide_hud_component(-252438768);
	if (_does_volume_exist(uParam0->f_1))
	{
		_delete_volume(uParam0->f_1);
	}
	uParam0->f_1 = _create_volume_cylinder(uParam0->f_11, 0f, 0f, 0f, 5f, 5f, 10f);
	_0xb56d41a694e42e86(uParam0->f_1, 10208, 8192, 0, -1, -1, 0);
	_0x19c7567d2f2287d6(uParam0->f_1, 7);
	uParam0->f_3 = _0x4c39c95ae5db1329(uParam0->f_1, 0, 7);
	set_player_control(player_id(), false, 0, false);
	clear_ped_tasks_immediately(*uParam0, false, true);
	_0x0eabf182fbb63d72(*uParam0, 1, 1);
	_set_entity_coords_and_heading(*uParam0, uParam0->f_11, uParam0->f_14, true, false, true);
	_0x9587913b9e772d29(*uParam0, 0);
	func_430(*uParam0, &(uParam0->f_2));
	func_131(0, *uParam0);
	switch (func_125())
	{
		case -1:
			func_431(uParam0);
			break;
	}
	func_432(uParam0);
	set_bit(&(uParam0->f_5), 10);
	Global_1949598->f_1 = 1;
}

void func_220()
{
}

void func_221(bool bParam0, bool bParam1)
{
	if (func_125() == -1)
	{
		func_433();
	}
	else
	{
		return;
	}
	func_434();
	Global_40.f_9.f_14 = func_435();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_436())
		{
			func_318(Global_1310720->f_1);
		}
		else if (func_437() == func_438(Global_36, 1) && func_11() != 2)
		{
			func_318(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_318(Global_36);
		}
		func_439(Global_36, &vVar0, &uVar4);
		if (!func_436())
		{
			if (func_440(vVar0, Global_36) < func_440(Global_40.f_9.f_7, Global_36))
			{
				func_318(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_438(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_439(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_441(Global_1935630, 8192);
	}
	func_442();
}

void func_222(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_443(&Global_0, 8);
	}
	if (!func_158() || func_125() != -1)
	{
		return;
	}
	func_443(&Global_0, 1);
}

void func_223(int iParam0)
{
	Global_1395601->f_4 = (Global_1395601->f_4 - (Global_1395601->f_4 && iParam0));
}

void func_224(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_8))
	{
		_delete_anim_scene(uParam0->f_8);
	}
	clear_timecycle_modifier();
	uParam0->f_10 = 4;
}

bool func_225(int iParam0)
{
	iParam0 = func_444(iParam0);
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

int func_226(int iParam0)
{
	iParam0 = func_444(iParam0);
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

float func_227(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_228(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_445(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_446(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_446(iParam0) + 1;
	fVar6 = func_447(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_448(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_229(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 8:
			vVar0 = { -331.5268f, 779.9186f, 115.0433f };
			fVar3 = 184.8843f;
			break;
		case 9:
			vVar0 = { 2628.642f, -1214.329f, 52.1318f };
			fVar3 = 173.1232f;
			break;
		case 10:
			vVar0 = { -829.2702f, -1328.705f, 42.5669f };
			fVar3 = 296.6042f;
			break;
		case 11:
			vVar0 = { 1367.729f, -1373.996f, 77.7078f };
			fVar3 = 102.8617f;
			break;
		case 13:
			vVar0 = { 2927.111f, 1342.72f, 43.0296f };
			fVar3 = 85.0869f;
			break;
		case 14:
			vVar0 = { -1804.634f, -367.4374f, 160.7906f };
			fVar3 = 89.5129f;
			break;
		case 12:
			vVar0 = { 2956.446f, 526.9525f, 43.7402f };
			fVar3 = 85.9469f;
			break;
		case 16:
			vVar0 = { -5522.907f, -2977.441f, -2.5691f };
			fVar3 = 288.527f;
			break;
	}
	if (func_43(vVar0))
	{
		return;
	}
	if (does_entity_exist(iParam0))
	{
		iVar4 = _find_closest_active_scenario_point_of_type(vVar0, -1805387726, 5f, 1, false);
		if (_does_scenario_point_exist(iVar4))
		{
			_set_entity_coords_and_heading(iParam0, vVar0, fVar3, true, false, true);
			_task_use_scenario_point(iParam0, iVar4, 0, 0, true, false, 0, false, -1f, false);
		}
	}
}

void func_230(var uParam0, int iParam1)
{
	_journal_write_entry(uParam0);
	if (iParam1 == 1)
	{
		func_231(1);
	}
}

void func_231(bool bParam0)
{
	if (bParam0)
	{
		func_347(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_348(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_232(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_233(int iParam0)
{
	if (!func_232(iParam0))
	{
		return 0;
	}
	return func_450(func_449(iParam0));
}

int func_234(int iParam0)
{
	if (!func_232(iParam0))
	{
		return -1;
	}
	return func_451(func_449(iParam0));
}

bool func_235(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_236(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_63 & 64512 != 0;
}

void func_237(int iParam0, bool bParam1)
{
	if (!func_235(iParam0))
	{
		return;
	}
	if (func_452((*Global_1835011)[iParam0], 8192))
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

bool func_238(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

void func_239(int iParam0, bool bParam1, int iParam2)
{
	if (!func_238(iParam0))
	{
		return;
	}
	bVar0 = true;
	if (!bParam1)
	{
		bVar0 = does_blip_exist((*Global_1347702)[iParam0]->f_37);
	}
	func_453(&((*Global_1347702)[iParam0]->f_14));
	func_454(&((*Global_1347702)[iParam0]->f_12), 16384);
	func_455(&((*Global_1347702)[iParam0]->f_13), 4096);
	if (bVar0)
	{
		if ((*Global_1347702)[iParam0]->f_12 & 1048576 != 0 && (*Global_1347702)[iParam0]->f_13 & 2048 == 0)
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
			if (iParam2 == 1)
			{
				func_457(iParam0, func_456(iParam0), 0, 0);
			}
		}
		else if ((*Global_1347702)[iParam0]->f_18 > -1f)
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
			if (iParam2 == 1)
			{
				func_457(iParam0, func_458(iParam0), 0, 0);
			}
		}
		else
		{
			_set_blip_flash_style((*Global_1347702)[iParam0]->f_37, 724623647);
		}
	}
}

int func_240()
{
	return 0;
}

bool func_241(int iParam0, int iParam1, var uParam2)
{
	Var0.f_20 = 10;
	Var0.f_31 = 10;
	*uParam2 = { Var0 };
	uParam2->f_5 = -1;
	uParam2->f_12 = -1;
	*uParam2 = func_459(iParam0);
	if (_item_database_is_shop_layout_key_valid(*uParam2))
	{
		if (_item_database_get_shop_layout_info(*uParam2, &(uParam2->f_1)))
		{
			return true;
		}
	}
	*uParam2 = func_82(iParam1);
	if (_item_database_is_shop_layout_key_valid(*uParam2))
	{
		if (_item_database_get_shop_layout_info(*uParam2, &(uParam2->f_1)))
		{
			return true;
		}
	}
	return false;
}

bool func_242(var uParam0, int iParam1)
{
	iVar0 = func_460(&(uParam0->f_2031));
	if (iVar0 <= 0)
	{
		return false;
	}
	iVar1 = 0;
	if (!func_461(iParam1, &iVar1))
	{
		return false;
	}
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (func_462(iVar2, &(uParam0->f_2031)))
		{
			if (func_463(&(uParam0->f_2031)) == iVar1)
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_243(int iParam0, var uParam1)
{
	Var0.f_20 = 10;
	Var0.f_31 = 10;
	*uParam1 = { Var0 };
	uParam1->f_5 = -1;
	uParam1->f_12 = -1;
	*uParam1 = iParam0;
	if (!_item_database_is_shop_layout_key_valid(*uParam1))
	{
		return false;
	}
	if (!_item_database_get_shop_layout_info(*uParam1, &(uParam1->f_1)))
	{
		return false;
	}
	return true;
}

bool func_244(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	if (func_464(iParam1, &(uParam0->f_2031)))
	{
		iVar0 = func_245(&(uParam0->f_2031));
		uVar1 = func_465(&(uParam0->f_2031));
		iVar2 = func_466(0);
		iVar3 = 0;
		bVar4 = false;
		iVar6 = func_460(&(uParam0->f_2031));
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if (func_462(iVar5, &(uParam0->f_2031)))
			{
				if (func_467(uParam0, iParam1, &iVar3))
				{
					bVar4 = true;
				}
				else
				{
					iVar5++;
				}
				if (bVar4)
				{
					if (bParam2)
					{
						if (bParam7)
						{
							if (!func_468())
							{
							}
							uParam0->f_2031.f_101 = 1;
						}
						else if (func_275(&(uParam0->f_2031)))
						{
							uParam0->f_2031.f_78 = iVar3;
							if (!func_469())
							{
							}
						}
						else
						{
							func_470(uParam0);
						}
						if (iParam3 >= 0)
						{
							uParam0->f_2031.f_102 = iParam3;
						}
					}
					if (bParam4)
					{
						uParam0->f_2031.f_99 = 1;
						uParam0->f_2031.f_104 = iVar0;
						uParam0->f_2031.f_104.f_5 = iParam1;
						uParam0->f_2031.f_104.f_3 = uVar1;
						uParam0->f_2031.f_104.f_4 = iVar2;
						uParam0->f_2031.f_100 = 0;
					}
					return true;
				}
				return false;
			}
		}
	}
}

int func_245(var uParam0)
{
	return uParam0->f_12;
}

int func_246(var uParam0)
{
	if (uParam0->f_2031.f_99)
	{
		uParam0->f_2031.f_104.f_3 = -1;
		uParam0->f_2031.f_104.f_1 = -1;
		uParam0->f_2031.f_104 = -1;
		uParam0->f_2031.f_104.f_5 = -1;
		uParam0->f_2031.f_104.f_6 = -1;
		uParam0->f_2031.f_100 = 0;
		uParam0->f_2031.f_99 = 0;
		return 1;
	}
	return 0;
}

void func_247(var uParam0)
{
	uParam0->f_2031.f_83 = 0;
}

void func_248()
{
	Global_1914319->f_16855.f_3 = 0;
}

char* func_249(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			return "SHOP_TITLE_BAIT";
		case 15:
			return "SHOP_TITLE_BANK";
		case 8:
			return "SHOP_TITLE_BARBER";
		case 33:
			return "SHOP_TITLE_BARTENDER";
		case 28:
			return "SHOP_TITLE_";
		case 29:
			return "SHOP_TITLE_BOUNTYHUNTING_MP_RETURN";
		case 10:
			return "SHOP_TITLE_BUTCHER";
		case 25:
			return "SHOP_TITLE_CAMP_SHAVING";
		case 30:
			return "SHOP_TITLE_COACH";
		case 0:
			return "SHOP_TITLE_DOCTOR";
		case 4:
			return "SHOP_TITLE_FENCE";
		case 3:
			return "SHOP_TITLE_GENERAL";
		case 6:
			return "SHOP_TITLE_GUNSMITH";
		case 27:
			return "SHOP_TITLE_TRAINER";
		case 9:
			return "SHOP_TITLE_HORSE_SHOP";
		case 2:
			return "SHOP_TITLE_POST";
		case 26:
			return "SHOP_TITLE_QUARTER";
		case 7:
			return "SHOP_TITLE_TAILOR";
		case 1:
			return "SHOP_TITLE_TRAIN_STATION";
		case 31:
			return "SHOP_TITLE_HORSE_FENCE_MP";
		case 5:
			return "SHOP_TITLE_HORSE_FENCE";
		case 12:
			return "SHOP_TITLE_MARKET_PLACE";
		case 13:
			return "SHOP_TITLE_MARKET_PLACE";
		case 14:
			return "SHOP_TITLE_MARKET_PLACE";
		case 18:
			return "SHOP_TITLE_ANIMAL_TRAPPER";
		case 19:
			return "SHOP_TITLE_PEARSON";
		case 22:
			return "SHOP_TITLE_NEWSPAPER_BOY";
		case 20:
			return "SHOP_TITLE_HOTEL";
		case 32:
			return "SHOP_TITLE_WILDERNESS_SUPPLIES";
		case 34:
			return "SHOP_TITLE_HANDHELD";
		case 21:
			return "SHOP_TITLE_PHOTO_STUDIO";
		case 24:
			return "SHOP_TITLE_WARDROBE";
		default:
			break;
	}
	return "INVALID SHOP";
}

void func_250(var uParam0, int iParam1, int iParam2)
{
	func_471(uParam0, iParam1, _get_label_text_by_hash(iParam2));
}

void func_251(var uParam0, int iParam1, bool bParam2)
{
	bVar0 = func_472(uParam0, iParam1);
	_databinding_add_data_bool(uParam0->f_2031.f_53, func_473(iParam1, bVar0), bParam2);
}

void func_252(var uParam0, int iParam1, bool bParam2)
{
	bVar0 = func_472(uParam0, iParam1);
	_databinding_add_data_bool(uParam0->f_2031.f_53, func_474(iParam1, bVar0), bParam2);
}

void func_253(var uParam0, int iParam1, bool bParam2)
{
	bVar0 = func_475(uParam0, iParam1);
	bVar1 = func_476(uParam0, iParam1);
	func_251(uParam0, iParam1, 0);
	func_252(uParam0, iParam1, 0);
	_databinding_add_data_bool(uParam0->f_2031.f_53, func_477(iParam1), bParam2);
	func_251(uParam0, iParam1, bVar0);
	func_252(uParam0, iParam1, bVar1);
}

bool func_254(var uParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 336033112:
			return func_478(uParam0, uParam1);
		case -384358143:
			return func_479(uParam0, uParam1);
		case -1048755899:
			return func_480(uParam0, uParam1);
		case -349391286:
			return func_481(uParam0, uParam1);
		case -760956867:
			return func_482(uParam0, uParam1);
		case 38807286:
			return func_483(uParam0, uParam1);
		case -1395073769:
			return true;
		case -853534656:
			return func_484(uParam0, uParam1);
		case 777890122:
			return func_485(uParam0, uParam1);
		case -1502467280:
			return func_486(uParam0, uParam1);
		case -239176093:
			return func_487(uParam0, uParam1);
		case -1080155519:
			return func_488(uParam0);
		case 1394581936:
			return func_489(uParam0, uParam1);
		case 193788635:
			return func_490(uParam0, uParam1);
		case 1119253406:
			return func_491(uParam0, uParam1);
		case 1837492866:
			return func_492(uParam0);
		case -339889117:
			return func_493(uParam0, uParam1);
		case -348190488:
			return func_494(uParam0, uParam1);
		case 1702073444:
			return func_495(uParam0, uParam1);
		case -584027224:
			return func_496(uParam0, uParam1->f_9);
		case -1968468235:
			return func_497(uParam0, uParam1);
		case 761079318:
			return func_498(uParam0, uParam1);
		case 1942587409:
			return func_499(uParam0, uParam1);
		case 2077448405:
			return func_500(uParam0, uParam1);
		case -2056428614:
			return func_501(uParam0, uParam1);
		case -395279071:
			return func_502(uParam0, uParam1);
		case 420195545:
			return func_503(uParam0, uParam1);
		case -698448975:
			return func_504(uParam0, uParam1);
		case -627085098:
			return func_505(uParam0, uParam1);
		case -2092532275:
		case -1352600334:
		case -772187037:
		case 317179309:
		case 2073652352:
			return func_506(uParam0, uParam1);
	}
	return true;
}

bool func_255(var uParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 336033112:
			return func_507(uParam0, uParam1);
		case -1968468235:
			return true;
		case -384358143:
			return func_508(uParam0, uParam1);
		case -349391286:
			return func_509(uParam0, uParam1);
		case -760956867:
			return func_510(uParam0, uParam1);
		case 38807286:
			return func_511(uParam0, uParam1);
		case -1395073769:
			return true;
		case -853534656:
			return func_512(uParam0, uParam1);
		case 777890122:
			return func_513(uParam0, uParam1);
		case -1502467280:
			return func_514(uParam0, uParam1);
		case -1048755899:
			return func_515(uParam0, uParam1);
		case -239176093:
			return func_516(uParam0, uParam1);
		case -1080155519:
			return func_517(uParam0, uParam1);
		case 1394581936:
			return func_518(uParam0, uParam1);
		case 193788635:
			return func_519(uParam0, uParam1);
		case 1119253406:
			return func_520(uParam0, uParam1);
		case 1837492866:
			return func_521(uParam0, *uParam1);
		case -339889117:
			return func_522(uParam0, *uParam1);
		case -348190488:
			return func_523(uParam0, *uParam1);
		case 1702073444:
			return func_524(uParam0, *uParam1);
		case -584027224:
			return func_525(uParam0, uParam1);
		case 761079318:
			return func_526(uParam0, uParam1);
		case 1942587409:
			return func_527(uParam0, uParam1);
		case -2056428614:
			return func_528(uParam0, uParam1);
		case 2077448405:
			return func_529(uParam0, uParam1);
		case -698448975:
			return func_530(uParam0, uParam1);
		case -627085098:
			return func_531(uParam0, uParam1);
		case -2092532275:
		case -1352600334:
		case -772187037:
		case 317179309:
		case 2073652352:
			return func_532(uParam0, uParam1);
	}
	return true;
}

bool func_256(var uParam0, int iParam1, int iParam2)
{
	if (!func_533(iParam1))
	{
		return false;
	}
	if (_item_database_get_shop_layout_menu_info_by_id(iParam1, iParam2, &Var0))
	{
		if (Var0.f_5 > 0)
		{
			bVar7 = false;
			iVar8 = -1;
			iVar9 = 0;
			while (iVar9 < Var0.f_5)
			{
				if (_item_database_get_shop_layout_menu_page_key(iParam1, iParam2, iVar9, &iVar8))
				{
					if (!func_534(uParam0, iParam1, iVar8))
					{
						bVar7 = true;
					}
					else
					{
						iVar9++;
					}
					if (!bVar7)
					{
						return true;
					}
					return false;
				}
			}
		}
	}
}

bool func_257(var uParam0, int iParam1, int iParam2)
{
	if (!func_533(iParam1))
	{
		return false;
	}
	if (_item_database_get_shop_layout_menu_info_by_id(iParam1, iParam2, &Var0))
	{
		if (Var0.f_6 > 0)
		{
			iVar14 = 0;
			while (iVar14 < Var0.f_6)
			{
				if (_item_database_get_shop_layout_menu_info_by_index(iParam1, iParam2, iVar14, &iVar7))
				{
					if (func_257(uParam0, iParam1, iVar7))
					{
						return true;
					}
				}
				iVar14++;
			}
		}
		if (Var0.f_5 > 0)
		{
			iVar15 = -1;
			iVar16 = 0;
			while (iVar16 < Var0.f_5)
			{
				if (_item_database_get_shop_layout_menu_page_key(iParam1, iParam2, iVar16, &iVar15))
				{
					if (func_535(uParam0, iParam1, iVar15))
					{
						return true;
					}
				}
				iVar16++;
			}
		}
	}
	return false;
}

Vector3 func_258(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_259(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (is_ped_a_player(iParam0))
	{
		iParam0 = 0;
	}
	else
	{
		iVar0 |= 1;
	}
	if (bParam2 && Global_1946804->f_2535 != 0)
	{
		func_536(Global_1946804->f_2535);
		func_537(0);
		Global_1946804->f_2535 = 0;
	}
	if (func_538(32768))
	{
		func_539(1108822547);
	}
	if (func_125() != -1)
	{
		func_94(2, 0, 6, iParam0, 0);
		func_94(4, 0, 0, iParam0, 0);
		func_94(5, 0, 0, iParam0, 0);
		func_94(6, 0, 0, iParam0, 0);
	}
	else
	{
		func_94(2, 0, iVar0, iParam0, 0);
	}
	func_336(0);
}

bool func_260(var uParam0)
{
	uParam0->f_2031.f_49 = 0;
	return _0x3d084d5568fb4028(30);
	return true;
}

int func_261(var uParam0)
{
	return func_245(&(uParam0->f_2031));
}

int func_262(var uParam0)
{
	uVar0 = func_540(&(uParam0->f_2031));
	return uVar0;
}

int func_263(var uParam0)
{
	if (!does_entity_exist(uParam0->f_2031.f_97))
	{
		return Global_35;
	}
	return uParam0->f_2031.f_97;
}

int func_264(var uParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		uParam0->f_2031.f_74 = 0;
		uParam0->f_2031.f_75 = 0;
		uParam0->f_2031.f_76 = 0;
		func_541(uParam0, 0);
		func_542(uParam0, "");
		func_543(uParam0, 0);
		func_544(uParam0);
		func_543(uParam0, 0);
		func_545(uParam0, 0);
		func_546(uParam0, 0, 0, 0);
		func_547(uParam0, 0);
		func_548(uParam0, 0, 0, 0);
		func_549(uParam0);
		func_550(uParam0, 0);
		func_551(uParam0, 0);
		_databinding_add_data_bool(uParam0->f_2031.f_50, func_552(), false);
		_databinding_add_data_hash(uParam0->f_2031.f_50, "ItemPaletteItemName", -1);
		_databinding_add_data_bool(uParam0->f_2031.f_54, "isGoldPrice", false);
		_databinding_add_data_bool(uParam0->f_2031.f_54, "rightPriceTextVisible", false);
		_databinding_add_data_bool(uParam0->f_2031.f_54, "modifiedPriceVisible", false);
		_databinding_add_data_bool(uParam0->f_2031.f_54, "modifiedPriceGold", false);
		_databinding_add_data_int(uParam0->f_2031.f_54, "purchasePrice", 0);
		_databinding_add_data_string(uParam0->f_2031.f_54, "rightPriceRawText", "");
		_databinding_add_data_bool(uParam0->f_2031.f_54, "locked", false);
		_databinding_add_data_bool(uParam0->f_2031.f_54, "itemPriceRankLocked", false);
		_databinding_add_data_int(uParam0->f_2031.f_54, "itemPriceRank", 0);
		_databinding_add_data_bool(uParam0->f_2031.f_54, "isAffordable", false);
		_databinding_add_data_string(uParam0->f_2031.f_54, "purchaseLabel", "");
		_databinding_add_data_int(uParam0->f_2031.f_54, "tokenPrice", 0);
	}
	switch (iParam1)
	{
		case 1036144478:
			return func_553(uParam0, bParam2);
		case 2057502022:
			return func_554(uParam0, bParam2);
		case -706012851:
			return func_555(uParam0, bParam2);
		case -645366665:
			return func_556(uParam0, bParam2);
		case -252412307:
			return func_557(uParam0, bParam2);
		case -659372875:
			return func_558(uParam0, bParam2);
		case 2144984909:
			return func_559(uParam0, bParam2);
		case 115613670:
			return func_560(uParam0, bParam2);
		case 1275816411:
			return func_561(uParam0, bParam2);
		case 178644271:
			return func_562(uParam0, bParam2);
		case 1705401718:
			return func_563(uParam0, bParam2);
		case 310306577:
			return func_564(uParam0, bParam2);
		case -856183175:
			return func_565(uParam0, bParam2);
		case 1860655620:
			return func_566(uParam0, bParam2);
		case 94016929:
			return func_567(uParam0, bParam2);
		case 803749366:
			return func_568(uParam0, bParam2);
		case -2144266389:
			return func_569(uParam0, bParam2);
		case -1548684311:
			return func_570(uParam0, bParam2);
		case 1965673387:
			return func_571(uParam0, bParam2);
		case 1013443471:
			return func_572(uParam0, bParam2);
		case 23814986:
			return func_573(uParam0, bParam2);
		case 253603960:
			return func_574(uParam0, bParam2);
		case -440651963:
			return func_575(uParam0, bParam2);
		case -996064024:
			return func_576(uParam0, bParam2);
	}
	return 0;
}

bool func_265()
{
	return func_266(2048);
}

bool func_266(int iParam0)
{
	return func_344(Global_1914319->f_16855.f_3, iParam0);
}

bool func_267(int iParam0)
{
	return _request_uiapp_transition_by_hash(1289756680, iParam0);
}

bool func_268(int iParam0, var uParam1)
{
	if (func_577(uParam1))
	{
		if (func_578(iParam0, uParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_269(var uParam0)
{
	iVar0 = func_262(uParam0);
	if (func_273(uParam0) && !(func_579(uParam0) && func_580(uParam0)))
	{
		func_250(uParam0, 6, -436465203);
	}
	else
	{
		func_250(uParam0, 6, -436465203);
	}
	func_581(uParam0);
	if (!func_264(uParam0, iVar0, 0))
	{
		return false;
	}
	if (!func_267(iVar0))
	{
		return false;
	}
	func_541(uParam0, 0);
	func_582();
	if (!uParam0->f_2031.f_69)
	{
		uParam0->f_2031.f_69 = 1;
	}
	return true;
}

void func_270(int iParam0)
{
	func_348(&(Global_1914319->f_16855.f_3), iParam0);
}

var func_271(var uParam0)
{
	return uParam0->f_19;
}

bool func_272(var uParam0)
{
	if (uParam0->f_2031.f_100)
	{
		if (func_243(uParam0->f_2031.f_104.f_1, &(uParam0->f_2031)))
		{
			uParam0->f_2031.f_71 = uParam0->f_2031.f_104.f_2;
			func_462(uParam0->f_2031.f_104.f_3, &(uParam0->f_2031));
			if (func_244(uParam0, uParam0->f_2031.f_104, 1, uParam0->f_2031.f_104.f_4, 0, 0, 0, 1))
			{
				func_246(uParam0);
				iVar0 = func_277(0);
				if (func_278(iVar0, 0))
				{
					func_279(iVar0);
				}
				return true;
			}
		}
	}
	else if (func_244(uParam0, uParam0->f_2031.f_104, 1, uParam0->f_2031.f_104.f_4, 0, 1, 1, 1))
	{
		func_246(uParam0);
		iVar1 = func_277(0);
		if (func_278(iVar1, 0))
		{
			func_279(iVar1);
		}
		return true;
	}
	return false;
}

bool func_273(var uParam0)
{
	if (func_583(&(uParam0->f_2031)) == uParam0->f_2031.f_71)
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_274(var uParam0, int iParam1)
{
	func_251(uParam0, iParam1, 0);
	func_252(uParam0, iParam1, 0);
	func_253(uParam0, iParam1, 0);
}

bool func_275(var uParam0)
{
	if ((uParam0->f_42 - 1) >= 0)
	{
		if (!func_584(uParam0, &Var0))
		{
			return false;
		}
		uParam0->f_31[uParam0->f_42] = -1;
		uParam0->f_20[uParam0->f_42] = 0;
		uParam0->f_42 = (uParam0->f_42 - 1);
		uParam0->f_12 = { Var0 };
		if (uParam0->f_42 < 0 || uParam0->f_42 >= 10)
		{
			uParam0->f_19 = 0;
		}
		else
		{
			uParam0->f_19 = &uParam0->f_20[uParam0->f_42];
		}
		return true;
	}
	return false;
}

int func_276(var uParam0)
{
	iVar0 = 0;
	if (!func_585(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
		return -1;
	}
	return func_586(iVar0, &(uParam0->f_2031));
}

int func_277(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_16855.f_3.f_15;
	}
	return Global_1914319->f_16855.f_3.f_9;
}

bool func_278(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

void func_279(int iParam0)
{
	_unlock_set_new(func_587(iParam0), false);
}

bool func_280(var uParam0)
{
	uParam0->f_2031.f_74 = func_588(uParam0);
	iVar0 = 0;
	if (!func_585(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
		return false;
	}
	if (func_589(iVar0, &(uParam0->f_2031), &iVar1))
	{
		func_591(uParam0, func_590(uParam0, iVar1));
		func_592(uParam0, 0, 1);
		func_541(uParam0, 0);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_281(var uParam0)
{
	if (((!func_266(1024) && func_593() != -729996127) && func_262(uParam0) != 1965673387) && func_262(uParam0) != -1548684311)
	{
		if (!_databinding_is_data_id_valid(func_594()))
		{
			iVar0 = func_595();
			iVar1 = func_293();
			iVar2 = (iVar0 - iVar1);
			if (iVar1 < 0)
			{
				iVar3 = ((iVar1 * -1) - iVar0);
				iVar2 = ((iVar1 * -1) - iVar3);
			}
			iVar4 = _databinding_get_array_count(uParam0->f_2031.f_58);
			if (iVar2 >= iVar4 || iVar2 < 0)
			{
				return false;
			}
			iVar5 = _databinding_get_item_context_by_index(uParam0->f_2031.f_58, iVar2);
			if (!_databinding_is_data_id_valid(iVar5))
			{
				return false;
			}
			func_596(&iVar5);
			iVar6 = _databinding_read_data_int_from_parent(func_594(), func_597());
			func_598(iVar6);
		}
	}
	func_599(uParam0);
	Var7.f_14 = -1;
	Var7.f_15 = -1;
	func_600(uParam0, &Var7);
	if (func_266(1024))
	{
		if (func_583(&(uParam0->f_2031)) == uParam0->f_2031.f_71)
		{
			uParam0->f_2031.f_48 = 1;
		}
		if (!func_601(uParam0, 8))
		{
			if (uParam0->f_2031.f_48)
			{
				if (!uParam0->f_2031.f_82)
				{
					func_302(uParam0, 1);
				}
			}
			else
			{
				func_302(uParam0, 1);
			}
			func_602(uParam0);
		}
		if (func_468())
		{
			if (uParam0->f_2031.f_121)
			{
				Stack.Push(uParam0);
				Stack.Push(func_262(uParam0));
				Call_Loc(uParam0->f_2031.f_122);
			}
			func_603(uParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (!func_604(uParam0, Var7.f_11, &Var7))
	{
	}
	if (!func_255(uParam0, &Var7))
	{
	}
	if (uParam0->f_2031.f_115)
	{
		Stack.Push(uParam0);
		Stack.Push(&Var7);
		Call_Loc(uParam0->f_2031.f_116);
		if (!StackVal)
		{
		}
	}
	if (Var7.f_11 == 1705401718 || Var7.f_11 == 310306577)
	{
		if (!func_297(uParam0))
		{
		}
	}
	if (!func_296(uParam0))
	{
	}
	if (Var7.f_11 != 1705401718 && Var7.f_11 != 310306577)
	{
		func_605(uParam0);
	}
	func_606(uParam0);
	return true;
}

int func_282(var uParam0, bool bParam1)
{
	if (func_262(uParam0) != -1548684311 && func_262(uParam0) != 1965673387)
	{
		if (!_databinding_is_data_id_valid(func_607(0)))
		{
			iVar0 = func_466(0);
			iVar1 = func_293();
			iVar2 = (iVar0 - iVar1);
			if (iVar1 < 0)
			{
				iVar3 = ((iVar1 * -1) - iVar0);
				iVar2 = ((iVar1 * -1) - iVar3);
			}
			iVar4 = _databinding_get_array_count(uParam0->f_2031.f_58);
			if (iVar2 >= iVar4 || iVar2 < 0)
			{
				return 0;
			}
			iVar5 = _databinding_get_item_context_by_index(uParam0->f_2031.f_58, iVar2);
			if (!_databinding_is_data_id_valid(iVar5))
			{
				return 0;
			}
			func_608(&iVar5, 0);
			iVar6 = _databinding_read_data_int_from_parent(func_607(0), func_597());
			func_609(iVar6, 0);
		}
	}
	func_541(uParam0, 0);
	func_543(uParam0, 0);
	func_545(uParam0, 0);
	func_546(uParam0, 0, 0, 0);
	func_547(uParam0, 0);
	func_548(uParam0, 0, 0, 0);
	func_549(uParam0);
	func_544(uParam0);
	func_610(&Var7, uParam0, bParam1);
	if (!func_611(uParam0, Var7.f_11, &Var7))
	{
	}
	if (!func_254(uParam0, &Var7))
	{
	}
	if (func_278(Var7.f_9, 0))
	{
		if (func_612(Var7.f_9, -495963434))
		{
			if (!func_613(uParam0, &Var7))
			{
			}
		}
	}
	if (uParam0->f_2031.f_113)
	{
		Stack.Push(uParam0);
		Stack.Push(&Var7);
		Call_Loc(uParam0->f_2031.f_114);
		if (!StackVal)
		{
		}
	}
	if (!func_614(uParam0, &Var7))
	{
	}
	if (func_278(Var7.f_9, 0))
	{
		if (func_612(Var7.f_9, -495963434))
		{
			func_613(uParam0, &Var7);
		}
	}
	if (func_615(0) == -1352600334 && func_616(0) != -1352600334)
	{
		_0xd962f8579d702db5();
	}
	func_617(uParam0, bParam1);
	return 1;
}

int func_283(var uParam0)
{
	bVar0 = false;
	iVar1 = func_618(uParam0);
	iVar2 = func_619(uParam0);
	iVar3 = func_620(uParam0);
	iVar4 = func_621((iVar1 + (9 - iVar3)));
	iVar5 = (iVar1 + (10 - iVar3));
	iVar6 = func_277(0);
	if (!func_278(iVar6, 0))
	{
		return 0;
	}
	iVar7 = func_616(0);
	if (iVar7 == -760956867 || iVar7 == 38807286)
	{
		if (iVar6 != 1279130184)
		{
			bVar8 = (func_622(0) && iVar3 > 1);
			func_623(uParam0, bVar8);
			if (func_622(0))
			{
				if (func_612(iVar6, 518788085))
				{
					if (iVar6 == 1574030042)
					{
						func_623(uParam0, 0);
						func_624(1574030042, Global_35, 0, 0, 0, 1);
					}
					else if (iVar6 == 1420417918)
					{
						func_623(uParam0, 0);
						func_624(1420417918, Global_35, 1, 1, 1, 1);
					}
					else if (iVar2 == 0 && iVar1 == 0)
					{
						bVar0 = true;
					}
					else if (iVar7 == -760956867)
					{
						func_625(iVar6, iVar4);
					}
					else
					{
						iVar9 = (iVar2 - iVar1);
						if (iVar9 < 0)
						{
							bVar0 = true;
						}
						else
						{
							func_626(iVar6, iVar9);
						}
					}
				}
				else if (iVar2 == 0 && iVar1 == 0)
				{
					bVar0 = true;
				}
				else if (func_612(iVar6, -650091303))
				{
					iVar5 = ((iVar1 - 1) + func_627(iVar6));
					if (func_628(iVar6, iVar5))
					{
					}
					else if (!func_624(iVar6, Global_35, iVar5, iVar5, iVar5, 1))
					{
					}
				}
				else if (func_612(iVar6, 1926305489))
				{
					if (!func_624(iVar6, Global_35, iVar5, -1, -1, 1))
					{
					}
				}
				else if (func_612(iVar6, -248115177))
				{
					if (!func_624(iVar6, Global_35, -1, iVar5, -1, 1))
					{
					}
				}
				else if (func_612(iVar6, -489098996))
				{
					if (!func_624(iVar6, Global_35, -1, -1, iVar5, 1))
					{
					}
				}
				else if (iVar6 == func_629())
				{
					func_630(iVar6, Global_35, iVar1, 1);
				}
				else if (func_631(iVar6))
				{
					func_630(iVar6, Global_35, 0, 1);
					func_623(uParam0, 0);
				}
				else if (iVar6 == 1279130184)
				{
					func_630(iVar6, Global_35, iVar4, 1);
					func_623(uParam0, 0);
				}
				else if (!func_630(iVar6, Global_35, iVar4, 1))
				{
				}
				if (bVar0)
				{
					func_630(func_632(), Global_35, -1, 1);
					iVar11 = 0;
					while (iVar11 < 3)
					{
						if (func_633(iVar11, &iVar10))
						{
							func_630(iVar10, Global_35, -1, 1);
						}
						iVar11++;
					}
				}
			}
			if (func_612(iVar6, 518788085))
			{
				bVar12 = true;
			}
			else
			{
				bVar12 = func_634(uParam0, iVar6, iVar7, -1);
			}
			bVar13 = func_622(0);
			if (func_635(uParam0))
			{
				bVar13 = (bVar13 && ((bVar12 && iVar1 != iVar2) || !bVar12));
			}
			if (uParam0->f_2 == 25)
			{
				iVar14 = -672301300;
			}
			else
			{
				iVar14 = -2494464;
			}
			func_636(uParam0, 1, iVar14, bVar13, 1, 0);
			func_637(uParam0, uParam0->f_2 == 8);
			bVar16 = true;
			if (iVar7 == -760956867)
			{
				bVar16 = func_638(iVar6, &iVar15);
			}
			else if (iVar7 == 38807286)
			{
				bVar16 = func_639(iVar6, &iVar15);
			}
			if (iVar15 == 4 && !bVar16)
			{
				func_640(uParam0, -1975076989);
			}
			else if (iVar15 == 2 && !bVar16)
			{
				func_640(uParam0, -541416869);
			}
			else if (iVar15 == 3 && !bVar16)
			{
				func_640(uParam0, 1589147725);
			}
			else if (func_635(uParam0) && iVar1 == iVar2)
			{
				func_640(uParam0, -797415580);
			}
			else if (func_612(iVar6, 518788085) || func_631(iVar6))
			{
				func_640(uParam0, -1385517182);
			}
			else
			{
				func_542(uParam0, _create_var_string(2, "HAIR_SLIDER_CURRENT", iVar2));
			}
		}
		else
		{
			func_623(uParam0, 0);
			func_640(uParam0, -1220398291);
		}
		if (!func_635(uParam0))
		{
			func_274(uParam0, 5);
		}
	}
	return 1;
}

void func_284(var uParam0, bool bParam1)
{
	iVar0 = func_641();
	iVar1 = func_642(uParam0);
	bVar2 = (iVar0 != 0 || (bParam1 && iVar1 != iVar0));
	if (bVar2)
	{
		if (bParam1)
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (iVar1 + iVar0);
		}
		func_643(uParam0, iVar1);
		func_644(0);
	}
	func_645(uParam0, func_642(uParam0));
}

int func_285()
{
	return Global_1914319->f_16855.f_3.f_22;
}

int func_286(var uParam0)
{
	iVar0 = func_646();
	iVar1 = _databinding_read_data_int_from_parent_by_hash(uParam0->f_2031.f_52, -804795275);
	iVar2 = _databinding_read_data_int_from_parent_by_hash(uParam0->f_2031.f_52, 1184271882);
	iVar2 = (iVar2 + iVar0);
	iVar2 = func_647(iVar2, 1, iVar1);
	func_648(uParam0, iVar2);
	return 1;
}

bool func_287(var uParam0)
{
	iVar0 = func_607(0);
	iVar1 = _databinding_read_data_int_from_parent(iVar0, func_649());
	iVar2 = _databinding_read_data_int_from_parent_by_hash(iVar0, func_650());
	iVar3 = _databinding_read_data_int_from_parent_by_hash(iVar0, func_651());
	iVar4 = func_646();
	iVar2 = (iVar2 + iVar4);
	if (iVar2 >= iVar3)
	{
		iVar2 = 0;
	}
	else if (iVar2 < 0)
	{
		iVar2 = (iVar3 - 1);
	}
	_databinding_write_data_int_from_parent_by_hash(iVar0, func_650(), iVar2);
	if (iVar1 == -395279071)
	{
		iVar5 = func_652(0);
		iVar6 = iVar5;
		iVar7 = func_653(iVar6);
		Global_1946804->f_1329.f_1[iVar6]->f_8 = iVar2;
		if (!func_654(iVar7, &iVar8, &uVar9))
		{
			return false;
		}
		iVar10 = Global_1946804->f_1329.f_1[iVar6][iVar2];
		_databinding_write_data_hash_string_from_parent_by_hash(iVar0, func_655(), iVar10);
		iVar11 = func_656(iVar8, 1);
		func_657(iVar11);
		func_658();
		func_659(&(Global_1946804->f_1378), &(Global_1946804->f_1378.f_1[iVar11]), iVar11, 1, 1);
		Global_1946804->f_1378.f_1[iVar11]->f_1 = uVar9;
		if (func_660(iVar11) == -1)
		{
			func_661(iVar11, 3);
		}
		func_662(1, 1, 0);
		func_94(2, 0, 2, 0, 0);
		func_296(uParam0);
	}
	else if (iVar1 == -339889117)
	{
		iVar12 = 0;
		switch (iVar2)
		{
			case 0:
				iVar12 = 1728382685;
				break;
			case 1:
				iVar12 = -649335959;
				break;
		}
		if (iVar12 != 0)
		{
			if (func_663(func_277(0), iVar12, &iVar13, &iVar14))
			{
				_databinding_add_data_hash_by_hash(iVar0, func_664(), iVar13);
				_databinding_add_data_hash_by_hash(iVar0, func_665(), iVar14);
			}
			_databinding_write_data_hash_string_from_parent_by_hash(iVar0, func_655(), iVar12);
			func_666(uParam0, iVar12);
			if ((func_262(uParam0) == -2144266389 || func_262(uParam0) == 2057502022) || func_262(uParam0) == 1275816411)
			{
				func_667(uParam0, func_277(0), 0);
			}
			iVar15 = func_277(0);
			if (_is_weapon_one_handed(iVar15))
			{
				bVar26 = true;
				bVar27 = true;
				bVar28 = true;
				iVar24 = -1610187846;
				iVar25 = 190417139;
				Var16 = { func_669(iVar15, func_668(0), iVar12, 0) };
				if (_0x6929e22158e52265(Global_35, 2, &uVar20))
				{
					if (func_670(&Var16, &uVar20))
					{
						bVar26 = false;
						bVar27 = false;
					}
				}
				if (_0x6929e22158e52265(Global_35, 3, &uVar20))
				{
					if (func_670(&Var16, &uVar20))
					{
						bVar26 = false;
						iVar25 = 165536584;
					}
				}
				if (!func_40(24) || func_671() < 2)
				{
					bVar28 = false;
				}
				func_636(uParam0, 3, iVar24, bVar26, 1, 0);
				func_636(uParam0, 2, iVar25, (bVar27 && bVar28), bVar28, 0);
			}
		}
	}
	return true;
}

int func_288()
{
	return Global_1914319->f_16855.f_3.f_23;
}

int func_289(var uParam0)
{
	return uParam0->f_2031.f_77;
}

int func_290(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	iVar0 = func_288();
	if (iVar0 == -1)
	{
		_databinding_add_data_int(uParam0->f_2031.f_50, "ItemListEntryIndex", iParam1);
	}
	else if (_virtual_collection_exists(func_288()))
	{
		_virtual_collection_set_interest_index(func_288(), iParam1);
	}
	return 1;
}

void func_291(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_2031.f_58))
	{
		uParam0->f_2031.f_58 = _databinding_add_ui_item_list(uParam0->f_2031.f_50, "ItemList");
	}
	else
	{
		func_301(uParam0, &(uParam0->f_2031.f_58));
		_databinding_clear_binding_array(uParam0->f_2031.f_58);
	}
	if (_databinding_is_data_id_valid(uParam0->f_2031.f_59))
	{
		_databinding_remove_data_entry(uParam0->f_2031.f_59);
	}
	uParam0->f_2031.f_59 = _databinding_add_data_container(uParam0->f_2031.f_50, "ItemListEntries");
	Global_1914319->f_16855.f_31 = uParam0->f_2031.f_58;
}

int func_292()
{
	return Global_1914319->f_16855.f_3.f_26;
}

int func_293()
{
	return Global_1914319->f_16855.f_3.f_25;
}

int func_294(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_262(uParam0);
	iVar1 = func_289(uParam0);
	iVar2 = 0;
	if (iParam1 < 0)
	{
		iVar2 = (iVar1 + iParam1);
	}
	else
	{
		iVar2 = iParam1;
	}
	switch (iVar0)
	{
		case -996064024:
		case 1036144478:
		case 2057502022:
			return func_672(uParam0, func_261(uParam0), iVar2, iParam2);
		case -2144266389:
		case -856183175:
		case -706012851:
		case -659372875:
		case -645366665:
		case 115613670:
		case 178644271:
		case 1275816411:
		case 2144984909:
			return func_673(uParam0, uParam0->f_2031.f_74, iVar2, iParam2, 0);
		case -252412307:
			return func_673(uParam0, uParam0->f_2031.f_74, iVar2, iParam2, 1);
		case 310306577:
		case 1705401718:
			return func_674(uParam0, iVar2, iParam2);
		case 1860655620:
			return func_675(uParam0, iVar2, iParam2);
		case 94016929:
			return func_676(uParam0, iVar2, iParam2);
		case 803749366:
			return func_677(uParam0, iVar2, iParam2);
		case -440651963:
			return func_678(uParam0, iVar2, iParam2);
		case 1426047132:
			break;
		case 1013443471:
			return func_679(uParam0, iVar2, iParam2);
		case 23814986:
			return func_680(uParam0, iVar2, iParam2);
		case 253603960:
			return func_681(uParam0, iVar2, iParam2);
		default:
			break;
	}
	return 0;
}

void func_295()
{
	func_270(2048);
}

bool func_296(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_2031.f_58))
	{
		return false;
	}
	iVar0 = _databinding_get_array_count(uParam0->f_2031.f_58);
	iVar1 = 0;
	bVar19 = false;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = _databinding_get_item_context_by_index(uParam0->f_2031.f_58, iVar1);
		if (_databinding_is_data_id_valid(iVar2))
		{
			func_682(&Var8, &iVar2);
			switch (Var8.f_1)
			{
				case -1968468235:
					iVar3 = _databinding_read_data_hash_string_from_parent(iVar2, func_683());
					iVar6 = iVar3;
					iVar4 = _databinding_read_data_hash_string_from_parent(iVar2, func_684());
					iVar7 = iVar4;
					iVar5 = _databinding_read_data_hash_string_from_parent(iVar2, func_685());
					func_686(uParam0, Var8.f_2, &iVar2, 0, iVar6, iVar7, iVar5);
					break;
				case 336033112:
					func_687(uParam0, Var8.f_2, &iVar2);
					break;
				case 193788635:
					if (!func_688(uParam0, Var8.f_2, &iVar2))
					{
					}
					else
					{
						Jump @1003; //curOff = 384
						if (!func_689(uParam0, Var8, Var8.f_2, Var8.f_5, &iVar2))
						{
						}
						else
						{
							Jump @1003; //curOff = 414
							bVar19 = true;
							if (!func_690(uParam0, &iVar2))
							{
							}
							else
							{
								Jump @1003; //curOff = 435
								if (!func_691(uParam0, Var8, Var8.f_2, &iVar2))
								{
								}
								else
								{
									Jump @1003; //curOff = 459
									if (!func_692(uParam0, Var8, &iVar2))
									{
									}
									else
									{
										Jump @1003; //curOff = 479
										if (!func_693(uParam0, Var8, &iVar2))
										{
										}
										else
										{
											Jump @1003; //curOff = 499
											if (!func_694(uParam0, Var8, Var8.f_3, Var8.f_4, &iVar2, 0))
											{
											}
											else
											{
												Jump @1003; //curOff = 528
												if (!func_695(uParam0, iVar1, &iVar2))
												{
												}
												else
												{
													Jump @1003; //curOff = 548
													if (!func_696(uParam0, Var8, Var8.f_3, Var8.f_4, &iVar2, 0))
													{
													}
													else
													{
														Jump @1003; //curOff = 577
														if (!func_697(uParam0, Var8, &iVar2))
														{
														}
														else
														{
															Jump @1003; //curOff = 597
															if (!func_698(uParam0, Var8, &iVar2))
															{
															}
															else
															{
																Jump @1003; //curOff = 617
																if (!func_699(uParam0, Var8, &iVar2, 0))
																{
																}
																else
																{
																	Jump @1003; //curOff = 638
																	if (!func_700(uParam0, Var8, &iVar2, 0))
																	{
																	}
																	else
																	{
																		Jump @1003; //curOff = 659
																		if (!func_701(uParam0, Var8, &iVar2))
																		{
																		}
																		else
																		{
																			Jump @1003; //curOff = 679
																			if (!func_702(uParam0, Var8, &iVar2))
																			{
																			}
																			else
																			{
																				Jump @1003; //curOff = 699
																				if (!func_703(uParam0, Var8, &iVar2))
																				{
																				}
																				else
																				{
																					Jump @1003; //curOff = 719
																					if (!func_704(uParam0, Var8, &iVar2))
																					{
																					}
																					else
																					{
																						Jump @1003; //curOff = 739
																						if (!func_705(uParam0, Var8, &iVar2))
																						{
																						}
																						else
																						{
																							Jump @1003; //curOff = 759
																							if (!func_706(uParam0, Var8, &iVar2))
																							{
																							}
																							else
																							{
																								Jump @1003; //curOff = 779
																								if (!func_707(uParam0, Var8, &iVar2, 0))
																								{
																								}
																								else
																								{
																									Jump @1003; //curOff = 800
																									if (!func_708(uParam0, Var8, &iVar2, 0))
																									{
																									}
																									else
																									{
																										Jump @1003; //curOff = 821
																										if (!func_709(uParam0, Var8, &iVar2, 0))
																										{
																										}
																										else
																										{
																											Jump @1003; //curOff = 842
																											if (!func_710(uParam0, Var8, &iVar2, 0))
																											{
																											}
																											else
																											{
																												Jump @1003; //curOff = 863
																												if (!func_711(uParam0, Var8, &iVar2))
																												{
																												}
																												else
																												{
																													Jump @1003; //curOff = 883
																													if (!func_712(uParam0, &iVar2))
																													{
																													}
																													else
																													{
																														Jump @1003; //curOff = 901
																														if (!func_713(uParam0, &iVar2))
																														{
																														}
																														else
																														{
																															Jump @1003; //curOff = 919
																															if (!func_714(uParam0, &iVar2))
																															{
																															}
																															else
																															{
																																Jump @1003; //curOff = 937
																																if (!func_715(uParam0, &iVar2))
																																{
																																}
																																else
																																{
																																	Jump @1003; //curOff = 955
																																	iVar20 = _databinding_read_data_int_from_parent(iVar2, func_716());
																																	if (!func_717(iVar20))
																																	{
																																	}
																																	else if (!func_718(uParam0, iVar20, &iVar2))
																																	{
																																	}
																																	else if (func_262(uParam0) == -252412307)
																																	{
																																		if (!func_719(uParam0, Var8, Var8.f_1, &iVar2, 0))
																																		{
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
								}
							}
						}
					}
					iVar1++;
					if (func_262(uParam0) == 94016929)
					{
						if (bVar19)
						{
							if (func_720() == 0 && func_721() != 5)
							{
								func_592(uParam0, -1, 1);
							}
						}
						else if (func_720() != 0 || (func_720() == 0 && func_721() == 5))
						{
							func_592(uParam0, -1, 1);
						}
					}
					return true;
					default:
						break;
			}
		}
	}
}

bool func_297(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_2031.f_60))
	{
		return false;
	}
	iVar0 = uParam0->f_2031.f_73;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = _databinding_get_item_context_by_index(uParam0->f_2031.f_60, iVar1);
		if (_databinding_is_data_id_valid(iVar2))
		{
			func_682(&Var3, &iVar2);
			if (!func_722(uParam0, Var3, Var3.f_3, Var3.f_1, &iVar2, 0))
			{
			}
		}
		iVar1++;
	}
	return true;
}

int func_298(var uParam0)
{
	return uParam0->f_2031.f_95;
}

int func_299(var uParam0)
{
	return func_723(&(uParam0->f_2031));
}

var func_300(var uParam0)
{
	return uParam0->f_42;
}

int func_301(var uParam0, var uParam1)
{
	if (uParam0->f_2031.f_79)
	{
		iVar0 = _databinding_get_array_count(*uParam1);
		iVar1 = 0;
		iVar2 = -1;
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar3 = _databinding_get_item_context_by_index(*uParam1, iVar1);
			if (_databinding_is_data_id_valid(iVar3))
			{
				bVar4 = _databinding_read_data_bool_from_parent(iVar3, func_724());
				if (bVar4)
				{
					iVar2 = _databinding_read_data_int_from_parent(iVar3, func_725());
					iVar5 = iVar2;
					if (_0x93ffd92f05ec32fd(iVar5))
					{
						_0x13e7320c762f0477(iVar5);
						_databinding_write_data_int_from_parent(iVar3, func_725(), -1);
					}
				}
			}
			iVar1++;
		}
		uParam0->f_2031.f_79 = 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

int func_302(var uParam0, bool bParam1)
{
	iVar0 = func_263(uParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return 0;
	}
	if (!func_726())
	{
		return 0;
	}
	func_127(iVar0, 1);
	func_259(iVar0, 1, bParam1);
	return 1;
}

void func_303(var uParam0)
{
	uParam0->f_2031.f_49 = 0;
	_0xdad7fb8402651654();
}

int func_304(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_727(iParam0, iParam1, bParam2, bParam3);
}

void func_305(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_306(struct<4> Param0)
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
			if (func_728(Param0))
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
			func_729(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_305(8);
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
			if (func_728(Param0))
			{
				return;
			}
			func_729(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_305(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_730(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

int func_307(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_536(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_731(iParam1);
	return func_732(iParam0, iVar0, bParam2, bParam2);
}

void func_308(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

bool func_309(int iParam0)
{
	if (!func_238(iParam0))
	{
		return false;
	}
	if (func_733((*Global_1347702)[iParam0]->f_13, 64))
	{
		return false;
	}
	if (func_734(iParam0))
	{
		return true;
	}
	if (func_735(iParam0))
	{
		if (func_736(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_310(int iParam0)
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
		iVar0 = func_737(iParam0);
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

bool func_311(int iParam0, int iParam1)
{
	return (func_738(iParam0) && ((*Global_1898346)[iParam0]->f_1 && iParam1) != 0);
}

bool func_312(var uParam0)
{
	return func_371(*uParam0, 2);
}

int func_313()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

int func_314(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_315(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

void func_316()
{
	iVar0 = func_739();
	bVar1 = (!func_10(&Global_1935630, 4194304) || Global_1935630->f_17 > 0);
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
			func_740();
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
			if (!func_40(9))
			{
				set_ped_reset_flag(Global_35, 135, true);
			}
			if (!func_40(14))
			{
				set_ped_reset_flag(Global_35, 144, true);
			}
			if (!func_40(36))
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
			else if ((is_screen_faded_out() && func_741()) && !func_742(0, 0, 1))
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
		if (func_125() == -1 && _0x139efb0a71dd9011())
		{
			_uiprompt_enable_prompt_type_this_frame(6);
		}
		Global_1935630->f_44 = 0;
		Global_1935630->f_40 = 0;
	}
}

void func_317()
{
	if (func_125() != -1)
	{
		return;
	}
	func_743();
}

void func_318(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

void func_319(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = get_game_timer();
}

void func_320(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_321(int iParam0)
{
	Global_1310720->f_10 = iParam0;
}

void func_322(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_101(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_441(Global_1935630, 4194304);
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

int func_323(bool bParam0)
{
	if (!bParam0 && func_744(373691918))
	{
		_0xe9ac8466abe484bb(false, 0);
		_0xc61edebf16cd9668(752193127, true, 0);
		return 0;
	}
	_0xe9ac8466abe484bb(bParam0, 0);
	return 1;
}

void func_324(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

void func_325(bool bParam0)
{
	if (func_125() != -1)
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
		func_341(89, 1);
		_0xfb6e111908502871(5);
	}
	else
	{
		func_341(90, 1);
		_0x3fc4c027fd0936f4(5);
	}
	func_745(1, bParam0, 1);
	func_746();
	Global_40.f_11095.f_43 = bParam0;
}

void func_326(float fParam0)
{
	if (func_747(1) < fParam0)
	{
		func_748(1, fParam0, 0);
	}
	if (func_747(2) < fParam0)
	{
		func_748(2, fParam0, 0);
	}
	if (func_747(0) < fParam0)
	{
		func_748(0, fParam0, 0);
	}
}

void func_327(var uParam0)
{
	uParam0->f_299 = -1;
	uParam0->f_300 = -1;
	uParam0->f_301 = -1;
	uParam0->f_302 = -1;
	uParam0->f_303 = -1;
	uParam0->f_319 = 5;
	uParam0->f_320 = -1;
	uParam0->f_321 = 0;
	uParam0->f_322 = 0;
	uParam0->f_323 = 0;
	_0x09fbf15d73efc900();
	iVar0 = 0;
	while (iVar0 < 2049)
	{
		if (iVar0 != 1)
		{
			func_348(&(uParam0->f_318), iVar0);
		}
		iVar0++;
	}
}

void func_328(bool bParam0)
{
	if (bParam0)
	{
		_0xc9caeaeec1256e54(-1618603322);
		func_749(8388608);
	}
	else
	{
		func_750(8388608);
	}
}

void func_329()
{
	Global_1395601->f_4 = 0;
}

void func_330(int iParam0)
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

void func_331()
{
	if (_does_volume_exist(iLocal_47))
	{
		_0x74c2b3dc0b294102(iLocal_47);
		_0xa1cfb35069d23c23(iLocal_47);
		_delete_volume(iLocal_47);
	}
}

int func_332(int iParam0)
{
	if (!func_232(iParam0))
	{
		return -1;
	}
	return func_737(iParam0);
}

void func_333(int iParam0)
{
	if (!func_751(iParam0))
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

bool func_334(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_335(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_728(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_728(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_729(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_305(8);
}

void func_336(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_337()
{
	return func_752(&(Global_1946804->f_1497));
}

int func_338(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 >= Global_1946804->f_2657.f_19)
	{
		return 0;
	}
	iVar0 = &Global_1946804->f_2657[iParam0];
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	return iVar0;
}

int func_339(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_340(int iParam0)
{
	Var0.f_1 = 39;
	func_753(&Var0, 0, 1);
	iVar119 = -1;
	if (func_125() == -1)
	{
		iVar120 = func_754(iParam0);
		if (iVar120 > -1 && iVar120 <= 5)
		{
			iVar119 = iVar120;
		}
	}
	if (!func_755(&Var0, &uVar121, iParam0, iVar119, 1, 0))
	{
		return -1;
	}
	return func_752(&Var0);
}

void func_341(int iParam0, bool bParam1)
{
	func_756(iParam0, &iVar0, &iVar1);
	if (!func_757(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_758(iVar0, iVar1);
}

void func_342(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_20))
	{
		if (_0x23e33cb9f4a3f547(uParam0->f_20, "PB_IDLE"))
		{
			_0xae6ada8fe7e84acc(uParam0->f_20, "PB_IDLE");
		}
		_delete_anim_scene(uParam0->f_20);
	}
}

bool func_343(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_344(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_345()
{
	return func_759();
}

void func_346(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_347(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_348(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_349(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1898330)
	{
		if (func_232(Global_1898330[iVar0]) && func_310(Global_1898330[iVar0]))
		{
			iVar1 = func_233(Global_1898330[iVar0]);
			if (iVar1 == 1 || iVar1 == 8)
			{
				if ((func_311(iVar0, 64) || func_311(iVar0, 16)) || func_311(iVar0, 32))
				{
					if (!func_344(uParam0->f_318, 8))
					{
						func_347(&(uParam0->f_318), 8);
					}
					return false;
				}
			}
		}
		iVar0++;
	}
	if (func_344(uParam0->f_318, 8))
	{
	}
	return true;
}

void func_350(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

void func_351()
{
	_0xd6c0a8c7c0b2f82c(player_id(), 1);
	set_entity_invincible(player_ped_id(), false);
	set_everyone_ignore_player(player_id(), false);
	set_player_can_be_hassled_by_gangs(player_id(), true);
	set_player_control(player_id(), true, 0, false);
	func_101(Global_1935630, 16384);
}

int func_352(var uParam0)
{
	if (does_entity_exist(player_ped_id()) && !is_entity_dead(player_ped_id()))
	{
		if (does_entity_exist(uParam0->f_304.f_1) && !is_entity_dead(uParam0->f_304.f_1))
		{
			if (func_760(uParam0->f_304.f_1))
			{
				_0x0348469daa17576c(uParam0->f_304.f_1);
			}
			func_761(uParam0->f_304.f_1, uParam0->f_314, uParam0->f_304, 2, 1073741824);
			_set_entity_coords_and_heading(uParam0->f_304.f_1, uParam0->f_314, uParam0->f_304, true, false, true);
			set_ped_config_flag(uParam0->f_304.f_1, 136, false);
			if (is_ped_ragdoll(uParam0->f_304.f_1))
			{
				_0x221f4d9912b7fe86(uParam0->f_304.f_1, 1);
			}
			if (_0x2d64376cf437363e(uParam0->f_304.f_1))
			{
				func_762(player_ped_id(), uParam0->f_304.f_1, 0, -1, 1);
			}
		}
		else if (does_entity_exist(uParam0->f_304.f_2))
		{
			func_761(uParam0->f_304.f_2, uParam0->f_314, uParam0->f_304, 2, 1073741824);
			iVar0 = player_ped_id();
			func_763(&iVar0, &(uParam0->f_304.f_2), uParam0->f_304.f_3, 1);
			set_vehicle_on_ground_properly(uParam0->f_304.f_2, 0f);
		}
		else
		{
			func_761(player_ped_id(), uParam0->f_314, uParam0->f_304, 2, 1073741824);
		}
	}
	else
	{
		return 0;
	}
	if (uParam0->f_304.f_4)
	{
		simulate_player_input_gait(player_id(), uParam0->f_304.f_5, uParam0->f_304.f_5.f_1, uParam0->f_304.f_5.f_2, uParam0->f_304.f_5.f_3, uParam0->f_304.f_5.f_4);
	}
	set_gameplay_cam_relative_heading(0f, 1f);
	set_gameplay_cam_relative_pitch(0f, 1f);
	return 1;
}

void func_353(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

int func_354(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_2))
	{
		uParam0->f_2 = _databinding_add_data_bool_from_path("", "FastTravel", 1);
	}
	_databinding_add_data_string(uParam0->f_2, "header", "CAMP_FT_HEADER");
	_databinding_add_data_string(uParam0->f_2, "subHeader", "CAMP_FT_SUB");
	_databinding_add_data_string(uParam0->f_2, "subFooter", "");
	if (!func_764(uParam0))
	{
		return 0;
	}
	return 1;
}

void func_355(bool bParam0)
{
	if (bParam0)
	{
		func_765(4);
	}
	func_765(2);
	set_bit(&(Global_1956580->f_1), 0);
}

int func_356(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 149)
	{
		if ((*Global_1888801)[iVar0]->f_30 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_357(int iParam0)
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

char* func_358(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "BGV";
		case 2:
			return "BLU";
		case 3:
			return "CML";
		case 4:
			return "GRT";
		case 5:
			return "GRZ";
		case 6:
			return "GRE";
		case 7:
			return "GRW";
		case 8:
			return "GUA";
		case 9:
			return "HRT";
		case 10:
			return "ROA";
		case 11:
			return "SCM";
		case 12:
			return "TAL";
		case 15:
			return "CHO";
		case 13:
			return "GAP";
		case 16:
			return "HEN";
		case 14:
			return "RIO";
		default:
			break;
	}
	return "No District Label!";
}

float func_359(var uParam0)
{
	if (func_142(uParam0) == -1)
	{
		return 0f;
	}
	return uParam0->f_5;
}

int func_360(int iParam0)
{
	return _money_get_cash_balance();
}

int func_361(var uParam0, int iParam1)
{
	if (!func_766(&uVar0, iParam1))
	{
		return 0;
	}
	if (!func_767(&uVar0, &Var7))
	{
		return 0;
	}
	uParam0->f_317 = iParam1;
	uParam0->f_314 = { Var7 };
	uParam0->f_304 = Var7.f_3;
	if (Var7.f_4 == 0)
	{
		return func_768(uParam0, Var7, Var7.f_3);
	}
	else
	{
		_0x032a14d082a9b269(Var7.f_4);
		func_347(&(uParam0->f_318), 1024);
		func_348(&(uParam0->f_318), 2048);
		return 1;
	}
	return 1;
}

char* func_362(int iParam0)
{
	iVar0 = func_1();
	vVar1 = { func_769(iParam0, 1) };
	vVar4 = { func_769(iVar0, 1) };
	sVar7 = "";
	switch (iVar0)
	{
		case 79:
			if (get_random_int_in_range(0, 2) == 0)
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_beavershollow_1";
			}
			else
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_beavershollow_2";
			}
			break;
		case 37:
			if (vVar4.y > vVar1.y)
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_beechershope_south";
			}
			else
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_beechershope_north";
			}
			break;
		case 98:
			if (get_random_int_in_range(0, 2) == 0)
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_clemens_1";
			}
			else
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_clemens_2";
			}
			break;
		case 9:
			if (get_random_int_in_range(0, 2) == 0)
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_shadybell_1";
			}
			else
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_shadybell_2";
			}
			break;
		case 43:
			sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_colter_1";
			break;
		case 71:
			if (vVar4.x < vVar1.x)
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_horseshoe_east";
			}
			else
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_horseshoe_north";
			}
			break;
		case 4:
			if (get_random_int_in_range(0, 2) == 0)
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_lakay_1";
			}
			else
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_lakay_2";
			}
			break;
		case 22:
			if (vVar4.y > vVar1.y)
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_proghornranch_south";
			}
			else
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_proghornranch_north";
			}
			break;
	}
	return sVar7;
}

bool func_363(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_225(iParam0))
	{
		return false;
	}
	iVar0 = func_226(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_364(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_225(iParam0))
	{
		return false;
	}
	iVar0 = func_226(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	vVar1 = { get_entity_coords(iVar0, true, false) };
	vVar4 = { get_entity_coords(Global_35, true, false) };
	if (func_770(vVar1, vVar4) > func_228(iParam0))
	{
		return true;
	}
	return false;
}

void func_365(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			_set_entity_coords_and_heading(Global_35, -121.9283f, -40.1821f, 94.5436f, 79.5934f, true, false, true);
			break;
		case 2:
			_set_entity_coords_and_heading(Global_35, 650.6963f, -1247.359f, 42.6926f, 327.7263f, true, false, true);
			break;
		case 0:
			_set_entity_coords_and_heading(Global_35, 2340.41f, 1354.968f, 105.3518f, 3.0069f, true, false, true);
			break;
	}
	clear_ped_tasks_immediately(Global_35, false, true);
	_0x2208438012482a1a(Global_35, false, false);
	set_gameplay_cam_relative_heading(0f, 1f);
	set_gameplay_cam_relative_pitch(0f, 1f);
}

void func_366()
{
	_0xd6c0a8c7c0b2f82c(player_id(), 0);
	set_entity_invincible(player_ped_id(), true);
	set_everyone_ignore_player(player_id(), true);
	set_player_can_be_hassled_by_gangs(player_id(), false);
	set_player_control(player_id(), false, 0, false);
	func_441(Global_1935630, 16384);
}

void func_367(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

void func_368(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_771() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_772(iVar1) && !func_773(iVar1, iParam2)) && (!bParam3 || !func_774(iVar1))) && (!bParam4 || !func_775(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_776(iVar0);
			}
		}
		iVar0++;
	}
}

void func_369()
{
	if (!func_772(&Global_1327479))
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
	func_777(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

int func_370(int iParam0)
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

bool func_371(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_372(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_778() - fParam1);
	func_779(uParam0, 1);
	func_780(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_373(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

bool func_374(int iParam0)
{
	return (Global_1935630 && iParam0) != 0;
}

bool func_375(int iParam0)
{
	return (get_game_timer() - iParam0) < &Global_1898438;
}

int func_376(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

int func_377(int iParam0, int iParam1)
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

bool func_378(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_781(iParam0))
	{
		return false;
	}
	if (func_782(iParam0, 32, 1))
	{
		return false;
	}
	if (!func_782(iParam0, 2, 1))
	{
		return false;
	}
	if (!func_782(iParam0, 4, 1))
	{
		return false;
	}
	if (func_783(iParam0, 33, 1))
	{
		return false;
	}
	if (func_784(iParam0))
	{
		return false;
	}
	if (func_785(iParam0))
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

bool func_379(int iParam0)
{
	if (func_786(iParam0))
	{
		if (func_137(Global_1360165[iParam0], 0))
		{
			return true;
		}
	}
	return false;
}

int func_380(int iParam0, bool bParam1)
{
	if (!func_786(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_787(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

int func_381(int iParam0)
{
	if (!func_781(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_382(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_49(iParam0, Global_36, 1);
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

void func_383(int iParam0, bool bParam1)
{
	if (_0xa8120ebeaf290c7a(func_380(iParam0, 0)))
	{
		iVar0 = _0x69786495c92a3044(func_380(iParam0, 0));
		if (iVar0 != (*Global_1360165)[iParam0]->f_47 || bParam1)
		{
			(*Global_1360165)[iParam0]->f_47 = iVar0;
			StringCopy(&((*Global_1360165)[iParam0]->f_48), _0x9c7f95946e304778(func_380(iParam0, 0), (*Global_1360165)[iParam0]->f_47), 64);
			(*Global_1360165)[iParam0]->f_56 = 1;
		}
	}
}

int func_384(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_385(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_781(iParam0))
		{
			return;
		}
	}
	func_788(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

bool func_386()
{
	return func_789(Global_35, 6);
}

bool func_387()
{
	return func_790(32768);
}

bool func_388(int iParam0, int iParam1)
{
	iVar1 = func_656(func_791(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_339(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_389()
{
	return Global_1946804->f_2792;
}

bool func_390(int iParam0)
{
	if (func_792())
	{
		return false;
	}
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (!func_793(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_391(int iParam0)
{
	return func_794(iParam0);
}

void func_392(int iParam0, int iParam1)
{
	func_795(iParam0, iParam1);
}

int func_393(int iParam0, int iParam1)
{
	bVar3 = func_796(iParam0);
	if (func_612(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_797(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_798();
			}
			else
			{
				iVar0 = func_799();
			}
		}
		else if (func_343(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_800();
		}
		else
		{
			iVar0 = func_801();
		}
	}
	else if (func_190(&iVar2))
	{
		if (func_612(iVar2, -1303648999))
		{
			iVar0 = func_798();
		}
		else
		{
			iVar0 = func_799();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_800();
	}
	else
	{
		iVar0 = func_801();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

bool func_394(int iParam0, var uParam1, var uParam2, float fParam3)
{
	switch (iParam0)
	{
		case 4:
			*uParam1 = { -121.616f, -40.4015f, 96.2565f };
			*uParam2 = { -5.9251f, 0f, 80.0535f };
			*fParam3 = 45f;
			return true;
		case 2:
			*uParam1 = { 650.3687f, -1247.587f, 44.3792f };
			*uParam2 = { -6.5933f, 0f, -34.0096f };
			*fParam3 = 45f;
			return true;
		case 0:
			*uParam1 = { 2340.102f, 1354.773f, 106.9161f };
			*uParam2 = { -0.0977f, 0f, -3.985f };
			*fParam3 = 45f;
			return true;
		default:
			break;
	}
	return false;
}

void func_395(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			_set_entity_coords_and_heading(Global_35, -120.4341f, -40.3395f, 94.5526f, 80.7272f, true, false, true);
			break;
		case 2:
			_set_entity_coords_and_heading(Global_35, 650.0016f, -1248.605f, 42.7058f, 326.195f, true, false, true);
			break;
		case 0:
			_set_entity_coords_and_heading(Global_35, 2340.061f, 1353.773f, 105.3442f, 356.3785f, true, false, true);
			break;
	}
	clear_ped_tasks_immediately(Global_35, false, true);
	_0x2208438012482a1a(Global_35, false, false);
}

void func_396()
{
}

void func_397(var uParam0, var uParam1)
{
}

void func_398(var uParam0, var uParam1)
{
}

void func_399()
{
}

int func_400(var uParam0)
{
	if (does_entity_exist(uParam0->f_304.f_1))
	{
		if (!_0x2d64376cf437363e(uParam0->f_304.f_1))
		{
			return 0;
		}
	}
	if (does_entity_exist(uParam0->f_304.f_2))
	{
		if (!is_entity_a_vehicle(uParam0->f_304.f_2))
		{
			return 0;
		}
		if (func_802(uParam0->f_304.f_2))
		{
			return 0;
		}
	}
	return 1;
}

bool func_401(int iParam0)
{
	return _0x8d56bda343d9519f(func_370(iParam0));
}

bool func_402(int iParam0, bool bParam1)
{
	if (!func_158())
	{
		return true;
	}
	if (func_803(iParam0))
	{
		if (iParam0 == func_1())
		{
			return false;
		}
		if (get_entity_model(Global_35) == 225514697)
		{
			if ((((((((iParam0 == 22 || iParam0 == 38) || iParam0 == 37) || iParam0 == 117) || iParam0 == 127) || iParam0 == 115) || iParam0 == 110) || iParam0 == 120) || iParam0 == 126)
			{
				return false;
			}
		}
		else if (get_entity_model(Global_35) == 11966224)
		{
			if (iParam0 == 37 && !func_804(9))
			{
				return false;
			}
		}
		switch (iParam0)
		{
			case 4:
			case 9:
			case 71:
			case 79:
			case 98:
				if (!bParam1)
				{
					return false;
				}
				if (func_437() != iParam0)
				{
					return false;
				}
				break;
			case 43:
				if (!bParam1)
				{
					return false;
				}
				break;
		}
		if (func_805() == 8)
		{
			if (func_806(iParam0, 1))
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
	return false;
}

void func_403(var uParam0, int iParam1)
{
	iVar0 = func_807(iParam1);
	iVar1 = func_808(iParam1);
	iVar2 = 0;
	StringCopy(&cVar3, _get_label_text_by_hash((*uParam0)[iVar2]->f_6), 64);
	StringCopy(&cVar11, _get_label_text_by_hash(iVar1), 64);
	while ((*uParam0)[iVar2]->f_3 && compare_strings(&cVar3, &cVar11, false, -1) <= 0)
	{
		iVar2++;
		StringCopy(&cVar3, _get_label_text_by_hash((*uParam0)[iVar2]->f_6), 64);
	}
	iVar19 = iVar2;
	iVar20 = iParam1;
	iVar22 = iVar0;
	iVar23 = iVar1;
	while ((*uParam0)[iVar19]->f_3 && iVar19 < (*uParam0 - 1))
	{
		if (iVar20 == iParam1)
		{
		}
		iVar24 = (*uParam0)[iVar19]->f_4;
		iVar21 = uParam0[iVar19];
		iVar25 = (*uParam0)[iVar19]->f_6;
		(*uParam0)[iVar19]->f_4 = iVar22;
		(*uParam0)[iVar19] = iVar20;
		(*uParam0)[iVar19]->f_3 = 1;
		(*uParam0)[iVar19]->f_6 = iVar23;
		func_766((*uParam0)[iVar19], uParam0[iVar19]);
		iVar22 = iVar24;
		iVar20 = iVar21;
		iVar23 = iVar25;
		iVar19++;
	}
	if (!(*uParam0)[iVar19]->f_3)
	{
		(*uParam0)[iVar19]->f_4 = iVar22;
		(*uParam0)[iVar19] = iVar20;
		(*uParam0)[iVar19]->f_3 = 1;
		(*uParam0)[iVar19]->f_6 = iVar23;
	}
}

void func_404(var uParam0, int iParam1)
{
	iVar0 = func_807(iParam1);
	iVar1 = func_808(iParam1);
	if (iParam1 == func_437())
	{
		(*uParam0)[0]->f_4 = iVar0;
		(*uParam0)[0] = iParam1;
		(*uParam0)[0]->f_3 = 1;
		(*uParam0)[0]->f_6 = iVar1;
		return;
	}
	iVar2 = 1;
	while (((*uParam0)[iVar2]->f_4 < iVar0 && iVar2 < (*uParam0 - 1)) && (*uParam0)[iVar2]->f_3)
	{
		iVar2++;
	}
	iVar3 = iVar2;
	iVar4 = iParam1;
	iVar6 = iVar0;
	iVar7 = iVar1;
	while ((*uParam0)[iVar3]->f_3 && iVar3 < (*uParam0 - 1))
	{
		if (iVar4 == iParam1)
		{
		}
		iVar8 = (*uParam0)[iVar3]->f_4;
		iVar5 = uParam0[iVar3];
		iVar9 = (*uParam0)[iVar3]->f_6;
		(*uParam0)[iVar3]->f_4 = iVar6;
		(*uParam0)[iVar3] = iVar4;
		(*uParam0)[iVar3]->f_3 = 1;
		(*uParam0)[iVar3]->f_6 = iVar7;
		func_766((*uParam0)[iVar3], uParam0[iVar3]);
		iVar6 = iVar8;
		iVar4 = iVar5;
		iVar7 = iVar9;
		iVar3++;
	}
	if (!(*uParam0)[iVar3]->f_3)
	{
		(*uParam0)[iVar3]->f_4 = iVar6;
		(*uParam0)[iVar3] = iVar4;
		(*uParam0)[iVar3]->f_3 = 1;
		(*uParam0)[iVar3]->f_6 = iVar7;
	}
}

float func_405(int iParam0)
{
	iVar0 = 1;
	fVar1 = ((IntToFloat(iVar0) * (0.33f * pow((IntToFloat(iParam0) * 0.01f), 0.75f))) / 2f);
	if (func_125() != -1)
	{
		fVar1 = (fVar1 + IntToFloat(func_809()));
	}
	return func_810(fVar1, 2, 1);
}

int func_406(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_7)
	{
		iVar2 = &uParam0->f_7[iVar0];
		if (((func_111(iVar2) && !func_811(iVar2)) && !func_813(func_812(iVar2), 1)) && func_401(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_407(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_34(iParam0))
	{
		return;
	}
	iVar0 = func_168(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

bool func_408(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_409()
{
	return Global_1109400->f_237;
}

bool func_410(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_814(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_815())
	{
		return func_814(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_814(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_411()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return &Global_1058888;
}

bool func_412()
{
	return Global_1935689->f_1;
}

bool func_413()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

bool func_414()
{
	return &Global_1935436 == 2;
}

bool func_415()
{
	if ((func_125() == -1 && func_120((*Global_1835011)[60]->f_1, 1)) && !func_120((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

void func_416(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_20))
	{
		uParam0->f_20 = _create_anim_scene("script@common@shop@playercamp", 0, 0, false, true);
	}
	if (!_is_anim_scene_loading(uParam0->f_20, true))
	{
		load_anim_scene(uParam0->f_20);
	}
}

int func_417(var uParam0, var uParam1)
{
	func_636(uParam0, 4, 1945003767, (func_816() && func_817()), func_817(), 0);
	switch (*uParam1)
	{
		case 2077448405:
			if (func_818(uParam1->f_9) && uParam1->f_9 != 166243423)
			{
				if (func_819() == uParam1->f_9)
				{
					func_636(uParam0, 4, 904671343, 0, 0, 0);
				}
				else
				{
					func_636(uParam0, 4, 904671343, 1, 1, 0);
				}
			}
			if ((func_819() == uParam1->f_9 || func_820(uParam1->f_9)) || uParam1->f_9 == 166243423)
			{
				bVar0 = false;
			}
			else
			{
				bVar0 = true;
			}
			if (func_821(uParam1->f_9))
			{
				func_636(uParam0, 2, -1208531349, bVar0, 1, 0);
			}
			else
			{
				bVar1 = func_822() > 0;
				func_636(uParam0, 2, 920855044, (bVar0 && bVar1), 1, 0);
			}
			break;
		case 1942587409:
			if (func_823(uParam1->f_9) || func_820(uParam1->f_9))
			{
				func_636(uParam0, 2, -1208531349, 0, 0, 0);
			}
			else if (func_821(uParam1->f_9))
			{
				func_636(uParam0, 2, -1208531349, 1, 1, 0);
			}
			else
			{
				func_636(uParam0, 2, 920855044, func_824(-525676072, 0), 1, 0);
			}
			break;
		case 761079318:
			if (func_339(uParam1->f_9) == -2061583405)
			{
				if (func_820(uParam1->f_9))
				{
					func_636(uParam0, 2, -1208531349, 0, 0, 0);
				}
				else if (func_821(uParam1->f_9))
				{
					func_636(uParam0, 2, -1208531349, uParam1->f_9 != func_825(0), 1, 0);
				}
				else
				{
					func_636(uParam0, 2, 920855044, func_824(-2061583405, 0), 1, 0);
				}
			}
			break;
		default:
			func_636(uParam0, 2, 0, 0, 0, 0);
			break;
	}
	if (func_261(uParam0) == 1256151078)
	{
		func_636(uParam0, 2, -810523886, 1, 1, 0);
	}
	if (func_826(uParam1->f_9) == -1037537535 && func_827(func_339(uParam1->f_9)))
	{
		func_828(&(uParam0->f_2280.f_2), func_339(uParam1->f_9), uParam0->f_2031.f_97);
	}
	else
	{
		func_829(&(uParam0->f_2280.f_2), uParam0->f_2031.f_97);
	}
	if (*uParam1 == 336033112)
	{
		switch (uParam1->f_1)
		{
			case 2095483486:
				func_830(uParam0, 1087413233);
				break;
			case -1737479370:
				func_830(uParam0, 1665487470);
				break;
			case 1244050188:
				if (func_40(51))
				{
					func_831(uParam0, -879869228);
					func_832(uParam0, 1);
					func_543(uParam0, 1);
				}
				else if (func_40(49))
				{
					func_831(uParam0, 1935902678);
					func_832(uParam0, 1);
					func_543(uParam0, 1);
				}
				break;
			case -1370350542:
				if (func_833(2))
				{
					func_831(uParam0, 1198999650);
					func_832(uParam0, 1);
					func_543(uParam0, 1);
				}
				else if (func_834(uParam0, -1975235238, 761079318))
				{
					func_831(uParam0, -119411041);
					func_832(uParam0, 1);
					func_543(uParam0, 1);
				}
				break;
			case -953746678:
				if (func_833(3))
				{
					func_831(uParam0, -2109951974);
					func_832(uParam0, 1);
					func_543(uParam0, 1);
				}
				else if (func_40(24))
				{
					func_831(uParam0, 454722478);
					func_832(uParam0, 1);
					func_543(uParam0, 1);
				}
				break;
			case 1216660012:
				if (func_40(50))
				{
					func_831(uParam0, -574754285);
					func_832(uParam0, 1);
					func_543(uParam0, 1);
				}
				else if (func_40(48))
				{
					func_831(uParam0, -256440984);
					func_832(uParam0, 1);
					func_543(uParam0, 1);
				}
				break;
		}
	}
	return 1;
}

void func_418(var uParam0, int iParam1)
{
	uParam0->f_2031.f_114 = iParam1;
	uParam0->f_2031.f_113 = 1;
}

int func_419(var uParam0, var uParam1)
{
	iVar0 = func_339(uParam1->f_7);
	switch (uParam1->f_10)
	{
		case 2:
			if (func_261(uParam0) == 1256151078)
			{
				func_244(uParam0, -1934515925, 1, -1, 1, 1, 1, 0);
				return 1;
			}
			switch (*uParam1)
			{
				case 2077448405:
					bVar2 = true;
					break;
				case 1942587409:
					bVar2 = true;
					break;
				case 761079318:
					if (iVar0 == -2061583405)
					{
						bVar2 = true;
					}
					break;
			}
			switch (uParam1->f_7)
			{
				case -2065815962:
					bVar2 = false;
					break;
			}
			if (bVar2)
			{
				if (func_821(uParam1->f_7))
				{
					if (func_835(func_276(uParam0)))
					{
						func_592(uParam0, -1, 1);
					}
					func_836(uParam1->f_7, 1, 1);
					func_837(uParam1->f_7, 3);
				}
				else
				{
					func_838(uParam1->f_7, 1, 0, 0);
					func_837(uParam1->f_7, 2);
				}
			}
			break;
		case 4:
			if ((func_818(uParam1->f_7) && func_819() != uParam1->f_7) && uParam1->f_7 != 166243423)
			{
				if (func_821(uParam1->f_7))
				{
					func_836(uParam1->f_7, 1, 1);
				}
				if (func_839(uParam1->f_7, &iVar3))
				{
					func_840(iVar3);
					func_841(2, iVar3, 6);
				}
				func_842(uParam1->f_7, 1, 1, -142743235, 0);
				func_837(uParam1->f_7, 1);
				func_592(uParam0, -1, 1);
			}
			else if (func_843(&iVar4))
			{
				iVar1 = func_844(iVar4);
				if (iVar1 != 0)
				{
					func_845(uParam0);
					func_846(iVar1, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
					Global_1946804->f_1497 = iVar1;
					func_847(iVar4, 1, 1, 6);
					func_837(iVar1, 0);
					func_848(iVar1);
				}
			}
			break;
	}
	return 1;
}

void func_420(var uParam0, var uParam1, var uParam2)
{
	func_849(&(uParam0->f_2280.f_2));
}

void func_421(var uParam0, int iParam1)
{
	uParam0->f_2031.f_112 = iParam1;
	uParam0->f_2031.f_111 = 1;
}

void func_422(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 == 1256151078)
	{
		func_425(uParam0, uParam0->f_2280.f_6);
		func_591(uParam0, uParam0->f_2280.f_6);
	}
	else
	{
		iVar0 = iParam2;
		if (func_278(iVar0, 0) && func_612(iVar0, -393037696))
		{
			func_425(uParam0, iParam2);
			func_591(uParam0, iParam2);
		}
		else
		{
			func_850(uParam0);
			iVar1 = func_276(uParam0);
			if (iVar1 != -1)
			{
				func_591(uParam0, iVar1);
			}
			else
			{
				func_591(uParam0, iParam2);
			}
		}
	}
}

void func_423(var uParam0, var uParam1)
{
}

void func_424(var uParam0, int iParam1)
{
	uParam0->f_2031.f_122 = iParam1;
	uParam0->f_2031.f_121 = 1;
}

void func_425(var uParam0, int iParam1)
{
	uParam0->f_16 = iParam1;
}

int func_426(var uParam0)
{
	return get_ped_index_from_entity_index(uParam0->f_30);
}

int func_427(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	clear_ped_env_dirt(iParam1);
	clear_ped_damage_decal_by_zone(iParam1, 10, "ALL");
	uParam0->f_2031.f_97 = iParam1;
	return 1;
}

void func_428()
{
	iVar0 = func_819();
	if (iVar0 != 166243423)
	{
		if (func_821(166243423))
		{
			func_836(166243423, 1, 1);
		}
	}
	if (func_125() == -1)
	{
		if (func_122() != 0)
		{
			if (func_821(1164374808))
			{
				func_836(1164374808, 1, 1);
			}
		}
	}
	if (!func_821(iVar0))
	{
		if (!func_824(-999503751, 1))
		{
			iVar1 = func_851(-999503751, 0, 0);
			func_836(iVar1, 1, 0);
		}
		func_838(iVar0, 1, 0, 0);
	}
}

int func_429(var uParam0)
{
	if (!_is_anim_scene_loaded(uParam0->f_20, true, false))
	{
		return 0;
	}
	if (!_0x0df57f86fe71dbe5(uParam0->f_20, "PB_IDLE"))
	{
		_0xdf7b5144e25cd3fe(uParam0->f_20, "PB_IDLE");
	}
	if (!_0x23e33cb9f4a3f547(uParam0->f_20, "PB_IDLE"))
	{
		return 0;
	}
	return 1;
}

void func_430(int iParam0, var uParam1)
{
	iVar0 = Global_1914319->f_16855;
	iVar1 = Global_1914319->f_18748;
	if (Global_1914319->f_19461.f_20 == 1)
	{
		return;
	}
	Global_1914319->f_19461.f_21 = iParam0;
	Global_1914319->f_19461 = *uParam1;
	if (iVar0 == -1 || func_852(Global_1949604, 2))
	{
		if (!func_853(func_2(iVar1)))
		{
			if (_is_global_block_valid(4))
			{
				*Global_1914319->f_19461.f_22[0] = { Global_1949604->f_5881 };
				Global_1914319->f_19461.f_22[0]->f_3 = { Global_1949604->f_5884 };
				Global_1914319->f_19461.f_2.f_9 = get_gameplay_cam_fov();
			}
			else
			{
				*Global_1914319->f_19461.f_22[0] = { Global_1949604->f_5881 };
				Global_1914319->f_19461.f_22[0]->f_3 = { Global_1949604->f_5884 };
				if (iVar1 == 115)
				{
					Global_1914319->f_19461.f_2.f_9 = get_gameplay_cam_fov();
				}
				else
				{
					Global_1914319->f_19461.f_2.f_9 = 51.3f;
				}
			}
		}
		else if (_is_global_block_valid(5))
		{
			if (func_852(Global_1949604, 2))
			{
				*Global_1914319->f_19461.f_22[0] = { Global_1949604->f_5881 };
				Global_1914319->f_19461.f_22[0]->f_3 = { Global_1949604->f_5884 };
				Global_1914319->f_19461.f_2.f_9 = get_gameplay_cam_fov();
			}
		}
		else
		{
			*Global_1914319->f_19461.f_22[0] = { get_cam_coord(*uParam1) };
			Global_1914319->f_19461.f_22[0]->f_3 = { get_cam_rot(*uParam1, 2) };
			Global_1914319->f_19461.f_2.f_9 = get_gameplay_cam_fov();
		}
	}
	else
	{
		if (iVar0 == 20)
		{
			*Global_1914319->f_19461.f_22[0] = { get_cam_coord(*uParam1) };
			Global_1914319->f_19461.f_22[0]->f_3 = { get_cam_rot(*uParam1, 2) };
		}
		else
		{
			func_854(Global_1914319->f_19461.f_22[0], iVar0, iVar1, 145281273);
			func_854(&(Global_1914319->f_19461.f_22[0]->f_3), iVar0, iVar1, 1979643065);
		}
		Global_1914319->f_19461.f_2.f_9 = 51.3f;
	}
	func_855(iParam0, iVar0, iVar1);
	func_856(1);
	Global_1914319->f_19461.f_20 = 1;
}

void func_431(var uParam0)
{
	func_84(1);
	if (!_is_anim_scene_started(uParam0->f_20, false))
	{
		set_anim_scene_entity(uParam0->f_20, "player", *uParam0, 0);
		fVar0 = (uParam0->f_14 + 180f);
		if (fVar0 > 360f)
		{
			fVar0 = (fVar0 - 360f);
		}
		set_anim_scene_origin(uParam0->f_20, uParam0->f_11, 0f, 0f, fVar0, 0);
		start_anim_scene(uParam0->f_20);
	}
	if (!_0x1f0e401031e20146(uParam0->f_20, "PB_IDLE"))
	{
		_set_anim_scene_playback_list_bool(uParam0->f_20, "PB_IDLE", true);
	}
}

void func_432(var uParam0)
{
	Global_1914319->f_19461.f_21 = *uParam0;
	*Global_1914319->f_19461.f_22[0] = { get_offset_from_entity_in_world_coords(*uParam0, 0.1773f, 2.1151f, 0.576f) };
	Global_1914319->f_19461.f_22[0]->f_3 = { get_entity_rotation(*uParam0, 2) + Vector(186.414f, 0f, -14.7873f) };
	Global_1914319->f_19461.f_2.f_9 = 50.9f;
	func_855(*uParam0, 24, func_1());
	Global_1914319->f_19461.f_20 = 1;
	if (!does_cam_exist(uParam0->f_2))
	{
		uParam0->f_2 = create_cam_with_params("default_scripted_camera", *Global_1914319->f_19461.f_22[0], Global_1914319->f_19461.f_22[0]->f_3, Global_1914319->f_19461.f_2.f_9, false, 2);
	}
	else
	{
		set_cam_params(uParam0->f_2, *Global_1914319->f_19461.f_22[0], Global_1914319->f_19461.f_22[0]->f_3, Global_1914319->f_19461.f_2.f_9, 0, 1, 1, 2, 1, 0);
	}
	if (!is_cam_active(uParam0->f_2))
	{
		set_cam_active(uParam0->f_2, true);
	}
	if (!is_cam_rendering(uParam0->f_2))
	{
		render_script_cams(true, false, 3000, true, false, 0);
	}
	func_857(uParam0->f_2, 0);
}

void func_433()
{
	if (func_125() != -1)
	{
		return;
	}
	if (!func_158())
	{
		return;
	}
	func_858(&(Global_40.f_40));
}

void func_434()
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

int func_435()
{
	return &Global_1899515;
}

bool func_436()
{
	return !func_43(Global_1310720->f_1);
}

int func_437()
{
	return Global_40.f_4283.f_1;
}

int func_438(vector3 vParam0, int iParam3)
{
	iVar0 = func_1();
	if (func_111(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_859(vParam0, iParam3);
}

void func_439(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_860())
	{
		fVar0 = func_770(vParam0, Global_40.f_6);
	}
	if (func_373(33554432))
	{
		if (!func_166(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_770(vParam0, Global_40.f_2);
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

float func_440(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_441(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_442()
{
	if (!func_10(&Global_1935630, 8192))
	{
		return;
	}
	if (func_861(32768))
	{
		return;
	}
	func_101(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_862(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_862(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_862(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_862(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_862(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_862(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_862(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_862(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_862(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_863(10f, to_float(func_862(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_863(5f, to_float(func_862(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_863(25f, to_float(func_864(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_863(1f, to_float(func_864(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_863(6f, to_float(func_864(64058978)))));
	fVar0 = (fVar0 + (3f * func_863(1f, to_float(func_864(795577402)))));
	iVar1 = func_865();
	fVar0 = (fVar0 + (0.1111111f * func_863(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_866(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_866(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_866(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_866(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_866(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_866(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_866(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_866(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_866(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_866(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_866(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_863(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_863(to_float(20), to_float(func_867()))));
	if (func_804(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_804(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_804(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_804(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_804(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_866(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_866(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_866(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_866(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_866(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_863(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_863(5f, to_float(func_864(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_863(5f, to_float(func_862(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_868(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_868(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_868(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_868(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_868(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_868(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_869(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_863((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_863(1f, to_float(func_870(-2116919750)))));
	fVar5 = to_float(func_871());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_863(1f, to_float(func_862(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_863(1f, to_float(func_862(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_863(1f, to_float(func_862(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_863(1f, to_float(func_862(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_863(5f, to_float(func_864(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_863(1f, to_float(func_864(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_863(1f, to_float(func_864(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_863(1f, to_float(func_864(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_863(1f, to_float(func_862(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_863(1f, to_float(func_862(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_863(1f, to_float(func_862(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_863(1f, to_float(func_862(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_863(1f, to_float(func_862(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_863(1f, to_float(func_862(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_863(1f, to_float(func_862(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_863(1f, to_float(func_862(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_863(1f, to_float(func_862(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_863(1f, to_float(func_862(978382515, 1015970717)))));
	Var6 = { func_872(1215094015) };
	fVar8 = func_873(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_232(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_232(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_737(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_874(Global_1898330[iVar61]);
				}
				else
				{
					func_875(iVar61, 0);
					if (func_233(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_876(Global_1898330[iVar61]);
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
									iVar9[iVar60] = func_876((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
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
										_0x51ec204a6e5b5a1a(func_876(&Global_1898437), &iVar9);
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

void func_443(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_444(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_445(int iParam0)
{
	iParam0 = func_444(iParam0);
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

int func_446(int iParam0)
{
	iParam0 = func_444(iParam0);
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

float func_447(int iParam0)
{
	iParam0 = func_444(iParam0);
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

float func_448(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_449(int iParam0)
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

int func_450(int iParam0)
{
	return iParam0 & 31;
}

int func_451(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_452(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_453(var uParam0)
{
	*uParam0 = 0;
}

void func_454(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_455(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

Vector3 func_456(int iParam0)
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

void func_457(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	if (!func_238(iParam0))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_13 & 256 != 0 && func_742(0, 0, 1))
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
	if (func_861(32768))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		return;
	}
	(*Global_1347702)[iParam0]->f_38 = func_877(iParam0);
	if (!bParam5 && func_878(iParam0))
	{
		(*Global_1347702)[iParam0]->f_37 = _blip_add_for_radius((*Global_1347702)[iParam0]->f_38, func_456(iParam0), (*Global_1347702)[iParam0]->f_18);
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
		func_749(8);
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
	func_879(iParam0);
	set_blip_flash_timer((*Global_1347702)[iParam0]->f_37, 64, iParam0);
	if (func_125() == -1)
	{
		func_880(iParam0);
		iVar0 = func_881(Global_40.f_4283);
		if (func_111(iVar0) && func_882((*Global_1888801)[iVar0]->f_13))
		{
			bVar1 = true;
			bVar2 = func_883(iVar0);
		}
		if (func_884(iParam0, bVar1, iVar0))
		{
			func_885((*Global_1347702)[iParam0]->f_15, bVar2, bVar1, iVar0);
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
		func_886(&((*Global_1347702)[iParam0]->f_13), 1);
		if (((!func_878(iParam0) || func_887((*Global_1347702)[iParam0]->f_12, 1)) || func_887((*Global_1347702)[iParam0]->f_12, 512)) || func_733((*Global_1347702)[iParam0]->f_13, 2048))
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
			func_886(&((*Global_1347702)[iParam0]->f_13), 32768);
		}
	}
	if ((*Global_1347702)[iParam0]->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_888(iParam0))
		{
			if (iParam0 == 97)
			{
				func_341(185, 0);
			}
			else
			{
				func_341(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {(*Global_1347702)[iParam0]->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = (*Global_1347702)[iParam0]->f_37;
			(*Global_1347702)[iParam0]->f_40 = func_196(_create_var_string(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_889(iParam0, 2);
	}
}

Vector3 func_458(int iParam0)
{
	if (!func_238(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_890(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

int func_459(int iParam0)
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
			return 186603357;
		case 94:
			return -1575817877;
		case 98:
			return 1087483310;
		case 125:
			return -552506176;
		case 123:
			return -614248279;
		case 99:
			return 441769767;
		case 100:
			return 1318049946;
		case 4:
			return 548657065;
		case 5:
			return 243086140;
		case 34:
			return -305029900;
		case 67:
			return 1008537949;
		default:
			break;
	}
	return 0;
}

int func_460(var uParam0)
{
	return uParam0->f_1.f_2;
}

bool func_461(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 1702063850;
			return true;
		case 1:
			*iParam1 = 2060555271;
			return true;
		case 3:
			*iParam1 = -1228165250;
			return true;
		case 4:
			*iParam1 = 298535881;
			return true;
		case 13:
			*iParam1 = 206398161;
			return true;
		case 10:
			*iParam1 = 188795938;
			return true;
		case 11:
			*iParam1 = 1546351910;
			return true;
		default:
			break;
	}
	return false;
}

bool func_462(int iParam0, var uParam1)
{
	if (_item_database_get_shop_layout_root_menu_info(*uParam1, iParam0, &(uParam1->f_5)))
	{
		uParam1->f_31[0] = uParam1->f_5;
		uParam1->f_12 = { uParam1->f_5 };
		uParam1->f_20[0] = 0;
		uParam1->f_42 = 0;
		uParam1->f_43 = iParam0;
		return true;
	}
	return false;
}

int func_463(var uParam0)
{
	return uParam0->f_5;
}

bool func_464(int iParam0, var uParam1)
{
	return _item_database_get_shop_layout_menu_info_by_id(*uParam1, iParam0, &uVar0);
}

var func_465(var uParam0)
{
	return uParam0->f_43;
}

int func_466(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_16855.f_3.f_14;
	}
	return Global_1914319->f_16855.f_3.f_8;
}

bool func_467(var uParam0, int iParam1, int iParam2)
{
	if (func_245(&(uParam0->f_2031)) == iParam1)
	{
		return true;
	}
	iVar0 = func_891(&(uParam0->f_2031));
	iVar1 = 0;
	if (iVar0 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			*iParam2 = iVar1;
			if (func_268(iVar1, &(uParam0->f_2031)))
			{
				if (func_467(uParam0, iParam1, iParam2))
				{
					return true;
				}
			}
			iVar1++;
		}
		func_275(&(uParam0->f_2031));
		return false;
	}
	else
	{
		func_275(&(uParam0->f_2031));
	}
	return false;
}

bool func_468()
{
	return _request_uiapp_transition_by_hash(1289756680, -1597171896);
}

bool func_469()
{
	return _request_uiapp_transition_by_hash(1289756680, 677247760);
}

void func_470(var uParam0)
{
	uParam0->f_2031.f_80 = 1;
}

void func_471(var uParam0, int iParam1, char* sParam2)
{
	_databinding_add_data_string(uParam0->f_2031.f_53, func_892(iParam1), sParam2);
}

bool func_472(var uParam0, int iParam1)
{
	return _databinding_read_data_bool_from_parent(uParam0->f_2031.f_53, func_477(iParam1));
}

char* func_473(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "SelectHeldEnabled";
			}
			else
			{
				return "SelectEnabled";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "OptionHeldEnabled";
			}
			else
			{
				return "OptionEnabled";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "ToggleHeldEnabled";
			}
			else
			{
				return "ToggleEnabled";
			}
			break;
		case 4:
			if (bParam1)
			{
				return "InfoHeldEnabled";
			}
			else
			{
				return "InfoEnabled";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "AdjustHeldEnabled";
			}
			else
			{
				return "AdjustEnabled";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "BackHeldEnabled";
			}
			else
			{
				return "BackEnabled";
			}
			break;
	}
	return "";
}

char* func_474(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "SelectHeldVisible";
			}
			else
			{
				return "SelectVisible";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "OptionHeldVisible";
			}
			else
			{
				return "OptionVisible";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "ToggleHeldVisible";
			}
			else
			{
				return "ToggleVisible";
			}
			break;
		case 4:
			if (bParam1)
			{
				return "InfoHeldVisible";
			}
			else
			{
				return "InfoVisible";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "AdjustHeldVisible";
			}
			else
			{
				return "AdjustVisible";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "BackHeldVisible";
			}
			else
			{
				return "BackVisible";
			}
			break;
	}
	return "";
}

bool func_475(var uParam0, int iParam1)
{
	bVar0 = func_472(uParam0, iParam1);
	return _databinding_read_data_bool_from_parent(uParam0->f_2031.f_53, func_473(iParam1, bVar0));
}

bool func_476(var uParam0, int iParam1)
{
	bVar0 = func_472(uParam0, iParam1);
	return _databinding_read_data_bool_from_parent(uParam0->f_2031.f_53, func_474(iParam1, bVar0));
}

char* func_477(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "SelectHeld";
		case 2:
			return "OptionHeld";
		case 3:
			return "ToggleHeld";
		case 4:
			return "InfoHeld";
		case 5:
			return "AdjustHeld";
		case 6:
			return "BackHeld";
	}
	return "";
}

int func_478(var uParam0, var uParam1)
{
	bVar0 = true;
	iVar1 = func_466(0);
	iVar2 = func_893(iVar1, &(uParam0->f_2031));
	iVar3 = func_299(uParam0);
	if (func_894(iVar3, iVar2, 4))
	{
		iVar4 = 0;
		if (func_895(uParam0, iVar3, iVar2, &iVar4))
		{
			iVar5 = func_896(uParam0, iVar4);
			if ((((iVar5 == -853534656 || iVar5 == 761079318) || iVar5 == 1942587409) || iVar5 == 2077448405) || iVar5 == -2056428614)
			{
				func_897(uParam0, iVar4);
				bVar0 = false;
			}
			else if (iVar5 == 1394581936)
			{
				func_898(uParam0, iVar4);
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		func_302(uParam0, 1);
		func_602(uParam0);
	}
	bVar6 = func_622(0);
	func_636(uParam0, 1, -672301300, bVar6, 1, 0);
	return 1;
}

int func_479(var uParam0, var uParam1)
{
	bVar0 = func_622(0);
	func_636(uParam0, 1, -2494464, bVar0, 1, 0);
	return 1;
}

int func_480(var uParam0, var uParam1)
{
	bVar0 = func_622(0);
	func_636(uParam0, 1, -2494464, bVar0, 1, 0);
	return 1;
}

int func_481(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_9;
	bVar1 = func_622(0);
	func_636(uParam0, 1, 2053664062, bVar1, 1, 0);
	if (func_826(iVar0) == -1037537535)
	{
		func_897(uParam0, iVar0);
	}
	return 1;
}

int func_482(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_9;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	if (iVar0 == 1279130184)
	{
		if (!func_899() && !func_631(func_632()))
		{
			func_630(func_900(func_632()), Global_35, -1, 1);
		}
		else
		{
			func_630(func_632(), Global_35, -1, 1);
		}
	}
	else
	{
		if (func_612(iVar0, 518788085) || (func_901(iVar0) && !func_631(iVar0)))
		{
			bVar1 = ((func_360(1) >= func_902(1279130184, 0) && !func_899()) && !func_631(func_632()));
			sVar2 = _create_var_string(2, "BARBER_POMADE", func_902(1279130184, 0));
			func_903(uParam0, 3, sVar2, bVar1, !func_631(func_632()), 0);
		}
		else
		{
			func_274(uParam0, 2);
		}
		func_274(uParam0, 2);
		iVar3 = 1;
		if (!func_638(iVar0, &iVar3))
		{
			func_259(Global_35, 1, 1);
		}
		if (func_612(iVar0, 518788085))
		{
			func_905(Global_35, (func_904() - 1), 1);
		}
	}
	func_636(uParam0, 1, -2494464, func_622(0), 1, 0);
	return 1;
}

int func_483(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_9;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	iVar1 = 1;
	if (!func_639(iVar0, &iVar1))
	{
		func_302(uParam0, 1);
		if (uParam1->f_11 == 2144984909)
		{
			func_623(uParam0, 0);
		}
	}
	else
	{
		func_636(uParam0, 1, -672301300, 1, 1, 0);
	}
	return 1;
}

int func_484(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_9;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	if (func_634(uParam0, iVar0, -853534656, -1))
	{
		if (func_906(iVar0) || func_907(iVar0))
		{
			func_636(uParam0, 1, -1910242239, 1, 1, 0);
		}
		else
		{
			func_636(uParam0, 1, -507073631, 0, 1, 0);
		}
	}
	else if (func_834(uParam0, iVar0, -853534656))
	{
		iVar1 = 0;
		if (func_908(Global_35, iVar0, &iVar1))
		{
			func_636(uParam0, 1, -507073631, 1, 1, 0);
		}
		else
		{
			func_636(uParam0, 1, -507073631, 0, 1, 0);
		}
	}
	else
	{
		bVar2 = func_909(uParam0, iVar0, -853534656);
		func_636(uParam0, 1, -2494464, bVar2, 1, 0);
	}
	if (!func_908(func_263(uParam0), iVar0, &iVar3))
	{
		func_830(uParam0, iVar3);
	}
	else
	{
		func_547(uParam0, 0);
	}
	if (!func_906(iVar0) && !func_907(iVar0))
	{
		func_897(uParam0, iVar0);
	}
	return 1;
}

int func_485(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_9;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	if (func_634(uParam0, iVar0, 777890122, -1))
	{
		func_274(uParam0, 1);
	}
	else if (func_834(uParam0, iVar0, 777890122))
	{
		func_636(uParam0, 1, -507073631, 1, 1, 0);
	}
	else
	{
		bVar1 = func_622(0);
		func_636(uParam0, 1, -2494464, bVar1, 1, 0);
	}
	return 1;
}

int func_486(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_9;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	if (uParam1->f_11 != 310306577)
	{
		if (func_634(uParam0, iVar0, -1502467280, -1))
		{
			func_274(uParam0, 1);
		}
		else if (func_834(uParam0, iVar0, -1502467280))
		{
			func_636(uParam0, 1, -507073631, 1, 1, 0);
		}
		else
		{
			bVar1 = func_622(0);
			func_636(uParam0, 1, -2494464, bVar1, 1, 0);
		}
	}
	return 1;
}

int func_487(var uParam0, var uParam1)
{
	bVar0 = func_622(0);
	iVar1 = -2494464;
	if (func_902(uParam1->f_9, 0) <= 0)
	{
		iVar1 = 1892711184;
	}
	func_636(uParam0, 1, iVar1, bVar0, 1, 0);
	return 1;
}

int func_488(var uParam0)
{
	iVar0 = func_652(0);
	if (iVar0 == -1 || iVar0 >= 5)
	{
		return 0;
	}
	if (func_910(iVar0))
	{
		func_636(uParam0, 2, -861791432, 1, 1, 1);
	}
	func_640(uParam0, -1848132362);
	return 1;
}

int func_489(var uParam0, var uParam1)
{
	if (uParam0->f_2 == 18)
	{
		return 1;
	}
	iVar0 = uParam1->f_9;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	if (!func_898(uParam0, iVar0))
	{
	}
	if (func_834(uParam0, iVar0, 1394581936))
	{
		iVar1 = -507073631;
	}
	else
	{
		iVar1 = -2494464;
	}
	if (!func_634(uParam0, iVar0, 1394581936, -1))
	{
		bVar2 = func_622(0);
		func_636(uParam0, 1, iVar1, bVar2, 1, 0);
	}
	return 1;
}

int func_490(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_1;
	if (iVar0 == -1 || iVar0 >= 5)
	{
		func_274(uParam0, 2);
		func_274(uParam0, 3);
	}
	else if (func_910(iVar0))
	{
		if (func_911(iVar0) == 1)
		{
			func_636(uParam0, 3, 1346060065, 1, 1, 0);
			func_640(uParam0, -262890001);
		}
		else
		{
			func_636(uParam0, 3, 545231356, 1, 1, 0);
			func_640(uParam0, 369533482);
		}
		func_636(uParam0, 2, -861791432, 1, 1, 1);
	}
	else
	{
		func_274(uParam0, 2);
		func_274(uParam0, 3);
	}
	return 1;
}

int func_491(var uParam0, var uParam1)
{
	if (func_278(uParam1->f_9, 0))
	{
		if (func_912(&(uParam1->f_3), 0))
		{
			func_274(uParam0, 2);
			func_274(uParam0, 3);
		}
		else
		{
			func_636(uParam0, 3, -507073631, 1, 1, 0);
			func_636(uParam0, 2, -861791432, 1, 1, 1);
		}
		func_636(uParam0, 1, -672301300, 1, 1, 0);
	}
	else
	{
		func_636(uParam0, 1, -2494464, 1, 1, 0);
		func_274(uParam0, 2);
		func_274(uParam0, 3);
	}
	func_913(uParam0, &(uParam1->f_3));
	return 1;
}

int func_492(var uParam0)
{
	iVar0 = func_720();
	if (iVar0 == 1)
	{
		func_636(uParam0, 1, 877647614, 1, 1, 0);
		func_640(uParam0, 829087889);
	}
	else if (iVar0 == 3)
	{
		func_636(uParam0, 1, -1765989736, 1, 1, 0);
		func_640(uParam0, -2111805612);
	}
	return 1;
}

int func_493(var uParam0, var uParam1)
{
	bVar0 = func_622(0);
	func_636(uParam0, 1, -672301300, bVar0, 1, 0);
	iVar1 = 1728382685;
	if (func_914(uParam1->f_9, 1728382685, 0) && func_914(uParam1->f_9, -649335959, 0))
	{
		iVar2 = _databinding_read_data_hash_string_from_parent_by_hash(uParam1->f_10, func_655());
		iVar1 = iVar2;
		func_666(uParam0, iVar1);
		if (func_663(uParam1->f_9, iVar1, &iVar3, &iVar4))
		{
			_databinding_add_data_hash_by_hash(uParam1->f_10, func_664(), iVar3);
			_databinding_add_data_hash_by_hash(uParam1->f_10, func_665(), iVar4);
			_databinding_add_data_bool_by_hash(uParam1->f_10, func_915(), true);
		}
		func_636(uParam0, 5, 1067499419, 1, 1, 0);
	}
	else if (func_914(uParam1->f_9, -649335959, 0))
	{
		func_666(uParam0, -649335959);
	}
	else
	{
		func_666(uParam0, 1728382685);
	}
	bVar11 = true;
	if (_is_weapon_two_handed(uParam1->f_9))
	{
		iVar5 = -572103635;
		iVar6 = 894623821;
		iVar7 = 10;
		iVar8 = 9;
		bVar9 = func_916(Global_35, 1, iVar7, 1) != uParam1->f_9;
		bVar10 = func_916(Global_35, 1, iVar8, 1) != uParam1->f_9;
	}
	else if (_is_weapon_one_handed(uParam1->f_9))
	{
		bVar9 = true;
		bVar10 = true;
		iVar5 = -1610187846;
		iVar6 = 190417139;
		iVar7 = 2;
		iVar8 = 3;
		Var12 = { func_669(uParam1->f_9, func_668(0), iVar1, 0) };
		if (_0x6929e22158e52265(Global_35, iVar7, &uVar16))
		{
			if (func_670(&Var12, &uVar16))
			{
				bVar9 = false;
				bVar10 = false;
			}
		}
		if (_0x6929e22158e52265(Global_35, iVar8, &uVar16))
		{
			if (func_670(&Var12, &uVar16))
			{
				bVar9 = false;
				iVar6 = 165536584;
			}
		}
		if (!func_40(24) || func_671() < 2)
		{
			bVar11 = false;
		}
	}
	else if (_is_weapon_melee(uParam1->f_9))
	{
		iVar5 = 1091200442;
		iVar7 = 4;
		iVar8 = 4;
		bVar9 = func_916(Global_35, 1, iVar7, 1) != uParam1->f_9;
	}
	if (_is_weapon_melee(uParam1->f_9))
	{
		func_636(uParam0, 3, iVar5, bVar9, 1, 0);
		func_274(uParam0, 2);
	}
	else
	{
		func_636(uParam0, 3, iVar5, bVar9, 1, 0);
		func_636(uParam0, 2, iVar6, (bVar10 && bVar11), bVar11, 0);
	}
	func_640(uParam0, 525827058);
	return 1;
}

int func_494(var uParam0, var uParam1)
{
	iVar1 = _databinding_read_data_hash_string_from_parent(uParam1->f_10, func_683());
	iVar0 = iVar1;
	bVar2 = func_622(0);
	if (func_278(iVar0, 0))
	{
		if (func_917(uParam1->f_9))
		{
			if (func_826(iVar0) == -1037537535)
			{
				if (bVar2)
				{
					func_897(uParam0, iVar0);
				}
				if (!func_908(func_263(uParam0), iVar0, &iVar3))
				{
					func_830(uParam0, iVar3);
				}
				else if (iVar0 == func_825(0))
				{
					func_830(uParam0, 223046265);
				}
				else
				{
					func_547(uParam0, 0);
				}
			}
		}
	}
	func_636(uParam0, 1, -672301300, bVar2, 1, 0);
	return 1;
}

int func_495(var uParam0, var uParam1)
{
	uVar0 = uParam1->f_1;
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = -1;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_7 = -1;
	Var1.f_8 = -1;
	Var1.f_8 = uVar0;
	iVar11 = 0;
	iVar12 = 0;
	iVar12 = _item_database_create_item_collection(&Var1, &iVar11, 1);
	if (iVar12 == -1)
	{
		return 0;
	}
	iVar14 = func_918(uParam0);
	iVar33 = 0;
	iVar33 = 0;
	while (iVar33 < iVar11)
	{
		iVar32 = func_919(iVar33, iVar12);
		if (func_278(iVar32, 0))
		{
			iVar34 = func_896(uParam0, iVar32);
			if (iVar34 == 1702073444)
			{
			}
			else
			{
				Var15 = { *uParam1 };
				Var15.f_9 = iVar32;
				Var15 = iVar34;
				if (func_920(&(uParam0->f_2031), iVar32, &uVar13))
				{
					uParam0->f_2031.f_74 = uVar13;
				}
				else if (_item_database_get_item_tag_type(iVar32, uVar0) == -2089472884)
				{
				}
			else
			{
				}
				else
				{
					Stack.Push(uParam0);
					Stack.Push(&Var15);
					Call_Loc(uParam0->f_2031.f_123);
					if (StackVal)
					{
					}
					if (uParam0->f_2031.f_113)
					{
						Stack.Push(uParam0);
						Stack.Push(&Var15);
						Call_Loc(uParam0->f_2031.f_114);
						if (!StackVal)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar33++;
	}
	uParam0->f_2031.f_74 = iVar14;
	_0xcbb7b6edfa933ade(iVar12);
	return 1;
}

int func_496(var uParam0, int iParam1)
{
	if (!func_278(iParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_497(var uParam0, var uParam1)
{
	return 1;
}

int func_498(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_9;
	iVar1 = func_339(iVar0);
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	bVar2 = func_634(uParam0, iVar0, 761079318, -1);
	func_636(uParam0, 1, -507073631, !bVar2, 1, 0);
	func_897(uParam0, iVar0);
	if (!func_908(func_263(uParam0), iVar0, &iVar3))
	{
		func_830(uParam0, iVar3);
	}
	else if (iVar0 == func_825(0))
	{
		func_830(uParam0, 223046265);
	}
	else
	{
		func_547(uParam0, 0);
	}
	switch (iVar1)
	{
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
			func_543(uParam0, 0);
			break;
	}
	return 1;
}

int func_499(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_9;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	bVar1 = func_634(uParam0, iVar0, 761079318, -1);
	func_636(uParam0, 1, -507073631, !bVar1, 1, 0);
	func_897(uParam0, iVar0);
	return 1;
}

int func_500(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_9;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	bVar1 = func_634(uParam0, iVar0, 761079318, -1);
	if (uParam1->f_9 == 166243423)
	{
		func_636(uParam0, 1, -507073631, 0, 1, 0);
		if (func_819() == 166243423)
		{
			func_830(uParam0, 1985110445);
		}
		else
		{
			func_547(uParam0, 0);
		}
	}
	else
	{
		func_636(uParam0, 1, -507073631, !bVar1, 1, 0);
		func_547(uParam0, 0);
	}
	func_897(uParam0, iVar0);
	return 1;
}

int func_501(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_9;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	iVar1 = func_263(uParam0);
	if (!does_entity_exist(iVar1) || is_entity_dead(iVar1))
	{
		return 0;
	}
	bVar3 = func_908(iVar1, iVar0, &uVar2);
	if (func_634(uParam0, iVar0, 761079318, -1))
	{
		func_636(uParam0, 1, -1577066167, 1, 1, 0);
	}
	else
	{
		func_636(uParam0, 1, -1467646358, bVar3, 1, 0);
	}
	return 1;
}

int func_502(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_1;
	iVar1 = iVar0;
	iVar3 = 0;
	if (func_622(0))
	{
		func_636(uParam0, 5, 1067499419, 1, 1, 0);
		switch (iVar1)
		{
			case 0:
			case 1:
				iVar2 = 536681653;
				break;
			case 2:
				iVar2 = -934544273;
				break;
			default:
				iVar2 = 1243347373;
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
			case 1:
				iVar2 = -1078622262;
				break;
			case 2:
				iVar2 = -929695534;
				break;
			default:
				iVar2 = 836317122;
				break;
		}
		iVar4 = func_263(uParam0);
		if (!func_921(iVar4, iVar1, &iVar5))
		{
			iVar3 = iVar5;
		}
	}
	if (iVar3 != 0)
	{
		func_547(uParam0, 0);
	}
	else
	{
		func_830(uParam0, iVar3);
	}
	func_640(uParam0, iVar2);
	return 1;
}

int func_503(var uParam0, var uParam1)
{
	bVar0 = func_622(0);
	iVar1 = uParam1->f_1;
	if (!func_922(&iVar1))
	{
		return 0;
	}
	if (!is_string_null_or_empty(sVar2))
	{
		func_831(uParam0, get_hash_key(sVar2));
		func_832(uParam0, bVar0);
	}
	func_636(uParam0, 1, -2494464, bVar0, 1, 0);
	func_923(uParam0->f_18, iVar1, &iVar3);
	func_640(uParam0, iVar3);
	return 1;
}

int func_504(var uParam0, var uParam1)
{
	bVar0 = func_622(0);
	bVar2 = false;
	iVar3 = uParam1->f_1;
	if (func_717(iVar3))
	{
		iVar1 = func_924(iVar3);
		bVar2 = true;
	}
	func_636(uParam0, 1, -1217561127, bVar0, 1, 0);
	if (bVar2)
	{
		if (iVar1 > 0)
		{
			if (func_360(1) >= iVar1)
			{
				func_640(uParam0, -1091091272);
			}
			else
			{
				func_640(uParam0, -156356253);
			}
		}
		else
		{
			func_640(uParam0, 1900320479);
		}
	}
	else
	{
		func_640(uParam0, -2075002545);
	}
	return 1;
}

int func_505(var uParam0, var uParam1)
{
	iVar0 = func_289(uParam0);
	func_636(uParam0, 2, -316829060, iVar0 > 0, 1, 1);
	func_636(uParam0, 1, -586975683, iVar0 > 0, 1, 0);
	func_640(uParam0, 1670931336);
	return 1;
}

int func_506(var uParam0, var uParam1)
{
	return func_925(uParam0, *uParam1);
}

bool func_507(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 1)
	{
		iVar0 = func_595();
		iVar1 = func_891(&(uParam0->f_2031));
		if (iVar0 < iVar1 && iVar0 >= 0)
		{
			uParam0->f_2031.f_78 = iVar0;
			return func_469();
		}
		else
		{
			return false;
		}
	}
	return true;
}

int func_508(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_7;
	bVar1 = false;
	if (func_926(0))
	{
		iVar2 = uParam0->f_3;
		if (func_928(func_927(uParam0)))
		{
			iVar2 = func_927(uParam0);
		}
		if (func_929(iVar0, iVar2, &Var3))
		{
			if ((Var3.f_2 != 0 && !Var3.f_5) && !Var3.f_4)
			{
				bVar1 = func_930(uParam0, iVar0, -1, 1, 0);
			}
		}
		else
		{
			bVar1 = false;
		}
	}
	uParam1->f_9 = 1;
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_509(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_7;
	if (uParam1->f_10 == 1)
	{
		if (func_931(iVar0, 0))
		{
			return 0;
		}
		else
		{
			iVar1 = 600942249;
			func_932(uParam0->f_2, &iVar1);
			iVar2 = func_933(uParam0->f_2);
			iVar3 = func_934(uParam0->f_2, iVar0);
			if (func_935(iVar0, iVar1, 1, 1, iVar2, 1))
			{
				func_936(iVar0, iVar1, 1, 0, iVar2, iVar3);
				if (uParam0->f_2 == 18)
				{
					func_937(iVar0);
				}
				else if (uParam0->f_2 == 19)
				{
					func_938();
				}
				iVar4 = func_939(iVar0, iVar1);
				func_940(uParam0->f_2, uParam0->f_3, iVar0, 1, iVar4);
				if (func_931(iVar0, 0))
				{
					func_592(uParam0, func_466(0), 1);
					iVar5 = func_896(uParam0, iVar0);
					if (iVar5 == -853534656)
					{
						func_941(iVar0);
					}
				}
				uParam0->f_2319.f_11 = 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_510(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_7;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	if (uParam1->f_10 == 1)
	{
		if (func_612(iVar0, 518788085))
		{
			iVar1 = func_618(uParam0);
			iVar2 = func_619(uParam0);
			func_942(1, (iVar2 - iVar1));
			func_943();
			func_944(uParam0, iVar0);
		}
		else if (iVar0 == 1279130184)
		{
			func_945(uParam0->f_2 == 8);
			func_943();
		}
		else
		{
			if (func_631(iVar0))
			{
				func_946(0, 0);
			}
			func_947(1);
			func_943();
		}
		if (func_948(1))
		{
			func_945(uParam0->f_2 == 8);
			func_943();
		}
		if (uParam0->f_2 == 8)
		{
			func_930(uParam0, iVar0, -1, 0, 0);
		}
		else
		{
			func_930(uParam0, iVar0, 0, 0, 0);
		}
	}
	else if (uParam1->f_10 == 3)
	{
		if (!func_899() && !func_631(func_632()))
		{
			func_630(func_900(func_632()), Global_35, -1, 1);
			func_945(uParam0->f_2 == 8);
			func_943();
			if (uParam0->f_2 == 8)
			{
				func_930(uParam0, 1279130184, -1, 0, 0);
			}
			else
			{
				func_930(uParam0, 1279130184, 0, 0, 0);
			}
		}
	}
	return 1;
}

int func_511(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_7;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	if (iVar0 == 1574030042)
	{
		func_624(1574030042, Global_35, 0, 0, 0, 1);
		func_949();
	}
	else if (iVar0 == 1420417918)
	{
		func_624(1420417918, Global_35, 1, 1, 1, 1);
		func_949();
	}
	else if (uParam1->f_11 != 2144984909)
	{
		func_950(iVar0, 1, 1);
	}
	else
	{
		iVar1 = func_618(uParam0);
		iVar2 = func_619(uParam0);
		if (func_612(iVar0, 518788085) && iVar1 != iVar2)
		{
			func_950(iVar0, 1, (iVar2 - iVar1));
			func_949();
			if (!func_951(2) && !uParam0->f_2 == 25)
			{
			}
		}
		else
		{
			func_949();
			if (!func_951(2) && !uParam0->f_2 == 25)
			{
			}
		}
		func_944(uParam0, iVar0);
	}
	if (uParam0->f_2 == 8)
	{
		func_930(uParam0, iVar0, -1, 0, 0);
	}
	else
	{
		func_930(uParam0, iVar0, 0, 0, 0);
	}
	return 1;
}

int func_512(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 1)
	{
		iVar1 = func_339(uParam1->f_7);
		func_845(uParam0);
		if (iVar1 == -999503751)
		{
			if (func_125() == -1)
			{
				iVar0 = func_754(uParam1->f_7);
				if (iVar0 == -1)
				{
					iVar0 = 0;
				}
				func_952(Global_40.f_7729, 4096);
				Global_40.f_7729 = iVar0;
				Global_1905941 = Global_40.f_7729;
				func_953(Global_40.f_7729, 4096);
			}
			func_954(-1, 0, 1, 1, 1, 0);
			func_848(uParam1->f_7);
		}
		else if (func_906(uParam1->f_7) || func_907(uParam1->f_7))
		{
			if (func_634(uParam0, uParam1->f_7, 761079318, -1))
			{
				iVar2 = func_955(uParam1->f_7);
			}
			else
			{
				iVar2 = uParam1->f_7;
			}
			iVar3 = func_956(iVar2);
			iVar4 = func_263(uParam0);
			if (!does_entity_exist(iVar4) || is_entity_dead(iVar4))
			{
				return 0;
			}
			func_845(uParam0);
			func_957(iVar4, iVar2, 0, iVar3, 1, 1, 1, 0, 1, 0);
			func_848(166243423);
		}
		else
		{
			func_662(1, 1, 0);
			func_848(166243423);
		}
		if (!func_931(uParam1->f_7, 1))
		{
			uParam0->f_2011 = uParam1->f_7;
			bVar5 = func_930(uParam0, uParam1->f_7, -1, 1, func_958(uParam0));
			func_941(uParam1->f_7);
			uParam1->f_9 = bVar5;
		}
		else
		{
			uParam1->f_9 = 1;
		}
		iVar6 = func_263(uParam0);
		if (!does_entity_exist(iVar6) || is_entity_dead(iVar6))
		{
			return 0;
		}
		func_127(iVar6, 1);
		func_959(iVar6);
	}
	return 1;
}

int func_513(var uParam0, var uParam1)
{
	iVar0 = func_960(uParam0);
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	iVar1 = uParam1->f_7;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	iVar2 = func_961(uParam0);
	if (iVar2 == 0)
	{
		return 0;
	}
	if (func_612(iVar1, 1844906744))
	{
		vVar7.f_1 = -1;
		vVar7.f_2 = -1;
		iVar25 = func_276(uParam0);
		if (func_962(func_723(&(uParam0->f_2031)), iVar25, &Var3))
		{
			iVar24 = 0;
			while (iVar24 < Var3.f_3)
			{
				vVar7 = { func_963(iVar24, Var3, &(uParam0->f_2031)) };
				if ((vVar7.x != iVar1 && func_278(vVar7.x, 0)) && func_964(iVar0, vVar7.x, iVar2, 0))
				{
					if (func_965(vVar7.x, iVar0, &iVar10, &Var11, &uVar19, 1, iVar2))
					{
						Var15 = { func_669(vVar7.x, Var11, iVar10, 0) };
						if (!func_966(Var15, 0))
						{
						}
					}
				}
				iVar24++;
			}
		}
		func_274(uParam0, 1);
	}
	else
	{
		if (!func_965(iVar1, iVar0, &iVar26, &Var27, &Var31, 1, iVar2))
		{
			return 0;
		}
		if (!func_967(iVar1, &Var27, iVar26, 0))
		{
			Var31 = { Var27 };
			Var31.f_4 = iVar26;
			if (!func_968(iVar1, &uVar36, &Var31, 1, 752097756, 0))
			{
				return 0;
			}
			func_969(iVar1, 1, 0, 0, 0);
			func_940(uParam0->f_2, uParam0->f_3, iVar1, 1, func_902(iVar1, 0));
			func_970(func_902(iVar1, 0), 0, 0, 0, 1);
			if (func_971(uParam0->f_3, 262144))
			{
				_0x9b4e793b1cb6550a();
				func_972(uParam0->f_3, 262144);
			}
			uParam0->f_2319.f_11 = 1;
		}
		iVar40 = func_973(Var27, iVar26, 1);
		iVar41 = 0;
		if (func_278(iVar40, 0))
		{
			Var47 = { func_669(iVar40, Var27, iVar26, 0) };
			iVar52 = func_339(iVar40);
			iVar56 = func_974(iVar40);
			iVar51 = 0;
			while (iVar51 < iVar56)
			{
				if (_item_database_get_has_slot_info(iVar52, iVar51, &iVar53))
				{
					iVar41 = func_973(Var47, iVar53, 1);
					if (func_278(iVar41, 0) && func_826(iVar41) == 658570475)
					{
						Var42 = { func_669(iVar41, Var47, iVar53, 0) };
						iVar46 = iVar53;
						Jump @587; //curOff = 569
					}
					else
					{
						iVar41 = 0;
					}
				}
				iVar51++;
			}
		}
		Var57 = { func_669(iVar1, Var27, iVar26, 0) };
		if (!func_966(Var57, 1))
		{
			return 0;
		}
		if (func_278(iVar41, 0))
		{
			if (func_975(iVar40, iVar46) == 0)
			{
				if (func_975(iVar1, iVar46) == 0)
				{
					if (func_976(Var42, Var57, iVar46, 1, 1))
					{
					}
				}
				else
				{
					Var31 = { Var57 };
					Var31.f_4 = iVar46;
					if (func_977(iVar41, &Var42, &Var31, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		if (func_612(iVar1, -1644819871))
		{
			Var64.f_9 = -1591664384;
			Var78 = { func_978(0, -1591664384, -1591664384, -1591664384, 0, 1851054657) };
			Var78.f_9 = { Var27 };
			if (func_979(&Var78, &iVar61, &iVar62, 0))
			{
				iVar63 = 0;
				while (iVar63 < iVar62)
				{
					if (func_980(&Var64, iVar63, iVar61, iVar62))
					{
						Var31 = { Var27 };
						Var31.f_4 = Var64.f_9;
						if (func_977(Var64.f_4, &Var64, &Var31, -1, -142743235, 0, 0))
						{
						}
					}
					iVar63++;
				}
			}
			func_981(iVar61);
		}
		if (func_982(iVar0, iVar2))
		{
			func_983(13, 1);
		}
		func_274(uParam0, 1);
	}
	return 1;
}

int func_514(var uParam0, var uParam1)
{
	iVar0 = func_960(uParam0);
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	iVar1 = uParam1->f_7;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	iVar2 = func_961(uParam0);
	if (iVar2 == 0)
	{
		return 0;
	}
	if (func_612(iVar1, 1844906744))
	{
		vVar7.f_1 = -1;
		vVar7.f_2 = -1;
		iVar25 = func_276(uParam0);
		if (func_962(func_723(&(uParam0->f_2031)), iVar25, &Var3))
		{
			iVar24 = 0;
			while (iVar24 < Var3.f_3)
			{
				vVar7 = { func_963(iVar24, Var3, &(uParam0->f_2031)) };
				if (vVar7.x != iVar1 && func_278(vVar7.x, 0))
				{
					if (func_965(vVar7.x, iVar0, &iVar10, &Var11, &uVar19, 1, iVar2))
					{
						Var15 = { func_669(vVar7.x, Var11, iVar10, 0) };
						iVar26 = func_339(vVar7.x);
						if (iVar26 == 146649851 || iVar26 == -1954920608)
						{
							if (func_966(Var15, 0))
							{
							}
						}
						else if (func_977(vVar7.x, &Var15, &uVar19, -1, -142743235, 0, 0))
						{
							func_970(func_902(iVar1, 0), 0, 0, 0, 1);
						}
					}
				}
				iVar24++;
			}
		}
	}
	else
	{
		if (!func_965(iVar1, iVar0, &iVar27, &Var28, &Var32, 1, iVar2))
		{
			return 0;
		}
		Var32 = { Var28 };
		Var32.f_4 = iVar27;
		if (!func_967(iVar1, &Var28, iVar27, 0))
		{
			Var40.f_9 = -1591664384;
			Var54 = { func_978(0, iVar27, -1591664384, -1591664384, 0, 0) };
			Var54.f_9 = { Var28 };
			if (func_979(&Var54, &iVar37, &iVar38, 0))
			{
				iVar39 = 0;
				while (iVar39 < iVar38)
				{
					if (func_980(&Var40, iVar39, iVar37, iVar38))
					{
						if (func_977(Var40.f_4, &Var40, &Var32, -1, -142743235, 0, 0))
						{
						}
					}
					iVar39++;
				}
			}
			func_981(iVar37);
			if (!func_968(iVar1, &uVar68, &Var32, 1, 752097756, 0))
			{
				return 0;
			}
			func_969(iVar1, 1, 0, 0, 0);
			func_940(uParam0->f_2, uParam0->f_3, iVar1, 1, func_902(iVar1, 0));
			func_970(func_902(iVar1, 0), 0, 0, 0, 1);
			if (func_971(uParam0->f_3, 262144))
			{
				_0x9b4e793b1cb6550a();
				func_972(uParam0->f_3, 262144);
			}
		}
		Var72 = { func_669(iVar1, Var28, iVar27, 0) };
		if (!func_966(Var72, 1))
		{
			return 0;
		}
	}
	if (func_982(iVar0, iVar2))
	{
		func_983(13, 1);
	}
	return 1;
}

int func_515(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_7;
	bVar1 = false;
	if (func_926(0))
	{
		iVar2 = uParam0->f_3;
		if (func_928(func_927(uParam0)))
		{
			iVar2 = func_927(uParam0);
		}
		if (func_929(iVar0, iVar2, &Var3))
		{
			if ((Var3.f_2 != 0 && !Var3.f_5) && !Var3.f_4)
			{
				bVar1 = func_930(uParam0, iVar0, -1, 1, 0);
			}
		}
		else
		{
			bVar1 = false;
		}
	}
	uParam1->f_9 = 1;
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_516(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_7;
	if (uParam1->f_10 == 1 && !func_984(uParam0, 128))
	{
		bVar1 = true;
		iVar10 = uParam0->f_3;
		if (func_928(func_927(uParam0)))
		{
			iVar10 = func_927(uParam0);
		}
		func_985(uParam0, 128);
		if (func_929(iVar0, iVar10, &Var11))
		{
			if ((Var11.f_2 != 0 && !Var11.f_5) && !Var11.f_4)
			{
				if (func_986() == -1 && func_910(0))
				{
					func_987("SHOP_HORSE_HELP_NO_OPEN_STABLED_SLOTS", "", 0, 0, 4000, 0, 0, 0, 0, 1, 1);
				}
				else if (func_988(&Var2))
				{
					iVar17 = func_902(iVar0, 0);
					if (!func_930(uParam0, iVar0, iVar17, 1, 0))
					{
						bVar1 = false;
						if (func_989(iVar0, 1, 0))
						{
							func_990("SHOP_H_MAX_ITEM");
						}
					}
					if (!bVar1)
					{
						func_991(uParam0, 128);
						return 0;
					}
				}
				else
				{
					bVar1 = false;
				}
			}
		}
		else
		{
			bVar1 = false;
		}
		uParam1->f_9 = bVar1;
		if (bVar1)
		{
			if (func_125() == -1)
			{
				if (func_910(0))
				{
					iVar18 = func_986();
				}
				else
				{
					iVar18 = 0;
				}
				if (iVar18 == -1)
				{
				}
				else
				{
					if (iVar18 != 0)
					{
						if (is_ped_in_writhe(func_226(0)))
						{
							func_992(0);
							func_993(func_226(0));
							_set_entity_health(func_226(0), 0, 0);
						}
						else
						{
							func_994(0);
							func_992(0);
							func_995(0, iVar18);
							func_996(iVar18, 2);
							func_997(0);
							iVar19 = func_226(iVar18);
							func_998(&(Global_1914319->f_17042), iVar19);
							func_999(&(Global_1914319->f_17042), iVar18, iVar19);
						}
					}
					iVar20 = func_1000(iVar0);
					iVar21 = func_1001(iVar20);
					iVar22 = func_1002(&(Global_1914319->f_17042), iVar21);
					iVar23 = get_ped_index_from_entity_index(&(Global_1914319->f_17042.f_70[iVar22]));
					if (does_entity_exist(iVar23))
					{
					}
					func_1003(iVar23, 0, 0);
					func_996(0, 1);
					func_1004(0);
					Var24 = { func_1005(0) };
					Var26 = { func_1006() };
					func_1007(iVar23, &Var24, &Var26, 0);
					func_1008(0, Var2);
					func_1009(0);
					func_1010(0, 1);
					func_1011(0, 1);
					func_1012(0);
					func_846(-1662430395, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
					Global_1914319->f_17042.f_70[iVar22] = 0;
					uParam1->f_20 = 0;
				}
			}
			func_1013(uParam0);
			return 1;
		}
	}
	func_991(uParam0, 128);
	return 1;
}

int func_517(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 2)
	{
		iVar0 = uParam1->f_7;
		if (!func_278(iVar0, 0))
		{
			return 0;
		}
		if (!func_1014(iVar0))
		{
			return 0;
		}
		iVar2 = uParam1->f_1;
		iVar1 = iVar2;
		if (iVar1 == -1 || iVar1 >= 5)
		{
			return 0;
		}
		uParam1->f_17 = iVar1;
		uParam1->f_18 = iVar1;
		uParam1->f_19 = 0;
		if (func_910(iVar1))
		{
			fVar3 = func_1015(iVar0, func_226(iVar1));
			func_1016(uParam0, iVar0, 1, round(fVar3));
			if (func_1017(iVar1))
			{
				func_842(-1662430395, 1, 1, -142743235, 0);
			}
			iVar4 = func_226(iVar1);
			if (does_entity_exist(iVar4))
			{
				if (iVar4 == _get_saddle_horse_for_player(get_player_index()))
				{
					func_1018(&uVar7);
					func_1007(iVar4, &uVar5, &uVar7, 0);
					uParam1->f_19 = 1;
					func_1019(&(Global_1914319->f_17042));
				}
			}
			if (iVar1 == 0 && does_entity_exist(uParam0->f_2012))
			{
				remove_entity_from_audio_mix_group(uParam0->f_2012, 0f);
				delete_entity(&(uParam0->f_2012));
			}
			func_1020(iVar1);
			func_1012(iVar1);
			func_997(iVar1);
			return 1;
		}
	}
	return 0;
}

int func_518(var uParam0, var uParam1)
{
	iVar1 = uParam1->f_7;
	if (uParam1->f_10 != 1)
	{
		return 1;
	}
	bVar2 = false;
	if (func_834(uParam0, iVar1, 1394581936))
	{
		if (func_1021(iVar1))
		{
			iVar3 = func_444(7);
			if (iVar3 != -1)
			{
				if (func_1022(iVar1))
				{
					func_1023(iVar3, iVar1);
				}
				if (func_1024(iVar1))
				{
					func_1025(iVar3, iVar1);
				}
			}
		}
		else
		{
			func_1026(iVar1, 1);
		}
		bVar2 = true;
	}
	else
	{
		iVar4 = uParam0->f_3;
		if (func_928(func_927(uParam0)))
		{
			iVar4 = func_927(uParam0);
		}
		if (func_929(iVar1, iVar4, &Var5))
		{
			if (!Var5.f_4)
			{
				iVar11 = func_444(7);
				if (iVar11 != -1)
				{
					Var12 = { func_1005(iVar11) };
					Var14 = { func_1006() };
					iVar20 = func_339(iVar1);
					if (func_1027(iVar1))
					{
						iVar21 = func_1028(Var12, iVar20);
					}
					else if (func_1029(iVar1))
					{
						iVar21 = func_1030(Var14, iVar20);
					}
					if (iVar21 != iVar1)
					{
						bVar2 = func_930(uParam0, iVar1, -1, 1, 0);
					}
					else
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						if (func_1021(iVar1))
						{
							if (func_1024(iVar1))
							{
								func_1031(iVar11, iVar1, 1, 1);
							}
							if (func_1022(iVar1))
							{
								func_1032(iVar11, iVar1, 1, 1);
							}
						}
						else if (func_1033(iVar1, 1))
						{
							if (func_1034(iVar1, &iVar0))
							{
								func_1035(iVar0);
							}
						}
					}
				}
			}
		}
		else
		{
			bVar2 = false;
		}
	}
	if (bVar2)
	{
		iVar22 = func_1036(uParam0);
		func_1037(iVar22);
	}
	uParam1->f_9 = bVar2;
	if (bVar2)
	{
		if (func_1038(iVar1))
		{
			func_1039(uParam0, 8);
		}
		return 1;
	}
	return 0;
}

int func_519(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_7;
	uParam1->f_16 = 0;
	if (func_1040() == 3)
	{
		iVar3 = uParam1->f_1;
		iVar1 = iVar3;
		if (iVar1 == -1 || iVar1 >= 5)
		{
			return 0;
		}
		if (func_910(iVar1))
		{
			if (iVar1 == 0 || iVar1 == 1)
			{
				iVar2 = func_986();
				if (iVar2 != -1)
				{
					iVar4 = func_226(iVar1);
					if (!does_entity_exist(iVar4))
					{
						return 0;
					}
					if (func_1041(iVar2))
					{
						if (!func_910(iVar2))
						{
							func_992(iVar1);
						}
					}
					func_995(iVar1, iVar2);
					func_996(iVar2, 2);
					func_997(iVar1);
					uParam1->f_16 = 1;
					uParam1->f_17 = iVar1;
					uParam1->f_18 = iVar2;
					if (iVar1 == 0 && does_entity_exist(uParam0->f_2012))
					{
						remove_entity_from_audio_mix_group(uParam0->f_2012, 0f);
						delete_entity(&(uParam0->f_2012));
					}
					func_999(&(Global_1914319->f_17042), iVar2, iVar4);
					iVar5 = func_1042(iVar2);
					func_592(uParam0, iVar5, 0);
					func_1013(uParam0);
				}
				else
				{
					func_987("SHOP_HORSE_HELP_NO_OPEN_STABLED_SLOTS", "", 0, 0, 4000, 0, 0, 0, 0, 1, 1);
				}
			}
			else
			{
				iVar6 = func_1043();
				if (iVar1 == -1 || iVar1 >= 7)
				{
					return 0;
				}
				if (!func_1041(iVar1) && iVar1 != 1)
				{
					return 0;
				}
				if (func_1041(iVar1))
				{
					if (func_911(iVar1) != 2)
					{
						return 0;
					}
				}
				iVar7 = func_226(iVar1);
				if (!does_entity_exist(iVar7))
				{
				}
				iVar8 = func_226(iVar6);
				bVar9 = false;
				if (func_911(0) == 1)
				{
					if (is_ped_in_writhe(iVar8))
					{
						func_993(iVar8);
						func_1044(0, iVar1);
						_set_entity_health(iVar8, 0, 0);
						func_997(0);
						func_995(iVar1, 0);
						func_996(0, 1);
					}
					else
					{
						func_1044(0, iVar1);
						func_995(0, iVar1);
						func_996(0, 1);
						if (iVar1 == 1)
						{
							bVar9 = true;
							func_996(iVar1, 1);
						}
						else
						{
							func_996(iVar1, 2);
							func_999(&(Global_1914319->f_17042), iVar1, iVar8);
						}
					}
				}
				else
				{
					func_995(iVar1, 0);
					func_996(0, 1);
					func_1004(0);
					func_997(iVar1);
				}
				func_1004(0);
				func_1045();
				set_this_script_can_remove_blips_created_by_any_script(true);
				func_994(0);
				if (bVar9)
				{
					func_994(1);
				}
				uParam1->f_16 = 2;
				uParam1->f_17 = iVar1;
				uParam1->f_18 = 0;
				func_592(uParam0, 0, 0);
				func_985(uParam0, 1);
			}
		}
		else if (!func_278(iVar0, 0))
		{
		}
	}
	else if (func_1040() == 2)
	{
		if (!func_278(iVar0, 0))
		{
			return 0;
		}
		if (!func_1014(iVar0))
		{
			return 0;
		}
		iVar11 = uParam1->f_1;
		iVar10 = iVar11;
		if (iVar10 == -1 || iVar10 >= 5)
		{
			return 0;
		}
		if (func_910(iVar10))
		{
			uParam1->f_16 = 3;
			uParam1->f_17 = iVar10;
			uParam1->f_18 = iVar10;
			uParam1->f_19 = 0;
			fVar12 = func_1015(iVar0, func_226(iVar10));
			func_1016(uParam0, iVar0, 1, round(fVar12));
			if (func_1017(iVar10))
			{
				func_842(-1662430395, 1, 1, -142743235, 0);
			}
			iVar13 = func_226(iVar10);
			if (does_entity_exist(iVar13))
			{
				if (iVar13 == _get_saddle_horse_for_player(get_player_index()))
				{
					func_1018(&uVar16);
					func_1007(iVar13, &uVar14, &uVar16, 0);
					uParam1->f_19 = 1;
					func_1019(&(Global_1914319->f_17042));
				}
			}
			if (iVar10 == 0 && does_entity_exist(uParam0->f_2012))
			{
				remove_entity_from_audio_mix_group(uParam0->f_2012, 0f);
				delete_entity(&(uParam0->f_2012));
			}
			if (func_910(0) && iVar10 != 0)
			{
				func_1044(iVar10, 0);
			}
			else
			{
				func_992(iVar10);
			}
			func_1020(iVar10);
			func_1012(iVar10);
			func_997(iVar10);
			Global_20710.f_2406 = Global_20710.f_2405;
			Global_20710.f_2405 = Global_20710.f_2404;
			Global_20710.f_2404 = get_cloud_time_as_int();
		}
		else
		{
			return 0;
		}
	}
	else if (func_1040() == 1)
	{
	}
	return 1;
}

int func_520(var uParam0, var uParam1)
{
	if (func_1040() == 1)
	{
		if (func_278(uParam1->f_7, 0))
		{
			if (!func_244(uParam0, -1931652360, 1, -1, 1, 0, 0, 0))
			{
			}
			func_913(uParam0, &(uParam1->f_3));
			func_1046(uParam1->f_7);
		}
		else if (!func_244(uParam0, -223810523, 1, -1, 1, 0, 0, 0))
		{
		}
	}
	else if (func_1040() == 3)
	{
		if (func_278(uParam1->f_7, 0))
		{
			if (!func_912(&(uParam1->f_3), 0))
			{
				Var0 = { func_1047(uParam0) };
				if (!func_1048(&(uParam1->f_3), &Var0, 0))
				{
					return 0;
				}
				func_1046(uParam1->f_7);
				iVar4 = func_1036(uParam0);
				if (does_entity_exist(iVar4))
				{
					func_1049(iVar4, uParam1->f_7, 1);
				}
			}
		}
	}
	else if (func_1040() == 2)
	{
		if (!func_912(&(uParam1->f_3), 0))
		{
			if (!func_1050(&(uParam0->f_1999), uParam1->f_3))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_521(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23)
{
	return 1;
}

int func_522(var uParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23)
{
	iVar0 = func_1051();
	iVar1 = func_594();
	if (Param1.f_10 == 1)
	{
		iVar2 = -1;
		iVar2 = _databinding_read_data_int_from_parent(iVar1, func_1052());
		iVar3 = -1;
		iVar3 = _databinding_read_data_int_from_parent(iVar1, func_1053());
		if (iVar3 != -1 && iVar2 != -1)
		{
			if (func_1054(uParam0, iVar2, iVar3, -1, 1, 1))
			{
				func_1055(uParam0, iVar0);
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	else if (Param1.f_10 == 3)
	{
		if (_is_weapon_two_handed(Param1.f_7))
		{
			iVar4 = 10;
		}
		else if (_is_weapon_one_handed(Param1.f_7))
		{
			iVar4 = 2;
		}
		else if (_is_weapon_melee(Param1.f_7))
		{
			iVar4 = 4;
		}
		iVar5 = func_961(uParam0);
		if (!func_1056(Param1.f_7, iVar4, iVar5))
		{
		}
		func_636(uParam0, 3, 801835943, 0, 1, 0);
		return 1;
	}
	else if (Param1.f_10 == 2)
	{
		if (_is_weapon_two_handed(Param1.f_7))
		{
			iVar6 = 9;
		}
		else if (_is_weapon_one_handed(Param1.f_7))
		{
			iVar6 = 3;
		}
		else if (_is_weapon_melee(Param1.f_7))
		{
			iVar6 = 4;
		}
		iVar7 = func_961(uParam0);
		Var8 = { func_669(Param1.f_7, func_668(0), iVar7, 0) };
		if ((_is_weapon_one_handed(Param1.f_7) && _0x6929e22158e52265(Global_35, iVar6, &uVar12)) && func_670(&Var8, &uVar12))
		{
			set_current_ped_weapon(Global_35, -1569615261, true, 3, false, false);
		}
		else
		{
			func_1056(Param1.f_7, iVar6, iVar7);
		}
		func_636(uParam0, 2, 621498879, 0, 1, 0);
		return 1;
	}
	return 0;
}

int func_523(var uParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23)
{
	if (Param1.f_10 == 1)
	{
		iVar0 = func_594();
		iVar1 = -1;
		iVar1 = _databinding_read_data_int_from_parent(iVar0, func_1052());
		iVar2 = -1;
		iVar2 = _databinding_read_data_int_from_parent(iVar0, func_1053());
		if (iVar2 != -1)
		{
			bVar3 = !func_579(uParam0);
			if (iVar1 != func_299(uParam0))
			{
				if (func_1054(uParam0, iVar1, iVar2, -1, 1, bVar3))
				{
					return 1;
				}
			}
			else if (func_244(uParam0, iVar2, 1, -1, bVar3, 1, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_524(var uParam0, struct<23> Param1)
{
	uVar0 = Param1.f_14;
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = -1;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_7 = -1;
	Var1.f_8 = -1;
	Var1.f_8 = uVar0;
	iVar11 = 0;
	iVar12 = 0;
	iVar12 = _item_database_create_item_collection(&Var1, &iVar11, 1);
	if (iVar12 == -1)
	{
		return 0;
	}
	iVar14 = 0;
	Var15.f_14 = -1;
	Var15.f_15 = -1;
	iVar42 = _databinding_get_array_count(uParam0->f_2031.f_58);
	iVar14 = 0;
	while (iVar14 < iVar11)
	{
		iVar13 = func_919(iVar14, iVar12);
		if (func_278(iVar13, 0))
		{
			if (func_920(&(uParam0->f_2031), iVar13, &uVar38) || _item_database_get_item_tag_type(iVar13, uVar0) == -2089472884)
			{
				if (_item_database_get_item_tag_type(iVar13, uVar0) == -2089472884)
				{
					bVar44 = true;
					iVar43 = 0;
					while (iVar43 < iVar42)
					{
						iVar41 = _databinding_get_item_context_by_index(uParam0->f_2031.f_58, iVar43);
						if (_databinding_is_data_id_valid(iVar41))
						{
							iVar39 = _databinding_read_data_hash_string_from_parent(iVar41, func_683());
							iVar40 = iVar39;
							if (func_612(iVar40, 1954943838) && func_1057(iVar13, iVar40))
							{
								bVar44 = false;
							}
							else
							{
								iVar43++;
							}
							if (bVar44)
							{
							}
							else
							{
								Var15 = { Param1 };
								Var15.f_7 = iVar13;
								Var15 = func_896(uParam0, iVar13);
								Stack.Push(uParam0);
								Stack.Push(&Var15);
								Call_Loc(uParam0->f_2031.f_124);
								if (StackVal)
								{
								}
								if (uParam0->f_2031.f_115)
								{
									Stack.Push(uParam0);
									Stack.Push(&Var15);
									Call_Loc(uParam0->f_2031.f_116);
									if (!StackVal)
									{
									}
								}
							}
							iVar14++;
							_0xcbb7b6edfa933ade(iVar12);
							return 1;
						}
					}
				}
			}
		}
	}
}

int func_525(var uParam0, var uParam1)
{
	return 1;
}

int func_526(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 1)
	{
		func_845(uParam0);
		if (func_339(uParam1->f_7) == -2061583405 || func_339(uParam1->f_7) == -525676072)
		{
			func_1058();
		}
		iVar0 = func_263(uParam0);
		if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
		{
			return 0;
		}
		func_662(1, 1, 0);
		func_848(166243423);
		func_127(iVar0, 1);
		func_959(iVar0);
	}
	return 1;
}

int func_527(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 1)
	{
		func_845(uParam0);
		func_662(1, 1, 0);
		func_848(166243423);
	}
	return 1;
}

int func_528(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 1)
	{
		if (func_634(uParam0, uParam1->f_7, 761079318, -1))
		{
			iVar0 = func_955(uParam1->f_7);
		}
		else
		{
			iVar0 = uParam1->f_7;
		}
		iVar1 = func_956(iVar0);
		iVar2 = func_263(uParam0);
		if (!does_entity_exist(iVar2) || is_entity_dead(iVar2))
		{
			return 0;
		}
		func_845(uParam0);
		func_957(iVar2, iVar0, 0, iVar1, 1, 1, 1, 0, 1, 0);
		func_848(166243423);
	}
	return 1;
}

int func_529(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 1)
	{
		return func_1059(uParam0, uParam1->f_7);
	}
	return 1;
}

int func_530(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 1)
	{
		iVar0 = uParam1->f_1;
		if (!func_717(iVar0))
		{
			return 0;
		}
		if (func_924(iVar0) <= 0)
		{
			return 0;
		}
		iVar1 = func_924(iVar0);
		if (func_360(1) >= iVar1)
		{
			func_1060(iVar0);
			func_1061(iVar0);
			func_970(iVar1, 0, 0, 1, 1);
			uParam0->f_2319.f_20 = iVar1;
			uParam0->f_2319.f_11 = 1;
			uParam0->f_2319.f_19 = iVar0;
		}
	}
	else if (uParam1->f_10 == 2)
	{
		iVar2 = 0;
		iVar5 = 0;
		while (iVar5 < 130)
		{
			iVar3 = -1;
			if (!func_111(iVar5))
			{
			}
			else if (!func_803(iVar5))
			{
			}
			else
			{
				iVar3 = func_1063(func_1062(iVar5, 1, 1));
				if (!func_717(iVar3))
				{
				}
				else if (iVar3 == 5)
				{
				}
				else if (func_1064(iVar4, iVar3))
				{
				}
				else
				{
					func_1065(&iVar4, iVar3);
					iVar2 = (iVar2 + func_924(iVar3));
				}
			}
			iVar5++;
		}
		if (func_360(1) >= iVar2)
		{
			func_1066();
			func_1067();
			func_970(iVar2, 0, 0, 1, 1);
			uParam0->f_2319.f_20 = iVar2;
			uParam0->f_2319.f_11 = 1;
			uParam0->f_2319.f_19 = 6;
		}
	}
	return 1;
}

int func_531(var uParam0, var uParam1)
{
	switch (uParam1->f_10)
	{
		case 1:
			iVar1 = uParam1->f_1;
			if (func_1068(iVar1) && func_1069(iVar1, -1))
			{
				func_1070(iVar1, 0);
				if (func_1071(5, &uVar0))
				{
					func_1072(iVar1, uVar0);
				}
			}
			func_592(uParam0, -1, 1);
			return 1;
		case 2:
			iVar2 = 0;
			while (iVar2 < 180)
			{
				if (func_1068(&(Global_40.f_9910[iVar2])) && func_1069(&(Global_40.f_9910[iVar2]), -1))
				{
					func_1070(&(Global_40.f_9910[iVar2]), 0);
					if (func_1071(5, &uVar0))
					{
						func_1072(&(Global_40.f_9910[iVar2]), uVar0);
					}
				}
				iVar2++;
			}
			func_592(uParam0, -1, 1);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_532(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 1)
	{
		return func_1073(uParam0, *uParam1);
	}
	return 1;
}

bool func_533(int iParam0)
{
	return _item_database_is_shop_layout_key_valid(iParam0);
}

bool func_534(var uParam0, int iParam1, int iParam2)
{
	if (!func_533(iParam1))
	{
		return false;
	}
	vVar8.f_1 = -1;
	vVar8.f_2 = -1;
	if (_item_database_get_shop_layout_page_info_by_key(iParam1, iParam2, &Var4))
	{
		iVar0 = 0;
		while (iVar0 < Var4.f_3)
		{
			if (_item_database_get_shop_layout_page_item_key(iParam1, Var4, iVar0, &uVar3, &uVar1, &uVar2))
			{
				vVar8.x = uVar3;
				vVar8.f_1 = uVar2;
				vVar8.f_2 = uVar1;
				if (func_1074(uParam0, vVar8) && !func_820(vVar8.x))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

bool func_535(var uParam0, int iParam1, int iParam2)
{
	if (!func_533(iParam1))
	{
		return false;
	}
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	if (_item_database_get_shop_layout_page_info_by_key(iParam1, iParam2, &Var7))
	{
		iVar0 = 0;
		while (iVar0 < Var7.f_3)
		{
			if (_item_database_get_shop_layout_page_item_key(iParam1, Var7, iVar0, &iVar3, &uVar1, &iVar2))
			{
				vVar4.x = iVar3;
				vVar4.f_1 = iVar2;
				vVar4.f_2 = uVar1;
				if (func_1074(uParam0, vVar4))
				{
					if (func_1075(uParam0, iVar3))
					{
						return true;
					}
					if (func_533(iVar2))
					{
						Stack.Push(uParam0);
						Stack.Push(iVar2);
						Stack.Push(uVar1);
						Call_Loc(uParam0->f_2031.f_126);
						if (StackVal)
						{
							return true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_536(int iParam0)
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
	iVar0 = func_1076(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	Global_1946804->f_2535.f_2 = (Global_1946804->f_2535.f_2 - (Global_1946804->f_2535.f_2 && Global_1946804->f_2535.f_43[iVar0]->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_1077(iVar1, Global_1946804->f_2535.f_43[iVar0]->f_1))
		{
			func_1078(iVar1, Global_1946804->f_2535.f_43[iVar0]->f_1);
		}
		iVar1++;
	}
	Global_1946804->f_2535.f_1 = (Global_1946804->f_2535.f_1 - 1);
	*Global_1946804->f_2535.f_43[iVar0] = { *Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1] };
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1]->f_1 = 0;
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1] = 0;
	return true;
}

bool func_537(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1079(iVar0, 1);
		if (!func_1080(iVar2, 2))
		{
		}
		else if (&Global_1946804->f_2535.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0 && func_660(iVar0) == -1)
			{
				func_661(iVar0, 0);
				func_1081(Global_1946804->f_2589.f_2[(Global_1946804->f_2589 - 1)], 2, 6);
			}
			func_1082(iVar2, 3, 6);
			Global_1946804->f_2456[iVar0] = 0;
			Global_1946804->f_2456[iVar0]->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

bool func_538(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_539(int iParam0)
{
	func_1083(iParam0, 8, 6);
}

var func_540(var uParam0)
{
	return uParam0->f_12.f_1;
}

void func_541(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iVar0 != 0)
		{
			if (iVar0 == 6 && !bParam1)
			{
			}
			else
			{
				func_274(uParam0, iVar0);
			}
		}
		iVar0++;
	}
}

void func_542(var uParam0, char* sParam1)
{
	_databinding_add_data_string(uParam0->f_2031.f_52, "ItemTooltip", sParam1);
}

void func_543(var uParam0, bool bParam1)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2031.f_52, "ItemDescription");
	_databinding_add_data_bool(iVar0, "Visible", bParam1);
}

void func_544(var uParam0)
{
	_databinding_add_data_bool(uParam0->f_2031.f_54, "modifiedPriceVisible", false);
	_databinding_add_data_bool(uParam0->f_2031.f_54, "visible", false);
	_databinding_add_data_bool(uParam0->f_2031.f_54, "rightPriceTextVisible", false);
	_databinding_add_data_int(uParam0->f_2031.f_54, "purchasePrice", 0);
	_databinding_add_data_int(uParam0->f_2031.f_54, "purchaseModifiedPrice", 0);
	_databinding_add_data_string(uParam0->f_2031.f_54, "purchaseLabel", "");
}

void func_545(var uParam0, bool bParam1)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2031.f_52, "ItemInfo1");
	_databinding_add_data_bool(iVar0, "Visible", bParam1);
}

void func_546(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2031.f_52, "ItemInfo1");
	_databinding_add_data_bool(iVar0, "IconVisible", bParam1);
	_databinding_add_data_hash(iVar0, "TextureDictionary", iParam2);
	_databinding_add_data_hash(iVar0, "Texture", iParam3);
}

void func_547(var uParam0, bool bParam1)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2031.f_52, "ItemInfo2");
	_databinding_add_data_bool(iVar0, "Visible", bParam1);
}

void func_548(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2031.f_52, "ItemInfo2");
	_databinding_add_data_bool(iVar0, "IconVisible", bParam1);
	_databinding_add_data_hash(iVar0, "TextureDictionary", iParam2);
	_databinding_add_data_hash(iVar0, "Texture", iParam3);
}

void func_549(var uParam0)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2031.f_52, "ItemWeather");
	_databinding_add_data_bool(iVar0, "Visible", false);
	iVar1 = _databinding_add_data_container(uParam0->f_2031.f_52, "OutfitWeather");
	_databinding_add_data_bool(iVar1, "Visible", false);
}

void func_550(var uParam0, bool bParam1)
{
	_databinding_add_data_bool(uParam0->f_2031.f_52, "SaddleStatsVisible", bParam1);
}

void func_551(var uParam0, bool bParam1)
{
	_databinding_add_data_bool(uParam0->f_2031.f_52, "StirrupStatsVisible", bParam1);
}

char* func_552()
{
	return "uiPaletteVisible";
}

int func_553(var uParam0, bool bParam1)
{
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	iVar0 = 0;
	if (!func_1084(uParam0, func_261(uParam0), &iVar0))
	{
	}
	if (!func_1085(uParam0, iVar0))
	{
	}
	return 1;
}

int func_554(var uParam0, bool bParam1)
{
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	iVar0 = 0;
	if (!func_1084(uParam0, func_261(uParam0), &iVar0))
	{
	}
	if (!func_1085(uParam0, iVar0))
	{
	}
	func_667(uParam0, func_960(uParam0), 0);
	return 1;
}

int func_555(var uParam0, bool bParam1)
{
	if (!func_605(uParam0))
	{
	}
	iVar0 = 0;
	if (!func_1086(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!func_1085(uParam0, iVar0))
	{
	}
	return 1;
}

int func_556(var uParam0, bool bParam1)
{
	if (!func_605(uParam0))
	{
	}
	iVar0 = 0;
	if (!func_1086(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!func_1085(uParam0, iVar0))
	{
	}
	return 1;
}

int func_557(var uParam0, bool bParam1)
{
	if (!func_605(uParam0))
	{
	}
	iVar0 = 0;
	if (!func_1086(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!func_1085(uParam0, iVar0))
	{
	}
	if (func_1087(uParam0))
	{
		iVar1 = func_958(uParam0);
		func_1088(uParam0, iVar1, 0);
	}
	else
	{
		func_549(uParam0);
	}
	return 1;
}

int func_558(var uParam0, bool bParam1)
{
	if (!func_605(uParam0))
	{
	}
	iVar0 = 0;
	if (!func_1086(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!func_1085(uParam0, iVar0))
	{
	}
	func_831(uParam0, 0);
	return 1;
}

int func_559(var uParam0, bool bParam1)
{
	if (!func_605(uParam0))
	{
	}
	iVar0 = 0;
	if (!func_1086(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!func_1085(uParam0, iVar0))
	{
	}
	iVar1 = func_619(uParam0);
	iVar2 = func_620(uParam0);
	func_1089(uParam0, iVar2, iVar1, iVar1, 0, 1);
	if (uParam0->f_2 == 25)
	{
		_databinding_add_data_bool(uParam0->f_2031.f_50, "ShavingSplitterVisible", false);
	}
	return 1;
}

int func_560(var uParam0, bool bParam1)
{
	if (!func_605(uParam0))
	{
	}
	iVar0 = 0;
	if (!func_1086(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!func_1085(uParam0, iVar0))
	{
	}
	if (_databinding_is_data_id_valid(uParam0->f_2031.f_68))
	{
		_0x75cfac49301e134f(uParam0->f_2031.f_68, 0, 0);
	}
	else
	{
		uParam0->f_2031.f_68 = _0x9d21b185abc2dbc4(uParam0->f_2031.f_50, "Effects", 0, 0);
	}
	func_831(uParam0, 0);
	return 1;
}

int func_561(var uParam0, bool bParam1)
{
	if (!func_605(uParam0))
	{
	}
	iVar0 = 0;
	if (!func_1086(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!func_1085(uParam0, iVar0))
	{
	}
	iVar1 = func_960(uParam0);
	if (func_278(iVar1, 0))
	{
		func_667(uParam0, iVar1, 0);
	}
	return 1;
}

int func_562(var uParam0, bool bParam1)
{
	if (!func_605(uParam0))
	{
	}
	iVar0 = 0;
	if (!func_1086(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!func_1085(uParam0, iVar0))
	{
	}
	if (_databinding_is_data_id_valid(uParam0->f_2031.f_68))
	{
		_0x75cfac49301e134f(uParam0->f_2031.f_68, 0, 0);
	}
	else
	{
		uParam0->f_2031.f_68 = _0x9d21b185abc2dbc4(uParam0->f_2031.f_50, "Effects", 0, 0);
	}
	return 1;
}

int func_563(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	func_291(uParam0);
	iVar0 = func_1090(&(uParam0->f_2031));
	if (!func_1085(uParam0, iVar0))
	{
	}
	_databinding_add_data_bool(uParam0->f_2031.f_50, "ItemPalettePriceVisible", false);
	return 1;
}

int func_564(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	func_291(uParam0);
	iVar0 = func_1090(&(uParam0->f_2031));
	if (!func_1085(uParam0, iVar0))
	{
	}
	_databinding_add_data_bool(uParam0->f_2031.f_50, "ItemPalettePriceVisible", true);
	return 1;
}

int func_565(var uParam0, bool bParam1)
{
	if (!func_605(uParam0))
	{
	}
	iVar0 = 0;
	if (!func_1086(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!func_1085(uParam0, iVar0))
	{
	}
	if (!_databinding_is_data_id_valid(uParam0->f_2031.f_64))
	{
		uParam0->f_2031.f_64 = _databinding_add_ui_item_list(uParam0->f_2031.f_50, "ItemRecipeTextList");
	}
	else
	{
		_databinding_clear_binding_array(uParam0->f_2031.f_64);
	}
	if (!_databinding_is_data_id_valid(uParam0->f_2031.f_65))
	{
		uParam0->f_2031.f_65 = _databinding_add_ui_item_list(uParam0->f_2031.f_50, "ItemRecipeImageList");
	}
	else
	{
		_databinding_clear_binding_array(uParam0->f_2031.f_65);
	}
	func_1091(uParam0, 0);
	func_1092(uParam0, 0);
	func_1093(uParam0, 1);
	return 1;
}

int func_566(var uParam0, bool bParam1)
{
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	if (!func_1085(uParam0, func_1094()))
	{
	}
	if (_databinding_is_data_id_valid(uParam0->f_2031.f_68))
	{
		_0x75cfac49301e134f(uParam0->f_2031.f_68, 0, 0);
	}
	else
	{
		uParam0->f_2031.f_68 = _0x9d21b185abc2dbc4(uParam0->f_2031.f_50, "Effects", 0, 0);
	}
	func_1095(uParam0, 0);
	return 1;
}

int func_567(var uParam0, bool bParam1)
{
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	iVar0 = 0;
	if (func_720() != 0 || (func_720() == 0 && func_721() == 5))
	{
		iVar0 = 1;
	}
	func_1085(uParam0, (4 + iVar0));
	if (!uParam0->f_2031.f_80)
	{
		func_1092(uParam0, 0);
	}
	return 1;
}

int func_568(var uParam0, bool bParam1)
{
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	func_1085(uParam0, 10);
	return 1;
}

int func_569(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_605(uParam0))
		{
		}
	}
	iVar0 = 0;
	if (!func_1086(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!func_1085(uParam0, iVar0))
	{
	}
	return 1;
}

int func_570(var uParam0, bool bParam1)
{
	func_1096(2);
	func_1096(2048);
	return 1;
}

int func_571(var uParam0, bool bParam1)
{
	func_1096(2);
	func_1096(2048);
	return 1;
}

int func_572(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	iVar0 = 0;
	iVar1 = func_1097(uParam0->f_3);
	iVar2 = func_1098();
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (!func_1099(iVar3, &iVar4))
		{
		}
		else if (!func_1100(iVar1, iVar4))
		{
		}
		else if (iVar4 == iVar1)
		{
		}
		else
		{
			iVar0++;
		}
		iVar3++;
	}
	if (!func_1085(uParam0, iVar0))
	{
	}
	func_831(uParam0, 0);
	func_636(uParam0, 1, -2494464, 1, 1, 0);
	return 1;
}

int func_573(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	iVar0 = 0;
	iVar3 = 0;
	while (iVar3 < 130)
	{
		iVar1 = -1;
		if (!func_111(iVar3))
		{
		}
		else if (!func_803(iVar3))
		{
		}
		else
		{
			iVar1 = func_1063(func_1062(iVar3, 1, 1));
			if (!func_717(iVar1))
			{
			}
			else if (iVar1 == 5)
			{
			}
			else if (func_1064(iVar2, iVar1))
			{
			}
			else
			{
				func_1065(&iVar2, iVar1);
				iVar0++;
			}
		}
		iVar3++;
	}
	if (!func_1085(uParam0, iVar0))
	{
	}
	func_831(uParam0, 0);
	func_636(uParam0, 1, -1217561127, 0, 1, 0);
	func_636(uParam0, 2, -1789759600, 0, 1, 1);
	return 1;
}

int func_574(var uParam0, bool bParam1)
{
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	iVar0 = 0;
	if (func_125() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 180)
		{
			if (func_1068(&(Global_40.f_9910[iVar1])) && func_1069(&(Global_40.f_9910[iVar1]), -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (iVar0 == 0)
	{
		func_468();
		return 1;
	}
	if (!func_1085(uParam0, iVar0))
	{
	}
	return 1;
}

int func_575(var uParam0, bool bParam1)
{
	func_591(uParam0, func_261(uParam0));
	if (!func_1085(uParam0, 3))
	{
	}
	return 1;
}

int func_576(var uParam0, bool bParam1)
{
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	iVar0 = 0;
	if (!func_1084(uParam0, func_261(uParam0), &iVar0))
	{
	}
	if (!func_1085(uParam0, iVar0))
	{
	}
	func_1095(uParam0, 0);
	return 1;
}

bool func_577(var uParam0)
{
	iVar0 = func_1101(uParam0);
	if (iVar0 > 0)
	{
		if (_item_database_get_shop_layout_menu_info_by_index(*uParam0, uParam0->f_12, 0, &Var1))
		{
			uParam0->f_31[uParam0->f_42] = uParam0->f_12;
			uParam0->f_20[uParam0->f_42] = uParam0->f_19;
			uParam0->f_42++;
			uParam0->f_12 = { Var1 };
			uParam0->f_19 = 0;
			return true;
		}
	}
	return false;
}

bool func_578(int iParam0, var uParam1)
{
	iVar0 = func_1101(uParam1);
	if (iVar0 > 0)
	{
		if (iParam0 >= 0 && iParam0 < iVar0)
		{
			if (_item_database_get_shop_layout_menu_info_by_index(*uParam1, func_583(uParam1), iParam0, &Var1))
			{
				uParam1->f_19 = iParam0;
				uParam1->f_12 = { Var1 };
				return true;
			}
		}
	}
	return false;
}

bool func_579(var uParam0)
{
	return uParam0->f_2031.f_99;
}

bool func_580(var uParam0)
{
	return uParam0->f_2031.f_100;
}

void func_581(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_2031.f_60))
	{
		uParam0->f_2031.f_60 = _databinding_add_ui_item_list_by_hash(uParam0->f_2031.f_50, 924730110);
	}
	else
	{
		_databinding_clear_binding_array(uParam0->f_2031.f_60);
	}
	uParam0->f_2031.f_73 = 0;
	func_643(uParam0, 0);
	if (_databinding_is_data_id_valid(uParam0->f_2031.f_61))
	{
		_databinding_remove_data_entry(uParam0->f_2031.f_61);
	}
	uParam0->f_2031.f_61 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_50, -248239712);
}

void func_582()
{
	Global_1914319->f_16855.f_3.f_8 = 0;
	Global_1914319->f_16855.f_3.f_9 = 0;
	Global_1914319->f_16855.f_3.f_10 = uVar0;
	Global_1914319->f_16855.f_3.f_11 = 0;
	Global_1914319->f_16855.f_3.f_12 = 0;
	Global_1914319->f_16855.f_3.f_13 = uVar0;
}

var func_583(var uParam0)
{
	if (uParam0->f_42 > 1)
	{
		if ((uParam0->f_42 - 1) >= 0)
		{
			return &(uParam0->f_31[(uParam0->f_42 - 1)]);
		}
	}
	return func_1102(uParam0);
}

bool func_584(var uParam0, var uParam1)
{
	if (uParam0->f_42 > 1)
	{
		if (_item_database_get_shop_layout_menu_info_by_id(*uParam0, func_583(uParam0), uParam1))
		{
			return true;
		}
	}
	else
	{
		*uParam1 = { uParam0->f_5 };
		return true;
	}
	return false;
}

bool func_585(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar0 = func_1090(&(uParam0->f_2031));
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_589(iVar1, &(uParam0->f_2031), &uVar3))
		{
			if (!func_1103(uParam0, iVar1))
			{
			}
			else
			{
				if (iVar2 == iParam1)
				{
					*iParam2 = iVar1;
					return true;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
	return false;
}

int func_586(int iParam0, var uParam1)
{
	if (!_item_database_is_shop_layout_key_valid(*uParam1))
	{
		return -1;
	}
	iVar0 = func_1090(uParam1);
	if (iParam0 < 0 || iParam0 >= iVar0)
	{
		return -1;
	}
	iVar1 = -1;
	if (_item_database_get_shop_layout_menu_page_key(*uParam1, uParam1->f_12, iParam0, &iVar1))
	{
		return iVar1;
	}
	return -1;
}

int func_587(int iParam0)
{
	return iParam0;
}

int func_588(var uParam0)
{
	return _databinding_read_data_int_from_parent(uParam0->f_2031.f_50, func_1104());
}

bool func_589(int iParam0, var uParam1, int iParam2)
{
	iVar0 = -1;
	if (_item_database_get_shop_layout_menu_page_key(*uParam1, uParam1->f_12, iParam0, &iVar0))
	{
		if (_item_database_get_shop_layout_page_info_by_key(*uParam1, iVar0, iParam2))
		{
			return true;
		}
	}
	return false;
}

int func_590(var uParam0, int iParam1)
{
	if (func_1105(func_299(uParam0), iParam1, 1))
	{
		return 703647745;
	}
	if (func_1105(func_299(uParam0), iParam1, 16))
	{
		return 644372540;
	}
	if (func_1105(func_299(uParam0), iParam1, 32))
	{
		return 931007774;
	}
	return iParam1;
}

void func_591(var uParam0, int iParam1)
{
	if (uParam0->f_16 == 0)
	{
		iVar0 = iParam1;
	}
	else
	{
		iVar0 = uParam0->f_16;
	}
	if (_databinding_is_data_id_valid(uParam0->f_2031.f_57))
	{
		_databinding_write_data_hash_string(uParam0->f_2031.f_57, iVar0);
	}
	else
	{
		uParam0->f_2031.f_57 = _databinding_add_data_hash(uParam0->f_2031.f_50, "PageFilterCurrentPageLabel", iVar0);
	}
}

int func_592(var uParam0, int iParam1, bool bParam2)
{
	if (!_virtual_collection_exists(func_288()))
	{
		return 0;
	}
	_virtual_collection_reset(func_288());
	if (iParam1 >= 0)
	{
		uParam0->f_2031.f_102 = iParam1;
	}
	if (bParam2)
	{
		func_470(uParam0);
	}
	return 1;
}

int func_593()
{
	return Global_1914319->f_16855.f_3.f_1;
}

var func_594()
{
	return Global_1914319->f_16855.f_3.f_7;
}

int func_595()
{
	return Global_1914319->f_16855.f_3.f_5;
}

void func_596(int iParam0)
{
	Global_1914319->f_16855.f_3.f_7 = *iParam0;
}

char* func_597()
{
	return "uiItemEnum";
}

void func_598(int iParam0)
{
	Global_1914319->f_16855.f_3.f_6 = iParam0;
}

void func_599(var uParam0)
{
	if (Global_1914319->f_16855.f_3.f_1 == -729996127)
	{
		func_1106(uParam0->f_2031.f_72);
		iVar0 = _databinding_get_item_context_by_index(uParam0->f_2031.f_60, uParam0->f_2031.f_72);
		func_596(&iVar0);
		iVar1 = _databinding_read_data_int_from_parent(iVar0, func_597());
		iVar2 = iVar1;
		func_598(iVar2);
	}
}

void func_600(var uParam0, var uParam1)
{
	iVar0 = func_262(uParam0);
	iVar1 = func_1107(uParam0, func_595());
	uParam1->f_11 = iVar0;
	uParam1->f_12 = iVar1;
	uParam1->f_13 = func_261(uParam0);
	*uParam1 = func_1108();
	uParam1->f_7 = func_1051();
	uParam1->f_1 = func_1109();
	uParam1->f_2 = func_595();
	uParam1->f_8 = func_594();
	uParam1->f_10 = func_1040();
	uParam1->f_21 = func_618(uParam0);
	uParam1->f_22 = func_620(uParam0);
	uParam1->f_3 = { func_1110(&(uParam1->f_8)) };
	uParam1->f_14 = _databinding_read_data_int_from_parent(func_594(), func_1052());
	uParam1->f_15 = _databinding_read_data_int_from_parent(func_594(), func_1053());
}

bool func_601(var uParam0, int iParam1)
{
	return func_1111(&(uParam0->f_2031), iParam1);
}

int func_602(var uParam0)
{
	if (uParam0->f_2031.f_98)
	{
		iVar0 = func_1036(uParam0);
		if (does_entity_exist(iVar0))
		{
			if (_0xa0bc8faed8cfeb3c(iVar0))
			{
				func_1112(iVar0);
			}
			else
			{
				uParam0->f_2308 = iVar0;
			}
			uParam0->f_2031.f_98 = 0;
		}
	}
	return 1;
}

void func_603(var uParam0)
{
	iVar0 = func_277(0);
	iVar1 = func_607(0);
	iVar2 = func_616(0);
	if (func_278(iVar0, 0))
	{
		if (iVar2 != -348190488)
		{
			if (func_1113(iVar0))
			{
				bVar3 = true;
				if (uParam0->f_3 != 152)
				{
					if (func_826(iVar0) == -1037537535)
					{
						if (func_834(uParam0, iVar0, -853534656))
						{
							bVar3 = false;
						}
					}
				}
				if (bVar3)
				{
					func_279(iVar0);
					_databinding_add_data_bool(iVar1, func_1114(), false);
				}
			}
		}
	}
}

bool func_604(var uParam0, int iParam1, var uParam2)
{
	switch (iParam1)
	{
		case 1036144478:
			return true;
		case 2057502022:
			return true;
		case -996064024:
			return func_1115(uParam0, uParam2);
		case -706012851:
			return true;
		case -645366665:
			return true;
		case -252412307:
			return true;
		case 115613670:
			return true;
		case -659372875:
			return true;
		case 2144984909:
			return true;
		case -856183175:
			return func_1116(uParam0, uParam2);
		case 1705401718:
			return func_1117(uParam0, uParam2);
		case 310306577:
			return func_1118(uParam0, uParam2);
		case 1275816411:
			return true;
		case 178644271:
			return func_1119(uParam0, uParam2);
		case 1860655620:
			return func_1120(uParam0, uParam2);
		case 94016929:
			return func_1121(uParam0, uParam2);
		case 803749366:
			return true;
		case -2144266389:
			return true;
		case -1548684311:
			return func_1122(uParam0, uParam2);
		case 1965673387:
			return func_1123(uParam0, uParam2);
	}
	return true;
}

bool func_605(var uParam0)
{
	iVar0 = 0;
	uParam0->f_2031.f_75 = 0;
	iVar1 = 0;
	iVar1 = func_1090(&(uParam0->f_2031));
	if (iVar1 > 0)
	{
		iVar0 = 1;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_589(iVar2, &(uParam0->f_2031), &iVar3))
			{
				if (!func_1103(uParam0, iVar2))
				{
				}
				else
				{
					uParam0->f_2031.f_75++;
				}
			}
			iVar2++;
		}
		if (uParam0->f_2031.f_74 >= uParam0->f_2031.f_75)
		{
			uParam0->f_2031.f_74 = (uParam0->f_2031.f_75 - 1);
		}
		if (func_585(uParam0, uParam0->f_2031.f_74, &iVar2))
		{
			if (func_589(iVar2, &(uParam0->f_2031), &iVar3))
			{
				func_591(uParam0, func_590(uParam0, iVar3));
			}
		}
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	_databinding_add_data_int(uParam0->f_2031.f_50, "CategoryCount", uParam0->f_2031.f_75);
	uParam0->f_2031.f_56 = _databinding_add_data_int(uParam0->f_2031.f_50, func_1104(), 0);
	return iVar0;
}

void func_606(var uParam0)
{
	iVar0 = func_1051();
	iVar1 = func_1108();
	if (func_278(iVar0, 0))
	{
		if (iVar1 != -348190488)
		{
			if (func_1113(iVar0))
			{
				bVar2 = true;
				iVar3 = func_594();
				if (uParam0->f_3 != 152)
				{
					if (func_826(iVar0) == -1037537535)
					{
						if (func_834(uParam0, iVar0, -853534656))
						{
							bVar2 = false;
						}
					}
				}
				if (bVar2)
				{
					func_279(iVar0);
					_databinding_add_data_bool(iVar3, func_1114(), false);
				}
			}
		}
	}
}

int func_607(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_16855.f_3.f_16;
	}
	return Global_1914319->f_16855.f_3.f_10;
}

void func_608(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1914319->f_16855.f_3.f_20 = Global_1914319->f_16855.f_3.f_16;
		Global_1914319->f_16855.f_3.f_16 = *iParam0;
	}
	else
	{
		Global_1914319->f_16855.f_3.f_13 = Global_1914319->f_16855.f_3.f_10;
		Global_1914319->f_16855.f_3.f_10 = *iParam0;
	}
}

void func_609(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1914319->f_16855.f_3.f_19 = Global_1914319->f_16855.f_3.f_15;
		Global_1914319->f_16855.f_3.f_15 = iParam0;
	}
	else
	{
		Global_1914319->f_16855.f_3.f_12 = Global_1914319->f_16855.f_3.f_9;
		Global_1914319->f_16855.f_3.f_9 = iParam0;
	}
}

void func_610(var uParam0, var uParam1, bool bParam2)
{
	iVar0 = func_262(uParam1);
	uParam0->f_11 = iVar0;
	*uParam0 = func_616(bParam2);
	uParam0->f_12 = func_261(uParam1);
	uParam0->f_7 = func_622(bParam2);
	uParam0->f_8 = func_1124(bParam2);
	uParam0->f_9 = func_277(bParam2);
	uParam0->f_1 = func_652(bParam2);
	uParam0->f_2 = func_466(bParam2);
	uParam0->f_10 = func_607(bParam2);
	uParam0->f_13 = func_1125(bParam2);
	uParam0->f_14 = func_1126(bParam2);
	uParam0->f_15 = func_618(uParam1);
	uParam0->f_16 = func_620(uParam1);
	uParam0->f_3 = { func_1110(&(uParam0->f_10)) };
	uParam0->f_13 = _databinding_read_data_int_from_parent(func_607(bParam2), func_1052());
	uParam0->f_14 = _databinding_read_data_int_from_parent(func_607(bParam2), func_1053());
}

bool func_611(var uParam0, int iParam1, var uParam2)
{
	switch (iParam1)
	{
		case 1036144478:
			return func_1127(uParam0);
		case 2057502022:
			return func_1128(uParam0);
		case -706012851:
			return func_1129(uParam0);
		case -996064024:
			return func_1130(uParam0);
		case -645366665:
			return func_1131(uParam0);
		case -252412307:
			return func_1132(uParam0);
		case -659372875:
			return func_1133(uParam0);
		case 2144984909:
			return func_1134(uParam0);
		case 115613670:
			return func_1135(uParam0);
		case -856183175:
			return func_1136(uParam0);
		case 310306577:
		case 1705401718:
			return func_1137(uParam0, uParam2);
		case 178644271:
			return func_1138(uParam0);
		case 1275816411:
			return func_1139(uParam0);
		case 1860655620:
			return func_1140(uParam0, uParam2);
		case 94016929:
			return func_1141(uParam0);
		case 803749366:
			return true;
		case -2144266389:
			return func_1142(uParam0);
		case -1548684311:
			return func_1143(uParam0);
		case 23814986:
			return func_1144(uParam0);
		case 1965673387:
			return func_1145(uParam0, uParam2);
	}
	return true;
}

bool func_612(int iParam0, int iParam1)
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

bool func_613(var uParam0, var uParam1)
{
	if (*uParam1 == 1702073444)
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
		Var0.f_8 = uParam1->f_13;
		iVar10 = 0;
		iVar11 = 0;
		iVar11 = _item_database_create_item_collection(&Var0, &iVar10, 1);
		if (iVar11 == -1)
		{
			return false;
		}
		iVar13 = 0;
		iVar13 = 0;
		while (iVar13 < iVar10)
		{
			iVar12 = func_919(iVar13, iVar11);
			if (func_278(iVar12, 0))
			{
				if (func_1146(uParam0, iVar12))
				{
					_0xcbb7b6edfa933ade(iVar11);
					return true;
				}
			}
			iVar13++;
		}
		_0xcbb7b6edfa933ade(iVar11);
		if (func_1146(uParam0, uParam1->f_9))
		{
			return true;
		}
	}
	else if (func_1146(uParam0, uParam1->f_9))
	{
		return true;
	}
	iVar14 = func_1147(uParam0);
	bVar15 = func_360(1) >= iVar14;
	_databinding_add_data_bool(uParam0->f_2031.f_50, "ItemPalettePriceEnabled", bVar15);
	func_1148(uParam0, -2089226131, 0, iVar14, 0);
	func_637(uParam0, bVar15);
	return false;
}

bool func_614(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_9;
	func_1149(&iVar0);
	if (!func_278(iVar0, 0))
	{
		return false;
	}
	iVar1 = *uParam1;
	sVar2 = "";
	iVar3 = func_1150(iVar0, 0);
	iVar4 = func_1151(iVar0, 0);
	iVar16 = 0;
	bVar17 = func_1152(uParam0, iVar0);
	bVar18 = func_1153(func_902(iVar0, 0));
	if (func_262(uParam0) == 310306577)
	{
		bVar18 = func_1153(func_1147(uParam0));
	}
	switch (iVar1)
	{
		case -1048755899:
		case -384358143:
		case 2036169888:
			if (iVar3 == iVar4)
			{
				sVar2 = _create_var_string(130, "SHOP_TOOLTIP_ITEM_FULL_COUNT", iVar3, iVar4, _create_var_string(0, func_1154(iVar0)));
			}
			else if (!bVar18)
			{
				sVar2 = _get_label_text_by_hash(-1119897106);
			}
			else
			{
				sVar2 = _create_var_string(130, "SHOP_TOOLTIP_ITEM_COUNT", iVar3, iVar4, _create_var_string(0, func_1154(iVar0)));
			}
			if (bVar17)
			{
				sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED");
			}
			break;
		case -1502467280:
		case -1395073769:
		case -853534656:
		case -584027224:
		case 777890122:
		case 1394581936:
			if (!bVar18 && !func_834(uParam0, iVar0, iVar1))
			{
				sVar2 = _get_label_text_by_hash(-1119897106);
			}
			else if (func_634(uParam0, iVar0, iVar1, -1))
			{
				sVar2 = _get_label_text_by_hash(-835900986);
			}
			else if (((uParam0->f_2 == 18 && _item_database_fillout_item_info(iVar0, &vVar9)) && vVar9.z == -1037537535) && !func_908(Global_35, iVar0, &iVar16))
			{
				sVar2 = _get_label_text_by_hash(iVar16);
			}
			else if (func_834(uParam0, iVar0, iVar1))
			{
				sVar2 = _get_label_text_by_hash(1387842121);
			}
			else
			{
				sVar2 = _get_label_text_by_hash(-2064544801);
			}
			iVar19 = uParam0->f_3;
			if (func_928(func_927(uParam0)))
			{
				iVar19 = func_927(uParam0);
			}
			if (func_339(iVar0) == -999503751)
			{
				vVar20 = 3;
				if (func_1155(iVar0, iVar19, &vVar20))
				{
					iVar31 = 0;
					while (iVar31 < vVar20.f_10)
					{
						if (vVar20[iVar31]->f_2)
						{
							switch (&vVar20[iVar31])
							{
								case -253134813:
									sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED_HONOR");
									break;
							}
						}
						iVar31++;
					}
				}
			}
			if (uParam0->f_2 == 18)
			{
				if (func_1038(iVar0))
				{
					sVar2 = _get_label_text_by_hash(1317810363);
				}
			}
			break;
		case -349391286:
			if (uParam0->f_2 == 18)
			{
				sVar32 = "SHOP_TOOLTIP_CRAFT_NO_INGREDIENTS_TRP";
				sVar33 = "SHOP_TOOLTIP_CRAFT_ALL_INGREDIENTS_TRP";
			}
			else if (uParam0->f_2 == 19)
			{
				sVar32 = "SHOP_TOOLTIP_CRAFT_NO_INGREDIENTS_PRS";
				sVar33 = "SHOP_TOOLTIP_CRAFT_ALL_INGREDIENTS_PRS";
			}
			else
			{
				sVar32 = "SHOP_TOOLTIP_CRAFT_NO_INGREDIENTS";
				sVar33 = "SHOP_TOOLTIP_CRAFT_ALL_INGREDIENTS";
			}
			func_932(uParam0->f_2, &iVar34);
			if (func_931(iVar0, 0))
			{
				sVar2 = _get_label_text_by_hash(1387842121);
			}
			else if (bVar17)
			{
				if (uParam0->f_2 == 19)
				{
					sVar2 = _create_var_string(2, "SHOP_TOOLTIP_UNMENT_REQUIREMENTS_PRS");
				}
				else
				{
					sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED");
				}
			}
			else if (func_360(1) < func_939(iVar0, iVar34))
			{
				sVar2 = _get_label_text_by_hash(-1119897106);
			}
			else
			{
				iVar35 = func_933(uParam0->f_2);
				if (!func_935(iVar0, iVar34, 1, 1, iVar35, 1))
				{
					sVar2 = _create_var_string(2, sVar32);
				}
				else if (((uParam0->f_2 == 18 && _item_database_fillout_item_info(iVar0, &vVar9)) && vVar9.z == -1037537535) && !func_908(Global_35, iVar0, &iVar16))
				{
					sVar2 = _get_label_text_by_hash(iVar16);
				}
				else
				{
					sVar2 = _create_var_string(2, sVar33);
				}
			}
			break;
		case -760956867:
			iVar8 = 1;
			if (!func_638(iVar0, &iVar8))
			{
				switch (iVar8)
				{
					case 4:
						sVar2 = _get_label_text_by_hash(-1975076989);
						break;
					case 2:
						sVar2 = _get_label_text_by_hash(-541416869);
						break;
					case 3:
						sVar2 = _get_label_text_by_hash(1589147725);
						break;
				}
			}
			break;
		case 38807286:
			iVar8 = 1;
			if (!func_639(iVar0, &iVar8))
			{
				switch (iVar8)
				{
					case 4:
						sVar2 = _get_label_text_by_hash(-1975076989);
						break;
					case 2:
						sVar2 = _get_label_text_by_hash(-541416869);
						break;
					case 3:
						sVar2 = _get_label_text_by_hash(1589147725);
						break;
				}
			}
			break;
		case 2077448405:
			iVar5 = func_1156(-999503751, 1);
			iVar6 = func_1157(-999503751, 1);
			if (iVar5 >= iVar6)
			{
				sVar2 = _create_var_string(2, "WARDROBE_OUTFITS_ON_HORSE_FULL_TOOLTIP", iVar5, iVar6);
			}
			else
			{
				sVar2 = _create_var_string(2, "WARDROBE_OUTFITS_ON_HORSE_TOOLTIP", iVar5, iVar6);
			}
			break;
		case 1942587409:
			iVar7 = func_339(iVar0);
			if (func_820(iVar0))
			{
				if (!func_634(uParam0, iVar0, 1942587409, -1))
				{
					sVar2 = _create_var_string(8, -1779818913, _get_label_text_by_hash(func_1158(iVar7)));
				}
				else
				{
					sVar2 = _create_var_string(8, 287622369, func_1159(iVar0));
				}
			}
			else
			{
				iVar5 = func_1156(-525676072, 1);
				iVar6 = func_1157(-525676072, 1);
				if (!func_824(-525676072, 1))
				{
					sVar2 = _create_var_string(2, "WARDROBE_MASKS_ON_HORSE_FULL_TOOLTIP", iVar5, iVar6);
				}
				else
				{
					sVar2 = _create_var_string(2, "WARDROBE_MASKS_ON_HORSE_TOOLTIP", iVar5, iVar6);
				}
			}
			break;
		case 761079318:
			iVar7 = func_339(iVar0);
			switch (iVar7)
			{
				case -1719060085:
				case -923693316:
				case -839140560:
				case -298391753:
				case -163032984:
				case 502936876:
				case 1282123855:
				case 1545016984:
				case 1769055947:
				case 2016058810:
				case 2047428024:
					bVar36 = true;
					break;
				default:
					bVar36 = false;
					break;
			}
			bVar37 = func_634(uParam0, iVar0, iVar1, -1);
			iVar39 = func_261(uParam0);
			iVar40 = iVar39;
			if (func_278(iVar40, 0) && func_612(iVar40, -393037696))
			{
				sVar38 = func_1159(iVar40);
			}
			else
			{
				sVar38 = func_1159(iVar0);
			}
			if (bVar37)
			{
				if (bVar36)
				{
					sVar2 = _create_var_string(8, 220200945, sVar38);
				}
				else
				{
					sVar2 = _create_var_string(8, -321520534, sVar38);
				}
			}
			else if (bVar36)
			{
				sVar2 = _create_var_string(8, -682383052, sVar38);
			}
			else
			{
				sVar2 = _create_var_string(8, -1889410522, sVar38);
			}
			if (func_820(iVar0))
			{
				if (!bVar37)
				{
					sVar2 = _create_var_string(8, -1779818913, _get_label_text_by_hash(func_1158(iVar7)));
				}
				else
				{
					sVar2 = _create_var_string(8, 287622369, func_1159(iVar0));
				}
			}
			else if (iVar7 == -2061583405)
			{
				iVar5 = func_1156(-2061583405, 1);
				iVar6 = func_1157(-2061583405, 1);
				if (!func_824(-2061583405, 1))
				{
					sVar2 = _create_var_string(2, "WARDROBE_HATS_ON_HORSE_FULL_TOOLTIP", iVar5, iVar6);
				}
				else
				{
					sVar2 = _create_var_string(2, "WARDROBE_HATS_ON_HORSE_TOOLTIP", iVar5, iVar6);
				}
			}
			break;
		case -2056428614:
			iVar41 = func_1160(&(Global_1946804->f_1378));
			if (iVar41 < 2)
			{
				sVar2 = _create_var_string(2, "WARDROBE_TALISMAN_COUNT_TOOLTIP", iVar41, 2);
			}
			else
			{
				sVar2 = _create_var_string(2, "WARDROBE_TALISMAN_COUNT_TOOLTIP_FULL", iVar41, 2);
			}
			break;
		case -348190488:
			sVar2 = _create_var_string(10, "SHOP_ITEM_STYLE_SELECT_TOOLTIP", _get_label_text_by_hash(uParam1->f_1));
			break;
	}
	if (!is_string_null_or_empty(sVar2))
	{
		func_542(uParam0, sVar2);
	}
	return true;
}

int func_615(bool bParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(func_1161(bParam0), func_649());
	return iVar0;
}

int func_616(bool bParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(func_607(bParam0), func_649());
	return iVar0;
}

void func_617(var uParam0, bool bParam1)
{
	iVar0 = func_466(bParam1);
	iVar1 = func_1162(bParam1);
	if (iVar0 != iVar1)
	{
		iVar2 = func_1163(bParam1);
		iVar3 = func_1161(bParam1);
		iVar4 = func_615(bParam1);
		if (func_278(iVar2, 0))
		{
			if (iVar4 != -348190488)
			{
				if (func_1113(iVar2))
				{
					bVar5 = true;
					if (uParam0->f_3 != 152)
					{
						if (func_826(iVar2) == -1037537535)
						{
							if (func_834(uParam0, iVar2, -853534656))
							{
								bVar5 = false;
							}
						}
					}
					if (bVar5)
					{
						func_279(iVar2);
						_databinding_add_data_bool(iVar3, func_1114(), false);
					}
				}
			}
			else if (func_1113(iVar2))
			{
				func_279(iVar2);
			}
		}
	}
}

int func_618(var uParam0)
{
	return _databinding_read_data_int_from_parent_by_hash(uParam0->f_2031.f_52, 1184271882);
}

int func_619(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent_by_hash(uParam0->f_2031.f_52, -804795275);
	return iVar0;
}

int func_620(var uParam0)
{
	return _databinding_read_data_int_from_parent_by_hash(uParam0->f_2031.f_52, 997560919);
}

int func_621(int iParam0)
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
		default:
			return -1;
	}
	return -1;
}

bool func_622(bool bParam0)
{
	if (bParam0)
	{
		return _databinding_read_data_bool_from_parent(Global_1914319->f_16855.f_3.f_16, func_1164());
	}
	return _databinding_read_data_bool_from_parent(Global_1914319->f_16855.f_3.f_10, func_1164());
}

int func_623(var uParam0, bool bParam1)
{
	_databinding_add_data_bool_by_hash(uParam0->f_2031.f_52, -1569227938, bParam1);
	return 1;
}

bool func_624(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	iVar0 = 0;
	if (iParam0 == 0)
	{
		return false;
	}
	func_658();
	if (!func_755(&(Global_1946804->f_1378), &iVar0, iParam0, -1, 0, 1))
	{
		return false;
	}
	if (iParam2 == -1)
	{
		iParam2 = &Global_40.f_7731[0];
	}
	if (iParam3 == -1)
	{
		iParam3 = &Global_40.f_7731[1];
	}
	if (iParam4 == -1)
	{
		iParam4 = &Global_40.f_7731[2];
	}
	func_1165(iParam2, iParam3, iParam4);
	if ((iParam2 == 0 && iParam3 == 0) && iParam4 == 0)
	{
		func_1166(iParam1, -7657935, -1889597427, 1, 1, 0);
	}
	else
	{
		func_1166(iParam1, 1155669136, -1889597427, 1, 1, 0);
	}
	if (bParam5)
	{
		if (is_ped_a_player(iParam1))
		{
			func_94(1, 96, 0, 0, 0);
		}
		else
		{
			func_94(1, 96, 1, iParam1, 0);
		}
	}
	func_336(1);
	return true;
}

void func_625(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1881423545:
			func_905(Global_35, iParam1, 1);
			break;
	}
}

void func_626(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1024854903:
			iVar0 = (func_1167(0) - iParam1);
			iVar1 = (func_1167(1) - iParam1);
			iVar2 = (func_1167(2) - iParam1);
			if (iVar0 <= -1)
			{
				iVar0 = 0;
			}
			if (iVar1 <= -1)
			{
				iVar1 = 0;
			}
			if (iVar2 <= -1)
			{
				iVar2 = 0;
			}
			func_1168(Global_35, iVar0, iVar1, iVar2, 1);
			break;
		case 1224358974:
			func_1168(Global_35, (func_1167(0) - iParam1), -1, -1, 1);
			break;
		case 1107981273:
			func_1168(Global_35, -1, (func_1167(1) - iParam1), -1, 1);
			break;
		case 1792152856:
			func_1168(Global_35, -1, -1, (func_1167(2) - iParam1), 1);
			break;
	}
}

int func_627(int iParam0)
{
	func_1169(iParam0, &uVar0);
	iVar5 = 0;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (&uVar0[iVar4] > &uVar0[iVar5])
		{
			iVar5 = iVar4;
		}
		iVar4++;
	}
	return &(uVar0[iVar5]);
}

bool func_628(int iParam0, int iParam1)
{
	if (!func_1169(iParam0, &uVar0))
	{
		return false;
	}
	iVar9 = 0;
	iVar10 = 0;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (&uVar0[iVar8] < &uVar0[iVar9])
		{
			iVar9 = iVar8;
		}
		if (&uVar0[iVar8] > &uVar0[iVar10])
		{
			iVar10 = iVar8;
		}
		iVar8++;
	}
	iVar4[0] = func_1170(0);
	iVar4[2] = func_1170(2);
	iVar4[1] = func_1170(1);
	iVar12 = (uVar0[iVar10] - iVar4[iVar10]) // PointerArith;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (&uVar0[iVar8] != -1)
		{
			iVar11 = (uVar0[iVar8] - uVar0[iVar10]) // PointerArith;
			if (&iVar4[iVar8] > (&uVar0[iVar8] + iVar12))
			{
				iVar4[iVar8] = (&uVar0[iVar8] + iVar12);
			}
			if (&iVar4[iVar8] > (iParam1 - iVar11))
			{
				iVar4[iVar8] = (iParam1 - iVar11);
			}
			if (&iVar4[iVar8] < &uVar0[iVar8])
			{
				iVar4[iVar8] = &uVar0[iVar8];
			}
		}
		else
		{
			iVar4[iVar8] = 1;
		}
		iVar8++;
	}
	if (!func_624(iParam0, Global_35, &(iVar4[0]), &(iVar4[1]), &(iVar4[2]), 1))
	{
		return false;
	}
	return true;
}

int func_629()
{
	if (func_1171() == 1160113249)
	{
		return -1392593303;
	}
	return 1156231582;
}

bool func_630(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_1172(iParam0, 0, 1, 1, 1))
	{
		return false;
	}
	if (iParam2 == -1)
	{
		iParam2 = Global_40.f_7748.f_1;
	}
	func_1173(iParam2);
	if (bParam3)
	{
		if (is_ped_a_player(iParam1))
		{
			func_94(1, 64, 0, 0, 0);
		}
		else
		{
			func_94(1, 64, 1, iParam1, 0);
		}
	}
	func_336(1);
	return true;
}

bool func_631(int iParam0)
{
	return (iParam0 == 642397982 || iParam0 == -312175403);
}

int func_632()
{
	return &(Global_1946804->f_1497.f_1[1]);
}

bool func_633(int iParam0, int iParam1)
{
	if (!func_1174(iParam0, &iVar0))
	{
		return false;
	}
	*iParam1 = &Global_1946804->f_1497.f_1[func_656(iVar0, 1)];
	return true;
}

bool func_634(var uParam0, int iParam1, int iParam2, int iParam3)
{
	bVar0 = false;
	if (iParam2 == -1502467280 || iParam2 == 777890122)
	{
		if (func_612(iParam1, 1844906744))
		{
			bVar0 = true;
			vVar1.f_1 = -1;
			vVar1.f_2 = -1;
			iVar5 = func_276(uParam0);
			if (func_962(func_723(&(uParam0->f_2031)), iVar5, &Var6))
			{
				iVar4 = 0;
				while (iVar4 < Var6.f_3)
				{
					vVar1 = { func_963(iVar4, Var6, &(uParam0->f_2031)) };
					if (vVar1.x != iParam1 && func_278(vVar1.x, 0))
					{
						if (func_634(uParam0, vVar1.x, func_896(uParam0, vVar1.x), -1))
						{
							bVar0 = false;
						}
					}
					iVar4++;
				}
			}
		}
		else if (func_612(iParam1, 188214926))
		{
			iVar12 = func_918(uParam0);
			iVar13 = func_276(uParam0);
			vVar14.f_1 = -1;
			vVar14.f_2 = -1;
			Var21 = -1;
			Var21.f_1 = -1;
			Var21.f_2 = -1;
			Var21.f_3 = -1;
			Var21.f_4 = -1;
			Var21.f_5 = -1;
			Var21.f_6 = -1;
			Var21.f_7 = -1;
			Var21.f_8 = -1;
			if (func_962(func_723(&(uParam0->f_2031)), iVar13, &Var17))
			{
				iVar10 = 0;
				while (iVar10 < Var17.f_3)
				{
					vVar14 = { func_963(iVar10, Var17, &(uParam0->f_2031)) };
					if (vVar14.x == iParam1 && func_278(vVar14.x, 0))
					{
						Var21.f_8 = vVar14.y;
						iVar32 = _item_database_create_item_collection(&Var21, &iVar31, 1);
						if (iVar32 == -1)
						{
						}
						else
						{
							iVar33 = 0;
							while (iVar33 < iVar31)
							{
								iVar34 = func_919(iVar33, iVar32);
								if (((func_278(iVar34, 0) && iVar34 != iParam1) && func_920(&(uParam0->f_2031), iVar34, &uVar11)) || _item_database_get_item_tag_type(iVar34, Var21.f_8) == -2089472884)
								{
									uParam0->f_2031.f_74 = uVar11;
									iVar35 = func_896(uParam0, iVar34);
									if (func_634(uParam0, iVar34, iVar35, -1))
									{
										bVar0 = true;
									}
									else
									{
										iVar33++;
									}
									uParam0->f_2031.f_74 = iVar12;
									_0xcbb7b6edfa933ade(iVar32);
									Jump @534; //curOff = 522
									iVar10++;
									Jump @562; //curOff = 534
									iVar36 = func_960(uParam0);
									bVar0 = func_964(iVar36, iParam1, func_961(uParam0), 0);
									Jump @1801; //curOff = 562
									if (iParam2 == -760956867)
									{
										if (iParam1 != 1279130184)
										{
											return func_901(iParam1);
										}
										else
										{
											return func_899();
										}
									}
									else if (iParam2 == 38807286)
									{
										return func_1175(iParam1);
									}
									else if ((((iParam2 == -853534656 || iParam2 == 761079318) || iParam2 == 1942587409) || iParam2 == -2056428614) || iParam2 == 2077448405)
									{
										if (func_339(iParam1) == -999503751)
										{
											if (func_1176(iParam1))
											{
												return func_1177(iParam1, &(Global_1946804->f_1497));
											}
											else
											{
												return func_819() == iParam1;
											}
										}
										if (func_820(iParam1))
										{
											if (iParam1 == -992705550)
											{
												iVar37 = func_1178(1742327865);
												if (!func_907(iVar37))
												{
													return true;
												}
											}
											else if (iParam1 == -383172193)
											{
												iVar38 = func_1178(1742327865);
												if (func_907(iVar38))
												{
													return true;
												}
											}
											else if (iParam1 == -1870922521)
											{
												iVar39 = func_1178(1108822547);
												if (!func_906(iVar39))
												{
													return true;
												}
											}
											iParam1 = func_955(iParam1);
										}
										return func_823(iParam1);
									}
									else if (iParam2 == 1394581936)
									{
										if (func_125() == -1)
										{
											if (func_1021(iParam1))
											{
												iVar40 = func_444(7);
												if (iVar40 == -1)
												{
													return false;
												}
												if (func_1022(iParam1))
												{
													bVar0 = func_1179(iVar40, iParam1);
												}
												if (func_1024(iParam1))
												{
													bVar0 = func_1180(iVar40, iParam1);
												}
											}
											else
											{
												bVar0 = func_1181(iParam1);
											}
										}
									}
									else if (iParam2 == -584027224)
									{
										Var41 = { func_669(-1838434463, func_1182(0), 1084182731, 1) };
										iVar45 = func_339(iParam1);
										switch (iVar45)
										{
											case -1015460895:
											case -768291983:
											case 1193257440:
											case 1415299667:
											case 1795979421:
												if (iParam1 == func_973(Var41, func_1183(iVar45), 1))
												{
													return true;
												}
												break;
											case 526314052:
											case 1206030994:
												if (func_931(iParam1, 0))
												{
													return true;
												}
												break;
										}
									}
									else if (iParam2 == 1702073444)
									{
										if (func_1184(iParam1))
										{
											if (iParam3 == -1)
											{
												return false;
											}
											iVar46 = func_960(uParam0);
											if (!func_278(iVar46, 0))
											{
												return false;
											}
											Var47 = { func_1185(iVar46, 0, 0) };
											Var52 = { func_669(iVar46, Var47, func_961(uParam0), 0) };
											iVar56 = iParam3;
											if (iVar56 == 0)
											{
												return false;
											}
											Var57 = { func_978(0, -1591664384, -1591664384, -1591664384, 0, iVar56) };
											if (func_979(&Var57, &iVar71, &iVar72, 0))
											{
												Var73.f_9 = -1591664384;
												iVar87 = 0;
												while (iVar87 < iVar72)
												{
													if (func_980(&Var73, iVar87, iVar71, iVar72))
													{
														if (func_670(&(Var73.f_5), &Var52))
														{
															if (Var73.f_10)
															{
																func_981(iVar71);
																return true;
															}
														}
													}
													iVar87++;
												}
												func_981(iVar71);
											}
											return false;
										}
										iVar90 = func_918(uParam0);
										iVar91 = func_276(uParam0);
										vVar92.f_1 = -1;
										vVar92.f_2 = -1;
										Var99 = -1;
										Var99.f_1 = -1;
										Var99.f_2 = -1;
										Var99.f_3 = -1;
										Var99.f_4 = -1;
										Var99.f_5 = -1;
										Var99.f_6 = -1;
										Var99.f_7 = -1;
										Var99.f_8 = -1;
										if (func_962(func_723(&(uParam0->f_2031)), iVar91, &Var95))
										{
											iVar88 = 0;
											while (iVar88 < Var95.f_3)
											{
												vVar92 = { func_963(iVar88, Var95, &(uParam0->f_2031)) };
												if (vVar92.x == iParam1 && func_278(vVar92.x, 0))
												{
													Var99.f_8 = vVar92.y;
													iVar110 = _item_database_create_item_collection(&Var99, &iVar109, 1);
													if (iVar110 == -1)
													{
													}
													else
													{
														iVar111 = 0;
														while (iVar111 < iVar109)
														{
															iVar112 = func_919(iVar111, iVar110);
															if (((func_278(iVar112, 0) && iVar112 != iParam1) && func_920(&(uParam0->f_2031), iVar112, &uVar89)) || _item_database_get_item_tag_type(iVar112, Var99.f_8) == -2089472884)
															{
																uParam0->f_2031.f_74 = uVar89;
																iVar113 = func_896(uParam0, iVar112);
																if (func_634(uParam0, iVar112, iVar113, -1))
																{
																	bVar0 = true;
																}
																else
																{
																	iVar111++;
																}
																uParam0->f_2031.f_74 = iVar90;
																_0xcbb7b6edfa933ade(iVar110);
																Jump @1693; //curOff = 1681
																iVar88++;
																Jump @1801; //curOff = 1693
																Var117.f_9 = -1591664384;
																Var131 = { func_978(iParam1, -1591664384, -1591664384, -1591664384, 0, 0) };
																if (func_979(&Var131, &iVar114, &iVar115, 0))
																{
																	iVar116 = 0;
																	while (iVar116 < iVar115)
																	{
																		if (func_980(&Var117, iVar116, iVar114, iVar115))
																		{
																			bVar0 = Var117.f_10;
																		}
																		else
																		{
																			iVar116++;
																		}
																	}
																}
																func_981(iVar114);
																return bVar0;
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
		}
	}
}

bool func_635(var uParam0)
{
	return _databinding_read_data_bool_from_parent_by_hash(uParam0->f_2031.f_52, -1569227938);
}

void func_636(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	func_903(uParam0, iParam1, _get_label_text_by_hash(iParam2), bParam3, bParam4, bParam5);
}

void func_637(var uParam0, bool bParam1)
{
	_databinding_add_data_bool(uParam0->f_2031.f_54, "isAffordable", bParam1);
}

bool func_638(int iParam0, int iParam1)
{
	if (func_360(1) < func_1186(iParam0, -915411861, 1, 0, 0))
	{
		*iParam1 = 3;
		return false;
	}
	if (iParam0 == -1881423545)
	{
		if (func_1187())
		{
			return true;
		}
		else
		{
			*iParam1 = 4;
			return false;
		}
	}
	if ((iParam0 != func_629() && !func_631(iParam0)) && func_904() < 3)
	{
		return false;
	}
	if (!func_631(iParam0) && func_904() < 1)
	{
		return false;
	}
	if (func_631(iParam0) && func_904() == 0)
	{
		return false;
	}
	if (iParam0 == 1279130184 && (func_904() == 1 || func_904() == 0))
	{
		return false;
	}
	return true;
}

bool func_639(int iParam0, int iParam1)
{
	if (!func_1188(iParam0))
	{
		*iParam1 = 1;
		return false;
	}
	if (iParam0 == 1574030042)
	{
		if (func_155(34))
		{
			return func_1189(1);
		}
		else if (func_951(2))
		{
			return func_1189(1);
		}
		else
		{
			return (func_951(1) && func_1190(1));
		}
	}
	if (func_951(2))
	{
		return false;
	}
	*iParam1 = 4;
	switch (iParam0)
	{
		case 1024854903:
			return ((func_1191(0) || func_1191(1)) || func_1191(2));
		case 1224358974:
			return func_1191(0);
		case 1107981273:
			return func_1191(1);
		case 1792152856:
			return func_1191(2);
		case 1420417918:
			return func_1189(2);
		default:
			break;
	}
	func_1169(iParam0, &uVar0);
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (func_1167(iVar4) < &uVar0[iVar4])
		{
			return false;
		}
		iVar4++;
	}
	return true;
}

void func_640(var uParam0, int iParam1)
{
	func_542(uParam0, _get_label_text_by_hash(iParam1));
}

int func_641()
{
	return Global_1914319->f_16855.f_3.f_17;
}

int func_642(var uParam0)
{
	return uParam0->f_2031.f_72;
}

void func_643(var uParam0, int iParam1)
{
	uParam0->f_2031.f_72 = iParam1;
	if (uParam0->f_2031.f_72 >= uParam0->f_2031.f_73)
	{
		uParam0->f_2031.f_72 = 0;
	}
	else if (uParam0->f_2031.f_72 < 0)
	{
		uParam0->f_2031.f_72 = (uParam0->f_2031.f_73 - 1);
	}
	_databinding_add_data_int_by_hash(uParam0->f_2031.f_50, 1731278865, uParam0->f_2031.f_72);
}

void func_644(int iParam0)
{
	Global_1914319->f_16855.f_3.f_17 = iParam0;
}

int func_645(var uParam0, int iParam1)
{
	if (uParam0->f_2031.f_73 <= 0 || iParam1 >= uParam0->f_2031.f_73)
	{
		return 0;
	}
	_databinding_write_data_int_from_parent(uParam0->f_2031.f_50, "currentPaletteIndex", iParam1);
	func_1192(uParam0->f_2031.f_72, 0);
	iVar0 = _databinding_get_item_context_by_index(uParam0->f_2031.f_60, iParam1);
	func_608(&iVar0, 0);
	iVar1 = _databinding_read_data_int_from_parent(iVar0, func_597());
	iVar2 = iVar1;
	func_609(iVar2, 0);
	return 1;
}

int func_646()
{
	return Global_1914319->f_16855.f_3.f_21;
}

int func_647(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < iParam1)
	{
		return iParam1;
	}
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	return iParam0;
}

int func_648(var uParam0, int iParam1)
{
	iVar0 = _databinding_read_data_int_from_parent_by_hash(uParam0->f_2031.f_52, -804795275);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (_databinding_read_data_bool_from_parent_by_hash(uParam0->f_2031.f_52, 1535851697))
	{
		_databinding_add_data_bool_by_hash(uParam0->f_2031.f_52, 988907979, iParam1 > 1);
		_databinding_add_data_bool_by_hash(uParam0->f_2031.f_52, 1417549877, iParam1 < iVar0);
	}
	if (iParam1 > iVar0)
	{
		return 0;
	}
	_databinding_add_data_int_by_hash(uParam0->f_2031.f_52, 1184271882, iParam1);
	return 1;
}

char* func_649()
{
	return "uiItemType";
}

int func_650()
{
	return 1999907591;
}

int func_651()
{
	return -655974324;
}

int func_652(bool bParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(func_607(bParam0), func_716());
	return iVar0;
}

int func_653(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 358835375;
		case 1:
			return -1127546830;
		case 2:
			return 1116743896;
		default:
			break;
	}
	return -1;
}

bool func_654(int iParam0, int iParam1, var uParam2)
{
	bVar3 = false;
	if (!func_1193(iParam0, iParam1, &iVar0))
	{
		return false;
	}
	iVar4 = func_1194(iParam0);
	func_1195(&(Global_1946804->f_964), -380731322, *iParam1, iParam0, 1, Global_1946804->f_1329.f_1[iVar4][Global_1946804->f_1329.f_1[iVar4]->f_8]);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	while (_0xed4413cee1bf142c(&(Global_1946804->f_964)))
	{
		iVar2 = 0;
		while (iVar2 < Global_1946804->f_1329.f_29[iVar0]->f_5)
		{
			if (!_0x44b3a36933ac009c(&iVar1, &(Global_1946804->f_964), &(Global_1946804->f_1329.f_29[iVar0]->f_1[iVar2])))
			{
				bVar3 = false;
			}
			else
			{
				iVar4 = func_1194(&(Global_1946804->f_1329.f_29[iVar0]->f_1[iVar2]));
				if (iVar1 != Global_1946804->f_1329.f_1[iVar4][Global_1946804->f_1329.f_1[iVar4]->f_8])
				{
					bVar3 = false;
				}
				else
				{
					bVar3 = true;
					iVar2++;
				}
			}
		}
		if (!bVar3)
		{
		}
		else
		{
			if (!_0x44b3a36933ac009c(&iVar1, &(Global_1946804->f_964), -763890493))
			{
				return false;
			}
			*uParam2 = iVar1;
			return true;
		}
	}
	return false;
}

int func_655()
{
	return 800223284;
}

int func_656(int iParam0, int iParam1)
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

void func_657(int iParam0)
{
	func_1196(&(Global_1946804->f_2589), iParam0);
}

void func_658()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_659(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_339(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1197(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_661(iVar1, iVar3);
		}
	}
	if (func_1198(-1586649372) && func_1197(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_661(iVar1, iVar3);
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
						func_661(iVar1, iVar3);
					}
				}
			}
			func_1199(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1199(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_661(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1199(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_661(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_661(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1199(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1199(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_661(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1199(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_661(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_661(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_339(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_661(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1200(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_339(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_661(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_612(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_661(iVar1, iVar3);
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
						func_661(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1200(&(Global_1946804->f_1497.f_1[iVar1])) || func_612(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_661(iVar1, iVar3);
					}
				}
			}
			switch (func_339(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_339(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_661(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_339(&(uParam0->f_1[iVar1])) || func_612(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_661(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_660(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2589)
	{
		if (&Global_1946804->f_2589.f_2[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_661(int iParam0, int iParam1)
{
	func_1201(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_662(bool bParam0, bool bParam1, bool bParam2)
{
	func_1202(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_663(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_1203(iParam0, iParam1);
	if (iVar0 == 1)
	{
		*iParam2 = -2098954619;
		*iParam3 = 1210712530;
	}
	else if (iVar0 == 2)
	{
		*iParam2 = -1498731425;
		*iParam3 = 1210712530;
	}
	else
	{
		return false;
	}
	return true;
}

int func_664()
{
	return -1577411677;
}

int func_665()
{
	return -2105905628;
}

void func_666(var uParam0, int iParam1)
{
	uParam0->f_2031.f_85 = iParam1;
	uParam0->f_148.f_1281.f_207 = iParam1;
	Global_1914319->f_16855.f_37 = iParam1;
}

void func_667(var uParam0, int iParam1, int iParam2)
{
	if (!func_278(iParam1, 0))
	{
		return;
	}
	if (!func_1204(iParam1))
	{
		return;
	}
	Var0.f_1 = 20;
	if (!_item_database_fillout_item_effects_ids(iParam1, &Var0))
	{
	}
	else if (Var0 <= 0)
	{
	}
	else
	{
		fVar34 = 100f;
		Var35 = { func_1205(-664570214, _0x8ec44ae8decff841(iParam1)) };
		if (_stat_id_is_valid(&Var35))
		{
			stat_id_get_float(&Var35, &fVar34);
		}
		iVar37 = 0;
		while (iVar37 < Var0)
		{
			if (_item_database_fillout_item_effects_id_info(&(Var0.f_1[iVar37]), &vVar22))
			{
				if (vVar22.y == -266488916)
				{
					iVar29 = (iVar29 + vVar22.z);
				}
				else if (vVar22.y == 1648497600)
				{
					iVar30 = (iVar30 + vVar22.z);
				}
				else if (vVar22.y == -1856731002)
				{
					iVar31 = (iVar31 + vVar22.z);
				}
				else if (vVar22.y == 2038990430)
				{
					iVar32 = (iVar32 + vVar22.z);
				}
				else if (vVar22.y == 983649838)
				{
					iVar33 = (iVar33 + vVar22.z);
				}
				if (vVar22.y == 1465168878)
				{
					iVar30 = (iVar30 + floor((to_float(vVar22.z) * (fVar34 / 100f))));
				}
				else if (vVar22.y == -1103443887)
				{
					iVar32 = (iVar32 + floor((to_float(vVar22.z) * (fVar34 / 100f))));
				}
				else if (vVar22.y == -800430237)
				{
					iVar33 = (iVar33 + floor((to_float(vVar22.z) * (fVar34 / 100f))));
				}
			}
			iVar37++;
		}
		iVar38 = 0;
		iVar39 = 0;
		iVar40 = 0;
		iVar41 = 0;
		iVar42 = 0;
		iVar43 = 0;
		Var44 = { func_1185(iParam1, 0, 0) };
		Var44.f_4 = func_961(uParam0);
		Var49 = { func_669(iParam1, Var44, Var44.f_4, 0) };
		iVar53 = func_974(iParam1);
		bVar58 = true;
		iVar54 = 0;
		while (iVar54 < iVar53)
		{
			iVar55 = func_1206(iParam1, iVar54);
			if (iVar55 != 0)
			{
				iVar56 = func_973(Var49, iVar55, 0);
				bVar58 = true;
				if (func_278(iParam2, 0))
				{
					if (func_1207(iParam2, iVar55) || func_612(iParam2, 1844906744))
					{
						if (func_612(iParam2, 1844906744))
						{
							if (func_1208(uParam0, func_299(uParam0), func_276(uParam0), &iVar57))
							{
								if (func_1207(iVar57, iVar55))
								{
									bVar58 = false;
								}
							}
						}
						else if (!func_278(iVar56, 0))
						{
							bVar58 = false;
						}
						else if (iVar56 != iParam2)
						{
							bVar58 = false;
						}
					}
				}
				if (func_278(iVar56, 0))
				{
					if (_item_database_fillout_item_effects_ids(iVar56, &Var0))
					{
						iVar37 = 0;
						iVar37 = 0;
						while (iVar37 < Var0)
						{
							if (_item_database_fillout_item_effects_id_info(&(Var0.f_1[iVar37]), &vVar22))
							{
								if (vVar22.y == 1999781523)
								{
									iVar41 = (iVar41 + vVar22.z);
									if (bVar58)
									{
										iVar38 = (iVar38 + vVar22.z);
									}
								}
								else if (vVar22.y == 1173003838)
								{
									iVar43 = (iVar43 + vVar22.z);
									if (bVar58)
									{
										iVar39 = (iVar39 + vVar22.z);
									}
								}
								else if (vVar22.y == -1657343230)
								{
									iVar42 = (iVar42 + vVar22.z);
									if (bVar58)
									{
										iVar40 = (iVar40 + vVar22.z);
									}
								}
							}
							iVar37++;
						}
					}
				}
				if (!bVar58)
				{
					if (_item_database_fillout_item_effects_ids(iParam2, &Var0))
					{
						iVar37 = 0;
						iVar37 = 0;
						while (iVar37 < Var0)
						{
							if (_item_database_fillout_item_effects_id_info(&(Var0.f_1[iVar37]), &vVar22))
							{
								if (vVar22.y == 1999781523)
								{
									iVar38 = (iVar38 + vVar22.z);
								}
								else if (vVar22.y == 1173003838)
								{
									iVar39 = (iVar39 + vVar22.z);
								}
								else if (vVar22.y == -1657343230)
								{
									iVar40 = (iVar40 + vVar22.z);
								}
							}
							iVar37++;
						}
					}
				}
			}
			iVar54++;
		}
		if (func_826(iParam2) == 307971639)
		{
			if (_item_database_fillout_item_effects_ids(iParam2, &Var0))
			{
				iVar37 = 0;
				iVar37 = 0;
				while (iVar37 < Var0)
				{
					if (_item_database_fillout_item_effects_id_info(&(Var0.f_1[iVar37]), &vVar22))
					{
						if (vVar22.y == 1999781523)
						{
							iVar29 = (iVar29 + vVar22.z);
						}
						else if (vVar22.y == 1173003838)
						{
							iVar33 = (iVar33 + vVar22.z);
						}
						else if (vVar22.y == -1657343230)
						{
							iVar30 = (iVar30 + vVar22.z);
						}
					}
					iVar37++;
				}
			}
		}
		iVar59 = (iVar29 + iVar41);
		if (iVar29 + iVar38) > (iVar29 + iVar41)
		{
			iVar59 = (iVar29 + iVar38);
		}
		iVar60 = (iVar30 + iVar42);
		if (iVar30 + iVar40) > (iVar30 + iVar42)
		{
			iVar60 = (iVar30 + iVar40);
		}
		iVar61 = (iVar33 + iVar43);
		if (iVar33 + iVar39) > (iVar33 + iVar43)
		{
			iVar61 = (iVar33 + iVar39);
		}
		iVar62 = (iVar29 + iVar41);
		if (iVar29 + iVar38) < (iVar29 + iVar41)
		{
			iVar62 = (iVar29 + iVar38);
		}
		iVar63 = (iVar30 + iVar42);
		if (iVar30 + iVar40) < (iVar30 + iVar42)
		{
			iVar63 = (iVar30 + iVar40);
		}
		iVar64 = (iVar33 + iVar43);
		if (iVar33 + iVar39) < (iVar33 + iVar43)
		{
			iVar64 = (iVar33 + iVar39);
		}
		_databinding_add_data_int(uParam0->f_2031.f_52, "WeaponPowerValue", iVar59);
		_databinding_add_data_int(uParam0->f_2031.f_52, "WeaponRangeValue", iVar60);
		_databinding_add_data_int(uParam0->f_2031.f_52, "WeaponAccuracyValue", iVar61);
		_databinding_add_data_int(uParam0->f_2031.f_52, "WeaponFireRateValue", iVar31);
		_databinding_add_data_int(uParam0->f_2031.f_52, "WeaponReloadValue", iVar32);
		_databinding_add_data_int(uParam0->f_2031.f_52, "WeaponPowerDiff", (iVar29 + iVar41));
		_databinding_add_data_int(uParam0->f_2031.f_52, "WeaponRangeDiff", (iVar30 + iVar42));
		_databinding_add_data_int(uParam0->f_2031.f_52, "WeaponAccuracyDiff", (iVar33 + iVar43));
		_databinding_add_data_int(uParam0->f_2031.f_52, "WeaponFireRateDiff", iVar31);
		_databinding_add_data_int(uParam0->f_2031.f_52, "WeaponReloadDiff", iVar32);
		_databinding_add_data_int(uParam0->f_2031.f_52, "WeaponPowerNew", iVar62);
		_databinding_add_data_int(uParam0->f_2031.f_52, "WeaponRangeNew", iVar63);
		_databinding_add_data_int(uParam0->f_2031.f_52, "WeaponAccuracyNew", iVar64);
		_databinding_add_data_int(uParam0->f_2031.f_52, "WeaponFireRateNew", iVar31);
		_databinding_add_data_int(uParam0->f_2031.f_52, "WeaponReloadNew", iVar32);
	}
}

struct<4> func_668(bool bParam0)
{
	iVar0 = func_1209(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_669(923904168, func_1182(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_669(923904168, func_1182(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_669(923904168, func_1182(bParam0), -740156546, 0);
}

struct<4> func_669(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_278(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_1209(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_670(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_671()
{
	Var4.f_9 = -1591664384;
	if (func_1210("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_980(&Var4, iVar2, iVar0, iVar1))
			{
			}
			else if (_is_weapon_one_handed(Var4.f_4))
			{
				iVar3++;
			}
			iVar2++;
		}
		func_981(iVar0);
	}
	return iVar3;
}

int func_672(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_299(uParam0);
	iVar1 = func_1211(iVar0, iParam1);
	iVar2 = func_289(uParam0);
	iVar3 = 0;
	iVar5 = 0;
	while (iVar5 < iVar1)
	{
		iVar4 = func_1212(iVar0, iParam1, iVar5);
		if (iVar4 != -1)
		{
			if (func_1213(iVar3, iParam2, iParam3, iVar2))
			{
				iVar6 = func_1107(uParam0, iVar5);
				if (func_1214(iVar6))
				{
					switch (iVar6)
					{
						case 2119176479:
							if (func_1215(uParam0, iVar3))
							{
								iVar3++;
							}
							break;
						case -1873242174:
							if (func_1216(uParam0, iVar3))
							{
								iVar3++;
							}
							break;
						case 1406783678:
							if (func_1217(uParam0, iVar3))
							{
								iVar3++;
							}
							break;
						case 1649093494:
							if (func_1218(uParam0, iVar3))
							{
								iVar3++;
							}
							break;
						case -1095179319:
							if (func_1219(uParam0, iVar3))
							{
								iVar3++;
							}
							break;
					}
				}
				else if (func_1220(uParam0, iVar4, iVar3))
				{
					iVar3++;
				}
			}
		}
		iVar5++;
	}
	return 1;
}

int func_673(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = func_289(uParam0);
	iVar1 = 0;
	if (!func_585(uParam0, iParam1, &iVar1))
	{
		return 0;
	}
	iVar2 = func_1090(&(uParam0->f_2031));
	if (iVar2 <= 0)
	{
		return 0;
	}
	if (iVar1 >= iVar2 || iVar1 < 0)
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		return 0;
	}
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	iVar6 = 0;
	iVar8 = 0;
	iVar9 = func_586(iVar1, &(uParam0->f_2031));
	if (func_1105(func_299(uParam0), iVar9, 1))
	{
		if (!func_1221(uParam0, iParam2, iParam3, bParam4))
		{
			return 0;
		}
	}
	else if (func_835(iVar9))
	{
		if (!func_1222(uParam0, iVar9, iParam2, iParam3, bParam4))
		{
			return 0;
		}
	}
	else
	{
		iVar7 = func_1223(iVar1, &(uParam0->f_2031));
		if (iVar7 <= 0)
		{
		}
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			vVar3 = { func_1224(iVar1, iVar6, &(uParam0->f_2031)) };
			if (func_278(vVar3.x, 0))
			{
				if (func_1074(uParam0, vVar3))
				{
					if (func_1213(iVar8, iParam2, iParam3, iVar0))
					{
						if (!func_1225(uParam0, vVar3.x, iVar8, vVar3.y, vVar3.z, bParam4))
						{
						}
					}
					iVar8++;
				}
			}
			iVar6++;
		}
	}
	return 1;
}

int func_674(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_289(uParam0);
	iVar1 = func_1090(&(uParam0->f_2031));
	if (iVar1 <= 0)
	{
		return 0;
	}
	if (iParam2 < 0)
	{
		return 0;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (func_1213(iVar2, iParam1, iParam2, iVar0))
		{
			if (func_589(iVar2, &(uParam0->f_2031), &iVar3))
			{
				func_1226(uParam0, iVar3, iVar2);
			}
		}
		iVar2++;
	}
	return 1;
}

int func_675(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_289(uParam0);
	iVar4 = 0;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (func_1213(iVar4, iParam1, iParam2, iVar0))
		{
			switch (iVar3)
			{
				case 0:
					iVar2 = 2;
					break;
				case 1:
					iVar2 = 3;
					break;
				case 2:
					iVar2 = 4;
					break;
				default:
					return 0;
			}
			if (func_910(iVar2) && func_1041(iVar2))
			{
				iVar5 = func_445(iVar2);
				iVar1 = func_1227(iVar5);
				if (func_1228(uParam0, iVar1, iVar2, iVar4))
				{
					iVar4++;
				}
			}
		}
		iVar3++;
	}
	return 1;
}

int func_676(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_289(uParam0);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		switch (iVar1)
		{
			case 0:
				iVar2 = 0;
				break;
			case 1:
				iVar2 = 2;
				break;
			case 2:
				iVar2 = 3;
				break;
			case 3:
				iVar2 = 4;
				break;
			default:
				return 0;
		}
		if (func_1213(iVar1, iParam1, iParam2, iVar0))
		{
			if (!func_1229(uParam0, iVar2, iVar1))
			{
			}
		}
		iVar1++;
	}
	if (iVar0 == 5)
	{
		if (func_1213(4, iParam1, iParam2, iVar0))
		{
			if (!func_1230(uParam0, 4))
			{
			}
		}
	}
	return 1;
}

int func_677(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_289(uParam0);
	Var1.f_9 = -1591664384;
	iVar15 = func_1231(0);
	iVar16 = 0;
	iVar17 = 0;
	if (func_1213(iVar16, iParam1, iParam2, iVar0))
	{
		if (func_1232(&Var1, 0))
		{
			if (func_1233(uParam0, Var1, iVar16))
			{
				iVar16++;
			}
		}
	}
	iVar17 = 0;
	while (iVar17 < iVar15)
	{
		if (func_1213(iVar16, iParam1, iParam2, iVar0))
		{
			if (func_1234(iVar17, &iVar18))
			{
				if (func_1235(iVar18, &Var1, 0))
				{
					if (func_1233(uParam0, Var1, iVar16))
					{
						iVar16++;
					}
				}
			}
		}
		iVar17++;
	}
	iVar19 = func_1236(0);
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < iVar19)
	{
		if (func_1237(iVar17, &Var1, 0))
		{
			if (func_1213(iVar16, iParam1, iParam2, iVar0))
			{
				if (func_1233(uParam0, Var1, iVar16))
				{
					iVar16++;
				}
			}
		}
		iVar17++;
	}
	Var20.f_9 = -1591664384;
	iVar34 = (iVar0 - iVar16);
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < iVar34)
	{
		if (func_1213(iVar16, iParam1, iParam2, iVar0))
		{
			if (func_1233(uParam0, Var20, iVar16))
			{
				iVar16++;
			}
		}
		iVar17++;
	}
	return 1;
}

int func_678(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_289(uParam0);
	func_1238(&(Global_1946804->f_1497));
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (func_1213(iVar2, iParam1, iParam2, iVar0))
		{
			if (func_1239(uParam0, iVar2, iVar1))
			{
				iVar1++;
			}
		}
		iVar2++;
	}
	return 1;
}

int func_679(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_1098();
	iVar1 = func_1097(uParam0->f_3);
	iVar3 = 0;
	while (iVar3 < iVar0)
	{
		if (func_1213(iVar2, iParam1, iParam2, iVar0))
		{
			if (!func_1099(iVar3, &iVar4))
			{
			}
			else if (!func_1100(iVar1, iVar4))
			{
			}
			else if (iVar4 == iVar1)
			{
			}
			else if (func_1240(uParam0, iVar4, iVar2))
			{
				iVar2++;
			}
		}
		iVar3++;
	}
	return 1;
}

int func_680(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_289(uParam0);
	iVar4 = 0;
	while (iVar4 < 130)
	{
		if (func_1213(iVar1, iParam1, iParam2, iVar0))
		{
			iVar2 = -1;
			if (!func_111(iVar4))
			{
			}
			else if (!func_803(iVar4))
			{
			}
			else
			{
				iVar2 = func_1063(func_1062(iVar4, 1, 1));
				if (!func_717(iVar2))
				{
				}
				else if (iVar2 == 5)
				{
				}
				else if (func_1064(iVar3, iVar2))
				{
				}
				else if (func_1241(uParam0, iVar2, iVar1))
				{
					func_1065(&iVar3, iVar2);
					iVar1++;
				}
			}
		}
		iVar4++;
	}
	return 1;
}

int func_681(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_289(uParam0);
	if (func_125() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 180)
		{
			if (func_1068(&(Global_40.f_9910[iVar1])) && func_1069(&(Global_40.f_9910[iVar1]), -1))
			{
				if (func_1213(iVar2, iParam1, iParam2, iVar0))
				{
					if (func_1242(uParam0, *Global_40.f_9910[iVar1], iVar2))
					{
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	return 1;
}

int func_682(int iParam0, int iParam1)
{
	if (!_databinding_is_data_id_valid(*iParam1))
	{
		return 0;
	}
	iParam0->f_1 = _databinding_read_data_int_from_parent(*iParam1, func_649());
	*iParam0 = _databinding_read_data_int_from_parent(*iParam1, func_597());
	iParam0->f_2 = _databinding_read_data_int_from_parent(*iParam1, func_716());
	iParam0->f_3 = _databinding_read_data_int_from_parent(*iParam1, func_1052());
	iParam0->f_4 = _databinding_read_data_int_from_parent(*iParam1, func_1053());
	iParam0->f_5 = { func_1110(iParam1) };
	iParam0->f_9 = _databinding_read_data_bool_from_parent(*iParam1, func_1164());
	iParam0->f_10 = _databinding_read_data_hash_string_from_parent(*iParam1, func_683());
	return 1;
}

char* func_683()
{
	return "uiPaletteOptionItemEnum";
}

char* func_684()
{
	return "uiPaletteOptionItemType";
}

char* func_685()
{
	return "uiPaletteOptionItemLayoutLinkID";
}

bool func_686(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	_databinding_add_data_int(*iParam2, func_649(), -1968468235);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	_databinding_add_data_hash(*iParam2, func_1243(), iParam1);
	bVar0 = true;
	if (func_534(uParam0, func_299(uParam0), iParam1))
	{
		bVar0 = false;
	}
	if (uParam0->f_2031.f_119)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(iParam1);
		Stack.Push(-1968468235);
		Call_Loc(uParam0->f_2031.f_120);
		if (!StackVal)
		{
			bVar0 = false;
		}
	}
	iVar1 = iParam5;
	bVar3 = true;
	if (func_262(uParam0) == 310306577)
	{
		iVar2 = iParam4;
		if (iVar2 == 0)
		{
			if (!func_1208(uParam0, func_299(uParam0), iParam1, &iVar2))
			{
				func_1244(uParam0, func_299(uParam0), iParam1, &iVar2, &iParam6);
				bVar3 = false;
			}
		}
		else
		{
			bVar3 = func_634(uParam0, iVar2, iVar1, iParam6);
		}
	}
	else if (!func_1208(uParam0, func_299(uParam0), iParam1, &iVar2))
	{
		bVar3 = false;
	}
	if (bVar0)
	{
		if (iVar2 != 0)
		{
			iVar1 = func_896(uParam0, iVar2);
			_databinding_add_data_hash(*iParam2, func_683(), iVar2);
			_databinding_add_data_hash(*iParam2, func_684(), iVar1);
			_databinding_add_data_int(*iParam2, func_685(), iParam6);
			if (func_1245(uParam0, iVar2, &uVar4, &cVar8, 1))
			{
				_databinding_add_data_bool(*iParam2, "iconVisible", true);
				_databinding_add_data_string(*iParam2, "iconTextureDict", &uVar4);
				_databinding_add_data_string(*iParam2, "iconTexture", &cVar8);
			}
			else if (!func_1246(uParam0, iVar2, &Var12, 164843734))
			{
				_databinding_add_data_bool(*iParam2, "iconVisible", true);
				_databinding_add_data_string(*iParam2, "iconTextureDict", "");
				_databinding_add_data_string(*iParam2, "iconTexture", "");
			}
			else
			{
				_databinding_add_data_bool(*iParam2, "iconVisible", true);
				_databinding_add_data_string(*iParam2, "iconTextureDict", Var12.f_1);
				_databinding_add_data_string(*iParam2, "iconTexture", Var12);
			}
			_databinding_add_data_bool(*iParam2, "equipped", bVar3);
			if (func_262(uParam0) == 1705401718)
			{
				_databinding_add_data_bool(*iParam2, "iconVisible", bVar3);
			}
		}
		else
		{
			_databinding_add_data_bool(*iParam2, "iconVisible", false);
			_databinding_add_data_bool(*iParam2, "equipped", false);
			_databinding_add_data_hash(*iParam2, func_683(), -1);
			_databinding_add_data_hash(*iParam2, func_684(), -1);
			_databinding_add_data_int(*iParam2, func_685(), -1);
		}
	}
	bVar15 = func_535(uParam0, func_299(uParam0), iParam1);
	_databinding_add_data_bool(*iParam2, func_1114(), bVar15);
	_databinding_add_data_bool(*iParam2, func_1164(), bVar0);
	return true;
}

bool func_687(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	_databinding_add_data_int(*iParam2, func_649(), 336033112);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	_databinding_add_data_hash(*iParam2, func_1243(), iParam1);
	bVar0 = true;
	Var1.f_9 = -1591664384;
	if (iParam1 == -2028811010 || iParam1 == -1671231179)
	{
		if (!func_1247(func_960(uParam0), &Var1, func_961(uParam0)))
		{
			func_640(uParam0, -329058787);
			bVar0 = false;
		}
	}
	if (func_1107(uParam0, iParam1) != 94016929)
	{
		if (func_256(uParam0, func_299(uParam0), iParam1))
		{
			bVar0 = false;
		}
	}
	bVar23 = func_257(uParam0, func_299(uParam0), iParam1);
	_databinding_add_data_bool(*iParam2, func_1114(), bVar23);
	if (uParam0->f_2031.f_119)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(iParam1);
		Stack.Push(336033112);
		Call_Loc(uParam0->f_2031.f_120);
		if (!StackVal)
		{
			bVar0 = false;
		}
	}
	_databinding_add_data_bool(*iParam2, func_1164(), bVar0);
	_databinding_add_data_bool(*iParam2, "iconVisible", false);
	_databinding_add_data_string(*iParam2, "iconTextureDict", "");
	_databinding_add_data_string(*iParam2, "iconTexture", "");
	return true;
}

bool func_688(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	iVar15 = iParam1;
	Var7 = { func_1248(iVar15) };
	if (iVar15 == -1 || iVar15 >= 7)
	{
		return false;
	}
	if (iVar15 == 0)
	{
		bVar3 = true;
		bVar6 = (func_984(uParam0, 4096) && func_910(0));
	}
	bVar4 = func_910(iVar15);
	bVar5 = (iVar15 == 4 && func_1249());
	if (bVar4)
	{
		iVar1 = func_1250(iVar15);
		iVar2 = func_445(iVar15);
		iVar0 = func_1227(iVar2);
		if (is_string_null_or_empty(&Var7))
		{
			StringCopy(&Var7, _get_label_text_by_hash(get_hash_key(func_1251(iVar1))), 64);
		}
		if (!func_278(iVar0, 0))
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	_int_to_string(iParam1, "%i", &uVar16);
	*iParam2 = _databinding_add_data_container(uParam0->f_2031.f_59, &uVar16);
	_databinding_add_data_int(*iParam2, func_649(), 193788635);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	_databinding_add_data_int(*iParam2, func_597(), iVar0);
	if (bVar4)
	{
		if (bVar3)
		{
			_databinding_add_data_int(*iParam2, "frontSlotTextureDict", -437533031);
			if (func_720() == 0 && func_721() != 5)
			{
				_databinding_add_data_int(*iParam2, "frontSlotTexture", 1210165179);
			}
			else
			{
				_databinding_add_data_int(*iParam2, "frontSlotTexture", -1715189579);
			}
		}
		else
		{
			_databinding_add_data_int(*iParam2, "frontSlotTextureDict", -437533031);
			_databinding_add_data_int(*iParam2, "frontSlotTexture", 444737100);
		}
	}
	else
	{
		_databinding_add_data_int(*iParam2, "frontSlotTextureDict", -437533031);
		if (bVar3)
		{
			_databinding_add_data_int(*iParam2, "frontSlotTexture", -1715189579);
		}
		else
		{
			_databinding_add_data_int(*iParam2, "frontSlotTexture", 1220803671);
		}
	}
	if (bVar4)
	{
		_databinding_add_data_string(*iParam2, func_1252(), &Var7);
	}
	else if (bVar3)
	{
		_databinding_add_data_string(*iParam2, func_1252(), _get_label_text_by_hash(-1669636523));
	}
	else
	{
		_databinding_add_data_string(*iParam2, func_1252(), _get_label_text_by_hash(-2096252882));
	}
	if (bVar3)
	{
		_databinding_add_data_bool(*iParam2, func_1164(), (bVar4 && bVar6));
	}
	else
	{
		_databinding_add_data_bool(*iParam2, func_1164(), bVar4);
	}
	if (bVar5)
	{
		_databinding_add_data_bool(*iParam2, "backTextureVisible", true);
		_databinding_add_data_int(*iParam2, "backTextureDict", 1210712530);
		_databinding_add_data_int(*iParam2, "backTexture", 566347780);
	}
	return true;
}

bool func_689(var uParam0, int iParam1, int iParam2, struct<4> Param3, int iParam7)
{
	_int_to_string(iParam2, "%i", &uVar0);
	*iParam7 = _databinding_add_data_container(uParam0->f_2031.f_59, &uVar0);
	_databinding_add_data_int_by_hash(*iParam7, -156023664, -437533031);
	_databinding_add_data_int_by_hash(*iParam7, -231316707, -1327110633);
	_databinding_add_data_int(*iParam7, func_649(), 1119253406);
	_databinding_add_data_int(*iParam7, func_716(), iParam2);
	_databinding_add_data_hash(*iParam7, func_597(), iParam1);
	_databinding_add_data_int(*iParam7, "frontSlotTextureColour", 1105014447);
	func_1253(iParam7, Param3);
	if (func_278(iParam1, 0))
	{
		_databinding_add_data_string(*iParam7, func_1243(), func_1159(iParam1));
		_databinding_add_data_bool(*iParam7, "frontSlotTextureVisible", true);
		_databinding_add_data_bool(*iParam7, func_1164(), true);
		if (func_912(&Param3, 0))
		{
			_databinding_add_data_bool(*iParam7, "backTextureVisible", true);
			_databinding_add_data_int(*iParam7, "backTextureDict", 1210712530);
			_databinding_add_data_int(*iParam7, "backTexture", -1725710676);
		}
		else
		{
			_databinding_add_data_bool(*iParam7, "backTextureVisible", false);
		}
	}
	else
	{
		_databinding_add_data_string(*iParam7, func_1243(), _create_var_string(2, "SHOP_EMPTY_SADDLE_SLOT"));
		_databinding_add_data_bool(*iParam7, "frontSlotTextureVisible", false);
		_databinding_add_data_bool(*iParam7, func_1164(), false);
	}
	return true;
}

bool func_690(var uParam0, int iParam1)
{
	*iParam1 = _databinding_add_data_container(uParam0->f_2031.f_59, "SADDLE");
	_databinding_add_data_int(*iParam1, func_649(), 1837492866);
	_databinding_add_data_int(*iParam1, func_716(), 0);
	_databinding_add_data_int(*iParam1, "frontSlotTextureDict", -437533031);
	_databinding_add_data_int(*iParam1, "frontSlotTexture", -1327110633);
	_databinding_add_data_int(*iParam1, "frontSlotTextureColour", 1105014447);
	if (func_720() == 3)
	{
		_databinding_add_data_hash(*iParam1, func_1243(), -5180795);
	}
	else if (func_720() == 1)
	{
		_databinding_add_data_hash(*iParam1, func_1243(), -50782933);
	}
	_databinding_add_data_bool(*iParam1, func_1164(), true);
	return true;
}

bool func_691(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam3 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	bVar0 = true;
	_databinding_add_data_int(*iParam3, func_597(), iParam1);
	_databinding_add_data_int(*iParam3, func_649(), -1080155519);
	_databinding_add_data_int(*iParam3, func_716(), iParam2);
	iVar9 = func_1001(func_1254(iParam1));
	iVar10 = iParam2;
	iVar11 = get_hash_key(func_1255(iVar9));
	StringCopy(&cVar12, _get_label_text_by_hash(iVar11), 64);
	Var20 = { func_1248(iVar10) };
	if (iVar10 != -1 && !_0x375f5870a7b8bec1(&Var20))
	{
		Var1 = { Var20 };
	}
	else
	{
		Var1 = { cVar12 };
	}
	_databinding_add_data_string(*iParam3, func_1252(), &Var1);
	_databinding_add_data_bool(*iParam3, "showQuantity", false);
	_databinding_add_data_bool(*iParam3, "forSale", true);
	_databinding_add_data_bool(*iParam3, "owned", false);
	_databinding_add_data_bool(*iParam3, "locked", false);
	_databinding_add_data_bool(*iParam3, "soldOut", false);
	_databinding_add_data_bool(*iParam3, "useGoldPrice", false);
	if (uParam0->f_2031.f_119)
	{
		Stack.Push(bVar0);
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(iParam1);
		Stack.Push(-1080155519);
		Call_Loc(uParam0->f_2031.f_120);
		bVar0 = (StackVal && StackVal);
	}
	_databinding_add_data_bool(*iParam3, func_1164(), bVar0);
	iVar28 = iParam2;
	fVar29 = func_1015(iParam1, func_226(iVar28));
	_databinding_add_data_int(*iParam3, "price", round(fVar29));
	return true;
}

bool func_692(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	_databinding_add_data_int(*iParam2, func_597(), iParam1);
	_databinding_add_data_int(*iParam2, func_649(), -760956867);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	_databinding_add_data_bool(*iParam2, "tickVisible", func_634(uParam0, iParam1, -760956867, -1));
	_databinding_add_data_bool(*iParam2, func_1114(), func_1075(uParam0, iParam1));
	bVar0 = func_909(uParam0, iParam1, -760956867);
	_databinding_add_data_bool(*iParam2, func_1164(), bVar0);
	_databinding_add_data_hash(*iParam2, func_1243(), func_1154(iParam1));
	_databinding_add_data_hash(*iParam2, "itemDescription", func_1256(iParam1));
	if (func_1246(uParam0, iParam1, &Var1, 164843734))
	{
		_databinding_add_data_string(*iParam2, "textureDictionary", Var1.f_1);
		_databinding_add_data_string(*iParam2, "texture", Var1);
	}
	_databinding_add_data_int(*iParam2, "not_script_data_int_3", 1);
	return true;
}

bool func_693(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	_databinding_add_data_int(*iParam2, func_597(), iParam1);
	_databinding_add_data_int(*iParam2, func_649(), 38807286);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	_databinding_add_data_bool(*iParam2, "tickVisible", func_634(uParam0, iParam1, 38807286, -1));
	_databinding_add_data_bool(*iParam2, func_1114(), func_1075(uParam0, iParam1));
	bVar0 = func_909(uParam0, iParam1, 38807286);
	_databinding_add_data_bool(*iParam2, func_1164(), bVar0);
	_databinding_add_data_hash(*iParam2, func_1243(), func_1154(iParam1));
	iVar1 = func_1256(iParam1);
	_databinding_add_data_hash(*iParam2, "itemDescription", iVar1);
	if (func_1246(uParam0, iParam1, &Var2, 164843734))
	{
		_databinding_add_data_string(*iParam2, "textureDictionary", Var2.f_1);
		_databinding_add_data_string(*iParam2, "texture", Var2);
	}
	_databinding_add_data_int(*iParam2, "not_script_data_int_3", 1);
	return true;
}

bool func_694(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam4 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	_databinding_add_data_int(*iParam4, func_649(), -339889117);
	_databinding_add_data_int(*iParam4, func_716(), iParam1);
	_databinding_add_data_int(*iParam4, func_597(), iParam1);
	_databinding_add_data_int(*iParam4, func_1052(), iParam2);
	_databinding_add_data_int(*iParam4, func_1053(), iParam3);
	_databinding_add_data_hash(*iParam4, func_1243(), func_1154(iParam1));
	bVar0 = true;
	if (uParam0->f_2031.f_119)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(func_1154(iParam1));
		Stack.Push(-339889117);
		Call_Loc(uParam0->f_2031.f_120);
		bVar0 = StackVal;
	}
	if (_is_weapon_two_handed(iParam1))
	{
		iVar1 = 10;
		iVar2 = 9;
	}
	else if (_is_weapon_one_handed(iParam1))
	{
		iVar1 = 2;
		iVar2 = 3;
	}
	else if (_is_weapon_melee(iParam1))
	{
		iVar2 = 4;
		iVar1 = 4;
	}
	if (func_916(Global_35, 1, iVar1, 0) == iParam1 || func_916(Global_35, 1, iVar2, 0) == iParam1)
	{
		_databinding_add_data_bool(*iParam4, "iconVisible", true);
		_databinding_add_data_hash(*iParam4, "iconTexture", 863205103);
	}
	else
	{
		_databinding_add_data_bool(*iParam4, "iconVisible", false);
	}
	if (bParam5)
	{
		if (func_914(iParam1, 1728382685, 0) && func_914(iParam1, -649335959, 0))
		{
			_databinding_add_data_hash_by_hash(*iParam4, func_655(), 1728382685);
			_databinding_add_data_int_by_hash(*iParam4, func_650(), 0);
			_databinding_add_data_int_by_hash(*iParam4, func_651(), 2);
		}
		_databinding_add_data_bool_by_hash(*iParam4, func_1257(), false);
	}
	_databinding_add_data_bool(*iParam4, func_1114(), func_1075(uParam0, iParam1));
	_databinding_add_data_bool(*iParam4, func_1164(), bVar0);
	return true;
}

bool func_695(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 >= 3 || iParam1 < 0)
	{
		return false;
	}
	_int_to_string(iParam1, "%d", &uVar0);
	*iParam2 = _databinding_add_data_container(uParam0->f_2031.f_59, &uVar0);
	iVar4 = iParam1;
	bVar5 = true;
	iVar6 = func_263(uParam0);
	if (!func_921(iVar6, iVar4, &uVar7))
	{
		bVar5 = false;
	}
	_databinding_add_data_int(*iParam2, func_649(), -395279071);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	_databinding_add_data_string(*iParam2, func_1252(), _create_var_string(0, func_653(iVar4)));
	if (bVar5)
	{
		if (Global_1946804->f_1329.f_1[iVar4]->f_7 > 1)
		{
			iVar8 = Global_1946804->f_1329.f_1[iVar4]->f_8;
			iVar9 = Global_1946804->f_1329.f_1[iVar4][iVar8];
			_databinding_add_data_hash_by_hash(*iParam2, func_655(), iVar9);
			_databinding_add_data_int_by_hash(*iParam2, func_650(), iVar8);
		}
		else
		{
			bVar5 = false;
		}
	}
	_databinding_add_data_bool_by_hash(*iParam2, func_1257(), bVar5);
	_databinding_add_data_int_by_hash(*iParam2, func_651(), Global_1946804->f_1329.f_1[iVar4]->f_7);
	if (uParam0->f_2031.f_119)
	{
		Stack.Push(bVar5);
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(iParam1);
		Stack.Push(-395279071);
		Call_Loc(uParam0->f_2031.f_120);
		bVar5 = (StackVal && StackVal);
	}
	_databinding_add_data_bool(*iParam2, func_1164(), bVar5);
	return true;
}

bool func_696(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam4 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	_databinding_add_data_int(*iParam4, func_649(), -348190488);
	_databinding_add_data_int(*iParam4, func_716(), iParam1);
	_databinding_add_data_int(*iParam4, func_597(), iParam1);
	_databinding_add_data_int(*iParam4, func_1052(), iParam2);
	_databinding_add_data_int(*iParam4, func_1053(), iParam3);
	_databinding_add_data_hash(*iParam4, func_1243(), func_1154(iParam1));
	bVar3 = func_1258(uParam0, iParam2, iParam3, &iVar1);
	_databinding_add_data_bool(*iParam4, "equipped", bVar3);
	if (!bVar3)
	{
		if (func_895(uParam0, iParam2, iParam3, &iVar1))
		{
		}
	}
	if (func_278(iVar1, 0))
	{
		if (bParam5)
		{
			if (func_1259(uParam0, iParam4, iVar1))
			{
			}
		}
	}
	_databinding_add_data_bool(*iParam4, "onHorse", func_1260(uParam0, iParam2, iParam3, &uVar0));
	_databinding_add_data_hash(*iParam4, func_683(), iVar1);
	_databinding_add_data_bool(*iParam4, "addIconVisible", true);
	_databinding_add_data_string(*iParam4, "addIconTextureDict", "itemtype_textures");
	_databinding_add_data_string(*iParam4, "addIconTexture", "ITEMTYPE_UPGRADES");
	bVar4 = true;
	iVar5 = func_263(uParam0);
	if (!does_entity_exist(iVar5) || is_entity_dead(iVar5))
	{
		bVar4 = false;
	}
	else
	{
		bVar4 = func_908(iVar5, iVar1, &uVar2);
	}
	if (uParam0->f_2031.f_119)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(func_1154(iParam1));
		Stack.Push(-348190488);
		Call_Loc(uParam0->f_2031.f_120);
		bVar4 = StackVal;
	}
	_databinding_add_data_bool(*iParam4, func_1164(), bVar4);
	_databinding_add_data_bool(*iParam4, func_1114(), func_257(uParam0, iParam2, iParam3));
	return true;
}

bool func_697(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	_databinding_add_data_int(*iParam2, func_597(), iParam1);
	_databinding_add_data_int(*iParam2, func_649(), -384358143);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	_databinding_add_data_hash(*iParam2, func_1243(), func_1154(iParam1));
	bVar0 = true;
	bVar1 = false;
	bVar2 = false;
	bVar3 = true;
	bVar4 = false;
	iVar5 = 0;
	bVar1 = func_931(iParam1, 0);
	bVar2 = func_1152(uParam0, iParam1);
	iVar5 = func_902(iParam1, 0);
	bVar3 = iVar5 > 0;
	func_1261(iParam2, bVar2, bVar4, bVar1, bVar3, iVar5, 0);
	bVar0 = func_909(uParam0, iParam1, -384358143);
	_databinding_add_data_bool(*iParam2, func_1164(), bVar0);
	_databinding_add_data_bool(*iParam2, func_1114(), func_1075(uParam0, iParam1));
	return true;
}

bool func_698(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	_databinding_add_data_int(*iParam2, func_597(), iParam1);
	_databinding_add_data_int(*iParam2, func_649(), -1395073769);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	_databinding_add_data_hash(*iParam2, func_1243(), func_1154(iParam1));
	bVar0 = true;
	bVar1 = false;
	bVar2 = false;
	bVar3 = true;
	bVar4 = false;
	iVar5 = 0;
	bVar1 = func_931(iParam1, 1);
	bVar2 = func_1152(uParam0, iParam1);
	iVar5 = func_902(iParam1, 0);
	bVar3 = iVar5 > 0;
	func_1261(iParam2, bVar2, bVar4, bVar1, bVar3, iVar5, 0);
	bVar0 = func_909(uParam0, iParam1, -1395073769);
	_databinding_add_data_bool(*iParam2, func_1164(), bVar0);
	_databinding_add_data_bool(*iParam2, func_1114(), func_1075(uParam0, iParam1));
	return true;
}

bool func_699(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	_databinding_add_data_int(*iParam2, func_597(), iParam1);
	_databinding_add_data_int(*iParam2, func_649(), -853534656);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	_databinding_add_data_hash(*iParam2, func_1243(), func_1154(iParam1));
	bVar0 = true;
	bVar1 = false;
	bVar2 = false;
	bVar3 = true;
	bVar4 = func_634(uParam0, iParam1, -853534656, -1);
	iVar5 = 0;
	bVar1 = func_931(iParam1, 1);
	bVar2 = func_1152(uParam0, iParam1);
	iVar5 = func_902(iParam1, 0);
	bVar3 = iVar5 > 0;
	func_1261(iParam2, bVar2, bVar4, bVar1, bVar3, iVar5, 1);
	bVar0 = func_909(uParam0, iParam1, -853534656);
	_databinding_add_data_bool(*iParam2, func_1164(), bVar0);
	bVar6 = func_1075(uParam0, iParam1);
	_databinding_add_data_bool(*iParam2, func_1114(), bVar6);
	if (bParam3)
	{
		if (func_1259(uParam0, iParam2, iParam1))
		{
		}
	}
	return true;
}

bool func_700(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	_databinding_add_data_int(*iParam2, func_597(), iParam1);
	_databinding_add_data_int(*iParam2, func_649(), -349391286);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	_databinding_add_data_hash(*iParam2, func_1243(), func_1154(iParam1));
	bVar0 = true;
	bVar1 = false;
	bVar2 = false;
	bVar3 = true;
	bVar4 = false;
	iVar5 = 0;
	iVar6 = 600942249;
	func_932(uParam0->f_2, &iVar6);
	bVar2 = (func_1152(uParam0, iParam1) || func_1262(iParam1, iVar6, 1));
	bVar1 = func_931(iParam1, 1);
	iVar5 = func_939(iParam1, iVar6);
	bVar3 = iVar5 > 0;
	func_1261(iParam2, bVar2, bVar4, bVar1, bVar3, iVar5, bVar1);
	bVar0 = func_909(uParam0, iParam1, -349391286);
	_databinding_add_data_bool(*iParam2, func_1164(), bVar0);
	_databinding_add_data_bool(*iParam2, func_1114(), func_1075(uParam0, iParam1));
	if (bParam3)
	{
		if (func_826(iParam1) == -1037537535)
		{
			func_1259(uParam0, iParam2, iParam1);
		}
	}
	return true;
}

bool func_701(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	_databinding_add_data_int(*iParam2, func_597(), iParam1);
	_databinding_add_data_int(*iParam2, func_649(), 2036169888);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	_databinding_add_data_hash(*iParam2, func_1243(), func_1154(iParam1));
	func_1261(iParam2, 0, 0, 0, 0, 0, 0);
	_databinding_add_data_bool(*iParam2, func_1164(), false);
	_databinding_add_data_bool(*iParam2, func_1114(), func_1075(uParam0, iParam1));
	return true;
}

bool func_702(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	_databinding_add_data_int(*iParam2, func_597(), iParam1);
	_databinding_add_data_int(*iParam2, func_649(), -239176093);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	iVar0 = func_1000(iParam1);
	iVar1 = func_1001(iVar0);
	_databinding_add_data_hash(*iParam2, func_1243(), get_hash_key(func_1255(iVar1)));
	bVar2 = true;
	bVar3 = false;
	bVar4 = false;
	bVar5 = true;
	bVar6 = false;
	iVar7 = 0;
	bVar3 = func_931(iParam1, 0);
	bVar4 = func_1152(uParam0, iParam1);
	iVar7 = func_902(iParam1, 0);
	bVar5 = iVar7 > 0;
	func_1261(iParam2, bVar4, bVar6, bVar3, bVar5, iVar7, 0);
	bVar2 = func_909(uParam0, iParam1, -239176093);
	_databinding_add_data_bool(*iParam2, func_1164(), bVar2);
	_databinding_add_data_bool(*iParam2, func_1114(), func_1075(uParam0, iParam1));
	return true;
}

bool func_703(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	_databinding_add_data_int(*iParam2, func_597(), iParam1);
	_databinding_add_data_int(*iParam2, func_649(), 1394581936);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	_databinding_add_data_hash(*iParam2, func_1243(), func_1154(iParam1));
	bVar0 = true;
	bVar1 = false;
	bVar2 = false;
	bVar3 = true;
	bVar4 = false;
	iVar5 = 0;
	bVar4 = func_634(uParam0, iParam1, 1394581936, -1);
	bVar1 = func_834(uParam0, iParam1, 1394581936);
	bVar2 = func_1152(uParam0, iParam1);
	iVar5 = func_902(iParam1, 0);
	bVar3 = !bVar1;
	func_1261(iParam2, bVar2, bVar4, bVar1, bVar3, iVar5, 1);
	bVar0 = func_909(uParam0, iParam1, 1394581936);
	_databinding_add_data_bool(*iParam2, func_1164(), bVar0);
	_databinding_add_data_bool(*iParam2, func_1114(), func_1075(uParam0, iParam1));
	return true;
}

bool func_704(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	_databinding_add_data_int(*iParam2, func_597(), iParam1);
	_databinding_add_data_int(*iParam2, func_649(), 777890122);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	_databinding_add_data_hash(*iParam2, func_1243(), func_1154(iParam1));
	bVar0 = true;
	bVar1 = false;
	bVar2 = false;
	bVar3 = true;
	bVar4 = false;
	iVar5 = 0;
	bVar4 = func_634(uParam0, iParam1, 777890122, -1);
	bVar1 = func_834(uParam0, iParam1, 777890122);
	bVar3 = !func_834(uParam0, iParam1, 777890122);
	bVar2 = func_1152(uParam0, iParam1);
	iVar5 = func_902(iParam1, 0);
	func_1261(iParam2, bVar2, bVar4, bVar1, bVar3, iVar5, 1);
	bVar0 = func_909(uParam0, iParam1, 777890122);
	_databinding_add_data_bool(*iParam2, func_1164(), bVar0);
	_databinding_add_data_bool(*iParam2, func_1114(), func_1075(uParam0, iParam1));
	return true;
}

bool func_705(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	_databinding_add_data_int(*iParam2, func_597(), iParam1);
	_databinding_add_data_int(*iParam2, func_649(), -1502467280);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	_databinding_add_data_hash(*iParam2, func_1243(), func_1154(iParam1));
	bVar0 = true;
	bVar1 = false;
	bVar2 = false;
	bVar3 = true;
	bVar4 = false;
	iVar5 = 0;
	bVar4 = func_634(uParam0, iParam1, -1502467280, -1);
	bVar1 = func_834(uParam0, iParam1, -1502467280);
	bVar3 = !func_834(uParam0, iParam1, -1502467280);
	bVar2 = func_1152(uParam0, iParam1);
	iVar5 = func_902(iParam1, 0);
	func_1261(iParam2, bVar2, bVar4, bVar1, bVar3, iVar5, 1);
	if (uParam0->f_2031.f_119)
	{
		Stack.Push(bVar0);
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(iParam1);
		Stack.Push(-1502467280);
		Call_Loc(uParam0->f_2031.f_120);
		bVar0 = (StackVal && StackVal);
	}
	bVar0 = func_909(uParam0, iParam1, -1502467280);
	_databinding_add_data_bool(*iParam2, func_1164(), bVar0);
	_databinding_add_data_bool(*iParam2, func_1114(), func_1075(uParam0, iParam1));
	return true;
}

bool func_706(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	_databinding_add_data_int(*iParam2, func_597(), iParam1);
	_databinding_add_data_int(*iParam2, func_649(), -584027224);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	_databinding_add_data_hash(*iParam2, func_1243(), func_1154(iParam1));
	bVar0 = true;
	bVar1 = false;
	bVar2 = false;
	bVar3 = true;
	bVar4 = false;
	iVar5 = 0;
	bVar1 = func_931(iParam1, 0);
	bVar2 = func_1152(uParam0, iParam1);
	iVar5 = func_902(iParam1, 0);
	bVar3 = iVar5 > 0;
	bVar4 = func_634(uParam0, iParam1, -584027224, -1);
	func_1261(iParam2, bVar2, bVar4, bVar1, bVar3, iVar5, 0);
	bVar0 = func_909(uParam0, iParam1, -584027224);
	_databinding_add_data_bool(*iParam2, func_1164(), bVar0);
	_databinding_add_data_bool(*iParam2, func_1114(), func_1075(uParam0, iParam1));
	return true;
}

bool func_707(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	bVar0 = true;
	if (func_820(iParam1))
	{
		bVar0 = false;
	}
	_databinding_add_data_int(*iParam2, func_597(), iParam1);
	_databinding_add_data_int(*iParam2, func_649(), 761079318);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	_databinding_add_data_hash(*iParam2, func_1243(), func_1154(iParam1));
	_databinding_add_data_bool(*iParam2, "new", func_1113(iParam1));
	_databinding_add_data_bool(*iParam2, "equipped", func_634(uParam0, iParam1, 761079318, -1));
	bVar1 = func_821(iParam1);
	if (func_907(iParam1))
	{
		bVar1 = false;
	}
	_databinding_add_data_bool(*iParam2, "onHorse", bVar1);
	if (func_1263(uParam0->f_2))
	{
		iVar3 = func_263(uParam0);
		if (!does_entity_exist(iVar3) || is_entity_dead(iVar3))
		{
			bVar2 = false;
		}
		bVar2 = func_908(iVar3, iParam1, &uVar4);
	}
	_databinding_add_data_bool(*iParam2, func_1164(), bVar2);
	_databinding_add_data_bool(*iParam2, func_1114(), func_1075(uParam0, iParam1));
	if (bParam3)
	{
		if (bVar0)
		{
			func_1259(uParam0, iParam2, iParam1);
		}
	}
	return true;
}

bool func_708(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	_databinding_add_data_int(*iParam2, func_597(), iParam1);
	_databinding_add_data_int(*iParam2, func_649(), -2056428614);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	_databinding_add_data_hash(*iParam2, func_1243(), func_1154(iParam1));
	_databinding_add_data_bool(*iParam2, "new", func_1113(iParam1));
	_databinding_add_data_bool(*iParam2, "equipped", func_634(uParam0, iParam1, 761079318, -1));
	bVar0 = false;
	if (func_1263(uParam0->f_2))
	{
		iVar1 = func_263(uParam0);
		if (!does_entity_exist(iVar1) || is_entity_dead(iVar1))
		{
			bVar0 = false;
		}
		bVar0 = func_908(iVar1, iParam1, &uVar2);
	}
	_databinding_add_data_bool(*iParam2, func_1164(), bVar0);
	_databinding_add_data_bool(*iParam2, func_1114(), func_1075(uParam0, iParam1));
	if (bParam3)
	{
		if (func_1259(uParam0, iParam2, iParam1))
		{
		}
	}
	return true;
}

bool func_709(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	bVar0 = true;
	if (func_820(iParam1))
	{
		bVar0 = false;
	}
	_databinding_add_data_int(*iParam2, func_597(), iParam1);
	_databinding_add_data_int(*iParam2, func_649(), 1942587409);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	_databinding_add_data_hash(*iParam2, func_1243(), func_1154(iParam1));
	_databinding_add_data_bool(*iParam2, "new", func_1113(iParam1));
	_databinding_add_data_bool(*iParam2, "equipped", func_634(uParam0, iParam1, 761079318, -1));
	_databinding_add_data_bool(*iParam2, "onHorse", func_821(iParam1));
	bVar1 = true;
	_databinding_add_data_bool(*iParam2, func_1164(), bVar1);
	_databinding_add_data_bool(*iParam2, func_1114(), func_1075(uParam0, iParam1));
	if (bParam3)
	{
		if (bVar0)
		{
			if (func_1259(uParam0, iParam2, iParam1))
			{
			}
		}
	}
	return true;
}

bool func_710(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	_databinding_add_data_int(*iParam2, func_597(), iParam1);
	_databinding_add_data_int(*iParam2, func_649(), 2077448405);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	_databinding_add_data_hash(*iParam2, func_1243(), func_1154(iParam1));
	_databinding_add_data_bool(*iParam2, "new", func_1113(iParam1));
	_databinding_add_data_bool(*iParam2, "equipped", func_634(uParam0, iParam1, 761079318, -1));
	_databinding_add_data_bool(*iParam2, "onHorse", func_821(iParam1));
	if (iParam1 == 166243423 && func_819() != 166243423)
	{
		bVar0 = false;
	}
	else
	{
		bVar0 = true;
	}
	_databinding_add_data_bool(*iParam2, func_1164(), bVar0);
	_databinding_add_data_bool(*iParam2, func_1114(), func_1075(uParam0, iParam1));
	if (bParam3)
	{
		if (func_1259(uParam0, iParam2, iParam1))
		{
		}
	}
	return true;
}

bool func_711(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	_databinding_add_data_int(*iParam2, func_649(), -1048755899);
	_databinding_add_data_int(*iParam2, func_597(), iParam1);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	iVar0 = 0;
	if (!func_1264(iParam1, -915411861, &iVar0, 0))
	{
	}
	Var1 = { func_1185(iParam1, 0, 1) };
	if (iVar0 > 0 && func_1265(iParam1, &Var1, 0, 0) > 1)
	{
		sVar6 = _create_var_string(10, "SHOP_LIST_ITEM_QUANTITY", func_1159(iParam1), iVar0);
		_databinding_add_data_string(*iParam2, func_1252(), sVar6);
	}
	else
	{
		_databinding_add_data_hash(*iParam2, func_1243(), func_1154(iParam1));
	}
	bVar7 = func_909(uParam0, iParam1, -1048755899);
	bVar8 = false;
	bVar9 = false;
	bVar10 = true;
	iVar11 = func_902(iParam1, 0);
	bVar8 = func_931(iParam1, 0);
	bVar9 = func_1152(uParam0, iParam1);
	iVar11 = func_902(iParam1, 0);
	bVar10 = iVar11 > 0;
	func_1261(iParam2, bVar9, 0, bVar8, bVar10, iVar11, 0);
	_databinding_add_data_bool(*iParam2, func_1164(), bVar7);
	return true;
}

bool func_712(var uParam0, int iParam1)
{
	*iParam1 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, -1352600334);
	_databinding_add_data_int(*iParam1, func_649(), -1352600334);
	_databinding_add_data_hash(*iParam1, func_1243(), 2119176479);
	_databinding_add_data_bool(*iParam1, "showQuantity", false);
	_databinding_add_data_bool(*iParam1, "forSale", true);
	_databinding_add_data_bool(*iParam1, "owned", false);
	_databinding_add_data_bool(*iParam1, "locked", false);
	_databinding_add_data_bool(*iParam1, "soldOut", false);
	_databinding_add_data_bool(*iParam1, "useGoldPrice", false);
	iVar0 = func_902(-1724045811, 0);
	_databinding_add_data_int(*iParam1, "price", iVar0);
	bVar1 = true;
	bVar1 = (func_1266() && func_360(1) >= iVar0);
	if (uParam0->f_2031.f_119)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(-1);
		Stack.Push(-1352600334);
		Call_Loc(uParam0->f_2031.f_120);
		if (!StackVal)
		{
			bVar1 = false;
		}
	}
	_databinding_add_data_bool(*iParam1, func_1164(), bVar1);
	return true;
}

bool func_713(var uParam0, int iParam1)
{
	*iParam1 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, -772187037);
	_databinding_add_data_int(*iParam1, func_649(), -772187037);
	_databinding_add_data_hash(*iParam1, func_1243(), 1406783678);
	Var0.f_9 = -1591664384;
	bVar22 = func_1247(func_960(uParam0), &Var0, func_961(uParam0));
	_databinding_add_data_bool(*iParam1, "showQuantity", false);
	_databinding_add_data_bool(*iParam1, "forSale", !bVar22);
	_databinding_add_data_bool(*iParam1, "owned", false);
	_databinding_add_data_bool(*iParam1, "locked", false);
	_databinding_add_data_bool(*iParam1, "soldOut", false);
	_databinding_add_data_bool(*iParam1, "useGoldPrice", false);
	iVar23 = round((func_866(Var0.f_16, Var0.f_20) * to_float(func_902(-898386032, 0))));
	_databinding_add_data_int(*iParam1, "price", iVar23);
	bVar24 = (func_360(1) >= iVar23 && !bVar22);
	if (uParam0->f_2031.f_119)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(-1);
		Stack.Push(-772187037);
		Call_Loc(uParam0->f_2031.f_120);
		if (!StackVal)
		{
			bVar24 = false;
		}
	}
	_databinding_add_data_bool(*iParam1, func_1164(), bVar24);
	return true;
}

bool func_714(var uParam0, int iParam1)
{
	*iParam1 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, -2092532275);
	_databinding_add_data_int(*iParam1, func_649(), -2092532275);
	_databinding_add_data_hash(*iParam1, func_1243(), -1873242174);
	bVar0 = ((!func_899() && func_793(1613651027, 1, 0)) && !func_631(func_632()));
	if (uParam0->f_2031.f_119)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(-1);
		Stack.Push(-2092532275);
		Call_Loc(uParam0->f_2031.f_120);
		if (!StackVal)
		{
			bVar0 = false;
		}
	}
	_databinding_add_data_bool(*iParam1, func_1164(), bVar0);
	return true;
}

bool func_715(var uParam0, int iParam1)
{
	*iParam1 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, 317179309);
	_databinding_add_data_int(*iParam1, func_649(), 317179309);
	_databinding_add_data_hash(*iParam1, func_1243(), 1362641624);
	bVar0 = true;
	if (uParam0->f_2031.f_119)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(-1);
		Stack.Push(317179309);
		Call_Loc(uParam0->f_2031.f_120);
		if (!StackVal)
		{
			bVar0 = false;
		}
	}
	_databinding_add_data_bool(*iParam1, func_1164(), bVar0);
	return true;
}

char* func_716()
{
	return "uiItemID";
}

bool func_717(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

bool func_718(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = _databinding_add_data_container(uParam0->f_2031.f_59, func_1267(iParam1));
	_databinding_add_data_int(*iParam2, func_649(), -698448975);
	_databinding_add_data_int(*iParam2, func_716(), iParam1);
	sVar0 = func_1268(iParam1);
	if (is_string_null_or_empty(sVar0))
	{
	}
	else
	{
		_databinding_add_data_hash(*iParam2, func_1243(), get_hash_key(sVar0));
	}
	_databinding_add_data_bool(*iParam2, "showQuantity", false);
	_databinding_add_data_bool(*iParam2, "forSale", true);
	_databinding_add_data_bool(*iParam2, "owned", false);
	_databinding_add_data_bool(*iParam2, "locked", false);
	_databinding_add_data_bool(*iParam2, "soldOut", false);
	_databinding_add_data_bool(*iParam2, "useGoldPrice", false);
	_databinding_add_data_bool(*iParam2, func_1164(), func_1269(iParam1));
	_databinding_add_data_int(*iParam2, "price", func_924(iParam1));
	return true;
}

bool func_719(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!_databinding_is_data_id_valid(*iParam3))
	{
		*iParam3 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, iParam1);
	}
	switch (iParam2)
	{
		case -2056428614:
		case 761079318:
		case 1942587409:
		case 2077448405:
			_databinding_add_data_bool(*iParam3, "equipped", func_634(uParam0, iParam1, iParam2, -1));
			_databinding_add_data_bool(*iParam3, "onHorse", func_821(iParam1));
			_databinding_add_data_bool(*iParam3, "rightImageVisible", false);
			break;
		default:
			if (func_634(uParam0, iParam1, iParam2, -1))
			{
				_databinding_add_data_bool(*iParam3, "equipped", true);
				_databinding_add_data_bool(*iParam3, "rightImageVisible", false);
			}
			else if (func_834(uParam0, iParam1, iParam2))
			{
				_databinding_add_data_bool(*iParam3, "equipped", false);
				_databinding_add_data_string(*iParam3, "rightImageDictionary", func_1270());
				_databinding_add_data_string(*iParam3, "rightImageTexture", "stamp_owned");
				_databinding_add_data_bool(*iParam3, "rightImageVisible", true);
			}
			break;
	}
	if (bParam4)
	{
		if (func_1245(uParam0, iParam1, &uVar0, &cVar4, 0))
		{
			_databinding_add_data_bool(*iParam3, "visible", true);
			_databinding_add_data_string(*iParam3, "textureDictionary", &uVar0);
			_databinding_add_data_string(*iParam3, "texture", &cVar4);
		}
		else if (!func_1246(uParam0, iParam1, &Var8, 164843734))
		{
			_databinding_add_data_bool(*iParam3, "visible", true);
			_databinding_add_data_string(*iParam3, "textureDictionary", "");
			_databinding_add_data_string(*iParam3, "texture", "");
		}
		else
		{
			_databinding_add_data_bool(*iParam3, "visible", true);
			_databinding_add_data_string(*iParam3, "textureDictionary", Var8.f_1);
			_databinding_add_data_string(*iParam3, "texture", Var8);
		}
	}
	return true;
}

int func_720()
{
	return Global_40.f_1095.f_3054.f_1;
}

int func_721()
{
	return Global_40.f_1095.f_3054;
}

bool func_722(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam4 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_61, iParam1);
	_databinding_add_data_int(*iParam4, func_649(), iParam3);
	_databinding_add_data_int(*iParam4, func_597(), iParam1);
	if (iParam3 == 1702073444 || func_612(iParam1, -495963434))
	{
		_databinding_add_data_int(*iParam4, func_1052(), iParam2);
	}
	_databinding_add_data_int(*iParam4, func_716(), iParam1);
	if (bParam5)
	{
		if (func_1245(uParam0, iParam1, &uVar0, &cVar4, 0))
		{
			_databinding_add_data_bool_by_hash(*iParam4, -1765302991, true);
			_databinding_add_data_string_by_hash(*iParam4, 1976702369, &uVar0);
			_databinding_add_data_string_by_hash(*iParam4, -1924991449, &cVar4);
		}
		else if (!func_1246(uParam0, iParam1, &Var8, 164843734))
		{
			_databinding_add_data_bool_by_hash(*iParam4, -1765302991, true);
			_databinding_add_data_hash_by_hash(*iParam4, 1976702369, 2);
			_databinding_add_data_hash_by_hash(*iParam4, -1924991449, 2);
		}
		else
		{
			_databinding_add_data_bool_by_hash(*iParam4, -1765302991, true);
			_databinding_add_data_string_by_hash(*iParam4, 1976702369, Var8.f_1);
			_databinding_add_data_string_by_hash(*iParam4, -1924991449, Var8);
		}
	}
	_databinding_add_data_bool(*iParam4, func_1114(), func_1075(uParam0, iParam1));
	_databinding_add_data_bool(*iParam4, "owned", func_834(uParam0, iParam1, iParam3));
	_databinding_add_data_bool(*iParam4, "equipped", func_634(uParam0, iParam1, iParam3, iParam2));
	bVar11 = func_909(uParam0, iParam1, iParam3);
	_databinding_add_data_bool(*iParam4, func_1164(), bVar11);
	return true;
}

int func_723(var uParam0)
{
	return *uParam0;
}

char* func_724()
{
	return "uiItemMetapedPreloadRequestMade";
}

char* func_725()
{
	return "uiItemMetapedPreloadRequest";
}

bool func_726()
{
	return Global_1946804->f_978;
}

int func_727(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (Global_1946804->f_2535.f_1 >= 5)
	{
		return 0;
	}
	if (!func_1271(iParam0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_731(iParam0);
	return func_1272(iParam1, iVar0, bParam2, 1);
}

bool func_728(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_729(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_730(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_335(Var0);
}

int func_731(int iParam0)
{
	Var1 = -961687407;
	if (func_125() == -1)
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
	return func_1273(iVar0);
}

int func_732(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_94(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_94(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_537(0))
	{
	}
	func_1274(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

bool func_733(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_734(int iParam0)
{
	if (func_125() != -1)
	{
		return false;
	}
	if ((is_thread_active((*Global_1347702)[iParam0]->f_42, false) && !func_1275((*Global_1347702)[iParam0]->f_15)) && !func_733((*Global_1347702)[iParam0]->f_13, 4))
	{
		return true;
	}
	return false;
}

bool func_735(int iParam0)
{
	if (func_125() != -1)
	{
		return false;
	}
	if (!func_238(iParam0))
	{
		return false;
	}
	return func_310((*Global_1347702)[iParam0]->f_15);
}

bool func_736(int iParam0)
{
	if (func_737((*Global_1347702)[iParam0]->f_15) == 2 || iParam0 == func_1276(Global_1347343->f_2))
	{
		return true;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 32 != 0)
	{
		return true;
	}
	fVar0 = vdist2(func_458(iParam0), Global_36);
	if (fVar0 < ((*Global_1347702)[iParam0]->f_16 * (*Global_1347702)[iParam0]->f_16))
	{
		return true;
	}
	return false;
}

int func_737(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_1277(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_738(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

int func_739()
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

void func_740()
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

bool func_741()
{
	if (func_125() != -1)
	{
		return false;
	}
	if (!func_158())
	{
		return false;
	}
	if (!func_120((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_120((*Global_1835011)[2]->f_1, 1) && func_120((*Global_1347702)[120]->f_15, 1)) && !func_120((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_120((*Global_1835011)[37]->f_1, 1) && !func_120((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_120((*Global_1835011)[57]->f_1, 1) && !func_120((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_120((*Global_1835011)[26]->f_1, 1) && !func_120((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_120((*Global_1835011)[62]->f_1, 1) && func_120((*Global_1835011)[63]->f_1, 1)) && !func_120((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_120((*Global_1835011)[75]->f_1, 1) && !func_120((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_120((*Global_1835011)[76]->f_1, 1) && !func_120((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_120((*Global_1835011)[40]->f_1, 1) && func_120((*Global_1835011)[41]->f_1, 1)) && !func_120((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_120((*Global_1835011)[62]->f_1, 1) && func_120((*Global_1835011)[63]->f_1, 1)) && !func_120((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_120((*Global_1835011)[65]->f_1, 1) && func_120((*Global_1835011)[66]->f_1, 1)) && !func_120((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_742(int iParam0, bool bParam1, bool bParam2)
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
		if (func_1278())
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
		iVar0 = func_234(&(Global_1898164->f_1[0]));
		if (func_238(iVar0) && func_887((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_232(&(Global_1898164->f_1[0])))
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

void func_743()
{
	_0x95ee1dee1dcd9070(player_id(), 1);
	if (func_40(47))
	{
		_0xa63fcad3a6fec6d2(player_id(), 1);
	}
	else
	{
		_0xa63fcad3a6fec6d2(player_id(), 0);
	}
}

bool func_744(int iParam0)
{
	iVar0 = func_1279(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_745(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_6, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_5, bParam2);
}

void func_746()
{
	func_1280();
	func_1281();
	func_1282();
}

float func_747(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_748(int iParam0, float fParam1, int iParam2)
{
	if (func_125() != -1)
	{
		return;
	}
	if (!func_40(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_1283(ceil(&(Global_40.f_11095[iParam0])));
	_set_attribute_core_value(Global_35, func_1284(iParam0), iVar0);
	func_1286(func_1285(iParam0), (100f * (to_float(iVar0) / 100f)), 0);
	if (((fParam1 <= func_1287(15) && iParam0 == 1) && is_ped_on_foot(Global_35)) && !is_ped_swimming(Global_35))
	{
		func_341(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_341(func_1288(iParam0), 1);
	}
	sVar1 = func_1289(iParam0);
	if (!is_string_null_or_empty(sVar1))
	{
		_0x437c08db4febe2bd(Global_35, sVar1, to_float(iVar0), -1);
	}
}

void func_749(int iParam0)
{
	switch (func_125())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_750(int iParam0)
{
	switch (func_125())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

bool func_751(int iParam0)
{
	return func_165(iParam0, 2);
}

int func_752(var uParam0)
{
	iVar0 = *uParam0;
	if (!func_278(iVar0, 0))
	{
		return -1;
	}
	if (iVar0 == 2131771850)
	{
		return 3;
	}
	if (func_339(iVar0) != -999503751)
	{
		return -1;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar3 = &uParam0->f_1[iVar2];
		if (!func_278(iVar3, 0))
		{
		}
		else if (!func_1290(func_339(iVar3)))
		{
		}
		else
		{
			iVar4 = func_1291(iVar3);
			if (iVar4 != -1)
			{
				iVar1 = (iVar1 + iVar4);
			}
		}
		iVar2++;
	}
	if (iVar1 >= 4)
	{
		return 2;
	}
	if (iVar1 <= 2)
	{
		return 0;
	}
	return 1;
}

void func_753(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1292(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1079(iVar0, 1);
			if (func_1197(iVar0, iParam1))
			{
				vVar4 = { func_1293(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1080(iVar7, 4))
				{
					func_1082(iVar7, 4, 6);
				}
			}
			else
			{
				func_1083(iVar7, 4, 6);
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

int func_754(int iParam0)
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

bool func_755(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!func_1294(uParam0, iParam3, iParam2) && !func_1295(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_538(32768))
	{
		if (!*bParam1 || (*bParam1 && &uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0]))
		{
			func_1296(1108822547);
		}
		else
		{
			func_539(1108822547);
		}
	}
	func_1297(uParam0, 0, 0);
	func_336(iParam5);
	return true;
}

void func_756(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_757(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1298(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1299(iParam0))
	{
		return false;
	}
	if (func_1300(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1301(iParam0, 1)) || func_861(32768))
	{
		if (!func_1301(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_31())
	{
		return false;
	}
	return true;
}

void func_758(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_759()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

bool func_760(int iParam0)
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

void func_761(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_147(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1302(iParam0))
	{
		if (func_760(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_343(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_761(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_761(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_343(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_343(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_343(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_343(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_343(iParam5, 129))
	{
		if (func_343(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_343(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_343(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_343(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1302(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_343(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_343(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

int func_762(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

int func_763(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (is_entity_dead(*iParam0))
	{
		return 0;
	}
	if (!is_vehicle_driveable(*uParam1, false, false))
	{
		return 0;
	}
	if (get_ped_in_vehicle_seat(*uParam1, iParam2) != *iParam0)
	{
		if (!is_vehicle_seat_free(*uParam1, iParam2))
		{
			if (iParam3 && func_1303(*uParam1))
			{
				iParam2 = func_1304(*uParam1);
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
		set_ped_into_vehicle(*iParam0, *uParam1, iParam2);
	}
	return 1;
}

bool func_764(var uParam0)
{
	uParam0->f_3 = _databinding_add_ui_item_list(uParam0->f_2, "locationList");
	_databinding_clear_binding_array(uParam0->f_3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_7)
	{
		Var1 = { *uParam0->f_7[iVar0] };
		if (func_111(Var1))
		{
			iVar8 = _databinding_add_data_container(uParam0->f_3, func_1305(Var1));
			_databinding_add_data_hash(iVar8, "itemName", func_808(Var1));
			_databinding_add_data_bool(iVar8, "forSale", false);
			bVar9 = true;
			if (func_811(Var1))
			{
				bVar9 = false;
			}
			_databinding_add_data_bool(iVar8, "enabled", bVar9);
			_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_3, -1, "fast_travel_item", iVar8);
		}
		iVar0++;
	}
	return true;
}

void func_765(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

bool func_766(var uParam0, int iParam1)
{
	func_1306(uParam0);
	if (iParam1 == -1)
	{
		return false;
	}
	iVar0 = func_370(iParam1);
	if (iVar0 == 0)
	{
		return false;
	}
	iVar1 = 0;
	iVar1 = _0xd6e39dc5d46df4ab(iVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	*uParam0 = iParam1;
	uParam0->f_1 = iVar0;
	uParam0->f_2 = iVar1;
	return true;
}

bool func_767(var uParam0, var uParam1)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (uParam0->f_1 == 0)
	{
		return false;
	}
	if (uParam0->f_2 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_2)
	{
		if (func_1307(uParam0, iVar0, &Var1))
		{
			if (iVar0 == 0)
			{
				*uParam1 = { Var1 };
				uParam1->f_3 = Var1.f_3;
				uParam1->f_4 = Var1.f_4;
			}
			else if (!func_43(Var1))
			{
				fVar6 = vdist2(Global_36, Var1);
				fVar7 = vdist2(Global_36, *uParam1);
				if (fVar6 * fVar6) < (fVar7 * fVar7)
				{
					*uParam1 = { Var1 };
					uParam1->f_3 = Var1.f_3;
					uParam1->f_4 = Var1.f_4;
				}
			}
		}
		iVar0++;
	}
	return true;
}

int func_768(var uParam0, vector3 vParam1, var uParam4)
{
	uParam0->f_314 = { vParam1 };
	uParam0->f_304 = uParam4;
	_0xbe8daa9d8d01da6a(uParam0->f_314);
	func_347(&(uParam0->f_318), 2048);
	func_348(&(uParam0->f_318), 1024);
	return 1;
}

Vector3 func_769(int iParam0, bool bParam1)
{
	vVar0 = { 0f, 0f, 0f };
	if (!func_111(iParam0))
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

float func_770(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

int func_771()
{
	return Global_1310750->f_16037;
}

bool func_772(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_773(int iParam0, int iParam1)
{
	if (!func_772(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_774(int iParam0)
{
	if (!func_772(iParam0))
	{
		return false;
	}
	if (func_1308(64) && func_1309(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_775(int iParam0)
{
	if (!func_772(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_776(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_772(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_1310(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_777(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

float func_778()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_779(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_780(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_781(int iParam0)
{
	return iParam0 > -1;
}

bool func_782(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_781(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

bool func_783(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_781(iParam0))
		{
			return false;
		}
	}
	func_788(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

bool func_784(int iParam0)
{
	return func_782(iParam0, 16, 1);
}

bool func_785(int iParam0)
{
	if (Global_40.f_4942[iParam0]->f_59 != 0)
	{
		return true;
	}
	return false;
}

bool func_786(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

void func_787(int iParam0)
{
	if (!func_781(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_1311(iParam0);
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

int func_788(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_789(int iParam0, int iParam1)
{
	if (iParam1 == 7)
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(&(Global_1357549->f_3[iParam1])))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, &(Global_1357549->f_3[iParam1]), true, 0);
}

bool func_790(int iParam0)
{
	switch (func_125())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return false;
}

int func_791(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1312(iVar0);
}

bool func_792()
{
	if (Global_1946804->f_2793)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1946804->f_2791)) < 1250)
	{
		return true;
	}
	if (func_1313())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	return false;
}

bool func_793(int iParam0, int iParam1, bool bParam2)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_826(iParam0);
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
		if (!func_1314(iParam0, 1))
		{
			return false;
		}
	}
	return func_1315(iParam0, 0, bParam2) >= iParam1;
}

int func_794(int iParam0)
{
	iVar0 = func_339(iParam0);
	if (iVar0 == 81053684 || iVar0 == -525676072)
	{
		return 1;
	}
	return 0;
}

void func_795(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_796(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_190(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_797(int iParam0)
{
	if (-1829635046 == func_1316(81053684))
	{
		if (func_190(iParam0))
		{
			return true;
		}
	}
	else if (func_388(-525676072, iParam0))
	{
		if (func_190(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_798()
{
	iVar0 = 1549701178;
	switch (func_1317())
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

int func_799()
{
	iVar0 = 614608656;
	switch (func_1317())
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

int func_800()
{
	iVar0 = -1832677570;
	switch (func_1317())
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

int func_801()
{
	iVar0 = 1623252156;
	switch (func_1317())
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

bool func_802(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_dead(iParam0))
		{
			return true;
		}
		else if (!is_vehicle_driveable(iParam0, false, false))
		{
			if (!is_entity_on_fire(iParam0))
			{
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

bool func_803(int iParam0)
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

bool func_804(int iParam0)
{
	if (func_125() != -1)
	{
		return false;
	}
	if (!func_238(iParam0))
	{
		return false;
	}
	return func_120((*Global_1347702)[iParam0]->f_15, 1);
}

int func_805()
{
	return Global_1897952->f_41;
}

bool func_806(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return ((*Global_1888801)[iParam0]->f_21 && iParam1) != 0;
}

int func_807(int iParam0)
{
	vVar0 = { func_1318(iParam0) };
	return func_1319(vVar0);
}

int func_808(int iParam0)
{
	if (!func_111(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_30;
}

int func_809()
{
	iVar0 = _get_bounty_for_player(player_id());
	return iVar0;
}

float func_810(float fParam0, int iParam1, bool bParam2)
{
	bVar0 = fParam0 >= 0f;
	iVar1 = floor(pow(10f, to_float(iParam1)));
	fVar2 = (fParam0 * IntToFloat(iVar1));
	if (bParam2)
	{
		fVar2 = to_float(ceil(fVar2));
	}
	else
	{
		fVar2 = to_float(floor(fVar2));
	}
	fVar3 = (fVar2 / IntToFloat(iVar1));
	if (fVar3 < 0f && bVar0)
	{
		fVar3 = (fVar3 * -1f);
	}
	return fVar3;
}

bool func_811(int iParam0)
{
	if (!func_111(iParam0))
	{
		return false;
	}
	return func_1320(iParam0, 33554432);
}

int func_812(int iParam0)
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
	else if (iParam0 <= 115)
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

bool func_813(int iParam0, bool bParam1)
{
	if (!func_1321(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_1322(iParam0, 8))
		{
			return false;
		}
	}
	if (func_1322(iParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_814(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_815()
{
	return Global_1109400->f_245;
}

bool func_816()
{
	iVar0 = 1;
	while (iVar0 <= 4)
	{
		if (!func_1323(2, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_817()
{
	return func_819() == 166243423;
}

bool func_818(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
	}
	if (func_612(iParam0, -1285438911))
	{
		return true;
	}
	return false;
}

int func_819()
{
	return Global_1946804->f_1497;
}

bool func_820(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
	}
	if (func_612(iParam0, 265372629))
	{
		return true;
	}
	return false;
}

bool func_821(int iParam0)
{
	return func_1324(iParam0, &uVar0);
}

int func_822()
{
	iVar2 = 0;
	iVar3 = 0;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_339(iVar1) == -999503751)
		{
			if (func_819() == iVar1)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		iVar0++;
	}
	iVar3 = func_1157(-999503751, 1);
	if (!bVar4)
	{
		iVar3 = (iVar3 - 1);
	}
	return (iVar3 - iVar2);
}

bool func_823(int iParam0)
{
	iVar0 = func_656(func_956(iParam0), 1);
	iVar1 = iParam0;
	if (iVar0 != 39)
	{
		return &Global_1946804->f_1497.f_1[iVar0] == iVar1;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (&Global_1946804->f_1497.f_1[iVar0] == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_824(int iParam0, bool bParam1)
{
	return func_1156(iParam0, 0) < func_1157(iParam0, bParam1);
}

int func_825(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1171();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_826(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_827(int iParam0)
{
	if ((func_1325(iParam0) && iParam0 != -999503751) && iParam0 != 0)
	{
		return true;
	}
	return false;
}

void func_828(var uParam0, int iParam1, int iParam2)
{
	if (!Global_1914319->f_19461.f_20)
	{
		func_430(iParam2, uParam0);
	}
	if (func_1326(iParam1) == func_1326(Global_1914319->f_19461.f_1))
	{
		return;
	}
	if (func_43(get_cam_coord(*uParam0)))
	{
		func_1327(&(Global_1914319->f_19461.f_14), &(Global_1914319->f_19461.f_17), &(Global_1914319->f_19461.f_22[0]->f_9), &(Global_1914319->f_19461.f_22[0]->f_6), &(Global_1914319->f_19461.f_22[0]->f_10), &(Global_1914319->f_19461.f_22[0]->f_11));
	}
	else
	{
		Global_1914319->f_19461.f_14 = { get_cam_coord(*uParam0) };
		Global_1914319->f_19461.f_17 = { get_cam_rot(*uParam0, 2) };
	}
	Global_1914319->f_19461.f_1 = iParam1;
	func_1327(&(Global_1914319->f_19461.f_2), &(Global_1914319->f_19461.f_2.f_3), &(Global_1914319->f_19461.f_2.f_9), &(Global_1914319->f_19461.f_2.f_6), &(Global_1914319->f_19461.f_2.f_10), &(Global_1914319->f_19461.f_2.f_11));
	if (!does_cam_exist(*uParam0))
	{
	}
	Global_1914319->f_19461.f_179 = 0;
	func_1328(1);
	func_856(0);
	set_cam_params(*uParam0, Global_1914319->f_19461.f_2, Global_1914319->f_19461.f_2.f_3, Global_1914319->f_19461.f_2.f_9, 500, 28, 28, 2, 1, 0);
	set_cam_near_clip(*uParam0, 0.25f);
	func_857(*uParam0, func_1326(Global_1914319->f_19461.f_1));
}

void func_829(var uParam0, int iParam1)
{
	if (!does_cam_exist(*uParam0))
	{
		return;
	}
	if (!Global_1914319->f_19461.f_20)
	{
		func_430(iParam1, uParam0);
	}
	if (Global_1914319->f_19461.f_1 == -999503751 || Global_1914319->f_19461.f_1 == 0)
	{
		return;
	}
	Global_1914319->f_19461.f_1 = -999503751;
	func_856(1);
	set_cam_params(*uParam0, *Global_1914319->f_19461.f_22[0], Global_1914319->f_19461.f_22[0]->f_3, Global_1914319->f_19461.f_22[0]->f_9, 500, 28, 28, 2, 1, 0);
	func_1328(0);
	func_857(*uParam0, 0);
}

void func_830(var uParam0, int iParam1)
{
	func_547(uParam0, 1);
	func_1329(uParam0, iParam1, 1);
	func_548(uParam0, 1, 1210712530, -1787661156);
}

void func_831(var uParam0, int iParam1)
{
	if (func_1087(uParam0))
	{
		iVar0 = func_958(uParam0);
		iParam1 = func_1256(iVar0);
	}
	iVar1 = _databinding_add_data_container(uParam0->f_2031.f_52, "ItemDescription");
	_databinding_add_data_hash(iVar1, "Text", iParam1);
}

void func_832(var uParam0, bool bParam1)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2031.f_52, "ItemDescription");
	_databinding_add_data_bool(iVar0, "Enabled", bParam1);
}

bool func_833(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_793(func_1330(iVar0, iParam0), 1, 0))
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

bool func_834(var uParam0, int iParam1, int iParam2)
{
	bVar0 = false;
	if (iParam2 == -1502467280 || iParam2 == 777890122)
	{
		if (func_612(iParam1, 1844906744))
		{
			iVar1 = func_339(iParam1);
			if ((iParam2 == 777890122 || iVar1 == 146649851) || iVar1 == -1954920608)
			{
				bVar0 = true;
			}
			else if (iParam2 == -1502467280)
			{
				Var5 = -1;
				Var5.f_1 = -1;
				Var5.f_2 = -1;
				Var5.f_3 = -1;
				Var5.f_4 = -1;
				Var5.f_5 = -1;
				Var5.f_6 = -1;
				Var5.f_7 = -1;
				Var5.f_8 = -1;
				Var5.f_13 = -1;
				iVar23 = func_960(uParam0);
				iVar24 = func_961(uParam0);
				if (iVar23 != 0 && iVar24 != 0)
				{
					Var19 = { func_669(iVar23, func_668(0), iVar24, 0) };
					if (iVar1 != 0)
					{
						bVar0 = true;
						iVar25 = func_1331(iParam1);
						iVar26 = 0;
						while (iVar26 < iVar25)
						{
							if (_item_database_get_fits_slot_info(iVar1, iVar26, &iVar2))
							{
								Var5 = { func_978(0, iVar2, -1591664384, -1591664384, 0, 0) };
								func_1332(&Var5, Var19);
								if (func_979(&Var5, &iVar3, &iVar4, 1))
								{
									if (iVar4 != 0)
									{
										bVar0 = false;
									}
									func_981(iVar3);
								}
							}
							iVar26++;
						}
					}
				}
			}
		}
		else if (func_612(iParam1, 188214926))
		{
			iVar29 = func_276(uParam0);
			vVar30.f_1 = -1;
			vVar30.f_2 = -1;
			Var37 = -1;
			Var37.f_1 = -1;
			Var37.f_2 = -1;
			Var37.f_3 = -1;
			Var37.f_4 = -1;
			Var37.f_5 = -1;
			Var37.f_6 = -1;
			Var37.f_7 = -1;
			Var37.f_8 = -1;
			if (func_962(func_723(&(uParam0->f_2031)), iVar29, &Var33))
			{
				iVar27 = 0;
				while (iVar27 < Var33.f_3)
				{
					vVar30 = { func_963(iVar27, Var33, &(uParam0->f_2031)) };
					if (vVar30.x == iParam1 && func_278(vVar30.x, 0))
					{
						Var37.f_8 = vVar30.y;
						iVar48 = _item_database_create_item_collection(&Var37, &iVar47, 1);
						if (iVar48 == -1)
						{
						}
						else
						{
							iVar49 = 0;
							while (iVar49 < iVar47)
							{
								iVar50 = func_919(iVar49, iVar48);
								if (((func_278(iVar50, 0) && iVar50 != iParam1) && func_920(&(uParam0->f_2031), iVar50, &uVar28)) || _item_database_get_item_tag_type(iVar50, Var37.f_8) == -2089472884)
								{
									iVar51 = func_896(uParam0, iVar50);
									if (func_834(uParam0, iVar50, iVar51))
									{
										bVar0 = true;
									}
									else
									{
										iVar49++;
									}
									_0xcbb7b6edfa933ade(iVar48);
									Jump @665; //curOff = 653
									iVar27++;
									Jump @692; //curOff = 665
									iVar52 = func_960(uParam0);
									bVar0 = func_1333(iVar52, iParam1, func_961(uParam0));
									Jump @1199; //curOff = 692
									if (iParam2 == -584027224)
									{
										if (func_1150(iParam1, 1) > 0)
										{
											return true;
										}
									}
									else if (iParam2 == 1702073444)
									{
										iVar55 = func_276(uParam0);
										vVar56.f_1 = -1;
										vVar56.f_2 = -1;
										Var63 = -1;
										Var63.f_1 = -1;
										Var63.f_2 = -1;
										Var63.f_3 = -1;
										Var63.f_4 = -1;
										Var63.f_5 = -1;
										Var63.f_6 = -1;
										Var63.f_7 = -1;
										Var63.f_8 = -1;
										if (func_962(func_723(&(uParam0->f_2031)), iVar55, &Var59))
										{
											iVar53 = 0;
											while (iVar53 < Var59.f_3)
											{
												vVar56 = { func_963(iVar53, Var59, &(uParam0->f_2031)) };
												if (vVar56.x == iParam1 && func_278(vVar56.x, 0))
												{
													Var63.f_8 = vVar56.y;
													iVar74 = _item_database_create_item_collection(&Var63, &iVar73, 1);
													if (iVar74 == -1)
													{
													}
													else
													{
														iVar75 = 0;
														while (iVar75 < iVar73)
														{
															iVar76 = func_919(iVar75, iVar74);
															if (((func_278(iVar76, 0) && iVar76 != iParam1) && func_920(&(uParam0->f_2031), iVar76, &uVar54)) || _item_database_get_item_tag_type(iVar76, Var63.f_8) == -2089472884)
															{
																iVar77 = func_896(uParam0, iVar76);
																if (func_834(uParam0, iVar76, iVar77))
																{
																	bVar0 = true;
																}
																else
																{
																	iVar75++;
																}
																_0xcbb7b6edfa933ade(iVar74);
																Jump @1047; //curOff = 1035
																iVar53++;
																Jump @1199; //curOff = 1047
																if (iParam2 == 1394581936)
																{
																	if (func_1021(iParam1))
																	{
																		iVar78 = func_444(7);
																		if (iVar78 == -1)
																		{
																			return false;
																		}
																		if (func_1022(iParam1))
																		{
																			return func_1334(iVar78, iParam1);
																		}
																		if (func_1024(iParam1))
																		{
																			return func_1335(iVar78, iParam1);
																		}
																	}
																	else
																	{
																		return func_1336(iParam1);
																	}
																}
																else
																{
																	Var81 = { func_978(iParam1, -1591664384, -1591664384, -1591664384, 0, 0) };
																	if (func_979(&Var81, &iVar79, &iVar80, 0))
																	{
																		if (iVar80 > 0)
																		{
																			bVar0 = true;
																		}
																	}
																	func_981(iVar79);
																}
																return bVar0;
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
		}
	}
}

bool func_835(int iParam0)
{
	if ((iParam0 == 207706105 || iParam0 == -1998614617) || iParam0 == -357182937)
	{
		return true;
	}
	return false;
}

void func_836(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_339(iParam0))
	{
		case -2061583405:
			bVar0 = func_1337(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1337(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1337(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1337(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1337(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1337(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1338();
	}
	if (bParam1)
	{
		func_129(0, 0);
	}
}

void func_837(int iParam0, int iParam1)
{
	if (!func_278(iParam0, 0))
	{
		return;
	}
	if (!func_1339(iParam0, &Var0, 805880880, 0, 0, -401018458))
	{
		Var0 = "_PLACEHOLDER";
		Var0.f_1 = "inventory_items";
	}
	if (is_string_null_or_empty(Var0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			sVar3 = "ITEM_SAVED";
			sVar4 = "Transaction_Positive";
			iVar5 = 109029619;
			break;
		case 1:
			sVar3 = "ITEM_DELETED";
			sVar4 = "Transaction_Negative";
			iVar5 = 619977481;
			break;
		case 2:
			sVar3 = "ITEM_STORED";
			sVar4 = "Transaction_Positive";
			iVar5 = 109029619;
			break;
		case 3:
			sVar3 = "ITEM_REMOVED";
			sVar4 = "Transaction_Positive";
			iVar5 = 109029619;
			break;
	}
	sVar6 = func_1340(_create_var_string(10, sVar3, _create_var_string(0, func_1154(iParam0))), iVar5);
	func_1341(sVar6, Var0.f_1, get_hash_key(Var0), 0, iVar5, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

void func_838(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1342(iParam0))
	{
		return;
	}
	iVar0 = func_339(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1343(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1343(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1343(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1343(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1343(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1343(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_825(0))
	{
		func_1344(iParam0, 1);
		if (func_1171() == 1160113249)
		{
			func_1344(func_825(-2125499975), 0);
		}
		else
		{
			func_1344(func_825(1160113249), 0);
		}
	}
	func_1338();
	if (func_1345(iVar0))
	{
		_0x766315a564594401(func_1209(0), iParam0, 0);
	}
	func_1346(iParam0, bParam3);
	if (bParam2)
	{
		func_129(0, 0);
	}
}

bool func_839(int iParam0, int iParam1)
{
	iVar1 = iParam0;
	if (func_125() == -1)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (iVar1 == Global_26796.f_26[iVar0]->f_1)
			{
				*iParam1 = iVar0;
				return true;
			}
			iVar0++;
		}
		return false;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (iVar1 == Global_36638.f_45.f_350.f_26[iVar0]->f_1)
			{
				*iParam1 = iVar0;
				return true;
			}
			iVar0++;
		}
		return false;
	}
	return false;
}

void func_840(int iParam0)
{
	if (func_125() == -1)
	{
		Global_26796.f_26[iParam0] = 0;
		Global_26796.f_26[iParam0]->f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = &Global_1946804->f_57[iVar0];
			func_1347(&uVar1, iVar0, iParam0);
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
		func_1348(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

void func_841(int iParam0, int iParam1, int iParam2)
{
	if (func_125() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1] = (&Global_26796.f_26[iParam1] - (Global_26796.f_26[iParam1] && iParam0));
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1] = (&Global_36638.f_45.f_350.f_26[iParam1] - (Global_36638.f_45.f_350.f_26[iParam1] && iParam0));
	}
}

bool func_842(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1349(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		_remove_ammo_from_ped_by_type(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_969(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return false;
	}
	if (!func_793(iParam0, 1, bParam4))
	{
		return false;
	}
	Var5 = { func_1350(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_1315(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_1315(iParam0, 0, 0) - iParam1) < 0)
		{
			func_842(iParam0, func_1315(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return false;
		}
	}
	if (func_826(iParam0) == -427144552)
	{
		if (!func_1351(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_1352(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return false;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_926(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_969(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1353(iParam0, iParam1);
	return true;
}

bool func_843(int iParam0)
{
	iVar0 = 1;
	while (iVar0 <= 4)
	{
		if (!func_1323(2, iVar0))
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_844(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 5)
	{
		return func_1354(iVar0);
	}
	return 0;
}

void func_845(var uParam0)
{
	iVar0 = func_1355(-999503751);
	if (iVar0 != 0)
	{
		if (func_835(func_276(uParam0)))
		{
			func_592(uParam0, -1, 1);
		}
		func_836(iVar0, 1, 1);
	}
}

bool func_846(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (!func_1356(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_1357(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_1358(iParam0, bParam2);
	iVar2 = 0;
	if (func_1315(iParam0, 0, 0) == 0)
	{
		if (func_1359(iParam0))
		{
			iVar5 = func_1360(iParam0);
			iVar6 = func_1361(iVar5);
			iVar7 = func_1362(iVar6) + 1;
			func_1363(iVar5);
			if (func_1364(38))
			{
				func_341(483, 0);
			}
			else
			{
				func_341(482, 0);
			}
			if (iVar7 == func_1365(iVar6))
			{
				func_846(func_1366(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_158() && func_1367(4))
				{
					if (func_158() && (func_1368(38) || func_1364(38)))
					{
						func_1370(38, func_1366(iVar6), 0, 0, func_1369(), 0, -1, 0);
						func_1371(2);
					}
					else
					{
						func_1370(38, func_1366(iVar6), 0, 0, func_1369(), 0, -1, 0);
						func_1371(1);
					}
				}
			}
			else if (func_158() && func_1367(4))
			{
				if (func_158() && (func_1368(38) || func_1364(38)))
				{
					func_1370(38, 0, 0, 0, func_1369(), 0, -1, 0);
					func_1371(2);
				}
				else
				{
					func_1370(38, 0, 0, 0, func_1369(), 0, -1, 0);
					func_1371(1);
				}
			}
			if (func_158() && func_1367(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_158() && (func_1368(38) || func_1364(38)))
					{
						func_1372(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_1372(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_826(iParam0) == -1037537535)
	{
		if ((!func_612(iParam0, 866047851) && !func_612(iParam0, -1979000645)) && !func_612(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_1373(iParam0, 8388608) && !func_40(28))
	{
		func_1374(28);
	}
	if (!bVar3)
	{
		if (func_612(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_339(iParam0) == -1447088266)
			{
				iVar1 = func_1376(func_1375(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_125() == -1)
					{
						func_1377(iVar1);
					}
					if (func_926(0) && func_1378(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_1379(iParam0, iVar0, iParam5);
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
					if (func_125() == -1)
					{
						func_1377(iParam0);
					}
					if (func_926(0) && func_1378(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_1379(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_826(iParam0) == -427144552)
		{
			if (!func_1380(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_826(iParam0) == 307971639 && func_1381(iParam0))
		{
			if (!func_1382(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_612(iParam0, 866047851))
		{
			func_1383(iParam0);
		}
		else if (func_612(iParam0, 2000026003))
		{
			func_1384(iParam0);
		}
		else if (func_612(iParam0, -103750053))
		{
			func_1386(func_1385(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_1386(func_1205(-717883113, 2091222383), iVar0);
		}
		else if (func_612(iParam0, -121341956) && !func_612(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_120((*Global_1835011)[4]->f_1, 1))
				{
					func_341(498, 0);
				}
			}
			if (func_612(iParam0, -2017733358) || func_612(iParam0, -1369131378))
			{
				func_1387(iParam0);
			}
		}
		else if (func_612(iParam0, -136654233))
		{
			if (func_612(iParam0, -1021472396))
			{
			}
		}
		else if (func_612(iParam0, -1466706512) && func_612(iParam0, 1147021565))
		{
			func_341(484, 0);
		}
		else if (func_612(iParam0, 1147021565) && func_612(iParam0, -524514947))
		{
		}
		else if (func_612(iParam0, 554195525))
		{
		}
		else if (func_612(iParam0, 589988438))
		{
			if (func_1388())
			{
				func_1389(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_612(iParam0, 787083290) && func_612(iParam0, 949916894))
		{
			func_1390(iParam0);
		}
		else if (func_612(iParam0, -1718133314))
		{
			func_1391(iParam0);
		}
		else if (func_612(iParam0, -1738650224))
		{
			func_1392(iParam0);
		}
		else if (func_612(iParam0, -1112814642) && func_612(iParam0, 949916894))
		{
			func_1393(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_612(iParam0, 1841149704))
		{
			func_1394();
		}
		else if (func_612(iParam0, 606799272))
		{
			func_1395(iParam0, iParam1);
			func_1396(iParam0);
		}
		else if (func_612(iParam0, -1112814642) && func_612(iParam0, -1697809989))
		{
			func_1397(iParam0, 0, 0, 0);
		}
		else if (func_612(iParam0, -2017733358) || func_612(iParam0, -1369131378))
		{
			func_1387(iParam0);
		}
		else if (func_612(iParam0, -1921346699))
		{
			if (func_125() != -1)
			{
				return false;
			}
			func_1398(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_612(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_793(215778062, 1, 0))
					{
						func_846(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_793(670273567, 1, 0))
					{
						func_846(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_793(-967317137, 1, 0))
					{
						func_846(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_793(526074061, 1, 0))
					{
						func_846(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_793(-1045488665, 1, 0))
					{
						func_846(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_793(471514780, 1, 0))
					{
						func_846(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_612(iParam0, -839724752) && func_1373(iParam0, 4))
		{
			if (!func_1364(42))
			{
				func_1399(iParam0);
			}
		}
		else if (func_612(iParam0, 1399091007))
		{
			func_1400(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_612(iParam0, 1248798204))
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
				func_846(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1374(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_957(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_1401(&iVar9, 0))
				{
					func_1378(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_125() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_957(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_341(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_1402();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_1403();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_1404();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_1405();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_746();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_1406(499813453, 854119837, 0);
				func_1407(499813453, 0);
				func_1408(1);
				break;
			case 2127812557:
				func_1406(499813453, -1292544588, 0);
				func_1407(499813453, 0);
				func_1408(2);
				break;
			case 808991383:
				func_1406(499813453, -1003325394, 0);
				func_1407(499813453, 0);
				func_1408(4);
				break;
			case 1134518629:
				func_1406(666607663, -335460405, 0);
				func_1407(666607663, 0);
				func_1409(1);
				break;
			case 902940106:
				func_1406(666607663, 903797617, 0);
				func_1407(666607663, 0);
				func_1409(2);
				break;
			case -418174898:
				func_1406(666607663, 669728650, 0);
				func_1407(666607663, 0);
				func_1409(4);
				break;
			case -648114971:
				func_1406(-220219788, 1214120047, 0);
				func_1407(-220219788, 0);
				func_1410(1);
				break;
			case 211153747:
				func_1406(-220219788, 655769340, 0);
				func_1407(-220219788, 0);
				func_1410(2);
				break;
			case -32876996:
				func_1406(-220219788, 885316185, 0);
				func_1407(-220219788, 0);
				func_1410(4);
				break;
			case 1191437462:
				func_1406(218622660, -1491419385, 0);
				func_1407(218622660, 0);
				func_1411(1);
				break;
			case 1119149048:
				func_1406(218622660, 1809565830, 0);
				func_1407(218622660, 0);
				func_1411(2);
				break;
			case 506073827:
				func_1406(390004462, -628873767, 0);
				func_1407(390004462, 0);
				func_1412(1);
				break;
			case -1876986168:
				func_1406(390004462, -405421956, 0);
				func_1407(390004462, 0);
				func_1412(2);
				break;
			case 2142623221:
				func_1406(390004462, -1108972386, 0);
				func_1407(390004462, 0);
				func_1412(4);
				break;
			case 1508215381:
				func_1406(6410548, 1053716392, 0);
				func_1407(6410548, 0);
				func_1413(1);
				break;
			case -888935280:
				func_1406(6410548, 806507056, 0);
				func_1407(6410548, 0);
				func_1413(2);
				break;
			case -1252474566:
				func_1406(6410548, 1571925350, 0);
				func_1407(6410548, 0);
				func_1413(4);
				break;
			case -1465702449:
				func_1406(6410548, 1330352282, 0);
				func_1407(6410548, 0);
				func_1413(8);
				break;
			case -21093309:
				func_1414(242, func_1154(-21093309), 0);
				break;
			case 204375141:
				func_1414(240, func_1154(204375141), 0);
				break;
			case -417963070:
				func_1414(241, func_1154(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1415(594, 1934060482, 1, 1);
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
					func_1415(594, 1110018439, 1, 1);
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
					func_1415(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1415(594, -1228016946, 1, 1);
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
					func_1415(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1415(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_341(488, 0);
				break;
			case 1613651027:
				func_341(491, 0);
				break;
			case -885810591:
				func_341(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_846(func_1416(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_846(func_1417(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_40(1))
				{
					func_341(487, 0);
				}
				break;
			case -898386032:
				func_341(486, 0);
				break;
			case -2035110427:
				if (func_125() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_341(496, 0);
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
		func_1418(&iVar10);
		if (!func_1419(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_926(0))
		{
			return true;
		}
		if (func_826(iParam0) == -1037537535)
		{
			func_1420(iParam0);
		}
		if (func_612(iParam0, -1979000645))
		{
			func_1421(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_926(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_846(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_1422(iVar2, 0);
		}
	}
	Var35 = { func_1350(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_1423(iParam0);
	if (fParam6 > 0f)
	{
		if (func_612(iParam0, -839724752))
		{
			func_1424(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_969(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_847(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	func_1425(&(Global_1946804->f_1497), iParam0);
	if (bParam2)
	{
		func_1426(2, iParam0, 6);
	}
	if (bParam1)
	{
		func_129(0, 1);
	}
}

void func_848(int iParam0)
{
	if (!func_1427(iParam0))
	{
		return;
	}
	if (func_820(iParam0))
	{
		return;
	}
	if (func_339(iParam0) != -999503751)
	{
		return;
	}
	func_838(iParam0, 1, 0, 0);
}

void func_849(var uParam0)
{
	func_1428(uParam0);
	if (_uiprompt_is_valid(Global_1914319->f_19461.f_180))
	{
		if (_uiprompt_is_hold_mode_running(Global_1914319->f_19461.f_180))
		{
			if (!Global_1914319->f_19461.f_179)
			{
				func_1429(uParam0);
			}
		}
		else if (Global_1914319->f_19461.f_179)
		{
			func_1429(uParam0);
		}
	}
}

void func_850(var uParam0)
{
	uParam0->f_16 = 0;
}

int func_851(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam1 >= func_1156(iParam0, bParam2))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 18)
	{
		iVar2 = &Global_1946804->f_2657[iVar1];
		if (func_278(iVar2, 0))
		{
			if (func_339(iVar2) == iParam0)
			{
				if (iVar0 == iParam1)
				{
					return iVar2;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	return 0;
}

bool func_852(var uParam0, int iParam1)
{
	return (uParam0->f_5863 && iParam1) != 0;
}

bool func_853(int iParam0)
{
	if (!_does_volume_exist(Global_1395601->f_5[iParam0]->f_23))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	return _0xf256a75210c5c0eb(Global_1395601->f_5[iParam0]->f_23, Global_36);
}

bool func_854(var uParam0, int iParam1, int iParam2, int iParam3)
{
	Var0 = &Global_1914319->f_16934[iParam1];
	if (!func_1430(&Var0, iParam2))
	{
		return false;
	}
	Var0.f_2 = -99852754;
	Var0.f_3 = iParam3;
	if (!_datafile_get_vector(uParam0, &Var0))
	{
		return false;
	}
	return true;
}

void func_855(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != -1 && func_854(&vVar45, iParam1, iParam2, -642706190))
	{
		func_854(&vVar51, iParam1, iParam2, -1507145287);
		func_854(&vVar57, iParam1, iParam2, 872797902);
		func_854(&vVar63, iParam1, iParam2, 939367811);
		func_854(&vVar69, iParam1, iParam2, -776836338);
		func_854(&vVar0, iParam1, iParam2, 1891724909);
		func_854(&vVar7, iParam1, iParam2, 26009546);
		func_854(&vVar14, iParam1, iParam2, -1287161638);
		func_854(&vVar21, iParam1, iParam2, 1781223200);
		func_854(&vVar28, iParam1, iParam2, 639395495);
		func_854(&vVar35, iParam1, iParam2, -1034669384);
		func_854(&vVar81, iParam1, iParam2, 1091942092);
	}
	else
	{
		vVar45 = { func_1431(1) };
		vVar51 = { func_1431(2) };
		vVar57 = { func_1431(3) };
		vVar63 = { func_1431(4) };
		vVar69 = { func_1431(5) };
		vVar0 = { func_1431(7) };
		vVar7 = { func_1431(6) };
		vVar14 = { func_1431(10) };
		vVar21 = { func_1431(8) };
		vVar28 = { func_1431(9) };
		vVar35 = { func_1431(11) };
		vVar81 = { func_1431(12) };
	}
	*Global_1914319->f_19461.f_22[1] = { get_offset_from_entity_in_world_coords(iParam0, vVar45) };
	*Global_1914319->f_19461.f_22[2] = { get_offset_from_entity_in_world_coords(iParam0, vVar51) };
	*Global_1914319->f_19461.f_22[3] = { get_offset_from_entity_in_world_coords(iParam0, vVar57) };
	*Global_1914319->f_19461.f_22[4] = { get_offset_from_entity_in_world_coords(iParam0, vVar63) };
	*Global_1914319->f_19461.f_22[5] = { get_offset_from_entity_in_world_coords(iParam0, vVar69) };
	*Global_1914319->f_19461.f_22[7] = { get_offset_from_entity_in_world_coords(iParam0, vVar0) };
	*Global_1914319->f_19461.f_22[6] = { get_offset_from_entity_in_world_coords(iParam0, vVar7) };
	*Global_1914319->f_19461.f_22[10] = { get_offset_from_entity_in_world_coords(iParam0, vVar14) };
	*Global_1914319->f_19461.f_22[8] = { get_offset_from_entity_in_world_coords(iParam0, vVar21) };
	*Global_1914319->f_19461.f_22[9] = { get_offset_from_entity_in_world_coords(iParam0, vVar28) };
	*Global_1914319->f_19461.f_22[11] = { get_offset_from_entity_in_world_coords(iParam0, vVar35) };
	*Global_1914319->f_19461.f_22[12] = { get_offset_from_entity_in_world_coords(iParam0, vVar81) };
	if (iParam1 != -1 && func_854(&vVar48, iParam1, iParam2, 222482482))
	{
		func_854(&vVar54, iParam1, iParam2, -718905633);
		func_854(&vVar60, iParam1, iParam2, 1700485506);
		func_854(&vVar66, iParam1, iParam2, 1998419372);
		func_854(&vVar72, iParam1, iParam2, 1259760656);
		func_854(&vVar3, iParam1, iParam2, 1327962479);
		func_854(&vVar10, iParam1, iParam2, -991979571);
		func_854(&vVar17, iParam1, iParam2, 1380636221);
		func_854(&vVar24, iParam1, iParam2, 797889520);
		func_854(&vVar31, iParam1, iParam2, -1676223069);
		func_854(&vVar38, iParam1, iParam2, -717624061);
		func_854(&vVar42, iParam1, iParam2, -1335042021);
		func_854(&vVar84, iParam1, iParam2, -1154246256);
	}
	else
	{
		vVar42 = { func_1432(0) };
		vVar48 = { func_1432(1) };
		vVar54 = { func_1432(2) };
		vVar60 = { func_1432(3) };
		vVar66 = { func_1432(4) };
		vVar72 = { func_1432(5) };
		vVar3 = { func_1432(7) };
		vVar10 = { func_1432(6) };
		vVar17 = { func_1432(10) };
		vVar24 = { func_1432(8) };
		vVar31 = { func_1432(9) };
		vVar38 = { func_1432(11) };
		vVar84 = { func_1432(12) };
	}
	vVar42 = { get_offset_from_entity_in_world_coords(iParam0, vVar42) };
	vVar48 = { get_offset_from_entity_in_world_coords(iParam0, vVar48) };
	vVar54 = { get_offset_from_entity_in_world_coords(iParam0, vVar54) };
	vVar60 = { get_offset_from_entity_in_world_coords(iParam0, vVar60) };
	vVar66 = { get_offset_from_entity_in_world_coords(iParam0, vVar66) };
	vVar72 = { get_offset_from_entity_in_world_coords(iParam0, vVar72) };
	vVar3 = { get_offset_from_entity_in_world_coords(iParam0, vVar3) };
	vVar10 = { get_offset_from_entity_in_world_coords(iParam0, vVar10) };
	vVar17 = { get_offset_from_entity_in_world_coords(iParam0, vVar17) };
	vVar24 = { get_offset_from_entity_in_world_coords(iParam0, vVar24) };
	vVar31 = { get_offset_from_entity_in_world_coords(iParam0, vVar31) };
	vVar38 = { get_offset_from_entity_in_world_coords(iParam0, vVar38) };
	vVar84 = { get_offset_from_entity_in_world_coords(iParam0, vVar84) };
	Global_1914319->f_19461.f_22[0]->f_6 = { vVar42 };
	Global_1914319->f_19461.f_22[1]->f_6 = { vVar48 };
	Global_1914319->f_19461.f_22[2]->f_6 = { vVar54 };
	Global_1914319->f_19461.f_22[3]->f_6 = { vVar60 };
	Global_1914319->f_19461.f_22[4]->f_6 = { vVar66 };
	Global_1914319->f_19461.f_22[5]->f_6 = { vVar72 };
	Global_1914319->f_19461.f_22[7]->f_6 = { vVar3 };
	Global_1914319->f_19461.f_22[6]->f_6 = { vVar10 };
	Global_1914319->f_19461.f_22[10]->f_6 = { vVar17 };
	Global_1914319->f_19461.f_22[8]->f_6 = { vVar24 };
	Global_1914319->f_19461.f_22[9]->f_6 = { vVar31 };
	Global_1914319->f_19461.f_22[11]->f_6 = { vVar38 };
	Global_1914319->f_19461.f_22[12]->f_6 = { vVar84 };
	Global_1914319->f_19461.f_22[1]->f_3 = { func_1433(*Global_1914319->f_19461.f_22[1], vVar48) };
	Global_1914319->f_19461.f_22[2]->f_3 = { func_1433(*Global_1914319->f_19461.f_22[2], vVar54) };
	Global_1914319->f_19461.f_22[3]->f_3 = { func_1433(*Global_1914319->f_19461.f_22[3], vVar60) };
	Global_1914319->f_19461.f_22[4]->f_3 = { func_1433(*Global_1914319->f_19461.f_22[4], vVar66) };
	Global_1914319->f_19461.f_22[5]->f_3 = { func_1433(*Global_1914319->f_19461.f_22[5], vVar72) };
	Global_1914319->f_19461.f_22[7]->f_3 = { func_1433(*Global_1914319->f_19461.f_22[7], vVar3) };
	Global_1914319->f_19461.f_22[6]->f_3 = { func_1433(*Global_1914319->f_19461.f_22[6], vVar10) };
	Global_1914319->f_19461.f_22[10]->f_3 = { func_1433(*Global_1914319->f_19461.f_22[10], vVar17) };
	Global_1914319->f_19461.f_22[8]->f_3 = { func_1433(*Global_1914319->f_19461.f_22[8], vVar24) };
	Global_1914319->f_19461.f_22[9]->f_3 = { func_1433(*Global_1914319->f_19461.f_22[9], vVar31) };
	Global_1914319->f_19461.f_22[11]->f_3 = { func_1433(*Global_1914319->f_19461.f_22[11], vVar38) };
	Global_1914319->f_19461.f_22[12]->f_3 = { func_1433(*Global_1914319->f_19461.f_22[12], vVar84) };
	if (iParam1 != -1 && func_1434(&fVar75, iParam1, iParam2, -1227997166))
	{
		func_1434(&fVar76, iParam1, iParam2, 1325448948);
		func_1434(&fVar77, iParam1, iParam2, -2091857109);
		func_1434(&fVar78, iParam1, iParam2, 967624365);
		func_1434(&fVar79, iParam1, iParam2, 1865698850);
		func_1434(&fVar80, iParam1, iParam2, 743589651);
		func_1434(&fVar6, iParam1, iParam2, 856434605);
		func_1434(&fVar13, iParam1, iParam2, 1222222663);
		func_1434(&fVar20, iParam1, iParam2, -1399406742);
		func_1434(&fVar27, iParam1, iParam2, -1889746575);
		func_1434(&fVar34, iParam1, iParam2, 1996639706);
		func_1434(&fVar41, iParam1, iParam2, 171259336);
		func_1434(&fVar87, iParam1, iParam2, 1430427185);
	}
	else
	{
		fVar75 = func_1435(0);
		fVar76 = func_1435(1);
		fVar77 = func_1435(2);
		fVar78 = func_1435(3);
		fVar79 = func_1435(4);
		fVar80 = func_1435(5);
		fVar6 = func_1435(7);
		fVar13 = func_1435(6);
		fVar20 = func_1435(10);
		fVar27 = func_1435(8);
		fVar34 = func_1435(9);
		fVar41 = func_1435(11);
		fVar87 = func_1435(12);
	}
	Global_1914319->f_19461.f_22[0]->f_9 = fVar75;
	Global_1914319->f_19461.f_22[1]->f_9 = fVar76;
	Global_1914319->f_19461.f_22[2]->f_9 = fVar77;
	Global_1914319->f_19461.f_22[3]->f_9 = fVar78;
	Global_1914319->f_19461.f_22[4]->f_9 = fVar79;
	Global_1914319->f_19461.f_22[5]->f_9 = fVar80;
	Global_1914319->f_19461.f_22[7]->f_9 = fVar6;
	Global_1914319->f_19461.f_22[6]->f_9 = fVar13;
	Global_1914319->f_19461.f_22[10]->f_9 = fVar20;
	Global_1914319->f_19461.f_22[8]->f_9 = fVar27;
	Global_1914319->f_19461.f_22[9]->f_9 = fVar34;
	Global_1914319->f_19461.f_22[11]->f_9 = fVar41;
	Global_1914319->f_19461.f_22[12]->f_9 = fVar87;
	if (iParam1 != -1 && func_1434(&fVar75, iParam1, iParam2, 2126347867))
	{
		func_1434(&fVar76, iParam1, iParam2, -1473147387);
		func_1434(&fVar77, iParam1, iParam2, 1271822110);
		func_1434(&fVar78, iParam1, iParam2, -242139225);
		func_1434(&fVar79, iParam1, iParam2, 261148733);
		func_1434(&fVar80, iParam1, iParam2, 456166852);
		func_1434(&fVar6, iParam1, iParam2, 1008724865);
		func_1434(&fVar13, iParam1, iParam2, 355420967);
		func_1434(&fVar20, iParam1, iParam2, 6312985);
		func_1434(&fVar27, iParam1, iParam2, -2062854103);
		func_1434(&fVar34, iParam1, iParam2, 345389633);
		func_1434(&fVar41, iParam1, iParam2, 522396574);
		func_1434(&fVar87, iParam1, iParam2, -788366962);
	}
	else
	{
		fVar75 = func_1436(0);
		fVar76 = func_1436(1);
		fVar77 = func_1436(2);
		fVar78 = func_1436(3);
		fVar79 = func_1436(4);
		fVar80 = func_1436(5);
		fVar6 = func_1436(7);
		fVar13 = func_1436(6);
		fVar20 = func_1436(10);
		fVar27 = func_1436(8);
		fVar34 = func_1436(9);
		fVar41 = func_1436(11);
		fVar87 = func_1436(12);
	}
	Global_1914319->f_19461.f_22[0]->f_10 = fVar75;
	Global_1914319->f_19461.f_22[1]->f_10 = fVar76;
	Global_1914319->f_19461.f_22[2]->f_10 = fVar77;
	Global_1914319->f_19461.f_22[3]->f_10 = fVar78;
	Global_1914319->f_19461.f_22[4]->f_10 = fVar79;
	Global_1914319->f_19461.f_22[5]->f_10 = fVar80;
	Global_1914319->f_19461.f_22[7]->f_10 = fVar6;
	Global_1914319->f_19461.f_22[6]->f_10 = fVar13;
	Global_1914319->f_19461.f_22[10]->f_10 = fVar20;
	Global_1914319->f_19461.f_22[8]->f_10 = fVar27;
	Global_1914319->f_19461.f_22[9]->f_10 = fVar34;
	Global_1914319->f_19461.f_22[11]->f_10 = fVar41;
	Global_1914319->f_19461.f_22[12]->f_10 = fVar87;
	if (iParam1 != -1 && func_1434(&fVar75, iParam1, iParam2, 926457408))
	{
		func_1434(&fVar76, iParam1, iParam2, -1446400344);
		func_1434(&fVar77, iParam1, iParam2, 1416748891);
		func_1434(&fVar78, iParam1, iParam2, 101413382);
		func_1434(&fVar79, iParam1, iParam2, -1976760931);
		func_1434(&fVar80, iParam1, iParam2, 1306012376);
		func_1434(&fVar6, iParam1, iParam2, 1136472284);
		func_1434(&fVar13, iParam1, iParam2, 1349037503);
		func_1434(&fVar20, iParam1, iParam2, 835143778);
		func_1434(&fVar27, iParam1, iParam2, 918365883);
		func_1434(&fVar34, iParam1, iParam2, -938532231);
		func_1434(&fVar41, iParam1, iParam2, -2024244127);
		func_1434(&fVar87, iParam1, iParam2, 1748298861);
	}
	else
	{
		fVar75 = func_1437(0);
		fVar76 = func_1437(1);
		fVar77 = func_1437(2);
		fVar78 = func_1437(3);
		fVar79 = func_1437(4);
		fVar80 = func_1437(5);
		fVar6 = func_1437(7);
		fVar13 = func_1437(6);
		fVar20 = func_1437(10);
		fVar27 = func_1437(8);
		fVar34 = func_1437(9);
		fVar41 = func_1437(11);
		fVar87 = func_1437(12);
	}
	Global_1914319->f_19461.f_22[0]->f_11 = fVar75;
	Global_1914319->f_19461.f_22[1]->f_11 = fVar76;
	Global_1914319->f_19461.f_22[2]->f_11 = fVar77;
	Global_1914319->f_19461.f_22[3]->f_11 = fVar78;
	Global_1914319->f_19461.f_22[4]->f_11 = fVar79;
	Global_1914319->f_19461.f_22[5]->f_11 = fVar80;
	Global_1914319->f_19461.f_22[7]->f_11 = fVar6;
	Global_1914319->f_19461.f_22[6]->f_11 = fVar13;
	Global_1914319->f_19461.f_22[10]->f_11 = fVar20;
	Global_1914319->f_19461.f_22[8]->f_11 = fVar27;
	Global_1914319->f_19461.f_22[9]->f_11 = fVar34;
	Global_1914319->f_19461.f_22[11]->f_11 = fVar41;
	Global_1914319->f_19461.f_22[12]->f_11 = fVar87;
}

void func_856(bool bParam0)
{
	if (bParam0)
	{
		Global_1914319->f_19461.f_1 = 0;
		Global_1914319->f_19461.f_184 = { *Global_1914319->f_19461.f_22[0] };
		Global_1914319->f_19461.f_187 = { Global_1914319->f_19461.f_22[0]->f_3 };
		Global_1914319->f_19461.f_194 = get_distance_between_coords(*Global_1914319->f_19461.f_22[0], Global_1914319->f_19461.f_22[0]->f_6, true);
	}
	else
	{
		Global_1914319->f_19461.f_184 = { Global_1914319->f_19461.f_2 };
		Global_1914319->f_19461.f_187 = { Global_1914319->f_19461.f_2.f_3 };
		Global_1914319->f_19461.f_194 = get_distance_between_coords(Global_1914319->f_19461.f_2, Global_1914319->f_19461.f_2.f_6, true);
	}
	Global_1914319->f_19461.f_190 = 0f;
	Global_1914319->f_19461.f_191 = 0f;
	Global_1914319->f_19461.f_192 = Global_1914319->f_19461.f_187;
	Global_1914319->f_19461.f_193 = Global_1914319->f_19461.f_187.f_2;
	Global_1914319->f_19461.f_182 = 0f;
	Global_1914319->f_19461.f_183 = 0f;
	Global_1914319->f_19461.f_195 = 0;
}

void func_857(var uParam0, int iParam1)
{
	_0x11f32bb61b756732(uParam0, Global_1914319->f_19461.f_22[iParam1]->f_11);
	Var0 = { func_1438(iParam1) };
	_0xe4b7945ef4f1bfb2(uParam0, &Var0);
}

void func_858(var uParam0)
{
	_copy_memory(uParam0, &(Global_1879534->f_7301), 243);
}

int func_859(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1439(vParam0);
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

bool func_860()
{
	if (func_155(43) && !func_155(44))
	{
		return false;
	}
	if (func_155(67) && func_122() != 8)
	{
		return false;
	}
	return true;
}

bool func_861(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

var func_862(int iParam0, int iParam1)
{
	Var1 = { func_1205(iParam0, iParam1) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

float func_863(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

var func_864(int iParam0)
{
	Var1 = { func_872(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

int func_865()
{
	if (func_343(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_343(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_343(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_343(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_343(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_343(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_343(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_343(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_343(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_866(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_867()
{
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_1440(iVar0);
		if (func_343(func_1441(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_868(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_869(int iParam0, int iParam1)
{
	is_entity_dead(Global_35);
	*iParam0 = get_attribute_rank(Global_35, 0);
	*iParam0 = (*iParam0 + get_attribute_rank(Global_35, 1));
	*iParam0 = (*iParam0 + get_attribute_rank(Global_35, 2));
	*iParam1 = get_max_attribute_rank(Global_35, 0);
	*iParam1 = (*iParam1 + get_max_attribute_rank(Global_35, 1));
	*iParam1 = (*iParam1 + get_max_attribute_rank(Global_35, 2));
	*iParam1 += 6;
	iVar0 = func_1315(-1845241476, 0, 0);
	iVar1 = func_1315(1654063339, 0, 0);
	iVar2 = func_1315(1623931083, 0, 0);
	*iParam0 = (*iParam0 + ((iVar0 + iVar1) + iVar2));
}

var func_870(int iParam0)
{
	Var1 = { func_1385(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

int func_871()
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_1442(iVar0);
		if (chal_get_num_ranks_completed(iVar2) >= chal_get_max_ranks(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

struct<2> func_872(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

float func_873(var uParam0, var uParam1)
{
	stat_id_get_float(&uParam0, &uVar0);
	return uVar0;
}

void func_874(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_232(iParam0))
	{
		return;
	}
	if (func_310(iParam0))
	{
		func_1443(iParam0, 0, 2);
	}
	iVar0 = func_1444(iParam0);
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

void func_875(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_449(Global_1898330[iParam0]);
		func_1445((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

int func_876(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_877(int iParam0)
{
	iVar0 = -1337945352;
	if (!func_238(iParam0))
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

bool func_878(int iParam0)
{
	if (func_125() != -1)
	{
		return false;
	}
	if (!func_238(iParam0))
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

void func_879(int iParam0)
{
	if (!func_878(iParam0))
	{
		if ((*Global_1347702)[iParam0]->f_13 & 16 != 0)
		{
			if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
			{
				if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
				{
					_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -1446646876);
				}
				func_886(&((*Global_1347702)[iParam0]->f_13), 32);
			}
		}
		else
		{
			if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
			{
				_set_blip_flash_style((*Global_1347702)[iParam0]->f_37, -1446646876);
			}
			func_455(&((*Global_1347702)[iParam0]->f_13), 32);
		}
	}
}

void func_880(int iParam0)
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

int func_881(int iParam0)
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

bool func_882(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

bool func_883(int iParam0)
{
	if (!func_1446(Global_40.f_4283))
	{
		if (!does_entity_exist(Global_35))
		{
			return true;
		}
		if (func_1447(iParam0))
		{
			if (vdist(Global_36, func_1448(iParam0)) < vdist(Global_36, (*Global_1888801)[iParam0]->f_15))
			{
				return get_distance_between_coords(Global_36, func_1448(iParam0), false) <= func_1449();
			}
		}
		return get_distance_between_coords(Global_36, (*Global_1888801)[iParam0]->f_15, false) <= func_1449();
	}
	return func_1450();
}

bool func_884(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && does_blip_exist((*Global_1347702)[iParam0]->f_37)) && (*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		return (*Global_1347702)[iParam0]->f_27 == iParam2;
	}
	return false;
}

void func_885(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_232(iParam0))
	{
		return;
	}
	switch (func_233(iParam0))
	{
		case 1:
			iVar0 = func_234(iParam0);
			if (func_1451(iVar0, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_1452(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_1452(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
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
				if (!func_1453(iVar0))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, -1986290853);
				}
				if (func_452((*Global_1835011)[iVar0], 2))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, 724623647);
				}
				(*Global_1835011)[iVar0]->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_234(iParam0);
			if (func_1454(iVar1, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_877(iVar1))
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
				iVar2 = func_877(iVar1);
			}
			if ((*Global_1347702)[iVar1]->f_38 != iVar2)
			{
				_0xbd62d98799a3daf0((*Global_1347702)[iVar1]->f_37, iVar2);
				func_880(iVar1);
				(*Global_1347702)[iVar1]->f_38 = iVar2;
			}
			break;
	}
}

void func_886(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_887(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_888(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return true;
	}
	return false;
}

void func_889(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_890(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_1455((*Global_1347702)[iParam0]->f_15) != 0)
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

int func_891(var uParam0)
{
	return uParam0->f_12.f_6;
}

char* func_892(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "SelectLabel";
		case 2:
			return "OptionLabel";
		case 3:
			return "ToggleLabel";
		case 4:
			return "InfoLabel";
		case 5:
			return "AdjustLabel";
		case 6:
			return "BackLabel";
	}
	return "";
}

int func_893(int iParam0, var uParam1)
{
	iVar0 = func_891(uParam1);
	if (iParam0 < 0 || iParam0 > iVar0)
	{
		return -1;
	}
	if (_item_database_get_shop_layout_menu_info_by_index(*uParam1, func_245(uParam1), iParam0, &uVar1))
	{
		return uVar1;
	}
	return -1;
}

bool func_894(int iParam0, int iParam1, int iParam2)
{
	if (_item_database_get_shop_layout_menu_info_by_id(iParam0, iParam1, &Var0))
	{
		return func_343(Var0.f_3, iParam2);
	}
	return false;
}

bool func_895(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam3 = 0;
	if (!func_533(iParam1))
	{
		return false;
	}
	if (_item_database_get_shop_layout_menu_info_by_id(iParam1, iParam2, &Var0))
	{
		if (Var0.f_5 > 0)
		{
			iVar7 = -1;
			iVar8 = 0;
			while (iVar8 < Var0.f_5)
			{
				if (_item_database_get_shop_layout_menu_page_key(iParam1, iParam2, iVar8, &iVar7))
				{
					if (func_1244(uParam0, iParam1, iVar7, iParam3, &uVar9))
					{
						return true;
					}
				}
				iVar8++;
			}
		}
	}
	return false;
}

int func_896(var uParam0, int iParam1)
{
	if (!func_278(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	func_932(uParam0->f_2, &iVar0);
	if (func_262(uParam0) == -2144266389)
	{
		return -339889117;
	}
	else if (func_917(iParam1))
	{
		return -348190488;
	}
	else if (!func_931(iParam1, 0) && func_1456(iParam1, iVar0))
	{
		return -349391286;
	}
	else if (func_1457(iParam1) && uParam0->f_3 == 152)
	{
		return 2077448405;
	}
	else if (func_1458(iParam1))
	{
		return -2056428614;
	}
	else if (func_339(iParam1) == -525676072 && uParam0->f_3 == 152)
	{
		return 1942587409;
	}
	else if (func_826(iParam1) == -1037537535 && uParam0->f_3 == 152)
	{
		return 761079318;
	}
	else if (func_612(iParam1, 188214926))
	{
		return 1702073444;
	}
	else if (func_339(iParam1) == -1839668642 || func_339(iParam1) == -1415811768)
	{
		return -760956867;
	}
	else if (func_339(iParam1) == 231148558 || func_339(iParam1) == 356304563)
	{
		return 38807286;
	}
	else if (func_826(iParam1) == -1013984273)
	{
		return 777890122;
	}
	else if (func_826(iParam1) == 658570475)
	{
		return -1502467280;
	}
	else if (func_826(iParam1) == 307971639)
	{
		return -1048755899;
	}
	else if (func_826(iParam1) == -1037537535)
	{
		return -853534656;
	}
	else if (func_1014(iParam1))
	{
		return -239176093;
	}
	else if (func_1459(iParam1))
	{
		return 1394581936;
	}
	else if ((((((func_339(iParam1) == 1795979421 || func_339(iParam1) == 1193257440) || func_339(iParam1) == 1415299667) || func_339(iParam1) == -1015460895) || func_339(iParam1) == -768291983) || func_339(iParam1) == 1206030994) || func_339(iParam1) == 526314052)
	{
		return -584027224;
	}
	else if (func_931(iParam1, 0) && func_1456(iParam1, iVar0))
	{
		return 2036169888;
	}
	else
	{
		return -384358143;
	}
	return 0;
}

int func_897(var uParam0, int iParam1)
{
	if (!func_1263(uParam0->f_2))
	{
		return 0;
	}
	if (!func_278(iParam1, 0))
	{
		return 0;
	}
	if (func_826(iParam1) != -1037537535)
	{
		return 0;
	}
	if (func_820(iParam1))
	{
		iVar0 = func_955(iParam1);
		if (iVar0 != 0)
		{
			iParam1 = iVar0;
		}
	}
	iVar1 = func_263(uParam0);
	if (!does_entity_exist(iVar1) || is_entity_dead(iVar1))
	{
		return 0;
	}
	iVar4 = func_339(iParam1);
	func_127(iVar1, 0);
	if (iVar4 == -999503751)
	{
		iVar5 = func_754(iParam1);
		if (iVar5 == 0)
		{
			func_259(iVar1, 1, 1);
		}
		else if (iVar5 <= 5 && iVar5 >= 1)
		{
			if (!func_1460(iVar1, iVar5, 1))
			{
				return 0;
			}
		}
		else if (!func_1461(iVar1, iParam1, 1))
		{
			return 0;
		}
	}
	else
	{
		if (!func_908(iVar1, iParam1, &uVar3))
		{
			return 0;
		}
		iVar2 = func_956(iParam1);
		if (!func_1462(iVar1, iParam1, 0, iVar2))
		{
			return 0;
		}
	}
	return 1;
}

bool func_898(var uParam0, int iParam1)
{
	iVar0 = func_1036(uParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	Var1 = { func_1005(0) };
	Var3 = { func_1006() };
	if (_0xa0bc8faed8cfeb3c(iVar0))
	{
		func_1463(uParam0, iParam1, iVar0, &Var1, &Var3);
	}
	else
	{
		uParam0->f_2309 = 1;
		uParam0->f_2318 = iParam1;
		uParam0->f_2308 = iVar0;
		uParam0->f_2310 = { Var1 };
		uParam0->f_2312 = { Var3 };
	}
	uParam0->f_2031.f_98 = 1;
	return true;
}

bool func_899()
{
	return 1 == Global_40.f_7748.f_3;
}

int func_900(int iParam0)
{
	switch (iParam0)
	{
		case 1156231582:
			return -986108061;
		case -1472456118:
			return -1051664629;
		case -2120294484:
			return 1471627791;
		case -814448122:
			return 1012091683;
		case 1279519416:
			return 282876023;
		case 933586678:
			return 1334801974;
		case 1612093252:
			return -736147717;
		case 530132198:
			return -245303732;
		case -499492817:
			return -1900633994;
		case -1392593303:
			return -1511041621;
		case -2091943191:
			return -193909113;
		case 1165676701:
			return -929316746;
		case 1380556716:
			return -1147723761;
		case -1140711191:
			return 963009459;
		case -1189021969:
			return 602337354;
		case 862555979:
			return -1471756535;
		case -674783297:
			return -2017785881;
		case 279124309:
			return -827216318;
		default:
			break;
	}
	return 0;
}

bool func_901(int iParam0)
{
	if (iParam0 == 1279130184)
	{
		if (func_899())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return iParam0 == func_632();
}

int func_902(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	fVar0 = 1f;
	iVar1 = Global_1914319->f_16855;
	if (iVar1 != -1)
	{
		fVar0 = func_1464(&(Global_1914319->f_3[iVar1]->f_35), iParam0);
	}
	iVar2 = round((IntToFloat(func_1186(iParam0, -915411861, 1, 0, bParam1)) * fVar0));
	return iVar2;
}

void func_903(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	func_471(uParam0, iParam1, sParam2);
	func_253(uParam0, iParam1, bParam5);
	func_251(uParam0, iParam1, bParam3);
	func_252(uParam0, iParam1, bParam4);
}

int func_904()
{
	return Global_40.f_7748.f_1;
}

void func_905(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_40.f_7748.f_1;
	}
	func_658();
	func_1173(iParam1);
	if (bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_94(1, 64, 0, 0, 0);
		}
		else
		{
			func_94(1, 64, 1, iParam0, 0);
		}
	}
	func_336(1);
}

bool func_906(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (func_612(iParam0, -1303648999))
	{
		return true;
	}
	return false;
}

bool func_907(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (func_612(iParam0, 160827531))
	{
		return true;
	}
	return false;
}

bool func_908(int iParam0, int iParam1, int iParam2)
{
	if (!func_278(iParam1, 0))
	{
		return false;
	}
	if (func_826(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_125() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_339(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_956(iParam1);
	if (iVar4 == -358215195)
	{
		*iParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_612(iParam1, 866047851))
	{
		iVar5 = func_656(iVar4, 1);
		if (func_1160(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
		{
			*iParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (_get_ped_component_category(iVar8, iVar2, bVar1) == 2056714954 && _is_metaped_using_component(iParam0, -1455751347))
			{
				*iParam2 = 111371848;
				return false;
			}
			iVar5 = 10;
			iVar3 = func_339(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*iParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_612(iParam1, -1638171711))
			{
				*iParam2 = 187275271;
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
			{
				*iParam2 = 2143522536;
				return false;
			}
			if (_is_metaped_using_component(iParam0, -1968556728))
			{
				*iParam2 = -849690042;
				return false;
			}
			break;
		case -1505978566:
			if (func_388(1868067663, &uVar0))
			{
				*iParam2 = 939463734;
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
				iVar10 = func_1465(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1465(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*iParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_339(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_612(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*iParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1200(&(Global_1946804->f_1497.f_1[iVar5])))
					{
						*iParam2 = -357399012;
						return false;
					}
					if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
					{
						*iParam2 = 2143522536;
						return false;
					}
				}
			}
			*iParam2 = 0;
			return true;
			default:
				break;
	}
}

bool func_909(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		iVar0 = func_896(uParam0, iParam1);
	}
	else
	{
		iVar0 = iParam2;
	}
	bVar1 = true;
	bVar2 = func_834(uParam0, iParam1, iVar0);
	bVar3 = func_360(1) >= func_902(iParam1, 0);
	bVar4 = !func_1152(uParam0, iParam1);
	bVar6 = func_634(uParam0, iParam1, iVar0, -1);
	iVar7 = func_263(uParam0);
	switch (iVar0)
	{
		case -384358143:
			bVar1 = ((bVar3 && bVar4) && !func_931(iParam1, 0));
			break;
		case 1394581936:
			bVar1 = ((bVar3 && bVar4) || (bVar2 && !bVar6));
			break;
		case -1395073769:
		case -853534656:
			bVar1 = ((bVar3 && bVar4) || bVar2);
			if (func_339(iParam1) != -999503751)
			{
				if (func_1263(uParam0->f_2))
				{
					if (!does_entity_exist(iVar7) || is_entity_dead(iVar7))
					{
					}
					else
					{
						bVar5 = func_908(iVar7, iParam1, &uVar8);
						if (!bVar5)
						{
						}
						bVar1 = (bVar1 && bVar5);
						Jump @754; //curOff = 343
						if (!does_entity_exist(iVar7) || is_entity_dead(iVar7))
						{
						}
						else
						{
							if (func_1263(uParam0->f_2))
							{
								bVar1 = func_908(iVar7, iParam1, &uVar8);
							}
							Jump @754; //curOff = 394
							func_932(uParam0->f_2, &iVar9);
							iVar10 = func_933(uParam0->f_2);
							bVar1 = (((!bVar2 && !func_1262(iParam1, iVar9, 1)) && bVar4) && func_935(iParam1, iVar9, 0, 1, iVar10, 1));
							Jump @754; //curOff = 462
							bVar1 = (((bVar3 && !func_931(iParam1, 0)) && !(func_986() == -1 && func_910(0))) && !func_984(uParam0, 128));
							Jump @754; //curOff = 518
							bVar1 = ((bVar3 || func_834(uParam0, iParam1, iVar0)) && bVar4);
							Jump @754; //curOff = 548
							bVar1 = ((bVar3 && !func_931(iParam1, 0)) && bVar4);
							Jump @754; //curOff = 575
							bVar1 = (func_931(iParam1, 0) || (bVar3 && bVar4));
							Jump @754; //curOff = 602
							if (uParam0->f_2 == 25)
							{
								bVar1 = (func_1466(iParam1) && !func_1467(iParam1));
							}
							else
							{
								if (func_951(2))
								{
									iVar11 = 0;
								}
								else
								{
									iVar11 = func_902(iParam1, 0);
								}
								bVar3 = func_360(1) >= iVar11;
								bVar1 = ((bVar3 && func_1466(iParam1)) && bVar4);
							}
							Jump @754; //curOff = 692
							if (iParam1 != 1279130184)
							{
								bVar1 = (bVar3 && func_1468(iParam1));
							}
							else
							{
								bVar1 = ((bVar3 && !func_899()) && !func_631(func_632()));
							}
						}
					}
					if (uParam0->f_2031.f_119)
					{
						Stack.Push(bVar1);
						Stack.Push(uParam0);
						Stack.Push(func_261(uParam0));
						Stack.Push(iParam1);
						Stack.Push(iVar0);
						Call_Loc(uParam0->f_2031.f_120);
						bVar1 = (StackVal && StackVal);
					}
					return bVar1;
				}
			}
			default:
				break;
	}
}

bool func_910(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_911(iParam0) == 0)
	{
		return false;
	}
	return true;
}

int func_911(int iParam0)
{
	iParam0 = func_444(iParam0);
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

bool func_912(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1469(*uParam0, &Var0, bParam1, 0))
	{
		return false;
	}
	Var14.f_9 = -1591664384;
	if (!func_1469(Var0.f_5, &Var14, bParam1, 0))
	{
		return false;
	}
	if (!func_1014(Var14.f_4))
	{
		return false;
	}
	return Var0.f_10;
}

void func_913(var uParam0, var uParam1)
{
	uParam0->f_2031.f_86 = { *uParam1 };
}

bool func_914(int iParam0, int iParam1, bool bParam2)
{
	Var0.f_9 = -1591664384;
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (!func_1470(iParam0, &uVar22, &Var0, iParam1))
	{
		return false;
	}
	if (!bParam2)
	{
		if (func_1471(iParam0, &Var0, iParam1))
		{
			return false;
		}
	}
	return true;
}

int func_915()
{
	return -2087382057;
}

int func_916(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_917(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
	}
	if (func_612(iParam0, -393037696))
	{
		return true;
	}
	return false;
}

int func_918(var uParam0)
{
	iVar0 = 0;
	if (!func_585(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
		return -1;
	}
	return iVar0;
}

int func_919(int iParam0, int iParam1)
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

bool func_920(var uParam0, int iParam1, var uParam2)
{
	if (!func_278(iParam1, 0))
	{
		return false;
	}
	iVar0 = func_1090(uParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	iVar3 = 0;
	while (iVar3 < iVar0)
	{
		iVar1 = func_1223(iVar3, uParam0);
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			vVar4 = { func_1224(iVar3, iVar2, uParam0) };
			if (vVar4.x == iParam1)
			{
				*uParam2 = iVar3;
				return true;
			}
			iVar2++;
		}
		iVar3++;
	}
	return false;
}

bool func_921(int iParam0, int iParam1, int iParam2)
{
	iVar1 = 20;
	iVar2 = 35;
	*iParam2 = 0;
	switch (iParam1)
	{
		case 0:
			if (_is_metaped_using_component(iParam0, 2056714954))
			{
				*iParam2 = -1938792745;
				return false;
			}
			if (_is_metaped_using_component(iParam0, 694822476))
			{
				*iParam2 = -1938792745;
				return false;
			}
			return true;
		case 1:
			if (&Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
			{
				*iParam2 = 1317906541;
				return false;
			}
			iVar0 = 22;
			if (&Global_1946804->f_1497.f_1[iVar0] != &Global_1946804->f_57[iVar0])
			{
				*iParam2 = -692182446;
				return false;
			}
			return true;
		case 2:
			if (&Global_1946804->f_1497.f_1[iVar2] != &Global_1946804->f_57[iVar2])
			{
				*iParam2 = 807419199;
				return false;
			}
			return true;
		default:
			break;
	}
	return true;
}

bool func_922(int iParam0)
{
	switch (*iParam0)
	{
		case 5:
		case 23:
		case 28:
		case 69:
		case 76:
		case 78:
		case 105:
			return true;
		default:
			break;
	}
	return false;
}

int func_923(int iParam0, int iParam1, int iParam2)
{
	if (!func_111(iParam0))
	{
		*iParam2 = -676468980;
		return 0;
	}
	if (!func_111(iParam1))
	{
		*iParam2 = -676468980;
		return 0;
	}
	if (!func_1472(0, 1) || !func_1472(1, 1))
	{
		*iParam2 = -676468980;
		return 0;
	}
	iVar0 = func_1473(iParam0, iParam1);
	if (func_360(1) < iVar0)
	{
		*iParam2 = 1770286334;
		return 0;
	}
	*iParam2 = 1510530693;
	return 1;
}

int func_924(int iParam0)
{
	if (!func_717(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0]);
	}
	return &(Global_1058888->f_42266[iParam0]);
}

int func_925(var uParam0, int iParam1)
{
	_0xd962f8579d702db5();
	bVar0 = func_622(0);
	if (iParam1 == -772187037)
	{
		func_636(uParam0, 1, -672301300, bVar0, 1, 0);
		Var1.f_9 = -1591664384;
		if (func_1247(func_960(uParam0), &Var1, func_961(uParam0)))
		{
			func_640(uParam0, 1010638409);
		}
		else
		{
			func_640(uParam0, 1547417882);
		}
	}
	else if (iParam1 == -2092532275)
	{
		if (func_899())
		{
			func_640(uParam0, 125684063);
		}
		else if (!func_793(1613651027, 1, 0))
		{
			func_640(uParam0, -1870030974);
		}
		func_636(uParam0, 1, -672301300, bVar0, 1, 0);
		if (!func_899() && !func_631(func_632()))
		{
			func_630(func_900(func_632()), Global_35, -1, 1);
		}
		else
		{
			func_630(func_632(), Global_35, -1, 1);
		}
	}
	else if (iParam1 == -1352600334)
	{
		func_636(uParam0, 1, -672301300, bVar0, 1, 0);
		if (bVar0)
		{
			iVar23 = func_1474(uParam0);
			_0x7e2c766adb2c5f1a(iVar23, 2);
		}
	}
	else if (iParam1 == 2073652352)
	{
		func_636(uParam0, 1, -672301300, bVar0, 1, 0);
	}
	return 1;
}

bool func_926(bool bParam0)
{
	if (func_125() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_1209(bParam0));
}

int func_927(var uParam0)
{
	return uParam0->f_2031.f_44;
}

bool func_928(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_929(int iParam0, int iParam1, var uParam2)
{
	iVar0 = func_1475(iParam1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (iVar0 == 11)
	{
		Var1.f_2 = 1;
		Var1.f_3 = -15;
		if (!func_1476(&(Global_1914319->f_17378), iParam0, &Var1))
		{
			return false;
		}
		if (Var1 != 0)
		{
			*uParam2 = Var1;
			uParam2->f_2 = 1;
			return true;
		}
	}
	else
	{
		if (_item_database_is_shop_key_valid(func_82(iVar0)))
		{
			if (!_item_database_get_shop_inventories_item_info_by_key(func_82(iVar0), iParam0, &iVar6))
			{
				return false;
			}
		}
		if (iVar6 == 0)
		{
			return false;
		}
		iVar9 = 0;
		if (!func_1477(iParam1, &iVar6, uParam2, &iVar9))
		{
			return false;
		}
		if (func_1014(iParam0))
		{
			iVar10 = func_1478(iParam0, iParam1, 1);
			iVar11 = func_1000(iParam0);
			iVar12 = func_1001(iVar11);
			if (iVar12 == 153881023 || iVar12 == 2010625508)
			{
				if (!func_1479(iVar12))
				{
					iVar10 = (iVar10 - 1);
				}
			}
			if (iVar10 <= 0)
			{
				return false;
			}
		}
		uParam2->f_2 = 1;
		return true;
	}
	return false;
}

bool func_930(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!func_278(iParam1, 0))
	{
		return false;
	}
	iVar0 = iParam1;
	bVar1 = true;
	if (func_1149(&iVar0))
	{
		bVar1 = false;
	}
	if (func_826(iParam1) == 307971639 && func_612(iParam1, -1588156645))
	{
		bVar1 = false;
	}
	iVar2 = func_902(iParam1, 0);
	if (iParam2 != -1)
	{
		iVar2 = iParam2;
	}
	if ((func_360(0) - iVar2) < 0)
	{
		func_196("SHOP_H_TOO_POOR", 10000, 0, 0, 0, 1);
		return false;
	}
	if (func_278(func_1480(uParam0->f_3), 0))
	{
		if (iParam1 != func_1480(uParam0->f_3))
		{
			if (func_360(0) - iVar2) < func_902(func_1480(uParam0->f_3), 0)
			{
				return false;
			}
		}
	}
	iVar3 = 0;
	if (!func_1264(iParam1, -915411861, &iVar3, 0))
	{
		iVar3 = 1;
	}
	if (uParam0->f_148.f_1750 > 1)
	{
		iVar3 = (iVar3 * uParam0->f_148.f_1750);
		iVar2 = (iVar2 * uParam0->f_148.f_1750);
	}
	if (bParam3)
	{
		if (func_931(iVar0, 0))
		{
			func_196("SHOP_H_MAX_ITEM", 10000, 0, 0, 0, 1);
			return false;
		}
	}
	iVar5 = func_826(iVar0);
	if (iVar5 == -1784221369)
	{
	}
	else if (iVar5 == -1977020088)
	{
	}
	else if (iVar5 == -1037537535)
	{
		if (bParam3 && !func_846(iParam1, iVar3, 1, 0, 1, 1248274121, 0, 0, 0, 0))
		{
			return false;
		}
		if (func_1457(iParam1))
		{
			if (func_1481(iParam1))
			{
				iVar52 = func_1482(iParam1, &uVar6);
				iVar53 = 0;
				while (iVar53 < iVar52)
				{
					if (!func_793(&(uVar6[iVar53]), 1, 0) && !func_846(&(uVar6[iVar53]), 1, 1, 0, 0, 1248274121, 0, 0, 0, 0))
					{
						return false;
					}
					iVar53++;
				}
			}
		}
		else if (uParam0->f_2 == 18)
		{
			func_937(iParam1);
		}
		else if (uParam0->f_2 == 6)
		{
			if (iParam1 == -469722632 && func_793(899611344, 1, 0))
			{
				func_846(-1185145312, 1, 0, 0, 0, 1248274121, 0, 0, 0, 0);
			}
		}
	}
	else if (func_1483(iParam1))
	{
		if (iVar5 == 307971639)
		{
			iVar4 = func_1150(iParam1, 0);
		}
		if (!func_846(iParam1, iVar3, 1, 0, 1, 1248274121, 0, 0, 0, 0))
		{
			return false;
		}
		else if (func_1204(iParam1))
		{
			if (!func_1484(iParam1))
			{
				func_1377(iParam1);
			}
		}
	}
	else if (func_1485(iParam1))
	{
		iVar54 = iVar3;
		if (func_612(iParam1, 58855631))
		{
			iVar54 = uParam0->f_148.f_1750;
		}
		if (!func_846(iParam1, iVar54, 1, 0, 0, 1248274121, 0, 0, 0, 0))
		{
			return false;
		}
	}
	else if (func_1486(iParam1))
	{
		iVar55 = iVar3;
		if (func_612(iParam1, 58855631))
		{
			iVar55 = uParam0->f_148.f_1750;
		}
		if (!func_846(iParam1, iVar55, 1, 0, 0, 1248274121, 0, 0, 0, 0))
		{
			return false;
		}
	}
	else if (bParam3)
	{
		if (!func_846(iParam1, 1, 1, 0, 1, 1248274121, 0, 0, 0, 0))
		{
			return false;
		}
	}
	if (func_1487(iVar0))
	{
		func_1489(func_1488(iVar0), 1);
	}
	if (func_971(uParam0->f_3, 262144))
	{
		func_972(uParam0->f_3, 262144);
	}
	func_970(iVar2, 0, 0, 0, 0);
	bVar56 = false;
	if (_item_database_is_overpowered_item(iVar0))
	{
		bVar56 = true;
	}
	if (bVar1)
	{
		if (iParam4 != 0)
		{
			func_969(iParam4, iVar3, 0, 1, bVar56);
		}
		else
		{
			if (iVar5 == 307971639)
			{
				iVar3 = func_1490(iVar3, 0, (func_1151(iParam1, 0) - iVar4));
			}
			func_969(iVar0, iVar3, 0, 1, bVar56);
		}
	}
	func_940(uParam0->f_2, uParam0->f_3, iParam1, iVar3, iVar2);
	func_1491(uParam0->f_2, Global_35, iParam1);
	uParam0->f_2009 = uParam0->f_2008;
	uParam0->f_2008 = iParam1;
	uParam0->f_2319.f_11 = 1;
	uParam0->f_1999.f_3 = 1;
	uParam0->f_6 = 1;
	if (!Global_20710.f_2402)
	{
		Global_20710.f_2402 = 1;
	}
	if (func_1480(uParam0->f_3) == iParam1)
	{
		func_1492(uParam0->f_3);
	}
	iVar57 = func_1493(iParam1, 0);
	if (!_0x6df942c4179be5ab(iVar57, -41291407))
	{
		play_sound_frontend("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
	else
	{
		_0xe8eaff7b41edd291(iVar57, -41291407, 0);
	}
	return true;
}

bool func_931(int iParam0, bool bParam1)
{
	if (func_826(iParam0) == -1977020088 && func_125() == -1)
	{
		return func_1336(iParam0);
	}
	Var0 = { func_1185(iParam0, 0, 1) };
	return func_1494(iParam0, &Var0, 1, bParam1, 0);
}

void func_932(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 18:
			*iParam1 = 369710026;
			break;
		case 19:
			*iParam1 = 761605153;
			break;
		case 6:
			*iParam1 = -893266537;
			break;
		case 4:
			*iParam1 = -768110908;
			break;
	}
}

int func_933(int iParam0)
{
	switch (iParam0)
	{
		case 18:
			return 1;
		case 19:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_934(int iParam0, int iParam1)
{
	if (iParam0 == 19)
	{
		if (func_339(iParam1) == -590250209)
		{
			return 0;
		}
		else
		{
			return 3;
		}
	}
	return 0;
}

int func_935(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	return func_1495(iParam0, iParam1, &uVar0, &uVar1, &uVar2, bParam2, bParam3, iParam4, bParam5);
}

void func_936(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	if (!func_278(iParam0, 0))
	{
		return;
	}
	if (!func_926(0))
	{
		func_1496(iParam0, iParam1);
	}
	else if (func_1497(iParam0, iParam1, 0, bParam2, iParam4))
	{
		func_1498(iParam0, 1, bParam3, 1, iParam5);
	}
}

void func_937(int iParam0)
{
	Var8 = -1;
	Var8.f_1 = -1;
	Var8.f_2 = -1;
	Var8.f_3 = -1;
	Var8.f_4 = -1;
	Var8.f_5 = -1;
	Var8.f_6 = -1;
	Var8.f_7 = -1;
	Var8.f_8 = -1;
	Var29 = -1;
	Var29.f_1 = -1;
	Var29.f_2 = -1;
	Var29.f_3 = -1;
	Var29.f_4 = -1;
	Var29.f_5 = -1;
	Var29.f_6 = -1;
	Var29.f_7 = -1;
	Var29.f_8 = -1;
	Var29.f_13 = -1;
	if (!_item_database_fillout_tag_data(iParam0, &Var18, &iVar0, 5))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (Var18[iVar1]->f_1 != 2117289778)
		{
		}
		else
		{
			Var8 = { func_1499(-1591664384, -1591664384, 0, 0, 0, 0, -1, &(Var18[iVar1]), 0) };
			if (!func_1500(Var8, &iVar4, &iVar5, 0))
			{
			}
			else if (iVar5 <= 0)
			{
				func_1501(iVar4);
			}
			else
			{
				Var29 = { func_978(0, -1591664384, -1591664384, -1591664384, 0, &(Var18[iVar1])) };
				if (!func_979(&Var29, &iVar2, &iVar3, 0))
				{
					func_1501(iVar4);
				}
				else
				{
					func_981(iVar2);
					if (iVar3 < (iVar5 - 1))
					{
						func_1501(iVar4);
					}
					else
					{
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							if (!_0x8750f69a720c2e41(iVar4, iVar6, &iVar7))
							{
							}
							else if (func_339(iVar7) == -999503751)
							{
								func_846(iVar7, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
							}
							iVar6++;
						}
						func_1501(iVar4);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_938()
{
	if (!func_1502(456315479))
	{
		bVar0 = true;
		if (!func_1502(1486898918))
		{
			if (func_1503(12, 0) > 1)
			{
				func_1504(1486898918);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!func_1502(1500419820))
		{
			if (func_1503(3, 0) > 2)
			{
				func_1504(1500419820);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!func_1502(-1642438278))
		{
			if (func_1503(4, 0) > 2)
			{
				func_1504(-1642438278);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!func_1502(-1784068921))
		{
			if (func_1505())
			{
				func_1504(-1784068921);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			func_1504(456315479);
		}
	}
}

int func_939(int iParam0, int iParam1)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (func_1456(iParam0, iParam1))
	{
		if (func_1506(iParam0, iParam1, &Var0, &iVar31, 1, 0))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				iVar33 = &Var0[iVar32];
				if (func_278(iVar33, 0) && iVar33 == 2084597891)
				{
					return Var0[iVar32]->f_1;
				}
				iVar32++;
			}
		}
	}
	return 0;
}

int func_940(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_125() == 0)
	{
		return 1;
	}
	if (func_1014(iParam2))
	{
		func_1507(iParam1, iParam2, iParam3);
	}
	func_1508(iParam0, iParam1, iParam2, iParam3, iParam4);
	return 1;
}

void func_941(int iParam0)
{
	_unlock_set_new(func_587(iParam0), true);
}

void func_942(bool bParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (func_1187())
		{
			func_1509();
		}
		iVar0++;
	}
	if (!bParam0)
	{
		return;
	}
	func_905(Global_35, -1, 1);
}

void func_943()
{
	iVar0 = 1;
	iVar1 = &Global_1946804->f_1378.f_1[iVar0];
	if (!func_899() && func_1510(iVar1))
	{
		Global_1946804->f_1378.f_1[iVar0] = func_1511(iVar1);
	}
	func_336(0);
	*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
	func_1512();
	Global_40.f_7748.f_2 = func_632();
	func_946(Global_1946804->f_2656, 0);
	func_1513();
}

int func_944(var uParam0, int iParam1)
{
	bVar6 = ((func_612(iParam1, -650091303) || func_612(iParam1, -709142106)) && !func_612(iParam1, 518788085));
	if (iParam1 == 1574030042 || func_631(iParam1))
	{
		func_623(uParam0, 0);
		return 10;
	}
	else if (iParam1 == 1024854903)
	{
		iVar7 = 0;
		iVar0 = 0;
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (iVar0 < func_1167(iVar7) + 1)
			{
				iVar0 = func_1167(iVar7) + 1;
			}
			iVar7++;
		}
	}
	else if (bVar6)
	{
		iVar0 = 0;
		iVar8 = 0;
		if (!func_1169(iParam1, &uVar2))
		{
			return 10;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (&uVar2[iVar1] > iVar8)
			{
				iVar8 = &uVar2[iVar1];
			}
			iVar1++;
		}
		iVar0 = (10 - iVar8) + 1;
	}
	else if (func_612(iParam1, 1926305489))
	{
		iVar0 = func_1167(0) + 1;
	}
	else if (func_612(iParam1, -248115177))
	{
		iVar0 = func_1167(1) + 1;
	}
	else if (func_612(iParam1, -489098996))
	{
		iVar0 = func_1167(2) + 1;
	}
	else
	{
		iVar0 = func_904() + 1;
	}
	iVar9 = 0;
	if (func_612(iParam1, -964485123))
	{
		iVar9 = 3;
	}
	else if (func_612(iParam1, 518788085))
	{
		func_633(2, &iVar10);
		if (iParam1 == 1792152856 && (iVar10 == 1629162959 || iVar10 == -355063150))
		{
			iVar9 = 4;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else if (bVar6)
	{
		iVar11 = 10;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (&uVar2[iVar1] == -1)
			{
			}
			else if ((&uVar2[iVar1] - func_1170(iVar1)) < iVar11)
			{
				iVar11 = (&uVar2[iVar1] - func_1170(iVar1));
			}
			iVar1++;
		}
		iVar9 = func_1490(iVar11 + 1, 0, iVar0);
	}
	if (iParam1 == 1156231582 || iParam1 == -1392593303)
	{
		if (func_904() >= 2)
		{
			iVar12 = 2;
		}
		else
		{
			iVar12 = 1;
		}
		func_1089(uParam0, 2, -1, iVar12, 1, 1);
	}
	else if (func_612(iParam1, -964485123) || (func_612(iParam1, 518788085) && !func_612(iParam1, -709142106)))
	{
		func_1089(uParam0, (10 - iVar9), -1, (iVar0 - iVar9), 1, 1);
	}
	else if (bVar6)
	{
		func_1089(uParam0, iVar0, -1, iVar9, 1, 1);
	}
	else
	{
		func_1089(uParam0, (11 - iVar9), -1, (iVar0 - iVar9), 1, 1);
	}
	return iVar9;
}

void func_945(bool bParam0)
{
	Global_40.f_7748.f_3 = 1;
	iVar0 = func_435();
	func_1514(&iVar0, 0, 0, 0, func_8(bParam0, 5, 2), 0, 0, 0);
	if (func_1515(iVar0, Global_40.f_7748, 1))
	{
		Global_40.f_7748 = iVar0;
	}
}

void func_946(int iParam0, bool bParam1)
{
	if (!func_1516(iParam0))
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
		Global_40.f_7748.f_5 = func_435();
		bVar2 = (Global_40.f_7748.f_1 < 9 && func_1517());
		func_1518(Global_40.f_7748.f_1, &iVar0, &iVar1, bVar2);
		func_1514(&(Global_40.f_7748.f_5), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_947(bool bParam0)
{
	if (func_899() && (bParam0 || func_1519(Global_40.f_7748, 1)))
	{
		Global_40.f_7748.f_3 = 0;
		if (bParam0)
		{
			Global_40.f_7748 = func_435();
		}
		else
		{
			func_341(492, 1);
		}
		func_94(9, 0, 0, 0, 0);
	}
}

bool func_948(int iParam0)
{
	return (Global_40.f_7748.f_4 && iParam0) != 0;
}

void func_949()
{
	func_336(0);
	func_1520(0, Global_1946804->f_2653, 0);
	func_1520(1, Global_1946804->f_2654, 0);
	func_1520(2, Global_1946804->f_2655, 0);
	iVar0 = 5;
	iVar1 = 6;
	iVar2 = 7;
	iVar3 = 0;
	*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
	*Global_1946804->f_1497.f_1[iVar1] = { *Global_1946804->f_1378.f_1[iVar1] };
	*Global_1946804->f_1497.f_1[iVar2] = { *Global_1946804->f_1378.f_1[iVar2] };
	*Global_1946804->f_1497.f_1[iVar3] = { *Global_1946804->f_1378.f_1[iVar3] };
	func_1521();
	func_1522();
}

void func_950(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 <= 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 1024854903:
			func_1523(0, 0, iParam2);
			func_1523(1, 0, iParam2);
			func_1523(2, 0, iParam2);
			break;
		case 1224358974:
			func_1523(0, 0, iParam2);
			break;
		case 1107981273:
			func_1523(1, 0, iParam2);
			break;
		case 1792152856:
			func_1523(2, 0, iParam2);
			break;
	}
	if (!bParam1)
	{
		return;
	}
	func_1168(Global_35, -1, -1, -1, 1);
}

bool func_951(int iParam0)
{
	return (Global_40.f_7731.f_16 && iParam0) != 0;
}

void func_952(int iParam0, int iParam1)
{
	if (!func_117(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0] && iParam1);
	Global_40.f_7157[iParam0] = (&Global_40.f_7157[iParam0] - iVar0);
}

void func_953(int iParam0, int iParam1)
{
	if (!func_117(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

void func_954(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_1524()) || bParam5)
		{
			func_1525();
		}
	}
	if (func_125() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (decor_exist_on(Global_35, "playerChangeOutfits") && decor_get_bool(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_1176(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1354(Global_40.f_7729);
				Global_1946804->f_1378 = func_1354(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_1526(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_1527(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_129(0, 1);
	}
	func_336(0);
}

int func_955(int iParam0)
{
	iVar0 = func_956(iParam0);
	if (func_656(iVar0, 1) >= 39 || func_656(iVar0, 1) < 0)
	{
		return 0;
	}
	return &(Global_1946804->f_57[func_656(iVar0, 1)]);
}

int func_956(int iParam0)
{
	Var0 = { func_1185(iParam0, 1, 0) };
	return func_1312(Var0.f_4);
}

int func_957(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_1185(iParam1, 1, 0) };
		iParam3 = func_1312(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1172(iParam1, iParam2, func_656(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_662(1, (func_125() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_656(iParam3, 1)])
			{
				func_94(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_538(32768) && iParam1 != &Global_1946804->f_57[func_656(iParam3, 1)])
			{
				func_1058();
				func_94(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_94(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1528(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_94(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_128(0);
			func_730(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_94(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

int func_958(var uParam0)
{
	return uParam0->f_2031.f_83;
}

void func_959(int iParam0)
{
	_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
	clear_ped_env_dirt(iParam0);
	clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
	clear_ped_blood_damage(Global_35);
}

int func_960(var uParam0)
{
	return uParam0->f_2031.f_84;
}

int func_961(var uParam0)
{
	return uParam0->f_2031.f_85;
}

bool func_962(int iParam0, int iParam1, int iParam2)
{
	return _item_database_get_shop_layout_page_info_by_key(iParam0, iParam1, iParam2);
}

Vector3 func_963(int iParam0, struct<4> Param1, var uParam5)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	iVar3 = 0;
	iVar4 = -1;
	iVar5 = -1;
	if (iParam0 >= 0 && iParam0 < Param1.f_3)
	{
		if (_item_database_get_shop_layout_page_item_key(*uParam5, Param1, iParam0, &iVar3, &iVar4, &iVar5))
		{
			vVar0.x = iVar3;
			vVar0.f_1 = iVar5;
			vVar0.f_2 = iVar4;
		}
	}
	return vVar0;
}

bool func_964(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (!func_278(iParam1, 0))
	{
		return false;
	}
	if (!func_1204(iParam0))
	{
		return false;
	}
	Var10.f_9 = -1591664384;
	if (!func_965(iParam1, iParam0, &iVar0, &Var1, &uVar5, 1, iParam2))
	{
		return false;
	}
	iVar24 = func_973(Var1, iVar0, 0);
	if (iParam1 == iVar24)
	{
		if (!bParam3)
		{
			if (func_1469(Var1, &Var10, 0, 0))
			{
				if (func_826(Var10.f_4) == -427144552)
				{
				}
				else if (!Var10.f_10)
				{
					return false;
				}
			}
		}
		return true;
	}
	return false;
}

bool func_965(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_339(iParam1);
		iVar5 = func_974(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (_item_database_get_has_slot_info(iVar1, iVar0, &iVar2))
			{
				if (_item_database_can_equip_item_on_category(iParam0, iVar1, iVar2))
				{
					*uParam4 = { func_1185(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_669(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = iVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_1209(0);
			Var37 = { func_1185(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_669(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = _0xe843d21a8e2498aa(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (_0xcd9a485f2b383b44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_339(Var6.f_4);
					iVar5 = _item_database_get_has_slot_count(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (_item_database_get_has_slot_info(iVar1, iVar0, &iVar2))
						{
							if (_item_database_can_equip_item_on_category(iParam0, iVar1, iVar2))
							{
								if (func_1529(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = iVar2;
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

bool func_966(struct<4> Param0, int iParam4)
{
	if (!func_926(0))
	{
		return func_1530(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1469(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_1209(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_967(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1531(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_968(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_278(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1494(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_926(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_1209(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_969(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_278(iParam0, 0))
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
	if (!func_1532())
	{
		func_1533(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1534(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1534(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_1373(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_826(iParam0);
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
	else if (!func_1339(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1340(_create_var_string(10, &cVar2, _create_var_string(0, func_1154(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_612(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_1154(iParam0));
	}
	func_1341(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_970(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1535(iParam0);
	if (bParam3)
	{
		func_1536(iParam0, sParam1, iParam2);
	}
}

bool func_971(int iParam0, int iParam1)
{
	if (!func_928(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_972(int iParam0, int iParam1)
{
	if (!func_928(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

int func_973(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_1529(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_974(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_339(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

int func_975(int iParam0, int iParam1)
{
	iVar0 = _item_database_get_bundle_id(iParam0);
	if (iVar0 != 0)
	{
		uVar2 = 1;
		iVar4 = _item_database_get_bundle_item_count(iVar0, &uVar2);
		iVar1 = 0;
		while (iVar1 < iVar4)
		{
			if (_item_database_get_bundle_item_info(iVar0, &uVar2, iVar1, &Var5))
			{
				if (Var5.f_1 == iParam1)
				{
					return Var5;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

bool func_976(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_926(bParam10))
	{
		return func_1537(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1469(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_670(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_1209(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_966(Var14, 1))
		{
		}
	}
	return true;
}

bool func_977(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1538(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1469(*uParam1, &Var0, bParam6, 0))
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
	if (!func_926(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_1209(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

struct<14> func_978(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_979(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_1209(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_980(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_981(int iParam0)
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

bool func_982(int iParam0, int iParam1)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (!func_1204(iParam0))
	{
		return false;
	}
	iVar1 = func_339(iParam0);
	Var7 = { func_1185(iParam0, 0, 0) };
	Var7.f_4 = iParam1;
	Var12 = { func_669(iParam0, Var7, Var7.f_4, 0) };
	Var16 = -1;
	Var16.f_1 = -1;
	Var16.f_2 = -1;
	Var16.f_3 = -1;
	Var16.f_4 = -1;
	Var16.f_5 = -1;
	Var16.f_6 = -1;
	Var16.f_7 = -1;
	Var16.f_8 = -1;
	iVar36 = 1;
	iVar37 = func_974(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar37)
	{
		if (_item_database_get_has_slot_info(iVar1, iVar0, &iVar2))
		{
			if (((((((((iVar2 == -1088328663 || iVar2 == 513602003) || iVar2 == -1420574021) || iVar2 == 1079459546) || iVar2 == -1779133048) || iVar2 == 1254273765) || iVar2 == 2063859257) || iVar2 == -1652627327) || (iParam0 == -506285289 && iVar2 == 1400281261)) || (iParam0 == 1402226560 && iVar2 == -201958220))
			{
			}
			else
			{
				Var16 = iVar2;
				iVar26 = _item_database_create_item_collection(&Var16, &iVar27, 1);
				if (iVar26 == -1)
				{
				}
				else if (iVar27 == 0)
				{
					_0xcbb7b6edfa933ade(iVar26);
				}
				else
				{
					if (_0x8750f69a720c2e41(iVar26, 0, &iVar28) && _item_database_fillout_item_info(iVar28, &vVar29))
					{
						if (vVar29.z == -1013984273 || (vVar29.z == 658570475 && (iVar2 == 354352628 || iVar2 == 635273153)))
						{
							iVar5 = func_973(Var12, iVar2, 0);
							iVar6 = func_975(iParam0, iVar2);
							if (func_278(iVar5, 0))
							{
								if (iVar5 == iVar6)
								{
									if (iVar27 > 1)
									{
										iVar36 = 0;
									}
								}
							}
							else if (func_278(iVar6, 0))
							{
							}
							else
							{
								iVar36 = 0;
							}
						}
					}
					_0xcbb7b6edfa933ade(iVar26);
				}
			}
		}
		iVar0++;
	}
	return iVar36;
}

int func_983(int iParam0, int iParam1)
{
	if (!func_1539(iParam0))
	{
		return 0;
	}
	if (!func_158())
	{
		return 0;
	}
	if (!func_1540(iParam0, &iVar0, &iVar1))
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

bool func_984(var uParam0, int iParam1)
{
	return func_344(uParam0->f_2006, iParam1);
}

void func_985(var uParam0, int iParam1)
{
	func_347(&(uParam0->f_2006), iParam1);
}

int func_986()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = iVar0;
		if (iVar1 == 1)
		{
		}
		else if (iVar1 == 0)
		{
		}
		else if (iVar1 == 4 && func_1249())
		{
		}
		else if (!func_910(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

var func_987(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	_0xdd1232b332cbb9e7(6, 1, 0);
	return func_1541(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

bool func_988(char* sParam0)
{
	return func_1543(sParam0, func_1542());
}

bool func_989(int iParam0, int iParam1, bool bParam2)
{
	Var0 = { func_1185(iParam0, 0, 0) };
	return func_1494(iParam0, &Var0, iParam1, 0, bParam2);
}

void func_990(char* sParam0)
{
	Global_1914319->f_18963 = func_196(sParam0, 10000, 0, 0, 0, 1);
}

void func_991(var uParam0, int iParam1)
{
	func_348(&(uParam0->f_2006), iParam1);
}

void func_992(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	uVar0 = 57;
	uVar58 = 57;
	uVar116 = 57;
	uVar174 = 57;
	func_1544(iParam0, &uVar0);
	func_1545(&uVar58);
	func_1546(iParam0, &uVar0, 1);
	func_1547(&uVar0, &uVar58, &uVar116);
	func_1548(&uVar116);
	func_1549(iParam0, &uVar174);
	uVar232 = 3;
	uVar248 = 3;
	uVar264 = 3;
	func_1550(iParam0, &uVar232);
	func_1551(&uVar248);
	iVar280 = func_1552(&uVar232);
	iVar281 = func_1552(&uVar248);
	if (iLocal_284 > iLocal_283)
	{
		func_1553(&uVar248);
	}
	else
	{
		func_1553(&uVar232);
	}
	func_1554(iParam0);
	func_1555(iParam0, &uVar264);
}

void func_993(int iParam0)
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
	_0xdf631e4bce1b1fc4(iParam0, 399422490, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -1163401704, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, 88372018, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -630346294, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -273475295, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -2142954459, 0, false);
}

void func_994(int iParam0)
{
	iParam0 = func_444(iParam0);
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

void func_995(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_994(iParam0);
	func_994(iParam0);
	func_1556(iParam0, iParam1);
	func_1557(iParam0, iParam1);
	func_1558(iParam0, iParam1);
	iVar1 = func_226(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1559(iVar1);
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
	iVar3 = func_226(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1559(iVar3);
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
	func_1560();
}

void func_996(int iParam0, int iParam1)
{
	iParam0 = func_444(iParam0);
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

void func_997(int iParam0)
{
	iParam0 = func_444(iParam0);
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
	func_1561(&Var0);
	func_1562(iParam0, Var0);
	func_1563(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1564(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1565(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1566(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1567(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1568(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1569(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1570(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1571(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_998(var uParam0, int iParam1)
{
	uVar0 = 3;
	if (func_1572(&(uParam0->f_115)))
	{
		func_1573(uParam0, iParam1, &(uParam0->f_115), 1);
	}
	else
	{
		func_1573(uParam0, iParam1, &uVar0, 1);
		func_1574(uParam0, &uVar0);
	}
	return 1;
}

void func_999(var uParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (!func_1041(iParam1))
	{
		return;
	}
	switch (iParam1)
	{
		case 2:
			iVar0 = 0;
			break;
		case 3:
			iVar0 = 1;
			break;
		case 4:
			iVar0 = 2;
			break;
	}
	func_1575(iParam2);
	func_1576(iParam1, 0);
	Var1 = { func_1005(iParam1) };
	func_1018(&uVar3);
	func_993(iParam2);
	func_1007(iParam2, &Var1, &uVar3, 0);
	_set_entity_coords_and_heading(iParam2, func_1577(uParam0, iVar0), &(uParam0->f_15[iVar0]), true, true, true);
	_0x9587913b9e772d29(iParam2, 0);
	_0x1d4636c90bbefacb(iParam2, 1);
	func_1578(iParam2);
	clear_ped_tasks(iParam2, 1, 0);
	task_stand_still(iParam2, -1);
	func_996(iParam1, 2);
	func_994(iParam1);
}

int func_1000(int iParam0)
{
	switch (iParam0)
	{
		case 1538827865:
			return -450053710;
		case -1792561227:
			return -1679658797;
		case 1033678910:
			return 1792770814;
		case -1942141178:
			return -1963397600;
		case 671599957:
			return -1250098797;
		case -1554935503:
			return -318278790;
		case 694610769:
			return 55096099;
		case 1941463607:
			return -458397856;
		case -887316537:
			return -444610976;
		case 1762474047:
			return 746627200;
		case -828859553:
			return 705691988;
		case 1410237043:
			return 2130094044;
		case -2026073756:
			return -1554827654;
		case 729407854:
			return 604357666;
		case 2002245664:
			return -1029277326;
		case -1120227140:
			return -1140650619;
		case 1142681594:
			return -1999198818;
		case 1214981718:
			return 1496579364;
		case -845373950:
			return -1523757120;
		case -864588185:
			return -403470324;
		case 1482814085:
			return 1576849913;
		case -1040918754:
			return -925223936;
		case 535545841:
			return -1547438906;
		case 1686036388:
			return -635239558;
		case -621245377:
			return -2026265047;
		case 2125477381:
			return -586898625;
		case 1808724704:
			return 937246805;
		case -1745871311:
			return 1593035738;
		case -1366099125:
			return 861505058;
		case -1900776854:
			return 687445866;
		case 1381855825:
			return 1705182311;
		case -470894301:
			return -78273782;
		case -58297715:
			return -819697512;
		case 919533729:
			return -247265944;
		case -1158763155:
			return -1516219602;
		case 1112812928:
			return -1265030920;
		case 753764318:
			return 2024948086;
		case 2100045093:
			return 1696286663;
		case 1097965086:
			return -1342159303;
		case -2136667309:
			return -1154406788;
		case -376463594:
			return 2030804811;
		case -1917318030:
			return 1230359523;
		case 1631640006:
			return -1038436471;
		case -1565311117:
			return -1063137731;
		case 1714576673:
			return 96930969;
		case 210760725:
			return -1180427609;
		case 2051021144:
			return 2119038574;
		case 1924406350:
			return 43825738;
		case -1990143531:
			return 2145697477;
		case 1741899492:
			return -1261814606;
		case -1629575335:
			return 107013696;
		case 1096294193:
			return 1066034872;
		case -1162498792:
			return 36009259;
		case -212500005:
			return -1599683008;
		case -538557079:
			return -1693870200;
		case 171150858:
			return 1072019803;
		case 67538819:
			return 1074477367;
		case -126472599:
			return -85890205;
		case -1219957736:
			return 1048964673;
		case -332060056:
			return -727455979;
		case 1917500091:
			return -1667789645;
		case -1043453945:
			return -1924405794;
		case 1723487083:
			return 1861665605;
		case 2044230644:
			return -526169133;
		case 1680713143:
			return 900144280;
		case 344528703:
			return 1133837220;
		case -1674873797:
			return 1702024301;
		case 281852151:
			return -1604180548;
		case -285185056:
			return 1772321403;
		case -1692268955:
			return -1028075925;
		case 2130706226:
			return 84224102;
		case -1754375530:
			return -1896838685;
		case -71211764:
			return -420599285;
		case -1390353518:
			return 478986344;
		case 330935532:
			return 446670976;
		case -935042458:
			return 802784330;
		case -41062704:
			return 549900435;
		case 887669186:
			return -2063289686;
		case 2102774612:
			return 917402668;
		case -2011111190:
			return -914712122;
		case -535752499:
			return -598917269;
		case 559905966:
			return 808655744;
		default:
			break;
	}
	return 0;
}

int func_1001(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return -364764277;
	}
	switch (iParam0)
	{
		case -450053710:
			return -974145463;
		case -1679658797:
			return 1432602132;
		case 1792770814:
			return 92296905;
		case -1963397600:
			return -842044823;
		case -1250098797:
			return 1371398552;
		case -318278790:
			return -745453539;
		case 55096099:
			return 1583029039;
		case -458397856:
			return -783061276;
		case -444610976:
			return -1322521536;
		case 746627200:
			return 728055838;
		case 705691988:
			return 1100711204;
		case 2130094044:
			return -1782334639;
		case -1554827654:
			return -1181052732;
		case 604357666:
			return -540812301;
		case -1029277326:
			return -179102320;
		case -1140650619:
			return -1266863668;
		case -1999198818:
			return -2078767648;
		case 1496579364:
			return -2055655009;
		case -1523757120:
			return -1506685618;
		case -403470324:
			return -852553462;
		case 1576849913:
			return -2105447887;
		case -925223936:
			return -80004868;
		case -1547438906:
			return 1813208211;
		case -635239558:
			return 836323303;
		case -2026265047:
			return 153881023;
		case -586898625:
			return -1256798240;
		case 937246805:
			return 2118089359;
		case 1593035738:
			return -1537586382;
		case 861505058:
			return 1440692746;
		case 687445866:
			return 697143532;
		case 1705182311:
			return 281128160;
		case -78273782:
			return 1854519167;
		case -819697512:
			return -1376299681;
		case -247265944:
			return -1955947684;
		case -1516219602:
			return 1427053849;
		case -1265030920:
			return 1361788230;
		case 2024948086:
			return 1974379573;
		case 1696286663:
			return 545109431;
		case -1342159303:
			return 1275638003;
		case -1154406788:
			return 2083573823;
		case 2030804811:
			return 1235275977;
		case 1230359523:
			return 892601357;
		case -1038436471:
			return 1224695367;
		case -1063137731:
			return 955937750;
		case 96930969:
			return 648301150;
		case -1180427609:
			return -1597490733;
		case 2119038574:
			return 2000205872;
		case 43825738:
			return -1428527735;
		case 2145697477:
			return 170010697;
		case -1261814606:
			return -742726637;
		case 107013696:
			return -1714171692;
		case 1066034872:
			return -103101636;
		case 36009259:
			return -1999094324;
		case -1599683008:
			return 1724200240;
		case -1693870200:
			return 237935328;
		case 1072019803:
			return 120848852;
		case 1074477367:
			return -868094182;
		case -85890205:
			return -887362763;
		case 1048964673:
			return 2059232991;
		case -727455979:
			return -847714194;
		case -1667789645:
			return 1756765331;
		case -1924405794:
			return -813071670;
		case 1861665605:
			return -1900569233;
		case -526169133:
			return 1688250187;
		case 2120708491:
			return -1262715164;
		case 900144280:
			return 2010625508;
		case 1133837220:
			return -136225010;
		case 1702024301:
			return -225011104;
		case -1604180548:
			return -1882436593;
		case 1772321403:
			return -1331210307;
		case -1230516683:
			return 122449722;
		case 594040097:
			return -1784502482;
		case 1883159941:
			return -1943445834;
		case -1028075925:
			return -635244104;
		case 84224102:
			return -1427377767;
		case -1896838685:
			return -1293672675;
		case -420599285:
			return -1179079660;
		case 478986344:
			return 805526368;
		case 446670976:
			return 1342496140;
		case 802784330:
			return -126555855;
		case 549900435:
			return 294243421;
		case -2063289686:
			return -997197050;
		case 917402668:
			return -235714362;
		case -914712122:
			return -1678164;
		case -598917269:
			return -977833913;
		case -216303527:
			return 1589164943;
		case -1356425746:
			return -1087523615;
		case -1760684159:
			return -496814209;
		case -548014618:
			return 2109055751;
		case 1800725969:
			return -776673611;
		case -1391147923:
			return 1764402253;
		case -646460384:
			return -1417310078;
		case -1181161469:
			return 1096273915;
		case -1642485146:
			return 772751081;
		case -1486704931:
			return -1140435723;
		case 1139858530:
			return 2002524329;
		case -1053639984:
			return 1151530184;
		case -941733863:
			return -1266525037;
		case -1084397164:
			return -2018137175;
		case -575759638:
			return -574151692;
		case -1718100160:
			return 649786380;
		case 979093383:
			return -1921328920;
		case 1760888205:
			return -837607790;
		case 291878635:
			return 370424594;
		default:
			break;
	}
	return 0;
}

int func_1002(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_69 - 1))
	{
		iVar1 = &uParam0->f_70[iVar0];
		iVar2 = get_entity_model(iVar1);
		if (iParam1 == func_1001(iVar2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_1003(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		if (iParam2 == 0)
		{
			return;
		}
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 >= 7)
	{
		return;
	}
	if (func_1579(iParam0))
	{
		return;
	}
	if (func_1580(iParam0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iParam0))
	{
		set_entity_as_mission_entity(iParam0, true, true);
	}
	func_1581(iParam1, iParam0);
	func_1582(iParam1, iParam2);
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	if (iParam0 == _get_saddle_horse_for_player(iVar0))
	{
		func_1576(iParam1, 0);
	}
	else
	{
		iVar1 = func_1583(iParam0);
		func_1576(iParam1, iVar1);
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		func_1559(iParam0);
	}
	if (iParam1 == 0)
	{
		_0x8fbf9edb378ccb8c(iVar0, iParam0);
	}
	else if (iParam1 == 1)
	{
		uVar2 = _0x227b06324234fb09(iVar0, iParam0);
	}
	if (iParam1 == 6)
	{
		return;
	}
	if (func_1584(iParam1))
	{
		func_1585(iParam1);
	}
	iVar3 = func_445(iParam1);
	iVar4 = func_1227(iVar3);
	func_1586(iParam1, iVar4);
}

void func_1004(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	uVar0 = 57;
	uVar58 = 57;
	uVar116 = 57;
	uVar174 = 57;
	func_1545(&uVar0);
	func_1544(iParam0, &uVar58);
	func_1587(iParam0, &uVar0);
	func_1547(&uVar0, &uVar58, &uVar116);
	func_1549(iParam0, &uVar116);
	func_1548(&uVar174);
	uVar232 = 3;
	uVar248 = 3;
	uVar264 = 3;
	func_1551(&uVar232);
	func_1550(iParam0, &uVar248);
	iVar280 = func_1552(&uVar232);
	iVar281 = func_1552(&uVar248);
	if (iLocal_284 > iLocal_283)
	{
		func_1555(iParam0, &uVar248);
	}
	else
	{
		func_1555(iParam0, &uVar232);
	}
	func_1553(&uVar264);
	func_1554(iParam0);
	func_1588(iParam0);
}

struct<2> func_1005(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1589(iParam0, &uVar2))
	{
	}
	if (!func_1590(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1006()
{
	if (func_1591(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1591(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1591(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1591(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1591(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1591(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1007(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1592(iParam0);
	func_1593(iParam0, uParam1);
	func_993(iParam0);
	func_1594(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1595(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1008(int iParam0, struct<8> Param1)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	*Global_40.f_1095.f_1[iParam0] = { Param1 };
}

void func_1009(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = Global_1900383[iParam0];
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	sVar1 = func_1596(func_1248(iParam0));
	if (!is_string_null_or_empty(sVar1))
	{
		_set_ped_prompt_name(iVar0, sVar1);
	}
}

void func_1010(int iParam0, int iParam1)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_445(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_1597(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_1598(iParam1);
	iVar5 = func_226(iParam0);
	if (!does_entity_exist(iVar5))
	{
		return;
	}
	if (is_entity_dead(iVar5) || is_ped_injured(iVar5))
	{
		return;
	}
	iVar6 = floor(Global_40.f_1095.f_1[iParam0]->f_372.f_1);
	set_attribute_points(iVar5, 7, iVar6);
	iVar7 = get_attribute_rank(iVar5, 7);
	Global_40.f_1095.f_1[iParam0]->f_372 = iVar7;
	_0xa69899995997a63b(iVar5, iVar7);
}

void func_1011(int iParam0, int iParam1)
{
	iParam0 = func_444(iParam0);
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

void func_1012(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1599(iParam0);
	func_1010(iParam0, 0);
	func_1600(iParam0, 0f);
}

void func_1013(var uParam0)
{
	uParam0->f_2031.f_81 = 1;
}

bool func_1014(int iParam0)
{
	return func_826(iParam0) == -1784221369;
}

float func_1015(int iParam0, int iParam1)
{
	iVar2 = func_1601(iParam0, 0);
	fVar1 = func_1602(iParam1);
	fVar0 = (IntToFloat(iVar2) * fVar1);
	if (fVar0 < 100f)
	{
		fVar0 = 100f;
	}
	if (func_1603(iParam0))
	{
		fVar0 = 0f;
	}
	return fVar0;
}

int func_1016(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_278(iParam1, 0))
	{
		return 0;
	}
	iVar0 = func_1604(iParam1, iParam2);
	if (iParam3 >= 0)
	{
		iVar0 = iParam3;
	}
	func_1605(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
	_0x9bd8a9d0a774a6f8(func_82(uParam0->f_2), func_459(uParam0->f_3), iParam1, iParam2, iVar0);
	uParam0->f_1999.f_4 = 1;
	uParam0->f_6 = 1;
	uParam0->f_2319.f_11 = 1;
	uParam0->f_2009 = uParam0->f_2008;
	uParam0->f_2008 = iParam1;
	uParam0->f_2013 = iVar0;
	play_sound_frontend("SELL", "HUD_SHOP_SOUNDSET", true, 0);
	return 1;
}

bool func_1017(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0]->f_434;
}

void func_1018(var uParam0)
{
	func_1606(uParam0);
	func_1607(uParam0, 0);
	func_1608(uParam0, 0);
	func_1609(uParam0, 0);
	func_1610(uParam0, 0);
	func_1611(uParam0, 0);
	func_1612(uParam0, 0);
}

int func_1019(var uParam0)
{
	func_1613();
	return 1;
}

void func_1020(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_225(iParam0))
	{
		return;
	}
	iVar0 = func_226(iParam0);
	func_1614(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_1615(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1581(iParam0, 0);
	func_1616(iParam0);
}

bool func_1021(int iParam0)
{
	return ((func_1022(iParam0) || func_1024(iParam0)) || func_1617(iParam0));
}

bool func_1022(int iParam0)
{
	return func_339(iParam0) == 177369922;
}

bool func_1023(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1618(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_669(iParam1, Var0, 1415981582, 0) };
	return func_966(Var29, 1);
}

bool func_1024(int iParam0)
{
	return func_339(iParam0) == -1551449832;
}

bool func_1025(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1618(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_669(iParam1, Var0, -2119169513, 0) };
	return func_966(Var29, 1);
}

bool func_1026(int iParam0, int iParam1)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (!func_965(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_1619() };
	Var14 = { func_669(iParam0, Var10, iVar9, 0) };
	if (func_966(Var14, iParam1))
	{
		if (func_1620(iParam0))
		{
			if (func_1591(325139909, &iVar18))
			{
				if (func_1026(iVar18, 0))
				{
				}
			}
		}
		else if (func_1621(iParam0))
		{
			if (func_1591(325139909, &iVar19))
			{
				if (func_1026(iVar19, 0))
				{
				}
			}
			if (func_1591(986998820, &iVar20))
			{
				if (func_1026(iVar20, 0))
				{
				}
			}
			iVar21 = func_1622(iParam0);
			if (func_278(iVar21, 0))
			{
				if (func_1026(iVar21, 1))
				{
				}
			}
		}
		func_1623();
		return true;
	}
	return false;
}

bool func_1027(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_339(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case -1551449832:
		case 177369922:
			return true;
	}
	return false;
}

int func_1028(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 177369922:
			return func_1624(&uParam0);
		case -1551449832:
			return func_1625(&uParam0);
	}
	return 0;
}

bool func_1029(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_339(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case -1629133289:
		case -1555511632:
		case -1346384396:
		case -712836614:
		case 599669344:
		case 1302066700:
			return true;
	}
	return false;
}

int func_1030(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	switch (iParam6)
	{
		case -1346384396:
			return func_1626(&uParam0);
		case -712836614:
			return func_1627(&uParam0);
		case -1629133289:
			return func_1628(&uParam0);
		case 1302066700:
			return func_1629(&uParam0);
		case 599669344:
			return func_1630(&uParam0);
		case -1555511632:
			return func_1631(&uParam0);
	}
	return 0;
}

int func_1031(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_1024(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1618(iParam0, &Var0))
	{
		return 0;
	}
	Var29.f_4 = -2119169513;
	Var29 = { Var0 };
	if (func_968(iParam1, &uVar34, &Var29, 1, 752097756, 0))
	{
		if (bParam2)
		{
			if (!func_1025(iParam0, iParam1))
			{
			}
		}
		if (bParam3)
		{
			Var41.f_9 = -1591664384;
			Var55 = { func_978(0, Var29.f_4, -1591664384, -1591664384, 0, 0) };
			Var55.f_9 = { Var29 };
			if (func_979(&Var55, &iVar38, &iVar39, 0))
			{
				iVar40 = 0;
				while (iVar40 < iVar39)
				{
					if (func_980(&Var41, iVar40, iVar38, iVar39))
					{
						if (Var41.f_4 != iParam1)
						{
							if (func_977(Var41.f_4, &Var41, &Var29, -1, -142743235, 0, 0))
							{
							}
						}
					}
					iVar40++;
				}
			}
			func_981(iVar38);
		}
		return 1;
	}
	return 0;
}

int func_1032(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_1022(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1618(iParam0, &Var0))
	{
		return 0;
	}
	Var29.f_4 = 1415981582;
	Var29 = { Var0 };
	if (func_968(iParam1, &uVar34, &Var29, 1, 752097756, 0))
	{
		if (bParam2)
		{
			if (!func_1023(iParam0, iParam1))
			{
			}
		}
		if (bParam3)
		{
			Var41.f_9 = -1591664384;
			Var55 = { func_978(0, Var29.f_4, -1591664384, -1591664384, 0, 0) };
			Var55.f_9 = { Var29 };
			if (func_979(&Var55, &iVar38, &iVar39, 0))
			{
				iVar40 = 0;
				while (iVar40 < iVar39)
				{
					if (func_980(&Var41, iVar40, iVar38, iVar39))
					{
						if (Var41.f_4 != iParam1)
						{
							if (func_977(Var41.f_4, &Var41, &Var29, -1, -142743235, 0, 0))
							{
							}
						}
					}
					iVar40++;
				}
			}
			func_981(iVar38);
		}
		return 1;
	}
	return 0;
}

bool func_1033(int iParam0, bool bParam1)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (!func_965(iParam0, 856287005, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_1619() };
	Var10.f_4 = uVar9;
	if (func_968(iParam0, &uVar15, &Var10, 1, 752097756, 0))
	{
		if (bParam1)
		{
			if (!func_1026(iParam0, 1))
			{
			}
		}
		if (func_1621(iParam0))
		{
			func_1033(func_1622(iParam0), 1);
		}
		func_1623();
		return true;
	}
	return false;
}

bool func_1034(int iParam0, int iParam1)
{
	if (func_612(iParam0, 352481484))
	{
		*iParam1 = 352481484;
		return true;
	}
	return false;
}

void func_1035(int iParam0)
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
	Var2 = { func_978(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_979(&Var2, &iVar0, &iVar1, 0))
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
		func_981(iVar0);
	}
}

int func_1036(var uParam0)
{
	return uParam0->f_2031.f_96;
}

void func_1037(int iParam0)
{
	_0xa4ac05b1a364ebc5(iParam0, "HORSE_PREVIEW_OUTFIT", 1);
}

bool func_1038(int iParam0)
{
	return func_339(iParam0) == -712836614;
}

void func_1039(var uParam0, int iParam1)
{
	func_392(&(uParam0->f_2031.f_45), iParam1);
}

int func_1040()
{
	switch (Global_1914319->f_16855.f_3.f_1)
	{
		case -1948969248:
			return 1;
		case -729996127:
			return 1;
		case -626520457:
			return 2;
		case 1180239319:
			return 3;
		case -177941708:
			return 4;
		default:
			return 0;
	}
	return 0;
}

bool func_1041(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
			return true;
	}
	return false;
}

int func_1042(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		default:
			return 0;
	}
	return 0;
}

int func_1043()
{
	if (Global_40.f_1095 <= -1 || Global_40.f_1095 >= 7)
	{
		Global_40.f_1095 = 0;
	}
	return Global_40.f_1095;
}

void func_1044(int iParam0, int iParam1)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam1 = func_444(iParam1);
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 >= 7)
	{
		return;
	}
	uVar0 = 57;
	uVar58 = 57;
	uVar116 = 57;
	uVar174 = 57;
	func_1544(iParam0, &uVar0);
	func_1544(iParam1, &uVar58);
	func_1546(iParam0, &uVar0, 1);
	func_1587(iParam1, &uVar0);
	func_1547(&uVar0, &uVar58, &uVar116);
	func_1549(iParam1, &uVar116);
	func_1549(iParam0, &uVar174);
	uVar232 = 3;
	uVar248 = 3;
	uVar264 = 3;
	func_1550(iParam0, &uVar232);
	func_1550(iParam1, &uVar248);
	iVar280 = func_1552(&uVar232);
	iVar281 = func_1552(&uVar248);
	if (iLocal_285 > iLocal_284)
	{
		func_1555(iParam1, &uVar248);
	}
	else
	{
		func_1555(iParam1, &uVar232);
	}
	func_1555(iParam0, &uVar264);
	func_1554(iParam0);
	func_1554(iParam1);
	func_1588(iParam1);
}

void func_1045()
{
	iVar0 = func_226(0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
	}
	if (is_ped_injured(iVar0))
	{
	}
	if (is_ped_in_writhe(iVar0))
	{
	}
	if (does_entity_exist(Global_1900383->f_393))
	{
		if (!_0x88ad6cc10d8d35b2(Global_1900383->f_393))
		{
			set_entity_as_mission_entity(Global_1900383->f_393, false, true);
		}
		delete_object(&(Global_1900383->f_393));
	}
	Var1 = { func_1005(0) };
	Var3 = { func_1006() };
	func_1007(iVar0, &Var1, &Var3, 0);
	_set_ped_as_saddle_horse_for_player(get_player_index(), iVar0);
	func_1632(0);
	func_1633(0);
}

void func_1046(int iParam0)
{
	if (func_125() != 0 || !func_278(iParam0, 0))
	{
		return;
	}
}

struct<4> func_1047(var uParam0)
{
	return uParam0->f_2031.f_90;
}

bool func_1048(var uParam0, var uParam1, int iParam2)
{
	if (func_1634(uParam0, 0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (func_1529(*uParam1, -415648720, &Var0, iParam2))
	{
		if (!func_1635(*uParam0, Var0, 1, iParam2))
		{
			return false;
		}
	}
	else if (!func_976(*uParam0, *uParam1, -415648720, 1, iParam2))
	{
		return false;
	}
	return true;
}

void func_1049(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_1636(iParam1);
	if (func_1637(iVar0) == iParam1)
	{
		func_1639(iParam0, func_1638(iVar0));
		return;
	}
	func_1640(iParam0, iParam1, 0, -783849117, 127, 127, 127);
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, false, false, false);
	}
}

bool func_1050(int* iParam0, struct<4> Param1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!func_1641(iParam0, Param1, &Var0, 1))
	{
		return false;
	}
	iParam0->f_4 = 1;
	play_sound_frontend("SELL", "HUD_SHOP_SOUNDSET", true, 0);
	return true;
}

int func_1051()
{
	return Global_1914319->f_16855.f_3.f_6;
}

char* func_1052()
{
	return "uiItemLayoutId";
}

char* func_1053()
{
	return "uiItemMenuId";
}

bool func_1054(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (func_533(iParam1))
	{
		Var0.f_20 = 10;
		Var0.f_31 = 10;
		if (func_243(iParam1, &Var0))
		{
			if (func_464(iParam2, &Var0))
			{
				if (!uParam0->f_2031.f_69)
				{
					func_577(&(uParam0->f_2031));
				}
				iVar44 = func_245(&(uParam0->f_2031));
				iVar45 = func_723(&(uParam0->f_2031));
				uVar46 = uParam0->f_2031.f_71;
				uVar47 = func_465(&(uParam0->f_2031));
				iVar48 = func_466(0);
				if (iParam3 != -1)
				{
					if (func_464(iParam3, &Var0))
					{
						uParam0->f_2031.f_71 = iParam3;
					}
					else
					{
						return false;
					}
				}
				else if (func_1642(iParam1, iParam2, &uVar49))
				{
					uParam0->f_2031.f_71 = uVar49;
				}
				else
				{
					return false;
				}
				uParam0->f_2031 = { Var0 };
				func_242(uParam0, uParam0->f_19);
				iVar50 = 0;
				if (func_467(uParam0, iParam2, &iVar50))
				{
					if (bParam4)
					{
						if (func_275(&(uParam0->f_2031)))
						{
							uParam0->f_2031.f_78 = iVar50;
							if (!func_469())
							{
							}
						}
						else
						{
							func_470(uParam0);
						}
					}
					if (bParam5)
					{
						uParam0->f_2031.f_99 = 1;
						uParam0->f_2031.f_100 = 1;
						uParam0->f_2031.f_104 = iVar44;
						uParam0->f_2031.f_104.f_1 = iVar45;
						uParam0->f_2031.f_104.f_2 = uVar46;
						uParam0->f_2031.f_104.f_3 = uVar47;
						uParam0->f_2031.f_104.f_4 = iVar48;
						if (iParam3 != -1)
						{
							uParam0->f_2031.f_104.f_5 = iParam3;
						}
						else
						{
							uParam0->f_2031.f_104.f_5 = iParam2;
						}
						uParam0->f_2031.f_104.f_6 = iParam1;
					}
					return true;
				}
			}
		}
	}
	return false;
}

int func_1055(var uParam0, int iParam1)
{
	if (func_1204(iParam1))
	{
		uParam0->f_2031.f_84 = iParam1;
		uParam0->f_148.f_1281.f_1 = iParam1;
		Global_1914319->f_16855.f_36 = iParam1;
		return 1;
	}
	uParam0->f_2031.f_84 = 0;
	Global_1914319->f_16855.f_36 = 0;
	return 0;
}

bool func_1056(int iParam0, int iParam1, int iParam2)
{
	Var0.f_7 = 752097756;
	Var0.f_8 = 1056964608;
	Var0.f_9 = 1065353216;
	Var0.f_4 = iParam0;
	Var0 = { func_669(iParam0, func_668(0), iParam2, 0) };
	Var0.f_6 = iParam1;
	Var0.f_12 = 1;
	Var22 = { func_1643() };
	if (func_670(&Var0, &Var22))
	{
		return false;
	}
	if (_give_weapon_to_ped(Global_35, &Var0, &uVar16))
	{
		Var26.f_9 = -1591664384;
		if (_0x025a1b1fb03fbf61(func_1209(0), &Var0, &Var26, 22, 1))
		{
			if (!Var26.f_21)
			{
				Var26.f_21 = 1;
				_0xd80a8854db5cfba5(func_1209(0), &Var0, &Var26, 22);
			}
		}
		return true;
	}
	return false;
}

bool func_1057(int iParam0, int iParam1)
{
	iVar0 = func_339(iParam0);
	iVar1 = func_339(iParam1);
	switch (iVar0)
	{
		case 1196380333:
			if (iVar1 == -2074343699)
			{
				return true;
			}
			break;
		case 178628960:
			if (iVar1 == -1876918654)
			{
				return true;
			}
			break;
		case -640803885:
			if (iVar1 == -2008888655)
			{
				return true;
			}
			break;
		case -333996550:
			if (iVar1 == -1641912903 || iVar1 == 392209426)
			{
				return true;
			}
			break;
		case 473747105:
			if (iVar1 == -1470197171 || iVar1 == -306833601)
			{
				return true;
			}
			break;
		case 1455274515:
			if (iVar1 == 218564594 || iVar1 == 406441491)
			{
				return true;
			}
			break;
		case -1598259337:
			if (iVar1 == 1202709885)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_1058()
{
	func_1644(&(Global_1946804->f_2776));
	func_1645(32768);
	func_1082(1108822547, 8, 6);
}

int func_1059(var uParam0, int iParam1)
{
	func_845(uParam0);
	if (func_125() == -1)
	{
		iVar0 = func_754(iParam1);
		if (iVar0 == -1)
		{
			iVar0 = 0;
		}
		func_952(Global_40.f_7729, 4096);
		Global_40.f_7729 = iVar0;
		Global_1905941 = Global_40.f_7729;
		func_953(Global_40.f_7729, 4096);
	}
	if (func_538(32768))
	{
		func_1058();
	}
	func_954(-1, 0, 1, 1, 1, 0);
	iVar1 = func_263(uParam0);
	if (!does_entity_exist(iVar1) || is_entity_dead(iVar1))
	{
		return 0;
	}
	func_127(iVar1, 1);
	func_959(iVar1);
	func_848(iParam1);
	return 1;
}

void func_1060(int iParam0)
{
	_0x748c5f51a18cb8f0(0);
	if (!func_717(iParam0))
	{
		return;
	}
	func_1646(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_111(iVar0))
		{
			if (func_1063(func_1062(iVar0, 1, 1)) == iParam0)
			{
				func_1647(iVar0, 0);
				func_1648(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_1321(iVar1))
		{
			if (func_1649(iVar1) == iParam0)
			{
				func_1650(iVar1, 0);
			}
		}
		iVar1++;
	}
	_0x748c5f51a18cb8f0(1);
}

void func_1061(int iParam0)
{
	if (!func_717(iParam0))
	{
		return;
	}
	func_1651(iParam0, 0);
}

int func_1062(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 76:
			if (func_811(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 105:
			if (func_811(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			return 1559741032;
		case 61:
			return 60667583;
		case 78:
			return 1758133584;
		case 26:
			return -577559008;
		case 38:
			if (!bParam1 || func_125() != -1)
			{
				return 1624541293;
			}
			if (func_40(45))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 92:
			return 1637569166;
		case 65:
			return -867798278;
		case 69:
			return 1543937523;
		case 93:
			return 1030875135;
		case 95:
			return -201437056;
		case 57:
			return 794246846;
		case 3:
			return -968357677;
		case 32:
			return 728480338;
		case 82:
			return 725489698;
		case 35:
			return 183652754;
		case 56:
			return 2056744450;
		case 126:
			return 963280223;
		case 120:
			return -256309418;
		case 124:
			return 1666986024;
		case 115:
			return 251328732;
		case 127:
			if (!bParam1 || func_125() != -1)
			{
				return 1024208566;
			}
			if (func_40(45))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			if (!bParam1 || func_125() != -1)
			{
				return 965626876;
			}
			if (func_120((*Global_1835011)[59]->f_1, 1))
			{
				return 965626876;
			}
			else
			{
				return 1039226266;
			}
			break;
		case 37:
			if (!bParam1 || func_125() != -1)
			{
				return -497792649;
			}
			if (func_120((*Global_1347702)[9]->f_15, 1))
			{
				return -497792649;
			}
			else if (func_40(45))
			{
				return -1738342532;
			}
			else
			{
				return -1308265478;
			}
			break;
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == func_437())
			{
				return 2126166785;
			}
			break;
		case 110:
			if (!bParam1 || func_125() != -1)
			{
				return -1990305778;
			}
			if (func_40(45))
			{
				return -1990305778;
			}
			else
			{
				return -1679988168;
			}
			break;
	}
	if (bParam2)
	{
		iVar0 = func_812(iParam0);
		if (iVar0 != -1)
		{
			return func_1652(iVar0, bParam1);
		}
	}
	return 0;
}

int func_1063(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2126166785:
			return -1;
		case -2119728378:
		case -1482428221:
		case -1391142299:
		case -867798278:
		case 183652754:
		case 305496830:
		case 725489698:
		case 1178102426:
		case 1543937523:
		case 1637569166:
		case 1758133584:
		case 2056744450:
			return 1;
		case -2137625828:
		case -1994249944:
		case -1323821455:
		case -968357677:
		case -201437056:
		case 493546894:
		case 728480338:
		case 1030875135:
		case 1559741032:
		case 1608357655:
			return 2;
		case -1147969487:
			return 0;
		case 60667583:
		case 537788226:
		case 794246846:
			return 5;
		case -1990305778:
		case -1738342532:
		case -1679988168:
		case -1308265478:
		case -650528936:
		case -577559008:
		case -497792649:
		case 139139039:
		case 965626876:
		case 1039226266:
		case 1624541293:
		case 1716860278:
			return 3;
		case -1618764825:
		case -877373104:
		case -256309418:
		case 251328732:
		case 963280223:
		case 1024208566:
		case 1640255731:
		case 1666986024:
			return 4;
	}
	return -1;
}

bool func_1064(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, iParam1);
}

void func_1065(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_1066()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_1061(iVar0);
		iVar0++;
	}
}

void func_1067()
{
	_0x748c5f51a18cb8f0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_717(iVar0))
		{
			func_1060(iVar0);
		}
		iVar0++;
	}
	_0x748c5f51a18cb8f0(1);
}

bool func_1068(int iParam0)
{
	return iParam0 != 0;
}

bool func_1069(int iParam0, int iParam1)
{
	if (!func_1068(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_1653(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_1654(Global_40.f_9910[iParam1], 4);
}

void func_1070(int iParam0, bool bParam1)
{
	if (!func_1068(iParam0))
	{
		return;
	}
	iVar0 = func_1653(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_1654(Global_40.f_9910[iVar0], 4))
	{
		return;
	}
	else
	{
		func_1655(Global_40.f_9910[iVar0], 4);
		func_1656(Global_40.f_9910[iVar0], 8);
	}
	if (bParam1)
	{
		if (!func_742(0, 0, 1))
		{
			func_222(0, 17);
		}
	}
}

bool func_1071(int iParam0, var uParam1)
{
	if (!func_1657(iParam0))
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

void func_1072(int iParam0, var uParam1)
{
	if (!func_1068(iParam0))
	{
		return;
	}
	iVar0 = func_1658(iParam0, uParam1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_1659(iParam0, iVar1, uParam1, &iVar2, &iVar3);
		func_846(iVar2, iVar3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		iVar1++;
	}
}

int func_1073(var uParam0, int iParam1)
{
	if (iParam1 == -2092532275)
	{
		if (!func_899() && !func_631(func_632()))
		{
			bVar0 = func_793(1613651027, 1, 0);
			if ((bVar0 && uParam0->f_2 == 25) || uParam0->f_2 == 8)
			{
				func_630(func_900(func_632()), Global_35, -1, 1);
				func_945(uParam0->f_2 == 8);
				func_943();
			}
			if (bVar0 && uParam0->f_2 == 25)
			{
				func_842(1613651027, 1, 0, 562618531, 0);
			}
		}
	}
	else if (iParam1 == -1352600334)
	{
		if (func_360(1) >= func_902(-1724045811, 0))
		{
			if (func_225(0))
			{
				iVar1 = func_226(0);
				func_1660(iVar1, -1724045811);
				iVar2 = func_902(-1724045811, 0);
				func_1508(uParam0->f_2, uParam0->f_3, -1724045811, 1, iVar2);
				func_970(iVar2, 0, 0, 1, 1);
			}
		}
	}
	else if (iParam1 == 2073652352)
	{
		if (func_1543(&Var3, func_1248(7)))
		{
			func_1008(7, Var3);
			func_1009(7);
			func_244(uParam0, -1729195554, 1, -1, 0, 0, 0, 0);
		}
		func_1039(uParam0, 2);
	}
	else if (iParam1 == 317179309)
	{
		Var11 = { func_1047(uParam0) };
		if (!func_1661(&(uParam0->f_1999), 692350163, Var11, -1585141069, 1, 1, -570078785))
		{
			return 0;
		}
		func_1039(uParam0, 4);
	}
	else if (iParam1 == -772187037)
	{
		Var19.f_9 = -1591664384;
		iVar41 = func_960(uParam0);
		if (!func_1470(iVar41, &uVar15, &Var19, func_961(uParam0)))
		{
			return 0;
		}
		iVar42 = round((func_866(Var19.f_16, Var19.f_20) * to_float(func_902(-898386032, 0))));
		Var19.f_16 = 0f;
		Var19.f_18 = 0f;
		Var19.f_19 = 0f;
		Var19.f_20 = 0f;
		if (!_0xd80a8854db5cfba5(func_1209(0), &uVar15, &Var19, 22))
		{
			return 0;
		}
		func_1508(uParam0->f_2, uParam0->f_3, 2096542750, 1, iVar42);
		func_970(iVar42, 0, 0, 0, 1);
	}
	return 1;
}

bool func_1074(var uParam0, vector3 vParam1)
{
	if (!func_278(vParam1.x, 0))
	{
		return false;
	}
	if (uParam0->f_3 == 152)
	{
		if (func_917(vParam1.x))
		{
			Stack.Push(uParam0);
			Stack.Push(vParam1.y);
			Stack.Push(vParam1.z);
			Call_Loc(uParam0->f_2031.f_125);
			if (!StackVal)
			{
				return true;
			}
		}
		else if (func_820(vParam1.x))
		{
			return true;
		}
		return func_1150(vParam1.x, 0) > 0;
	}
	else
	{
		iVar0 = uParam0->f_3;
		if (func_928(func_927(uParam0)))
		{
			iVar0 = func_927(uParam0);
		}
		if (!func_1662())
		{
			if (vParam1.x == 1534638301)
			{
				return false;
			}
		}
		if (func_929(vParam1.x, iVar0, &uVar1))
		{
			return true;
		}
	}
	return false;
}

bool func_1075(var uParam0, int iParam1)
{
	if ((((((func_820(iParam1) || func_917(iParam1)) || func_826(iParam1) == 658570475) || func_826(iParam1) == -1013984273) || func_826(iParam1) == 307971639) || func_818(iParam1)) || iParam1 == 166243423)
	{
		return false;
	}
	if (uParam0->f_3 != 152)
	{
		if (func_826(iParam1) == -1037537535)
		{
			if (func_834(uParam0, iParam1, -853534656))
			{
				return false;
			}
		}
	}
	if (func_1113(iParam1))
	{
		return true;
	}
	return false;
}

int func_1076(int iParam0)
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

bool func_1077(int iParam0, var uParam1)
{
	return (Global_1946804->f_2535.f_3[iParam0] && uParam1) != 0;
}

void func_1078(int iParam0, var uParam1)
{
	Global_1946804->f_2535.f_3[iParam0] = (&Global_1946804->f_2535.f_3[iParam0] - (Global_1946804->f_2535.f_3[iParam0] && uParam1));
}

int func_1079(int iParam0, int iParam1)
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

bool func_1080(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_656(iParam0, 1)])->f_10 && iParam1) != 0;
}

void func_1081(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1082(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_656(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_656(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_656(iParam0, 1)])->f_10 && iParam1));
}

void func_1083(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_656(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_656(iParam0, 1)])->f_10 || iParam1);
}

bool func_1084(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 0;
	iVar0 = func_299(uParam0);
	iVar1 = func_1211(iVar0, iParam1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (func_1212(iVar0, iParam1, iVar2) != -1)
		{
			*iParam2++;
		}
		iVar2++;
	}
	return true;
}

bool func_1085(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return false;
	}
	uParam0->f_2031.f_77 = iParam1;
	return true;
}

bool func_1086(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 0;
	iVar0 = 0;
	if (!func_585(uParam0, iParam1, &iVar0))
	{
		return false;
	}
	iVar1 = func_1090(&(uParam0->f_2031));
	if (iVar1 <= 0)
	{
		return false;
	}
	if (iVar0 >= iVar1 || iVar0 < 0)
	{
		return false;
	}
	vVar2.f_1 = -1;
	vVar2.f_2 = -1;
	iVar5 = 0;
	iVar7 = func_586(iVar0, &(uParam0->f_2031));
	if (func_1105(func_299(uParam0), iVar7, 1))
	{
		if (!func_1663(uParam0, iParam2))
		{
			return false;
		}
	}
	else if (func_835(iVar7))
	{
		if (!func_1664(uParam0, iVar7, iParam2))
		{
			return false;
		}
	}
	else
	{
		iVar6 = func_1223(iVar0, &(uParam0->f_2031));
		if (iVar6 <= 0)
		{
		}
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			vVar2 = { func_1224(iVar0, iVar5, &(uParam0->f_2031)) };
			if (func_278(vVar2.x, 0))
			{
				if (func_1074(uParam0, vVar2))
				{
					*iParam2++;
				}
			}
			iVar5++;
		}
	}
	return true;
}

bool func_1087(var uParam0)
{
	return uParam0->f_2031.f_83 != 0;
}

void func_1088(var uParam0, int iParam1, bool bParam2)
{
	iVar1 = _databinding_add_data_container(uParam0->f_2031.f_52, "ItemWeather");
	iVar2 = _databinding_add_data_container(uParam0->f_2031.f_52, "OutfitWeather");
	if (bParam2)
	{
		iVar3 = iParam1;
		iVar4 = func_299(uParam0);
		if (!func_895(uParam0, iVar4, iVar3, &iVar0))
		{
			_databinding_add_data_bool(iVar1, "Visible", false);
			_databinding_add_data_bool(iVar2, "Visible", false);
			return;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (func_339(iVar0) == -999503751)
	{
		iVar5 = func_340(iVar0);
		if (iVar5 == -1 || (iVar0 == 166243423 && func_819() != 166243423))
		{
			_databinding_add_data_bool(iVar2, "Visible", false);
		}
		else
		{
			_databinding_add_data_bool(iVar2, "Visible", true);
			_databinding_add_data_int(iVar2, "Effectiveness", iVar5);
		}
		_databinding_add_data_bool(iVar1, "Visible", false);
	}
	else
	{
		iVar6 = func_1291(iVar0);
		if (iVar6 == -1)
		{
			_databinding_add_data_bool(iVar1, "Visible", false);
		}
		else
		{
			_databinding_add_data_bool(iVar1, "Visible", true);
			_databinding_add_data_int(iVar1, "Warmth", iVar6);
		}
		_databinding_add_data_bool(iVar2, "Visible", false);
	}
}

int func_1089(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam2 > iParam1)
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		iParam1 = 0;
	}
	if (iParam2 != -1)
	{
		iParam2 = func_1490(iParam2, 0, iParam1);
		_databinding_add_data_int_by_hash(uParam0->f_2031.f_52, 1184271882, iParam2);
	}
	else
	{
		_databinding_add_data_int_by_hash(uParam0->f_2031.f_52, 1184271882, iParam3);
	}
	iParam3 = func_1490(iParam3, 0, iParam1);
	iVar0 = (iParam3 - 1);
	iVar0 = func_1490(iVar0, 0, iParam1);
	_databinding_add_data_int_by_hash(uParam0->f_2031.f_52, -2088148546, 0);
	_databinding_add_data_int_by_hash(uParam0->f_2031.f_52, 997560919, iParam1);
	_databinding_add_data_int_by_hash(uParam0->f_2031.f_52, 1453173492, iVar0);
	if (iParam3 == 0)
	{
		_databinding_add_data_int_by_hash(uParam0->f_2031.f_52, -804795275, -10);
	}
	else
	{
		_databinding_add_data_int_by_hash(uParam0->f_2031.f_52, -804795275, iParam3);
	}
	_databinding_add_data_bool_by_hash(uParam0->f_2031.f_52, -1569227938, bParam4);
	func_1665(uParam0, bParam5);
	return 1;
}

int func_1090(var uParam0)
{
	return uParam0->f_12.f_5;
}

void func_1091(var uParam0, bool bParam1)
{
	_databinding_add_data_bool(uParam0->f_2031.f_52, "RecipeFooterVisible", bParam1);
}

void func_1092(var uParam0, bool bParam1)
{
	_databinding_add_data_bool(uParam0->f_2031.f_52, "FooterVisible", bParam1);
}

void func_1093(var uParam0, bool bParam1)
{
	_databinding_add_data_bool(uParam0->f_2031.f_52, "RecipeInfoVisible", bParam1);
}

int func_1094()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		switch (iVar1)
		{
			case 2:
			case 3:
			case 4:
				if (func_910(iVar1))
				{
					iVar0++;
				}
				break;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1095(var uParam0, bool bParam1)
{
	_databinding_add_data_bool(uParam0->f_2031.f_54, "visible", bParam1);
}

void func_1096(int iParam0)
{
	func_347(&(Global_1914319->f_16855.f_3), iParam0);
}

int func_1097(int iParam0)
{
	if (!func_928(iParam0))
	{
		return -1;
	}
	if (iParam0 == 34 && func_1() == 128)
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

int func_1098()
{
	return 7;
}

bool func_1099(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = 23;
			return true;
		case 1:
			*iParam1 = 105;
			return true;
		case 2:
			*iParam1 = 5;
			return true;
		case 3:
			*iParam1 = 78;
			return true;
		case 4:
			*iParam1 = 28;
			return true;
		case 5:
			*iParam1 = 76;
			return true;
		case 6:
			*iParam1 = 69;
			return true;
		default:
			break;
	}
	return false;
}

bool func_1100(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 117:
			switch (iParam1)
			{
				case 126:
					return true;
				default:
					break;
			}
			return false;
		default:
			break;
	}
	return true;
}

int func_1101(var uParam0)
{
	if (_item_database_get_shop_layout_menu_info_by_id(*uParam0, func_583(uParam0), &Var0))
	{
		return Var0.f_6;
	}
	return -1;
}

var func_1102(var uParam0)
{
	return uParam0->f_5;
}

bool func_1103(var uParam0, int iParam1)
{
	iVar0 = func_1090(&(uParam0->f_2031));
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return false;
	}
	iVar1 = func_586(iParam1, &(uParam0->f_2031));
	if (func_1105(func_299(uParam0), iVar1, 1))
	{
		return true;
	}
	if (func_835(iVar1))
	{
		iVar2 = 0;
		func_1664(uParam0, iVar1, &iVar2);
		return iVar2 > 0;
	}
	iVar3 = func_1223(iParam1, &(uParam0->f_2031));
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 < iVar3)
	{
		vVar4 = { func_1224(iParam1, iVar7, &(uParam0->f_2031)) };
		if (func_278(vVar4.x, 0))
		{
			if (func_1074(uParam0, vVar4))
			{
				return true;
			}
		}
		iVar7++;
	}
	return false;
}

char* func_1104()
{
	return "PageFilterCurrentPageIndex";
}

bool func_1105(int iParam0, int iParam1, int iParam2)
{
	if (_item_database_get_shop_layout_page_info_by_key(iParam0, iParam1, &vVar0))
	{
		return func_343(vVar0.z, iParam2);
	}
	return false;
}

void func_1106(var uParam0)
{
	Global_1914319->f_16855.f_3.f_5 = uParam0;
}

int func_1107(var uParam0, int iParam1)
{
	iVar0 = func_891(&(uParam0->f_2031));
	if (iParam1 >= iVar0 || iParam1 < 0)
	{
		return 71870468;
	}
	if (func_1666(iParam1, &(uParam0->f_2031), &Var1))
	{
		return Var1.f_1;
	}
	return 71870468;
}

int func_1108()
{
	iVar0 = _databinding_read_data_int_from_parent(func_594(), func_649());
	return iVar0;
}

int func_1109()
{
	iVar0 = _databinding_read_data_int_from_parent(func_594(), func_716());
	return iVar0;
}

struct<4> func_1110(int iParam0)
{
	Var0 = _databinding_read_data_int_from_parent(*iParam0, "uiGuidData1");
	Var0.f_1 = _databinding_read_data_int_from_parent(*iParam0, "uiGuidData2");
	Var0.f_2 = _databinding_read_data_int_from_parent(*iParam0, "uiGuidData3");
	Var0.f_3 = _databinding_read_data_int_from_parent(*iParam0, "uiGuidData4");
	return Var0;
}

int func_1111(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&uParam0->f_31[iVar0] != 0)
		{
			if (func_894(*uParam0, &(uParam0->f_31[iVar0]), iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1112(int iParam0)
{
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		return 0;
	}
	_0xa274f51ef7e34b95(iParam0, "HORSE_PREVIEW_OUTFIT");
	return 1;
}

bool func_1113(int iParam0)
{
	return _unlock_is_new(func_587(iParam0));
}

char* func_1114()
{
	return "uiItemNew";
}

int func_1115(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 4)
	{
		func_1667(uParam0);
	}
	func_1095(uParam0, 0);
	return 1;
}

int func_1116(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 4)
	{
		func_1668(uParam0);
	}
	return 1;
}

int func_1117(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 4)
	{
		func_1669(uParam0);
	}
	return 1;
}

int func_1118(var uParam0, var uParam1)
{
	iVar7 = _databinding_get_array_count(uParam0->f_2031.f_58);
	iVar8 = 0;
	iVar10 = func_918(uParam0);
	Var11.f_14 = -1;
	Var11.f_15 = -1;
	Var11.f_7 = 0;
	iVar8 = 0;
	while (iVar8 < iVar7)
	{
		iVar6 = _databinding_get_item_context_by_index(uParam0->f_2031.f_58, iVar8);
		if (_databinding_is_data_id_valid(iVar6))
		{
			iVar1 = _databinding_read_data_hash_string_from_parent(iVar6, func_683());
			iVar3 = _databinding_read_data_int_from_parent(iVar6, func_684());
			iVar4 = _databinding_read_data_int_from_parent(iVar6, func_1670());
			iVar5 = _databinding_read_data_int_from_parent(iVar6, func_685());
			iVar0 = iVar1;
			iVar2 = iVar3;
			if (!func_278(iVar0, 0))
			{
			}
			else
			{
				Var11 = { *uParam1 };
				Var11.f_7 = iVar0;
				Var11 = iVar2;
				Var11.f_1 = iVar4;
				Var11.f_14 = iVar5;
				Var11.f_15 = uParam1->f_15;
				if (func_920(&(uParam0->f_2031), iVar0, &uVar9))
				{
					uParam0->f_2031.f_74 = uVar9;
				}
				if (func_612(Var11.f_7, -495963434))
				{
				}
				else if (!func_255(uParam0, &Var11))
				{
				}
			}
		}
		iVar8++;
	}
	uParam0->f_2031.f_74 = iVar10;
	return 1;
}

int func_1119(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 4)
	{
		func_1667(uParam0);
	}
	return 1;
}

int func_1120(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 4)
	{
		func_1667(uParam0);
	}
	return 1;
}

int func_1121(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 4)
	{
		func_1667(uParam0);
	}
	return 1;
}

int func_1122(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 4)
	{
		func_1667(uParam0);
	}
	return 1;
}

int func_1123(var uParam0, var uParam1)
{
	iVar4 = 0;
	iVar4 = func_1090(&(uParam0->f_2031));
	if (iVar4 < 0)
	{
		return 0;
	}
	else if (!func_589(0, &(uParam0->f_2031), &iVar0))
	{
		return 0;
	}
	if (!func_1244(uParam0, func_299(uParam0), iVar0, &iVar5, &uVar6))
	{
		return 0;
	}
	if (!func_278(iVar5, 0))
	{
		return 0;
	}
	*uParam1 = func_896(uParam0, iVar5);
	uParam1->f_7 = iVar5;
	return 1;
}

bool func_1124(bool bParam0)
{
	if (bParam0)
	{
		return _databinding_read_data_bool_from_parent(Global_1914319->f_16855.f_3.f_16, func_1671());
	}
	return _databinding_read_data_bool_from_parent(Global_1914319->f_16855.f_3.f_10, func_1671());
}

int func_1125(bool bParam0)
{
	if (bParam0)
	{
		return _databinding_read_data_int_from_parent(Global_1914319->f_16855.f_3.f_16, func_1052());
	}
	return _databinding_read_data_int_from_parent(Global_1914319->f_16855.f_3.f_10, func_1052());
}

int func_1126(bool bParam0)
{
	if (bParam0)
	{
		return _databinding_read_data_int_from_parent(Global_1914319->f_16855.f_3.f_16, func_1053());
	}
	return _databinding_read_data_int_from_parent(Global_1914319->f_16855.f_3.f_10, func_1053());
}

int func_1127(var uParam0)
{
	iVar0 = func_466(0);
	iVar1 = func_891(&(uParam0->f_2031));
	if (iVar1 <= 0)
	{
		return 0;
	}
	if (iVar0 >= iVar1 || iVar0 < 0)
	{
		return 0;
	}
	if (func_1666(iVar0, &(uParam0->f_2031), &vVar2))
	{
		func_640(uParam0, vVar2.z);
	}
	return 1;
}

int func_1128(var uParam0)
{
	iVar0 = func_466(0);
	iVar1 = func_891(&(uParam0->f_2031));
	if (iVar1 <= 0)
	{
		return 0;
	}
	if (iVar0 >= iVar1 || iVar0 < 0)
	{
		return 0;
	}
	if (func_1666(iVar0, &(uParam0->f_2031), &vVar2))
	{
		func_640(uParam0, vVar2.z);
	}
	func_667(uParam0, func_960(uParam0), 0);
	return 1;
}

int func_1129(var uParam0)
{
	iVar0 = func_277(0);
	iVar1 = func_616(0);
	iVar2 = 0;
	switch (iVar1)
	{
		case -348190488:
			iVar5 = func_607(0);
			iVar3 = _databinding_read_data_int_from_parent(iVar5, func_1052());
			iVar4 = _databinding_read_data_int_from_parent(iVar5, func_1053());
			func_1672(iVar3, iVar4, &iVar6);
			iVar2 = func_902(iVar6, 0);
			break;
		default:
			iVar2 = func_902(iVar0, 0);
			break;
	}
	func_1148(uParam0, -2064706500, 0, iVar2, 0);
	return 1;
}

int func_1130(var uParam0)
{
	iVar0 = func_466(0);
	iVar1 = func_891(&(uParam0->f_2031));
	if (iVar1 <= 0)
	{
		return 0;
	}
	if (iVar0 >= iVar1 || iVar0 < 0)
	{
		return 0;
	}
	if (func_1666(iVar0, &(uParam0->f_2031), &vVar2))
	{
		func_640(uParam0, vVar2.z);
	}
	func_1673(uParam0, func_1036(uParam0));
	func_636(uParam0, 4, -1741293470, 1, 1, 0);
	func_1095(uParam0, 0);
	return 1;
}

int func_1131(var uParam0)
{
	iVar0 = func_277(0);
	Var1 = { func_1006() };
	if (func_1038(iVar0))
	{
		func_1674(uParam0, iVar0, Var1.f_1);
		func_1092(uParam0, 1);
		func_550(uParam0, 1);
		func_551(uParam0, 0);
	}
	else if (func_1675(iVar0))
	{
		func_1676(uParam0, iVar0, Var1.f_3);
		func_1092(uParam0, 1);
		func_551(uParam0, 1);
		func_550(uParam0, 0);
	}
	else
	{
		func_1092(uParam0, 0);
		func_550(uParam0, 0);
		func_551(uParam0, 0);
	}
	return 1;
}

int func_1132(var uParam0)
{
	iVar0 = func_277(0);
	if (func_278(iVar0, 0))
	{
		func_1677(uParam0, func_1154(iVar0));
		func_831(uParam0, func_1256(iVar0));
		if (uParam0->f_3 != 152)
		{
			func_1148(uParam0, -2089226131, iVar0, -1, 0);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_1133(var uParam0)
{
	iVar0 = func_277(0);
	if (func_278(iVar0, 0))
	{
		if (!func_612(iVar0, 265372629))
		{
			func_543(uParam0, 1);
			func_831(uParam0, func_1256(iVar0));
			bVar1 = func_622(0);
			if (func_616(0) == -2056428614)
			{
				bVar1 = true;
			}
			func_832(uParam0, bVar1);
		}
		else
		{
			func_543(uParam0, 0);
		}
		iVar2 = func_616(0);
		switch (iVar2)
		{
			case -348190488:
				func_1088(uParam0, iVar0, 1);
				break;
			case -853534656:
			case 761079318:
			case 1942587409:
			case 2077448405:
				func_1088(uParam0, iVar0, 0);
				break;
			default:
				func_549(uParam0);
				break;
		}
		if (iVar2 == 1942587409 && func_387())
		{
			func_830(uParam0, -476745902);
		}
		else
		{
			func_547(uParam0, 0);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_1134(var uParam0)
{
	iVar0 = func_277(0);
	iVar1 = func_616(0);
	if (iVar1 == -760956867 || iVar1 == 38807286)
	{
		func_944(uParam0, iVar0);
	}
	if (uParam0->f_2 == 25)
	{
		_databinding_add_data_bool(uParam0->f_2031.f_50, "ShavingSplitterVisible", false);
	}
	else
	{
		func_1148(uParam0, 1182109459, iVar0, -1, 0);
	}
	func_636(uParam0, 5, 1067499419, 1, 1, 0);
	return 1;
}

int func_1135(var uParam0)
{
	iVar0 = func_277(0);
	if (func_278(iVar0, 0))
	{
		_0x75cfac49301e134f(uParam0->f_2031.f_68, iVar0, 0);
		func_831(uParam0, func_1256(iVar0));
		func_832(uParam0, func_622(0));
		func_640(uParam0, func_1154(iVar0));
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_1136(var uParam0)
{
	iVar0 = func_277(0);
	if (!func_1678(uParam0, iVar0))
	{
	}
	bVar1 = true;
	if (func_266(2))
	{
		iVar2 = func_1163(0);
		func_932(uParam0->f_2, &iVar3);
		if (!func_1679(iVar0, iVar3))
		{
			func_1091(uParam0, 0);
			bVar1 = false;
		}
		else if (func_1152(uParam0, iVar0) || func_616(0) != -349391286)
		{
			func_1091(uParam0, 1);
			if (((!func_278(iVar2, 0) || iVar2 == iVar0) || !func_1152(uParam0, iVar2)) || func_615(0) == -349391286)
			{
				func_1092(uParam0, 1);
				func_1093(uParam0, 0);
			}
		}
		else
		{
			func_1091(uParam0, 1);
			if (((!func_278(iVar2, 0) || iVar2 == iVar0) || func_1152(uParam0, iVar2)) || func_615(0) != -349391286)
			{
				func_1092(uParam0, 0);
				func_1093(uParam0, 1);
			}
		}
	}
	if (func_1256(iVar0) == 0)
	{
		if (func_826(iVar0) == -1037537535)
		{
			if (func_339(iVar0) == -999503751 && func_340(iVar0) == -1)
			{
				bVar1 = false;
			}
			else if (func_1291(iVar0) == -1)
			{
				bVar1 = false;
			}
		}
		else
		{
			bVar1 = false;
		}
	}
	if (bVar1)
	{
		if (func_1680(uParam0))
		{
			func_636(uParam0, 4, -1741293470, 1, 1, 0);
		}
		else
		{
			func_636(uParam0, 4, -1977485644, 1, 1, 0);
		}
	}
	else
	{
		func_1092(uParam0, 0);
		func_1093(uParam0, 1);
	}
	return 1;
}

int func_1137(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_9;
	iVar1 = *uParam1;
	if (*uParam1 == -1968468235)
	{
		iVar2 = func_466(0);
		iVar3 = func_1090(&(uParam0->f_2031));
		if (iVar2 >= iVar3 || iVar2 < 0)
		{
			return 0;
		}
		uParam0->f_2031.f_74 = iVar2;
		if (!func_589(iVar2, &(uParam0->f_2031), &uVar4))
		{
			return 0;
		}
		else
		{
			iVar8 = func_607(0);
			iVar9 = _databinding_read_data_hash_string_from_parent(iVar8, func_683());
			iVar10 = iVar9;
			iVar11 = func_642(uParam0);
			func_581(uParam0);
			vVar12.f_1 = -1;
			vVar12.f_2 = -1;
			iVar16 = func_1223(iVar2, &(uParam0->f_2031));
			iVar17 = 0;
			iVar18 = 0;
			bVar19 = false;
			iVar17 = 0;
			while (iVar17 < iVar16)
			{
				vVar12 = { func_1224(iVar2, iVar17, &(uParam0->f_2031)) };
				if (func_278(vVar12.x, 0))
				{
					if (!func_1074(uParam0, vVar12))
					{
					}
					else
					{
						iVar15 = func_896(uParam0, vVar12.x);
						if (func_1681(uParam0, vVar12.x, vVar12.y, iVar15))
						{
							if (iVar10 == 0)
							{
								iVar10 = vVar12.x;
							}
							if (vVar12.x == iVar10)
							{
								func_643(uParam0, iVar18);
								iVar0 = vVar12.x;
								iVar1 = iVar15;
								bVar19 = true;
							}
							iVar18++;
						}
					}
				}
				iVar17++;
			}
			if (!bVar19)
			{
				func_643(uParam0, iVar11);
				iVar20 = func_642(uParam0);
				vVar12 = { func_1224(iVar2, iVar20, &(uParam0->f_2031)) };
				iVar0 = vVar12.x;
				iVar1 = iVar15;
			}
		}
		bVar21 = func_622(0);
		if (func_1038(iVar0))
		{
			if (func_1682(uParam0))
			{
				_databinding_add_data_bool(uParam0->f_2031.f_50, func_552(), false);
			}
			else
			{
				_databinding_add_data_bool(uParam0->f_2031.f_50, func_552(), true);
			}
		}
		else
		{
			_databinding_add_data_bool(uParam0->f_2031.f_50, func_552(), bVar21);
		}
		func_645(uParam0, func_642(uParam0));
		func_610(uParam1, uParam0, 0);
	}
	else
	{
		iVar23 = _databinding_get_array_count(uParam0->f_2031.f_58);
		if (uParam0->f_2031.f_74 >= iVar23)
		{
		}
		else
		{
			iVar22 = _databinding_get_item_context_by_index(uParam0->f_2031.f_58, uParam0->f_2031.f_74);
			if (_databinding_is_data_id_valid(iVar22))
			{
				if (uParam1->f_11 == 310306577)
				{
					_databinding_add_data_hash(iVar22, func_683(), uParam1->f_9);
					_databinding_add_data_int(iVar22, func_684(), *uParam1);
					_databinding_add_data_int(iVar22, func_685(), uParam1->f_13);
					func_296(uParam0);
				}
				func_617(uParam0, 0);
				bVar24 = func_535(uParam0, func_299(uParam0), _databinding_read_data_int_from_parent(iVar22, func_716()));
				_databinding_add_data_bool(iVar22, func_1114(), bVar24);
			}
		}
	}
	_databinding_add_data_hash(uParam0->f_2031.f_50, "ItemPaletteItemName", func_1154(iVar0));
	iVar25 = func_1683(uParam0, iVar0, iVar1);
	_databinding_add_data_int(uParam0->f_2031.f_50, "ItemPalettePrice", iVar25);
	iVar26 = 1067499419;
	if (uParam1->f_11 == 310306577)
	{
		iVar27 = func_1147(uParam0);
		func_1148(uParam0, -2089226131, 0, iVar27, 0);
		func_637(uParam0, func_1153(iVar27));
		func_636(uParam0, 1, -2494464, func_1153(iVar27), 1, 0);
	}
	else
	{
		if (func_1038(uParam1->f_9))
		{
			Var28 = { func_1006() };
			func_1674(uParam0, uParam1->f_9, Var28.f_1);
			if (func_1682(uParam0))
			{
				func_636(uParam0, 4, -1186444257, 1, 1, 0);
			}
			else
			{
				func_636(uParam0, 4, -1741293470, 1, 1, 0);
			}
		}
		else
		{
			func_550(uParam0, 0);
		}
		iVar26 = 1337808636;
		func_1148(uParam0, 1182109459, uParam1->f_9, -1, 0);
		func_636(uParam0, 1, -2494464, func_1153(iVar25), 1, 0);
	}
	bVar34 = (_databinding_read_data_bool_from_parent(uParam0->f_2031.f_50, func_552()) || func_1682(uParam0));
	bVar34 = (bVar34 && uParam0->f_2031.f_73 > 1);
	func_636(uParam0, 5, iVar26, bVar34, bVar34, 0);
	return 1;
}

int func_1138(var uParam0)
{
	iVar0 = func_277(0);
	if (func_278(iVar0, 0))
	{
		func_1092(uParam0, 1);
		func_1684(uParam0, iVar0);
		func_636(uParam0, 4, -1741293470, 1, 1, 0);
		_0x75cfac49301e134f(uParam0->f_2031.f_68, iVar0, 0);
		func_1148(uParam0, 1694435542, iVar0, -1, 0);
	}
	return 1;
}

int func_1139(var uParam0)
{
	iVar0 = func_277(0);
	if (func_278(iVar0, 0))
	{
		func_1092(uParam0, 1);
		iVar1 = func_960(uParam0);
		if (func_278(iVar1, 0))
		{
			func_667(uParam0, iVar1, iVar0);
		}
		else
		{
			func_667(uParam0, iVar0, 0);
		}
		bVar2 = func_622(0);
		func_251(uParam0, 1, bVar2);
	}
	return 1;
}

int func_1140(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_9;
	if (func_278(iVar0, 0))
	{
		func_1673(uParam0, func_1036(uParam0));
		func_636(uParam0, 4, -1741293470, 1, 1, 0);
		func_1095(uParam0, 0);
		_0x75cfac49301e134f(uParam0->f_2031.f_68, iVar0, 0);
	}
	return 1;
}

int func_1141(var uParam0)
{
	iVar0 = func_277(0);
	iVar1 = func_616(0);
	if (iVar1 == 193788635)
	{
		iVar2 = func_652(0);
		if (iVar2 == -1 || iVar2 >= 5)
		{
			return 0;
		}
		if (func_910(iVar2))
		{
			func_1673(uParam0, func_1036(uParam0));
			func_636(uParam0, 4, -1741293470, 1, 1, 0);
			if (_databinding_is_data_id_valid(uParam0->f_2031.f_68))
			{
				_0x75cfac49301e134f(uParam0->f_2031.f_68, iVar0, 0);
			}
			func_1092(uParam0, 1);
			bVar3 = func_622(0);
			if (func_1603(iVar0))
			{
				bVar3 = false;
			}
			func_1148(uParam0, -1780721243, 0, round(func_1015(iVar0, func_226(iVar2))), 1);
			func_637(uParam0, bVar3);
		}
		else
		{
			func_1092(uParam0, 0);
			if (iVar2 == 4 && func_1249())
			{
				func_640(uParam0, 956657125);
			}
			else if (func_256(uParam0, func_299(uParam0), 623595106))
			{
				func_640(uParam0, -183198311);
			}
			else
			{
				func_640(uParam0, -882461021);
			}
		}
	}
	else if (iVar1 == 1837492866)
	{
		func_1092(uParam0, 0);
		if (func_720() == 3)
		{
			iVar4 = 282600537;
		}
		else if (func_720() == 1)
		{
			iVar4 = -1729705519;
		}
		func_831(uParam0, iVar4);
	}
	return 1;
}

int func_1142(var uParam0)
{
	iVar0 = func_277(0);
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	if (func_1204(iVar0))
	{
		func_667(uParam0, iVar0, 0);
	}
	return 1;
}

int func_1143(var uParam0)
{
	iVar0 = func_1474(uParam0);
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	iVar1 = func_1000(iVar0);
	iVar2 = func_1001(iVar1);
	_databinding_add_data_hash(uParam0->f_2031.f_50, "InfoBoxName", get_hash_key(func_1255(iVar2)));
	func_1673(uParam0, func_1036(uParam0));
	iVar3 = round(func_1015(iVar0, func_298(uParam0)));
	if ((iVar0 == -935042458 && _get_number_of_references_of_script_with_name_hash(1138230654) > 0) || func_1685(15))
	{
		iVar3 = 6500;
	}
	func_1148(uParam0, -861791432, iVar0, iVar3, 1);
	func_636(uParam0, 4, -1741293470, 1, 1, 0);
	return 1;
}

int func_1144(var uParam0)
{
	iVar0 = 0;
	iVar3 = 0;
	while (iVar3 < 130)
	{
		iVar1 = -1;
		if (!func_111(iVar3))
		{
		}
		else if (!func_803(iVar3))
		{
		}
		else
		{
			iVar1 = func_1063(func_1062(iVar3, 1, 1));
			if (!func_717(iVar1))
			{
			}
			else if (iVar1 == 5)
			{
			}
			else if (func_1064(iVar2, iVar1))
			{
			}
			else
			{
				func_1065(&iVar2, iVar1);
				iVar0 = (iVar0 + func_924(iVar1));
			}
		}
		iVar3++;
	}
	bVar4 = (func_360(1) >= iVar0 && iVar0 > 0);
	func_1148(uParam0, -1789759600, 0, iVar0, 0);
	func_636(uParam0, 2, -1789759600, bVar4, 1, 1);
	if (func_1686() && func_1064(iVar2, 3))
	{
		func_831(uParam0, get_hash_key("SHOP_H_WEST_ELIZABETH_BOUNTY"));
		func_832(uParam0, 1);
	}
	else
	{
		func_832(uParam0, 0);
	}
	return 1;
}

int func_1145(var uParam0, var uParam1)
{
	iVar4 = 0;
	iVar4 = func_1090(&(uParam0->f_2031));
	if (iVar4 < 0)
	{
		return 0;
	}
	else if (!func_589(0, &(uParam0->f_2031), &iVar0))
	{
		return 0;
	}
	if (!func_1244(uParam0, func_299(uParam0), iVar0, &iVar5, &uVar6))
	{
		return 0;
	}
	if (!func_278(iVar5, 0))
	{
		return 0;
	}
	func_1088(uParam0, iVar5, 0);
	_databinding_add_data_hash(uParam0->f_2031.f_50, "InfoBoxName", func_1154(iVar5));
	func_1088(uParam0, iVar5, 0);
	func_1148(uParam0, -2089226131, iVar5, -1, 0);
	if (func_1113(iVar5))
	{
		func_279(iVar5);
	}
	*uParam1 = func_896(uParam0, iVar5);
	uParam1->f_9 = iVar5;
	return 1;
}

bool func_1146(var uParam0, int iParam1)
{
	iVar0 = _databinding_get_array_count(uParam0->f_2031.f_58);
	iVar1 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	vVar7.f_1 = -1;
	vVar7.f_2 = -1;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = _databinding_get_item_context_by_index(uParam0->f_2031.f_58, iVar1);
		if (_databinding_is_data_id_valid(iVar2))
		{
			iVar4 = _databinding_read_data_int_from_parent(iVar2, func_649());
			iVar3 = iVar4;
			if (iVar3 == -1968468235)
			{
				iVar5 = func_1223(iVar1, &(uParam0->f_2031));
				iVar6 = 0;
				iVar6 = 0;
				while (iVar6 < iVar5)
				{
					vVar7 = { func_1224(iVar1, iVar6, &(uParam0->f_2031)) };
					if (func_278(vVar7.x, 0))
					{
						if (vVar7.x == iParam1)
						{
							_databinding_add_data_hash(iVar2, func_683(), vVar7.x);
							_databinding_add_data_int(iVar2, func_1670(), vVar7.x);
							_databinding_add_data_int(iVar2, func_684(), func_896(uParam0, vVar7.x));
							if (!func_1246(uParam0, iParam1, &Var10, 164843734))
							{
								_databinding_add_data_bool(iVar2, "iconVisible", true);
								_databinding_add_data_string(iVar2, "iconTextureDict", "generic_textures");
								_databinding_add_data_string(iVar2, "texture", "SWATCH_BG_1A");
							}
							else
							{
								_databinding_add_data_bool(iVar2, "iconVisible", true);
								_databinding_add_data_string(iVar2, "iconTextureDict", Var10.f_1);
								_databinding_add_data_string(iVar2, "iconTexture", Var10);
							}
						}
						else
						{
							iVar6++;
						}
						iVar1++;
						return false;
					}
				}
			}
		}
	}
}

int func_1147(var uParam0)
{
	iVar0 = 0;
	iVar8 = func_918(uParam0);
	Var14 = -1;
	Var14.f_1 = -1;
	Var14.f_2 = -1;
	Var14.f_3 = -1;
	Var14.f_4 = -1;
	Var14.f_5 = -1;
	Var14.f_6 = -1;
	Var14.f_7 = -1;
	Var14.f_8 = -1;
	iVar49 = _databinding_get_array_count(uParam0->f_2031.f_58);
	iVar1 = 0;
	while (iVar1 < iVar49)
	{
		iVar48 = _databinding_get_item_context_by_index(uParam0->f_2031.f_58, iVar1);
		if (_databinding_is_data_id_valid(iVar48))
		{
			iVar2 = _databinding_read_data_hash_string_from_parent(iVar48, func_683());
			iVar6 = iVar2;
			iVar4 = _databinding_read_data_int_from_parent(iVar48, func_684());
			iVar5 = iVar4;
			iVar3 = _databinding_read_data_int_from_parent(iVar48, func_685());
			if (func_278(iVar6, 0))
			{
				if (iVar5 == 1702073444)
				{
					if (func_1184(iVar6))
					{
						Var14.f_8 = iVar3;
						iVar8 = func_918(uParam0);
						iVar10 = _item_database_create_item_collection(&Var14, &iVar9, 1);
						iVar11 = 0;
						while (iVar11 < iVar9)
						{
							iVar12 = func_919(iVar11, iVar10);
							if ((((func_278(iVar12, 0) && iVar12 != iVar6) && !func_1687(iVar12, &iVar24, iVar35)) && func_920(&(uParam0->f_2031), iVar12, &uVar7)) || _item_database_get_item_tag_type(iVar12, Var14.f_8) == -2089472884)
							{
								uParam0->f_2031.f_74 = uVar7;
								iVar13 = func_896(uParam0, iVar12);
								if (!func_834(uParam0, iVar12, iVar13))
								{
									if (iVar47 < (iVar36 - 1))
									{
										iVar36[iVar47] = iVar12;
										iVar47++;
									}
								}
							}
							iVar11++;
						}
						uParam0->f_2031.f_74 = iVar8;
						_0xcbb7b6edfa933ade(iVar10);
					}
				}
				else if (!func_1687(iVar6, &iVar24, iVar35))
				{
					if (!func_834(uParam0, iVar6, iVar5))
					{
						iVar0 = (iVar0 + func_902(iVar6, 0));
					}
					if (func_612(iVar6, 1954943838))
					{
						if (iVar47 < (iVar36 - 1))
						{
							iVar36[iVar47] = iVar6;
							iVar47++;
						}
					}
				}
				if (iVar35 < (iVar24 - 1))
				{
					iVar24[iVar35] = iVar12;
					iVar35++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < iVar47)
	{
		if (&iVar36[iVar1] != 0 && !func_612(&(iVar36[iVar1]), 1954943838))
		{
			iVar50 = 0;
			while (iVar50 < iVar47)
			{
				if ((&iVar36[iVar50] != 0 && func_612(&(iVar36[iVar50]), 1954943838)) && func_1057(&(iVar36[iVar1]), &(iVar36[iVar50])))
				{
					iVar0 = (iVar0 + func_902(&(iVar36[iVar1]), 0));
					iVar36[iVar1] = 0;
				}
				else
				{
					iVar50++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_1148(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = func_896(uParam0, iParam2);
	iVar1 = 0;
	iVar2 = 0;
	if (func_278(iParam2, 0))
	{
		iVar1 = func_1186(iParam2, -915411861, 0, 0, 1);
		iVar2 = func_902(iParam2, 0);
		if (bParam4)
		{
			iVar1 = func_1688(iParam2, 816454899, 0);
			iVar2 = func_1601(iParam2, 0);
		}
	}
	if (iParam3 != -1)
	{
		_databinding_add_data_bool(uParam0->f_2031.f_54, "rightPriceTextVisible", false);
		_databinding_add_data_bool(uParam0->f_2031.f_54, "ItemModifiedPriceVisible", false);
		_databinding_add_data_bool(uParam0->f_2031.f_54, "ItemModifiedPriceGold", false);
		_databinding_add_data_int(uParam0->f_2031.f_54, "purchasePrice", iParam3);
	}
	else if (!func_1014(iParam2) && func_834(uParam0, iParam2, iVar0))
	{
		_databinding_add_data_hash(uParam0->f_2031.f_54, "rightPriceText", -298752054);
		_databinding_add_data_bool(uParam0->f_2031.f_54, "modifiedPriceVisible", false);
		_databinding_add_data_bool(uParam0->f_2031.f_54, "modifiedPriceGold", false);
		_databinding_add_data_bool(uParam0->f_2031.f_54, "rightPriceTextVisible", true);
	}
	else
	{
		if (iVar1 != iVar2)
		{
			_databinding_add_data_bool(uParam0->f_2031.f_54, "modifiedPriceVisible", true);
			_databinding_add_data_bool(uParam0->f_2031.f_54, "modifiedPriceGold", false);
			_databinding_add_data_int(uParam0->f_2031.f_54, "purchasePrice", iVar2);
			_databinding_add_data_int(uParam0->f_2031.f_54, "purchaseModifiedPrice", iVar1);
		}
		else
		{
			_databinding_add_data_bool(uParam0->f_2031.f_54, "modifiedPriceVisible", false);
			_databinding_add_data_bool(uParam0->f_2031.f_54, "modifiedPriceGold", false);
			_databinding_add_data_int(uParam0->f_2031.f_54, "purchasePrice", iVar2);
			_databinding_add_data_int(uParam0->f_2031.f_54, "purchaseModifiedPrice", iVar1);
		}
		_databinding_add_data_bool(uParam0->f_2031.f_54, "rightPriceTextVisible", false);
	}
	bVar3 = true;
	if (!bParam4)
	{
		bVar3 = func_909(uParam0, iParam2, iVar0);
	}
	_databinding_add_data_bool(uParam0->f_2031.f_54, "isAffordable", bVar3);
	_databinding_add_data_string(uParam0->f_2031.f_54, "purchaseLabel", _get_label_text_by_hash(iParam1));
	_databinding_add_data_bool(uParam0->f_2031.f_54, "visible", true);
}

bool func_1149(int iParam0)
{
	if (!func_278(*iParam0, 0))
	{
		return false;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			return true;
		case 1903483453:
			*iParam0 = -1527293029;
			return true;
		case -541584777:
			*iParam0 = 206762213;
			return true;
		case 998010398:
			*iParam0 = -324053813;
			return true;
		case -1424823393:
			*iParam0 = -885810591;
			return true;
		default:
			break;
	}
	return false;
}

int func_1150(int iParam0, bool bParam1)
{
	if (func_1381(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_1209(bParam1), iParam0, 0);
}

int func_1151(int iParam0, bool bParam1)
{
	Var0 = { func_1185(iParam0, 0, 0) };
	return func_1265(iParam0, &Var0, 0, bParam1);
}

bool func_1152(var uParam0, int iParam1)
{
	bVar0 = false;
	if (func_612(iParam1, 930141731))
	{
		bVar0 = !_unlock_is_unlocked(iParam1);
	}
	bVar1 = !func_1689(iParam1);
	bVar2 = func_1690(iParam1, uParam0->f_3);
	bVar3 = ((bVar1 || bVar2) || bVar0);
	return bVar3;
}

bool func_1153(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_360(1);
}

int func_1154(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

bool func_1155(int iParam0, int iParam1, var uParam2)
{
	iVar0 = func_1475(iParam1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (_item_database_is_shop_key_valid(func_82(iVar0)))
	{
		if (!_item_database_get_shop_inventories_item_info_by_key(func_82(iVar0), iParam0, &vVar1))
		{
			return false;
		}
	}
	if (vVar1.x == 0)
	{
		return false;
	}
	if (vVar1.z <= 0)
	{
		return false;
	}
	iVar4 = func_82(iVar0);
	iVar14 = 0;
	iVar6 = 0;
	while (iVar6 < vVar1.z)
	{
		if (!_item_database_get_shop_inventories_requirement_group_info(iVar4, vVar1.x, iVar6, &Var8))
		{
			return false;
		}
		if (Var8.f_1 <= 0)
		{
		}
		else
		{
			iVar7 = 0;
			while (iVar7 < Var8.f_1)
			{
				Var10 = 0;
				if (!_item_database_get_shop_inventories_requirement_info(iVar4, vVar1.x, iVar6, iVar7, &Var10))
				{
				}
				else
				{
					if (!func_1691(iParam1, vVar1.x, &Var10, &uVar5))
					{
						if (uParam2->f_10 >= 3)
						{
							return true;
						}
						(*uParam2)[uParam2->f_10] = Var10;
						(*uParam2)[uParam2->f_10]->f_1 = Var10.f_1;
						(*uParam2)[uParam2->f_10]->f_2 = Var10.f_3;
						uParam2->f_10++;
						iVar14 = 1;
					}
					iVar7++;
				}
			}
		}
		iVar6++;
	}
	return iVar14;
}

int func_1156(int iParam0, bool bParam1)
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
				return func_1692();
			}
			break;
	}
	return 0;
}

int func_1157(int iParam0, bool bParam1)
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

int func_1158(int iParam0)
{
	switch (iParam0)
	{
		case 1508306587:
			return 956753366;
		case 2029752284:
			return 229848043;
		case -413129408:
			return 588559743;
		case 1132079111:
			return -1165477807;
		case 478744432:
			return 542482997;
		case -68128151:
			return -1598999798;
		case -686686829:
			return -1964604515;
		case 1201276490:
			return -950324859;
		case -839140560:
			return -1768217088;
		case -298391753:
			return -647442474;
		case 1589583617:
			return -1669395156;
		case 1769055947:
			return 2099263972;
		case 1545016984:
			return 2099263972;
		case 1868067663:
			return 1177470655;
		case -1080198344:
			return 1177470655;
		case -1440373417:
			return -145955678;
		case 562107429:
			return 1758406353;
		case -163032984:
			return 332275111;
		case -1719060085:
			return 1533215112;
		case 1033860813:
			return 1990307743;
		case -2061583405:
			return 1314684259;
		case 58819564:
			return -1942508740;
		case -646147237:
			return 2145255488;
		case 1096747416:
			return 1735590610;
		case -852381396:
			return -1804458598;
		case 153430294:
			return -1804458598;
		case 81053684:
			return -2096103467;
		case -525676072:
			return -2096103467;
		case -497931013:
			return -572044425;
		case 172394747:
			return -1893707445;
		case 461122406:
			return -572044425;
		case -999503751:
			return 1704476318;
		case 502936876:
			return 1135086855;
		case 2047428024:
			return -1118685671;
		case -1358040092:
			return 1373811563;
		case -590250209:
			return -551303313;
		case 1477698721:
			return -1962451182;
		case 688587926:
			return -999848467;
		case 684307653:
			return 2123406071;
		case -923693316:
			return 2099263972;
		case 2016058810:
			return 406014096;
		case 1282123855:
			return -350927420;
		case -795466267:
			return -494519208;
		case 2112290568:
			return 834235656;
		case 698653232:
			return 1488981351;
		case -1423861687:
			return -1622329839;
		case -1126146024:
			return 1995280482;
		case 684852611:
			return -1596855333;
		case -1934420714:
			return -1596855333;
		case -1972808239:
			return -1596855333;
		case -2085606460:
			return -1596855333;
		case 1772421657:
			return -1596855333;
		case -1407809882:
			return -721165241;
		case 1061770183:
			return -1134874053;
		default:
			break;
	}
	return 0;
}

char* func_1159(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_1154(iParam0));
}

int func_1160(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_612(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_612(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_612(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_612(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_612(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_612(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

var func_1161(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_16855.f_3.f_20;
	}
	return Global_1914319->f_16855.f_3.f_13;
}

int func_1162(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_16855.f_3.f_18;
	}
	return Global_1914319->f_16855.f_3.f_11;
}

int func_1163(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_16855.f_3.f_19;
	}
	return Global_1914319->f_16855.f_3.f_12;
}

char* func_1164()
{
	return "itemEnabled";
}

void func_1165(int iParam0, int iParam1, int iParam2)
{
	iVar3 = 0;
	bVar2 = func_125() != -1;
	if (func_1171() == 24043185)
	{
		iVar3 = 1;
	}
	iVar0 = func_1693(iParam0);
	if (iVar0 != 0)
	{
		iVar1 = 5;
		if (func_1694(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, iVar0, bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = iVar0;
			Global_1946804->f_2653 = iParam0;
		}
		else if (func_1694(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, func_1693(iParam0 + 1), bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = 1155669136;
			Global_1946804->f_2653 = iParam0;
		}
		else
		{
			Global_1946804->f_1378.f_1[iVar1] = func_1695(0);
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
	iVar0 = func_1693(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = 6;
		if (func_1694(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, iVar0, bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = iVar0;
			Global_1946804->f_2654 = iParam1;
		}
		else if (func_1694(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, func_1693(iParam1 + 1), bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = 1155669136;
			Global_1946804->f_2654 = iParam1;
		}
		else
		{
			Global_1946804->f_1378.f_1[iVar1] = func_1695(1);
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
	iVar0 = func_1693(iParam2);
	if (iVar0 != 0)
	{
		iVar1 = 7;
		if (func_1694(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, iVar0, bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = iVar0;
			Global_1946804->f_2655 = iParam2;
		}
		else if (func_1694(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, func_1693(iParam2 + 1), bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = 1155669136;
			Global_1946804->f_2655 = iParam2;
		}
		else
		{
			Global_1946804->f_1378.f_1[iVar1] = func_1695(2);
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

int func_1166(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = func_656(iParam2, 1);
	iVar1 = 0;
	if (iVar0 < 0 || iVar0 >= 39)
	{
		return 0;
	}
	if (func_1171() == 24043185)
	{
		iVar1 = 1;
	}
	if (!bParam4)
	{
		func_658();
	}
	if (iParam1 != 1155669136 && func_1694(&(Global_1946804->f_1378.f_1[iVar0]), iVar1, iParam1, func_125() != -1) == -1)
	{
		return 0;
	}
	if (bParam3)
	{
		Global_1946804->f_2456[iVar0] = 0;
		Global_1946804->f_2456[iVar0]->f_1 = 0;
	}
	Global_1946804->f_1378.f_1[iVar0]->f_1 = iParam1;
	if (bParam5)
	{
		if (is_ped_a_player(iParam0))
		{
			func_94(16, iParam2, 0, 0, 0);
		}
		else
		{
			func_94(16, iParam2, 1, iParam0, 0);
		}
	}
	func_336(1);
	return 1;
}

int func_1167(int iParam0)
{
	return &(Global_40.f_7731[iParam0]);
}

void func_1168(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
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
	func_658();
	func_1165(iParam1, iParam2, iParam3);
	if ((iParam1 == 0 && iParam2 == 0) && iParam3 == 0)
	{
		func_1696(iParam0, -7657935, -1889597427, 1, 1, 0);
	}
	else
	{
		func_1696(iParam0, 1155669136, -1889597427, 1, 1, 0);
	}
	if (bParam4)
	{
		if (is_ped_a_player(iParam0))
		{
			func_94(1, 64, 0, 0, 0);
		}
		else
		{
			func_94(1, 64, 1, iParam0, 0);
		}
	}
	func_336(1);
}

bool func_1169(int iParam0, var uParam1)
{
	Var1 = -2109211296;
	if (func_125() == -1)
	{
		if (func_1171() == 1160113249)
		{
			Var1 = 1583685020;
		}
		else
		{
			Var1 = -572793833;
		}
	}
	Var1.f_1 = iParam0;
	Var1.f_3 = 0;
	_0x91ded5dd64bb2691(&Var1);
	if (!_0xed4413cee1bf142c(&Var1))
	{
		return false;
	}
	if (_0x44b3a36933ac009c(&iVar0, &Var1, 199808792))
	{
		(*uParam1)[0] = func_1697(iVar0);
	}
	else
	{
		(*uParam1)[0] = -1;
	}
	if (_0x44b3a36933ac009c(&iVar0, &Var1, -468412711))
	{
		(*uParam1)[1] = func_1697(iVar0);
	}
	else
	{
		(*uParam1)[1] = -1;
	}
	if (_0x44b3a36933ac009c(&iVar0, &Var1, -1592946273))
	{
		(*uParam1)[2] = func_1697(iVar0);
	}
	else
	{
		(*uParam1)[2] = -1;
	}
	return true;
}

int func_1170(int iParam0)
{
	if (!func_1698(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_7731[iParam0]);
}

int func_1171()
{
	return Global_1946804->f_1;
}

bool func_1172(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_658();
	if (iParam2 == 39)
	{
		Var0 = { func_1185(iParam0, 1, 0) };
		iParam2 = func_656(func_1312(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_612(iParam0, 866047851) && func_1160(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_538(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1296(func_1079(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_657(iParam2);
	func_661(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1699(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1699(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_659(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1700(iParam0, iParam2, iParam1, func_125() != -1);
	if (bParam4)
	{
		func_1297(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1297(&(Global_1946804->f_1378), 1, 0);
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
				func_1082(func_1079(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1173(int iParam0)
{
	func_1701(&(Global_1946804->f_1378), iParam0);
}

bool func_1174(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = -1506259487;
			break;
		case 1:
			*iParam1 = -676503695;
			break;
		case 2:
			*iParam1 = 383349088;
			break;
		default:
			return false;
	}
	return true;
}

bool func_1175(int iParam0)
{
	switch (iParam0)
	{
		case -1881423545:
		case 1024854903:
		case 1107981273:
		case 1224358974:
		case 1792152856:
			return false;
		case 1574030042:
			return func_1702(0);
		case 1420417918:
			return func_1702(1);
		default:
			break;
	}
	func_1703(iParam0, &uVar1);
	func_1169(iParam0, &uVar10);
	iVar6 = func_1704(iParam0);
	iVar8 = (&uVar10[iVar6] - func_1167(iVar6));
	iVar5 = 0;
	while (iVar5 < 3)
	{
		func_633(iVar5, &iVar0);
		iVar7 = func_1167(iVar5);
		if (&uVar10[iVar5] != -1 && iVar0 != &uVar1[iVar5])
		{
			return false;
		}
		if (&uVar10[iVar5] == -1)
		{
			if (iVar7 > 1)
			{
				return false;
			}
		else
		{
			}
			else
			{
				if (iVar7 < &uVar10[iVar5])
				{
					return false;
				}
				if (iVar7 > (&uVar10[iVar5] + iVar8))
				{
					return false;
				}
				iVar9 = (uVar10[iVar5] - uVar10[iVar6]) // PointerArith;
				if (iVar9 != (func_1167(iVar6) - iVar7))
				{
					return false;
				}
			}
			iVar5++;
			return true;
		}
	}
}

bool func_1176(int iParam0)
{
	iVar0 = func_1705(0);
	iVar1 = 0;
	func_1195(&(Global_1946804->f_964), iVar0, iParam0, 0, 0, 0);
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

int func_1177(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (Global_1946804->f_1497 == iVar1)
	{
		return 1;
	}
	Var4.f_1 = 39;
	func_753(&Var4, 0, 1);
	if (!func_1295(&Var4, iVar1, &bVar0, 1, 0, 0, 0))
	{
		return 0;
	}
	iVar123 = 0;
	while (iVar123 < 39)
	{
		iVar3 = func_1079(iVar123, 1);
		if (&Global_1946804->f_57[iVar123]->f_2[0] == -1802376732)
		{
		}
		else if (bVar0 && &Var4.f_1[iVar123] == &Global_1946804->f_57[iVar123])
		{
		}
		else if (&Var4.f_1[iVar123] == &uParam1->f_1[iVar123])
		{
		}
		else if (func_1080(iVar3, 14))
		{
		}
		else if (func_1292(uParam1->f_1[iVar123], 2) && &Var4.f_1[iVar123] == &Global_1946804->f_57[iVar123])
		{
		}
		else
		{
			switch (iVar3)
			{
				case 1600962399:
				case 1742327865:
					Jump @273; //curOff = 241
					iVar2 = &Var4.f_1[iVar123];
					if (func_1427(iVar2))
					{
					}
					else
					{
						return 0;
					}
				}
				iVar123++;
			}
			return 1;
		}

int func_1178(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_656(iParam0, 1)]);
}

bool func_1179(int iParam0, int iParam1)
{
	if (!func_1589(iParam0, &iVar0))
	{
		return false;
	}
	return iVar0 == iParam1;
}

bool func_1180(int iParam0, int iParam1)
{
	if (!func_1590(iParam0, &iVar0))
	{
		return false;
	}
	return iVar0 == iParam1;
}

bool func_1181(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (!func_965(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	if (func_1591(iVar9, &iVar10))
	{
		return iVar10 == iParam0;
	}
	return false;
}

struct<4> func_1182(bool bParam0)
{
	return func_669(1328661203, func_1643(), -1591664384, bParam0);
}

int func_1183(int iParam0)
{
	switch (iParam0)
	{
		case 1795979421:
			return -1774867076;
		case 1193257440:
			return -421952220;
		case 1415299667:
			return 1231618917;
		case -1015460895:
			return 1043717005;
		case -768291983:
			return 142663787;
		default:
			break;
	}
	return 0;
}

bool func_1184(int iParam0)
{
	if (func_612(iParam0, -313258003))
	{
		return true;
	}
	return false;
}

struct<5> func_1185(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1182(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_826(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_669(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_668(bParam1) };
			if (bParam2 && func_1706(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_967(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_967(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1471(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1707(bParam1) };
			switch (func_339(iParam0))
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
			if (func_1708(iParam0, -1823706425))
			{
				Var0 = { func_669(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1708(iParam0, -1483207246))
			{
				Var0 = { func_669(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1469(Var0, &Var27, bParam1, 0))
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

int func_1186(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_612(iParam0, -5284486))
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
		if (func_1506(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_1709(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_919(iVar62, iVar61);
					if (func_278(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1186(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1186(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1506(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1187()
{
	if (func_632() == -814448122 || (func_632() == -986108061 && !func_951(2)))
	{
		return Global_40.f_7748.f_1 > 1;
	}
	return Global_40.f_7748.f_1 > 2;
}

bool func_1188(int iParam0)
{
	return iParam0 != 0;
}

bool func_1189(int iParam0)
{
	return ((&Global_40.f_7731[0] >= iParam0 || &Global_40.f_7731[1] >= iParam0) || &Global_40.f_7731[2] >= iParam0);
}

bool func_1190(int iParam0)
{
	return ((&Global_40.f_7731[0] >= iParam0 && &Global_40.f_7731[1] >= iParam0) && &Global_40.f_7731[2] >= iParam0);
}

bool func_1191(int iParam0)
{
	if (!func_1698(iParam0))
	{
		return false;
	}
	return &Global_40.f_7731[iParam0] > 1;
}

void func_1192(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1914319->f_16855.f_3.f_18 = Global_1914319->f_16855.f_3.f_14;
		Global_1914319->f_16855.f_3.f_14 = uParam0;
	}
	else
	{
		Global_1914319->f_16855.f_3.f_11 = Global_1914319->f_16855.f_3.f_8;
		Global_1914319->f_16855.f_3.f_8 = uParam0;
	}
}

bool func_1193(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_1329.f_48)
	{
		iVar1 = 0;
		while (iVar1 < Global_1946804->f_1329.f_29[iVar0]->f_5)
		{
			if (iParam0 == &Global_1946804->f_1329.f_29[iVar0]->f_1[iVar1])
			{
				*iParam1 = &Global_1946804->f_1329.f_29[iVar0];
				*iParam2 = iVar0;
				return true;
			}
			iVar1++;
		}
		iVar0++;
	}
	return false;
}

int func_1194(int iParam0)
{
	switch (iParam0)
	{
		case 358835375:
			return 0;
		case -1127546830:
			return 1;
		case 1116743896:
			return 2;
		default:
			break;
	}
	return 3;
}

void func_1195(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_1196(var uParam0, int iParam1)
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
			if ((func_1710(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1710(uParam0->f_2[iVar0], 1))
				{
					func_1081(uParam0->f_2[iVar0], 2, 6);
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

bool func_1197(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

bool func_1198(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_656(iParam0, 1)] != &Global_1946804->f_57[func_656(iParam0, 1)];
}

void func_1199(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_661(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_661(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_661(iVar2, iVar0);
		}
	}
}

bool func_1200(int iParam0)
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

void func_1201(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1711(uParam0, 1))
	{
		func_1712(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

void func_1202(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1713(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_125() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1323(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1354(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1354(Global_40.f_7729);
				Global_1946804->f_1378 = func_1354(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1527(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_129(0, 1);
	}
}

int func_1203(int iParam0, int iParam1)
{
	if (!func_1204(iParam0))
	{
		return -1;
	}
	Var0 = { func_1185(iParam0, 0, 0) };
	Var0.f_4 = iParam1;
	Var5 = { func_669(iParam0, Var0, Var0.f_4, 0) };
	uVar9 = _0xab5f12746a099a0e(func_1209(0), &Var5);
	return uVar9;
}

bool func_1204(int iParam0)
{
	return func_826(iParam0) == -427144552;
}

struct<2> func_1205(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_1206(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar0 = func_339(iParam0);
		if (iVar0 != 0)
		{
			if (iParam1 >= 0 && iParam1 < func_974(iParam0))
			{
				if (_item_database_get_has_slot_info(iVar0, iParam1, &uVar1))
				{
					return uVar1;
				}
			}
		}
	}
	return 0;
}

bool func_1207(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar3 = func_339(iParam0);
		if (iVar3 != 0)
		{
			iVar4 = func_1331(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (_item_database_get_fits_slot_info(iVar3, iVar0, &iVar1))
				{
					iVar2 = iVar1;
					if (iVar2 == iParam1)
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

bool func_1208(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam3 = 0;
	if (!func_533(iParam1))
	{
		return false;
	}
	if (_item_database_get_shop_layout_page_info_by_key(iParam1, iParam2, &Var5))
	{
		iVar1 = 0;
		while (iVar1 < Var5.f_3)
		{
			if (_item_database_get_shop_layout_page_item_key(iParam1, Var5, iVar1, &iVar4, &uVar2, &iVar3))
			{
				if (func_278(iVar4, 0))
				{
					iVar0 = func_896(uParam0, iVar4);
					if (func_634(uParam0, iVar4, iVar0, iVar3))
					{
						*iParam3 = iVar4;
						return true;
					}
				}
			}
			iVar1++;
		}
	}
	return false;
}

int func_1209(bool bParam0)
{
	if (func_125() == -1)
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

bool func_1210(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_1209(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1211(int iParam0, int iParam1)
{
	if (_item_database_get_shop_layout_menu_info_by_id(iParam0, iParam1, &Var0))
	{
		return Var0.f_6;
	}
	return -1;
}

int func_1212(int iParam0, int iParam1, int iParam2)
{
	if (_item_database_get_shop_layout_menu_info_by_id(iParam0, iParam1, &iVar0))
	{
		if (_item_database_get_shop_layout_menu_info_by_index(iParam0, iVar0, iParam2, &uVar7))
		{
			return uVar7;
		}
	}
	return -1;
}

bool func_1213(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if ((iParam1 + iParam2) >= iParam3 && iParam0 < iParam1)
	{
		iParam0 = (iParam0 + iParam3);
	}
	return (iParam0 >= iParam1 && iParam0 <= (iParam1 + iParam2));
}

bool func_1214(int iParam0)
{
	if ((((iParam0 == -1873242174 || iParam0 == -1095179319) || iParam0 == 1406783678) || iParam0 == 2119176479) || iParam0 == 1649093494)
	{
		return true;
	}
	return false;
}

bool func_1215(var uParam0, int iParam1)
{
	if (!func_712(uParam0, &iVar0))
	{
		return false;
	}
	iVar1 = func_1714(-1352600334);
	_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_2031.f_58, iParam1, iVar1, iVar0);
	_virtual_collection_item_add(func_288(), iParam1, iVar1, iVar0);
	return true;
}

bool func_1216(var uParam0, int iParam1)
{
	if (!func_714(uParam0, &iVar0))
	{
		return false;
	}
	iVar1 = func_1714(-2092532275);
	_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_2031.f_58, iParam1, iVar1, iVar0);
	_virtual_collection_item_add(func_288(), iParam1, iVar1, iVar0);
	return true;
}

bool func_1217(var uParam0, int iParam1)
{
	if (!func_713(uParam0, &iVar0))
	{
		return false;
	}
	iVar1 = func_1714(-772187037);
	_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_2031.f_58, iParam1, iVar1, iVar0);
	_virtual_collection_item_add(func_288(), iParam1, iVar1, iVar0);
	return true;
}

bool func_1218(var uParam0, int iParam1)
{
	if (!func_715(uParam0, &iVar0))
	{
		return false;
	}
	iVar1 = func_1714(317179309);
	_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_2031.f_58, iParam1, iVar1, iVar0);
	_virtual_collection_item_add(func_288(), iParam1, iVar1, iVar0);
	return true;
}

bool func_1219(var uParam0, int iParam1)
{
	if (!func_1715(uParam0, &iVar0))
	{
		return false;
	}
	iVar1 = func_1714(2073652352);
	_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_2031.f_58, iParam1, iVar1, iVar0);
	_virtual_collection_item_add(func_288(), iParam1, iVar1, iVar0);
	return true;
}

bool func_1220(var uParam0, int iParam1, int iParam2)
{
	if (!func_687(uParam0, iParam1, &iVar0))
	{
		return false;
	}
	iVar1 = func_1714(336033112);
	_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_2031.f_58, iParam2, iVar1, iVar0);
	_virtual_collection_item_add(func_288(), iParam2, iVar1, iVar0);
	return true;
}

bool func_1221(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_289(uParam0);
	iVar1 = func_1090(&(uParam0->f_2031));
	vVar2.f_1 = -1;
	vVar2.f_2 = -1;
	iVar5 = 0;
	iVar7 = 0;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < iVar1)
	{
		iVar6 = func_1223(iVar8, &(uParam0->f_2031));
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			vVar2 = { func_1224(iVar8, iVar5, &(uParam0->f_2031)) };
			if (func_278(vVar2.x, 0))
			{
				if (func_1074(uParam0, vVar2))
				{
					if (func_1213(iVar7, iParam1, iParam2, iVar0))
					{
						if (!func_1225(uParam0, vVar2.x, iVar7, vVar2.y, vVar2.z, bParam3))
						{
						}
					}
					iVar7++;
				}
			}
			iVar5++;
		}
		iVar8++;
	}
	return true;
}

bool func_1222(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = func_289(uParam0);
	if (iParam1 == 207706105)
	{
		iVar1 = -999503751;
	}
	else if (iParam1 == -1998614617)
	{
		iVar1 = -525676072;
	}
	else if (iParam1 == -357182937)
	{
		iVar1 = -2061583405;
	}
	iVar2 = 0;
	iVar3 = func_1156(iVar1, 1);
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar5 = func_851(iVar1, iVar4, 1);
		if (func_278(iVar5, 0))
		{
			if (func_1213(iVar2, iParam2, iParam3, iVar0))
			{
				if (!func_1225(uParam0, iVar5, iVar2, -1, -1, bParam4))
				{
				}
				iVar2++;
			}
		}
		iVar4++;
	}
	return true;
}

int func_1223(int iParam0, var uParam1)
{
	if (!_item_database_is_shop_layout_key_valid(*uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (_item_database_get_shop_layout_menu_page_key(*uParam1, uParam1->f_12, iParam0, &iVar0))
	{
		if (_item_database_get_shop_layout_page_info_by_key(*uParam1, iVar0, &Var1))
		{
			return Var1.f_3;
		}
	}
	return -1;
}

Vector3 func_1224(int iParam0, int iParam1, var uParam2)
{
	iVar0 = func_586(iParam0, uParam2);
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = -1;
	if (_item_database_get_shop_layout_page_item_key(*uParam2, iVar0, iParam1, &iVar4, &iVar5, &iVar6))
	{
		vVar1.x = iVar4;
		vVar1.f_1 = iVar6;
		vVar1.f_2 = iVar5;
	}
	return vVar1;
}

bool func_1225(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_278(iParam1, 0))
	{
		return false;
	}
	iVar0 = func_896(uParam0, iParam1);
	iVar1 = iVar0;
	switch (iVar0)
	{
		case -384358143:
			bVar2 = func_697(uParam0, iParam1, &iVar3);
			break;
		case -1395073769:
			bVar2 = func_698(uParam0, iParam1, &iVar3);
			break;
		case -853534656:
			bVar2 = func_699(uParam0, iParam1, &iVar3, 1);
			break;
		case -349391286:
			bVar2 = func_700(uParam0, iParam1, &iVar3, 1);
			break;
		case 2036169888:
			bVar2 = func_701(uParam0, iParam1, &iVar3);
			break;
		case -239176093:
			bVar2 = func_702(uParam0, iParam1, &iVar3);
			break;
		case 1394581936:
			bVar2 = func_703(uParam0, iParam1, &iVar3);
			break;
		case 777890122:
			bVar2 = func_704(uParam0, iParam1, &iVar3);
			break;
		case -1502467280:
			bVar2 = func_705(uParam0, iParam1, &iVar3);
			break;
		case -584027224:
			bVar2 = func_706(uParam0, iParam1, &iVar3);
			break;
		case 38807286:
			bVar2 = func_693(uParam0, iParam1, &iVar3);
			break;
		case -760956867:
			bVar2 = func_692(uParam0, iParam1, &iVar3);
			break;
		case -339889117:
			bVar2 = func_694(uParam0, iParam1, iParam3, iParam4, &iVar3, 1);
			break;
		case -348190488:
			bVar2 = func_696(uParam0, iParam1, iParam3, iParam4, &iVar3, 1);
			break;
		case 761079318:
			bVar2 = func_707(uParam0, iParam1, &iVar3, 1);
			break;
		case -2056428614:
			bVar2 = func_708(uParam0, iParam1, &iVar3, 1);
			break;
		case 1942587409:
			bVar2 = func_709(uParam0, iParam1, &iVar3, 1);
			break;
		case 2077448405:
			bVar2 = func_710(uParam0, iParam1, &iVar3, 1);
			break;
		case -1048755899:
			bVar2 = func_711(uParam0, iParam1, &iVar3);
			break;
	}
	if (bParam5)
	{
		bVar2 = func_719(uParam0, iParam1, iVar0, &iVar3, 1);
	}
	if (bVar2)
	{
		if (!bParam5)
		{
			iVar4 = func_1714(iVar0);
		}
		else
		{
			iVar4 = -2084053133;
		}
		_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_2031.f_58, iParam2, iVar1, iVar3);
		_virtual_collection_item_add(func_288(), iParam2, iVar4, iVar3);
		return true;
	}
	return false;
}

int func_1226(var uParam0, int iParam1, int iParam2)
{
	if (!func_686(uParam0, iParam1, &iVar0, 1, 0, 0, 0))
	{
		return 0;
	}
	iVar1 = func_1714(-1968468235);
	_virtual_collection_item_add(func_288(), iParam2, iVar1, iVar0);
	_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_2031.f_58, -1, iVar1, iVar0);
	return 1;
}

int func_1227(int iParam0)
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

bool func_1228(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_278(iParam1, 0))
	{
		return false;
	}
	if (!func_1014(iParam1))
	{
		return false;
	}
	if (!func_691(uParam0, iParam1, iParam2, &iVar0))
	{
		return false;
	}
	iVar1 = func_1714(-1080155519);
	_virtual_collection_item_add(func_288(), iParam3, iVar1, iVar0);
	_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_2031.f_58, -1, iVar1, iVar0);
	return true;
}

bool func_1229(var uParam0, int iParam1, int iParam2)
{
	if (!func_688(uParam0, iParam1, &iVar0))
	{
		return false;
	}
	iVar1 = func_1714(193788635);
	_virtual_collection_item_add(func_288(), iParam2, iVar1, iVar0);
	_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_2031.f_58, -1, iVar1, iVar0);
	return true;
}

bool func_1230(var uParam0, int iParam1)
{
	if (!func_690(uParam0, &iVar0))
	{
		return false;
	}
	iVar1 = func_1714(1837492866);
	_virtual_collection_item_add(func_288(), iParam1, iVar1, iVar0);
	_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_2031.f_58, -1, iVar1, iVar0);
	return true;
}

int func_1231(bool bParam0)
{
	return (func_1716(bParam0) - 1);
}

bool func_1232(var uParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1717(&Var0))
	{
		return false;
	}
	if (!func_1529(Var0, -415648720, uParam0, iParam1))
	{
		return false;
	}
	return true;
}

bool func_1233(var uParam0, struct<4> Param1, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15)
{
	if (!func_689(uParam0, Param1.f_4, iParam15, Param1, &iVar0))
	{
		return false;
	}
	iVar1 = func_1714(1119253406);
	_virtual_collection_item_add(func_288(), iParam15, iVar1, iVar0);
	_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_2031.f_58, -1, iVar1, iVar0);
	return true;
}

bool func_1234(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	Var2.f_9 = -1591664384;
	Var16 = { func_978(0, 2123222014, -1591664384, -1591664384, 0, 0) };
	if (!func_979(&Var16, &iVar0, &iVar1, 1))
	{
		return false;
	}
	if (iParam0 < iVar1)
	{
		if (func_980(&Var2, iParam0, iVar0, iVar1))
		{
			if (func_278(Var2.f_4, 0))
			{
				*iParam1 = Var2.f_4;
				func_981(iVar0);
				return true;
			}
		}
	}
	func_981(iVar0);
	return false;
}

bool func_1235(int iParam0, var uParam1, int iParam2)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1718(iParam0, &Var0))
	{
		return false;
	}
	if (!func_1529(Var0, -415648720, uParam1, iParam2))
	{
		return false;
	}
	return true;
}

int func_1236(bool bParam0)
{
	Var0 = { func_1719(0) };
	Var4.f_9 = -1591664384;
	func_1469(Var0, &Var4, bParam0, 0);
	return func_974(Var4.f_4);
}

bool func_1237(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 < 0)
	{
		return false;
	}
	Var0 = { func_1719(0) };
	Var4.f_9 = -1591664384;
	func_1469(Var0, &Var4, bParam2, 0);
	if (iParam0 >= func_974(Var4.f_4))
	{
		return false;
	}
	iVar18 = func_1206(Var4.f_4, iParam0);
	if (iVar18 == 0)
	{
		return false;
	}
	if (!func_1720(Var0, iVar18, uParam1, 0, bParam2))
	{
		return false;
	}
	return true;
}

int func_1238(var uParam0)
{
	Var4 = 1226838104;
	if (func_125() == -1)
	{
		Var4 = -380731322;
	}
	Var4.f_1 = -367421157;
	Var4.f_3 = 0;
	_0x91ded5dd64bb2691(&Var4);
	func_1721();
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar1 = func_656(iVar0, 1);
			if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
			}
			else
			{
				iVar3 = func_1722(iVar0, Var4);
				if (iVar3 == -1)
				{
				}
				else
				{
					func_1723(&(uParam0->f_1[iVar1]), uParam0->f_1[iVar1]->f_1, iVar3, Var4);
				}
			}
		}
	}
	Global_1946804->f_1329 = 1;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (Global_1946804->f_1329.f_1[iVar2]->f_7 >= 2)
		{
			return 1;
		}
		iVar2++;
	}
	return 0;
}

bool func_1239(var uParam0, int iParam1, int iParam2)
{
	if (!func_695(uParam0, iParam1, &iVar0))
	{
		return false;
	}
	iVar1 = func_1714(-395279071);
	_virtual_collection_item_add(func_288(), iParam2, iVar1, iVar0);
	_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_2031.f_58, -1, iVar1, iVar0);
	return true;
}

bool func_1240(var uParam0, int iParam1, int iParam2)
{
	if (!func_1724(uParam0, iParam1, &iVar0))
	{
		return false;
	}
	iVar1 = func_1714(420195545);
	_virtual_collection_item_add(func_288(), iParam2, iVar1, iVar0);
	_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_2031.f_58, -1, iVar1, iVar0);
	return true;
}

bool func_1241(var uParam0, int iParam1, int iParam2)
{
	if (!func_718(uParam0, iParam1, &iVar0))
	{
		return false;
	}
	iVar1 = func_1714(420195545);
	_virtual_collection_item_add(func_288(), iParam2, iVar1, iVar0);
	_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_2031.f_58, -1, iVar1, iVar0);
	return true;
}

bool func_1242(var uParam0, struct<6> Param1, int iParam7)
{
	if (!func_1725(uParam0, Param1, iParam7, &iVar0))
	{
		return false;
	}
	iVar1 = func_1714(-627085098);
	if (iVar1 != 0)
	{
		_virtual_collection_item_add(func_288(), iParam7, iVar1, iVar0);
		_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_2031.f_58, -1, iVar1, iVar0);
		return true;
	}
	return false;
}

char* func_1243()
{
	return "uiItemLabel";
}

bool func_1244(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*iParam3 = 0;
	if (!func_533(iParam1))
	{
		return false;
	}
	vVar8.f_1 = -1;
	vVar8.f_2 = -1;
	if (_item_database_get_shop_layout_page_info_by_key(iParam1, iParam2, &Var4))
	{
		iVar0 = 0;
		while (iVar0 < Var4.f_3)
		{
			if (_item_database_get_shop_layout_page_item_key(iParam1, Var4, iVar0, &iVar3, &uVar1, &uVar2))
			{
				if (func_278(iVar3, 0))
				{
					vVar8.x = iVar3;
					vVar8.f_1 = uVar2;
					vVar8.f_2 = uVar1;
					if (func_1074(uParam0, vVar8))
					{
						*iParam3 = iVar3;
						*iParam4 = uVar2;
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_1245(var uParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (func_826(iParam1) != -1977020088 && func_826(iParam1) != -1037537535)
	{
		return false;
	}
	if (iParam1 == 357708345 || iParam1 == -377364164)
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return false;
	}
	iVar1 = _get_metaped_type(get_player_ped(get_player_index()));
	if (func_826(iParam1) == -1977020088)
	{
		iVar1 = _get_metaped_type(func_1036(uParam0));
	}
	else
	{
		iVar1 = _get_metaped_type(func_263(uParam0));
	}
	if (iVar1 == 4)
	{
		return false;
	}
	StringCopy(sParam2, "SwatchTxd", 32);
	StringCopy(sParam3, "slot", 32);
	iVar2 = uParam0->f_2031.f_49;
	if (!bParam4)
	{
		if (iVar2 >= 29)
		{
			iVar2 = 0;
		}
		else if (iVar2 < 0)
		{
			iVar2 = 29;
		}
	}
	else
	{
		iVar2 = 29;
	}
	_int_to_string(iVar2, "%i", &cVar3);
	if (iVar2 <= 9)
	{
		StringCopy(&cVar7, "0", 32);
		StringConCat(sParam3, &cVar7, 32);
	}
	StringConCat(sParam3, &cVar3, 32);
	_0x160921255327c591(iVar2, iVar0, iVar1, func_125() == 0);
	if (!bParam4)
	{
		iVar2++;
		uParam0->f_2031.f_49 = iVar2;
	}
	return true;
}

bool func_1246(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (func_1339(iParam1, &vVar0, iParam3, 0, 0, 0))
	{
		*sParam2 = { vVar0 };
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1247(int iParam0, var uParam1, int iParam2)
{
	if (func_1470(iParam0, &uVar0, uParam1, iParam2))
	{
		if (uParam1->f_16 <= 0.1f && uParam1->f_20 <= 0.1f)
		{
			return true;
		}
		return false;
	}
	return false;
}

struct<8> func_1248(int iParam0)
{
	StringCopy(&cVar0, "", 64);
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return cVar0;
	}
	if (iParam0 >= 7)
	{
		return cVar0;
	}
	return *Global_40.f_1095.f_1[iParam0];
}

bool func_1249()
{
	if (!func_120((*Global_1835011)[15]->f_1, 1))
	{
		return true;
	}
	return false;
}

int func_1250(int iParam0)
{
	iParam0 = func_444(iParam0);
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

char* func_1251(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
		case -842044823:
		case 92296905:
		case 1432602132:
			return "BREED_AMERICANPAINT";
		case -1943445834:
		case -783061276:
		case -745453539:
		case 1371398552:
		case 1583029039:
			return "BREED_AMERICANSTANDARDBRED";
		case -1322521536:
		case 728055838:
		case 1100711204:
			return "BREED_ANDALUSIAN";
		case -1782334639:
		case -1266863668:
		case -1181052732:
		case -635244104:
		case -540812301:
		case -179102320:
			return "BREED_APPALOOSA";
		case -2105447887:
		case -2078767648:
		case -2055655009:
		case -1506685618:
		case -1427377767:
		case -852553462:
		case -80004868:
			return "BREED_ARABIAN";
		case 153881023:
		case 836323303:
		case 1813208211:
			return "BREED_ARDENNES";
		case -1256798240:
		case 2118089359:
			return "BREED_BELGIAN";
		case -1537586382:
		case 697143532:
		case 1440692746:
			return "BREED_DUTCHWARMBLOOD";
		case -1376299681:
		case -1293672675:
		case 281128160:
		case 1854519167:
			return "BREED_HUNGARIANHALFBRED";
		case -1955947684:
		case 545109431:
		case 1361788230:
		case 1427053849:
		case 1974379573:
			return "BREED_KENTUCKYSADDLE";
		case -1179079660:
		case 1275638003:
		case 2083573823:
			return "BREED_MISSOURIFOXTROTTER";
		case 648301150:
		case 892601357:
		case 955937750:
		case 1224695367:
		case 1235275977:
			return "BREED_MORGAN";
		case -1597490733:
		case -1428527735:
		case 805526368:
		case 2000205872:
			return "BREED_MUSTANG";
		case -1714171692:
		case -742726637:
		case 170010697:
			return "BREED_NOKOTA";
		case -1999094324:
		case -126555855:
		case -103101636:
			return "BREED_SHIRE";
		case 237935328:
		case 1724200240:
			return "BREED_SUFFOLKPUNCH";
		case -887362763:
		case -868094182:
		case -847714194:
		case 120848852:
		case 1342496140:
		case 1756765331:
		case 2059232991:
			return "BREED_TENNESSEEWALKER";
		case -1900569233:
		case -1262715164:
		case -813071670:
		case 1688250187:
		case 2010625508:
			return "BREED_THOROUGHBRED";
		case -1882436593:
		case -225011104:
		case -136225010:
			return "BREED_TURKOMAN";
		case -1331210307:
			return "BREED_DONKEY";
		case -1784502482:
		case 122449722:
			return "BREED_MULE";
		case 294243421:
			return "BREED_DUTCHWARMBLOOD";
		case -997197050:
			return "BREED_THOROUGHBRED";
		case -235714362:
			return "BREED_APPALOOSA";
		case -1678164:
			return "BREED_NOKOTA";
		case -977833913:
			return "BREED_TENNESSEEWALKER";
		case 1589164943:
			return "BREED_THOROUGHBRED";
		case -1087523615:
			return "BREED_AMERICANPAINT";
		case -496814209:
			return "BREED_ARDENNES";
		case 2109055751:
			return "BREED_APPALOOSA";
		case -776673611:
			return "BREED_NOKOTA";
		case 1764402253:
			return "BREED_ARABIAN";
		case -1417310078:
			return "BREED_TURKOMAN";
		case 1096273915:
			return "BREED_AMERICANPAINT";
		case 772751081:
			return "BREED_HUNGARIANHALFBRED";
		case -1140435723:
			return "BREED_NOKOTA";
		case 2002524329:
			return "BREED_TENNESSEEWALKER";
		case 1151530184:
			return "BREED_MUSTANG";
		case -1266525037:
			return "BREED_MISSOURIFOXTROTTER";
		case -2018137175:
			return "BREED_TURKOMAN";
		case -574151692:
			return "BREED_MUSTANG";
		case 649786380:
			return "BREED_AMERICANSTANDARDBRED";
		case -1921328920:
			return "BREED_APPALOOSA";
		case -837607790:
			return "BREED_KENTUCKYSADDLE";
		case 370424594:
			return "BREED_APPALOOSA";
		case -364764277:
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "BREED_INVALID";
}

char* func_1252()
{
	return "uiItemRawText";
}

void func_1253(int iParam0, struct<4> Param1)
{
	_databinding_add_data_int(*iParam0, "uiGuidData1", Param1);
	_databinding_add_data_int(*iParam0, "uiGuidData2", Param1.f_1);
	_databinding_add_data_int(*iParam0, "uiGuidData3", Param1.f_2);
	_databinding_add_data_int(*iParam0, "uiGuidData4", Param1.f_3);
}

int func_1254(int iParam0)
{
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

char[] func_1255(int iParam0)
{
	StringCopy(&cVar0, func_1726(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_1727(&cVar0);
}

int func_1256(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	return _0xa4550fe9c512e3dd(iParam0);
}

int func_1257()
{
	return 811708401;
}

int func_1258(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam3 = 0;
	if (!func_533(iParam1))
	{
		return 0;
	}
	if (_item_database_get_shop_layout_menu_info_by_id(iParam1, iParam2, &Var0))
	{
		if (Var0.f_5 > 0)
		{
			iVar7 = -1;
			iVar8 = 0;
			while (iVar8 < Var0.f_5)
			{
				if (_item_database_get_shop_layout_menu_page_key(iParam1, iParam2, iVar8, &iVar7))
				{
					if (func_1208(uParam0, iParam1, iVar7, iParam3))
					{
						return 1;
					}
				}
				iVar8++;
			}
		}
	}
	return 0;
}

bool func_1259(var uParam0, int iParam1, int iParam2)
{
	if (func_339(iParam2) == -999503751)
	{
		return false;
	}
	if (func_612(iParam2, 265372629))
	{
		return false;
	}
	iVar0 = iParam2;
	Var1.f_1 = -1;
	func_1728(&Var1, iVar0, -1, 1, 1);
	if (_0x93ffd92f05ec32fd(Var1.f_3.f_1))
	{
	}
	else
	{
		return false;
	}
	iVar6 = Var1.f_3.f_1;
	_databinding_add_data_int(*iParam1, func_725(), iVar6);
	_databinding_add_data_bool(*iParam1, func_724(), true);
	uParam0->f_2031.f_79 = 1;
	return true;
}

int func_1260(var uParam0, int iParam1, int iParam2, var uParam3)
{
	*uParam3 = 0;
	if (!func_533(iParam1))
	{
		return 0;
	}
	if (_item_database_get_shop_layout_menu_info_by_id(iParam1, iParam2, &Var0))
	{
		if (Var0.f_5 > 0)
		{
			iVar7 = -1;
			iVar8 = 0;
			while (iVar8 < Var0.f_5)
			{
				if (_item_database_get_shop_layout_menu_page_key(iParam1, iParam2, iVar8, &iVar7))
				{
					if (func_1729(uParam0, iParam1, iVar7, uParam3))
					{
						return 1;
					}
				}
				iVar8++;
			}
		}
	}
	return 0;
}

int func_1261(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (bParam1)
	{
		_databinding_add_data_bool(*iParam0, "locked", true);
		_databinding_add_data_bool(*iParam0, "forSale", false);
		_databinding_add_data_bool(*iParam0, "owned", false);
		_databinding_add_data_bool(*iParam0, "soldOut", false);
		_databinding_add_data_bool(*iParam0, "equipped", false);
	}
	else if (bParam2)
	{
		_databinding_add_data_bool(*iParam0, "owned", true);
		_databinding_add_data_bool(*iParam0, "forSale", false);
		_databinding_add_data_bool(*iParam0, "locked", false);
		_databinding_add_data_bool(*iParam0, "soldOut", false);
		_databinding_add_data_bool(*iParam0, "equipped", true);
	}
	else if (bParam3)
	{
		_databinding_add_data_bool(*iParam0, "owned", bParam6);
		_databinding_add_data_bool(*iParam0, "forSale", !bParam6);
		_databinding_add_data_bool(*iParam0, "locked", false);
		_databinding_add_data_bool(*iParam0, "soldOut", false);
		_databinding_add_data_bool(*iParam0, "equipped", false);
	}
	else
	{
		_databinding_add_data_bool(*iParam0, "forSale", bParam4);
		_databinding_add_data_bool(*iParam0, "owned", false);
		_databinding_add_data_bool(*iParam0, "locked", false);
		_databinding_add_data_bool(*iParam0, "soldOut", false);
		_databinding_add_data_bool(*iParam0, "equipped", false);
	}
	_databinding_add_data_bool(*iParam0, "useGoldPrice", false);
	_databinding_add_data_int(*iParam0, "price", iParam5);
	return 1;
}

bool func_1262(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_125() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1730(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1263(int iParam0)
{
	if (!func_1731(iParam0))
	{
		return false;
	}
	return true;
}

bool func_1264(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

int func_1265(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!func_926(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_1209(bParam3), iParam0);
}

bool func_1266()
{
	if (!func_910(0))
	{
		return false;
	}
	if (func_1732(func_226(0), 0) && func_1732(func_226(0), 1))
	{
		return false;
	}
	return true;
}

char* func_1267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Ambarino";
		case 1:
			return "New Hanover";
		case 2:
			return "Lemoyne";
		case 3:
			return "West Elizabeth";
		case 5:
			return "Guarma";
		case 4:
			return "New Austin";
		default:
			break;
	}
	return "Invalid Law Bounty State";
}

char* func_1268(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LBS_AMBARINO";
		case 1:
			return "LBS_NEW_HANOVER";
		case 2:
			return "LBS_LEMOYNE";
		case 3:
			return "LBS_W_ELIZABETH";
		case 4:
			return "LBS_NEW_AUSTIN";
		case 5:
			return "LBS_GUARMA";
		default:
			break;
	}
	return "LBS_INVALID";
}

int func_1269(int iParam0)
{
	if (!func_717(iParam0))
	{
		return 0;
	}
	iVar0 = func_924(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_360(1) < iVar0)
	{
		return 0;
	}
	return 1;
}

char* func_1270()
{
	iVar0 = get_current_language();
	switch (iVar0)
	{
		case 0:
			return "elements_stamps_text_en";
		case 1:
			return "elements_stamps_text_fr";
		case 2:
			return "elements_stamps_text_de";
		case 3:
			return "elements_stamps_text_it";
		case 4:
			return "elements_stamps_text_es";
		case 5:
			return "elements_stamps_text_pt";
		case 6:
			return "elements_stamps_text_pl";
		case 7:
			return "elements_stamps_text_ru";
		case 8:
			return "elements_stamps_text_ko";
		case 9:
			return "elements_stamps_text_zh-Hant";
		case 12:
			return "elements_stamps_text_zh-Hans";
		case 10:
			return "elements_stamps_text_ja";
		case 11:
			return "elements_stamps_text_mx";
		default:
			break;
	}
	return "elements_stamps_text_en";
}

bool func_1271(int iParam0)
{
	Var3 = -961687407;
	if (func_125() == -1)
	{
		Var3 = 1444744190;
	}
	Var3.f_1 = iParam0;
	Var3.f_3 = 0;
	_0x91ded5dd64bb2691(&Var3);
	if (!_0xed4413cee1bf142c(&Var3))
	{
		return false;
	}
	if (!_0x44b3a36933ac009c(&iVar0, &Var3, -2008906477))
	{
		return false;
	}
	iVar2 = func_1733(iParam0);
	if (func_1734(iVar0, &iVar1))
	{
		func_1735(iVar1, iVar2);
	}
	while (_0xed4413cee1bf142c(&Var3))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var3, -2008906477))
		{
		}
		else if (!func_1734(iVar0, &iVar1))
		{
		}
		else
		{
			func_1735(iVar1, iVar2);
		}
	}
	return true;
}

int func_1272(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_94(13, iParam1, 0, 0, 0);
		}
		else
		{
			func_94(13, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_1736(0))
	{
	}
	func_1274(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

int func_1273(int iParam0)
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

void func_1274(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_125() != -1;
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
			func_305(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1737(iParam1, 29, bVar4, 1, 0);
			func_1737(iParam1, 31, bVar4, 1, 0);
			func_1737(iParam1, 30, bVar4, 1, 0);
			func_1737(iParam1, 22, bVar4, 1, 0);
			func_1737(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_538(32768) && func_1080(1108822547, 8)) && func_1197(10, iParam3))
	{
		func_1738(iParam1, 0, 1);
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
			iVar3 = func_1079(iVar1, 1);
			if (func_1080(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1197(iVar1, iParam3))
				{
				}
				else if ((func_1080(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1080(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1737(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1083(iVar3, 1, 6);
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
								func_1737(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1080(iVar3, 1))
							{
								func_1082(iVar3, 1, 6);
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

bool func_1275(int iParam0)
{
	iVar0 = func_332(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_1276(int iParam0)
{
	if (func_233(iParam0) == 8)
	{
		return func_234(iParam0);
	}
	return -1;
}

int func_1277(int iParam0)
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

bool func_1278()
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

int func_1279(int iParam0, int iParam1)
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

float func_1280()
{
	if (func_1739())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_747(2);
	}
	if (Global_1347477->f_119)
	{
		return func_747(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1740();
	fVar2 = func_1741();
	fVar3 = func_1742();
	fVar4 = func_1743();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1744()));
	fVar7 = (func_747(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1745(3, round((to_float(iVar8) * fVar10)), 0);
	func_1746(3, fVar9, fVar9 > 100f);
	return func_1747(fVar7, -100f, 100f);
}

float func_1281()
{
	if (func_1739())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_747(1);
	}
	if (Global_1347477->f_119)
	{
		return func_747(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1740();
	fVar2 = func_1741();
	fVar3 = func_1742();
	fVar4 = func_1743();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1744()));
	fVar7 = (func_747(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1745(2, round((to_float(iVar8) * fVar10)), 0);
	func_1746(2, fVar9, fVar9 > 100f);
	return func_1747(fVar7, -100f, 100f);
}

float func_1282()
{
	if (func_1739())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_747(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1748())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1749())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_747(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1740();
	fVar2 = func_1741();
	fVar3 = func_1742();
	fVar4 = func_1743();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1744()));
	fVar7 = (func_747(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1745(1, round((to_float(iVar8) * fVar10)), 0);
	func_1746(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_747(0);
	}
	return func_1747(fVar7, -100f, 100f);
}

int func_1283(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

int func_1284(int iParam0)
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

int func_1285(int iParam0)
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

void func_1286(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1750(iParam0, 0, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[0]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[0]), bParam2);
}

float func_1287(int iParam0)
{
	fVar0 = (to_float(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_1288(int iParam0)
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

char* func_1289(int iParam0)
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

bool func_1290(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
		case -1719060085:
		case -1632561800:
		case -1440373417:
		case -1423861687:
		case -839140560:
		case -497931013:
		case 81053684:
		case 172394747:
		case 461122406:
		case 502936876:
		case 562107429:
		case 684307653:
		case 688587926:
		case 698653232:
		case 1282123855:
		case 1477698721:
		case 1769055947:
		case 1868067663:
		case 2016058810:
		case 2047428024:
			return true;
		default:
			break;
	}
	return false;
}

int func_1291(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return -1;
	}
	if (func_820(iParam0))
	{
		return -1;
	}
	if (func_612(iParam0, -1529356747))
	{
		return 0;
	}
	if (func_612(iParam0, -1938332139))
	{
		return 1;
	}
	if (func_612(iParam0, -821065926))
	{
		return 2;
	}
	if (func_612(iParam0, -923980501))
	{
		return 3;
	}
	if (func_612(iParam0, -1679966367))
	{
		return 4;
	}
	return -1;
}

bool func_1292(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

Vector3 func_1293(int iParam0, int iParam1)
{
	if (func_125() == -1)
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

bool func_1294(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_1751(iParam1) != iParam2)
	{
		return false;
	}
	if (func_1323(2, iParam1))
	{
		func_1752(uParam0, iParam1);
		return true;
	}
	return false;
}

bool func_1295(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1705(iParam6);
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
		func_753(uParam0, func_1273(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_656(iVar3, 1);
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
							if (func_1753(iVar3) && func_1754(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_659(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

void func_1296(int iParam0)
{
	func_1082(iParam0, 8, 6);
}

void func_1297(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_125() != -1;
	iVar7 = func_1755(0);
	if (func_538(32768))
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
			iVar5 = func_1079(iVar0, 1);
			if (func_1080(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1080(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1465(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1756(uParam0);
				if (iVar3 > 0)
				{
					if (!func_538(524288))
					{
						func_305(524288);
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
							iVar5 = func_1079(iVar0, 1);
							if (func_1080(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1080(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1465(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_661(iVar0, iParam2);
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
					func_1645(524288);
				}
			}
		}
	}
}

bool func_1298(int iParam0, int iParam1)
{
	if (func_125() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1299(int iParam0)
{
	if (func_125() != -1)
	{
		if (func_1301(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1301(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1300(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1301(iParam0, 65536) && !func_1301(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1301(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1301(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1301(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1302(int iParam0)
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

int func_1303(int iParam0)
{
	if (is_vehicle_seat_free(iParam0, -1))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 0))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 1))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int func_1304(int iParam0)
{
	if (is_vehicle_seat_free(iParam0, -1))
	{
		return -1;
	}
	if (is_vehicle_seat_free(iParam0, 0))
	{
		return 0;
	}
	if (is_vehicle_seat_free(iParam0, 1))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 2))
	{
		return 2;
	}
	return -2;
}

var func_1305(int iParam0)
{
	if (!func_111(iParam0))
	{
		if (_is_global_block_valid(4) && _get_global_block_can_be_accessed(4))
		{
			return "FMMC_INV_ALID";
		}
		return "REGION_INV";
	}
	return func_1757((*Global_1888801)[iParam0]->f_22);
}

void func_1306(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_2 = -1;
}

bool func_1307(var uParam0, int iParam1, var uParam2)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (iParam1 >= uParam0->f_2)
	{
		return false;
	}
	_0xd840c130d7aacfa5(uParam0->f_1, iParam1, &Var0);
	*uParam2 = { Var0 };
	uParam2->f_3 = Var0.f_3;
	uParam2->f_4 = Var0.f_4;
	return true;
}

bool func_1308(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_1309(int iParam0)
{
	return func_773(iParam0, Global_1310750->f_16072 | 64);
}

void func_1310(int iParam0)
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

int func_1311(int iParam0)
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

int func_1312(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1079(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_1313()
{
	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

bool func_1314(int iParam0, int iParam1)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1349(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1210("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_980(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_1758(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_981(iVar1);
				return true;
			}
			iVar3++;
		}
		func_981(iVar1);
	}
	return false;
}

int func_1315(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_826(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1349(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1759(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_1209(bParam2), iParam0, 0);
	return iVar2;
}

int func_1316(int iParam0)
{
	iVar0 = func_656(func_791(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

int func_1317()
{
	if (_is_ped_carrying(Global_35))
	{
		return 1;
	}
	if (get_current_ped_weapon(Global_35, &iVar0, true, 0, false))
	{
	}
	if (get_current_ped_weapon(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == -1569615261)
	{
		if (iVar0 == -1569615261)
		{
			return 1;
		}
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_315(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_35, true)) && !(is_ped_in_any_vehicle(Global_35, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_315(iVar0)) || iVar0 == 2055893578)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == -1569615261)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

Vector3 func_1318(int iParam0)
{
	return _0xf70f00013a62f866((*Global_1888801)[iParam0]->f_3);
}

int func_1319(vector3 vParam0)
{
	return round(vdist(Global_36, vParam0));
}

bool func_1320(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_1321(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_1322(int iParam0, int iParam1)
{
	if (!func_1321(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_1323(int iParam0, int iParam1)
{
	if (func_125() == -1)
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

bool func_1324(int iParam0, int iParam1)
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

bool func_1325(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 688587926 || iParam0 == 2047428024) || iParam0 == 698653232) || iParam0 == 81053684) || iParam0 == -2061583405) || iParam0 == -1719060085) || iParam0 == -163032984) || iParam0 == 1868067663) || iParam0 == -839140560) || iParam0 == -686686829) || iParam0 == -795466267) || iParam0 == 2029752284) || iParam0 == 1201276490) || iParam0 == -1440373417) || iParam0 == 562107429) || iParam0 == 1477698721) || iParam0 == -1632561800) || iParam0 == 684307653) || iParam0 == 1282123855) || iParam0 == -68128151) || iParam0 == -497931013) || iParam0 == -413129408) || iParam0 == 2112290568) || iParam0 == 502936876) || iParam0 == 1132079111) || iParam0 == 478744432) || iParam0 == 1096747416) || iParam0 == 1033860813) || iParam0 == 2016058810) || iParam0 == 1769055947) || iParam0 == -999503751) || iParam0 == 1508306587) || iParam0 == -525676072) || iParam0 == -298391753) || iParam0 == -590250209) || iParam0 == -923693316) || iParam0 == -709696437) || iParam0 == 1223979091) || iParam0 == 1545016984) || iParam0 == 629735563) || iParam0 == -698079035) || iParam0 == -1000405829) || iParam0 == -1387964792) || iParam0 == 1526346227) || iParam0 == -1847550017) || iParam0 == -1080198344) || iParam0 == -852381396) || iParam0 == 153430294) || iParam0 == 684852611) || iParam0 == -1972808239) || iParam0 == -2085606460) || iParam0 == 1772421657) || iParam0 == -1423861687)
	{
		return true;
	}
	return false;
}

int func_1326(int iParam0)
{
	switch (iParam0)
	{
		case -1847550017:
		case -1387964792:
		case -1080198344:
		case -1000405829:
		case -698079035:
		case 629735563:
		case 688587926:
		case 698653232:
		case 1282123855:
		case 1526346227:
		case 2112290568:
			return 1;
		case -2061583405:
		case -525676072:
			return 2;
		case -709696437:
		case 1223979091:
		case 1545016984:
		case 2047428024:
			return 3;
		case -923693316:
		case -839140560:
		case -298391753:
			return 4;
		case -1719060085:
			return 5;
		case -2085606460:
		case -795466267:
		case -497931013:
		case 81053684:
		case 172394747:
		case 461122406:
		case 1508306587:
			return 6;
		case 1868067663:
			return 7;
		case 1769055947:
			return 8;
		case 1096747416:
			return 9;
		case -852381396:
		case 153430294:
		case 684852611:
		case 1033860813:
			return 10;
		case -590250209:
		case 1772421657:
			return 11;
		case -1972808239:
		case -1423861687:
			return 12;
		case -999503751:
		default:
			break;
	}
	return 0;
}

void func_1327(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	iVar0 = func_1326(Global_1914319->f_19461.f_1);
	*uParam0 = { *Global_1914319->f_19461.f_22[iVar0] };
	*uParam1 = { Global_1914319->f_19461.f_22[iVar0]->f_3 };
	*uParam2 = Global_1914319->f_19461.f_22[iVar0]->f_9;
	*uParam3 = { Global_1914319->f_19461.f_22[iVar0]->f_6 };
	*uParam4 = Global_1914319->f_19461.f_22[iVar0]->f_10;
	*uParam5 = Global_1914319->f_19461.f_22[iVar0]->f_11;
}

void func_1328(bool bParam0)
{
	if (!_uiprompt_is_valid(Global_1914319->f_19461.f_180) && bParam0)
	{
		Global_1914319->f_19461.f_180 = _uiprompt_register_begin();
		_0xf4a5c4509bf923b1(Global_1914319->f_19461.f_180, 0);
		_uiprompt_set_text(Global_1914319->f_19461.f_180, "WARDROBE_INSPECT_PROMPT");
		_uiprompt_set_control_action(Global_1914319->f_19461.f_180, 1395223413);
		_uiprompt_set_hold_indefinitely_mode(Global_1914319->f_19461.f_180);
		_uiprompt_register_end(Global_1914319->f_19461.f_180);
	}
	if (_uiprompt_is_valid(Global_1914319->f_19461.f_180))
	{
		if (!func_827(Global_1914319->f_19461.f_1))
		{
			_uiprompt_set_enabled(Global_1914319->f_19461.f_180, false);
			_uiprompt_set_visible(Global_1914319->f_19461.f_180, false);
		}
		else
		{
			_uiprompt_set_enabled(Global_1914319->f_19461.f_180, bParam0);
			_uiprompt_set_visible(Global_1914319->f_19461.f_180, bParam0);
		}
	}
}

void func_1329(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2031.f_52, "ItemInfo2");
	_databinding_add_data_hash(iVar0, "Text", iParam1);
	if (bParam2)
	{
		_databinding_add_data_hash(iVar0, "Style", -548373963);
	}
	else
	{
		_databinding_add_data_hash(iVar0, "Style", 432931142);
	}
}

int func_1330(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1760(iParam0);
		case 1:
			return func_1761(iParam0);
		case 2:
			return func_1762(iParam0);
		case 3:
			return func_1763(iParam0);
	}
	return 0;
}

int func_1331(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_339(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_fits_slot_count(iVar0);
}

void func_1332(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1333(int iParam0, int iParam1, int iParam2)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (!func_278(iParam1, 0))
	{
		return false;
	}
	if (!func_1204(iParam0))
	{
		return false;
	}
	if (!func_965(iParam1, iParam0, &iVar0, &uVar1, &uVar5, 1, iParam2))
	{
		return false;
	}
	return func_967(iParam1, &uVar1, iVar0, 0);
}

bool func_1334(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1618(iParam0, &Var0))
	{
		return false;
	}
	return func_1531(iParam1, Var0, 1415981582, 0) > 0;
}

bool func_1335(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1618(iParam0, &Var0))
	{
		return false;
	}
	return func_1531(iParam1, Var0, -2119169513, 0) > 0;
}

bool func_1336(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_1619() };
	if (!func_965(iParam0, 856287005, &iVar13, &uVar9, &uVar4, 1, 0))
	{
		return false;
	}
	Var14 = { func_978(0, iVar13, -1591664384, -1591664384, 0, 0) };
	iVar28 = 0;
	if (func_979(&Var14, &iVar29, &iVar30, 0))
	{
		Var31.f_9 = -1591664384;
		iVar45 = 0;
		while (iVar45 < iVar30)
		{
			if (func_980(&Var31, iVar45, iVar29, iVar30))
			{
				if (func_670(&(Var31.f_5), &Var0))
				{
					if (Var31.f_4 == iParam0)
					{
						iVar28 = 1;
					}
					else
					{
						iVar45++;
					}
					func_981(iVar29);
					return iVar28;
				}
			}
		}
	}
}

int func_1337(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1324(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_339(iParam0) != -999503751)
		{
			func_1764(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_339(iParam0) != -999503751)
	{
		func_1764(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1765(iParam0, 1);
	return 1;
}

void func_1338()
{
	if (func_125() == -1)
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

bool func_1339(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*sParam1 = { *Var3.f_2[iVar0] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_1340(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

var func_1341(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1766(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_1342(int iParam0)
{
	if (func_125() == -1)
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

int func_1343(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_1324(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1765(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_339(iParam0) != -999503751)
	{
		func_1767(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1344(int iParam0, int iParam1)
{
	Var0 = { func_1185(iParam0, 0, 0) };
	Var5 = { func_669(iParam0, Var0, Var0.f_4, 0) };
	if (func_1531(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_1209(0), &Var5);
	return 1;
}

bool func_1345(int iParam0)
{
	return func_1769(func_1768(iParam0));
}

void func_1346(int iParam0, bool bParam1)
{
	Var0 = { func_1185(iParam0, 0, 0) };
	Var5 = { func_669(iParam0, Var0, Var0.f_4, 0) };
	if (func_1531(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_1209(0), &Var5, bParam1);
}

void func_1347(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1348(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

int func_1349(int iParam0, int iParam1)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_826(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_612(iParam0, 1399091007))
	{
		func_1770(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

struct<2> func_1350(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return Var0;
	}
	if (func_612(iParam0, -305066475))
	{
		if (func_125() == -1)
		{
			if (func_612(iParam0, -537818634))
			{
				return func_872(189951448);
			}
			else
			{
				return func_872(1176172851);
			}
		}
	}
	else if (func_612(iParam0, -537818634))
	{
		return func_872(-963660207);
	}
	if (func_612(iParam0, 2084895747))
	{
		return func_872(1694039471);
	}
	return Var2;
}

bool func_1351(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_978(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1332(&Var0, func_668(0));
	}
	if (!func_979(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_980(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_977(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_981(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1352(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_1185(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1771(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_669(iParam0, Var0, Var0.f_4, bParam4) };
	return func_977(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1353(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_612(iParam0, 606799272))
		{
			func_1772(iParam0, iParam1);
		}
		if (func_612(iParam0, -1112814642) && func_612(iParam0, -1697809989))
		{
			func_1397(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1354(int iParam0)
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

int func_1355(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_339(iVar1) != iParam0)
		{
		}
		else
		{
			if (iParam0 == -999503751)
			{
				if (func_819() != iVar1)
				{
				}
				else
				{
					Jump @87; //curOff = 71
					if (!func_823(iVar1))
					{
					}
					else
					{
						return iVar1;
					}
				}
				iVar0++;
				return 0;
			}
		}
	}
}

bool func_1356(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_125() == -1)
	{
		if (func_1204(iParam0) && func_1773(iParam0))
		{
			func_1774(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_1357(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1775(iParam0, iParam1);
	Var0 = { func_1185(iParam0, 0, 1) };
	iVar5 = func_1265(iParam0, &Var0, 0, 0);
	iVar6 = func_1150(iParam0, 0);
	if ((iVar5 > 1 && !func_741()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_612(iParam0, -2051813666))
		{
			func_341(583, 1);
		}
		else
		{
			func_341(582, 0);
		}
	}
	if (func_1494(iParam0, &Var0, *iParam1, 0, 0))
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

void func_1358(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_1709(iParam0, -949239683))
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

bool func_1359(int iParam0)
{
	if (func_125() != -1)
	{
		return false;
	}
	return func_1360(iParam0) != 0;
}

int func_1360(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1776())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1777(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_1361(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_1362(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1776())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1361(iVar0))
		{
			if (func_793(func_1777(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_1363(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1778(48);
	func_222(0, -1);
}

bool func_1364(int iParam0)
{
	if (func_125() != -1)
	{
		return false;
	}
	return func_120((*Global_1347702)[iParam0]->f_15, 1);
}

int func_1365(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_1366(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_1367(int iParam0)
{
	if (func_125() != -1)
	{
		return false;
	}
	return func_120((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_1368(int iParam0)
{
	if (func_125() != -1)
	{
		return false;
	}
	if (!func_238(iParam0))
	{
		return false;
	}
	return func_1275((*Global_1347702)[iParam0]->f_15);
}

int func_1369()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_793(func_1779(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1370(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_158() && (func_1368(38) || func_1364(38)))
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
			if (func_158() && (func_1368(39) || func_1364(39)))
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
			iVar9 = func_1780(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_158() && (func_1368(41) || func_1364(41)))
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
			if (func_158() && (func_1368(49) || func_1364(49)))
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
			iVar9 = func_1780(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1781(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1782(iParam0, iVar13, iVar14))
	{
	}
	if (func_1783(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1784(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1785(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1786(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1787(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_1371(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_1372(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_158() && (func_1368(38) || func_1364(38)))
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
			if (func_158() && (func_1368(39) || func_1364(39)))
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
			if (func_158() && (func_1368(49) || func_1364(49)))
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
		if (func_158() && (func_1368(38) || func_1364(38)))
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
			func_1788(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1788(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_1541(_create_var_string(2, sVar0), _create_var_string(2, func_1789(func_1366(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1788(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1788(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_158() && (func_1368(39) || func_1364(39)))
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
			func_1788(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1788(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_158() && (func_1368(49) || func_1364(49)))
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
			func_1788(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1788(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1788(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1788(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_1373(int iParam0, int iParam1)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

void func_1374(int iParam0)
{
	if (!func_169(iParam0))
	{
		return;
	}
	func_1790(iParam0);
	func_1791(iParam0);
}

int func_1375(int iParam0, bool bParam1)
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
	if (func_278(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1792(iVar0) || func_1484(iVar0))
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

int func_1376(int iParam0, bool bParam1)
{
	if (!func_278(iParam0, 0))
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

void func_1377(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_1758(iParam0))
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

bool func_1378(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_1185(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1793((386 + iVar28), 1);
			if (func_967(iParam0, &Var0, iVar5, 0))
			{
				if (func_1471(iParam0, &Var6, iVar5))
				{
					Var29 = { func_669(iParam0, Var0, iVar5, 0) };
					func_977(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_926(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_1379(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1794(iParam0, iParam1);
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

bool func_1379(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_1381(iParam0))
	{
		return false;
	}
	if (!func_926(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_1380(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_1376(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_125() == -1)
		{
			func_1377(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1795(iVar0);
			}
		}
		if (!func_1494(iParam0, &uVar1, 1, 0, 0))
		{
			func_1774(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1796(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_1378(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_1378(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_1378(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_202())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1797(iVar0))
				{
					func_1378(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_1378(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_314(Global_35, 2, 0, 1);
				if ((((func_1758(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_40(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_1758(iVar7) && func_40(24))
				{
					if (!func_1378(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_1378(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_1378(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_341(480, 1);
	}
	return true;
}

bool func_1381(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_1382(int iParam0, int iParam1, int iParam2)
{
	if (!func_1381(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_1758(iVar4))
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
	if (func_793(611073244, 1, 0) && iParam2 == -897553835)
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
		func_1414(func_1798(iParam0), func_1154(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_125() == -1)
		{
			if (func_120((*Global_1835011)[14]->f_1, 1))
			{
				func_341(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_926(0))
	{
		if (func_1379(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_1419(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_1383(int iParam0)
{
	if ((iParam0 == -615217896 && !func_1799()) || iParam0 != -615217896)
	{
		if (func_908(Global_35, iParam0, &uVar0))
		{
			func_957(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_746();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_746();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_746();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_1404();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_1402();
			break;
	}
}

void func_1384(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_1402();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_1403();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_1404();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_1405();
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
			func_746();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1800();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1801();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_1385(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_1386(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_1387(int iParam0)
{
	bVar0 = func_612(iParam0, -2017733358);
	if (func_1802() < 3)
	{
		if (bVar0)
		{
			if (func_1804(func_1803(iParam0), iParam0))
			{
				func_1414(79, func_1154(func_1803(iParam0)), 1);
			}
			else
			{
				func_1414(78, func_1154(func_1803(iParam0)), 1);
			}
		}
		else
		{
			func_1414(80, func_1154(func_1805(iParam0)), 1);
		}
	}
}

bool func_1388()
{
	if (((((func_1806(839908568, 400) || func_1806(-1134030454, 400)) || func_1806(623353496, 400)) || func_1806(-344413337, 400)) || func_1806(-1664948962, 400)) || func_1806(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_1389(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_1807(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1808(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_1809(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_1390(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_1370(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_1372(51, 0, 0, 0, 0, -1, 0);
			func_1810(8192);
			break;
		case 581047644:
			func_1370(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_1372(51, 0, 0, 0, 0, -1, 0);
			func_1810(524288);
			break;
		case -644199619:
			func_1370(39, 0, 0, 0, 0, 0, 1, 0);
			func_1372(39, 0, 0, 0, 0, -1, 0);
			func_1811(16);
			break;
		case 684296857:
			func_1370(41, 0, 0, 0, 0, 0, 1, 0);
			func_1372(41, 0, 0, 0, 0, -1, 0);
			func_1812(8);
			break;
		case 466137807:
			func_1370(49, 0, 0, 0, 0, 0, 1, 0);
			func_1372(49, 0, 0, 0, 0, -1, 0);
			func_1813(16);
			break;
		case -1087522507:
			func_1370(43, 0, 0, -1791518714, func_1814(1), 0, -1, 0);
			func_1815(1);
			break;
		case -405829000:
			func_1370(43, 0, 0, -2087881550, func_1814(2), 0, -1, 0);
			func_1815(2);
			break;
		case 378660860:
			func_1370(43, 0, 0, 1908068621, func_1814(4), 0, -1, 0);
			func_1815(4);
			break;
		case 1566111097:
			func_1370(43, 0, 0, 1611247019, func_1814(8), 0, -1, 0);
			func_1815(8);
			break;
		case 1276007140:
			func_1370(43, 0, 0, 1319635688, func_1814(16), 0, -1, 0);
			func_1815(16);
			break;
	}
}

void func_1391(int iParam0)
{
	if (func_1816() == 1)
	{
		if (func_1364(39))
		{
			func_341(342, 0);
		}
		else
		{
			func_341(343, 0);
			func_1811(1);
		}
	}
	if (func_1816() >= 30)
	{
		func_341(344, 0);
	}
	func_1370(39, 0, 0, 0, 0, 0, -1, 0);
	func_1372(39, 0, 0, func_1816(), 30, 1, 0);
}

void func_1392(int iParam0)
{
	if (func_1817() == 1)
	{
		if (func_1364(49))
		{
			func_341(409, 0);
		}
		else
		{
			func_341(410, 0);
			func_1813(1);
		}
	}
	if (func_1817() >= 10)
	{
		func_341(411, 0);
	}
	func_1370(49, 0, 0, 0, 0, 0, -1, 0);
	func_1372(49, 0, 0, func_1817(), 10, 1, 0);
}

void func_1393(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_341(437, 0);
			func_341(440, 0);
			func_1818(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_1370(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_1372(51, 0, 0, sVar0, func_1780(-949689219, 20), 1, 0);
			func_1810(1);
			func_1819(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1818(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_1370(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_1372(51, 0, 0, sVar0, func_1780(-1248968496, 20), 1, 0);
			func_1810(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1818(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_1370(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_1372(51, 0, 0, sVar0, func_1780(1706369307, 20), 1, 0);
			func_1810(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1818(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_1370(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_1372(51, 0, 0, sVar0, func_1780(1520110311, 20), 1, 0);
			func_1810(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_341(438, 0);
			func_1818(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_1370(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_1372(51, 0, 0, sVar0, func_1780(-1992824800, 20), 1, 0);
			func_1810(32768);
			break;
		default:
			func_341(439, 0);
			break;
	}
}

void func_1394()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_1395(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_125() == -1)
	{
		if (!func_1364(43))
		{
			if (iParam0 == 281887510)
			{
				func_341(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_341(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_341(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_341(400, 0);
			}
		}
		else if (func_612(iParam0, 412399755))
		{
			func_1820(-1791518714);
			if (func_1821() == 0)
			{
				func_222(0, 10);
				iVar1 = func_1822(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1823(iParam0) < func_1824(iParam0))
					{
						func_1370(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_1372(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_1364(44))
		{
			if (iParam0 == -222563712)
			{
				func_341(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_341(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_341(401, 0);
			}
		}
		else if (func_612(iParam0, 709057512))
		{
			func_1820(-2087881550);
			if (func_1821() == 1)
			{
				func_222(0, 10);
				iVar1 = func_1822(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1823(iParam0) < func_1824(iParam0))
					{
						func_1370(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_1372(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_1364(45))
		{
			if (iParam0 == 2116770557)
			{
				func_341(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_341(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_341(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_341(398, 0);
			}
		}
		else if (func_612(iParam0, -1478961327))
		{
			func_1820(1908068621);
			if (func_1821() == 2)
			{
				func_222(0, 10);
				iVar1 = func_1822(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1825(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1826(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1778(48);
					}
					if (func_1823(iParam0) < func_1824(iParam0))
					{
						func_1370(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_1372(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1823(iParam0) < func_1824(iParam0))
					{
						func_1370(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_1372(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_1364(46))
		{
			if (iParam0 == 2085530337)
			{
				func_341(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_341(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_341(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_341(406, 0);
			}
		}
		else if (func_612(iParam0, -1238404098))
		{
			func_1820(1611247019);
			if (func_1821() == 3)
			{
				func_222(0, 10);
				iVar1 = func_1822(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1823(iParam0) < func_1824(iParam0))
					{
						func_1370(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_1372(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_1364(47))
		{
			if (iParam0 == -1521783510)
			{
				func_341(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_341(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_341(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_341(403, 0);
			}
		}
		else if (func_612(iParam0, 1160548794))
		{
			func_1820(1319635688);
			if (func_1821() == 4)
			{
				func_222(0, 10);
				iVar1 = func_1822(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1823(iParam0) < func_1824(iParam0))
					{
						func_1370(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_1372(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_1396(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1825(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1826(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1778(48);
		}
	}
}

void func_1397(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_793(func_1827(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1828(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1829(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_1398(int iParam0, int iParam1, int iParam2)
{
	if (func_125() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_1389(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_1389(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_1389(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_1389(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_1389(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_1389(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_1389(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_1389(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_1389(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_1389(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_1389(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_1389(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_1389(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1830())
			{
				func_1389(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_1389(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_1389(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_1389(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_1389(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_1389(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_1389(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_1389(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_1389(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_1389(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_1389(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_1389(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_1389(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_1399(int iParam0)
{
	if (func_1364(41))
	{
		func_341(363, 0);
	}
	else
	{
		func_341(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1831(-1865241121);
			func_1832(-642026005);
			func_1833(-642026005);
			func_222(0, 10);
			break;
		case -2108314374:
			func_1831(2117142684);
			func_1832(-940584364);
			func_1833(-940584364);
			func_222(0, 10);
			break;
		case -1193798153:
			func_1831(-1409326024);
			func_1832(1972645282);
			func_1833(1972645282);
			func_222(0, 10);
			break;
		case -787702678:
			func_1831(-641744968);
			func_1832(1667205433);
			func_1833(1667205433);
			func_222(0, 10);
			break;
		case -804542901:
			func_1831(-946988203);
			func_1832(1362715885);
			func_1833(1362715885);
			func_222(0, 10);
			break;
		case -1696275132:
			func_1831(-646136018);
			func_1832(1053540370);
			func_1833(1053540370);
			func_222(0, 10);
			break;
		case -161595323:
			func_1831(-955835837);
			func_1832(-1100103852);
			func_1833(-1100103852);
			func_222(0, 10);
			break;
		case -1114363619:
			func_1831(-179276075);
			func_1832(-1409869209);
			func_1833(-1409869209);
			func_222(0, 10);
			break;
		case -368407134:
			func_1831(-492711560);
			func_1832(-1760235357);
			func_1833(-1760235357);
			func_222(0, 10);
			break;
		case 1997759228:
			func_1831(1764383959);
			func_1832(-138366827);
			func_1833(-138366827);
			func_222(0, 10);
			break;
		case 1265573293:
			func_1831(317501533);
			func_1832(-1261163843);
			func_1833(-1261163843);
			func_222(0, 10);
			break;
		case -1030441283:
			func_1831(817753087);
			func_1832(-963523016);
			func_1833(-963523016);
			func_222(0, 10);
			break;
		case -1490884871:
			func_1831(576606016);
			func_1832(560825326);
			func_1833(560825326);
			func_222(0, 10);
			break;
		case -395458616:
			func_1831(814934957);
			func_1832(858269539);
			func_1833(858269539);
			break;
	}
}

void func_1400(int iParam0, int iParam1)
{
	func_1770(iParam0, iParam1, &uVar0);
}

bool func_1401(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_314(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_314(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1210("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_980(&Var3, iVar2, iVar0, iVar1))
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
						func_981(iVar0);
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

void func_1402()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_1403()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_1404()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_1405()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_1406(int iParam0, int iParam1, bool bParam2)
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

void func_1407(int iParam0, bool bParam1)
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
	func_1788(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_1408(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_1409(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_1410(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_1411(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_1412(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_1413(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

void func_1414(int iParam0, int iParam1, bool bParam2)
{
	func_756(iParam0, &iVar0, &iVar1);
	if (!func_757(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1301(iParam0, 1024))
	{
		return;
	}
	func_758(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_1415(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_756(iParam0, &iVar0, &iVar1);
	if (!func_757(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1301(iParam0, 1024))
	{
		return;
	}
	func_758(iVar0, iVar1);
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

int func_1416()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1776())
	{
		return func_1417();
	}
	iVar4 = (func_1776() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1776())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1834(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1777(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_1417()
{
	iVar0 = get_random_int_in_range(0, func_1776());
	return func_1777(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_1418(int iParam0)
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

bool func_1419(int iParam0, int iParam1, int iParam2)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_1185(iParam0, 0, 1) };
	Var5 = { func_669(iParam0, Var0, Var0.f_4, 0) };
	return func_968(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_1420(int iParam0)
{
	if (func_125() != -1)
	{
		return;
	}
	switch (func_339(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1156(81053684, 0) <= 0)
			{
				func_94(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_94(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_754(iParam0);
			if (func_117(iVar0))
			{
				func_1835(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_94(30, iParam0, 0, 0, 0);
			}
			if (func_1171() == -2125499975 || func_1171() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_94(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_1171() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_94(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_824(-525676072, 0))
			{
				if (func_1836(-525676072, &iVar1))
				{
					func_94(33, iVar1, 0, 0, 0);
				}
			}
			func_94(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1198(99217379))
		{
			func_957(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_1374(24);
		if (func_1401(&iVar2, 0))
		{
			func_1378(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_1421(int iParam0)
{
	if (func_612(iParam0, 943695443))
	{
		func_1837(0, iParam0);
	}
	else if (func_612(iParam0, -2096528786))
	{
		func_1837(1, iParam0);
	}
	else if (func_612(iParam0, -1094167013))
	{
		func_1837(2, iParam0);
	}
	else if (func_612(iParam0, 1936654645))
	{
		func_1837(3, iParam0);
	}
	else if (func_612(iParam0, 1306489306))
	{
		func_1837(4, iParam0);
	}
	else if (func_612(iParam0, 435762317))
	{
		func_1837(5, iParam0);
	}
	else if (func_612(iParam0, 1259363210))
	{
		func_1837(6, iParam0);
	}
	else if (func_612(iParam0, 881398259))
	{
		func_1837(7, iParam0);
	}
	else if (func_612(iParam0, -541549214))
	{
		func_1837(8, iParam0);
	}
	else if (func_612(iParam0, 130796156))
	{
		func_1837(-1, iParam0);
	}
}

int func_1422(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1838(&Var4, 1356624740);
	return func_1839(iParam0, &Var4, &uVar0, iParam1);
}

void func_1423(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_125() == -1)
			{
				if (func_120((*Global_1835011)[4]->f_1, 1))
				{
					func_341(109, 1);
				}
			}
			break;
	}
}

void func_1424(int iParam0, char* sParam1)
{
	sVar0 = func_1841(func_1840(0));
	func_1341(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1842(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_1425(var uParam0, int iParam1)
{
	if (func_125() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1347(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_1348(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1426(int iParam0, int iParam1, int iParam2)
{
	if (func_125() == -1)
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

bool func_1427(int iParam0)
{
	switch (func_339(iParam0))
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

void func_1428(var uParam0)
{
	if (Global_1914319->f_19461.f_1 != 0)
	{
		if (Global_1914319->f_19461.f_179)
		{
			func_857(*uParam0, 0);
		}
		else
		{
			func_857(*uParam0, func_1326(Global_1914319->f_19461.f_1));
		}
	}
	if (!func_1843(uParam0))
	{
		return;
	}
	func_1844((get_control_normal(2, -771458680) * -1f), get_control_normal(2, -1450761377));
	func_1845(&(Global_1914319->f_19461.f_184), &(Global_1914319->f_19461.f_2.f_6), &(Global_1914319->f_19461.f_187), &(Global_1914319->f_19461.f_190), &(Global_1914319->f_19461.f_191), &(Global_1914319->f_19461.f_192), &(Global_1914319->f_19461.f_193), Global_1914319->f_19461.f_182, Global_1914319->f_19461.f_183, -10f, 10f, -10f, 10f);
	set_cam_params(*uParam0, Global_1914319->f_19461.f_184, Global_1914319->f_19461.f_187, Global_1914319->f_19461.f_2.f_9, 0, 1, 1, 2, 0, 0);
}

void func_1429(var uParam0)
{
	if (Global_1914319->f_19461.f_179)
	{
		set_cam_params(*uParam0, Global_1914319->f_19461.f_2, Global_1914319->f_19461.f_2.f_3, Global_1914319->f_19461.f_2.f_9, 300, 28, 28, 2, 1, 0);
		Global_1914319->f_19461.f_179 = 0;
		func_856(0);
		func_857(*uParam0, func_1326(Global_1914319->f_19461.f_1));
	}
	else
	{
		set_cam_params(*uParam0, *Global_1914319->f_19461.f_22[0], Global_1914319->f_19461.f_22[0]->f_3, Global_1914319->f_19461.f_22[0]->f_9, 300, 28, 28, 2, 1, 0);
		Global_1914319->f_19461.f_179 = 1;
		func_857(*uParam0, 0);
	}
}

bool func_1430(var uParam0, int iParam1)
{
	if (_0x603ac35fd4602c76(*uParam0))
	{
		uParam0->f_2 = 297708565;
		uParam0->f_3 = func_370(iParam1);
		if (uParam0->f_3 == 0)
		{
			return false;
		}
		if (_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_1431(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			vVar0 = { 0.2417f, 1.0822f, 0.4057f };
			break;
		case 2:
			vVar0 = { 0.0295f, 0.905f, 0.6256f };
			break;
		case 3:
			vVar0 = { -0.0468f, 1.5582f, -0.1943f };
			break;
		case 4:
			vVar0 = { 0.784f, 0.8018f, -0.5943f };
			break;
		case 5:
			vVar0 = { -0.6714f, 1.0141f, 0.0256f };
			break;
		case 6:
			vVar0 = { 0.0969f, 1.2198f, 0.4057f };
			break;
		case 7:
			vVar0 = { 0.3044f, 1.3972f, 0.4333f };
			break;
		case 8:
			vVar0 = { -0.6609f, 1.3675f, -0.3927f };
			break;
		case 9:
			vVar0 = { -0.1092f, 0.9631f, 0.3073f };
			break;
		case 10:
			vVar0 = { -0.1825f, 1.0714f, 0.0057f };
			break;
		case 11:
			vVar0 = { -0.7371f, 0.6329f, 0.2057f };
			break;
		case 12:
			vVar0 = { 0.6714f, 1.0141f, 0.0256f };
			break;
		case 0:
		default:
			vVar0 = { 0f, 0f, 0f };
			break;
	}
	return vVar0;
}

Vector3 func_1432(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			vVar0 = { 0.2888f, 0.0967f, 0.395f };
			break;
		case 2:
			vVar0 = { 0.2724f, -0.3441f, 0.63f };
			break;
		case 3:
			vVar0 = { 0.21f, 0.19f, -0.4f };
			break;
		case 4:
			vVar0 = { 0.23f, 0.18f, -0.69f };
			break;
		case 5:
			vVar0 = { 0.2853f, -0.0589f, 0.01f };
			break;
		case 6:
			vVar0 = { 0.2371f, -0.1028f, 0.48f };
			break;
		case 7:
			vVar0 = { 0.4475f, 0.0964f, 0.275f };
			break;
		case 8:
			vVar0 = { 0.1719f, 0.2036f, -0.45f };
			break;
		case 9:
			vVar0 = { 0.3872f, -0.6841f, 0.425f };
			break;
		case 10:
			vVar0 = { 0.296f, -0.186f, -0.105f };
			break;
		case 11:
			vVar0 = { 0.2198f, 0.0241f, -0.105f };
			break;
		case 12:
			vVar0 = { 0.2853f, 0.0589f, 0.01f };
			break;
		case 0:
		default:
			vVar0 = { 0.4866f, -0.6752f, -0.1223f };
			break;
	}
	return vVar0;
}

Vector3 func_1433(vector3 vParam0, vector3 vParam3)
{
	vVar0 = { func_1846(vParam0, vParam3, 1065353216) };
	vVar3 = { asin(vVar0.z), 0f, atan2(-vVar0.x, vVar0.y) };
	return vVar3;
}

bool func_1434(float fParam0, int iParam1, int iParam2, int iParam3)
{
	Var0 = &Global_1914319->f_16934[iParam1];
	if (!func_1430(&Var0, iParam2))
	{
		return false;
	}
	Var0.f_2 = 1059891245;
	Var0.f_3 = iParam3;
	if (!_datafile_get_float(fParam0, &Var0))
	{
		return false;
	}
	return true;
}

float func_1435(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			fVar0 = 43.9f;
			break;
		case 2:
			fVar0 = 38.1f;
			break;
		case 3:
			fVar0 = 51.2f;
			break;
		case 4:
			fVar0 = 40f;
			break;
		case 5:
			fVar0 = 36.6f;
			break;
		case 6:
			fVar0 = 37.8f;
			break;
		case 7:
			fVar0 = 51.3f;
			break;
		case 8:
			fVar0 = 51.3f;
			break;
		case 9:
			fVar0 = 51.3f;
			break;
		case 10:
			fVar0 = 43.9f;
			break;
		case 11:
			fVar0 = 44.5f;
			break;
		case 12:
			fVar0 = 44.9f;
			break;
		case 0:
		default:
			fVar0 = 51.3f;
			break;
	}
	return fVar0;
}

float func_1436(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			fVar0 = 4f;
			break;
		case 2:
			fVar0 = 3.2f;
			break;
		case 3:
			fVar0 = 1f;
			break;
		case 4:
			fVar0 = 4f;
			break;
		case 5:
			fVar0 = 2f;
			break;
		case 6:
			fVar0 = 2f;
			break;
		case 7:
			fVar0 = 2f;
			break;
		case 8:
			fVar0 = 2f;
			break;
		case 9:
			fVar0 = 2f;
			break;
		case 10:
			fVar0 = 1.8f;
			break;
		case 11:
			fVar0 = 3f;
			break;
		case 12:
			fVar0 = 4f;
			break;
		case 0:
		default:
			fVar0 = 1.5f;
			break;
	}
	return fVar0;
}

float func_1437(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			fVar0 = 1f;
			break;
		case 2:
			fVar0 = 0.79f;
			break;
		case 3:
			fVar0 = 1.4f;
			break;
		case 4:
			fVar0 = 1.2f;
			break;
		case 5:
			fVar0 = 0.95f;
			break;
		case 6:
			fVar0 = 1.1f;
			break;
		case 7:
			fVar0 = 1.3f;
			break;
		case 8:
			fVar0 = 1.4f;
			break;
		case 9:
			fVar0 = 0.85f;
			break;
		case 10:
			fVar0 = 0.95f;
			break;
		case 11:
			fVar0 = 0.8f;
			break;
		case 12:
			fVar0 = 0.95f;
			break;
		case 0:
		default:
			fVar0 = 2f;
			break;
	}
	return fVar0;
}

struct<10> func_1438(int iParam0)
{
	Var0 = 1065353216;
	Var0.f_1 = 1056964608;
	Var0.f_2 = 1132462080;
	Var0.f_3 = 1108082688;
	Var0.f_4 = 1084227584;
	Var0.f_5 = 1152319488;
	Var0.f_6 = 1;
	Var0.f_8 = 1;
	Var0 = Global_1914319->f_19461.f_22[iParam0]->f_10;
	Var0.f_1 = 1f;
	Var0.f_2 = 64f;
	Var0.f_3 = 35f;
	Var0.f_4 = 6f;
	Var0.f_5 = 120f;
	Var0.f_6 = 1;
	Var0.f_7 = 0;
	Var0.f_8 = 0;
	Var0.f_9 = 0;
	return Var0;
}

int func_1439(vector3 vParam0)
{
	iVar0 = func_1847(vParam0, 0f, 0f, 0, 2);
	return func_1847(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

int func_1440(int iParam0)
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

int func_1441()
{
	return Global_40.f_8863.f_148;
}

int func_1442(int iParam0)
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

void func_1443(int iParam0, bool bParam1, int iParam2)
{
	if (!func_232(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_1275(iParam0) && !func_310(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_876(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_1275(iParam0))
	{
		iParam2 = -1;
	}
	if (func_737(iParam0) == 3 || (func_737(iParam0) == 1 && _0x01f4d242765c6b24(func_876(iParam0))))
	{
		func_1848(func_233(iParam0), func_876(iParam0), iParam2);
		if ((!func_232(Global_1572864->f_8) && !func_742(0, 1, 0)) && !func_10(&Global_1935630, 32768))
		{
			iVar0 = func_1849(iParam0);
			if (iVar0 != -1)
			{
				func_1850(0);
			}
			else if (func_233(iParam0) == 8)
			{
				iVar0 = func_1851();
				if (iVar0 != -1)
				{
					func_1850(0);
				}
			}
		}
	}
	func_1852(iParam0, 0);
	if (func_1853(0) == iParam0)
	{
		func_322(1);
		func_1854(0);
		func_1855(1);
	}
	func_1856(iParam0, 1);
	func_1857(iParam0);
}

int func_1444(int iParam0)
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

void func_1445(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_450(iParam0);
	*uParam1 = func_451(iParam0);
	*uParam2 = func_1858(iParam0);
}

bool func_1446(int iParam0)
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

bool func_1447(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_1448(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return (*Global_1888801)[iParam0]->f_15;
}

float func_1449()
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

bool func_1450()
{
	return Global_1894899 & 2 != 0;
}

bool func_1451(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_1859(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_1452(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_1860(iParam0))
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

int func_1453(int iParam0)
{
	return func_1861(iParam0);
}

bool func_1454(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_884(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_1455(int iParam0)
{
	if (!func_232(iParam0))
	{
		return -1;
	}
	return func_1862(iParam0);
}

bool func_1456(int iParam0, int iParam1)
{
	uVar0 = 15;
	if (!func_1506(iParam0, iParam1, &uVar0, &uVar31, 1, 0))
	{
		return false;
	}
	return true;
}

bool func_1457(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	return func_339(iParam0) == -999503751;
}

bool func_1458(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (func_612(iParam0, 866047851))
	{
		return true;
	}
	return false;
}

bool func_1459(int iParam0)
{
	return func_826(iParam0) == -1977020088;
}

bool func_1460(int iParam0, int iParam1, bool bParam2)
{
	func_658();
	iVar1 = 0;
	if (!func_755(&(Global_1946804->f_1378), &bVar0, 0, iParam1, 1, 1))
	{
		return false;
	}
	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 2;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (is_ped_a_player(iParam0))
	{
		iParam0 = 0;
	}
	else
	{
		iVar2 |= 1;
	}
	func_94(1, iVar1, iVar2, iParam0, 0);
	if (func_125() != -1 && !bVar0)
	{
		func_94(4, 0, 0, iParam0, 0);
		func_94(5, 0, 0, iParam0, 0);
		func_94(6, 0, 0, iParam0, 0);
	}
	return true;
}

bool func_1461(int iParam0, int iParam1, bool bParam2)
{
	func_658();
	iVar1 = 0;
	if (!func_755(&(Global_1946804->f_1378), &bVar0, iParam1, -1, 1, 1))
	{
		return false;
	}
	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 2;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (is_ped_a_player(iParam0))
	{
		iParam0 = 0;
	}
	else
	{
		iVar2 |= 1;
	}
	func_94(1, iVar1, iVar2, iParam0, 0);
	if (func_125() != -1 && !bVar0)
	{
		func_94(4, 0, 0, iParam0, 0);
		func_94(5, 0, 0, iParam0, 0);
		func_94(6, 0, 0, iParam0, 0);
	}
	return true;
}

bool func_1462(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_1185(iParam1, 1, 0) };
		iParam3 = func_1312(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return false;
		}
	}
	if (!func_1172(iParam1, iParam2, func_656(iParam3, 1), 1, 1))
	{
		return false;
	}
	iVar5 = func_1863(iParam3);
	if (Global_1946804->f_2535 != iVar5)
	{
		if (Global_1946804->f_2535 != 0)
		{
			func_536(Global_1946804->f_2535);
			func_537(0);
			Global_1946804->f_2535 = 0;
		}
		if (iVar5 != 0 && func_1271(iVar5))
		{
			func_1736(0);
			Global_1946804->f_2535 = iVar5;
		}
	}
	iVar6 = 1026;
	if (is_ped_a_player(iParam0))
	{
		func_94(1, 0, iVar6, 0, 0);
	}
	else
	{
		iVar6 |= 1;
		func_94(1, 0, iVar6, iParam0, 0);
	}
	func_336(1);
	return true;
}

void func_1463(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	if (func_1021(iParam1))
	{
		if (iParam1 == -377364164)
		{
			func_1592(iParam2);
			_0xa5bae410b03e7371(iParam2, 0, 0, 1);
			func_1864(uParam3, -377364164);
			func_993(iParam2);
			func_1594(iParam2, uParam4);
			_update_ped_variation(iParam2, false, true, true, true, true);
		}
		else if (iParam1 == 357708345)
		{
			func_1592(iParam2);
			_0xa5bae410b03e7371(iParam2, 0, 0, 1);
			func_1865(uParam3, 357708345);
			func_993(iParam2);
			func_1594(iParam2, uParam4);
			_update_ped_variation(iParam2, false, true, true, true, true);
		}
		else
		{
			bVar0 = true;
			func_1866(uParam3, iParam1);
		}
		func_1868(func_1036(uParam0), func_1867(0));
	}
	else
	{
		bVar0 = true;
		func_1869(uParam4, iParam1);
	}
	if (bVar0)
	{
		func_1007(iParam2, uParam3, uParam4, 0);
	}
}

float func_1464(var uParam0, int iParam1)
{
	fVar1 = 1f;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		bVar2 = false;
		switch (uParam0->f_141[iVar0]->f_1)
		{
			case 1:
				if (iParam1 == uParam0->f_141[iVar0]->f_2)
				{
					return uParam0->f_141[iVar0]->f_6;
				}
				break;
			case 2:
				if (func_826(iParam1) == uParam0->f_141[iVar0]->f_3)
				{
					bVar2 = true;
				}
				break;
			case 3:
				fVar3 = to_float(func_1186(iParam1, -915411861, 1, 0, 0));
				if (uParam0->f_141[iVar0]->f_5 <= 0f)
				{
					fVar4 = (fVar3 + 1f);
				}
				else
				{
					fVar4 = uParam0->f_141[iVar0]->f_5;
				}
				if (fVar3 <= fVar4 && fVar3 >= uParam0->f_141[iVar0]->f_4)
				{
					bVar2 = true;
				}
				break;
			case 4:
				bVar2 = true;
				break;
			case 0:
				break;
		}
		if (bVar2)
		{
			fVar1 = (fVar1 * uParam0->f_141[iVar0]->f_6);
		}
		iVar0++;
	}
	return fVar1;
}

int func_1465(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_656(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_538(524288))
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

bool func_1466(int iParam0)
{
	return func_639(iParam0, &uVar0);
}

bool func_1467(int iParam0)
{
	if (!func_1188(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case -1533835920:
		case 1024854903:
		case 1077891407:
		case 1107981273:
		case 1224358974:
		case 1420417918:
		case 1426628352:
		case 1574030042:
		case 1792152856:
			return false;
	}
	return true;
}

bool func_1468(int iParam0)
{
	return func_638(iParam0, &uVar0);
}

bool func_1469(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_1209(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_1470(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_1209(0);
	*uParam1 = { func_669(iParam0, func_668(0), iParam3, 0) };
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

bool func_1471(int iParam0, var uParam1, int iParam2)
{
	if (func_1470(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

bool func_1472(int iParam0, int iParam1)
{
	if (!func_1870(iParam0))
	{
		return false;
	}
	return (Global_40.f_11029[iParam0] && iParam1) != 0;
}

int func_1473(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			switch (iParam1)
			{
				case 105:
					return 390;
				case 5:
					return 750;
				case 78:
					return 1050;
				case 28:
					return 420;
				case 76:
					return 460;
				case 69:
					return 630;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 23:
					return 390;
				case 5:
					return 480;
				case 78:
					return 840;
				case 28:
					return 750;
				case 76:
					return 790;
				case 69:
					return 590;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 23:
					return 750;
				case 105:
					return 480;
				case 78:
					return 510;
				case 28:
					return 1250;
				case 76:
					return 1000;
				case 69:
					return 320;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 23:
					return 1050;
				case 105:
					return 840;
				case 5:
					return 510;
				case 28:
					return 880;
				case 76:
					return 670;
				case 69:
					return 440;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 23:
					return 420;
				case 105:
					return 750;
				case 5:
					return 1250;
				case 78:
					return 880;
				case 76:
					return 360;
				case 69:
					return 920;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 23:
					return 460;
				case 105:
					return 790;
				case 5:
					return 1000;
				case 78:
					return 670;
				case 28:
					return 360;
				case 69:
					return 220;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 23:
					return 630;
				case 105:
					return 590;
				case 5:
					return 320;
				case 78:
					return 440;
				case 28:
					return 920;
				case 76:
					return 220;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_1474(var uParam0)
{
	return uParam0->f_2031.f_94;
}

int func_1475(int iParam0)
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

bool func_1476(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			*uParam2 = { *uParam0->f_1[iVar0] };
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1477(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*iParam1 == 0)
	{
		*iParam3 = 1;
		return false;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (iParam1->f_2 > 0)
	{
		iVar3 = func_1475(iParam0);
		if (iVar3 == -1)
		{
			*iParam3 = 2;
			return false;
		}
		iVar4 = func_82(iVar3);
		iVar6 = 0;
		while (iVar6 < iParam1->f_2)
		{
			if (!_item_database_get_shop_inventories_requirement_group_info(iVar4, *iParam1, iVar6, &Var8))
			{
				*iParam3 = 4;
				return false;
			}
			if (Var8.f_1 > 0)
			{
				iVar7 = 0;
				while (iVar7 < Var8.f_1)
				{
					Var10 = 0;
					if (!_item_database_get_shop_inventories_requirement_info(iVar4, *iParam1, iVar6, iVar7, &Var10))
					{
						*iParam3 = 3;
						return false;
					}
					if (!func_1691(iParam0, *iParam1, &Var10, &uVar5))
					{
						if (Var10.f_3)
						{
							iVar1 = Var8;
							iVar2 = 1;
							bVar0 = true;
						}
						else
						{
							iVar2 = 0;
							bVar0 = false;
						}
						else
						{
							Jump @210; //curOff = 200
							iVar1 = Var8;
							bVar0 = true;
							iVar7++;
						}
						Jump @232; //curOff = 219
						iVar1 = Var8;
						iVar2 = 0;
						bVar0 = true;
						if (bVar0)
						{
						}
						else
						{
							iVar6++;
						}
						Jump @255; //curOff = 249
						bVar0 = true;
						if (bVar0)
						{
							*uParam2 = *iParam1;
							uParam2->f_2 = iVar1;
							uParam2->f_1 = iVar1;
							if (func_125() == -1)
							{
								if (func_1204(*uParam2))
								{
									uParam2->f_4 = !func_1792(*uParam2);
								}
								else
								{
									uParam2->f_4 = iVar2;
								}
							}
							else if (func_1871(*uParam2))
							{
								uParam2->f_4 = 0;
							}
							else
							{
								uParam2->f_4 = !func_1689(*uParam2);
							}
							if (func_125() == -1)
							{
								if (!uParam2->f_4)
								{
									if (!func_1872(*iParam1) && !func_1873(*iParam1))
									{
										if (func_989(*iParam1, 1, 0))
										{
											uParam2->f_5 = 1;
										}
									}
								}
							}
							return true;
						}
						else
						{
							return false;
						}
						*iParam3 = 6;
						return false;
					}
				}
			}
		}
	}
}

int func_1478(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam2;
	iVar1 = func_1475(iParam1);
	if (iVar1 != -1 && iVar1 < 25)
	{
		iVar2 = func_1874(&(Global_20710[iVar1]->f_2), iParam0, iParam1);
		if (iVar2 >= 0)
		{
			iVar0 = (iVar0 + Global_20710[iVar1]->f_2[iVar2]->f_2);
		}
	}
	iVar3 = func_1874(&(Global_20710.f_1126), iParam0, iParam1);
	if (iVar3 >= 0)
	{
		iVar0 = (iVar0 - Global_20710.f_1126[iVar3]->f_2);
	}
	return iVar0;
}

bool func_1479(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1914319->f_17042.f_70)
	{
		if (does_entity_exist(&(Global_1914319->f_17042.f_70[iVar0])))
		{
			iVar2 = get_entity_model(&(Global_1914319->f_17042.f_70[iVar0]));
			iVar1 = func_1001(iVar2);
			if (iVar1 == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_1480(int iParam0)
{
	if (!func_928(iParam0))
	{
		return 0;
	}
	iVar0 = func_1475(iParam0);
	if (!func_1731(iVar0))
	{
		return 0;
	}
	return Global_1914319->f_3[iVar0]->f_413;
}

bool func_1481(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return false;
		case -769081407:
			return false;
		case 1902428294:
			return false;
		case -1243402388:
			return false;
		case 65931886:
			return false;
		case 1371678229:
			return false;
		case 2102263084:
			return false;
		case -272211555:
			return false;
		case -55563408:
			return false;
		case -1914506115:
			return false;
		case 802495462:
			return false;
		case 842905332:
			return false;
		case 1511551084:
			return false;
		case -1725704631:
			return false;
		case 1257427489:
			return false;
		case -659341240:
			return false;
		case 2038771525:
			return false;
		case -535599244:
			return false;
		case -389591806:
			return false;
		case 1156438275:
			return false;
		case 594312243:
			return false;
		case -978578725:
			return false;
		case -1951220140:
			return false;
		case 1460520700:
			return false;
		case 523337834:
			return false;
		case -19271249:
			return false;
		case 214175524:
			return false;
		case -1303643297:
			return false;
		case 411856831:
			return false;
		case -926815459:
			return false;
		case -1300731953:
			return false;
		case -291256376:
			return false;
		default:
			break;
	}
	return true;
}

int func_1482(int iParam0, var uParam1)
{
	iVar8 = 0;
	if (!func_1875(iParam0, func_1171()))
	{
		return 0;
	}
	Var1 = func_1705(func_1171());
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

bool func_1483(int iParam0)
{
	iVar0 = func_826(iParam0);
	return (iVar0 == -427144552 || iVar0 == 307971639);
}

bool func_1484(int iParam0)
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

bool func_1485(int iParam0)
{
	return func_826(iParam0) == 2085633299;
}

bool func_1486(int iParam0)
{
	return func_612(iParam0, -651046900);
}

bool func_1487(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (func_612(iParam0, -1227898937))
	{
		return true;
	}
	return false;
}

int func_1488(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return -1;
	}
	if (!func_612(iParam0, -1227898937))
	{
		return -1;
	}
	if (func_612(iParam0, -958604072))
	{
		return 0;
	}
	else if (func_612(iParam0, -726894473))
	{
		return 1;
	}
	else if (func_612(iParam0, -1705966655))
	{
		return 2;
	}
	else if (func_612(iParam0, -1205780639))
	{
		return 3;
	}
	else if (func_612(iParam0, -825365342))
	{
		return 4;
	}
	else if (func_612(iParam0, -580548123))
	{
		return 5;
	}
	else if (func_612(iParam0, -1536419873))
	{
		return 6;
	}
	else if (func_612(iParam0, -1306610876))
	{
		return 7;
	}
	else if (func_612(iParam0, 149872887))
	{
		return 8;
	}
	else if (func_612(iParam0, 1252156801))
	{
		return 9;
	}
	else if (func_612(iParam0, -217500080))
	{
		return 10;
	}
	else if (func_612(iParam0, -515403059))
	{
		return 11;
	}
	else if (func_612(iParam0, 387251815))
	{
		return 12;
	}
	else if (func_612(iParam0, 90594058))
	{
		return 13;
	}
	return -1;
}

void func_1489(int iParam0, int iParam1)
{
	if (!func_1876(iParam0))
	{
		return;
	}
	Global_40.f_9479[iParam0] = iParam1;
}

int func_1490(int iParam0, int iParam1, int iParam2)
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

int func_1491(int iParam0, var uParam1, int iParam2)
{
	if (!func_1731(iParam0))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (!func_1877(iParam0, &iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (func_125() == -1)
	{
		iVar1 = Global_1914319->f_3[iParam0]->f_10;
	}
	else
	{
		iVar1 = Global_1051260->f_48[iParam0]->f_16;
	}
	func_1879(iVar0, uParam1, iVar0, iParam2, func_1878(iVar1), 0, 10);
	return 1;
}

void func_1492(int iParam0)
{
	if (!func_928(iParam0))
	{
		return;
	}
	iVar0 = func_1475(iParam0);
	if (!func_1731(iVar0))
	{
		return;
	}
	Global_1914319->f_3[iVar0]->f_413 = 0;
}

int func_1493(int iParam0, int iParam1)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!_0x2bae4880dcdd560b(iParam0, iParam1))
	{
		return 0;
	}
	return _0x2e1cdc1ff3b8473e(iParam0, iParam1);
}

bool func_1494(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1149(&iParam0);
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (!func_926(0))
	{
		bParam3 = true;
	}
	if (func_1204(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_668(0) };
			Var4.f_9 = -1591664384;
			if (!func_967(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1471(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1706(iParam0, 1))
			{
				if (!func_967(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1471(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1880(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1265(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1531(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_1209(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1495(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	*uParam2 = 0;
	*uParam3 = 0;
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if ((!Global_1911914->f_1579 && func_1262(iParam0, iParam1, 1)) && !bParam5)
	{
		return 0;
	}
	if (!func_1881(iParam0, 1, iParam1, &Var0, uParam4, bParam6, iParam7, bParam8))
	{
		*uParam2 = Var0;
		*uParam3 = Var0.f_1;
		return 0;
	}
	return 1;
}

int func_1496(int iParam0, int iParam1)
{
	if (!func_278(iParam0, 0))
	{
		return -1;
	}
	if (!func_935(iParam0, iParam1, 0, 0, 0, 1))
	{
		return -1;
	}
	Var0 = { func_1185(iParam0, 1, 0) };
	if (func_1494(iParam0, &Var0, 1, 0, 1))
	{
		return -1;
	}
	Var5 = { func_1882(iParam0, Var0, Var0.f_4, 1) };
	Var5.f_13 = iParam1;
	Var5.f_12 = 1248274121;
	iVar21 = func_1883(2113164098, &Var5, 1);
	if (iVar21 == -1)
	{
		return -1;
	}
	Var22.f_1 = 1;
	func_1884(iVar21, Var22);
	Var29 = { func_1885(iParam0) };
	_0x6a0184e904cdf25e(&Var29, 1);
	return iVar21;
}

int func_1497(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	_0x78c2e029db205a3a(iParam0, iParam1, 0);
	return func_1886(iParam0, iParam1, bParam2, bParam3, iParam4);
}

void func_1498(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_278(iParam0, 0))
	{
		return;
	}
	func_1386(func_1385(-413660030), iParam1);
	if (bParam3 && iParam0 != -1199896558)
	{
		if (func_125() == -1)
		{
			if (func_612(iParam0, -1588156645))
			{
				iVar0 = func_1376(func_1375(iParam0, 0), 0);
				if (is_weapon_valid(iVar0))
				{
					func_1377(iVar0);
				}
			}
		}
		if (iParam4 == 0)
		{
			if (func_826(iParam0) == -1977020088)
			{
				if (func_1033(iParam0, 0))
				{
					func_969(iParam0, 1, 0, 1, 0);
				}
			}
			else
			{
				func_846(iParam0, iParam1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		else
		{
			func_1887(iParam0, iParam4, iParam1);
		}
	}
	Var1 = { func_1885(iParam0) };
	_0x6a0184e904cdf25e(&Var1, iParam1);
	if (func_1888(iParam0, 0))
	{
		Var1 = { func_1205(-1276738576, -1555359431) };
	}
	else if (func_1888(iParam0, 2))
	{
		Var1 = { func_1205(-1276738576, 307971639) };
	}
	else if (func_1888(iParam0, 5))
	{
		Var1 = { func_1205(-1276738576, 644069854) };
	}
	else if (func_1888(iParam0, 1))
	{
		Var1 = { func_1205(-1276738576, -97115714) };
	}
	else if (func_1888(iParam0, 3))
	{
		Var1 = { func_1205(-1276738576, -2143405780) };
	}
	else if (func_1888(iParam0, 4))
	{
		Var1 = { func_1205(-1276738576, 1455184052) };
	}
	_0x6a0184e904cdf25e(&Var1, 1);
	if (func_125() == 0)
	{
		Global_1051039 = iParam0;
		return;
	}
	if (bParam2)
	{
		if (func_1888(iParam0, 0))
		{
			func_1778(40);
		}
		else
		{
			func_1778(39);
		}
	}
	iVar10 = 0;
	if ((_item_database_fillout_item_info(iParam0, &vVar3) && vVar3.z == -1037537535) && func_908(Global_35, iParam0, &iVar10))
	{
		func_957(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 1, 0);
	}
}

struct<10> func_1499(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_1500(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_1501(int iParam0)
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

bool func_1502(int iParam0)
{
	if (!func_1889(iParam0))
	{
		return false;
	}
	return is_bit_set(Global_40.f_4283.f_307, func_1890(iParam0, 1));
}

int func_1503(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 5:
				return Global_40.f_4283.f_320;
			default:
				break;
		}
	}
	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_313;
		case 1:
			return Global_40.f_4283.f_316;
		case 2:
			return Global_40.f_4283.f_317;
		case 12:
			return Global_40.f_4283.f_315;
		case 13:
			return Global_40.f_4283.f_314;
		case 14:
			return Global_40.f_4283.f_322;
		case 3:
			return Global_40.f_4283.f_318;
		case 4:
			return Global_40.f_4283.f_319;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
			return Global_40.f_4283.f_321;
		default:
			break;
	}
	return 1;
}

void func_1504(int iParam0)
{
	if (!func_1889(iParam0))
	{
		return;
	}
	set_bit(&(Global_40.f_4283.f_307), func_1890(iParam0, 1));
}

bool func_1505()
{
	if (func_1315(-1421669656, 0, 0) == 0)
	{
		return false;
	}
	if (func_1315(-830181022, 0, 0) == 0)
	{
		return false;
	}
	if (func_1315(917695895, 0, 0) == 0)
	{
		return false;
	}
	if (func_1315(-1580595448, 0, 0) == 0)
	{
		return false;
	}
	if (func_1315(1309992709, 0, 0) == 0)
	{
		return false;
	}
	if (func_1315(1541618973, 0, 0) == 0)
	{
		return false;
	}
	return true;
}

bool func_1506(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_278(iParam0, 0))
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
		func_1891(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_1507(int iParam0, int iParam1, int iParam2)
{
	if (func_125() == 0)
	{
		return 1;
	}
	func_1892(&(Global_20710.f_1126), iParam1, iParam0, iParam2);
	iVar0 = func_1475(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	func_1893(&(Global_20710[iVar0]->f_2), iParam1, iParam0, iParam2);
	return 1;
}

void func_1508(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_1894(iParam1, iParam2);
	func_1895(iParam1, iParam4);
	func_1896(iParam1, iParam4);
	_0x2a374e6f0075ee81(func_82(iParam0), func_459(iParam1), iParam2, iParam3, iParam4);
}

void func_1509()
{
	if (Global_40.f_7748.f_1 <= 0)
	{
		return;
	}
	iVar0 = (Global_40.f_7748.f_1 - 1);
	func_946(iVar0, 0);
}

bool func_1510(int iParam0)
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

int func_1511(int iParam0)
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

void func_1512()
{
	iVar0 = 1;
	if (func_125() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1347(Global_1946804->f_1497.f_1[iVar0], iVar0, iVar1);
			iVar1++;
		}
		return;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		func_1348(Global_1946804->f_1497.f_1[iVar0], iVar0, iVar1);
		iVar1++;
	}
}

void func_1513()
{
	if (func_904() <= 3)
	{
		iVar0 = func_435();
		func_1514(&iVar0, 0, 0, 0, 2, 0, 0, 0);
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

void func_1514(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_1897(*iParam0);
	iVar1 = func_1898(*iParam0);
	iVar2 = func_1899(*iParam0);
	iVar3 = func_1900(*iParam0);
	iVar4 = func_1901(*iParam0);
	iVar5 = func_1902(*iParam0);
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
	iVar6 = func_1903(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1903(iVar1, iVar0);
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
	func_1904(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_1515(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1905(iParam1) || !func_1905(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1516(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 9)
	{
		return false;
	}
	return true;
}

bool func_1517()
{
	return Global_40.f_7748.f_6 > 0;
}

void func_1518(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		func_1907(iParam1, iParam2, &uVar0, &uVar1, 0, func_1906());
	}
}

bool func_1519(int iParam0, bool bParam1)
{
	return func_1515(func_435(), iParam0, bParam1);
}

void func_1520(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1698(iParam0))
	{
		return;
	}
	if (!func_1908(iParam1))
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
		bVar2 = (&Global_40.f_7731[iParam0] < 7 && func_1909(iParam0));
		Global_40.f_7731[iParam0]->f_3 = func_435();
		func_1910(iParam0, &iVar0, &iVar1, bVar2);
		func_1514(&(Global_40.f_7731[iParam0]->f_3), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_1521()
{
	iVar0 = 5;
	iVar1 = 6;
	iVar2 = 7;
	iVar3 = 0;
	if (func_125() == -1)
	{
		iVar4 = 0;
		while (iVar4 < 5)
		{
			func_1347(Global_1946804->f_1497.f_1[iVar0], iVar0, iVar4);
			func_1347(Global_1946804->f_1497.f_1[iVar1], iVar1, iVar4);
			func_1347(Global_1946804->f_1497.f_1[iVar2], iVar2, iVar4);
			func_1347(Global_1946804->f_1497.f_1[iVar3], iVar3, iVar4);
			iVar4++;
		}
		return;
	}
	iVar4 = 0;
	while (iVar4 < 5)
	{
		func_1348(Global_1946804->f_1497.f_1[iVar0], iVar0, iVar4);
		func_1348(Global_1946804->f_1497.f_1[iVar1], iVar1, iVar4);
		func_1348(Global_1946804->f_1497.f_1[iVar2], iVar2, iVar4);
		func_1348(Global_1946804->f_1497.f_1[iVar3], iVar3, iVar4);
		iVar4++;
	}
}

void func_1522()
{
	iVar0 = func_435();
	func_1514(&iVar0, 0, 0, 0, 2, 0, 0, 0);
	if (func_1167(0) <= 1)
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
	if (func_1167(1) <= 1)
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
	if (func_1167(2) <= 1)
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

void func_1523(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (func_1191(iParam0))
		{
			func_1911(iParam0);
		}
		iVar0++;
	}
	if (!bParam1)
	{
		return;
	}
	func_1168(Global_35, -1, -1, -1, 1);
}

int func_1524()
{
	if (func_125() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

void func_1525()
{
	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
		iVar0++;
	}
}

int func_1526(int iParam0)
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

void func_1527(int iParam0, bool bParam1, int iParam2)
{
	func_1425(&(Global_1946804->f_1378), iParam0);
	func_1426(2, iParam0, 6);
	if (bParam1)
	{
		func_129(0, 1);
	}
}

int func_1528(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_656(iParam0, 1);
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

bool func_1529(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_1209(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_1469(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_1530(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_1469(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_826(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1912(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1913(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1914(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1915(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1916(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1883(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1531(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_669(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_1209(bParam6), &Var0, 0);
	return uVar4;
}

bool func_1532()
{
	return !&Global_1911774;
}

void func_1533(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1534(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_1535(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_360(1) < iParam0)
	{
		iParam0 = func_360(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_872(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_1536(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_1341(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_1537(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_1469(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_670(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_1531(Var0.f_4, Param4, iParam8, 0);
	iVar15 = _0xe80e50bee276a54a(Var0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + Var0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			Var0.f_11 = (iVar15 - iVar14);
		}
	}
	Var16 = { func_1916(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_1883(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

bool func_1538(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1539(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_1540(int iParam0, int iParam1, int iParam2)
{
	if (!func_1539(iParam0))
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

var func_1541(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

struct<8> func_1542()
{
	StringCopy(&cVar0, "PLAYER_HORSE_NAME_DEFAULT", 64);
	iVar35 = 0;
	while (iVar35 < 10)
	{
		StringCopy(&cVar8, _get_label_text_2(&cVar0), 64);
		if (iVar35 > 0)
		{
			StringConCat(&cVar8, " ", 64);
			StringIntConCat(&cVar8, iVar35 + 1, 64);
		}
		iVar36 = 0;
		while (iVar36 < 7)
		{
			Var16 = { *Global_40.f_1095.f_1[iVar36] };
			if (are_strings_equal(&Var16, &cVar8))
			{
				iVar24[iVar35] = 1;
			}
			iVar36++;
		}
		iVar35++;
	}
	iVar35 = 0;
	while (iVar35 < 10)
	{
		if (!&iVar24[iVar35])
		{
			StringCopy(&cVar8, _get_label_text_2(&cVar0), 64);
			if (iVar35 > 0)
			{
				StringConCat(&cVar8, " ", 64);
				StringIntConCat(&cVar8, iVar35 + 1, 64);
			}
			return cVar8;
		}
		iVar35++;
	}
	return cVar0;
}

bool func_1543(char* sParam0, struct<8> Param1)
{
	if (!func_1919(func_1596(Param1), func_1917(), func_1918(), 16, sParam0))
	{
		return false;
	}
	if (get_length_of_literal_string(sParam0) >= 10 && are_strings_equal(_0xd8402b858f4ddd88(sParam0, 10), "Dummy Text"))
	{
		*sParam0 = { Param1 };
		return true;
	}
	return true;
}

void func_1544(int iParam0, var uParam1)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		_copy_memory((*uParam1)[iVar0], Global_40.f_1095.f_1[iParam0]->f_298[iVar0], 1);
		iVar0++;
	}
}

void func_1545(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		_copy_memory((*uParam0)[iVar0], Global_40.f_1095.f_3054.f_3[iVar0], 1);
		iVar0++;
	}
}

void func_1546(int iParam0, var uParam1, bool bParam2)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_226(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 57)
	{
		iVar2 = func_1920(iVar1, 1);
		iVar3 = iVar2;
		if (!func_278(iVar3, 0))
		{
		}
		else
		{
			iVar4 = uParam1[iVar1];
			if (iVar4 <= 0)
			{
			}
			else
			{
				bVar5 = func_1921(iVar0, iVar3, iVar4, bParam2, -142743235);
			}
		}
		iVar1++;
	}
}

void func_1547(var uParam0, var uParam1, var uParam2)
{
	func_1564(uParam2);
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = 0;
		iVar1 = (iVar1 + uParam0[iVar0]);
		iVar1 = (iVar1 + uParam1[iVar0]);
		iVar1 = func_1490(iVar1, 0, 10);
		(*uParam2)[iVar0] = iVar1;
		iVar0++;
	}
}

void func_1548(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		_copy_memory(Global_40.f_1095.f_3054.f_3[iVar0], (*uParam0)[iVar0], 1);
		iVar0++;
	}
}

void func_1549(int iParam0, var uParam1)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		_copy_memory(Global_40.f_1095.f_1[iParam0]->f_298[iVar0], (*uParam1)[iVar0], 1);
		iVar0++;
	}
}

void func_1550(int iParam0, var uParam1)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		_copy_memory((*uParam1)[iVar0], Global_40.f_1095.f_1[iParam0]->f_356[iVar0], 5);
		iVar0++;
	}
}

void func_1551(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		_copy_memory((*uParam0)[iVar0], Global_40.f_1095.f_3054.f_61[iVar0], 5);
		iVar0++;
	}
}

int func_1552(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (uParam0[iVar1] != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1553(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		_copy_memory(Global_40.f_1095.f_3054.f_61[iVar0], (*uParam0)[iVar0], 5);
		iVar0++;
	}
}

void func_1554(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_225(iParam0))
	{
		return;
	}
	iVar0 = func_226(iParam0);
	func_1922(iVar0);
}

void func_1555(int iParam0, var uParam1)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		_copy_memory(Global_40.f_1095.f_1[iParam0]->f_356[iVar0], (*uParam1)[iVar0], 5);
		iVar0++;
	}
}

void func_1556(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_1557(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_1558(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1618(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1618(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1923(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_976(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1635(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1559(int iParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (func_1579(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	if (is_player_dead(iVar0))
	{
	}
	if (!is_entity_a_mission_entity(iParam0))
	{
		set_entity_as_mission_entity(iParam0, false, true);
	}
	_0xbcc76708e5677e1d(iParam0, 0);
	_0x931b241409216c1f(Global_35, iParam0, 0);
	_0xb8b6430ead2d2437(iParam0, 130495496);
	iVar1 = get_entity_model(iParam0);
	iVar2 = _get_default_relationship_group_hash(iVar1);
	set_ped_relationship_group_hash(iParam0, iVar2);
	set_entity_invincible(iParam0, false);
	_0xf74e134f40192884(iParam0, 1);
	_0xfd6943b6df77e449(iParam0, false);
	_0xdf93973251fb2ca5(iVar0, 1);
	request_ped_visibility_tracking(iParam0);
	_0xaeb97d84cdf3c00b(iParam0, 0);
	if (func_1924(iParam0))
	{
		iVar3 = func_1925(iParam0);
		if (func_1926(iVar3))
		{
			set_ped_config_flag(iParam0, 324, true);
		}
	}
	set_ped_config_flag(iParam0, 211, true);
	set_ped_config_flag(iParam0, 208, true);
	set_ped_config_flag(iParam0, 209, true);
	set_ped_config_flag(iParam0, 400, true);
	set_ped_config_flag(iParam0, 297, true);
	set_ped_config_flag(iParam0, 136, false);
	set_ped_config_flag(iParam0, 312, false);
	set_ped_config_flag(iParam0, 113, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 277, true);
	set_ped_config_flag(iParam0, 319, true);
	set_ped_config_flag(iParam0, 6, true);
	set_animal_tuning_bool_param(iParam0, 25, false);
	set_animal_tuning_bool_param(iParam0, 24, false);
}

void func_1560()
{
	if (func_225(0))
	{
		func_1927(0);
	}
	if (func_225(1))
	{
		func_1927(1);
	}
	if (func_225(5))
	{
		func_1927(5);
	}
	if (func_225(6))
	{
		func_994(6);
	}
}

void func_1561(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_1562(int iParam0, struct<2> Param1)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1023(iParam0, Param1))
	{
	}
	if (!func_1025(iParam0, Param1.f_1))
	{
	}
}

void func_1563(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1928((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_1564(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1565(var uParam0)
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

void func_1566(var uParam0)
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

void func_1567(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1568(int iParam0, var uParam1)
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

void func_1569(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1570(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1571(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

bool func_1572(var uParam0)
{
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = (*uParam0)[iVar1]->f_3;
		if (does_entity_exist(iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

void func_1573(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	if (!func_137(iParam1, 0))
	{
		return;
	}
	iVar3 = _inventory_get_ped_inventory_id(iParam1);
	iVar1 = 4;
	while (iVar1 <= 6)
	{
		if (_0x608bc6a6aacd5036((*uParam2)[iVar2], iParam1, iVar1, 0))
		{
			iVar0 = (*uParam2)[iVar2]->f_3;
			if (does_entity_exist(iVar0))
			{
				if ((is_entity_a_ped(iVar0) && is_ped_human(get_ped_index_from_entity_index(iVar0))) && !is_entity_a_mission_entity(iVar0))
				{
					set_entity_as_mission_entity(iVar0, true, false);
					delete_entity(&iVar0);
				}
				else
				{
					detach_entity(iVar0, false, true);
					set_ped_config_flag(get_ped_index_from_entity_index(iVar0), 223, true);
					if (_0x9a100f1cf4546629(iVar0) || _0xc346a546612c49a9(iVar0))
					{
						iVar4 = func_1929(iVar0);
						if (!func_278(iVar4, 0))
						{
							iVar4 = func_1930(iVar0);
						}
					}
					else
					{
						iVar4 = func_1930(iVar0);
					}
					func_1931(iVar3, iVar4, 1, 1, -142743235);
					if (bParam3)
					{
						set_entity_coords(iVar0, uParam0->f_155, false, true, true, true);
						set_entity_visible(iVar0, false);
						set_entity_collision(iVar0, false, false);
						freeze_entity_position(iVar0, true);
					}
					if (is_entity_a_ped(iVar0))
					{
						clear_ped_tasks(get_ped_index_from_entity_index(iVar0), 1, 0);
						_0x2208438012482a1a(get_ped_index_from_entity_index(iVar0), false, false);
					}
					else
					{
						force_entity_ai_and_animation_update(iVar0, true);
					}
				}
			}
		}
		iVar2++;
		iVar1++;
	}
}

void func_1574(var uParam0, var uParam1)
{
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = (*uParam1)[iVar1]->f_3;
		if (does_entity_exist(iVar0))
		{
			if (is_entity_a_ped(iVar0) && is_ped_human(get_ped_index_from_entity_index(iVar0)))
			{
				_0x0d0db2b6af19a987(&iVar0);
			}
			else
			{
				_set_entity_coords_and_heading(iVar0, func_1932(uParam0->f_154, 0), get_random_float_in_range(-180f, 180f), false, true, true);
				set_entity_collision(iVar0, true, false);
				set_entity_visible(iVar0, true);
				freeze_entity_position(iVar0, false);
				activate_physics(iVar0);
				set_ped_config_flag(get_ped_index_from_entity_index(iVar0), 223, false);
			}
		}
		iVar1++;
	}
}

void func_1575(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = create_itemset(true);
	vVar1 = { get_entity_coords(iParam0, true, false) };
	iVar4 = _0x59b57c4b06531e1e(vVar1, 5f, iVar0, 3);
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		iVar6 = get_indexed_item_in_itemset(iVar5, iVar0);
		if (!is_an_entity(iVar6))
		{
		}
		else
		{
			iVar7 = _get_entity_from_item(iVar6);
			if (!does_entity_exist(iVar7))
			{
			}
			else if (!is_entity_an_object(iVar7))
			{
			}
			else if (!is_entity_attached_to_entity(iVar7, iParam0))
			{
			}
			else if (_0x0ccfe72b43c9cf96(iVar7))
			{
			}
			else
			{
				set_entity_as_mission_entity(iVar7, true, true);
				iVar8 = _0x18013392501ce5dc(iVar6);
				delete_object(&iVar8);
			}
		}
		iVar5++;
	}
	destroy_itemset(iVar0);
}

void func_1576(int iParam0, int iParam1)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_433 = iParam1;
}

Vector3 func_1577(var uParam0, int iParam1)
{
	vVar0 = { *uParam0->f_2[iParam1] };
	if (get_ground_z_for_3d_coord(vVar0, &(vVar0.f_2), false))
	{
		return vVar0;
	}
	return *uParam0->f_2[iParam1];
}

void func_1578(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	set_ped_config_flag(iParam0, 136, true);
	set_ped_config_flag(iParam0, 312, true);
	set_ped_config_flag(iParam0, 113, true);
	set_ped_config_flag(iParam0, 301, true);
	set_ped_config_flag(iParam0, 367, true);
	set_ped_config_flag(iParam0, 72, true);
	_0x18ff3110cf47115d(iParam0, 9, 1);
	_0xae6004120c18df97(iParam0, 0, 0);
	set_blocking_of_non_temporary_events(iParam0, true);
	set_animal_tuning_bool_param(iParam0, 48, true);
	if (_0x33fa048675821da7(iParam0, 0))
	{
		_0x2eb75fb86c41f026(iParam0, 0, 0);
	}
	set_entity_visible(iParam0, true);
	set_ped_relationship_group_hash(iParam0, -1538724068);
}

bool func_1579(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_1933(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_1580(int iParam0)
{
	sVar0 = "HorseMission";
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (decor_exist_on(iParam0, sVar0))
	{
		return true;
	}
	return false;
}

void func_1581(int iParam0, int iParam1)
{
	iParam0 = func_444(iParam0);
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

void func_1582(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_226(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar1 = get_entity_model(iVar0);
	iVar2 = func_1001(iVar1);
	if (decor_exist_on(iVar0, "HorseGender"))
	{
		iVar3 = decor_get_int(iVar0, "HorseGender");
	}
	else
	{
		iVar3 = func_1934(iVar0);
		decor_set_int(iVar0, "HorseGender", iVar3);
	}
	func_1935(iParam0, iVar1);
	func_1936(iParam0, iVar2);
	func_1937(iParam0, iVar3);
	iVar4 = -1;
	iVar5 = -15;
	if (iParam1 != 0)
	{
		iVar4 = get_game_timer();
		iVar5 = func_435();
	}
	func_1938(iParam0, iParam1);
	func_1939(iParam0, iVar4);
	func_1940(iParam0, iVar5);
	iVar6 = get_attribute_rank(iVar0, 7);
	fVar7 = to_float(get_attribute_points(iVar0, 7));
	func_1010(iParam0, iVar6);
	func_1600(iParam0, fVar7);
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (func_1941(iVar8, &iVar9))
		{
			iVar10 = get_attribute_rank(iVar0, iVar9);
			func_1942(iParam0, iVar8, iVar10);
		}
		iVar8++;
	}
}

int func_1583(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = get_entity_model(iParam0);
	if (!_does_metaped_outfit_exist_for_ped_model(1268180497, iVar0))
	{
		return 0;
	}
	iVar1 = 1268180497;
	if (_0x98082246107a6acf(iParam0, iVar1))
	{
		return 1;
	}
	return 0;
}

bool func_1584(int iParam0)
{
	bVar0 = func_1923(iParam0);
	if (bVar0 == 0)
	{
		return false;
	}
	Var1 = { func_1182(0) };
	if (func_1943(&Var1, bVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_1585(int iParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_1618(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_977(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1586(int iParam0, int iParam1)
{
	if (!func_278(iParam1, 0))
	{
		return 0;
	}
	if (!func_1014(iParam1))
	{
		return 0;
	}
	if (func_1584(iParam0))
	{
		return 0;
	}
	iVar0 = func_1923(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_1182(0) };
	Var1.f_4 = iVar0;
	if (!func_968(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

void func_1587(int iParam0, var uParam1)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_226(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return;
	}
	iVar1 = _inventory_get_ped_inventory_id(iVar0);
	iVar2 = 0;
	while (iVar2 < 57)
	{
		iVar3 = func_1920(iVar2, 1);
		iVar4 = iVar3;
		if (!func_278(iVar4, 0))
		{
		}
		else
		{
			iVar5 = uParam1[iVar2];
			if (iVar5 <= 0)
			{
			}
			else
			{
				iVar6 = func_1944(iVar1, iVar4, iVar5);
			}
		}
		iVar2++;
	}
}

void func_1588(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_225(iParam0))
	{
		return;
	}
	iVar0 = func_226(iParam0);
	if (is_entity_dead(iVar0))
	{
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = &Global_40.f_1095.f_1[iParam0]->f_356[iVar1];
		if (func_278(iVar2, 0))
		{
			iVar3 = iVar2;
			uVar4 = Global_40.f_1095.f_1[iParam0]->f_356[iVar1]->f_1;
			uVar5 = Global_40.f_1095.f_1[iParam0]->f_356[iVar1]->f_2;
			_0xc412aa1c73111fe0(iVar0, iVar3, uVar4, uVar5, 0);
		}
		iVar1++;
	}
}

bool func_1589(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1618(iParam0, &Var0))
	{
		return false;
	}
	*iParam1 = func_973(Var0, 1415981582, 0);
	if (!func_278(*iParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1590(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1618(iParam0, &Var0))
	{
		return false;
	}
	*iParam1 = func_973(Var0, -2119169513, 0);
	if (!func_278(*iParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1591(int iParam0, int iParam1)
{
	if (!func_1945(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1619() };
	*iParam1 = func_973(Var0, iParam0, 0);
	if (!func_278(*iParam1, 0))
	{
		return false;
	}
	return true;
}

void func_1592(int iParam0)
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
	_0xdf631e4bce1b1fc4(iParam0, -1442703445, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -1505972720, 0, false);
}

void func_1593(int iParam0, var uParam1)
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
	func_1946(iParam0, *uParam1);
	func_1946(iParam0, uParam1->f_1);
}

void func_1594(int iParam0, var uParam1)
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
	func_1946(iParam0, *uParam1);
	func_1946(iParam0, uParam1->f_1);
	func_1946(iParam0, uParam1->f_2);
	func_1946(iParam0, uParam1->f_3);
	func_1946(iParam0, uParam1->f_4);
	func_1946(iParam0, uParam1->f_5);
}

int func_1595(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		return 0;
	}
	iVar0 = get_entity_model(iParam0);
	if (!_does_metaped_outfit_exist_for_ped_model(iParam1, iVar0))
	{
		return 0;
	}
	_set_ped_body_component(iParam0, iParam1);
	if (bParam2)
	{
		_update_ped_variation(iParam0, true, true, true, true, false);
	}
	return 1;
}

char* func_1596(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_1597(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_158())
	{
		if (func_1686())
		{
			bVar0 = false;
			if (!func_120((*Global_1835011)[15]->f_1, 1) && !func_40(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_1947();
				*iParam1 = func_1948();
				*uParam2 = func_1949();
				return 1;
			}
			else
			{
				*uParam0 = func_1950();
				*iParam1 = func_1951();
				*uParam2 = func_1952();
				return 1;
			}
		}
		else if (func_202())
		{
			if (!func_120((*Global_1835011)[60]->f_1, 1))
			{
				*uParam0 = func_1953();
				*iParam1 = func_1954();
				*uParam2 = func_1955();
				return 1;
			}
			else
			{
				*uParam0 = func_1956();
				*iParam1 = func_1957();
				*uParam2 = func_1958();
				return 1;
			}
		}
	}
	else if (func_1686())
	{
		*uParam0 = func_1959();
		*iParam1 = func_1960();
		*uParam2 = func_1961();
		return 1;
	}
	else if (func_202())
	{
		*uParam0 = func_1962();
		*iParam1 = func_1963();
		*uParam2 = func_1964();
		return 1;
	}
	return 0;
}

void func_1598(int iParam0)
{
	if (func_1965() < iParam0)
	{
		func_1966(iParam0);
	}
}

void func_1599(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			Global_40.f_1095.f_1[iParam0]->f_372.f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_1600(int iParam0, float fParam1)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fParam1;
	iVar0 = func_226(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return;
	}
	iVar1 = floor(Global_40.f_1095.f_1[iParam0]->f_372.f_1);
	set_attribute_points(iVar0, 7, iVar1);
	iVar2 = get_attribute_rank(iVar0, 7);
	Global_40.f_1095.f_1[iParam0]->f_372 = iVar2;
	_0xa69899995997a63b(iVar0, iVar2);
	func_1598(iVar2);
}

int func_1601(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	fVar0 = 1f;
	fVar1 = 1f;
	iVar2 = Global_1914319->f_16855.f_1;
	iVar3 = Global_1914319->f_16855;
	if (func_928(iVar2) && func_1731(iVar3))
	{
		if (iVar3 == 10 || iVar3 == 18)
		{
			fVar1 = func_1967(iVar2, iParam0);
		}
		fVar0 = func_1968(&(Global_1914319->f_3[iVar3]->f_35), iParam0);
	}
	fVar4 = (fVar0 + fVar1);
	if (fVar0 <= 0f)
	{
		return 0;
	}
	fVar4 = (fVar4 - IntToFloat(floor(fVar4)));
	iVar5 = func_1688(iParam0, 816454899, 0);
	iVar6 = round((IntToFloat(iVar5) + (IntToFloat(iVar5) * fVar4)));
	if (bParam1)
	{
		iVar6 = round((IntToFloat(iVar6) * 0.5f));
	}
	if (iVar6 <= 0)
	{
		return 0;
	}
	return iVar6;
}

float func_1602(int iParam0)
{
	fVar0 = 0f;
	iVar3 = func_1925(iParam0);
	if (iVar3 != -1)
	{
		iVar1 = func_446(iVar3);
		bVar2 = func_1017(iVar3);
	}
	else
	{
		iVar1 = get_attribute_base_rank(iParam0, 7);
		bVar2 = false;
	}
	if (bVar2)
	{
		switch (iVar1)
		{
			case 0:
				fVar0 = 0.5f;
				break;
			case 1:
				fVar0 = 0.5f;
				break;
			case 2:
				fVar0 = 0.65f;
				break;
			case 3:
				fVar0 = 0.8f;
				break;
			case 4:
				fVar0 = 0.95f;
				break;
			default:
				fVar0 = 0.5f;
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				fVar0 = 0.02f;
				break;
			case 1:
				fVar0 = 0.04f;
				break;
			case 2:
				fVar0 = 0.1f;
				break;
			case 3:
				fVar0 = 0.15f;
				break;
			case 4:
				fVar0 = 0.2f;
				break;
			default:
				fVar0 = 0.02f;
				break;
		}
	}
	return fVar0;
}

bool func_1603(int iParam0)
{
	switch (iParam0)
	{
		case -621245377:
		case 1680713143:
			return true;
	}
	return false;
}

int func_1604(int iParam0, int iParam1)
{
	if (func_1969(iParam0))
	{
		if (iParam1 > 1)
		{
			iVar1 = func_1970(iParam0);
			iVar2 = (iParam1 - iVar1);
			iVar3 = func_1601(iParam0, 0);
			iVar4 = func_1601(iParam0, 1);
			iVar0 = ((iVar4 * iVar1) + (iVar3 * iVar2));
		}
		else
		{
			iVar0 = func_1601(iParam0, func_1971(iParam0));
		}
	}
	else
	{
		iVar0 = (func_1601(iParam0, 0) * iParam1);
	}
	return iVar0;
}

void func_1605(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1808(iParam0, sParam4, iParam5);
	}
	func_1809(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_1606(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

void func_1607(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1608(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_1609(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_1610(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_1611(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_1612(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

int func_1613()
{
	if (does_entity_exist(Global_1900383->f_393))
	{
		func_1972();
	}
	iVar0 = get_player_index();
	_set_ped_as_saddle_horse_for_player(iVar0, 0);
	func_1632(-1);
	func_1633(3);
	return 1;
}

void func_1614(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_226(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1973(iVar6);
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

bool func_1615(int iParam0)
{
	if (!func_1974(iParam0))
	{
		return false;
	}
	if (!func_1662())
	{
		return true;
	}
	return false;
}

void func_1616(int iParam0)
{
	iParam0 = func_444(iParam0);
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

bool func_1617(int iParam0)
{
	return func_339(iParam0) == 28496495;
}

bool func_1618(int iParam0, var uParam1)
{
	if (!func_1584(iParam0))
	{
		return false;
	}
	iVar0 = func_1923(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_1182(0) };
	if (!func_1720(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_1975(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

struct<4> func_1619()
{
	Var0 = { func_1182(0) };
	return func_669(856287005, Var0, -218846335, 0);
}

bool func_1620(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
	}
	if (func_612(iParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_1621(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (func_612(iParam0, -251515357))
	{
		return true;
	}
	return false;
}

int func_1622(int iParam0)
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

int func_1623()
{
	Var0 = { func_1185(856287005, 0, 0) };
	Var5 = { func_669(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_339(856287005);
	if (_item_database_get_has_slot_info(iVar10, 0, &iVar11))
	{
		iVar14 = func_973(Var5, -415648720, 0);
	}
	if (!func_278(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_974(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (_item_database_get_has_slot_info(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_973(Var5, iVar11, 0);
			if (!func_278(iVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (func_1621(iVar14) || func_1620(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == 986998820)
						{
							if (func_1621(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == -1189569496)
								{
									if (!func_1621(iVar14) && func_1976(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_1977(iVar11, &Var16, 1))
									{
										if (!func_966(Var16, 1))
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

var func_1624(var uParam0)
{
	return *uParam0;
}

var func_1625(var uParam0)
{
	return uParam0->f_1;
}

var func_1626(var uParam0)
{
	return *uParam0;
}

var func_1627(var uParam0)
{
	return uParam0->f_1;
}

var func_1628(var uParam0)
{
	return uParam0->f_2;
}

var func_1629(var uParam0)
{
	return uParam0->f_3;
}

var func_1630(var uParam0)
{
	return uParam0->f_4;
}

var func_1631(var uParam0)
{
	return uParam0->f_5;
}

void func_1632(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1633(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

bool func_1634(var uParam0, bool bParam1)
{
	Var0 = { func_1719(0) };
	iVar5 = func_1236(bParam1);
	Var6.f_9 = -1591664384;
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (func_1237(iVar4, &Var6, bParam1))
		{
			if (_0x4c543d5dfcd2dafd(&Var0, uParam0))
			{
				return true;
			}
		}
		iVar4++;
	}
	return false;
}

bool func_1635(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_926(bParam9))
	{
		return func_1978(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_670(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_1469(Param0, &Var0, bParam9, 1) || !func_1469(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_670(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_1209(0);
	if (!_0xf2753d691bcda314(iVar28, &Param0, &Param4))
	{
		return false;
	}
	if (!_0x734311e2852760d0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!_0x734311e2852760d0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return true;
}

int func_1636(int iParam0)
{
	return -1;
}

int func_1637(int iParam0)
{
	return 0;
}

int func_1638(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 399422490;
		case 1:
			return -385635273;
		case 2:
			return -1163401704;
		case 3:
			return 561239516;
		case 7:
			return 168005805;
		case 9:
			return -273475295;
		case 10:
			return -2142954459;
		case 11:
			return -1442703445;
		case 12:
			return -1505972720;
		case 13:
			return -508773182;
		default:
			break;
	}
	return -1;
}

void func_1639(int iParam0, int iParam1)
{
	func_1979(iParam0, iParam1, 0);
}

int func_1640(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	vVar1.f_2 = 10;
	vVar1.f_2.f_1.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = 4;
	if (!func_1980(&vVar1, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < vVar1.y)
	{
		_0xbc6df00d7a4a6819(iParam0, vVar1.f_2[iVar0]->f_1, &(vVar1.f_2[iVar0]->f_3[0]), &(vVar1.f_2[iVar0]->f_3[1]), &(vVar1.f_2[iVar0]->f_3[2]), iParam3, iParam4, iParam5, iParam6);
		iVar0++;
	}
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, false, true, false);
	}
	return 1;
}

bool func_1641(int* iParam0, struct<4> Param1, var uParam5, int iParam6)
{
	if (func_1981(iParam0))
	{
		return false;
	}
	if (!_0xb881ca836cc4b6d4(&Param1))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1469(Param1, &Var0, 1, 0))
	{
		return false;
	}
	if (!func_1982(Param1, 816454899, 1))
	{
		return false;
	}
	Var14 = { func_1916(&Var0) };
	Var14.f_13 = 816454899;
	Var14.f_12 = 1992602754;
	*uParam5 = { Var14 };
	if (!func_1983(iParam0, Var14, -1318406457, iParam6))
	{
		return false;
	}
	return true;
}

bool func_1642(int iParam0, int iParam1, var uParam2)
{
	Var0.f_20 = 10;
	Var0.f_31 = 10;
	if (func_243(iParam0, &Var0))
	{
		iVar44 = func_460(&Var0);
		iVar45 = 0;
		while (iVar45 < iVar44)
		{
			if (func_462(iVar45, &Var0))
			{
				if (func_1984(&Var0, iParam1, uParam2))
				{
					return true;
				}
			}
			iVar45++;
		}
	}
	else
	{
		return false;
	}
	return false;
}

struct<4> func_1643()
{
	return Var0;
}

void func_1644(var uParam0)
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

void func_1645(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

void func_1646(int iParam0, bool bParam1)
{
	if (!func_717(iParam0))
	{
		return;
	}
	if (func_1985(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_1986(iParam0, 1);
	}
	else
	{
		func_1987(iParam0, 1);
	}
	func_1988(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_1649(iVar0) == iParam0)
		{
			func_1650(iVar0, 0);
		}
		iVar0++;
	}
}

void func_1647(int iParam0, bool bParam1)
{
	if (!func_111(iParam0))
	{
		return;
	}
	bVar0 = func_1320(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_26(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_1989(iParam0, func_435());
			func_1990(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_1991(iParam0, 67108864);
		func_1989(iParam0, -15);
	}
	func_1992(iParam0);
}

void func_1648(int iParam0, bool bParam1, int iParam2)
{
	if (!func_111(iParam0))
	{
		return;
	}
	if (func_1993(iParam0) && !bParam1)
	{
		return;
	}
	if (_does_volume_exist((*Global_1888801)[iParam0]->f_5))
	{
		iVar0 = (*Global_1888801)[iParam0]->f_5;
	}
	else
	{
		iVar0 = func_1994(iParam0);
	}
	bVar1 = func_1320(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_1995(iParam0);
		if (iParam2 > iVar2 || !func_1905(func_1996(iParam0)))
		{
			func_1997(iParam0, func_435());
			func_1998(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_1990(iParam0, 33554432);
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
		func_1991(iParam0, 33554432);
		func_1997(iParam0, -15);
		if (_does_volume_exist(iVar0))
		{
			_0xf2a2177ac848b3a8(iVar0, 1, 1);
		}
	}
	func_1999(iParam0);
}

int func_1649(int iParam0)
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

void func_1650(int iParam0, bool bParam1)
{
	if (!func_1321(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_2000(iParam0, 1);
	}
	else
	{
		if (func_2001(iParam0))
		{
			return;
		}
		func_2002(iParam0, 1);
	}
	func_2003(iParam0, bParam1);
}

void func_1651(int iParam0, int iParam1)
{
	if (!func_717(iParam0))
	{
		return;
	}
	iVar0 = func_2004();
	if (iParam1 > iVar0)
	{
		iParam1 = iVar0;
	}
	_set_max_wanted_level_2(iVar0);
	if (iParam0 == func_2005())
	{
		_set_bounty_for_player(player_id(), iParam1);
	}
	if (Global_1572887->f_12 == -1)
	{
		if (&Global_40.f_358[iParam0] != iParam1)
		{
			func_2006(iParam0, iParam1);
			func_2007(iParam0);
		}
		Global_40.f_358[iParam0] = iParam1;
		if (!func_1985(iParam0, 4))
		{
			if (&Global_40.f_358[iParam0] >= get_wanted_level_threshold(1))
			{
				func_2008(iParam0, 1);
			}
		}
		else if (&Global_40.f_358[iParam0] == 0)
		{
			func_2008(iParam0, 0);
		}
		return;
	}
	Global_1058888->f_42266[iParam0] = iParam1;
}

int func_1652(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2137625828;
		case 1:
			return 1039226266;
		case 2:
			return 493546894;
		case 3:
			return -2119728378;
		case 4:
			if (!bParam1 || func_125() != -1)
			{
				return -1308265478;
			}
			if (func_40(45))
			{
				return -1308265478;
			}
			else
			{
				return -1738342532;
			}
			break;
		case 5:
			return -1147969487;
		case 6:
			return -1147969487;
		case 7:
			return -1147969487;
		case 8:
			return 537788226;
		case 9:
			return -1391142299;
		case 10:
			return 1178102426;
		case 11:
			return 1608357655;
		case 12:
			if (!bParam1 || func_125() != -1)
			{
				return -650528936;
			}
			if (func_40(45))
			{
				return -650528936;
			}
			else
			{
				return 139139039;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_125() != -1)
			{
				return -877373104;
			}
			if (func_40(45))
			{
				return -877373104;
			}
			else
			{
				return -1618764825;
			}
			break;
	}
	return 0;
}

int func_1653(int iParam0)
{
	iVar0 = -1;
	if (!func_1068(iParam0))
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

bool func_1654(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1655(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

void func_1656(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1657(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1658(int iParam0, var uParam1)
{
	if (!func_1068(iParam0))
	{
		return 0;
	}
	Var0 = uParam1;
	Var0.f_2 = 192444604;
	Var0.f_3 = iParam0;
	return _datafile_get_num_nodes(&Var0);
}

int func_1659(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (!func_1068(iParam0))
	{
		return 0;
	}
	Var0 = uParam2;
	Var0.f_2 = 833374898;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1392893044;
		_datafile_get_hash(iParam3, &Var0);
		Var0.f_2 = 1214284824;
		_datafile_get_int(iParam4, &Var0);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1660(int iParam0, int iParam1)
{
	if (!func_2009(iParam1))
	{
		return;
	}
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (is_ped_injured(iParam0))
	{
		return;
	}
	if (is_ped_in_writhe(iParam0))
	{
		return;
	}
	if (func_2010(iParam1))
	{
		func_2011(iParam0, iParam1);
		return;
	}
	if (func_2012(iParam1))
	{
		func_2013(iParam0, iParam1);
		return;
	}
	if (func_2014(iParam1))
	{
		func_2015(iParam0, iParam1);
		return;
	}
	if (func_2016(iParam1))
	{
		func_2017(iParam0, iParam1);
		return;
	}
	if (func_2018(iParam1))
	{
		func_2019(iParam0, iParam1);
		return;
	}
	if (func_2020(iParam1))
	{
		func_2021(iParam0, iParam1);
		return;
	}
	if (func_2022(iParam1))
	{
		iVar0 = func_2023();
		func_2024(iParam0, iParam1, iVar0);
		return;
	}
}

bool func_1661(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!func_2025(iParam0, iParam1, Param2, iParam6, iParam7, &Var0, iParam8, iParam9, 0))
	{
		return false;
	}
	func_2026(Var0);
	return true;
}

bool func_1662()
{
	return _unlock_is_unlocked(99890643);
}

bool func_1663(var uParam0, int iParam1)
{
	iVar0 = func_1090(&(uParam0->f_2031));
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	iVar4 = 0;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < iVar0)
	{
		iVar5 = func_1223(iVar6, &(uParam0->f_2031));
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			vVar1 = { func_1224(iVar6, iVar4, &(uParam0->f_2031)) };
			if (func_278(vVar1.x, 0))
			{
				if (func_1074(uParam0, vVar1))
				{
					*iParam1++;
				}
			}
			iVar4++;
		}
		iVar6++;
	}
	return true;
}

bool func_1664(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 0;
	if (iParam1 == 207706105)
	{
		iVar0 = -999503751;
	}
	else if (iParam1 == -1998614617)
	{
		iVar0 = -525676072;
	}
	else if (iParam1 == -357182937)
	{
		iVar0 = -2061583405;
	}
	*iParam2 = func_1156(iVar0, 1);
	return true;
}

void func_1665(var uParam0, bool bParam1)
{
	_databinding_add_data_bool_by_hash(uParam0->f_2031.f_52, -1171257547, bParam1);
	if (!bParam1)
	{
		_databinding_add_data_bool_by_hash(uParam0->f_2031.f_52, 988907979, false);
		_databinding_add_data_bool_by_hash(uParam0->f_2031.f_52, 1417549877, false);
		_databinding_add_data_int_by_hash(uParam0->f_2031.f_52, 1184271882, 0);
		_databinding_add_data_int_by_hash(uParam0->f_2031.f_52, 1453173492, 0);
		_databinding_add_data_int_by_hash(uParam0->f_2031.f_52, -804795275, 0);
	}
}

bool func_1666(int iParam0, var uParam1, var uParam2)
{
	iVar0 = func_891(uParam1);
	if (iParam0 < 0 || iParam0 > iVar0)
	{
		return false;
	}
	if (_item_database_get_shop_layout_menu_info_by_index(*uParam1, func_245(uParam1), iParam0, uParam2))
	{
		return true;
	}
	return false;
}

void func_1667(var uParam0)
{
	bVar0 = _databinding_read_data_bool_from_parent(uParam0->f_2031.f_52, "AltHorseStats");
	_databinding_add_data_bool(uParam0->f_2031.f_52, "AltHorseStats", !bVar0);
}

void func_1668(var uParam0)
{
	bVar0 = func_1680(uParam0);
	func_1092(uParam0, bVar0);
	func_1093(uParam0, !bVar0);
}

void func_1669(var uParam0)
{
	bVar0 = _databinding_read_data_bool_from_parent(uParam0->f_2031.f_52, "SaddleStatsVisible");
	_databinding_add_data_bool(uParam0->f_2031.f_52, "SaddleStatsVisible", !bVar0);
	_databinding_add_data_bool(uParam0->f_2031.f_50, func_552(), bVar0);
}

char* func_1670()
{
	return "uiPaletteOptionItemID";
}

char* func_1671()
{
	return "locked";
}

bool func_1672(int iParam0, int iParam1, int iParam2)
{
	if (_item_database_get_shop_layout_info(iParam0, &uVar0))
	{
		if (_item_database_get_shop_layout_menu_info_by_id(iParam0, iParam1, &Var7))
		{
			if (Var7.f_5 > 0)
			{
				iVar14 = -1;
				iVar15 = 0;
				while (iVar15 < Var7.f_5)
				{
					if (_item_database_get_shop_layout_menu_page_key(iParam0, Var7, iVar15, &iVar14))
					{
						if (func_2027(iParam0, iVar14, &iVar5))
						{
							if (!func_278(iVar4, 0))
							{
								iVar4 = iVar5;
							}
							else if (func_1186(iVar5, -915411861, 1, 0, 0) < func_1186(iVar4, -915411861, 1, 0, 0))
							{
								iVar4 = iVar5;
							}
						}
					}
					iVar15++;
				}
			}
			if (Var7.f_6 > 0)
			{
				iVar23 = 0;
				while (iVar23 < Var7.f_6)
				{
					if (_item_database_get_shop_layout_menu_info_by_index(iParam0, iParam1, iVar23, &iVar16))
					{
						if (func_1672(iParam0, iVar16, &iVar6))
						{
							if (!func_278(iVar4, 0))
							{
								iVar4 = iVar6;
							}
							else if (func_1186(iVar6, -915411861, 1, 0, 0) < func_1186(iVar4, -915411861, 1, 0, 0))
							{
								iVar4 = iVar6;
							}
						}
					}
					iVar23++;
				}
			}
			*iParam2 = iVar4;
			return true;
		}
	}
	return false;
}

int func_1673(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	iVar0 = get_entity_model(iParam1);
	iVar1 = func_1001(iVar0);
	iVar2 = func_2028(iParam1);
	iVar3 = func_2029(iVar0);
	iVar4 = 0;
	iVar5 = 0;
	iVar4 = func_2030(iParam1);
	iVar5 = func_2031(iParam1);
	iVar4++;
	iVar5++;
	iVar4 = func_1490(iVar4, 0, 10);
	iVar5 = func_1490(iVar5, 0, 10);
	if (func_148(iParam1))
	{
		func_2032(&iVar6, &iVar7);
		iVar6 = (iVar6 + iVar4 * 100);
		iVar7 = (iVar7 + iVar5 * 100);
	}
	iVar8 = iVar4 + 3;
	iVar9 = iVar5 + 2;
	iVar8 = func_1490(iVar8, 0, 10);
	iVar9 = func_1490(iVar9, 0, 10);
	_databinding_add_data_int(uParam0->f_2031.f_52, "HorseSpeedEquipmentValue", iVar6);
	_databinding_add_data_int(uParam0->f_2031.f_52, "HorseSpeedEquipmentMinValue", 0);
	_databinding_add_data_int(uParam0->f_2031.f_52, "HorseSpeedEquipmentMaxValue", 1000);
	_databinding_add_data_int(uParam0->f_2031.f_52, "HorseAccEquipmentValue", iVar7);
	_databinding_add_data_int(uParam0->f_2031.f_52, "HorseAccEquipmentMinValue", 0);
	_databinding_add_data_int(uParam0->f_2031.f_52, "HorseAccEquipmentMaxValue", 1000);
	_databinding_add_data_int(uParam0->f_2031.f_52, "HorseSpeedValue", iVar4);
	_databinding_add_data_int(uParam0->f_2031.f_52, "HorseSpeedMinValue", 0);
	_databinding_add_data_int(uParam0->f_2031.f_52, "HorseSpeedMaxValue", 10);
	_databinding_add_data_int(uParam0->f_2031.f_52, "HorseAccValue", iVar5);
	_databinding_add_data_int(uParam0->f_2031.f_52, "HorseAccMinValue", 0);
	_databinding_add_data_int(uParam0->f_2031.f_52, "HorseAccMaxValue", 10);
	_databinding_add_data_int(uParam0->f_2031.f_52, "HorseSpeedCapacityValue", iVar8);
	_databinding_add_data_int(uParam0->f_2031.f_52, "HorseSpeedCapacityMinValue", 0);
	_databinding_add_data_int(uParam0->f_2031.f_52, "HorseSpeedCapacityMaxValue", 10);
	_databinding_add_data_int(uParam0->f_2031.f_52, "HorseAccCapacityValue", iVar9);
	_databinding_add_data_int(uParam0->f_2031.f_52, "HorseAccCapacityMinValue", 0);
	_databinding_add_data_int(uParam0->f_2031.f_52, "HorseAccCapacityMaxValue", 10);
	_databinding_add_data_hash(uParam0->f_2031.f_52, "HorseHandling", get_hash_key(func_2033(iVar2)));
	_databinding_add_data_hash(uParam0->f_2031.f_52, "HorseType", get_hash_key(func_2034(iVar3, iVar1)));
	_databinding_add_data_hash(uParam0->f_2031.f_52, "HorseBreed", get_hash_key(func_1255(iVar1)));
	_databinding_add_data_hash(uParam0->f_2031.f_52, "HorseCoat", get_hash_key(func_2035(iVar1)));
	_databinding_add_data_hash(uParam0->f_2031.f_52, "HorseGender", get_hash_key(func_2036(iParam1)));
	return 1;
}

void func_1674(var uParam0, int iParam1, int iParam2)
{
	if (!_databinding_is_data_id_valid(uParam0->f_2031.f_66))
	{
		uParam0->f_2031.f_66 = _databinding_add_ui_item_list(uParam0->f_2031.f_52, "SaddleStats");
	}
	else
	{
		_databinding_clear_binding_array(uParam0->f_2031.f_66);
	}
	if (!func_1038(iParam1))
	{
		return;
	}
	Var0.f_1 = 20;
	if (!_item_database_fillout_item_effects_ids(iParam1, &Var0))
	{
		return;
	}
	if (Var0 <= 0)
	{
		return;
	}
	iVar33 = 0;
	while (iVar33 < Var0)
	{
		if (!_item_database_fillout_item_effects_id_info(&(Var0.f_1[iVar33]), &Var22))
		{
		}
		else
		{
			switch (Var22.f_1)
			{
				case -225223329:
					fVar29 = Var22.f_5;
					break;
				case 1167068375:
					fVar30 = Var22.f_5;
					break;
				case -845587290:
					fVar31 = Var22.f_5;
					break;
				case 1605773431:
					fVar32 = Var22.f_5;
					break;
			}
		}
		iVar33++;
	}
	if (fVar29 != 0f)
	{
		func_2037(uParam0, iParam1, iParam2, -225223329, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), fVar29, 1, "RPG_Horse_Health");
	}
	if (fVar30 != 0f)
	{
		func_2037(uParam0, iParam1, iParam2, 1167068375, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), fVar30, 1, "RPG_Horse_Stamina");
	}
	if (fVar31 != 0f)
	{
		func_2037(uParam0, iParam1, iParam2, -845587290, _create_var_string(2, "PMPLAYER_DRAIN_RATE"), fVar31, 1, "RPG_Horse_Stamina");
	}
	if (fVar32 != 0f)
	{
		func_2037(uParam0, iParam1, iParam2, 1605773431, _create_var_string(2, "PMPLAYER_REGEN_RATE"), fVar32, 0, "RPG_Horse_Stamina");
	}
}

bool func_1675(int iParam0)
{
	return func_339(iParam0) == 1302066700;
}

int func_1676(var uParam0, int iParam1, int iParam2)
{
	iVar0 = uParam0->f_2031.f_95;
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (!func_1675(iParam1))
	{
		return 0;
	}
	if (!_databinding_is_data_id_valid(uParam0->f_2031.f_67))
	{
		uParam0->f_2031.f_67 = _databinding_add_ui_item_list(uParam0->f_2031.f_52, "StirrupStats");
	}
	else
	{
		_databinding_clear_binding_array(uParam0->f_2031.f_67);
	}
	Var1.f_1 = 20;
	if (!_item_database_fillout_item_effects_ids(iParam1, &Var1))
	{
	}
	else if (Var1 <= 0)
	{
		func_551(uParam0, 0);
	}
	else
	{
		iVar31 = 0;
		iVar32 = 0;
		bVar33 = true;
		iVar37 = 0;
		while (iVar37 < Var1)
		{
			if (_item_database_fillout_item_effects_id_info(&(Var1.f_1[iVar37]), &Var23))
			{
				bVar33 = false;
				if (Var23.f_1 == -1620444701)
				{
					iVar31 = (iVar31 + Var23.f_2);
				}
				else if (Var23.f_1 == 2086291460)
				{
					iVar32 = (iVar32 + Var23.f_2);
				}
				else if (Var23.f_1 == -845587290)
				{
					sVar34 = _create_var_string(2, "PMPLAYER_DRAIN_RATE");
					sVar36 = "RPG_Horse_Stamina";
					bVar33 = true;
				}
				else if (Var23.f_1 == 1167068375)
				{
					sVar34 = _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE");
					sVar36 = "RPG_Horse_Stamina";
					bVar33 = true;
				}
				if (bVar33)
				{
					if (Var23.f_5 <= 0f)
					{
						sVar35 = _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", round(Var23.f_5));
					}
					else
					{
						sVar35 = _create_var_string(2, "PMPLAYER_CORE_PC_MINUS_VALUE", round(Var23.f_5));
					}
					iVar30 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_67, Var23.f_1);
					_databinding_add_data_string(iVar30, "iconTXD", "pausemenu_player");
					_databinding_add_data_string(iVar30, "iconTexture", sVar36);
					_databinding_add_data_bool(iVar30, "isIconVisible", true);
					_databinding_add_data_string(iVar30, "label", sVar34);
					_databinding_add_data_string(iVar30, "value", sVar35);
					_databinding_add_data_bool(iVar30, "isEndIconVisible", false);
					_databinding_add_data_bool(iVar30, "isRowActive", false);
					if (func_278(iParam2, 0))
					{
						iVar38 = func_2038(iParam1, iParam2, Var23.f_1);
						if (iVar38 == 2)
						{
							_databinding_add_data_bool(iVar30, "isEndIconVisible", true);
							_databinding_add_data_string(iVar30, "endIconTexture", "rpg_arrow_down");
							_databinding_add_data_string(iVar30, "endIconTXD", "menu_textures");
							_databinding_add_data_bool(iVar30, "isRowActive", true);
						}
						else if (iVar38 == 1)
						{
							_databinding_add_data_bool(iVar30, "isEndIconVisible", true);
							_databinding_add_data_string(iVar30, "endIconTexture", "rpg_arrow_up");
							_databinding_add_data_string(iVar30, "endIconTXD", "menu_textures");
							_databinding_add_data_bool(iVar30, "isRowActive", false);
						}
					}
					_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_2031.f_67, -1, -519723266, iVar30);
				}
			}
			iVar37++;
		}
		iVar39 = 0;
		iVar40 = 0;
		iVar39 = func_2030(iVar0);
		iVar40 = func_2031(iVar0);
		iVar41 = 0;
		iVar42 = 0;
		iVar41 = get_default_max_attribute_rank(get_entity_model(iVar0), 5);
		iVar42 = get_default_max_attribute_rank(get_entity_model(iVar0), 6);
		iVar39++;
		iVar40++;
		iVar39 = func_1490(iVar39, 0, iVar41);
		iVar40 = func_1490(iVar40, 0, iVar42);
		iVar43 = iVar39 + 3;
		iVar44 = iVar40 + 2;
		iVar43 = func_1490(iVar43, 0, iVar41);
		iVar44 = func_1490(iVar44, 0, iVar42);
		_databinding_add_data_int(uParam0->f_2031.f_52, "HorseSpeedValue", iVar39);
		_databinding_add_data_int(uParam0->f_2031.f_52, "HorseSpeedMinValue", 0);
		_databinding_add_data_int(uParam0->f_2031.f_52, "HorseSpeedMaxValue", 10);
		_databinding_add_data_int(uParam0->f_2031.f_52, "HorseSpeedEquipmentValue", (iVar31 + iVar39 * 100));
		_databinding_add_data_int(uParam0->f_2031.f_52, "HorseSpeedEquipmentMinValue", 0);
		_databinding_add_data_int(uParam0->f_2031.f_52, "HorseSpeedEquipmentMaxValue", 1000);
		_databinding_add_data_int(uParam0->f_2031.f_52, "HorseAccValue", iVar40);
		_databinding_add_data_int(uParam0->f_2031.f_52, "HorseAccMinValue", 0);
		_databinding_add_data_int(uParam0->f_2031.f_52, "HorseAccMaxValue", 10);
		_databinding_add_data_int(uParam0->f_2031.f_52, "HorseAccEquipmentValue", (iVar32 + iVar40 * 100));
		_databinding_add_data_int(uParam0->f_2031.f_52, "HorseAccEquipmentMinValue", 0);
		_databinding_add_data_int(uParam0->f_2031.f_52, "HorseAccEquipmentMaxValue", 1000);
		_databinding_add_data_int(uParam0->f_2031.f_52, "HorseSpeedCapacityValue", iVar43);
		_databinding_add_data_int(uParam0->f_2031.f_52, "HorseSpeedCapacityMinValue", 0);
		_databinding_add_data_int(uParam0->f_2031.f_52, "HorseSpeedCapacityMaxValue", 10);
		_databinding_add_data_int(uParam0->f_2031.f_52, "HorseAccCapacityValue", iVar44);
		_databinding_add_data_int(uParam0->f_2031.f_52, "HorseAccCapacityMinValue", 0);
		_databinding_add_data_int(uParam0->f_2031.f_52, "HorseAccCapacityMaxValue", 10);
		func_551(uParam0, 1);
	}
	return 1;
}

void func_1677(var uParam0, int iParam1)
{
	if (func_1087(uParam0))
	{
		iVar0 = func_958(uParam0);
		iParam1 = func_1154(iVar0);
	}
	_databinding_add_data_hash(uParam0->f_2031.f_52, "ItemTitleInfo", iParam1);
}

bool func_1678(var uParam0, int iParam1)
{
	if (!func_278(iParam1, 0))
	{
		return false;
	}
	func_932(uParam0->f_2, &iVar0);
	if (!func_1456(iParam1, iVar0))
	{
		return false;
	}
	if (_databinding_is_data_id_valid(uParam0->f_2031.f_64))
	{
		_databinding_clear_binding_array(uParam0->f_2031.f_64);
	}
	if (_databinding_is_data_id_valid(uParam0->f_2031.f_65))
	{
		_databinding_clear_binding_array(uParam0->f_2031.f_65);
	}
	if (func_1506(iParam1, iVar0, &Var4, &iVar35, 1, 0))
	{
		iVar39 = 0;
		iVar38 = 0;
		while (iVar38 < iVar35)
		{
			iVar40 = &Var4[iVar38];
			if ((func_278(iVar40, 0) && iVar40 != 2084597891) && iVar40 != 773203532)
			{
				if (uParam0->f_2 == 18 || uParam0->f_2 == 19)
				{
					iVar41 = func_933(uParam0->f_2);
					iVar42 = func_2039(iVar41);
					iVar39 = func_1531(iVar40, func_1182(1), iVar42, 0);
				}
				else
				{
					iVar39 = ((func_2040(iVar40) + func_2041(7, iVar40)) + func_1531(iVar40, func_1182(1), 1084182731, 0));
				}
				iVar36 = _databinding_add_data_container(uParam0->f_2031.f_64, func_1159(iVar40));
				_databinding_add_data_string(iVar36, "itemName", _create_var_string(32, 1097941440, Var4[iVar38]->f_1, _create_var_string(0, func_1154(iVar40))));
				_databinding_add_data_bool(iVar36, "enabled", iVar39 >= Var4[iVar38]->f_1);
				_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_2031.f_64, -1, "recipeListItem", iVar36);
				iVar37 = _databinding_add_data_container(uParam0->f_2031.f_65, func_1159(iVar40));
				vVar1 = { func_2042(iVar40) };
				_databinding_add_data_hash(iVar37, "textureDictionary", vVar1.y);
				_databinding_add_data_hash(iVar37, "texture", vVar1.x);
				_databinding_add_data_int(iVar37, "count", iVar39);
				_databinding_add_data_bool(iVar37, "visible", true);
				_databinding_add_data_bool(iVar37, "enabled", iVar39 >= Var4[iVar38]->f_1);
				_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_2031.f_65, -1, "recipeImageItem", iVar37);
			}
			iVar38++;
		}
	}
	func_831(uParam0, func_1256(iParam1));
	func_543(uParam0, 1);
	func_1088(uParam0, iParam1, 0);
	return true;
}

bool func_1679(int iParam0, int iParam1)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	return _item_database_fillout_acquire_cost(iParam0, iParam1, &Var0);
}

bool func_1680(var uParam0)
{
	return _databinding_read_data_bool_from_parent(uParam0->f_2031.f_52, "RecipeInfoVisible");
}

bool func_1681(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		return false;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar0.x = iParam1;
	if (!func_1074(uParam0, vVar0))
	{
		return false;
	}
	if (!func_722(uParam0, iParam1, iParam2, iParam3, &iVar3, 1))
	{
		return false;
	}
	_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_2031.f_60, -1, -858000260, iVar3);
	uParam0->f_2031.f_73++;
	_databinding_add_data_int(uParam0->f_2031.f_50, "paletteItemCount", uParam0->f_2031.f_73);
	return true;
}

bool func_1682(var uParam0)
{
	return _databinding_read_data_bool_from_parent(uParam0->f_2031.f_52, "SaddleStatsVisible");
}

int func_1683(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam2 == 1702073444)
	{
		iVar3 = func_276(uParam0);
		vVar4.f_1 = -1;
		vVar4.f_2 = -1;
		Var11 = -1;
		Var11.f_1 = -1;
		Var11.f_2 = -1;
		Var11.f_3 = -1;
		Var11.f_4 = -1;
		Var11.f_5 = -1;
		Var11.f_6 = -1;
		Var11.f_7 = -1;
		Var11.f_8 = -1;
		if (func_962(func_723(&(uParam0->f_2031)), iVar3, &Var7))
		{
			iVar1 = 0;
			while (iVar1 < Var7.f_3)
			{
				vVar4 = { func_963(iVar1, Var7, &(uParam0->f_2031)) };
				if (vVar4.x == iParam1 && func_278(vVar4.x, 0))
				{
					Var11.f_8 = vVar4.y;
					iVar22 = _item_database_create_item_collection(&Var11, &iVar21, 1);
					if (iVar22 == -1)
					{
					}
					else
					{
						iVar23 = 0;
						while (iVar23 < iVar21)
						{
							iVar24 = func_919(iVar23, iVar22);
							if (((func_278(iVar24, 0) && iVar24 != iParam1) && func_920(&(uParam0->f_2031), iVar24, &uVar2)) || _item_database_get_item_tag_type(iVar24, Var11.f_8) == -2089472884)
							{
								iVar25 = func_896(uParam0, iVar24);
								if (!func_834(uParam0, iVar24, iVar25))
								{
									iVar0 = (iVar0 + func_902(iVar24, 0));
								}
							}
							iVar23++;
						}
						_0xcbb7b6edfa933ade(iVar22);
					}
				}
				iVar1++;
			}
		}
	}
	else
	{
		iVar0 = func_902(iParam1, 0);
	}
	return iVar0;
}

int func_1684(var uParam0, int iParam1)
{
	if (!func_1014(iParam1))
	{
		return 0;
	}
	iVar0 = func_1254(iParam1);
	if (!is_model_valid(iVar0))
	{
		return 0;
	}
	iVar1 = _0xe76687023d8c8505(iVar0, 0);
	return func_1673(uParam0, iVar1);
}

bool func_1685(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_1275((*Global_1835011)[iParam0]->f_1);
}

bool func_1686()
{
	if (func_125() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

bool func_1687(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iParam1[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1688(int iParam0, int iParam1, bool bParam2)
{
	if (!func_2043(iParam0, iParam1, &Var0, &iVar21, bParam2))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar22 = 0;
	while (iVar22 < iVar21)
	{
		if (&Var0[iVar22] == 2084597891)
		{
			return Var0[iVar22]->f_1;
		}
		else if (&Var0[iVar22] == 0)
		{
		}
		else
		{
			iVar22++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

bool func_1689(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_125() == -1)
	{
		if (func_1204(iParam0))
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

int func_1690(int iParam0, int iParam1)
{
	if (func_929(iParam0, iParam1, &Var0))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1691(int iParam0, int iParam1, int iParam2, var uParam3)
{
	iVar10 = *iParam2;
	if (iParam2->f_2 > 0)
	{
		bVar4 = true;
	}
	else
	{
		bVar4 = false;
	}
	*uParam3 = 0;
	switch (iVar10)
	{
		case 927095371:
			return func_2044(iParam0) == bVar4;
		case 1884968092:
			iVar0 = func_2045(iParam2->f_1);
			if (iVar0 == -1)
			{
				return false;
			}
			return func_1685(iVar0) == bVar4;
		case -1943220497:
			iVar0 = func_2045(iParam2->f_1);
			if (iVar0 == -1)
			{
				return false;
			}
			return func_155(iVar0) == bVar4;
		case 1412799554:
			iVar1 = iParam2->f_1;
			if (iVar1 == 0)
			{
				return false;
			}
			if (func_826(iVar1) == -1977020088)
			{
				return func_1336(iVar1) == bVar4;
			}
			else
			{
				return func_1150(iVar1, 0) > 0 == bVar4;
			}
			break;
		case -1665564967:
			iVar1 = iParam2->f_1;
			if (iVar1 == 0)
			{
				return false;
			}
			if (is_weapon_valid(iVar1))
			{
				if (((func_914(iVar1, 1728382685, 0) || func_914(iVar1, -649335959, 0)) || func_914(iVar1, -1876502240, 0)) || func_914(iVar1, -2107032155, 0))
				{
					return true;
				}
			}
			return false;
		case -1100867449:
			iVar9 = func_2046(iParam2->f_1);
			if (iVar9 == -1)
			{
				return false;
			}
			return func_2047(iVar9) >= iParam2->f_2;
		case -761364604:
			iVar2 = func_2048(iParam2->f_1);
			if (iVar2 == -1)
			{
				return false;
			}
			return func_804(iVar2) == bVar4;
		case -343773245:
			iVar2 = func_2048(iParam2->f_1);
			if (iVar2 == -1)
			{
				return false;
			}
			return func_2049(iVar2) == bVar4;
		case 318533979:
			return func_2050() == bVar4;
		case 1458081975:
			if (func_2051(func_1475(iParam0), iParam0))
			{
				return true;
			}
			iVar3 = func_2052(iParam2->f_1);
			if (iVar3 == -1)
			{
				return false;
			}
			if (bVar4)
			{
				return func_1097(iParam0) == iVar3;
			}
			else
			{
				return func_1097(iParam0) != iVar3;
			}
			break;
		case 716744052:
			iVar11 = func_2053(iParam2->f_1);
			if (!func_928(iVar11))
			{
				return false;
			}
			if (bVar4)
			{
				return Global_1914319->f_16855.f_1 == iVar11;
			}
			else
			{
				return Global_1914319->f_16855.f_1 != iVar11;
			}
			break;
		case -1316856660:
			return func_1484(iParam2->f_1) == bVar4;
		case -192905099:
			return func_1792(iParam2->f_1) == bVar4;
		case -811319973:
			return func_125() == -1 == bVar4;
		case -185626331:
			return func_125() != -1 == bVar4;
		case -1279067322:
			iVar5 = func_2054(iParam2->f_1);
			if (iVar5 == -1)
			{
				return false;
			}
			return func_2055(iVar5) == bVar4;
		case -1013499808:
			iVar6 = iParam2->f_1;
			if (iVar6 == 0)
			{
				return false;
			}
			return iVar6 == Global_1946804->f_1 == bVar4;
		case 1407970834:
			iVar1 = iParam2->f_1;
			if (iVar1 == 0)
			{
				return false;
			}
			return func_1314(iVar1, 1) == bVar4;
		case 1437906597:
			iVar12 = func_2056(iParam2->f_1);
			if (!func_169(iVar12))
			{
				return false;
			}
			return func_40(iVar12) == bVar4;
		case -280118519:
			return ((func_2057() || func_2058()) && bVar4);
		case -1869915166:
			return (func_1799() && bVar4);
		case -1160790731:
			return (0 && bVar4);
		case 16476779:
			iVar1 = iParam2->f_1;
			if (iVar1 == 0)
			{
				return false;
			}
			Var13.f_9 = -1591664384;
			iVar42 = 0;
			while (iVar42 < 5)
			{
				if (func_1618(iVar42, &Var13))
				{
					if (Var13.f_4 == iVar1)
					{
						return bVar4;
					}
				}
				iVar42++;
			}
			if (!bVar4)
			{
				return true;
			}
			return false;
		case 1561382091:
			iVar7 = func_2059(iParam2->f_1);
			if (iVar7 == -1)
			{
				return false;
			}
			if (!bVar4)
			{
				return false;
			}
			return (func_2060(iVar7, 0) || func_2060(iVar7, 1));
		case 1305693938:
			iVar1 = iParam2->f_1;
			if (!func_278(iVar1, 0))
			{
				return false;
			}
			if (_databinding_is_data_id_valid(Global_1914319->f_16855.f_31))
			{
				iVar43 = _databinding_get_array_count(Global_1914319->f_16855.f_31);
			}
			else
			{
				return false;
			}
			if (iVar43 <= 0)
			{
				return false;
			}
			iVar46 = 0;
			while (iVar46 < iVar43)
			{
				iVar44 = _databinding_get_item_context_by_index(Global_1914319->f_16855.f_31, iVar46);
				if (_databinding_is_data_id_valid(iVar44))
				{
					iVar47 = _databinding_read_data_hash_string_from_parent(iVar44, func_683());
					iVar45 = iVar47;
					if (func_278(iVar45, 0))
					{
						if (iVar45 == iVar1)
						{
							if (bVar4)
							{
								return true;
							}
						}
					}
				}
				iVar46++;
			}
			if (!bVar4)
			{
				return true;
			}
			return false;
		case 1105714339:
			iVar8 = iParam2->f_1;
			if (iVar8 == 0)
			{
				return false;
			}
			return func_2061(Global_1914319->f_16855.f_36, iVar8, Global_1914319->f_16855.f_37) == bVar4;
		case -253134813:
			if (!bVar4)
			{
				return false;
			}
			return func_2062(iParam1, iParam2->f_1);
		case -501545386:
			iVar48 = iParam2->f_1;
			switch (iVar48)
			{
				case -2132502231:
					return (func_2063() && bVar4);
				case -608161198:
					return (func_2064() && bVar4);
				case 1014511709:
					return (func_2065() && bVar4);
				case -1712679084:
					return (func_2066() && bVar4);
			}
			return false;
		case -1541662797:
			iVar49 = -589165916;
			if (iParam2->f_1 == 581819093)
			{
				iVar49 = 581819093;
			}
			if (iVar49 == -589165916)
			{
				return false;
			}
			else
			{
				iVar50 = func_2068(0, func_2067(iVar49, 1), 11, iVar49);
				return func_2069(iVar50) > 0;
			}
			break;
		case -1480714855:
			return func_1502(iParam2->f_1);
		case 348599371:
			return _unlock_is_unlocked(iParam2->f_1) == bVar4;
		case -1318118431:
			return Global_1914319->f_16855.f_36 == iParam2->f_1 == bVar4;
	}
	return false;
}

int func_1692()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_339(iVar1) == -999503751)
		{
			if (func_819() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_1693(int iParam0)
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

int func_1694(int iParam0, int iParam1, int iParam2, bool bParam3)
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

int func_1695(int iParam0)
{
	if (func_1171() == 1160113249)
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

int func_1696(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = func_656(iParam2, 1);
	iVar1 = 0;
	if (iVar0 < 0 || iVar0 >= 39)
	{
		return 0;
	}
	if (func_1171() == 24043185)
	{
		iVar1 = 1;
	}
	if (!bParam4)
	{
		func_658();
	}
	if (iParam1 != 1155669136 && func_1694(&(Global_1946804->f_1378.f_1[iVar0]), iVar1, iParam1, func_125() != -1) == -1)
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
			func_94(17, iParam2, 0, 0, 0);
		}
		else
		{
			func_94(17, iParam2, 1, iParam0, 0);
		}
	}
	func_336(0);
	return 1;
}

int func_1697(int iParam0)
{
	switch (iParam0)
	{
		case -888790689:
			return 0;
		case -2126063412:
			return 1;
		case -368305354:
			return 2;
		case -1500843424:
			return 3;
		case 2034750397:
			return 4;
		case -1689805015:
			return 5;
		case 1855421528:
			return 6;
		case -1844483462:
			return 7;
		case -618101597:
			return 8;
		case -516195177:
			return 9;
		case 1193363351:
			return 10;
		default:
			break;
	}
	return -1;
}

bool func_1698(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return true;
}

void func_1699(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1700(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1755(0);
	if (iParam2 != 0 && func_1694(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1754(iParam0, func_1079(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1701(var uParam0, int iParam1)
{
	iVar2 = 0;
	if (func_1171() == 24043185)
	{
		iVar2 = 1;
	}
	iVar0 = func_2070(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = 1;
		if (((iVar0 == -1906834168 && &uParam0->f_1[iVar1] != func_629()) || iVar0 == -452152720) || iVar0 == -70852636)
		{
			uParam0->f_1[iVar1]->f_1 = 1155669136;
			Global_1946804->f_2656 = iParam1;
		}
		else if (func_1694(&(uParam0->f_1[iVar1]), iVar2, iVar0, func_125() != -1) != -1)
		{
			uParam0->f_1[iVar1]->f_1 = iVar0;
			Global_1946804->f_2656 = iParam1;
		}
	}
}

bool func_1702(int iParam0)
{
	return ((&Global_40.f_7731[0] == iParam0 && &Global_40.f_7731[1] == iParam0) && &Global_40.f_7731[2] == iParam0);
}

int func_1703(int iParam0, var uParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		(*uParam1)[iVar3] = 0;
		iVar3++;
	}
	iVar4 = iParam0;
	Var5 = -2109211296;
	if (func_125() == -1)
	{
		if (func_1171() == 1160113249)
		{
			Var5 = 1583685020;
		}
		else
		{
			Var5 = -572793833;
		}
	}
	Var5.f_1 = iVar4;
	Var5.f_3 = 0;
	_0x91ded5dd64bb2691(&Var5);
	if (!_0xed4413cee1bf142c(&Var5))
	{
		return 0;
	}
	while (_0xed4413cee1bf142c(&Var5))
	{
		if (iVar0 >= *uParam1)
		{
			return 0;
		}
		_0x44b3a36933ac009c(&iVar1, &Var5, 1373051002);
		iVar2 = iVar1;
		_0x44b3a36933ac009c(&iVar1, &Var5, 1409451727);
		if (!func_2071(iVar1, &iVar3))
		{
		}
		else
		{
			(*uParam1)[iVar3] = iVar2;
			iVar0++;
		}
	}
	return 1;
}

int func_1704(int iParam0)
{
	func_1169(iParam0, &uVar0);
	iVar5 = 0;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (&uVar0[iVar4] > &uVar0[iVar5])
		{
			iVar5 = iVar4;
		}
		iVar4++;
	}
	return iVar5;
}

int func_1705(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1171();
	}
	if (func_125() == -1)
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

bool func_1706(int iParam0, bool bParam1)
{
	if (func_339(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_40(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1707(bool bParam0)
{
	iVar0 = func_1209(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_669(271701509, func_1182(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_669(271701509, func_1182(bParam0), 12999093, 0);
}

bool func_1708(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_339(iParam0);
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &iVar0))
		{
			if (_item_database_can_equip_item_on_category(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_1709(int iParam0, int iParam1)
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

bool func_1710(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

bool func_1711(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1712(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1713(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_125() == -1)
	{
		func_1347(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_1348(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

int func_1714(int iParam0)
{
	switch (iParam0)
	{
		case -1968468235:
			return 1013009475;
		case -2092532275:
		case -2056428614:
		case -348190488:
		case 317179309:
		case 336033112:
		case 761079318:
		case 1942587409:
		case 2073652352:
		case 2077448405:
			return 1721919938;
		case -1502467280:
		case -1395073769:
		case -1352600334:
		case -1080155519:
		case -1048755899:
		case -853534656:
		case -772187037:
		case -584027224:
		case -384358143:
		case -349391286:
		case -239176093:
		case 420195545:
		case 777890122:
		case 1394581936:
		case 1702073444:
		case 2036169888:
			return 849534145;
		case 193788635:
			return 1027416037;
		case 1119253406:
		case 1837492866:
			return -314648538;
		case -395279071:
		case -339889117:
			return 1915518289;
		case -760956867:
		case -627085098:
		case 38807286:
			return 1755925661;
	}
	return 0;
}

bool func_1715(var uParam0, var uParam1)
{
	*uParam1 = _databinding_add_data_container_by_hash(uParam0->f_2031.f_59, 2073652352);
	_databinding_add_data_int(*uParam1, func_649(), 2073652352);
	_databinding_add_data_hash(*uParam1, func_1243(), -1095179319);
	bVar0 = true;
	if (uParam0->f_2031.f_119)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(-1);
		Stack.Push(2073652352);
		Call_Loc(uParam0->f_2031.f_120);
		if (!StackVal)
		{
			bVar0 = false;
		}
	}
	_databinding_add_data_bool(*uParam1, func_1164(), bVar0);
	return true;
}

int func_1716(bool bParam0)
{
	Var0 = { func_978(0, 2123222014, -1591664384, -1591664384, 0, 0) };
	uVar14 = func_2072(&Var0, bParam0) + 1;
	return uVar14;
}

bool func_1717(var uParam0)
{
	Var0.f_9 = -1591664384;
	iVar14 = func_1209(1);
	Var15 = { func_1182(1) };
	if (_0xb881ca836cc4b6d4(&Var15))
	{
		if (_0x033ee4b89f3ac545(iVar14, &Var15, 1782082944) > 0)
		{
			if (_0xbe012571b25f5aca(iVar14, &Var15, 1782082944, 0, &Var0))
			{
				return func_2073(&Var0, uParam0, 0);
			}
		}
	}
	return false;
}

bool func_1718(int iParam0, var uParam1)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	iVar14 = func_1209(1);
	Var15 = { func_669(389943619, func_1182(1), 1591329969, 1) };
	Var19 = { func_669(iParam0, Var15, 2123222014, 1) };
	if (_0xb881ca836cc4b6d4(&Var19))
	{
		if (_0x033ee4b89f3ac545(iVar14, &Var19, -1824203570) > 0)
		{
			if (_0xbe012571b25f5aca(iVar14, &Var19, -1824203570, 0, &Var0))
			{
				if (func_2073(&Var0, uParam1, 0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

struct<4> func_1719(bool bParam0)
{
	return func_669(318222581, func_1182(bParam0), 1591329969, bParam0);
}

bool func_1720(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_1209(bParam7);
	if (_0x033ee4b89f3ac545(iVar0, &uParam0, bParam4) <= iParam6)
	{
		return false;
	}
	if (!_0xbe012571b25f5aca(iVar0, &uParam0, bParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

void func_1721()
{
	Global_1946804->f_1329 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1946804->f_1329.f_1[iVar0]->f_8 = -1;
		iVar1 = 0;
		while (iVar1 < Global_1946804->f_1329.f_1[iVar0]->f_7)
		{
			(*Global_1946804->f_1329.f_1[iVar0])[iVar1] = 0;
			iVar1++;
		}
		Global_1946804->f_1329.f_1[iVar0]->f_7 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_1329.f_48)
	{
		Global_1946804->f_1329.f_29[iVar0] = -358215195;
		iVar1 = 0;
		while (iVar1 < Global_1946804->f_1329.f_29[iVar0]->f_5)
		{
			Global_1946804->f_1329.f_29[iVar0]->f_1[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1946804->f_1329.f_48 = 0;
}

int func_1722(int iParam0, var uParam1)
{
	iVar3 = iParam0;
	Var4 = uParam1;
	Var4.f_1 = -367421157;
	Var4.f_2 = 1409451727;
	Var4.f_4 = iParam0;
	Var4.f_3 = 1;
	_0x91ded5dd64bb2691(&Var4);
	if (!_0x44b3a36933ac009c(&uVar0, &Var4, -1093723189))
	{
		return -1;
	}
	Var4.f_1 = uVar0;
	Var4.f_2 = 0;
	Var4.f_4 = 0;
	Var4.f_3 = 0;
	_0x91ded5dd64bb2691(&Var4);
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&uVar0, &Var4, -1863756360))
		{
		}
		else
		{
			bVar2 = true;
			Global_1946804->f_1329.f_29[Global_1946804->f_1329.f_48]->f_1[iVar1] = uVar0;
			iVar1++;
		}
	}
	if (!bVar2)
	{
		return -1;
	}
	Global_1946804->f_1329.f_29[Global_1946804->f_1329.f_48] = iVar3;
	Global_1946804->f_1329.f_29[Global_1946804->f_1329.f_48]->f_5 = iVar1;
	Global_1946804->f_1329.f_48++;
	return (Global_1946804->f_1329.f_48 - 1);
}

void func_1723(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bVar15 = func_125() != -1;
	iVar16 = func_1755(0);
	Var8 = uParam3;
	Var8.f_1 = &Global_1946804->f_1329.f_29[iParam2];
	Var8.f_2 = -763890493;
	Var8.f_3 = 1;
	iVar6 = _0xffcc2db2d9953401(iParam0, iVar16, bVar15);
	iVar2 = iVar6 + 1;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (iVar0 != iVar6)
		{
			iVar1 = _0x6243635af2f1b826(iParam0, iVar0, iVar16, bVar15);
			Var8.f_4 = iVar1;
		}
		else
		{
			Var8.f_4 = 1155669136;
			iVar1 = 1155669136;
		}
		_0x91ded5dd64bb2691(&Var8);
		iVar4 = 0;
		while (iVar4 < Global_1946804->f_1329.f_29[iParam2]->f_5)
		{
			if (!_0x44b3a36933ac009c(&iVar3, &Var8, &(Global_1946804->f_1329.f_29[iParam2]->f_1[iVar4])))
			{
			}
			else
			{
				iVar7 = func_1194(&(Global_1946804->f_1329.f_29[iParam2]->f_1[iVar4]));
				if (func_2074(iVar7, iVar3, &uVar5))
				{
					if (iParam1 == iVar1)
					{
						Global_1946804->f_1329.f_1[iVar7]->f_8 = uVar5;
					}
				}
				else
				{
					(*Global_1946804->f_1329.f_1[iVar7])[Global_1946804->f_1329.f_1[iVar7]->f_7] = iVar3;
					if (iParam1 == iVar1)
					{
						Global_1946804->f_1329.f_1[iVar7]->f_8 = Global_1946804->f_1329.f_1[iVar7]->f_7;
					}
					Global_1946804->f_1329.f_1[iVar7]->f_7++;
				}
			}
			iVar4++;
		}
		iVar0++;
	}
}

bool func_1724(var uParam0, int iParam1, var uParam2)
{
	*uParam2 = _databinding_add_data_container(uParam0->f_2031.f_59, func_2075(iParam1));
	_databinding_add_data_int(*uParam2, func_649(), 420195545);
	_databinding_add_data_int(*uParam2, func_716(), iParam1);
	_databinding_add_data_hash(*uParam2, func_1243(), func_808(iParam1));
	_databinding_add_data_bool(*uParam2, "showQuantity", false);
	_databinding_add_data_bool(*uParam2, "forSale", true);
	_databinding_add_data_bool(*uParam2, "owned", false);
	_databinding_add_data_bool(*uParam2, "locked", false);
	_databinding_add_data_bool(*uParam2, "soldOut", false);
	_databinding_add_data_bool(*uParam2, "useGoldPrice", false);
	bVar1 = func_923(uParam0->f_18, iParam1, &uVar0);
	_databinding_add_data_bool(*uParam2, func_1164(), bVar1);
	iVar2 = func_1473(uParam0->f_18, iParam1);
	_databinding_add_data_int(*uParam2, "price", iVar2);
	return true;
}

bool func_1725(var uParam0, struct<5> Param1, var uParam6, int iParam7, var uParam8)
{
	if (!func_1068(Param1))
	{
		return false;
	}
	iVar0 = func_1658(Param1, Global_1901433->f_4504);
	Var4 = 1;
	Var4.f_1 = 1;
	Var4.f_2 = 1105014447;
	Var4.f_4 = -1;
	Var4.f_5 = -1134602452;
	Var4.f_6 = 1276832712;
	Var4.f_12 = 1105014447;
	Var4.f_13 = 1105014447;
	Var4.f_16 = 300;
	Var4.f_21 = 1;
	Var4.f_25.f_1 = 1;
	Var4.f_25.f_9 = 1105014447;
	Var4.f_25.f_10 = 8000;
	Var4.f_25.f_11 = 1511356879;
	Var4.f_25.f_18 = 1;
	if (iVar0 > 0)
	{
		func_1659(Param1, 0, Global_1901433->f_4504, &iVar1, &uVar2);
		iVar3 = iVar1;
		vVar48 = { func_2076(Param1) };
		Var4.f_10 = func_1159(iVar3);
		Var4.f_15 = vVar48.x;
		Var4.f_14 = vVar48.y;
	}
	_int_to_string(iParam7, "%i", &uVar51);
	*uParam8 = _databinding_add_data_container(uParam0->f_2031.f_59, &uVar51);
	_databinding_add_data_int(*uParam8, func_597(), iVar1);
	_databinding_add_data_int(*uParam8, func_649(), -627085098);
	_databinding_add_data_int(*uParam8, func_716(), Param1);
	_databinding_add_data_bool(*uParam8, func_1164(), true);
	_databinding_add_data_string(*uParam8, func_1252(), Var4.f_10);
	func_2077(Param1.f_4, &uVar55, &uVar56, &uVar57, &iVar58, &uVar59, &uVar60);
	if (iVar58 <= 1)
	{
		Var4.f_11 = _create_var_string(2, "POST_OFFICE_DELIVERY_TODAY");
	}
	else if (iVar58 <= 2)
	{
		Var4.f_11 = _create_var_string(2, "POST_OFFICE_DELIVERY_MAIL_YESTERDAY");
	}
	else
	{
		Var4.f_11 = _create_var_string(2, "POST_OFFICE_DELIVERY_MAIL_DAY", iVar58);
	}
	_databinding_add_data_string(*uParam8, "itemDescriptionRaw", Var4.f_11);
	_databinding_add_data_int(*uParam8, "textureDictionary", Var4.f_14);
	_databinding_add_data_int(*uParam8, "texture", Var4.f_15);
	_databinding_add_data_bool(*uParam8, func_1114(), false);
	_databinding_add_data_bool(*uParam8, "tickVisible", false);
	_databinding_add_data_int(*uParam8, "not_script_data_int_3", 1);
	return true;
}

char* func_1726(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
			return "BREED_AMERICANPAINT_OVERO";
		case 1432602132:
			return "BREED_AMERICANPAINT_TOBIANO";
		case 92296905:
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case -842044823:
			return "BREED_AMERICANPAINT_GREYOVERO";
		case 1371398552:
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case -745453539:
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case 1583029039:
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case -783061276:
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case -1322521536:
			return "BREED_ANDALUSIAN_DARKBAY";
		case 1100711204:
			return "BREED_ANDALUSIAN_PERLINO";
		case 728055838:
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case -1782334639:
			return "BREED_APPALOOSA_BLANKET";
		case -1181052732:
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case -540812301:
			return "BREED_APPALOOSA_FEWSPOTTED_PC";
		case -179102320:
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case -1266863668:
			return "BREED_APPALOOSA_LEOPARD";
		case -2078767648:
			return "BREED_ARABIAN_BLACK";
		case -2055655009:
			return "BREED_ARABIAN_REDCHESTNUT";
		case -1506685618:
			return "BREED_ARABIAN_REDCHESTNUT_PC";
		case -852553462:
			return "BREED_ARABIAN_ROSEGREYBAY";
		case -2105447887:
			return "BREED_ARABIAN_WARPEDBRINDLE_PC";
		case -80004868:
			return "BREED_ARABIAN_WHITE";
		case 1813208211:
			return "BREED_ARDENNES_BAYROAN";
		case 836323303:
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case 153881023:
			return "BREED_ARDENNES_IRONGREYROAN";
		case -1256798240:
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case 2118089359:
			return "BREED_BELGIAN_MEALYCHESTNUT";
		case -1537586382:
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case 1440692746:
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case 697143532:
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case 281128160:
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case 1854519167:
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case -1376299681:
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case -1955947684:
			return "BREED_KENTUCKYSADDLE_BLACK1";
		case 1427053849:
			return "BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC";
		case 1361788230:
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case 1974379573:
			return "BREED_KENTUCKYSADDLE_GREY";
		case 545109431:
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case 1275638003:
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case 2083573823:
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case 1235275977:
			return "BREED_MORGAN_BAY";
		case 892601357:
			return "BREED_MORGAN_BAYROAN";
		case 1224695367:
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case 955937750:
			return "BREED_MORGAN_LIVERCHESTNUT_PC";
		case 648301150:
			return "BREED_MORGAN_PALOMINO";
		case -1597490733:
			return "BREED_MUSTANG_GRULLODUN";
		case 2000205872:
			return "BREED_MUSTANG_WILDBAY";
		case -1428527735:
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case 170010697:
			return "BREED_NOKOTA_BLUEROAN";
		case -742726637:
			return "BREED_NOKOTA_WHITEROAN";
		case -1714171692:
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case -103101636:
			return "BREED_SHIRE_DARKBAY";
		case -1999094324:
			return "BREED_SHIRE_LIGHTGREY";
		case 1724200240:
			return "BREED_SUFFOLKPUNCH_SORREL";
		case 237935328:
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case 120848852:
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case -868094182:
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case -887362763:
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case 2059232991:
			return "BREED_TENNESSEEWALKER_GOLDPALOMINO_PC";
		case -847714194:
			return "BREED_TENNESSEEWALKER_REDROAN";
		case 1756765331:
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case -813071670:
			return "BREED_THOROUGHBRED_BLOODBAY";
		case -1900569233:
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case 1688250187:
			return "BREED_THOROUGHBRED_BRINDLE";
		case -1262715164:
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case 2010625508:
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case -136225010:
			return "BREED_TURKOMAN_DARKBAY";
		case -225011104:
			return "BREED_TURKOMAN_GOLD";
		case -1882436593:
			return "BREED_TURKOMAN_SILVER";
		case -1331210307:
			return "BREED_DONKEY";
		case 122449722:
			return "BREED_MULE";
		case -1784502482:
			return "BREED_MULE_PAINTED";
		case -1943445834:
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case -635244104:
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case -1427377767:
			return "BREED_ARABIAN_GREY";
		case -1293672675:
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case -1179079660:
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case 805526368:
			return "BREED_MUSTANG_GOLDENDUN";
		case 1342496140:
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case -126555855:
			return "BREED_SHIRE_RAVENBLACK";
		case 294243421:
			return "BREED_BUELL_WARVETS";
		case -997197050:
			return "BREED_JOHN_ENDLESSSUMMER";
		case -235714362:
			return "BREED_MURFREEBROOD_MANGE_01";
		case -1678164:
			return "BREED_MURFREEBROOD_MANGE_02";
		case -977833913:
			return "BREED_MURFREEBROOD_MANGE_03";
		case 1589164943:
			return "BREED_WINTER02_01";
		case -1087523615:
			return "BREED_EAGLEFLIES";
		case -496814209:
			return "BREED_GANG_BILL";
		case 2109055751:
			return "BREED_GANG_CHARLES";
		case -776673611:
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case 1764402253:
			return "BREED_GANG_DUTCH";
		case -1417310078:
			return "BREED_GANG_HOSEA";
		case 1096273915:
			return "BREED_GANG_JAVIER";
		case 772751081:
			return "BREED_GANG_JOHN";
		case -1140435723:
			return "BREED_GANG_KAREN";
		case 2002524329:
			return "BREED_GANG_KIERAN";
		case 1151530184:
			return "BREED_GANG_LENNY";
		case -1266525037:
			return "BREED_GANG_MICAH";
		case -2018137175:
			return "BREED_GANG_SADIE";
		case -574151692:
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case 649786380:
			return "BREED_GANG_SEAN";
		case -1921328920:
			return "BREED_GANG_TRELAWNEY";
		case -837607790:
			return "BREED_GANG_UNCLE";
		case 370424594:
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case -364764277:
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "";
}

char[] func_1727(char[4] cParam0)
{
	return cParam0;
}

void func_1728(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_2078(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_656(func_956(iParam1), 1);
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
		func_2079(uParam0);
	}
}

bool func_1729(var uParam0, int iParam1, int iParam2, var uParam3)
{
	*uParam3 = 0;
	if (!func_533(iParam1))
	{
		return false;
	}
	if (_item_database_get_shop_layout_page_info_by_key(iParam1, iParam2, &Var4))
	{
		iVar0 = 0;
		while (iVar0 < Var4.f_3)
		{
			if (_item_database_get_shop_layout_page_item_key(iParam1, Var4, iVar0, &iVar3, &uVar1, &uVar2))
			{
				if (func_278(iVar3, 0))
				{
					if (func_1427(iVar3) && func_821(iVar3))
					{
						*uParam3 = iVar3;
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_1730(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_278(iParam0, 0))
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

bool func_1731(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_1732(int iParam0, int iParam1)
{
	if (func_2080(iParam1, &iVar0))
	{
		if (_0x200373a8df081f22(iParam0, iVar0))
		{
			return true;
		}
	}
	return false;
}

int func_1733(int iParam0)
{
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1] = iParam0;
	iVar0 = Global_1946804->f_2535.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1946804->f_2535.f_2 = (Global_1946804->f_2535.f_2 || iVar0);
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1]->f_1 = iVar0;
	Global_1946804->f_2535.f_1++;
	return iVar0;
}

bool func_1734(int iParam0, int iParam1)
{
	if (iParam0 == -696754231)
	{
		iVar0 = 1742327865;
		if (func_339(func_1178(iVar0)) != 81053684)
		{
			return false;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	*iParam1 = func_656(iVar0, 1);
	return true;
}

void func_1735(int iParam0, int iParam1)
{
	Global_1946804->f_2535.f_3[iParam0] = (Global_1946804->f_2535.f_3[iParam0] || iParam1);
}

bool func_1736(bool bParam0)
{
	if (Global_1946804->f_2535.f_1 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1079(iVar0, 1);
		if (func_1080(iVar2, 2))
		{
		}
		else if (&Global_1946804->f_2535.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_660(iVar0) == -1)
			{
				func_661(iVar0, 0);
				func_1081(Global_1946804->f_2589.f_2[(Global_1946804->f_2589 - 1)], 2, 6);
			}
			func_1083(iVar2, 2, 6);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return true;
	}
	return false;
}

void func_1737(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1079(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_2081(iParam4);
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

void func_1738(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1080(1108822547, 6))
	{
		if (bParam2)
		{
			func_1737(iParam0, iVar0, func_125() != -1, 0, 0);
			func_1083(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1082(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

bool func_1739()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1740()
{
	fVar0 = func_2082(13);
	iVar1 = func_2083(fVar0);
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

float func_1741()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1742()
{
	if (func_1799())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1743()
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

float func_1744()
{
	return Global_1955565->f_3;
}

void func_1745(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1750(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1746(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1750(iParam0, 2, 0, 0);
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

float func_1747(float fParam0, float fParam1, float fParam2)
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

bool func_1748()
{
	return func_2082(12) <= -99f;
}

bool func_1749()
{
	return func_2082(12) >= 99f;
}

char* func_1750(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_1534(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_1534(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1751(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1524();
	}
	if (func_125() == -1)
	{
		return Global_26796.f_26[iParam0]->f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0]->f_1;
}

void func_1752(var uParam0, int iParam1)
{
	if (func_125() == -1)
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

bool func_1753(int iParam0)
{
	Global_1946804->f_964.f_2 = 0;
	if (func_125() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1195(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1754(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

int func_1755(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1171();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1756(var uParam0)
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

var func_1757(var uParam0)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_1758(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_1759(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_978(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1332(&Var0, func_668(0));
	}
	if (!func_979(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_981(iVar14);
	return uVar15;
}

int func_1760(int iParam0)
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

int func_1761(int iParam0)
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

int func_1762(int iParam0)
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

int func_1763(int iParam0)
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

void func_1764(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_2084(iParam1);
	func_2085(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_2086(&(uParam0->f_26), iVar1);
		if (func_2087(uParam0->f_26, &iVar0))
		{
			func_2088(iVar0, iVar1);
		}
	}
}

bool func_1765(int iParam0, int iParam1)
{
	Var0 = { func_1185(iParam0, 0, 0) };
	Var5 = { func_669(iParam0, Var0, Var0.f_4, 0) };
	if (func_1531(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_1209(0), &Var5, iParam1);
	return true;
}

void func_1766(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

void func_1767(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_2089(iParam2, *uParam0);
	func_1728(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

int func_1768(int iParam0)
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

bool func_1769(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

void func_1770(int iParam0, int iParam1, var uParam2)
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

bool func_1771(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1538(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_926(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_1209(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_1772(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_125() == -1)
	{
		if (func_1364(43))
		{
			if (func_612(iParam0, 412399755))
			{
				func_1820(-1791518714);
				if (func_1821() == 0)
				{
					func_222(0, 10);
					iVar0 = func_2090(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_1823(iParam0) < func_1824(iParam0))
						{
							func_1370(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_1364(44))
		{
			if (func_612(iParam0, 709057512))
			{
				func_1820(-2087881550);
				if (func_1821() == 1)
				{
					func_222(0, 10);
					iVar0 = func_2090(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_1823(iParam0) < func_1824(iParam0))
						{
							func_1370(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_1364(45))
		{
			if (func_612(iParam0, -1478961327))
			{
				func_1820(1908068621);
				if (func_1821() == 2)
				{
					func_222(0, 10);
					iVar0 = func_2090(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_1823(iParam0) < func_1824(iParam0))
						{
							func_1370(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_1364(46))
		{
			if (func_612(iParam0, -1238404098))
			{
				func_1820(1611247019);
				if (func_1821() == 3)
				{
					func_222(0, 10);
					iVar0 = func_2090(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_1823(iParam0) < func_1824(iParam0))
						{
							func_1370(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_1364(47))
		{
			if (func_612(iParam0, 1160548794))
			{
				func_1820(1319635688);
				if (func_1821() == 4)
				{
					func_222(0, 10);
					iVar0 = func_2090(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_1823(iParam0) < func_1824(iParam0))
						{
							func_1370(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_1773(int iParam0)
{
	if (func_125() != -1)
	{
		return false;
	}
	if (func_1373(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1494(iParam0, &uVar0, 1, 0, 0);
	}
	return func_793(iParam0, 1, 0);
}

void func_1774(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_826(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_1376(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_1484(iVar0))
	{
		if (func_125() == -1)
		{
			func_1377(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_1315(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_969(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1775(int iParam0, int iParam1)
{
	if (func_612(iParam0, 58855631))
	{
		func_1264(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1776()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1777(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1778(int iParam0)
{
	if (func_125() != -1)
	{
		return;
	}
	iVar0 = func_2091(iParam0);
	fVar1 = func_2092(iParam0);
	if ((Global_1347477->f_117 || !func_40(31)) || !func_2093(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_2094(iVar0) >= 7)
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
	func_2095(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_1341(_create_var_string(6, func_2096(iParam0), fVar1), "itemtype_textures", func_2097(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1779(int iParam0)
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

int func_1780(int iParam0, int iParam1)
{
	if (!func_1071(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1781(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_1369() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_2098(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_2099(), 12);
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
			else if (func_1816() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_2100(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1816(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_2101(), 13);
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
			else if (func_1817() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_2102(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1817(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1780(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1782(int iParam0, int iParam1, int iParam2)
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

bool func_1783(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1784(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1785(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_2103(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_793(iVar2, 1, 0) || func_2105(func_2104(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1789(func_2103(iVar0))), func_1789(func_2103(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1816() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_2106(iVar0)), func_2106(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_2100() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_2106(iVar0)), func_2106(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_2106(iVar0)), func_2106(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1827(iParam3, func_2107(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1823(iVar2) - iParam7) >= func_1780(iParam3, func_2108(iVar0));
				}
				else
				{
					bVar1 = func_1823(iVar2) >= func_1780(iParam3, func_2108(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1823(iVar2) + iParam7) >= func_1780(iParam3, func_2108(iVar0));
			}
			else
			{
				bVar1 = func_1823(iVar2) >= func_1780(iParam3, func_2108(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_2109(iVar2)), func_2109(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_2110(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_2111(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_2111(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1817() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_2112(iVar0)), func_2112(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_2102() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_2112(iVar0)), func_2112(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_2112(iVar0)), func_2112(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1827(iParam3, func_2107(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1823(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_2113(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_2113(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1159(iVar2)), func_1159(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1786(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_2101() >= 13)
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

bool func_1787(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_232(func_1853(0)) && ((func_376(0) == 1 || func_376(0) == 8) || func_376(0) == 6))
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

var func_1788(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1789(int iParam0)
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

void func_1790(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1791(int iParam0)
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
			func_2114(1);
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
			func_2115(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_2115(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_2115(3);
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
			func_2116(1);
			break;
		case 34:
			func_2117(1);
			break;
		case 35:
			func_2118(1);
			break;
		case 36:
			break;
		case 37:
			func_2119(0);
			break;
		case 38:
			func_2120(0);
			break;
		case 39:
			func_2121(0);
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
			if ((!&Global_1879534 && func_158()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_1541("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_341(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_158()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_1541("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_341(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_158()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_1541("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_341(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_158()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_1541("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_341(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_125() == -1)
			{
				if (!func_1198(99217379) || func_1178(99217379) == 2110595215)
				{
					if (func_202())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_793(iVar0, 1, 0))
					{
						func_1419(iVar0, 1, 752097756);
					}
					func_957(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_125() == -1)
			{
				if (!func_793(1013902307, 1, 0))
				{
					func_1419(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_125() == -1)
			{
				if (!func_793(1013902307, 1, 0))
				{
					func_1419(1013902307, 1, 752097756);
				}
				if (!func_793(142640135, 1, 0))
				{
					func_1419(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_125() == -1)
			{
				if (!func_793(786809402, 1, 0))
				{
					func_1419(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_125() == -1)
			{
				if (!func_793(786809402, 1, 0))
				{
					func_1419(786809402, 1, 752097756);
				}
				if (!func_793(-518019409, 1, 0))
				{
					func_1419(-518019409, 1, 752097756);
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
			func_2122();
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

bool func_1792(int iParam0)
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

int func_1793(int iParam0, int iParam1)
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

void func_1794(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_868(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1795(int iParam0)
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
	iVar2 = func_435();
	func_1514(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1796(int iParam0)
{
	if (func_315(iParam0))
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

bool func_1797(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1798(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_40(50))
			{
				if (!func_40(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_40(51))
			{
				if (!func_40(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1799()
{
	return _unlock_is_unlocked(-121456797);
}

void func_1800()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1801()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1802()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_793(func_2123(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1803(int iParam0)
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

bool func_1804(int iParam0, int iParam1)
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
	if (func_793(iVar0, 1, 0) && func_793(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1805(int iParam0)
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

bool func_1806(int iParam0, int iParam1)
{
	iVar0 = func_2124(iParam0);
	if (iVar0 != -15)
	{
		func_1514(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_1519(iVar0, 1);
	}
	return false;
}

int func_1807(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_793(1811977508, 1, 0))
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
			if (func_278(iVar25, 0) && func_612(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_1808(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1341(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_1809(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_2125())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1341(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_2126(iVar0);
			func_2127(iVar0, 0, 0);
		}
		func_1341(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_1386(func_872(1644987397), iVar1);
	}
}

void func_1810(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1811(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1812(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1813(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1814(int iParam0)
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
	iVar1 = func_1823(iVar9);
	iVar2 = func_1823(iVar10);
	iVar3 = func_1823(iVar11);
	iVar5 = func_1824(iVar9);
	iVar6 = func_1824(iVar10);
	iVar7 = func_1824(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1823(iVar12);
		iVar8 = func_1824(iVar12);
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

void func_1815(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1816()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_2128(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1817()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1818(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_2113(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_2113(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_2113(iVar0))
		{
			*sParam2++;
		}
		if (func_2113(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_2113(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_2113(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_2113(iVar0))
		{
			*sParam2++;
		}
		if (func_2113(iVar1))
		{
			*sParam2++;
		}
		if (func_2113(iVar0) && func_2113(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_2113(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_2113(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_2113(iVar0))
		{
			*sParam2++;
		}
		if (func_2113(iVar1))
		{
			*sParam2++;
		}
		if (func_2113(iVar2))
		{
			*sParam2++;
		}
		if ((func_2113(iVar0) && func_2113(iVar1)) && func_2113(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_2113(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_2113(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_2113(iVar0))
		{
			*sParam2++;
		}
		if (func_2113(iVar1))
		{
			*sParam2++;
		}
		if (func_2113(iVar2))
		{
			*sParam2++;
		}
		if (func_2113(iVar3))
		{
			*sParam2++;
		}
		if (((func_2113(iVar0) && func_2113(iVar1)) && func_2113(iVar2)) && func_2113(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1819(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_2129(1497516462);
			func_2130(2016141805);
			func_2130(1010885152);
			func_2130(-502324015);
			break;
		case 2016141805:
			func_2130(1497516462);
			func_2129(2016141805);
			func_2130(1010885152);
			func_2130(-502324015);
			break;
		case 1010885152:
			func_2130(1497516462);
			func_2130(2016141805);
			func_2129(1010885152);
			func_2130(-502324015);
			break;
		case -502324015:
			func_2130(1497516462);
			func_2130(2016141805);
			func_2130(1010885152);
			func_2129(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_2130(-538889627);
			func_2130(-538880323);
			func_2130(-1056767524);
			func_2129(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_2131();
			func_2129(iParam0);
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
			func_2132();
			func_2129(iParam0);
			break;
		case 2019386373:
			func_2130(-664252410);
			func_2130(2109952320);
			func_2129(2019386373);
			break;
		case -664252410:
			func_2130(2019386373);
			func_2130(2109952320);
			func_2129(-664252410);
			break;
		case 2109952320:
			func_2130(2019386373);
			func_2130(-664252410);
			func_2129(2109952320);
			break;
		case -1674179981:
			func_2130(-1835851517);
			func_2130(-1838352012);
			func_2129(-1674179981);
			break;
		case -1835851517:
			func_2130(-1674179981);
			func_2130(-1838352012);
			func_2129(-1835851517);
			break;
		case -1838352012:
			func_2130(-1674179981);
			func_2130(-1835851517);
			func_2129(-1838352012);
			break;
		case -1717960576:
			func_2130(210001842);
			func_2129(-1717960576);
			break;
		case 210001842:
			func_2130(-1717960576);
			func_2129(210001842);
			break;
		case -150493654:
			func_2130(-1271608261);
			func_2130(1846061697);
			func_2130(-1145519186);
			func_2129(-150493654);
			break;
		case -1271608261:
			func_2130(-150493654);
			func_2130(1846061697);
			func_2130(-1145519186);
			func_2129(-1271608261);
			break;
		case 1846061697:
			func_2130(-150493654);
			func_2130(-1271608261);
			func_2130(-1145519186);
			func_2129(1846061697);
			break;
		case -1145519186:
			func_2130(-150493654);
			func_2130(-1271608261);
			func_2130(1846061697);
			func_2129(-1145519186);
			break;
		case 1766284049:
			func_2130(280705402);
			func_2130(1926308480);
			func_2129(1766284049);
			break;
		case 280705402:
			func_2130(1766284049);
			func_2130(1926308480);
			func_2129(280705402);
			break;
		case 1926308480:
			func_2130(1766284049);
			func_2130(280705402);
			func_2129(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_2130(439465264);
				func_2129(1609506757);
			}
			else
			{
				func_2130(1609506757);
				func_2130(439465264);
			}
			break;
		case 439465264:
			if (func_744(1609506757))
			{
				if (bParam1)
				{
					func_2129(439465264);
				}
				else
				{
					func_2130(439465264);
				}
			}
			break;
		case 1822001510:
			func_2130(-1612662716);
			func_2129(1822001510);
			break;
		case -1612662716:
			func_2130(1822001510);
			func_2129(-1612662716);
			break;
		case 1306158345:
			func_2130(1952610440);
			func_2130(-223469678);
			func_2130(-404698347);
			func_2130(1517904467);
			func_2129(1306158345);
			break;
		case 1952610440:
			func_2130(1306158345);
			func_2130(-223469678);
			func_2130(-404698347);
			func_2130(1517904467);
			func_2129(1952610440);
			break;
		case -223469678:
			func_2130(1306158345);
			func_2130(1952610440);
			func_2130(-404698347);
			func_2130(1517904467);
			func_2129(-223469678);
			break;
		case -404698347:
			func_2130(1306158345);
			func_2130(1952610440);
			func_2130(-223469678);
			func_2130(1517904467);
			func_2129(-404698347);
			break;
		case 1517904467:
			func_2130(1306158345);
			func_2130(1952610440);
			func_2130(-223469678);
			func_2130(-404698347);
			func_2129(1517904467);
			break;
		case 1376646519:
			func_2130(931649776);
			func_2130(-434590080);
			func_2130(1743048395);
			func_2130(449774763);
			func_2129(1376646519);
			break;
		case 931649776:
			func_2130(1376646519);
			func_2130(-434590080);
			func_2130(1743048395);
			func_2130(449774763);
			func_2129(931649776);
			break;
		case -434590080:
			func_2130(1376646519);
			func_2130(931649776);
			func_2130(1743048395);
			func_2130(449774763);
			func_2129(-434590080);
			break;
		case 1743048395:
			func_2130(1376646519);
			func_2130(931649776);
			func_2130(-434590080);
			func_2130(449774763);
			func_2129(1743048395);
			break;
		case 449774763:
			func_2130(1376646519);
			func_2130(931649776);
			func_2130(-434590080);
			func_2130(1743048395);
			func_2129(449774763);
			break;
		case -1414537028:
			func_2130(38162571);
			func_2130(1350391819);
			func_2130(54073871);
			func_2129(-1414537028);
			break;
		case 38162571:
			func_2130(-1414537028);
			func_2130(1350391819);
			func_2130(54073871);
			func_2129(38162571);
			break;
		case 1350391819:
			func_2130(-1414537028);
			func_2130(38162571);
			func_2130(54073871);
			func_2129(1350391819);
			break;
		case 54073871:
			func_2130(-1414537028);
			func_2130(38162571);
			func_2130(1350391819);
			func_2129(54073871);
			break;
		case 198200492:
			func_2129(198200492);
			func_2130(-1124061431);
			func_2130(52706132);
			func_2130(-259123672);
			break;
		case -1124061431:
			func_2130(198200492);
			func_2129(-1124061431);
			func_2130(52706132);
			func_2130(-259123672);
			break;
		case 52706132:
			func_2130(198200492);
			func_2130(-1124061431);
			func_2129(52706132);
			func_2130(-259123672);
			break;
		case -259123672:
			func_2130(198200492);
			func_2130(-1124061431);
			func_2130(52706132);
			func_2129(-259123672);
			break;
		case -919512195:
			func_2129(-919512195);
			func_2130(-1925798111);
			func_2130(420709909);
			func_2130(1703426636);
			break;
		case -1925798111:
			func_2129(-1925798111);
			func_2130(-919512195);
			func_2130(420709909);
			func_2130(1703426636);
			break;
		case 420709909:
			func_2129(420709909);
			func_2130(-919512195);
			func_2130(-1925798111);
			func_2130(1703426636);
			break;
		case 1703426636:
			func_2129(1703426636);
			func_2130(-919512195);
			func_2130(-1925798111);
			func_2130(420709909);
			break;
		case -1223121209:
			func_2129(-1223121209);
			func_2130(630808005);
			break;
		case 630808005:
			func_2129(630808005);
			func_2130(-1223121209);
			break;
		case 1453909576:
			func_2129(1453909576);
			func_2130(1643531967);
			break;
		case 1643531967:
			func_2129(1643531967);
			func_2130(1453909576);
			break;
		case 0:
			func_2129(0);
			func_2130(473295046);
			func_2130(-1738165526);
			break;
		case 473295046:
			func_2129(473295046);
			func_2130(0);
			func_2130(-1738165526);
			break;
		case -1738165526:
			func_2129(-1738165526);
			func_2130(0);
			func_2130(473295046);
			break;
		case 932909855:
			func_2129(932909855);
			func_2130(2051822093);
			break;
		case 2051822093:
			func_2129(2051822093);
			func_2130(932909855);
			break;
		case 405586984:
			func_2129(405586984);
			func_2130(1509509592);
			func_2130(-959357075);
			func_2130(-1311865656);
			break;
		case 1509509592:
			func_2129(1509509592);
			func_2130(405586984);
			func_2130(-959357075);
			func_2130(-1311865656);
			break;
		case -959357075:
			func_2129(-959357075);
			func_2130(1509509592);
			func_2130(405586984);
			func_2130(-1311865656);
			break;
		case -1311865656:
			func_2129(-1311865656);
			func_2130(1509509592);
			func_2130(-959357075);
			func_2130(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_2129(-524145696);
			}
			else
			{
				func_2130(-524145696);
			}
			func_2130(1626481264);
			func_2130(282809459);
			break;
		case 282809459:
			func_2129(282809459);
			func_2130(1626481264);
			func_2130(-524145696);
			break;
		case 1626481264:
			func_2129(1626481264);
			func_2130(-524145696);
			func_2130(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_2129(885203519);
			}
			else
			{
				func_2130(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_2129(-1080627546);
			}
			else
			{
				func_2130(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_744(iParam0))
				{
					func_2129(iParam0);
				}
			}
			else if (func_744(iParam0))
			{
				func_2130(iParam0);
			}
			break;
	}
}

void func_1820(int iParam0)
{
	if (!func_2133(iParam0))
	{
		func_2135(func_2134(iParam0));
	}
}

int func_1821()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_2133(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1822(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1823(iVar9);
	iVar2 = func_1823(iVar10);
	iVar3 = func_1823(iVar11);
	iVar5 = func_1824(iVar9);
	iVar6 = func_1824(iVar10);
	iVar7 = func_1824(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1823(iVar12);
		iVar8 = func_1824(iVar12);
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

int func_1823(int iParam0)
{
	if (func_793(iParam0, 1, 0))
	{
		iVar0 = func_1315(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1824(int iParam0)
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

int func_1825(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1826(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1827(int iParam0, int iParam1)
{
	if (!func_1071(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1828(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1827(iParam1, 5) || iParam0 == func_1827(iParam1, 6)) || iParam0 == func_1827(iParam1, 7)) || iParam0 == func_1827(iParam1, 8)) || iParam0 == func_1827(iParam1, 9))
	{
		func_1818(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_1370(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_1372(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1829(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1827(iParam1, 5) || iParam0 == func_1827(iParam1, 6)) || iParam0 == func_1827(iParam1, 7)) || iParam0 == func_1827(iParam1, 8)) || iParam0 == func_1827(iParam1, 9))
	{
		if (func_1818(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_1370(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_1372(51, 0, 0, iVar0, func_1780(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_1370(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_1372(51, 0, 0, iVar0, func_1780(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1830()
{
	if (func_1275((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1831(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1832(int iParam0)
{
	if (!func_2136(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1833(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

bool func_1834(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1835(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_117(iParam0))
	{
		return;
	}
	if (func_7(iParam0))
	{
		return;
	}
	if (!func_2137(iParam0))
	{
		func_2138(iParam0, 1, 0);
	}
	iVar0 = func_1354(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_118(iParam0, 512))
		{
			func_94(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_759() && !bParam1) && !func_742(0, 0, 1))
	{
		func_196(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_953(iParam0, 6);
	if (bParam2)
	{
		if (!func_742(0, 0, 1))
		{
			func_222(1, 4);
		}
	}
}

bool func_1836(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_339(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1837(int iParam0, int iParam1)
{
	if (func_612(iParam1, 130796156))
	{
		func_2139(iParam1, 0);
	}
	else if (func_612(iParam1, 930141731))
	{
		func_2139(iParam1, 1);
		func_2140(iParam0);
	}
}

void func_1838(var uParam0, int iParam1)
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

int func_1839(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_2141(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_2142(uParam2, iParam0, Var1);
	return 1;
}

int func_1840(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1841(int iParam0)
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

int func_1842(int iParam0)
{
	if (!func_2143(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1843(var uParam0)
{
	if (!does_cam_exist(*uParam0))
	{
		return false;
	}
	if (is_cam_interpolating(*uParam0))
	{
		return false;
	}
	if (Global_1914319->f_19461.f_179)
	{
		return false;
	}
	if (Global_1914319->f_19461.f_1 == 0 || Global_1914319->f_19461.f_1 == -999503751)
	{
		return false;
	}
	if (Global_1914319->f_19461.f_181)
	{
		return false;
	}
	return true;
}

void func_1844(float fParam0, float fParam1)
{
	fVar0 = Global_1914319->f_19461.f_182;
	fVar1 = Global_1914319->f_19461.f_183;
	if (fVar0 > 0f)
	{
		if (fVar0 < 0.2f)
		{
			fVar0 = 0f;
		}
		else
		{
			fVar0 = (fVar0 - 0.2f);
		}
	}
	else if (fVar0 < 0f)
	{
		if (fVar0 > -0.2f)
		{
			fVar0 = 0f;
		}
		else
		{
			fVar0 = (fVar0 + 0.2f);
		}
	}
	if (fVar1 > 0f)
	{
		if (fVar1 < 0.2f)
		{
			fVar1 = 0f;
		}
		else
		{
			fVar1 = (fVar1 - 0.2f);
		}
	}
	else if (fVar1 < 0f)
	{
		if (fVar1 > -0.2f)
		{
			fVar1 = 0f;
		}
		else
		{
			fVar1 = (fVar1 + 0.2f);
		}
	}
	fVar0 = (fVar0 + (fParam0 * 0.5f));
	fVar1 = (fVar1 + (fParam1 * 0.5f));
	if (fVar0 > 1f)
	{
		fVar0 = 1f;
	}
	else if (fVar0 < -1f)
	{
		fVar0 = -1f;
	}
	if (fVar1 > 1f)
	{
		fVar1 = 1f;
	}
	else if (fVar1 < -1f)
	{
		fVar1 = -1f;
	}
	Global_1914319->f_19461.f_182 = fVar0;
	Global_1914319->f_19461.f_183 = fVar1;
}

int func_1845(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12)
{
	fVar0 = (*uParam3 + (fParam7 * 2f));
	fVar1 = (*uParam4 + (fParam8 * 2f));
	if (fVar1 > fParam12)
	{
		fVar1 = fParam12;
	}
	if (fVar1 < fParam11)
	{
		fVar1 = fParam11;
	}
	if (fVar0 > fParam10)
	{
		fVar0 = fParam10;
	}
	if (fVar0 < fParam9)
	{
		fVar0 = fParam9;
	}
	vVar2 = { (*uParam5 + fVar0), 0f, (*uParam6 + fVar1) };
	vVar5 = { func_2144(vVar2) };
	vVar8 = { *uParam1 - vVar5 * Vector(Global_1914319->f_19461.f_194, Global_1914319->f_19461.f_194, Global_1914319->f_19461.f_194) };
	*uParam0 = { vVar8 };
	*uParam2 = { vVar2 };
	*uParam3 = fVar0;
	*uParam4 = fVar1;
	return 1;
}

Vector3 func_1846(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return func_2145(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

int func_1847(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

void func_1848(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_125() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

int func_1849(int iParam0)
{
	switch (func_233(iParam0))
	{
		case 1:
			iVar0 = func_234(iParam0);
			return func_2146(iVar0);
		case 8:
			iVar1 = func_234(iParam0);
			if (func_887((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_2147(iVar1);
			}
			break;
	}
	return -1;
}

void func_1850(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_125() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_2148(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_2149();
		Global_1898077->f_9 = func_2150(Global_1894899->f_2);
		func_2151(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_1851()
{
	if (!func_120((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_120((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_120((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_120((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_120((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_120((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_120((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_1852(int iParam0, int iParam1)
{
	if (!func_232(iParam0))
	{
		return;
	}
	func_2152(iParam0, iParam1);
}

int func_1853(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_1854(bool bParam0)
{
	if (!bParam0 && func_744(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_1855(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_1856(int iParam0, bool bParam1)
{
	if (func_125() != -1)
	{
		return;
	}
	if (func_1853(0) != iParam0)
	{
		return;
	}
	if (func_2153(iParam0))
	{
		if (bParam1)
		{
			func_2154(-525676072);
		}
		else
		{
			func_2155(-525676072);
		}
	}
}

int func_1857(int iParam0)
{
	return func_2157(func_2156(iParam0));
}

int func_1858(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

bool func_1859(int iParam0, bool bParam1, int iParam2)
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

bool func_1860(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_2158((*Global_1835011)[iParam0]);
	}
	return false;
}

int func_1861(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

int func_1862(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

int func_1863(int iParam0)
{
	switch (iParam0)
	{
		case 1250092473:
			return -2102478220;
		case -450913544:
			return 225031420;
		case 788010710:
			return -1696372134;
		case -1505978566:
			return 225031420;
		case -893163968:
			return -2102478220;
		case -207860920:
			return 225031420;
		case 99217379:
			return 225031420;
		case -735900586:
			return 225031420;
		default:
			break;
	}
	return 0;
}

void func_1864(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1865(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_1866(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = func_339(iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 177369922:
			func_1864(uParam0, iParam1);
			break;
		case -1551449832:
			func_1865(uParam0, iParam1);
			break;
	}
}

int func_1867(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_10;
}

void func_1868(int iParam0, int iParam1)
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

void func_1869(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = func_339(iParam1);
	if (iVar3 == 0)
	{
		return;
	}
	switch (iVar3)
	{
		case -1346384396:
			func_1607(uParam0, iParam1);
			break;
		case -712836614:
			func_1608(uParam0, iParam1);
			break;
		case -1629133289:
			func_1609(uParam0, iParam1);
			break;
		case 1302066700:
			func_1610(uParam0, iParam1);
			break;
		case 599669344:
			func_1611(uParam0, iParam1);
			break;
		case -1555511632:
			func_1612(uParam0, iParam1);
			break;
	}
	if (func_1621(iParam1))
	{
		func_1609(uParam0, 0);
		func_1610(uParam0, 0);
		func_1607(uParam0, func_1622(iParam1));
	}
	else if (func_1620(iParam1))
	{
		func_1609(uParam0, 0);
		if (!func_2159(986998820, 1) && func_2160(986998820, &iVar1, 1))
		{
			func_1610(uParam0, iVar1);
		}
		if (!func_2159(-1189569496, 1) && func_2160(-1189569496, &iVar2, 1))
		{
			func_1607(uParam0, iVar2);
		}
	}
	else if (func_1038(iParam1))
	{
		if (!func_2159(325139909, 1) && func_2160(325139909, &iVar0, 1))
		{
			func_1609(uParam0, iVar0);
		}
		if (!func_2159(986998820, 1) && func_2160(986998820, &iVar1, 1))
		{
			func_1610(uParam0, iVar1);
		}
		if (!func_2159(-1189569496, 1) && func_2160(-1189569496, &iVar2, 1))
		{
			func_1607(uParam0, iVar2);
		}
	}
}

bool func_1870(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_1871(int iParam0)
{
	return func_826(iParam0) == 307971639;
}

bool func_1872(int iParam0)
{
	return func_974(iParam0) > 0;
}

bool func_1873(int iParam0)
{
	iVar0 = func_826(iParam0);
	switch (iVar0)
	{
		case -1977020088:
		case -1013984273:
		case 1194991665:
			return true;
		default:
			break;
	}
	iVar1 = func_339(iParam0);
	switch (iVar1)
	{
		case -1307071228:
		case -791307532:
		case 1117585025:
		case 1147306508:
		case 1511828864:
			return true;
		default:
			break;
	}
	return false;
}

int func_1874(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		return -1;
	}
	if (iParam1 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (uParam0[iVar0] == iParam1 && (*uParam0)[iVar0]->f_3 == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1875(int iParam0, int iParam1)
{
	iVar0 = func_1705(iParam1);
	func_1195(&(Global_1946804->f_964), iVar0, iParam0, -897569541, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	return _0xed4413cee1bf142c(&(Global_1946804->f_964));
}

bool func_1876(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 14);
}

bool func_1877(int iParam0, int iParam1)
{
	if (!func_1731(iParam0))
	{
		return false;
	}
	if (func_125() != -1)
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

int func_1878(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10074;
		case 2:
			return 10076;
		case 3:
			return 10077;
		case 6:
			return 10034;
		case 7:
			return 10040;
		case 8:
			return 10041;
		case 13:
			return 10042;
		case 14:
			return 10043;
		case 15:
			return 10043;
		case 17:
			return 10044;
		case 18:
			return 10050;
		case 19:
			return 10051;
		case 20:
			return 10052;
		case 21:
			return 10053;
		case 22:
			return 10000;
		case 23:
			return 10025;
		case 24:
			return 10026;
		case 25:
			return 10096;
		case 26:
			return 10098;
		case 27:
			return 10101;
		case 28:
			return 10102;
		case 29:
			return 10103;
		case 30:
			return 10104;
		case 31:
			return 10105;
		case 36:
			return 10005;
		case 37:
			return 10006;
		case 38:
			return 10008;
		case 39:
			return 10011;
		case 40:
			return 10012;
		case 41:
			return 10013;
		case 42:
			return 10014;
		case 43:
			return 10016;
		case 44:
			return 10017;
		case 45:
			return 10018;
		case 46:
			return 10020;
		case 47:
			return 10019;
		case 55:
			return 10116;
		case 48:
			return 10113;
		case 49:
			return 10114;
		case 50:
			return 10115;
		case 60:
			return 10028;
		case 61:
			return 10031;
		case 62:
			return 10031;
		case 65:
			return 10032;
		case 68:
			return 10058;
		case 69:
			return 10059;
		case 72:
			return 10061;
		case 73:
			return 10064;
		case 74:
			return 10065;
		case 75:
			return 10066;
		case 76:
			return 10067;
		case 77:
			return 10068;
		case 78:
			return 10069;
		case 79:
			return 10118;
		case 82:
			return 10088;
		case 86:
			return 10090;
		case 85:
			return 10090;
		case 89:
			return 10047;
		case 88:
			return 10047;
		case 120:
			return 10071;
		case 106:
			return 10036;
		case 107:
			return 10038;
		case 109:
			return 10007;
		case 110:
			return 10010;
		case 112:
			return 10097;
		case 114:
			return 10027;
		case 102:
			return 10060;
		case 103:
			return 10063;
		case 116:
			return 10085;
		case 128:
			return 10078;
		case 129:
			return 10079;
		case 130:
			return 10080;
		case 131:
			return 10081;
		case 132:
			return 10092;
		case 133:
	}
}
