void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(555))
	{
		if (func_1(Local_43))
		{
			func_2(Global_1935630, 32768);
		}
		func_3(&Local_43, 1);
	}
	func_4(&uScriptParam_0, &Local_43);
	while (!func_5(&Local_43, 1))
	{
		if (func_6(&Local_43) != 10)
		{
			if ((func_6(&Local_43) == 3 || func_6(&Local_43) == 4) && (!func_7(&Local_43) || func_8(&(Local_43.f_958)) > 0))
			{
				func_9(&Local_43, func_5(&Local_43, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && func_10(&Local_43)) && func_5(&Local_43, 65536))
			{
				func_9(&Local_43, 1);
			}
		}
		if (func_6(&Local_43) >= 3 && func_6(&Local_43) <= 7)
		{
			func_11(&Local_43);
		}
		if (((((func_6(&Local_43) >= 5 && func_6(&Local_43) <= 7) && !func_5(&Local_43, 4096)) && _does_anim_scene_exist(Local_43.f_428.f_444)) && _is_anim_scene_started(Local_43.f_428.f_444, false)) && !_is_anim_scene_paused(Local_43.f_428.f_444))
		{
			MemCopy(&Var1, {func_12(Local_43)}, 4);
			func_13(Var1, &(Local_43.f_428));
			disable_control_action(0, -842734359, false);
		}
		switch (func_6(&Local_43))
		{
			case 8:
				if (func_14(&Local_43))
				{
					func_15(&Local_43);
					func_16(&Local_43);
					func_17(&Local_43, 0);
				}
				else if (!func_10(&Local_43))
				{
					if (!func_18(&(Local_43.f_2899)))
					{
						func_19(&(Local_43.f_2899), 0);
					}
					if (!func_20(&Local_43))
					{
						if (func_21(&(Local_43.f_2899)) >= 1f)
						{
							func_22(Local_43.f_2889, 2097152);
							func_23(&Local_43);
							func_24(&Local_43);
							func_17(&Local_43, 10);
						}
					}
					else
					{
						if (!func_5(&Local_43, 536870912))
						{
							pause_clock(true, 0);
							func_25(&Local_43, 536870912);
						}
						func_26(&(Local_43.f_2899));
					}
				}
				break;
			case 0:
				if (func_10(&Local_43))
				{
					func_16(&Local_43);
				}
				if (!func_10(&Local_43) || func_5(&Local_43, 65536))
				{
					if (func_27(&Local_43))
					{
						func_17(&Local_43, 1);
					}
				}
				break;
			case 1:
				if (func_10(&Local_43))
				{
					func_16(&Local_43);
				}
				if (func_28(&Local_43))
				{
					func_17(&Local_43, 2);
				}
				break;
			case 2:
				if (func_10(&Local_43))
				{
					func_16(&Local_43);
				}
				if (func_29(&Local_43))
				{
					if (!func_7(&Local_43) || func_10(&Local_43))
					{
						if (!func_30(Local_43.f_2889))
						{
							Local_43.f_2889 = func_32(func_31(Local_43));
						}
						func_22(Local_43.f_2889, 4);
						func_25(&Local_43, 8192);
					}
					if (func_10(&Local_43))
					{
						func_33(&Local_43);
						func_17(&Local_43, 9);
					}
					else
					{
						func_17(&Local_43, 3);
					}
				}
				break;
			case 9:
				if (func_16(&Local_43))
				{
					func_34(&Local_43);
					func_15(&Local_43);
					func_35(&Local_43);
					if (!func_5(&Local_43, 256))
					{
						func_36(&Local_43);
						func_37(Local_43);
						func_38(&Local_43);
						func_17(&Local_43, 7);
					}
					else
					{
						func_17(&Local_43, 5);
					}
				}
				break;
			case 3:
				if (!func_5(&Local_43, 8192))
				{
					if (func_8(&(Local_43.f_958)) == 3)
					{
						func_22(Local_43.f_2889, 4);
						func_25(&Local_43, 8192);
					}
				}
				func_39(&Local_43);
				if (func_40(func_32((*Global_1835011)[Local_43]->f_1), 512))
				{
				}
				else if (func_41(&Local_43) || func_42(&Local_43, 32768))
				{
					func_34(&Local_43);
					func_15(&Local_43);
					func_17(&Local_43, 4);
					func_19(&(Local_43.f_2890), 0);
				}
				else if (func_10(&Local_43) && !func_1(Local_43))
				{
					if (!func_18(&(Local_43.f_2899)))
					{
						func_19(&(Local_43.f_2899), 0);
					}
					if (!func_20(&Local_43))
					{
						if (func_21(&(Local_43.f_2899)) >= 1f)
						{
							func_22(Local_43.f_2889, 2097152);
							func_23(&Local_43);
							func_24(&Local_43);
							func_17(&Local_43, 10);
						}
					}
					else
					{
						if (!func_5(&Local_43, 536870912))
						{
							pause_clock(true, 0);
							func_25(&Local_43, 536870912);
						}
						func_26(&(Local_43.f_2899));
					}
				}
				break;
			case 4:
				func_43(&Local_43);
				_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
				if (func_44(&Local_43) || (func_42(&Local_43, 32768) && !func_5(&Local_43, 268435456)))
				{
					func_35(&Local_43);
					if (!func_5(&Local_43, 256))
					{
						func_36(&Local_43);
						func_38(&Local_43);
						if (!func_45(&Global_1935630, 524288) || func_42(&Local_43, 524288))
						{
							func_37(Local_43);
							func_17(&Local_43, 7);
						}
						else
						{
							func_17(&Local_43, 6);
						}
					}
					else
					{
						func_37(Local_43);
						func_17(&Local_43, 5);
					}
				}
				break;
			case 5:
				func_46(&Local_43);
				func_47(&Local_43);
				if (func_48(&(Local_43.f_2884)) >= func_49(&Local_43))
				{
					func_36(&Local_43);
					func_38(&Local_43);
					func_26(&(Local_43.f_2884));
					if (!func_42(&Local_43, 524288))
					{
						func_37(Local_43);
						func_17(&Local_43, 7);
					}
					else
					{
						func_17(&Local_43, 6);
					}
				}
				break;
			case 6:
				if (!func_18(&(Local_43.f_2906)))
				{
					func_19(&(Local_43.f_2906), 0);
				}
				if ((func_50(&(Local_43.f_428)) == 4 && _does_anim_scene_exist(Local_43.f_428.f_444)) && _is_anim_scene_paused(Local_43.f_428.f_444))
				{
					func_37(Local_43);
					func_17(&Local_43, 7);
				}
				else if (func_48(&(Local_43.f_2906)) >= 5f)
				{
					func_37(Local_43);
					func_17(&Local_43, 7);
				}
				break;
			case 7:
				func_51(&Local_43);
				if (func_52(&Local_43))
				{
					func_17(&Local_43, 10);
				}
				break;
			case 10:
				if (func_3(&Local_43, 0))
				{
					func_25(&Local_43, 1);
				}
				break;
		}
		wait(0);
	}
	terminate_this_thread();
}

bool func_1(int iParam0)
{
	iVar0 = func_32(func_31(iParam0));
	if (!func_30(iVar0))
	{
		return false;
	}
	return func_40(iVar0, 1024);
}

void func_2(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_3(int iParam0, bool bParam1)
{
	iParam0->f_2902 = bParam1;
	if (!func_53(iParam0) && !bParam1)
	{
		return false;
	}
	func_54(iParam0);
	func_55(iParam0);
	func_56(iParam0);
	func_57(iParam0);
	func_58(iParam0);
	func_59(*iParam0);
	func_60(*iParam0);
	if (is_itemset_valid(iParam0->f_5))
	{
		destroy_itemset(iParam0->f_5);
	}
	if (!Global_1935630->f_12)
	{
		task_clear_look_at(Global_35);
	}
	if (func_5(iParam0, 1024))
	{
		func_61(1);
		func_2(Global_1935630, 32768);
	}
	else
	{
		func_62();
	}
	if (bParam1)
	{
		if (func_63(&(iParam0->f_958), 33554436) && !is_player_control_on(get_player_index()))
		{
			set_player_control(get_player_index(), true, 0, false);
		}
		func_64(&(iParam0->f_958));
	}
	func_65(iParam0, 0);
	if (func_5(iParam0, 536870912))
	{
		pause_clock(false, 0);
		func_66(iParam0, 536870912);
	}
	if (bParam1)
	{
		func_67(1, 0, 0);
	}
	if (func_5(iParam0, -2147483648))
	{
		func_68();
	}
	terminate_this_thread();
	return true;
}

int func_4(var uParam0, int iParam1)
{
	*iParam1 = *uParam0;
	_0xed9582b3da8f02b4(10);
	iParam1->f_2889 = func_32(func_31(*uParam0));
	func_69(iParam1);
	if (func_10(iParam1))
	{
		func_70(&(iParam1->f_428));
		func_71(iParam1);
		func_25(iParam1, 16777216);
		func_17(iParam1, 8);
	}
	else
	{
		func_17(iParam1, 0);
	}
	if (!func_5(iParam1, 1073741824))
	{
		func_72(*iParam1);
		func_73(*iParam1);
	}
	vVar0 = { func_12(*iParam1) };
	if (!is_string_null_or_empty(&vVar0))
	{
		func_25(iParam1, 134217728);
	}
	func_19(&(iParam1->f_2896), 0);
	return 1;
}

bool func_5(int iParam0, int iParam1)
{
	return (iParam0->f_2 && iParam1) != 0;
}

int func_6(int iParam0)
{
	return iParam0->f_1;
}

bool func_7(int iParam0)
{
	if (func_5(iParam0, 16))
	{
		return false;
	}
	return func_5(iParam0, 524288);
}

int func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9(int iParam0, bool bParam1)
{
	if (!is_screen_faded_out() && !func_5(iParam0, 4))
	{
		if (func_48(&(iParam0->f_2896)) <= 0.5f)
		{
			return;
		}
		func_26(&(iParam0->f_2896));
		if ((func_74(0, 0, 1) && !func_5(iParam0, 65536)) && !func_40(iParam0->f_2889, 1024))
		{
			return;
		}
	}
	if (func_5(iParam0, 128))
	{
		return;
	}
	if (func_5(iParam0, 134217728))
	{
		if (!func_5(iParam0, 16777216))
		{
			func_75(iParam0, 16);
			if (func_7(iParam0))
			{
				func_76(iParam0);
			}
			func_25(iParam0, 16777216);
		}
		cVar0 = { func_12(*iParam0) };
		if (func_77(&(iParam0->f_428), &cVar0, bParam1, 0))
		{
			if (!func_40(iParam0->f_2889, 128))
			{
				func_22(iParam0->f_2889, 128);
			}
		}
		else if (func_40(iParam0->f_2889, 128))
		{
			func_78(iParam0->f_2889, 128);
		}
	}
}

bool func_10(int iParam0)
{
	if (func_5(iParam0, 65536))
	{
		return true;
	}
	if (!func_79((*Global_1835011)[*iParam0]))
	{
		return true;
	}
	return false;
}

void func_11(int iParam0)
{
	if (!func_18(&(iParam0->f_2893)))
	{
		func_19(&(iParam0->f_2893), 0);
	}
	if (func_48(&(iParam0->f_2893)) >= 1f)
	{
		if (_does_volume_exist(iParam0->f_425))
		{
			iVar0 = func_80(7);
			if (!is_entity_dead(iVar0))
			{
				if (!func_5(iParam0, 512))
				{
					_0xe9b168527b337bf0(iVar0, iParam0->f_425);
					func_25(iParam0, 512);
				}
			}
			else if (func_5(iParam0, 512))
			{
				func_66(iParam0, 512);
			}
		}
		func_26(&(iParam0->f_2893));
	}
}

Vector3 func_12(int iParam0)
{
	if (!func_81(iParam0))
	{
		return vVar0;
	}
	return (*Global_1835011)[iParam0]->f_9;
}

int func_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	func_82(uParam4, &uParam0);
	if (func_83(uParam4, 2) && !func_83(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_50(uParam4) != 1)
	{
		func_84(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_50(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_444) && _is_anim_scene_loaded(uParam4->f_444, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_444, false))
				{
					func_85(uParam4, &uParam0);
				}
				else if (_0xef324e9550a394d5(uParam4->f_444))
				{
					func_86(uParam4, 4);
					return 0;
				}
				else if (func_87(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_437);
				}
				func_86(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_444))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (!is_string_null_or_empty(&(uParam4->f_446)) && func_83(uParam4, 134217728))
				{
				}
				else
				{
					func_70(uParam4);
				}
				func_26(&(uParam4->f_1));
				func_86(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_88(uParam4);
				if (!func_18(&(uParam4->f_1)))
				{
					func_19(&(uParam4->f_1), 0);
				}
				else if (func_48(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_444))
					{
						_delete_anim_scene(uParam4->f_444);
					}
					func_86(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_444) || !_is_anim_scene_loaded(uParam4->f_444, true, false))
			{
				if (func_77(uParam4, &uParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_444, true, false))
					{
						func_86(uParam4, 4);
					}
					else if (!func_90(func_89(uParam4)) && !func_91(Global_35, func_89(uParam4), 100f, 1, 1))
					{
						func_92(1);
						start_player_teleport(get_player_index(), func_89(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_48(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_444))
					{
						_delete_anim_scene(uParam4->f_444);
					}
					func_86(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (!get_is_loading_screen_active())
				{
					_0xa565fac215cbc77d();
					func_93(1, 0);
					func_85(uParam4, &uParam0);
					func_86(uParam4, 3);
				}
				else
				{
					shutdown_loading_screen();
				}
			}
			else if (func_48(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_444))
				{
					_delete_anim_scene(uParam4->f_444);
				}
				func_86(uParam4, 4);
			}
			break;
		case 3:
			func_94(uParam4);
			if (func_87(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_437);
			}
			if ((_does_anim_scene_exist(uParam4->f_444) && _is_anim_scene_started(uParam4->f_444, false)) && (_0xef324e9550a394d5(uParam4->f_444) || func_83(uParam4, 512)))
			{
				if (!func_83(uParam4, 1024) && func_95(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_83(uParam4, 512))
				{
					func_26(&(uParam4->f_1));
					func_96(uParam4, 512);
					func_86(uParam4, 4);
				}
				else if (func_83(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_84(uParam4);
			}
			if (func_83(uParam4, 524288))
			{
				if (IntToFloat(absi((func_97(uParam4) - func_98(uParam4)))) <= 2f)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if (_does_anim_scene_exist(uParam4->f_444))
				{
					if (_0xef324e9550a394d5(uParam4->f_444))
					{
						_0x1b70811d3bf75db9(1, 1);
					}
				}
				if (func_99(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_98(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_100(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_444))
				{
				}
				func_101(uParam4);
				func_102(uParam4);
				return 1;
			}
			else
			{
				if (func_83(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_444) && !_0xef324e9550a394d5(uParam4->f_444))
						{
							_delete_anim_scene_2(uParam4->f_444);
						}
						func_26(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_96(uParam4, 512);
						func_103(uParam4, 67108864, 1);
						func_86(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_83(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_444)) && is_screen_faded_out()) && func_98(uParam4) <= 5000) && func_98(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_83(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_104(&(uParam4->f_501), 0);
					func_96(uParam4, 536870912);
				}
				if (func_98(uParam4) >= 5000 && func_98(uParam4) <= (func_97(uParam4) - 5000))
				{
					func_105();
				}
			}
			break;
		case 6:
			if (func_100(uParam4))
			{
				func_101(uParam4);
				func_102(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_83(uParam4, 524288))
			{
				_0x1b70811d3bf75db9(1, 1);
			}
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(1000);
					if (_is_anim_scene_paused(uParam4->f_444))
					{
						func_96(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (_does_anim_scene_exist(uParam4->f_444))
				{
					if (!_is_anim_scene_paused(uParam4->f_444))
					{
						set_anim_scene_paused(uParam4->f_444, true);
						if (_0xc17f69e1418cd11f(9) != 0)
						{
							_0xdd1232b332cbb9e7(9, 1, 0);
						}
						return 0;
					}
					else if (_0x4cdffe3189ebdbd0(uParam4->f_444))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_87(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_438);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_444) && _is_anim_scene_paused(uParam4->f_444))
						{
							set_anim_scene_paused(uParam4->f_444, false);
						}
						func_86(uParam4, 3);
					}
					else if (func_48(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_444) && _is_anim_scene_paused(uParam4->f_444))
						{
							set_anim_scene_paused(uParam4->f_444, false);
						}
						func_86(uParam4, 3);
					}
				}
				if (func_50(uParam4) == 3)
				{
					if (func_83(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_86(uParam4, 4);
			break;
	}
	return 0;
}

bool func_14(int iParam0)
{
	func_25(iParam0, 262144);
	if (func_106(iParam0))
	{
		func_25(iParam0, 65536);
		return true;
	}
	return false;
}

void func_15(int iParam0)
{
	if (!func_5(iParam0, 131072))
	{
		if (!func_5(iParam0, 2048) && !func_7(iParam0))
		{
			set_player_control(player_id(), false, 312, false);
			_hide_hud_component(-1679307491);
		}
		func_107(*iParam0);
		func_25(iParam0, 1024);
		func_108(0);
		func_109(Global_1935630, 32768);
		func_110(2);
		func_111(iParam0);
		func_112(1);
		func_59(*iParam0);
		func_60(*iParam0);
		func_33(iParam0);
		if (!func_5(iParam0, -2147483648))
		{
			func_68();
		}
		func_58(iParam0);
		func_25(iParam0, 131072);
	}
}

bool func_16(int iParam0)
{
	return true;
}

void func_17(int iParam0, int iParam1)
{
	iParam0->f_1 = iParam1;
}

bool func_18(var uParam0)
{
	return func_113(*uParam0, 1);
}

void func_19(var uParam0, bool bParam1)
{
	if (bParam1 || !func_18(uParam0))
	{
		func_26(uParam0);
	}
}

bool func_20(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_114(iVar1) && func_115(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			if (does_entity_exist(iVar2))
			{
				if (func_116(iVar1))
				{
					if (func_117(iVar2, 1116471296, -1082130432, -1082130432, -1082130432))
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

float func_21(var uParam0)
{
	if (!func_18(uParam0))
	{
		return 0f;
	}
	if (func_118(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_119() - uParam0->f_1);
}

void func_22(int iParam0, int iParam1)
{
	if (!func_30(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 || iParam1);
}

void func_23(int iParam0)
{
	func_120(&(iParam0->f_428));
}

void func_24(int iParam0)
{
	func_121(&(iParam0->f_958), iParam0->f_958);
}

void func_25(int iParam0, int iParam1)
{
	iParam0->f_2 = (iParam0->f_2 || iParam1);
	if (iParam1 == 65536)
	{
		func_109(Global_1935630, 32768);
		func_107(*iParam0);
	}
}

void func_26(var uParam0)
{
	func_122(uParam0, 0f);
}

bool func_27(int iParam0)
{
	if (!is_itemset_valid(iParam0->f_5))
	{
		iParam0->f_5 = create_itemset(true);
	}
	if (!is_itemset_valid(iParam0->f_6))
	{
		iParam0->f_6 = create_itemset(true);
	}
	if (!is_itemset_valid(iParam0->f_7))
	{
		iParam0->f_7 = create_itemset(true);
	}
	func_123(*iParam0, iParam0->f_5, iParam0->f_6, iParam0->f_7);
	if (func_90(func_124(iParam0)))
	{
		vVar0 = { func_12(*iParam0) };
		if (!is_string_null_or_empty(&vVar0))
		{
			StringCopy(&(iParam0->f_428.f_440), "cutscene@", 32);
			StringConCat(&(iParam0->f_428.f_440), &vVar0, 32);
			vVar3 = { func_125(&(iParam0->f_428)) };
			if (!func_90(vVar3))
			{
				if (get_distance_between_coords(vVar3, func_126(*iParam0), true) >= 10f)
				{
					func_127(iParam0, func_126(*iParam0));
				}
				else
				{
					func_127(iParam0, vVar3);
				}
			}
			else
			{
				return false;
			}
		}
	}
	if (!func_128(iParam0))
	{
		return false;
	}
	iParam0->f_55.f_1 = 67108863;
	iParam0->f_55 = 2;
	iParam0->f_55 = 1;
	func_71(iParam0);
	func_129(iParam0);
	func_130(iParam0);
	func_131(iParam0, Global_35, 0, 0, 0, 1);
	func_132(iParam0);
	func_133(iParam0);
	return true;
}

bool func_28(int iParam0)
{
	iVar0 = 1;
	if (!func_134(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_135(iParam0, 0))
	{
		iVar0 = 0;
	}
	if (!func_5(iParam0, 1073741824) && !func_136(*iParam0, 0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_29(int iParam0)
{
	func_138(&(iParam0->f_428), 17628);
	uLocal_22[0] = func_139(iParam0);
	func_141(&(uLocal_22[0]), func_140(0, 0), 2, 1073741824);
	task_stand_still(&(uLocal_22[0]), -1);
	set_blocking_of_non_temporary_events(&(uLocal_22[0]), true);
	func_142(&(uLocal_22[0]), -95736505, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	func_142(&(uLocal_22[0]), -733324796, 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	func_141(&(uLocal_22[1]), func_140(0, 1), 2, 1073741824);
	task_stand_still(&(uLocal_22[1]), -1);
	if (has_ped_got_weapon(&(uLocal_22[1]), 559247042, 0, false))
	{
		remove_weapon_from_ped(&(uLocal_22[1]), 559247042, true, -142743235);
	}
	set_blocking_of_non_temporary_events(&(uLocal_22[1]), true);
	func_143(286519629, 0, 0, 0, 1, 0, 0, 0);
	func_143(556568958, 0, 0, 0, 1, 0, 0, 0);
	func_131(iParam0, Global_35, 0, 0, 0, 1);
	func_131(iParam0, &(uLocal_22[0]), 0, 0, 0, 1);
	func_131(iParam0, &(uLocal_22[1]), 0, 0, 0, 1);
	func_144(&(iParam0->f_958.f_1771), &(uLocal_22[0]), "DUTCH", 0);
	func_144(&(iParam0->f_958.f_1771), &(uLocal_22[1]), "LENNY", 0);
	func_145(iLocal_27, 0);
	func_146(iParam0);
	func_131(iParam0, &(Local_14.f_3[0]), "A_M_M_MiddleSDTownfolk_01^1", 0, 0, 1);
	func_131(iParam0, &(Local_14.f_3[1]), "A_M_M_MiddleSDTownfolk_01^2", 0, 0, 1);
	func_131(iParam0, &(Local_14.f_3[2]), "A_M_M_MiddleSDTownfolk_01", 0, 0, 1);
	func_131(iParam0, &(Local_14.f_3[3]), "S_M_M_TrainStationWorker_01", 0, 0, 1);
	decor_set_int(&(Local_14.f_3[0]), func_147(), -1954804603);
	decor_set_int(&(Local_14.f_3[1]), func_147(), -795699535);
	decor_set_int(&(Local_14.f_3[2]), func_147(), -623269057);
	decor_set_int(&(Local_14.f_3[3]), func_147(), -107418554);
	func_148(iParam0, &(Local_14.f_3[0]), 0);
	func_148(iParam0, &(Local_14.f_3[1]), 0);
	func_148(iParam0, &(Local_14.f_3[2]), 0);
	func_148(iParam0, &(Local_14.f_3[3]), 0);
	func_75(iParam0, 33554432);
	func_25(iParam0, 8);
	func_149(iParam0, 100f);
	func_150(iParam0, 150f);
	func_152(iParam0, func_151(), 0);
	func_152(iParam0, func_153(), 0);
	func_152(iParam0, func_154(), 0);
	StringCopy(&cVar0, func_155(), 64);
	StringCopy(&cVar8, func_153(), 64);
	func_156(iParam0, cVar0);
	func_157(iParam0, cVar8);
	func_158(iParam0, &iVar28);
	if (!does_entity_exist(iLocal_40))
	{
		if ((_does_anim_scene_exist(iVar28) && _get_anim_scene_entity_matrix(iVar28, "P_CRATE15X", &Var16, false, 0, 2)) && !func_90(Var16))
		{
			iLocal_40 = create_object(-182450036, Var16, true, true, false, false, true);
			set_entity_rotation(iLocal_40, Var16.f_3, 2, true);
		}
		else
		{
			iLocal_40 = create_object(-182450036, 2720.674f, -1354.046f, 45.7f, true, true, false, false, true);
			set_entity_quaternion(iLocal_40, 0f, 0f, 0.870394f, -0.492355f);
		}
		func_159(iParam0, iLocal_40, "P_CRATE15X", 0, 0, 1, 0);
		func_148(iParam0, iLocal_40, 0);
	}
	if (!does_entity_exist(iLocal_41))
	{
		if ((_does_anim_scene_exist(iVar28) && _get_anim_scene_entity_matrix(iVar28, "P_CRATECONF01X", &Var16, false, 0, 2)) && !func_90(Var16))
		{
			iLocal_41 = create_object(-1816535547, Var16, true, true, false, false, true);
			set_entity_rotation(iLocal_41, Var16.f_3, 2, true);
		}
		else
		{
			iLocal_41 = create_object(-1816535547, 2720.674f, -1354.046f, 45.498f, true, true, false, false, true);
			set_entity_quaternion(iLocal_41, 0f, 0f, 0.88879f, -0.458315f);
		}
		func_159(iParam0, iLocal_41, "P_CRATECONF01X", 0, 0, 1, 0);
		func_148(iParam0, iLocal_41, 0);
	}
	if (!does_entity_exist(iLocal_42))
	{
		if ((_does_anim_scene_exist(iVar28) && _get_anim_scene_entity_matrix(iVar28, "P_CRATEBRAND03X", &Var16, false, 0, 2)) && !func_90(Var16))
		{
			iLocal_42 = create_object(2006849227, Var16, true, true, false, false, true);
			set_entity_rotation(iLocal_42, Var16.f_3, 2, true);
		}
		else
		{
			iLocal_42 = create_object(2006849227, 2720.177f, -1353.141f, 45.495f, true, true, false, false, true);
			set_entity_quaternion(iLocal_42, 0.000439f, 0.002099f, -0.204527f, 0.978859f);
		}
		func_159(iParam0, iLocal_42, "P_CRATEBRAND03X", 0, 0, 1, 0);
		func_148(iParam0, iLocal_42, 0);
	}
	if (func_8(&(iParam0->f_958)) >= 3)
	{
		if (func_5(iParam0, 128))
		{
			func_66(iParam0, 128);
		}
	}
	else if (!func_5(iParam0, 128))
	{
		func_25(iParam0, 128);
	}
	return true;
}

bool func_30(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

int func_31(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

int func_32(int iParam0)
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

void func_33(int iParam0)
{
	MemCopy(&uVar0, {func_160(*iParam0)}, 3);
	request_script(&uVar0);
}

void func_34(int iParam0)
{
}

void func_35(int iParam0)
{
	func_56(iParam0);
	func_2(Global_1935630, 32768);
	func_161(iParam0);
	func_26(&(iParam0->f_2884));
	if (func_162())
	{
		func_163();
	}
	if (func_42(iParam0, 524288))
	{
		func_109(Global_1935630, 524288);
	}
	else if (!func_42(iParam0, 32768))
	{
		Global_43805 = iParam0->f_958.f_1684;
	}
	func_164(&(iParam0->f_428), &(iParam0->f_958));
	if (func_5(iParam0, 262144))
	{
		if (func_165(&((*Global_1835011)[*iParam0]->f_29), 4))
		{
			set_clock_time(func_166(4), 0, 0);
		}
		else if (func_165(&((*Global_1835011)[*iParam0]->f_29), 2))
		{
			set_clock_time(func_166(2), 0, 0);
		}
		else if (func_165(&((*Global_1835011)[*iParam0]->f_29), 8))
		{
			set_clock_time(func_166(8), 0, 0);
		}
		else if (func_165(&((*Global_1835011)[*iParam0]->f_29), 16))
		{
			set_clock_time(func_166(16), 0, 0);
		}
		else if (func_165(&((*Global_1835011)[*iParam0]->f_29), 32))
		{
			set_clock_time(func_166(32), 0, 0);
		}
	}
}

void func_36(int iParam0)
{
}

void func_37(int iParam0)
{
	if (func_167(iParam0))
	{
		return;
	}
	iVar0 = func_32(func_31(iParam0));
	if (!func_30(iVar0))
	{
		return;
	}
	func_22(iVar0, 2048);
	(*Global_1835011)[iParam0]->f_71 = 0;
	uVar1 = func_168(iParam0);
	if (!is_string_null_or_empty(&uVar1))
	{
		set_mission_name(true, &uVar1);
		_0x1096603b519c905f(&uVar1);
	}
}

void func_38(int iParam0)
{
	vVar0 = { func_12(*iParam0) };
	if (!_does_anim_scene_exist(iParam0->f_428.f_444))
	{
	}
	else if (!_is_anim_scene_loaded(iParam0->f_428.f_444, true, false))
	{
		Global_43800 = iParam0->f_428.f_444;
	}
	else
	{
		if (func_63(&(iParam0->f_958), 8))
		{
			if (!func_63(&(iParam0->f_958), 131072))
			{
				if (!func_63(&(iParam0->f_958), 32768))
				{
					if (!func_5(iParam0, 8))
					{
						func_169(&(iParam0->f_428), &(iParam0->f_958));
					}
				}
			}
		}
		MemCopy(&Var3, {vVar0}, 4);
		func_13(Var3, &(iParam0->f_428));
	}
}

void func_39(int iParam0)
{
	if (func_8(&(iParam0->f_958)) >= 3)
	{
		if (func_5(iParam0, 128))
		{
			func_66(iParam0, 128);
		}
	}
	else if (!func_5(iParam0, 128))
	{
		func_25(iParam0, 128);
	}
	if (!bLocal_38)
	{
		if (func_170(Global_35, &(uLocal_22[0]), 40f, 1))
		{
			StringCopy(&cVar0, "MOB3_PREBANT", 24);
			if (func_171(&(iParam0->f_958.f_1771), cVar0, 0, -1, 0, 0))
			{
				bLocal_38 = true;
			}
		}
	}
	else if ((!bLocal_39 && func_172("MOB3_PREBANT")) && func_170(Global_35, &(uLocal_22[0]), 15f, 1))
	{
		func_173("MOB3_PREBANT", 1, 0);
		bLocal_39 = true;
	}
}

bool func_40(int iParam0, int iParam1)
{
	return (func_30(iParam0) && ((*Global_1898346)[iParam0]->f_1 && iParam1) != 0);
}

bool func_41(int iParam0)
{
	if (func_174(Global_35, iLocal_29, 0, 1))
	{
		StringCopy(&cVar8, func_151(), 64);
		func_156(iParam0, cVar8);
		func_175(iParam0, &cVar8);
		func_176(&(iParam0->f_958), 262144);
		func_177(&(iParam0->f_958), 131072);
		func_66(iParam0, 64);
		bLocal_36 = true;
		return true;
	}
	if (func_174(Global_35, iLocal_30, 0, 1) || func_174(Global_35, iLocal_31, 0, 1))
	{
		if (func_174(Global_35, iLocal_30, 0, 1))
		{
			StringCopy(&cVar8, func_151(), 64);
		}
		else if (func_174(Global_35, iLocal_31, 0, 1))
		{
			StringCopy(&cVar8, func_155(), 64);
		}
		func_156(iParam0, cVar8);
		func_175(iParam0, &cVar8);
		func_176(&(iParam0->f_958), 262144);
		func_177(&(iParam0->f_958), 131072);
		func_66(iParam0, 64);
		bLocal_36 = true;
		return true;
	}
	if (func_7(iParam0))
	{
		func_179(&(iParam0->f_958), func_178(iParam0), iParam0->f_958, 0);
		if (func_180(iParam0))
		{
			if (func_174(Global_35, iLocal_28, 0, 1))
			{
				StringCopy(&cVar0, func_154(), 64);
			}
			else
			{
				StringCopy(&cVar0, func_153(), 64);
			}
			func_175(iParam0, &cVar0);
			return true;
		}
	}
	if (func_5(iParam0, 64))
	{
		return false;
	}
	if (((func_181(iParam0) && !is_ped_falling(Global_35)) && !_0x3e592d0486dec0f6(Global_35)) && !is_ped_ragdoll(Global_35))
	{
		if (func_174(Global_35, iLocal_28, 0, 1))
		{
			StringCopy(&cVar0, func_154(), 64);
		}
		else
		{
			StringCopy(&cVar0, func_153(), 64);
		}
		func_175(iParam0, &cVar0);
		return true;
	}
	return false;
}

bool func_42(int iParam0, int iParam1)
{
	return func_63(&(iParam0->f_958), iParam1);
}

void func_43(int iParam0)
{
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	if (!bLocal_34)
	{
		func_182(1);
		bLocal_34 = true;
	}
}

bool func_44(int iParam0)
{
	if (func_7(iParam0))
	{
		return func_179(&(iParam0->f_958), func_178(iParam0), iParam0->f_958, 0);
	}
	return func_106(iParam0);
}

bool func_45(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_46(int iParam0)
{
}

void func_47(int iParam0)
{
	if ((!func_5(iParam0, 33554432) && !func_42(iParam0, 524288)) && !func_42(iParam0, 32768))
	{
		if (func_183(&(iParam0->f_958)))
		{
			func_184(&(iParam0->f_958), 0, 0);
			func_25(iParam0, 33554432);
		}
	}
}

float func_48(var uParam0)
{
	if (!func_18(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_118(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_119() - uParam0->f_1);
}

float func_49(int iParam0)
{
	return iParam0->f_2887;
}

int func_50(var uParam0)
{
	return *uParam0;
}

void func_51(int iParam0)
{
	if (func_185() && bLocal_36)
	{
		if (!bLocal_37)
		{
			create_model_hide(2718.728f, -1352.078f, 45.527f, 1f, -2021891582, true);
			if (does_entity_exist(iLocal_40))
			{
				set_entity_coords_no_offset(iLocal_40, Vector(45.7f, -1354.046f, 2720.674f) - Vector(0f, -1.387f, 1.339f), false, true, true);
				set_entity_quaternion(iLocal_40, 0f, 0f, 0.870394f, -0.492355f);
			}
			if (does_entity_exist(iLocal_41))
			{
				set_entity_coords_no_offset(iLocal_41, Vector(45.498f, -1354.046f, 2720.674f) - Vector(0f, -1.387f, 1.339f), false, true, true);
				set_entity_quaternion(iLocal_41, 0f, 0f, 0.88879f, -0.458315f);
			}
			if (does_entity_exist(iLocal_42))
			{
				set_entity_coords_no_offset(iLocal_42, Vector(45.495f, -1353.141f, 2720.177f) - Vector(0f, -1.387f, 1.339f), false, true, true);
				set_entity_quaternion(iLocal_42, 0.000439f, 0.002099f, -0.204527f, 0.978859f);
			}
			bLocal_37 = true;
		}
	}
}

bool func_52(int iParam0)
{
	vVar0 = { func_12(*iParam0) };
	if (is_string_null_or_empty(&vVar0))
	{
		if (func_167(*iParam0))
		{
			return true;
		}
		return false;
	}
	bVar3 = func_185();
	if (bVar3)
	{
		_uiprompt_enable_prompt_type_this_frame(6);
	}
	if (!func_5(iParam0, 32))
	{
		if (func_185())
		{
			func_25(iParam0, 32);
		}
		else if (func_48(&(iParam0->f_2884)) >= 60f)
		{
			return true;
		}
	}
	else
	{
		if (!func_185())
		{
			return true;
		}
		if (!func_5(iParam0, 4096))
		{
			if (func_167(*iParam0))
			{
				func_25(iParam0, 4096);
			}
			else
			{
				func_111(iParam0);
			}
		}
		else if (!func_167(*iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_53(int iParam0)
{
	func_186(&uLocal_32, iLocal_25, 0);
	if (!func_180(iParam0))
	{
		func_187(Local_14.f_3[3], 0);
	}
	return true;
}

void func_54(int iParam0)
{
	if (_does_volume_exist(iParam0->f_426))
	{
		func_188(iParam0->f_426);
	}
}

void func_55(int iParam0)
{
	if (_does_volume_exist(iParam0->f_425))
	{
		func_186(&(iParam0->f_427), iParam0->f_425, 0);
		if (_0xde0ea444735c1368(iParam0->f_425))
		{
			_0x2c87c3e1c7b96ee2(iParam0->f_425);
		}
		func_66(iParam0, 512);
		func_60(*iParam0);
		_delete_volume(iParam0->f_425);
	}
}

void func_56(int iParam0)
{
	bVar0 = func_40(iParam0->f_2889, 2097152);
	bVar1 = func_5(iParam0, 1024);
	iVar2 = 0;
	while (iVar2 < 27)
	{
		iVar3 = iVar2;
		if (!func_114(iVar3))
		{
		}
		else if (!func_115(iVar3))
		{
		}
		else if (!func_116(iVar3))
		{
		}
		else
		{
			iVar4 = Global_1360165[iVar2];
			if (!does_entity_exist(iVar4))
			{
			}
			else
			{
				func_189(iParam0, iVar3, iVar4, 0, bVar0, !bVar1, 0);
			}
		}
		iVar2++;
	}
}

void func_57(int iParam0)
{
	func_190(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
}

int func_58(int iParam0)
{
	if (!is_itemset_valid(iParam0->f_5))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < get_itemset_size(iParam0->f_5))
	{
		iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, iParam0->f_5));
		if (is_entity_an_object(iVar1))
		{
			iVar2 = get_object_index_from_entity_index(iVar1);
			_0xa86b0ee9b39d15d6(&iVar2);
		}
		else if (is_entity_a_ped(iVar1))
		{
			_0xbc781d24aa11f179(get_ped_index_from_entity_index(iVar1));
		}
		iVar0++;
	}
	destroy_itemset(iParam0->f_5);
	return 1;
}

void func_59(int iParam0)
{
	if (!func_81(iParam0))
	{
		return;
	}
	(*Global_1835011)[iParam0]->f_58 = 0;
	(*Global_1835011)[iParam0]->f_59 = 0;
	(*Global_1835011)[iParam0]->f_60 = 0;
}

void func_60(int iParam0)
{
	if (!func_81(iParam0))
	{
		return;
	}
	(*Global_1835011)[iParam0]->f_61 = 0;
}

void func_61(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_191(bParam0);
}

void func_62()
{
	if (!func_192())
	{
		return;
	}
	func_193();
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (!func_114(iVar1))
		{
		}
		else
		{
			iVar2 = Global_1360165[iVar0];
			if (!does_entity_exist(iVar2))
			{
			}
			else if (func_194(iVar2))
			{
				set_ped_config_flag(iVar2, 230, true);
			}
		}
		iVar0++;
	}
}

bool func_63(var uParam0, int iParam1)
{
	return (uParam0->f_1664 && iParam1) != 0;
}

void func_64(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!is_entity_dead(uParam0->f_3[iVar0]->f_2))
		{
			if (is_entity_a_ped(uParam0->f_3[iVar0]->f_2) && is_ped_human(get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2)))
			{
				task_clear_look_at(get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2));
				if (func_63(uParam0, 524288) && is_screen_faded_out())
				{
					clear_ped_tasks_immediately(get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2), false, true);
				}
				if (get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2) != Global_35)
				{
					set_ped_can_be_targetted(get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2), true);
				}
			}
		}
		iVar0++;
	}
}

void func_65(int iParam0, bool bParam1)
{
	if (!bParam1 && !is_itemset_valid(iParam0->f_2888))
	{
		return;
	}
	if (!is_itemset_valid(iParam0->f_2888))
	{
		iParam0->f_2888 = create_itemset(true);
	}
	_0x522f74636df10201(get_player_index(), iParam0->f_2888);
	if (get_itemset_size(iParam0->f_2888) <= 0)
	{
		_0xda1a9adc4e3d4b16(iParam0->f_2888, 1, 0);
	}
	if (get_itemset_size(iParam0->f_2888) <= 0)
	{
		destroy_itemset(iParam0->f_2888);
		return;
	}
	iVar0 = 0;
	while (iVar0 < get_itemset_size(iParam0->f_2888))
	{
		iVar1 = get_ped_index_from_entity_index(_get_entity_from_item(get_indexed_item_in_itemset(iVar0, iParam0->f_2888)));
		if (!is_entity_dead(iVar1))
		{
			set_ped_config_flag(iVar1, 148, bParam1);
		}
		iVar0++;
	}
	destroy_itemset(iParam0->f_2888);
}

void func_66(int iParam0, int iParam1)
{
	iParam0->f_2 = (iParam0->f_2 - (iParam0->f_2 && iParam1));
}

void func_67(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_68()
{
	if (func_195(&Global_1898437) && func_196(&Global_1898437) == 1)
	{
		iVar0 = func_197(&Global_1898437);
		if ((func_81(iVar0) && does_script_exist(&((*Global_1835011)[iVar0]->f_22))) && _get_number_of_references_of_script_with_name_hash(get_hash_key(&((*Global_1835011)[iVar0]->f_22))) > 0)
		{
			force_cleanup_for_all_threads_with_this_name(&((*Global_1835011)[iVar0]->f_22), 1);
		}
	}
}

int func_69(int iParam0)
{
	return 1;
}

void func_70(var uParam0)
{
	Var0 = { func_198(uParam0) };
	func_199(uParam0, &Var0);
}

void func_71(int iParam0)
{
	if (!_does_volume_exist(iParam0->f_425))
	{
		StringCopy(&cVar0, func_200(), 64);
		StringConCat(&cVar0, "_NO_AMBIENT_CONTENT", 64);
		iParam0->f_425 = _create_volume_box_with_custom_name(func_201(*iParam0), 0f, 0f, 0f, 5f, 5f, 5f, &cVar0);
		func_202(iParam0, iParam0->f_425, 0);
		func_203(*iParam0, iParam0->f_425);
	}
	if (!_does_volume_exist(iParam0->f_426))
	{
		StringCopy(&cVar8, func_200(), 64);
		StringConCat(&cVar8, "_NO_SCRIPT_CONTENT", 64);
		iParam0->f_426 = _create_volume_box_with_custom_name(func_201(*iParam0), 0f, 0f, 0f, 25f, 25f, 25f, &cVar8);
		func_204(iParam0, iParam0->f_426);
	}
}

void func_72(int iParam0)
{
	Var0 = { func_205(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_73(int iParam0)
{
	Var0 = { func_206(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

bool func_74(int iParam0, bool bParam1, bool bParam2)
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
		if (func_207())
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
		iVar0 = func_197(&(Global_1898164->f_1[0]));
		if (func_208(iVar0) && func_209((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_195(&(Global_1898164->f_1[0])))
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

void func_75(int iParam0, int iParam1)
{
	func_96(&(iParam0->f_428), iParam1);
}

void func_76(int iParam0)
{
	func_210(&(iParam0->f_428), &(iParam0->f_958));
}

bool func_77(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		uParam0->f_511++;
		if (uParam0->f_511 < 10)
		{
			return (func_83(uParam0, 256) && !func_83(uParam0, 4194304));
		}
		uParam0->f_511 = 0;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	func_82(uParam0, sParam1);
	if (!func_83(uParam0, 64))
	{
		if (!func_90(func_89(uParam0)))
		{
			func_96(uParam0, 64);
		}
		else
		{
			vVar0 = { func_125(uParam0) };
			if (!func_90(vVar0))
			{
				func_211(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_212(Global_35, func_89(uParam0), 1);
	if (func_83(uParam0, 128) || func_83(uParam0, 256))
	{
		if ((fVar3 >= func_213(uParam0) && !bParam2) || !_does_anim_scene_exist(uParam0->f_444))
		{
			if (uParam0->f_529)
			{
				func_214();
				uParam0->f_529 = 0;
			}
			func_215(uParam0);
			if (_does_anim_scene_exist(uParam0->f_444))
			{
				_delete_anim_scene(uParam0->f_444);
			}
			func_216(uParam0);
			func_103(uParam0, 128, 1);
			func_103(uParam0, 256, 1);
			func_103(uParam0, 4096, 1);
			func_103(uParam0, 32768, 1);
			func_103(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_217(uParam0) || bParam2)
	{
		if (!func_83(uParam0, 128))
		{
			if (!_does_anim_scene_exist(uParam0->f_444))
			{
				if (func_217(uParam0) >= func_213(uParam0))
				{
				}
				Var4 = { func_218(uParam0) };
				if (is_string_null_or_empty(&Var4))
				{
					func_219(uParam0);
				}
				Var4 = { func_218(uParam0) };
				iVar12 = 256;
				if (!func_83(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_444 = _create_anim_scene(&(uParam0->f_440), iVar12, &Var4, false, true);
				func_220(uParam0, 0, 0, 0, 0);
				func_96(uParam0, 128);
			}
		}
	}
	if (func_83(uParam0, 128))
	{
		if (func_83(uParam0, 256) && !func_83(uParam0, 4194304))
		{
			return true;
		}
		func_88(uParam0);
		if (!uParam0->f_529)
		{
			if (func_221())
			{
				func_222(4096);
				uParam0->f_529 = 1;
			}
		}
		if (_is_anim_scene_loaded(uParam0->f_444, true, false))
		{
			bVar13 = true;
			Var15 = { func_198(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!is_string_null_or_empty(uParam0->f_462[iVar14]))
				{
					if (!are_strings_equal(uParam0->f_462[iVar14], &Var15))
					{
						if (!uParam0->f_462[iVar14]->f_8)
						{
							uParam0->f_462[iVar14]->f_8 = 1;
							_0xdf7b5144e25cd3fe(uParam0->f_444, uParam0->f_462[iVar14]);
							bVar13 = false;
						}
						else if (!_0x23e33cb9f4a3f547(uParam0->f_444, uParam0->f_462[iVar14]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_83(uParam0, 8388608))
			{
				if (_0xa9016536015de29d(uParam0->f_444, &Var15))
				{
					if (!func_83(uParam0, 16777216))
					{
						if ((!_0x0df57f86fe71dbe5(uParam0->f_444, &Var15) && !_0x23e33cb9f4a3f547(uParam0->f_444, &Var15)) && !_0x1f0e401031e20146(uParam0->f_444, &Var15))
						{
							_0xdf7b5144e25cd3fe(uParam0->f_444, &Var15);
						}
						func_96(uParam0, 16777216);
					}
					if (!_0x23e33cb9f4a3f547(uParam0->f_444, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			func_96(uParam0, 256);
			func_103(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

void func_78(int iParam0, int iParam1)
{
	if (!func_30(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 - ((*Global_1898346)[iParam0]->f_1 && iParam1));
}

bool func_79(var uParam0)
{
	if (func_165(&(uParam0->f_29), 62))
	{
		switch (func_223())
		{
			case 1:
				if (!func_165(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_165(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_165(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_165(&(uParam0->f_29), 32))
				{
					if (func_165(&(uParam0->f_29), 2))
					{
						if (func_225(func_224()) < 5)
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

int func_80(int iParam0)
{
	iParam0 = func_226(iParam0);
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

bool func_81(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_82(var uParam0, char* sParam1)
{
	if (func_83(uParam0, 8192))
	{
		return;
	}
	if (_does_string_exist_in_string(sParam1, "cutscene@"))
	{
		iVar0 = _0x94e8ca3dee952789(sParam1, "@");
		if (_0x94e8ca3dee952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_440), {func_227("cutscene@", _0x5b4a8121a47d844d((iVar0 - 1)), 1, 63)}, 4);
		}
		_0x3c3c7b1b5ec08764();
	}
	else
	{
		MemCopy(&(uParam0->f_440), {func_227("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_96(uParam0, 8192);
}

bool func_83(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_84(var uParam0)
{
	if (((!_does_anim_scene_exist(uParam0->f_444) || !_is_anim_scene_started(uParam0->f_444, false)) || _0xef324e9550a394d5(uParam0->f_444)) || func_83(uParam0, 512))
	{
		if (!func_228(uParam0->f_501, 128))
		{
			func_229();
		}
		return;
	}
	if ((func_99(uParam0, Global_35, 4) || (_0x6f1f0b17109309da(uParam0->f_444, func_230(Global_35)) && _0xb89fcff19dafff28(uParam0->f_444, func_230(Global_35)))) || !_0x4b85b3cf91972222(uParam0->f_444))
	{
		if (!func_228(uParam0->f_501, 128))
		{
			func_229();
		}
		return;
	}
	bVar0 = true;
	iVar1 = _0xc17f69e1418cd11f(9);
	if (iVar1 != 0)
	{
		if (func_231(iVar1))
		{
			if (func_232(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_228(uParam0->f_501, 512))
	{
		bVar2 = true;
	}
	if (func_233(bVar0, bVar2))
	{
		_delete_anim_scene_2(uParam0->f_444);
		func_229();
	}
}

void func_85(var uParam0, char* sParam1)
{
	if (func_50(uParam0) == 2 && (func_234(uParam0->f_500, 16384) || func_83(uParam0, 268435456)))
	{
		Var0 = { func_198(uParam0) };
		func_235(uParam0, &Var0);
	}
	func_236(uParam0, sParam1);
	if (func_83(uParam0, 131072))
	{
		func_237(uParam0, 0);
	}
	if (func_238())
	{
		set_ped_reset_flag(Global_35, 265, true);
		func_239();
	}
	if (func_240())
	{
		func_241(1);
	}
	func_220(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_242(uParam0, cVar8);
	func_93(1, 0);
	func_215(uParam0);
	if (func_243() && _0x6f1f0b17109309da(uParam0->f_444, func_230(Global_35)))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_87(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_436);
	}
	func_244(uParam0);
	func_245(uParam0, 1);
	start_anim_scene(uParam0->f_444);
	Global_43800 = uParam0->f_444;
	StringCopy(&Global_43802, sParam1, 24);
}

void func_86(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_26(&(uParam0->f_1));
}

bool func_87(var uParam0, int iParam1)
{
	return (uParam0->f_439 && iParam1) != 0;
}

void func_88(var uParam0)
{
	if ((!func_83(uParam0, 32768) && _does_anim_scene_exist(uParam0->f_444)) && _is_anim_scene_metadata_loaded(uParam0->f_444, false))
	{
		func_246(uParam0);
		func_245(uParam0, 0);
		if (!_is_anim_scene_loading(uParam0->f_444, true))
		{
			load_anim_scene(uParam0->f_444);
		}
		func_96(uParam0, 32768);
	}
}

Vector3 func_89(var uParam0)
{
	return uParam0->f_5;
}

bool func_90(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_91(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_247(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_92(int iParam0)
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

void func_93(bool bParam0, int iParam1)
{
	if (func_248())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_249())
		{
			func_250(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_94(var uParam0)
{
	if (!func_83(uParam0, 4))
	{
		if (func_234(uParam0->f_500, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_251(uParam0) };
		if (!func_234(uParam0->f_500, 524288))
		{
			func_252(&(uParam0->f_512));
		}
		func_253(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_254(uParam0, 0f, 0f, 0f);
		func_255(uParam0);
		func_256(uParam0);
		func_257(uParam0, 0f, 0f, 0f, 0, 0);
		func_258(uParam0);
		func_96(uParam0, 4);
		func_259(uParam0, 0);
		func_260(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_513)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_513));
		}
	}
}

bool func_95(var uParam0, int iParam1)
{
	if (func_83(uParam0, 262144))
	{
		return false;
	}
	if (!_does_anim_scene_exist(uParam0->f_444))
	{
		return false;
	}
	if (!_0x6f1f0b17109309da(uParam0->f_444, "ExportCamera"))
	{
		return false;
	}
	if ((_0xb89fcff19dafff28(uParam0->f_444, "ExportCamera") || (_0x005e6f28dd7ed58d(uParam0->f_444, "ExportCamera") && iParam1)) || _is_anim_scene_active(uParam0->f_444))
	{
		func_96(uParam0, 262144);
		func_259(uParam0, 1);
		return true;
	}
	return false;
}

void func_96(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_97(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_444) || !_is_anim_scene_started(uParam0->f_444, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_duration(uParam0->f_444) * 1000f));
}

int func_98(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_444) || !_is_anim_scene_started(uParam0->f_444, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_time(uParam0->f_444) * 1000f));
}

bool func_99(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1) && func_261(uParam0->f_13[iVar0], iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_100(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_444))
	{
		return true;
	}
	if (_0xf94692eb9dc15d74(uParam0->f_444, 0))
	{
		if (func_83(uParam0, 524288))
		{
			_0x1b70811d3bf75db9(1, 1);
		}
		return true;
	}
	if (_is_anim_scene_active(uParam0->f_444) && func_83(uParam0, 1048576))
	{
		return true;
	}
	return false;
}

void func_101(var uParam0)
{
	if (((func_83(uParam0, 1073741824) && !func_83(uParam0, 524288)) && func_83(uParam0, 512)) && is_screen_faded_out())
	{
		do_screen_fade_in(1000);
	}
}

void func_102(var uParam0)
{
	if (!func_83(uParam0, 536870912))
	{
		func_259(uParam0, 1);
		func_104(&(uParam0->f_501), uParam0->f_512);
		func_214();
		func_96(uParam0, 536870912);
	}
	if (func_83(uParam0, 524288))
	{
		do_screen_fade_out(0);
	}
	func_262(uParam0);
	func_86(uParam0, 1);
	func_216(uParam0);
	func_263(uParam0);
	func_264(uParam0);
	func_265(uParam0, 4);
	func_219(uParam0);
	func_237(uParam0, 1);
	func_215(uParam0);
	func_266(&(uParam0->f_1));
	if (_does_anim_scene_exist(uParam0->f_444) && check_ownership_of_anim_scene(uParam0->f_444))
	{
		_delete_anim_scene(uParam0->f_444);
	}
	func_267(!func_228(uParam0->f_501, 128));
	if (!func_228(uParam0->f_501, 128))
	{
		func_229();
	}
}

void func_103(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_444)) && _0xef324e9550a394d5(uParam0->f_444))
	{
		_0x8a8208ae92bf87a5(uParam0->f_444);
	}
}

void func_104(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_268(2000);
	Global_16 = 0;
	func_269();
	set_entity_invincible(Global_35, func_228(*uParam0, 8));
	if (!func_228(*uParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_228(*uParam0, 2) || func_228(*uParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_228(*uParam0, 16))
	{
		func_61(1);
	}
	if (func_228(*uParam0, 32))
	{
		func_270(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_271(-1623728698, 0);
	}
	func_260(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_105()
{
	Global_1935630->f_52 = 1;
}

bool func_106(int iParam0)
{
	bVar0 = is_ped_on_foot(Global_35);
	if (!bVar0 && func_5(iParam0, 1048576))
	{
		func_66(iParam0, 1048576);
		return false;
	}
	if (!func_5(iParam0, 8388608))
	{
		if (vdist2(func_201(*iParam0), Global_36) < (10f * 10f))
		{
			func_25(iParam0, 8388608);
			func_19(&(iParam0->f_2890), 0);
		}
		else
		{
			return false;
		}
	}
	if (!func_5(iParam0, 1048576))
	{
		if (bVar0)
		{
			func_25(iParam0, 1048576);
		}
		else
		{
			iVar1 = 131072;
			vVar2 = { get_offset_from_entity_given_world_coords(Global_35, func_201(*iParam0)) };
			if (vVar2.x > 0f)
			{
				iVar1 = 262144;
			}
			if (func_272(Global_35, &(iParam0->f_421), 0, 256, iVar1, 1084227584, 100, 0, 0))
			{
				set_player_control(get_player_index(), true, 0, false);
			}
		}
	}
	else if (_does_volume_exist(iParam0->f_422) && is_entity_in_volume(Global_35, iParam0->f_422, true, 0))
	{
		return true;
	}
	else if (vdist2(func_201(*iParam0), Global_36) < (2.5f * 2.5f))
	{
		return true;
	}
	else if (!func_5(iParam0, 2097152))
	{
		task_follow_nav_mesh_to_coord(Global_35, func_201(*iParam0), 1f, 20000, 0.25f, 0, 40000f);
		_hide_hud_component(-1679307491);
		set_player_control(get_player_index(), false, 256, false);
		force_ped_motion_state(Global_35, -668482597, false, 1, false);
		if (!is_entity_dead(iParam0->f_3))
		{
			task_look_at_entity(Global_35, iParam0->f_3, -1, 0, 51, 0);
		}
		func_25(iParam0, 2097152);
	}
	if (func_18(&(iParam0->f_2890)))
	{
		if (func_48(&(iParam0->f_2890)) >= 15f)
		{
			return true;
		}
	}
	return false;
}

void func_107(int iParam0)
{
	iVar0 = func_32(func_31(iParam0));
	if (!func_30(iVar0))
	{
		return;
	}
	func_22(iVar0, 1024);
}

void func_108(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_2(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_109(Global_1935630, 4194304);
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

void func_109(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_110(int iParam0)
{
	if (func_273() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_275(func_274(iVar0), 0))
		{
			if (is_ped_group_member(func_274(iVar0), func_276(), 1))
			{
				func_277(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_111(int iParam0)
{
	if (Global_1935630->f_13)
	{
		_0x61b98367d93f012f(get_player_index());
		func_108(0);
		func_65(iParam0, 1);
	}
	func_278(1, 0, 1);
}

void func_112(bool bParam0)
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
	func_279(0f);
	Global_1935436->f_11 = 1;
	if (func_280())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_281();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

bool func_113(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_114(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_115(int iParam0)
{
	return func_282(iParam0, 16, 1);
}

bool func_116(int iParam0)
{
	if (!func_114(iParam0))
	{
		return false;
	}
	if (!func_115(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

bool func_117(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_212(iParam0, Global_36, 1);
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

bool func_118(var uParam0)
{
	return func_113(*uParam0, 2);
}

float func_119()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_120(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_444))
	{
		_delete_anim_scene(uParam0->f_444);
	}
}

void func_121(var uParam0, int iParam1)
{
	func_283(uParam0, 4);
	func_284(uParam0, 10);
	func_285(uParam0, iParam1);
}

void func_122(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_119() - fParam1);
	func_286(uParam0, 1);
	func_287(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_81(iParam0))
	{
		return;
	}
	if ((!is_itemset_valid(iParam1) || !is_itemset_valid(iParam2)) || !is_itemset_valid(iParam3))
	{
		return;
	}
	if (!func_288(iParam0))
	{
	}
	(*Global_1835011)[iParam0]->f_58 = iParam1;
	(*Global_1835011)[iParam0]->f_59 = iParam2;
	(*Global_1835011)[iParam0]->f_60 = iParam3;
}

Vector3 func_124(int iParam0)
{
	return func_89(&(iParam0->f_428));
}

Vector3 func_125(var uParam0)
{
	MemCopy(&uVar0, {func_289(uParam0)}, 8);
	if (!_does_anim_scene_exist(uParam0->f_445))
	{
		uParam0->f_445 = _create_anim_scene(&(uParam0->f_440), 0, 0, false, true);
	}
	else if (_is_anim_scene_metadata_loaded(uParam0->f_445, false))
	{
		if (_get_anim_scene_entity_matrix(uParam0->f_445, func_230(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			_get_anim_scene_origin(uParam0->f_445, &vVar8, &uVar11, 2);
		}
		_delete_anim_scene(uParam0->f_445);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

Vector3 func_126(int iParam0)
{
	return func_201(iParam0);
}

void func_127(int iParam0, vector3 vParam1)
{
	func_211(&(iParam0->f_428), vParam1);
}

bool func_128(int iParam0)
{
	bVar0 = true;
	if (!_does_volume_exist(iLocal_25))
	{
		iLocal_25 = _create_volume_box(2737.573f, -1375.112f, 47.00983f, 0f, 0f, -64.82526f, 39.94735f, 22.67228f, 3.992332f);
		uLocal_32 = func_290(iLocal_25, 30f, 0, 0);
	}
	if (!_does_volume_exist(iLocal_28))
	{
		iLocal_28 = _create_volume_box(2716.632f, -1346.616f, 46.7829f, 0f, 0f, 45f, 6.839418f, 9.471648f, 3.659361f);
	}
	if (!_does_volume_exist(iLocal_29))
	{
		iLocal_29 = _create_volume_box(2721.316f, -1346.702f, 46.57302f, 0f, 0f, 45f, 0.681471f, 2.580389f, 2.316361f);
	}
	if (!_does_volume_exist(iLocal_30))
	{
		iLocal_30 = _create_volume_box(2725.38f, -1355.849f, 52.65077f, 0f, 0f, 45f, 7.251991f, 12.81482f, 1.959805f);
	}
	if (!_does_volume_exist(iLocal_31))
	{
		iLocal_31 = _create_volume_box(2718.563f, -1349.032f, 52.65077f, 0f, 0f, 45.00001f, 7.251991f, 6.533468f, 1.959805f);
	}
	if (!_does_volume_exist(iLocal_27))
	{
		iLocal_27 = _create_volume_aggregate_with_custom_name("Station Clear");
		_0xbce668aaf83608be(iLocal_27, 2733.284f, -1398.097f, 45.4614f, 0f, 0f, 0f, 1f, 1f, 3f);
		_0xbce668aaf83608be(iLocal_27, 2741.316f, -1398.186f, 45.3701f, 0f, 0f, 0f, 1f, 1f, 3f);
		_0xbce668aaf83608be(iLocal_27, 2740.058f, -1395.354f, 45.2835f, 0f, 0f, 0f, 1f, 1f, 3f);
	}
	if (!func_275(&(uLocal_22[1]), 0))
	{
		func_291(iParam0, 9, uLocal_22[1], 0, 1, 0, 0, 0, 0, -922193456, 0, 0, 0);
		bVar0 = false;
	}
	if (!bLocal_33)
	{
		request_model(-1867663375, false);
		request_model(-243249647, false);
		request_model(-182450036, false);
		request_model(-1816535547, false);
		request_model(2006849227, false);
		bLocal_33 = true;
	}
	if ((((!has_model_loaded(-1867663375) || !has_model_loaded(-243249647)) || !has_model_loaded(-182450036)) || !has_model_loaded(-1816535547)) || !has_model_loaded(2006849227))
	{
		bVar0 = false;
	}
	else if (!func_292(-1, 1))
	{
		bVar0 = false;
	}
	if (!_does_volume_exist(iLocal_26))
	{
		iLocal_26 = _create_volume_box(2727.853f, -1357.258f, 45.37f, 0f, 0f, -44.53838f, 31.58766f, 7.808591f, 8.208012f);
		func_293(iParam0, iLocal_26);
	}
	if (bVar0)
	{
		func_25(iParam0, 16777216);
	}
	if (func_8(&(iParam0->f_958)) >= 3)
	{
		if (func_5(iParam0, 128))
		{
			func_66(iParam0, 128);
		}
	}
	else if (!func_5(iParam0, 128))
	{
		func_25(iParam0, 128);
	}
	return bVar0;
}

void func_129(int iParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		Local_14 = create_itemset(true);
	}
}

void func_130(int iParam0)
{
	func_190(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
}

void func_131(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_159(iParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
}

void func_132(int iParam0)
{
	vVar0 = { func_12(*iParam0) };
	if (is_string_null_or_empty(&vVar0))
	{
		return;
	}
	if (func_7(iParam0))
	{
		return;
	}
	if (!func_5(iParam0, 16384))
	{
		func_25(iParam0, 16384);
		if (!func_294(&vVar0))
		{
			return;
		}
		func_295(iParam0, vVar0, 0);
		func_25(iParam0, 524288);
	}
}

void func_133(int iParam0)
{
	if (func_217(&(iParam0->f_428)) != 15f || func_213(&(iParam0->f_428)) != 20f)
	{
		return;
	}
	switch (*iParam0)
	{
		case 31:
			func_296(&(iParam0->f_428), 50f);
			func_297(&(iParam0->f_428), 75f);
			break;
		case 34:
			func_296(&(iParam0->f_428), 35f);
			func_297(&(iParam0->f_428), 50f);
			break;
		case 62:
			func_296(&(iParam0->f_428), 25f);
			func_297(&(iParam0->f_428), 30f);
			break;
		default:
			break;
	}
}

int func_134(int iParam0)
{
	return func_298(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
}

int func_135(int iParam0, bool bParam1)
{
	if (func_5(iParam0, 2))
	{
		return 1;
	}
	if (network_is_game_in_progress())
	{
		return 1;
	}
	iVar0 = func_299(*iParam0);
	if (!func_114(iVar0))
	{
		return 1;
	}
	iParam0->f_4 = does_entity_exist(func_274(iVar0));
	return func_291(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

bool func_136(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_205(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_300(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_206(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_301(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

void func_137(var uParam0)
{
	if (!bLocal_35)
	{
		func_141(&(Local_14.f_3[0]), func_302(0, 0), 2, 1073741824);
		func_141(&(Local_14.f_3[1]), func_302(0, 1), 2, 1073741824);
		func_141(&(Local_14.f_3[2]), func_302(0, 2), 2, 1073741824);
		func_141(&(Local_14.f_3[3]), func_302(0, 3), 2, 1073741824);
		freeze_entity_position(&(Local_14.f_3[3]), false);
		set_entity_invincible(&(Local_14.f_3[3]), false);
		set_entity_visible(&(Local_14.f_3[3]), true);
		set_entity_collision(&(Local_14.f_3[3]), true, false);
		stop_ped_speaking(&(Local_14.f_3[3]), false);
		*uParam0 = *uParam0;
		bLocal_35 = true;
	}
}

void func_138(var uParam0, int iParam1)
{
	uParam0->f_436 = iParam1;
	func_303(uParam0, 1);
}

var func_139(int iParam0)
{
	return iParam0->f_3;
}

struct<4> func_140(int iParam0, int iParam1)
{
	return func_304(iParam0, iParam1);
}

void func_141(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_305(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

int func_142(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_306(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_306(iVar4) && iVar4 != iVar0)
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
	if (func_273() == -1 && !func_307(iVar0))
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
				if (func_307(-183018591))
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
		if (iParam0 != Global_35 && func_306(iVar0))
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
		func_308(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_309(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_310(iVar0))
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

void func_143(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_311(iParam0, 0, 0);
	if (func_312(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_313(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_314(iParam0, 1);
			}
			else
			{
				func_315(iParam0, 1);
			}
		}
		else
		{
			func_316(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_317())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_144(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_318(uParam0, iParam1, sParam2))
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

void func_145(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_146(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_entity_dead(&(Local_14.f_3[iVar0])))
		{
			if (iVar0 == 3)
			{
				freeze_entity_position(&(Local_14.f_3[iVar0]), true);
				set_entity_invincible(&(Local_14.f_3[iVar0]), true);
				set_entity_visible(&(Local_14.f_3[iVar0]), false);
				set_entity_collision(&(Local_14.f_3[iVar0]), false, false);
				set_blocking_of_non_temporary_events(&(Local_14.f_3[iVar0]), true);
				stop_ped_speaking(&(Local_14.f_3[iVar0]), true);
				_set_ped_body_component(&(Local_14.f_3[iVar0]), 469249943);
				_update_ped_variation(&(Local_14.f_3[iVar0]), false, true, true, true, false);
				decor_set_int(&(Local_14.f_3[iVar0]), func_147(), -107418554);
			}
			else if (iVar0 == 0)
			{
				task_use_nearest_scenario_to_coord_warp(&(Local_14.f_3[iVar0]), 2733.284f, -1398.097f, 45.4614f, 1f, -1, false, false, true, false);
				set_blocking_of_non_temporary_events(&(Local_14.f_3[iVar0]), false);
				set_ped_config_flag(&(Local_14.f_3[iVar0]), 130, false);
				_set_ped_body_component(&(Local_14.f_3[iVar0]), -1345974820);
				_update_ped_variation(&(Local_14.f_3[iVar0]), false, true, true, true, false);
				decor_set_int(&(Local_14.f_3[iVar0]), func_147(), -1954804603);
			}
			else if (iVar0 == 1)
			{
				task_use_nearest_scenario_to_coord_warp(&(Local_14.f_3[iVar0]), 2741.316f, -1398.186f, 45.3701f, 1f, -1, false, false, true, false);
				set_blocking_of_non_temporary_events(&(Local_14.f_3[iVar0]), false);
				set_ped_config_flag(&(Local_14.f_3[iVar0]), 130, false);
				_set_ped_body_component(&(Local_14.f_3[iVar0]), -1345974820);
				_update_ped_variation(&(Local_14.f_3[iVar0]), false, true, true, true, false);
				decor_set_int(&(Local_14.f_3[iVar0]), func_147(), -795699535);
			}
			else if (iVar0 == 2)
			{
				task_use_nearest_scenario_to_coord_warp(&(Local_14.f_3[iVar0]), 2740.058f, -1395.354f, 45.2835f, 1f, -1, false, false, true, false);
				set_blocking_of_non_temporary_events(&(Local_14.f_3[iVar0]), false);
				set_ped_config_flag(&(Local_14.f_3[iVar0]), 130, false);
				_set_ped_body_component(&(Local_14.f_3[iVar0]), -1650890369);
				_update_ped_variation(&(Local_14.f_3[iVar0]), false, true, true, true, false);
				decor_set_int(&(Local_14.f_3[iVar0]), func_147(), -623269057);
			}
			func_319(iParam0, &(Local_14.f_3[iVar0]));
		}
		iVar0++;
	}
}

char* func_147()
{
	return "genericMissionInt";
}

void func_148(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!is_itemset_valid(Global_43616))
	{
		Global_43616 = create_itemset(false);
	}
	if (!is_in_itemset(iParam1, Global_43616))
	{
		add_to_itemset(iParam1, Global_43616);
	}
	if (bParam2)
	{
		decor_set_bool(iParam1, func_320(), true);
	}
}

void func_149(int iParam0, float fParam1)
{
	iParam0->f_428.f_434 = fParam1;
}

void func_150(int iParam0, float fParam1)
{
	iParam0->f_428.f_435 = fParam1;
}

char* func_151()
{
	if (func_321(34))
	{
		return "7-EnterBack_AfterInd3_MultiStart";
	}
	return "5-EnterBack_BeforeInd3_MultiStart";
}

void func_152(int iParam0, char[4] cParam1, bool bParam2)
{
	func_322(&(iParam0->f_428), cParam1, bParam2);
}

char* func_153()
{
	if (func_321(34))
	{
		return "4-EnterFront_AfterInd3_NormalStart";
	}
	return "2-EnterFront_BeforeInd3_NormalStart";
}

char* func_154()
{
	if (func_321(34))
	{
		return "8-EnterBack_AfterInd3_NormalStart";
	}
	return "6-EnterBack_BeforeInd3_NormalStart";
}

char* func_155()
{
	if (func_321(34))
	{
		return "3-EnterFront_AfterInd3_MultiStart";
	}
	return "1-EnterFront_BeforeInd3_MultiStart";
}

void func_156(int iParam0, char[32] cParam1)
{
	func_323(&(iParam0->f_428), cParam1);
}

void func_157(int iParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8)
{
	func_199(&(iParam0->f_428), &cParam1);
	func_25(iParam0, 8);
}

int func_158(int iParam0, int iParam1)
{
	return func_324(&(iParam0->f_958), iParam1);
}

void func_159(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_325(&(iParam0->f_428), iParam1, sParam2, iParam3, iParam4, bParam6);
	func_326(iParam0, iParam1, sParam2);
	if (bParam5)
	{
		func_319(iParam0, iParam1);
	}
}

struct<4> func_160(int iParam0)
{
	if (!func_81(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

void func_161(int iParam0)
{
	if (func_327(&(iParam0->f_428)) > 15)
	{
	}
	iVar12 = 0;
	while (iVar12 < 15)
	{
		if (does_entity_exist(&(iParam0->f_428.f_13[iVar12])))
		{
			*Global_43619[iVar12] = { *iParam0->f_428.f_13[iVar12] };
		}
		else
		{
			*Global_43619[iVar12] = { Var0 };
		}
		iVar12++;
	}
}

bool func_162()
{
	return func_328(get_id_of_this_thread());
}

void func_163()
{
	if (func_162())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_185())
		{
			func_61(1);
		}
	}
}

void func_164(var uParam0, var uParam1)
{
	if (func_63(uParam1, 32768))
	{
		Var0 = { func_198(uParam0) };
		func_235(uParam0, &Var0);
		if (func_63(uParam1, 131072))
		{
			func_96(uParam0, 268435456);
			if (func_90(uParam0->f_505))
			{
				uParam0->f_505 = { func_329(uParam1, uParam1->f_1684) };
			}
			if (func_90(uParam0->f_502))
			{
				uParam0->f_502 = { func_329(uParam1, uParam1->f_1684) };
				get_ground_z_for_3d_coord(uParam0->f_502, &(uParam0->f_502.f_2), false);
				uParam0->f_502.f_2 = (uParam0->f_502.f_2 + 0.5f);
			}
		}
		if (func_63(uParam1, 268435456))
		{
			func_330(&(uParam0->f_500), 16384);
		}
	}
	else if (func_63(uParam1, 524288))
	{
		func_96(uParam0, 67108864);
		func_176(uParam1, 524288);
	}
	if (func_331(uParam1, 128))
	{
		func_96(uParam0, 32);
	}
	if (uParam1->f_1903 != 0)
	{
		uParam0->f_512 = uParam1->f_1903;
		if (uParam1->f_1684 >= 0 && func_332(uParam1->f_1016[uParam1->f_1684], 256))
		{
			func_330(&(uParam0->f_500), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_1692)))
	{
		_copy_memory(&(uParam0->f_513), &(uParam1->f_1692), 16);
	}
}

bool func_165(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_166(int iParam0)
{
	if (iParam0 & 36 == 4)
	{
		return 6;
	}
	else if (iParam0 & 34 == 4)
	{
		return 5;
	}
	else if (iParam0 & 12 == 8)
	{
		return 12;
	}
	else if (iParam0 & 24 == 16)
	{
		return 18;
	}
	else if (iParam0 & 48 == 32)
	{
		return 0;
	}
	return 0;
}

bool func_167(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_333((*Global_1835011)[iParam0]->f_1);
}

var func_168(int iParam0)
{
	if (!func_81(iParam0))
	{
		return uVar0;
	}
	return (*Global_1835011)[iParam0]->f_8;
}

int func_169(var uParam0, var uParam1)
{
	if (uParam1->f_1684 < 0 || uParam1->f_1684 >= 8)
	{
		return 0;
	}
	if (!is_string_null_or_empty(&(uParam1->f_1016[uParam1->f_1684]->f_30)))
	{
		if (_0xa9016536015de29d(uParam0->f_444, &(uParam1->f_1016[uParam1->f_1684]->f_30)))
		{
			if (_0x23e33cb9f4a3f547(uParam0->f_444, &(uParam1->f_1016[uParam1->f_1684]->f_30)))
			{
				func_235(uParam0, &(uParam1->f_1016[uParam1->f_1684]->f_30));
				func_96(uParam0, 2097152);
				return 1;
			}
		}
	}
	return 0;
}

bool func_170(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_171(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_334(cParam1, cParam0);
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

bool func_172(char* sParam0)
{
	return _0xd89504d9d7d5057d(sParam0);
}

void func_173(char* sParam0, bool bParam1, bool bParam2)
{
	func_335(sParam0, bParam1, bParam2);
}

bool func_174(int iParam0, int iParam1, int iParam2, bool bParam3)
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

void func_175(int iParam0, char[4] cParam1)
{
	func_235(&(iParam0->f_428), cParam1);
}

void func_176(var uParam0, int iParam1)
{
	uParam0->f_1664 = (uParam0->f_1664 - (uParam0->f_1664 && iParam1));
}

void func_177(var uParam0, int iParam1)
{
	uParam0->f_1664 = (uParam0->f_1664 || iParam1);
}

struct<4> func_178(int iParam0)
{
	return iParam0->f_2880;
}

int func_179(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_63(uParam0, 32768))
	{
		return 1;
	}
	if (func_8(uParam0) >= 3)
	{
		uParam0->f_1896 = func_336(get_player_index(), 0, 0, 1);
		uParam0->f_1897 = _is_ped_getting_into_a_mount_seat(Global_35, true);
		uParam0->f_1899 = is_ped_in_any_vehicle(Global_35, true);
		if (uParam0->f_1897)
		{
			if (!is_entity_dead(Global_1935630->f_40))
			{
				uParam0->f_1898 = Global_1935630->f_40;
			}
			else
			{
				uParam0->f_1898 = get_mount(Global_35);
			}
		}
		if (uParam0->f_1899)
		{
			uParam0->f_1901 = get_vehicle_ped_is_in(Global_35, true);
		}
		uParam0->f_1902 = get_interior_from_entity(Global_35);
		func_337(uParam0);
	}
	if (func_8(uParam0) < 10)
	{
		if (func_8(uParam0) == 3)
		{
			func_338(uParam0, iParam5, bParam6);
		}
		else if (func_8(uParam0) > 3)
		{
			if (func_339(uParam0) == 0)
			{
				if (!func_63(uParam0, 524288))
				{
					func_340(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_283(uParam0, 4);
					func_284(uParam0, 10);
					func_285(uParam0, iParam5);
					return 1;
				}
			}
			if (!func_63(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_332(uParam0->f_1016[uParam0->f_1684], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_341(0);
			func_342();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_1684 >= 0)
			{
				if (!func_332(uParam0->f_1016[uParam0->f_1688], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_343(uParam0, uParam0->f_1684))
				{
					if (func_344(uParam0) < 7 && uParam0->f_1688 >= 0)
					{
						func_345(uParam0, uParam0->f_1016[uParam0->f_1688]->f_27, uParam0->f_1345[uParam0->f_1688]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_1688 >= 0)
				{
					func_345(uParam0, uParam0->f_1016[uParam0->f_1688]->f_27, uParam0->f_1345[uParam0->f_1688]->f_1, 1065353216);
				}
				func_346(uParam0);
			}
		}
	}
	bVar0 = func_347(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_63(uParam0, 268435456) && bVar1) && !func_63(uParam0, 262144))
		{
			bVar3 = is_valid_interior(uParam0->f_1902);
			if (uParam0->f_1684 >= 0)
			{
				iVar4 = get_interior_at_coords(uParam0->f_1016[uParam0->f_1684]->f_1);
				if ((is_valid_interior(iVar4) && bVar3) && iVar4 == uParam0->f_1902)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				func_177(uParam0, 131072);
				func_177(uParam0, 268435456);
			}
		}
		if (func_331(uParam0, 64) || (uParam0->f_1684 >= 0 && !func_332(uParam0->f_1016[uParam0->f_1684], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_339(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_8(uParam0) == 3 || func_63(uParam0, 131072))
	{
		func_348(uParam0);
		if (!func_63(uParam0, 262144))
		{
			if ((bVar0 && func_63(uParam0, 65536)) || func_63(uParam0, 131072))
			{
				func_177(uParam0, 32768);
				func_283(uParam0, 4);
				func_284(uParam0, 10);
				uParam0->f_1769 = 1;
				func_285(uParam0, iParam5);
				return 1;
			}
		}
	}
	if (func_8(uParam0) >= 3)
	{
		func_349(uParam0, iParam5);
		func_350(uParam0);
		if (!func_351(uParam0, 1))
		{
			func_352(uParam0);
		}
		func_353(uParam0);
	}
	switch (func_8(uParam0))
	{
		case 0:
			func_354(uParam0, Param1, iParam5);
			break;
		case 1:
			func_355(uParam0);
			break;
		case 2:
			func_356(uParam0);
			break;
		case 3:
			if (func_357(uParam0))
			{
				func_110(2);
				func_345(uParam0, uParam0->f_1016[uParam0->f_1684]->f_27, uParam0->f_1345[uParam0->f_1684]->f_1, 1065353216);
				func_26(&(uParam0->f_1872));
				func_283(uParam0, 1);
				func_358();
				func_284(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_63(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_8(uParam0) == 5)
			{
				if (func_359(uParam0))
				{
					func_283(uParam0, 2);
					func_284(uParam0, 6);
				}
			}
			if (func_8(uParam0) == 6)
			{
				if (func_360(uParam0))
				{
					func_283(uParam0, 3);
					func_284(uParam0, 8);
				}
			}
			if (uParam0->f_1685 >= 0 || func_21(&(uParam0->f_1872)) >= 15f)
			{
				if (func_361(uParam0, iParam5))
				{
					if (func_362(uParam0))
					{
						uParam0->f_1685 = func_363(uParam0);
						func_26(&(uParam0->f_1872));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_283(uParam0, 6);
						func_284(uParam0, 9);
					}
					else
					{
						func_283(uParam0, 4);
						func_284(uParam0, 10);
						func_285(uParam0, iParam5);
						return 1;
					}
				}
			}
			break;
		case 9:
			if (func_361(uParam0, iParam5))
			{
				func_285(uParam0, iParam5);
				func_284(uParam0, 10);
				return 1;
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

bool func_180(int iParam0)
{
	return func_357(&(iParam0->f_958));
}

bool func_181(int iParam0)
{
	if (is_ped_on_mount(Global_35))
	{
		iVar1 = iParam0->f_423;
		fVar0 = 10f;
	}
	else if (is_ped_in_any_vehicle(Global_35, false))
	{
		iVar1 = iParam0->f_424;
		fVar0 = 15f;
	}
	else
	{
		iVar1 = iParam0->f_422;
		fVar0 = 5f;
	}
	if (_does_volume_exist(iVar1))
	{
		if (func_364(Global_35, iVar1, 1, 0))
		{
			func_25(iParam0, 8388608);
			return true;
		}
	}
	if (vdist2(func_201(*iParam0), Global_36) < (fVar0 * fVar0))
	{
		func_25(iParam0, 8388608);
		return true;
	}
	return false;
}

void func_182(int iParam0)
{
	Global_36606 = { func_365() };
	Global_36610 = { func_365() };
	Global_36605 = iParam0;
}

bool func_183(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_475[iVar0]->f_17 == 0 && uParam0->f_475[iVar0]->f_2 == 9) && uParam0->f_475[iVar0]->f_4 >= 0)
		{
			iVar1 = uParam0->f_1522[uParam0->f_475[iVar0]->f_4]->f_8;
			if (_does_anim_scene_exist(iVar1) && _is_anim_scene_loaded(iVar1, true, false))
			{
				iVar2 = 0;
				while (iVar2 < 35)
				{
					if (!is_entity_dead(uParam0->f_3[iVar2]->f_2) && is_entity_a_ped(uParam0->f_3[iVar2]->f_2))
					{
						Var3 = { func_366(uParam0, uParam0->f_3[iVar2]->f_2) };
						if (_0x6f1f0b17109309da(iVar1, &Var3))
						{
							if (!_0x3ab6c7b0bb0df4b1(uParam0->f_3[iVar2]->f_2, iVar1) && _0x3ab6c7b0bb0df4b1(uParam0->f_3[iVar2]->f_2, -1))
							{
								return true;
							}
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_184(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (_does_anim_scene_exist(uParam0->f_1522[iVar0]->f_8))
		{
			if (bParam1)
			{
				bVar1 = check_ownership_of_anim_scene(uParam0->f_1522[iVar0]->f_8);
				if (!bVar1 && !bParam2)
				{
					if ((_0xa9016536015de29d(uParam0->f_1522[iVar0]->f_8, "pl_breakout") && _0x23e33cb9f4a3f547(uParam0->f_1522[iVar0]->f_8, "pl_breakout")) && !uParam0->f_1769)
					{
						_set_anim_scene_playback_list_bool(uParam0->f_1522[iVar0]->f_8, "pl_breakout", true);
					}
				}
				else if (func_63(uParam0, 32768) && func_367(uParam0->f_1522[iVar0], 128))
				{
					func_368(uParam0->f_1522[iVar0]->f_8, 10000, 1, -1, 0);
				}
				else
				{
					if (bParam2)
					{
						take_ownership_of_anim_scene(uParam0->f_1522[iVar0]->f_8);
					}
					_delete_anim_scene(uParam0->f_1522[iVar0]->f_8);
				}
			}
			else
			{
				reset_anim_scene(uParam0->f_1522[iVar0]->f_8, 0);
			}
		}
		iVar0++;
	}
}

bool func_185()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

void func_186(var uParam0, int iParam1, bool bParam2)
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

void func_187(int* iParam0, bool bParam1)
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

void func_188(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_369(vVar0, 0);
}

void func_189(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (!func_114(iParam1))
	{
		return;
	}
	func_370(iParam2);
	if (bParam4)
	{
		func_371(iParam0, iParam2, 0);
	}
	if (!bParam6)
	{
		if (!func_5(iParam0, 4194304))
		{
			bParam6 = func_372((*Global_1835011)[*iParam0], 1024);
			bVar0 = func_372((*Global_1835011)[*iParam0], 65536);
		}
	}
	func_373(iParam1, iParam3, bParam4, bParam5, -1082130432, 1, 1, bParam6, bVar0, 0, 0);
}

void func_190(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_374((*uParam0)[iVar0]))
		{
			if (func_375((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_376((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_377((*uParam1)[iVar0]))
		{
			if (func_375((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_378((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_379((*uParam2)[iVar0]))
		{
			if (func_375((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_380((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_381((*uParam3)[iVar0]))
		{
			if (func_375((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_382((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_375(uParam4->f_1, iParam12))
	{
		func_383(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_384((*uParam5)[iVar0]))
		{
			if (func_375((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_385((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_384((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_386((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_375((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_387((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_388((*uParam6)[iVar0]))
		{
			if (func_375((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_389((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_390((*uParam7)[iVar0]))
		{
			if (func_375((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_391((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_392((*uParam8)[iVar0]))
		{
			if (func_375((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_393((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_394((*uParam9)[iVar0]))
		{
			if (func_375((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_395((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_396((*uParam10)[iVar0]))
		{
			if (func_375((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_397((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_398((*uParam11)[iVar0]))
		{
			if (func_375((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_399((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_191(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_192()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((((_does_anim_scene_exist(&(Global_43806[iVar0])) && is_thread_active(Global_43806[iVar0]->f_1, false)) && Global_43806[iVar0]->f_1 == get_id_of_this_thread()) && _0xa9016536015de29d(&(Global_43806[iVar0]), "pl_breakout")) && !_0x1f0e401031e20146(&(Global_43806[iVar0]), "pl_breakout"))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_193()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((((_does_anim_scene_exist(&(Global_43806[iVar0])) && is_thread_active(Global_43806[iVar0]->f_1, false)) && Global_43806[iVar0]->f_1 == get_id_of_this_thread()) && _0xa9016536015de29d(&(Global_43806[iVar0]), "pl_breakout")) && !_0x1f0e401031e20146(&(Global_43806[iVar0]), "pl_breakout"))
		{
			_set_anim_scene_playback_list_bool(&(Global_43806[iVar0]), "pl_breakout", true);
		}
		iVar0++;
	}
}

bool func_194(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((_does_anim_scene_exist(&(Global_43806[iVar0])) && _is_anim_scene_started(&(Global_43806[iVar0]), false)) && _0x3ab6c7b0bb0df4b1(iParam0, &(Global_43806[iVar0])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_195(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_196(int iParam0)
{
	if (!func_195(iParam0))
	{
		return 0;
	}
	return func_401(func_400(iParam0));
}

int func_197(int iParam0)
{
	if (!func_195(iParam0))
	{
		return -1;
	}
	return func_402(func_400(iParam0));
}

struct<8> func_198(var uParam0)
{
	Var0 = { func_403(uParam0) };
	if (is_string_null_or_empty(&Var0))
	{
		Var0 = { func_404() };
	}
	return Var0;
}

void func_199(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_446), sParam1, 64);
}

char* func_200()
{
	return "unnamed";
}

Vector3 func_201(int iParam0)
{
	if (func_405(iParam0))
	{
		return func_406(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

void func_202(int iParam0, int iParam1, int iParam2)
{
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	iParam0->f_425 = iParam1;
	_0x18262cafebb5fbe1(iParam1, 0, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam1, 0, 0, 0, -1, -1, iParam2);
	_0x19c7567d2f2287d6(iParam1, 15);
	func_66(iParam0, 512);
	iParam0->f_427 = func_290(iParam1, 0, 0, 0);
}

void func_203(int iParam0, int iParam1)
{
	if (!func_81(iParam0))
	{
		return;
	}
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	if (!func_288(iParam0))
	{
	}
	(*Global_1835011)[iParam0]->f_61 = iParam1;
}

void func_204(int iParam0, int iParam1)
{
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	iParam0->f_426 = iParam1;
	func_407(iParam1);
	StringCopy(&cVar0, func_200(), 64);
	func_408(iParam1, &cVar0, 1, 0, 0, 0, -1082130432);
}

struct<2> func_205(int iParam0)
{
	MemCopy(&Var0, {func_168(iParam0)}, 2);
	return Var0;
}

struct<2> func_206(int iParam0)
{
	Var0 = { func_205(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

bool func_207()
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

bool func_208(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_209(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_210(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!is_string_null_or_empty(&(uParam1->f_1016[iVar0]->f_30)))
		{
			func_322(uParam0, &(uParam1->f_1016[iVar0]->f_30), 1);
		}
		iVar0++;
	}
}

void func_211(var uParam0, vector3 vParam1)
{
	if (func_90(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_212(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_213(var uParam0)
{
	return uParam0->f_435;
}

void func_214()
{
	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_409(Var0);
	}
}

void func_215(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_444))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_444, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_462[iVar0]) && (_0x23e33cb9f4a3f547(uParam0->f_444, uParam0->f_462[iVar0]) || _0x0df57f86fe71dbe5(uParam0->f_444, uParam0->f_462[iVar0])))
		{
			_0xae6ada8fe7e84acc(uParam0->f_444, uParam0->f_462[iVar0]);
		}
		uParam0->f_462[iVar0]->f_8 = 0;
		iVar0++;
	}
}

void func_216(var uParam0)
{
	if (_does_volume_exist(uParam0->f_4))
	{
		if (func_83(uParam0, 16))
		{
			_0xa1cfb35069d23c23(uParam0->f_4);
			_0x74c2b3dc0b294102(uParam0->f_4);
			func_410(uParam0);
			_0xd17672447692478e(uParam0->f_4, 0);
		}
	}
	if (func_83(uParam0, 8))
	{
		_delete_volume(uParam0->f_4);
		func_103(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_103(uParam0, 16, 1);
}

float func_217(var uParam0)
{
	return uParam0->f_434;
}

struct<8> func_218(var uParam0)
{
	return uParam0->f_446;
}

void func_219(var uParam0)
{
	Var0 = { func_411() };
	func_199(uParam0, &Var0);
}

void func_220(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_83(uParam0, 16))
	{
		return;
	}
	if (!_does_volume_exist(uParam0->f_4) && !func_412(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = _create_volume_box_with_custom_name(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_200());
		func_96(uParam0, 8);
	}
	if (_does_volume_exist(uParam0->f_4))
	{
		_0xb56d41a694e42e86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		_0x18262cafebb5fbe1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_413(uParam0, uParam0->f_4, 0, 1);
		_0xc1799fafd2fdf52b(uParam0->f_4, 0, 0, iParam2);
		func_96(uParam0, 16);
	}
}

bool func_221()
{
	return Global_1946804->f_1497 != Global_1946804->f_2163.f_1;
}

void func_222(int iParam0)
{
	if (func_414(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_409(Var0);
}

int func_223()
{
	return &Global_1899516;
}

int func_224()
{
	return &Global_1899515;
}

int func_225(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_226(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

struct<8> func_227(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	iVar0 = get_length_of_literal_string(sParam0);
	iVar1 = get_length_of_literal_string(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, _0x806862e5d266cf38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = get_length_of_literal_string(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, _0x806862e5d266cf38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = get_length_of_literal_string(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, _0x806862e5d266cf38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, _0x806862e5d266cf38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

bool func_228(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_229()
{
	if (func_415(Global_43801))
	{
		func_416(&Global_43801, 0, 0);
	}
}

char* func_230(int iParam0)
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
	return func_417(iVar0);
}

bool func_231(int iParam0)
{
	if (func_418(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_232(int iParam0, bool bParam1)
{
	if (bParam1 && !func_415(iParam0))
	{
		return false;
	}
	return !func_419(iParam0, 4);
}

bool func_233(bool bParam0, bool bParam1)
{
	if (!func_415(Global_43801))
	{
		Global_43801 = func_420("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		(*Global_1945938)[Global_43801]->f_16 = &Global_23[3];
		func_421(Global_43801, 0, 1);
		func_422(Global_43801, 6, 1);
		if (bParam1)
		{
			func_422(Global_43801, 14, 1);
		}
	}
	else
	{
		if (!func_232(Global_43801, 0))
		{
			func_423(Global_43801, 1, 1);
		}
		if (func_424(Global_43801, 1) != 0f && bParam0)
		{
			func_421(Global_43801, 1, 1);
		}
		else
		{
			func_421(Global_43801, 0, 1);
		}
		return func_425(Global_43801, 1);
	}
	return false;
}

bool func_234(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_235(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (!_does_anim_scene_exist(uParam0->f_444))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_444, true, false))
	{
		return;
	}
	if (!_0x23e33cb9f4a3f547(uParam0->f_444, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_462[iVar0]) && are_strings_equal(sParam1, uParam0->f_462[iVar0]))
		{
			Var1 = { uParam0->f_446 };
			*uParam0->f_462[iVar0] = { Var1 };
		}
		iVar0++;
	}
	func_199(uParam0, sParam1);
	func_103(uParam0, 2097152, 1);
	func_96(uParam0, 33554432);
	_set_anim_scene_playback_list_bool(uParam0->f_444, sParam1, true);
}

void func_236(var uParam0, char* sParam1)
{
	if (((!func_83(uParam0, 32) || func_426(uParam0)) || func_83(uParam0, 268435456)) && !func_83(uParam0, 65536))
	{
		func_330(&(uParam0->f_500), 256);
	}
}

void func_237(var uParam0, bool bParam1)
{
	if (get_current_ped_weapon(Global_35, &uVar0, false, 9, false))
	{
		_0x67e21acc5c0c970c(Global_35, 9, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 7, false))
	{
		_0x67e21acc5c0c970c(Global_35, 7, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 8, false))
	{
		_0x67e21acc5c0c970c(Global_35, 8, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 10, false))
	{
		_0x67e21acc5c0c970c(Global_35, 10, bParam1);
	}
}

bool func_238()
{
	return _get_number_of_references_of_script_with_name_hash(130487986) > 0;
}

void func_239()
{
	script_thread_iterator_reset();
	iVar0 = script_thread_iterator_get_next_thread_id();
	while (_does_thread_exist(iVar0))
	{
		if (_get_hash_of_thread(iVar0) == 130487986)
		{
			if (!is_entity_dead(Global_35))
			{
				set_ped_reset_flag(Global_35, 265, true);
			}
			force_cleanup_for_thread_with_this_id(iVar0, 1);
			return;
		}
		iVar0 = script_thread_iterator_get_next_thread_id();
	}
}

bool func_240()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

void func_241(bool bParam0)
{
	if (func_240())
	{
		Global_1357509 = 1;
	}
	if (func_427(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

void func_242(var uParam0, char[16] cParam1)
{
	uParam0->f_440 = { cParam1 };
}

bool func_243()
{
	if (does_entity_exist(player_ped_id()) && _0x038b1f1674f0e242(Global_35))
	{
		return true;
	}
	return false;
}

void func_244(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_462[iVar0]))
		{
			func_428(uParam0, uParam0->f_462[iVar0]);
		}
		iVar0++;
	}
	Var1 = { func_411() };
	func_428(uParam0, &Var1);
	Var1 = { func_198(uParam0) };
	func_428(uParam0, &Var1);
}

void func_245(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!is_entity_dead(&(uParam0->f_13[iVar0])) || func_261(uParam0->f_13[iVar0], 2))
		{
			if (func_261(uParam0->f_13[iVar0], 1) || _0x6f1f0b17109309da(uParam0->f_444, &(uParam0->f_13[iVar0]->f_1)))
			{
				func_429(uParam0, &(uParam0->f_13[iVar0]->f_1), &(uParam0->f_13[iVar0]), uParam0->f_13[iVar0]->f_9);
				if (bParam1 && is_entity_a_ped(&(uParam0->f_13[iVar0])))
				{
					iVar1 = get_ped_index_from_entity_index(&(uParam0->f_13[iVar0]));
					if (iVar1 != Global_35 && !func_261(uParam0->f_13[iVar0], 16))
					{
						func_430(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_246(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_444))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_444, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!is_entity_dead(&(uParam0->f_13[iVar0])) || func_261(uParam0->f_13[iVar0], 2))
		{
			if (_0x6f1f0b17109309da(uParam0->f_444, &(uParam0->f_13[iVar0]->f_1)))
			{
				func_431(uParam0->f_13[iVar0], 1);
			}
		}
		iVar0++;
	}
}

float func_247(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_248()
{
	return func_418(_0xc17f69e1418cd11f(3));
}

bool func_249()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_250(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

Vector3 func_251(var uParam0)
{
	return uParam0->f_502;
}

void func_252(var uParam0)
{
	if (func_432(&iVar0))
	{
		if (func_433(iVar0, 0))
		{
			if (func_434(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_270(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_433(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_253(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_435(0, 0);
		func_436(-1);
	}
	func_92(1);
	set_entity_invincible(Global_35, true);
	if (!func_234(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_234(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_234(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_234(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_234(*uParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_234(*uParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_234(*uParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_234(*uParam0, 4) && !func_234(*uParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_234(*uParam0, 2048))
	{
		func_437(0, 0);
	}
	if (func_234(*uParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_234(*uParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_234(*uParam0, 8192))
	{
		func_438();
	}
	if (!func_234(*uParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_234(*uParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_234(*uParam0, 1024))
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
		if (!func_234(*uParam0, 16))
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
						if (func_439() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_90(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_440(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_441(2);
						func_442(-1);
						func_443(vVar3);
						func_445(func_444());
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
	if (!func_234(*uParam0, 4096))
	{
		func_430(Global_35);
	}
	if (!func_234(*uParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_234(*uParam0, 2097152))
	{
		if (func_446() || _0x50f124e6ef188b22(Global_35))
		{
			func_112(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_254(var uParam0, vector3 vParam1)
{
	uParam0->f_502 = { vParam1 };
}

void func_255(var uParam0)
{
	if (func_83(uParam0, 2048) && !func_90(func_447(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_83(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_305(iVar1, func_447(uParam0), func_448(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_83(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_305(iVar3, func_447(uParam0), func_448(uParam0), 2, 1073741824);
		}
	}
}

void func_256(var uParam0)
{
	if ((func_83(uParam0, 268435456) && !func_90(func_447(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_447(uParam0) };
			func_305(iVar0, vVar1, func_449(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_257(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_505 = { vParam1 };
	uParam0->f_508 = iParam4;
	if (func_90(vParam1))
	{
		func_103(uParam0, 2048, 1);
	}
	else
	{
		func_96(uParam0, 2048);
		if (bParam5)
		{
			func_96(uParam0, -2147483648);
		}
	}
}

void func_258(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((!is_entity_dead(&(uParam0->f_13[iVar0])) && is_entity_a_ped(&(uParam0->f_13[iVar0]))) && get_ped_index_from_entity_index(&(uParam0->f_13[iVar0])) != Global_35)
		{
			iVar1 = get_ped_index_from_entity_index(&(uParam0->f_13[iVar0]));
			if (is_ped_human(iVar1))
			{
				if (_0x6f1f0b17109309da(uParam0->f_444, &(uParam0->f_13[iVar0]->f_1)))
				{
					if (!func_261(uParam0->f_13[iVar0], 8))
					{
						if (func_306(func_450(iVar1, 0, 1, 0)))
						{
							if (!func_451(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_306(func_450(iVar1, 1, 1, 0)))
						{
							if (!func_451(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_259(var uParam0, bool bParam1)
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

void func_260(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_273() != -1;
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
			func_452(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_453(iParam1, 29, bVar4, 1, 0);
			func_453(iParam1, 31, bVar4, 1, 0);
			func_453(iParam1, 30, bVar4, 1, 0);
			func_453(iParam1, 22, bVar4, 1, 0);
			func_453(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_454(32768) && func_455(1108822547, 8)) && func_456(10, iParam3))
	{
		func_457(iParam1, 0, 1);
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
			iVar3 = func_458(iVar1, 1);
			if (func_455(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_456(iVar1, iParam3))
				{
				}
				else if ((func_455(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_455(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_453(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_459(iVar3, 1, 6);
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
								func_453(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_455(iVar3, 1))
							{
								func_460(iVar3, 1, 6);
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

bool func_261(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_262(var uParam0)
{
	StringCopy(&(uParam0->f_440), "", 32);
	func_461(uParam0);
	func_211(uParam0, 0f, 0f, 0f);
	func_462(uParam0);
}

void func_263(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		uParam0->f_13[iVar0]->f_11 = 0;
		iVar0++;
	}
}

void func_264(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_265(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		func_463(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_266(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_267(bool bParam0)
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
		func_229();
	}
	_0xa0cefcea390aab9b(0);
}

void func_268(int iParam0)
{
	func_464();
	Global_1911774->f_1 = get_game_timer();
	Global_1911774->f_2 = iParam0;
}

void func_269()
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

int func_270(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_465(iParam1, 1, 0) };
		iParam3 = func_466(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_468(iParam1, iParam2, func_467(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_469(1, (func_273() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_467(iParam3, 1)])
			{
				func_470(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_454(32768) && iParam1 != &Global_1946804->f_57[func_467(iParam3, 1)])
			{
				func_471();
				func_470(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_470(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_472(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_470(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_222(0);
			func_473(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_470(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_271(int iParam0, int iParam1)
{
	Var0 = { func_465(iParam0, 0, 0) };
	Var5 = { func_474(iParam0, Var0, Var0.f_4, 0) };
	if (func_475(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_476(0), &Var5, iParam1);
}

bool func_272(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
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
	if (func_477(*iParam1, 128))
	{
		if (!func_478(iParam0, 1245594896))
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
	if (func_477(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_479(iVar2))
			{
				return false;
			}
			if (!func_478(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { get_entity_coords(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_480(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_477(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				clear_ped_tasks(iParam0, 1, 0);
				task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((func_481(iParam2, 128) && does_entity_exist(_get_last_mount(iParam0))) && does_entity_exist(_get_first_entity_ped_is_carrying(_get_last_mount(iParam0))))
		{
			task_pickup_carriable_entity(iParam0, _get_first_entity_ped_is_carrying(_get_last_mount(iParam0)));
			func_482(iParam1, 128);
			return false;
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	if (func_477(*iParam1, 4))
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
	if (func_477(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_479(iVar2))
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
		if (!func_481(iParam2, 2) && _0xb16223cb7da965f0(get_player_index()))
		{
			_0xae637bb8ef017875(get_player_index(), 1);
		}
		if (!func_481(iParam2, 2048))
		{
			if (is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), false, iParam3, false);
				if (func_481(iParam2, 8192))
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
		if (func_477(*iParam1, 2336))
		{
			if (!func_479(iVar2))
			{
			}
			if (func_483(iVar2, *iParam1))
			{
				func_484(iParam1, 32);
				func_484(iParam1, 256);
				func_484(iParam1, 2048);
				func_482(iParam1, 512);
				func_482(iParam1, 1024);
				func_482(iParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (func_477(*iParam1, 64))
		{
			disable_control_action(0, 1520437207, false);
			if (!func_479(iVar2))
			{
			}
			if (is_ped_walking(iVar2))
			{
				return false;
			}
			else
			{
				func_484(iParam1, 64);
			}
		}
		if (func_481(iParam2, 16))
		{
			task_horse_action(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return true;
		}
		disable_control_action(0, 1520437207, false);
		if (((is_ped_sprinting(iVar2) || (is_ped_running(iVar2) && func_481(iParam2, 1024))) || func_481(iParam2, 8)) && !func_477(*iParam1, 5632))
		{
			task_horse_action(iVar2, 1, 0, 0);
			func_482(iParam1, 32);
		}
		else if ((is_ped_running(iVar2) && func_481(iParam2, 4096)) && !func_477(*iParam1, 5632))
		{
			task_horse_action(iVar2, 8, 0, 0);
			func_482(iParam1, 2048);
			func_482(iParam1, 4096);
		}
		else if (((get_ped_desired_move_blend_ratio(iVar2) <= 1.5f && get_ped_desired_move_blend_ratio(iVar2) >= 1.001f) && func_481(iParam2, 32)) && !func_477(*iParam1, 5632))
		{
			task_horse_action(iVar2, 3, 0, 0);
			func_482(iParam1, 256);
			func_482(iParam1, 1024);
		}
		else if (is_ped_walking(iVar2))
		{
			task_stand_still(iVar2, -1);
			func_482(iParam1, 64);
		}
		else if (!func_481(iParam2, 1))
		{
			if (!func_481(iParam2, 256))
			{
				_0xb832f1a686b9b810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_480(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_477(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			set_ped_desired_move_blend_ratio(iVar2, 0f);
			func_482(iParam1, 2);
		}
		else
		{
			task_stand_still(iParam0, 1000);
			func_482(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_481(iParam2, 1))
		{
			open_sequence_task(&iVar0);
			task_stand_still(0, 250);
			task_leave_any_vehicle(0, 0, 0);
			close_sequence_task(iVar0);
			task_perform_sequence(iParam0, iVar0);
			clear_sequence_task(&iVar0);
			bring_vehicle_to_halt(iVar1, fParam5, iParam6, false);
			func_482(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	else if (!func_481(iParam2, 512))
	{
		task_stand_still(iParam0, 200);
		func_482(iParam1, 8);
	}
	return false;
}

int func_273()
{
	return Global_1572887->f_12;
}

int func_274(int iParam0)
{
	if (!func_485(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_275(int iParam0, int iParam1)
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
	if (func_477(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_477(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_477(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_477(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_477(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_477(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_477(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_477(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_276()
{
	return get_player_group(get_player_index());
}

void func_277(int iParam0, int iParam1)
{
	if (!func_114(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0];
	if (does_entity_exist(iVar0))
	{
		if (!is_entity_dead(iVar0))
		{
			decor_set_int(iVar0, "companion_manager_command", iParam1);
		}
	}
}

void func_278(bool bParam0, int iParam1, bool bParam2)
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

void func_279(float fParam0)
{
	func_486(10, fParam0);
}

bool func_280()
{
	if (func_273() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_281()
{
	animpostfx_stop("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

bool func_282(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_485(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_283(var uParam0, int iParam1)
{
	uParam0->f_1683 = iParam1;
}

void func_284(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_285(var uParam0, int iParam1)
{
	if (func_331(uParam0, 4))
	{
		return 1;
	}
	switch (iParam1)
	{
		case 1:
			_display_hud_component(-1679307491);
			_display_hud_component(474191950);
			break;
		default:
			if (func_162())
			{
				if (!func_63(uParam0, 524288))
				{
					_hide_hud_component(-1679307491);
				}
				_display_hud_component(474191950);
			}
			break;
	}
	if (func_162())
	{
		func_176(uParam0, 512);
		func_487(uParam0, 128);
		_0xcb9401f918cb0f75(Global_35, "PlayLeadin", 0, -1);
		if (func_488(uParam0->f_1016[uParam0->f_1684], 4))
		{
			_0xcb9401f918cb0f75(Global_35, func_489(uParam0->f_1016[uParam0->f_1684]->f_39), 0, -1);
		}
		set_ped_config_flag(Global_35, 255, true);
	}
	func_163();
	func_184(uParam0, 1, 0);
	func_64(uParam0);
	if (func_63(uParam0, 524288) && is_screen_faded_out())
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	func_487(uParam0, 4);
	if (_does_volume_exist(uParam0->f_1875))
	{
		_delete_volume(uParam0->f_1875);
	}
	if (func_331(uParam0, 8) && _0xdd0b7c5ae58f721d(func_490()))
	{
		_0x798be43c9393632b(func_490());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!is_string_null_or_empty(&(uParam0->f_1345[iVar0]->f_2)) && !are_strings_equal(&(uParam0->f_1345[iVar0]->f_2), func_490())) && _0xdd0b7c5ae58f721d(&(uParam0->f_1345[iVar0]->f_2)))
		{
			if (uParam0->f_1345[iVar0]->f_21)
			{
				_0x798be43c9393632b(&(uParam0->f_1345[iVar0]->f_2));
			}
		}
		iVar0++;
	}
	reset_player_input_gait(get_player_index());
	if (func_63(uParam0, 524288) || iParam1 == 1)
	{
		func_229();
	}
	if (func_331(uParam0, 16))
	{
		if (func_339(uParam0) == 0)
		{
			if (_0x927b810e43e99932(&(uParam0->f_1692)))
			{
			}
		}
		else if (_0x927b810e43e99932(&(uParam0->f_1692)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_1692));
		}
	}
	func_491();
	if (func_331(uParam0, 32))
	{
		_0x3ad8eff9703be657(Global_35, 1f);
	}
	if (does_entity_exist(uParam0->f_1901))
	{
		if (!func_63(uParam0, 8192))
		{
			if (_0xc6d7ddc843176701(uParam0->f_1901) != 50f)
			{
				_0x0c3f0f7f92ca847c(uParam0->f_1901, 50f);
			}
		}
		if (_0x404527bc03da0e6c(uParam0->f_1901))
		{
			_0x7c06330bfdda182e(uParam0->f_1901);
		}
	}
	func_352(uParam0);
	if (is_itemset_valid(uParam0->f_1921))
	{
		destroy_itemset(uParam0->f_1921);
	}
	return 1;
}

void func_286(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_287(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_288(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_492((*Global_1835011)[iParam0]->f_1);
}

struct<4> func_289(var uParam0)
{
	return uParam0->f_440;
}

var func_290(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_145(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

int func_291(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
{
	if (!func_114(iParam1))
	{
		return 0;
	}
	if (func_493(iParam0, *uParam2))
	{
		if (*uParam2 != func_494(iParam1))
		{
		}
		return 1;
	}
	vVar0 = { iParam5, iParam6, iParam7 };
	if (func_90(vVar0))
	{
		vVar0 = { func_126(*iParam0) };
	}
	if (!func_495(iParam1, 28, 1))
	{
		func_496(iParam1, 28, 1);
	}
	*uParam2 = func_497(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
	if (!is_entity_dead(*uParam2))
	{
		if (!_0xa0bc8faed8cfeb3c(*uParam2))
		{
			return 0;
		}
		func_319(iParam0, *uParam2);
		func_498(iParam0, *uParam2);
		func_499(*uParam2, bParam3, bParam4, 0);
		if (bParam4)
		{
			set_blocking_of_non_temporary_events(*uParam2, true);
			if (!func_478(*uParam2, -982327190))
			{
				task_stand_still(*uParam2, -1);
			}
		}
		func_159(iParam0, *uParam2, 0, 0, 0, 1, 0);
		func_500(iParam1, 0, 0, 1);
		func_501(iParam1);
		return 1;
	}
	return 0;
}

bool func_292(int iParam0, bool bParam1)
{
	if (!func_502(Local_14.f_1))
	{
		Local_14.f_1 = { func_503() };
	}
	if (func_504(&(Local_14.f_1), 1))
	{
		return true;
	}
	if (!does_entity_exist(&(Local_14.f_3[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_3[0] = func_505(-243249647, 2734.155f, -1397.665f, 46.1831f, 211.9747f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[0]), "CUSTOMER01Intro");
		func_506(Local_14.f_1, &(Local_14.f_3[0]));
		func_507(&(Local_14.f_3[0]), Local_14);
		set_ped_relationship_group_hash(&(Local_14.f_3[0]), -1976316465);
		func_142(&(Local_14.f_3[0]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_3[0]), true);
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
	if (!does_entity_exist(&(Local_14.f_3[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_3[1] = func_505(-1867663375, 2744.33f, -1397.482f, 46.1831f, 353.558f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[1]), "CUSTOMER02Intro");
		func_506(Local_14.f_1, &(Local_14.f_3[1]));
		func_507(&(Local_14.f_3[1]), Local_14);
		set_ped_relationship_group_hash(&(Local_14.f_3[1]), -1976316465);
		func_142(&(Local_14.f_3[1]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_3[1]), true);
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
	if (!does_entity_exist(&(Local_14.f_3[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_3[2] = func_505(-243249647, 2738.873f, -1397.504f, 46.1863f, 27.9751f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[2]), "CUSTOMER03Intro");
		func_506(Local_14.f_1, &(Local_14.f_3[2]));
		func_507(&(Local_14.f_3[2]), Local_14);
		set_ped_relationship_group_hash(&(Local_14.f_3[2]), -1976316465);
		func_142(&(Local_14.f_3[2]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_3[2]), true);
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
	if (!does_entity_exist(&(Local_14.f_3[3])) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_3[3] = func_505(-243249647, 2748.026f, -1396.552f, 46.1831f, 30.0073f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[3]), "Cashier");
		func_506(Local_14.f_1, &(Local_14.f_3[3]));
		func_507(&(Local_14.f_3[3]), Local_14);
		set_ped_relationship_group_hash(&(Local_14.f_3[3]), -1976316465);
		func_142(&(Local_14.f_3[3]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_3[3]), true);
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
	func_508(&(Local_14.f_1), 1);
	return true;
}

void func_293(int iParam0, int iParam1)
{
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	func_54(iParam0);
	func_55(iParam0);
	func_202(iParam0, iParam1, 0);
	func_204(iParam0, iParam1);
	func_203(*iParam0, iParam1);
}

bool func_294(char* sParam0)
{
	if (_0x4f9e3ed7617123ac(get_hash_key(sParam0)))
	{
		return true;
	}
	return false;
}

void func_295(int iParam0, vector3 vParam1, int iParam4)
{
	MemCopy(&(iParam0->f_2880), {vParam1}, 4);
	func_25(iParam0, 32768);
	func_509(&(iParam0->f_958), iParam4);
}

void func_296(var uParam0, float fParam1)
{
	uParam0->f_434 = fParam1;
}

void func_297(var uParam0, float fParam1)
{
	uParam0->f_435 = fParam1;
}

int func_298(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_374((*uParam0)[iVar1]))
		{
			if (func_375((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_510((*uParam0)[iVar1]))
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
		if (func_377((*uParam1)[iVar1]))
		{
			if (func_375((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_511((*uParam1)[iVar1]))
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
		if (func_379((*uParam2)[iVar1]))
		{
			if (func_375((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_512((*uParam2)[iVar1]))
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
		if (func_381((*uParam3)[iVar1]))
		{
			if (func_375((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_382((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_375(uParam4->f_1, iParam12))
	{
		if (!func_383(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_384((*uParam5)[iVar1]))
		{
			if (func_375((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_513((*uParam5)[iVar1]))
				{
					if (!func_514((*uParam5)[iVar1]))
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
		if (func_384((*uParam5)[iVar1]))
		{
			if (func_375((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_513((*uParam5)[iVar1]))
				{
					if (func_514((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_386((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_515((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_388((*uParam6)[iVar1]))
		{
			if (func_375((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_516((*uParam6)[iVar1]))
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
		if (func_390((*uParam7)[iVar1]))
		{
			if (func_375((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_517((*uParam7)[iVar1]))
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
		if (func_392((*uParam8)[iVar1]))
		{
			if (func_375((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_518((*uParam8)[iVar1]))
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
		if (func_394((*uParam9)[iVar1]))
		{
			if (func_375((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_519((*uParam9)[iVar1]))
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
		if (func_396((*uParam10)[iVar1]))
		{
			if (func_375((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_520((*uParam10)[iVar1]))
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
		if (func_398((*uParam11)[iVar1]))
		{
			if (func_375((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_521((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_299(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 1;
	}
	return func_522(iParam0);
	return -1;
}

bool func_300(int iParam0)
{
	Var0 = { func_205(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_text_database_has_loaded(&Var0))
		{
			return false;
		}
	}
	return true;
}

bool func_301(int iParam0)
{
	Var0 = { func_206(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_text_database_has_loaded(&Var0))
		{
			return false;
		}
	}
	return true;
}

struct<4> func_302(int iParam0, int iParam1)
{
	return func_523(iParam0, iParam1);
}

void func_303(var uParam0, int iParam1)
{
	uParam0->f_439 = (uParam0->f_439 || iParam1);
}

struct<4> func_304(int iParam0, int iParam1)
{
	Var0 = { func_524(iParam0, iParam1) };
	Var0.f_3 = func_525(iParam0, iParam1);
	return Var0;
}

void func_305(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_526(Global_35) && is_player_teleport_active())
	{
	}
	if (func_527(iParam0))
	{
		if (func_528(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_477(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_305(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_305(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_477(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_477(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_477(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_477(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_477(iParam5, 129))
	{
		if (func_477(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_477(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_477(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_477(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_527(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_477(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_477(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_306(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_307(int iParam0)
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

int func_308(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_465(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_529((386 + iVar28), 1);
			if (func_530(iParam0, &Var0, iVar5, 0))
			{
				if (func_531(iParam0, &Var6, iVar5))
				{
					Var29 = { func_474(iParam0, Var0, iVar5, 0) };
					func_532(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_533(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_534(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_535(iParam0, iParam1);
					return 1;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

void func_309(int iParam0, int iParam1, float fParam2)
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

bool func_310(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_311(int iParam0, bool bParam1, bool bParam2)
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

bool func_312(int iParam0)
{
	if (func_536(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_313(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_312(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, iParam1, iParam3);
	}
}

void func_314(int iParam0, bool bParam1)
{
	if (func_312(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_315(int iParam0, bool bParam1)
{
	if (func_312(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_316(int iParam0, bool bParam1)
{
	if (func_312(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_317()
{
	return true;
}

bool func_318(var uParam0, int iParam1, char* sParam2)
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

void func_319(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!is_itemset_valid(iParam0->f_5))
	{
		return;
	}
	if (is_entity_a_ped(iParam1) && get_ped_index_from_entity_index(iParam1) == Global_35)
	{
		return;
	}
	if (!is_in_itemset(iParam1, iParam0->f_5))
	{
		add_to_itemset(iParam1, iParam0->f_5);
		if (is_entity_an_object(iParam1))
		{
			if (_0x26054eb81ac0893b(get_object_index_from_entity_index(iParam1)))
			{
				_0x2dd42fad06e6f19e(get_object_index_from_entity_index(iParam1), 1, 1);
			}
		}
		else if (is_entity_a_ped(iParam1))
		{
			iVar0 = get_ped_index_from_entity_index(iParam1);
			_0xbb1e41dd3d3c6250(iVar0, "SpMissionTriggers", 0);
			if (is_ped_human(iVar0))
			{
				_0x99b2a2e3655deaf1(iVar0, "ClosestScenario");
			}
			_0x1a5c5d350068a673(get_ped_index_from_entity_index(iParam1), 0);
			add_to_itemset(iParam1, iParam0->f_6);
		}
	}
}

char* func_320()
{
	return "cutDeleteMe";
}

bool func_321(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_537((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

void func_322(var uParam0, char* sParam1, bool bParam2)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (func_538(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (is_string_null_or_empty(uParam0->f_462[iVar0]))
		{
			if (!func_539(uParam0, sParam1) || func_83(uParam0, 8388608))
			{
				StringCopy(uParam0->f_462[iVar0], sParam1, 64);
				if (!bParam2)
				{
					if (_does_anim_scene_exist(uParam0->f_444) && _is_anim_scene_loaded(uParam0->f_444, true, false))
					{
						if (_0xa9016536015de29d(uParam0->f_444, sParam1))
						{
							_0xdf7b5144e25cd3fe(uParam0->f_444, sParam1);
						}
					}
					else
					{
						func_96(uParam0, 4194304);
					}
				}
				else
				{
					func_96(uParam0, 4194304);
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

void func_323(var uParam0, char[32] cParam1)
{
	if (is_string_null_or_empty(&cParam1))
	{
		return;
	}
	uParam0->f_454 = { cParam1 };
}

int func_324(var uParam0, int iParam1)
{
	if (func_8(uParam0) < 3)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_475[iVar0]->f_2 == 9 && uParam0->f_475[iVar0]->f_1 == 0) && _does_anim_scene_exist(uParam0->f_1522[uParam0->f_475[iVar0]->f_4]->f_8))
		{
			*iParam1 = uParam0->f_1522[uParam0->f_475[iVar0]->f_4]->f_8;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_325(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_540(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_541(uParam0, iParam1);
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
		iVar1 = func_542(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_543(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_544(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_431(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_463(uParam0->f_13[iVar0], 2);
		}
	}
}

void func_326(int iParam0, int iParam1, char* sParam2)
{
	func_545(&(iParam0->f_958), iParam1, sParam2, 0);
}

int func_327(var uParam0)
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

bool func_328(int iParam0)
{
	return Global_43884 == iParam0;
}

Vector3 func_329(var uParam0, int iParam1)
{
	switch (&uParam0->f_1016[iParam1])
	{
		case 0:
			vVar7 = { uParam0->f_1016[iParam1]->f_4 - uParam0->f_1016[iParam1]->f_1 };
			vVar10 = { vVar7.y, (vVar7.x * -1f), 0f };
			vVar10 = { func_546(vVar10) * Vector(2f, 2f, 2f) };
			*vVar0[0] = { uParam0->f_1016[iParam1]->f_1 + uParam0->f_1016[iParam1]->f_4 / Vector(2f, 2f, 2f) + vVar10 };
			get_ground_z_for_3d_coord(*vVar0[0], &(vVar0[0]->f_2), false);
			*vVar0[1] = { uParam0->f_1016[iParam1]->f_1 + uParam0->f_1016[iParam1]->f_4 / Vector(2f, 2f, 2f) - vVar10 };
			get_ground_z_for_3d_coord(*vVar0[1], &(vVar0[1]->f_2), false);
			if (!func_90(*vVar0[0]))
			{
				if (get_distance_between_coords(*vVar0[0], uParam0->f_1016[iParam1]->f_7, true) < get_distance_between_coords(*vVar0[1], uParam0->f_1016[iParam1]->f_7, true))
				{
					return *vVar0[1];
				}
				else
				{
					return *vVar0[0];
				}
			}
			break;
		case 1:
			fVar13 = 0f;
			if (uParam0->f_1016[iParam1]->f_13 < uParam0->f_1016[iParam1]->f_12)
			{
				fVar13 = ((uParam0->f_1016[iParam1]->f_12 + (uParam0->f_1016[iParam1]->f_13 + 360f)) / 2f);
			}
			else
			{
				fVar13 = ((uParam0->f_1016[iParam1]->f_12 + uParam0->f_1016[iParam1]->f_13) / 2f);
			}
			*vVar0[0] = { uParam0->f_1016[iParam1]->f_1 + Vector(0f, (cos(fVar13) * (uParam0->f_1016[iParam1]->f_11 + 5f)), (sin(fVar13) * (uParam0->f_1016[iParam1]->f_11 + 5f))) };
			vVar0[0]->f_2 = (vVar0[0]->f_2 + 10f);
			get_ground_z_for_3d_coord(*vVar0[0], &(vVar0[0]->f_2), false);
			if (!func_90(*vVar0[0]))
			{
				return *vVar0[0];
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_330(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_331(var uParam0, int iParam1)
{
	return (uParam0->f_1666.f_1 && iParam1) != 0;
}

bool func_332(var uParam0, int iParam1)
{
	return func_547(uParam0->f_27, iParam1);
}

bool func_333(int iParam0)
{
	iVar0 = func_548(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_334(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (does_entity_exist(cParam3[iVar0]))
		{
			if (!is_entity_dead(cParam3[iVar0]))
			{
				add_ped_to_conversation(&cParam0, cParam3[iVar0], &((*cParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

void func_335(char* sParam0, bool bParam1, bool bParam2)
{
	stop_scripted_conversation(sParam0, bParam1, bParam2);
}

int func_336(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_549(bParam1, bParam2, bParam3);
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

void func_337(var uParam0)
{
	if (!func_63(uParam0, 134217728))
	{
		bVar0 = true;
		request_script_with_name_hash(-1181125641);
		if (!has_script_with_name_hash_loaded(-1181125641))
		{
			bVar0 = false;
		}
		request_anim_dict(func_550(1));
		if (!has_anim_dict_loaded(func_550(1)))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_177(uParam0, 134217728);
		}
	}
}

void func_338(var uParam0, int iParam1, bool bParam2)
{
	if (is_screen_faded_out())
	{
		return;
	}
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!func_63(uParam0, 65536))
	{
		if (is_ped_falling(Global_35))
		{
			return;
		}
	}
	if (Global_1430231->f_4)
	{
		return;
	}
	if (!func_63(uParam0, 4096) && uParam0->f_1896)
	{
		return;
	}
	if (!func_63(uParam0, 16777216))
	{
		return;
	}
	if (_0x99f92061efe908ba())
	{
		return;
	}
	func_346(uParam0);
	func_551(uParam0, uParam0->f_1897, uParam0->f_1899);
	func_552(uParam0);
	if (uParam0->f_1900 && !uParam0->f_1899)
	{
		if (((((uParam0->f_1895 >= 0 && uParam0->f_1016[uParam0->f_1895]->f_17 > 0f) && uParam0->f_1688 >= 0) && !func_91(Global_35, uParam0->f_1016[uParam0->f_1688]->f_1, (uParam0->f_1016[uParam0->f_1895]->f_17 + 5f), 1, 1)) && !func_63(uParam0, 33554432)) && !func_63(uParam0, 4))
		{
			func_553(uParam0, uParam0->f_1897);
			return;
		}
	}
	if (!func_63(uParam0, 4))
	{
		if (func_554(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1684 = uParam0->f_1688;
				func_177(uParam0, 8);
				return;
			}
		}
		else
		{
			func_553(uParam0, uParam0->f_1897);
		}
		if (uParam0->f_1016[uParam0->f_1690]->f_29)
		{
			fVar0 = func_555(uParam0, uParam0->f_1690);
			if (fVar0 < 0f || (uParam0->f_1897 && fVar0 < 1f))
			{
				uParam0->f_1688 = uParam0->f_1690;
				if (!bParam2)
				{
					uParam0->f_1684 = uParam0->f_1690;
					func_177(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1689 == -1f || fVar0 <= uParam0->f_1689) || uParam0->f_1690 == uParam0->f_1688)
				{
					if (uParam0->f_1690 != uParam0->f_1688)
					{
					}
					uParam0->f_1688 = uParam0->f_1690;
					uParam0->f_1689 = fVar0;
					func_177(uParam0, 16);
					if (((!func_63(uParam0, 32) && iParam1 != 2) && !bParam2) && get_distance_between_coords(Global_36, uParam0->f_1016[uParam0->f_1688]->f_1, true) < (uParam0->f_1016[uParam0->f_1688]->f_11 + 5f))
					{
						func_556(uParam0);
						func_177(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1688 == uParam0->f_1690)
			{
				func_176(uParam0, 16);
			}
		}
		if (uParam0->f_1690 + 1 >= 8)
		{
			uParam0->f_1690 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1690 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_1016[iVar2]->f_29)
				{
					uParam0->f_1690 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1690 = 0;
			}
		}
		if (uParam0->f_1688 < 0)
		{
			return;
		}
		if (func_332(uParam0->f_1016[uParam0->f_1688], 2) && uParam0->f_1897)
		{
			return;
		}
	}
	if (func_63(uParam0, 16))
	{
		fVar4 = func_212(Global_35, uParam0->f_1016[uParam0->f_1688]->f_1, 1);
		if (uParam0->f_1897 && fVar4 <= (uParam0->f_1016[uParam0->f_1688]->f_17 + 5f))
		{
			disable_control_action(0, -640622144, false);
		}
		fVar5 = func_449(Global_36, uParam0->f_1016[uParam0->f_1688]->f_1, 1);
		fVar6 = 2f;
		if (absf((fVar5 - get_entity_heading(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_1016[uParam0->f_1688]->f_17 || _0xf256a75210c5c0eb(uParam0->f_1875, uParam0->f_1879))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_1016[uParam0->f_1688]->f_1.f_2 && Global_36.f_2 <= (uParam0->f_1016[uParam0->f_1688]->f_1.f_2 + uParam0->f_1016[uParam0->f_1688]->f_10))
			{
				func_345(uParam0, uParam0->f_1016[uParam0->f_1688]->f_27, uParam0->f_1345[uParam0->f_1688]->f_1, fVar6);
			}
			if ((uParam0->f_1899 && _0xf256a75210c5c0eb(uParam0->f_1875, uParam0->f_1879)) && get_entity_speed(uParam0->f_1901) > 5f)
			{
				if (does_entity_exist(uParam0->f_1901) && !_0x404527bc03da0e6c(uParam0->f_1901))
				{
					bring_vehicle_to_halt(uParam0->f_1901, 1f, 2000, false);
				}
			}
			else if (does_entity_exist(uParam0->f_1901) && _0x404527bc03da0e6c(uParam0->f_1901))
			{
				_0x7c06330bfdda182e(uParam0->f_1901);
			}
		}
		else if ((uParam0->f_1897 && fVar4 <= (uParam0->f_1016[uParam0->f_1688]->f_17 + 5f)) && !is_entity_dead(uParam0->f_1898))
		{
			set_ped_max_move_blend_ratio(uParam0->f_1898, 1f);
			disable_control_action(0, 1520437207, false);
		}
	}
	if (((uParam0->f_1897 && iVar3) && get_ped_desired_move_blend_ratio(uParam0->f_1898) > 1.25f) || func_63(uParam0, 4))
	{
		if (((_0xf256a75210c5c0eb(uParam0->f_1875, uParam0->f_1879) && func_555(uParam0, uParam0->f_1688) < 10000f) && func_63(uParam0, 16)) || func_63(uParam0, 4))
		{
			if (!func_63(uParam0, 4))
			{
				func_177(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!func_343(uParam0, uParam0->f_1688))
			{
				iVar7 |= 2048;
			}
			if (func_272(Global_35, &(uParam0->f_1686), iVar7, 0, 0, 1084227584, 100, uParam0->f_1016[uParam0->f_1688]->f_7, uParam0->f_1016[uParam0->f_1688]->f_7.f_1))
			{
				set_player_control(get_player_index(), true, 0, false);
				uParam0->f_1686 = 0;
				func_176(uParam0, 4);
			}
		}
	}
	else if (func_63(uParam0, 4))
	{
		func_176(uParam0, 4);
	}
}

int func_339(var uParam0)
{
	return *uParam0;
}

void func_340(var uParam0)
{
	if (is_screen_fading_out() || is_screen_faded_out())
	{
		return;
	}
	if (func_63(uParam0, 512))
	{
		return;
	}
	if (func_21(&(uParam0->f_1872)) < 2f)
	{
		return;
	}
	if (func_233(1, 0))
	{
		do_screen_fade_out(1000);
		func_177(uParam0, 524288);
	}
}

void func_341(bool bParam0)
{
	if (bParam0)
	{
		func_557(4);
	}
	func_557(2);
	set_bit(&(Global_1956580->f_1), 0);
}

void func_342()
{
	Global_1905944->f_5695 = 1;
}

bool func_343(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_475[iVar0]->f_17 == 1 && uParam0->f_475[iVar0]->f_2 == 4) && &uParam0->f_475[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_344(var uParam0)
{
	return uParam0->f_2;
}

void func_345(var uParam0, var uParam1, var uParam2, float fParam3)
{
	if (func_547(uParam1, 8))
	{
		iVar0 |= 8;
	}
	if (func_547(uParam1, 8192))
	{
		iVar0 |= 32;
	}
	if (uParam0->f_1897)
	{
		fParam3 = 0.55f;
		set_ped_reset_flag(uParam0->f_1898, 214, true);
	}
	if (uParam0->f_1896 && func_63(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (func_547(uParam1, 262144) && Global_1935630->f_44 == 2055893578)
	{
		iVar0 |= 16;
	}
	func_558(&iVar1, uParam2);
	func_559(&(uParam0->f_1904), iVar0, iVar1, fParam3);
	if (!Global_1935630->f_12)
	{
		if (!func_63(uParam0, 67108864))
		{
			set_ped_reset_flag(Global_35, 25, true);
		}
		set_ped_reset_flag(Global_35, 36, true);
	}
	func_560();
	func_561(uParam0, 1);
}

void func_346(var uParam0)
{
	iVar0 = uParam0->f_1688;
	if (iVar0 >= 0 && !func_351(uParam0, 2))
	{
		bVar1 = get_distance_between_coords(Global_36, uParam0->f_1016[iVar0]->f_1, true) <= uParam0->f_1016[iVar0]->f_16;
		Var2 = { uParam0->f_1692 };
		if (bVar1)
		{
			if (!is_string_null_or_empty(&(uParam0->f_1345[iVar0]->f_2)))
			{
				StringCopy(&(uParam0->f_1692), func_562(uParam0->f_1345[iVar0]->f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1692), func_490(), 64);
			}
			if (!is_string_null_or_empty(&(uParam0->f_1345[iVar0]->f_10)))
			{
				StringCopy(&(uParam0->f_1692.f_8), func_562(uParam0->f_1345[iVar0]->f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1692.f_8), func_563(), 64);
			}
			disable_control_action(0, -1722177808, false);
		}
		bVar18 = (!are_strings_equal(&Var2, &(uParam0->f_1692)) || !are_strings_equal(&(Var2.f_8), &(uParam0->f_1692.f_8)));
		if (bVar18 || !bVar1)
		{
			if (_0x927b810e43e99932(&Var2))
			{
				_0x0a5a4f1979abb40e(&Var2);
			}
		}
		if (bVar1 && !&uParam0->f_1345[iVar0])
		{
			if (!func_564(uParam0->f_1345[iVar0]->f_1, 8))
			{
				if (!func_564(uParam0->f_1345[iVar0]->f_1, 8))
				{
					func_558(&iVar19, uParam0->f_1345[iVar0]->f_1);
					func_565(&(uParam0->f_1904), iVar19);
				}
			}
			else
			{
				vVar20 = { uParam0->f_1016[iVar0]->f_1 };
				iVar24 = -1;
				if (uParam0->f_1345[iVar0]->f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 35)
					{
						if (uParam0->f_3[iVar25] && does_entity_exist(uParam0->f_3[iVar25]->f_2))
						{
							if (uParam0->f_1345[iVar0]->f_20 == uParam0->f_3[iVar25]->f_3)
							{
								iVar23 = uParam0->f_3[iVar25]->f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (func_564(uParam0->f_1345[iVar0]->f_1, 16) && iVar24 >= 0)
							{
								if (!does_entity_exist(iVar23))
								{
									iVar23 = uParam0->f_3[uParam0->f_1345[iVar0]->f_20]->f_2;
								}
								if (!does_entity_exist(iVar23) || get_ped_index_from_entity_index(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { get_entity_coords(iVar23, false, false) };
									iVar26 = get_interior_from_entity(iVar23);
									if (is_valid_interior(iVar26) && (!is_valid_interior(uParam0->f_1902) || iVar26 != uParam0->f_1902))
									{
										if (_0x927b810e43e99932(&(uParam0->f_1692)))
										{
											_0x0a5a4f1979abb40e(&(uParam0->f_1692));
											func_487(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1345[iVar0]->f_18 != 0f || uParam0->f_1345[iVar0]->f_19 != 0f)
								{
									vVar20 = { _get_object_offset_from_coords(vVar20, func_566(Global_35, iVar23, 1), uParam0->f_1345[iVar0]->f_18, 0f, uParam0->f_1345[iVar0]->f_19) };
								}
							}
							else if (uParam0->f_1345[iVar0]->f_18 != 0f || uParam0->f_1345[iVar0]->f_19 != 0f)
							{
								vVar20 = { _get_object_offset_from_coords(vVar20, func_449(Global_36, uParam0->f_1016[iVar0]->f_1, 1), uParam0->f_1345[iVar0]->f_18, 0f, uParam0->f_1345[iVar0]->f_19) };
							}
							fVar27 = uParam0->f_1016[iVar0]->f_16;
							fVar28 = uParam0->f_1016[iVar0]->f_14;
							bVar29 = func_564(uParam0->f_1345[iVar0]->f_1, 2);
							bVar30 = (func_564(uParam0->f_1345[iVar0]->f_1, 1) && !bVar29);
							bVar31 = func_564(uParam0->f_1345[iVar0]->f_1, 4);
							bVar32 = false;
							if (!_0x927b810e43e99932(&(uParam0->f_1692)))
							{
								_0xb8b207c34285e978(&(uParam0->f_1692));
								if (is_cinematic_cam_rendering())
								{
									func_567(0, 0);
								}
								bVar32 = true;
								func_487(uParam0, 16);
							}
							if (_0x4138ee36bc3dc0a7(&(uParam0->f_1692), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1708.f_16 != iVar23);
								bVar32 = (bVar32 || !func_568(uParam0->f_1708.f_17, vVar20, 1056964608, 1));
								bVar32 = (bVar32 || absf((uParam0->f_1708.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || absf((uParam0->f_1708.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_1708.f_22 != bVar30);
								uParam0->f_1708.f_16 = iVar23;
								uParam0->f_1708.f_17 = { vVar20 };
								uParam0->f_1708.f_20 = fVar27;
								uParam0->f_1708.f_21 = fVar28;
								uParam0->f_1708.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_1708 = { uParam0->f_1692 };
									_0x8e036b41c37d0e5f(&(uParam0->f_1708));
								}
							}
							if (_0x4138ee36bc3dc0a7(&(uParam0->f_1692), 9))
							{
								bVar32 = (bVar32 || uParam0->f_1731.f_16 != iVar23);
								bVar32 = (bVar32 || !func_568(uParam0->f_1731.f_17, vVar20, 1056964608, 1));
								bVar32 = (bVar32 || uParam0->f_1731.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_1731.f_21 != bVar30);
								uParam0->f_1731.f_16 = iVar23;
								uParam0->f_1731.f_17 = { vVar20 };
								uParam0->f_1731.f_20 = !bVar31;
								uParam0->f_1731.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_1731 = { uParam0->f_1692 };
									_0x728491fb3dffef99(&(uParam0->f_1731));
								}
							}
							Jump @1468; //curOff = 1420
							if (_0x927b810e43e99932(&(uParam0->f_1692)))
							{
								_0x0a5a4f1979abb40e(&(uParam0->f_1692));
							}
							StringCopy(&(uParam0->f_1692), "", 64);
							StringCopy(&(uParam0->f_1692.f_8), "", 64);
							func_569(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

int func_347(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2 || iParam1 == 2)
	{
		return 0;
	}
	if (func_570(uParam0, &iVar0))
	{
		func_571(uParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_348(var uParam0)
{
	if (func_339(uParam0) != 0)
	{
		return;
	}
	iVar0 = uParam0->f_1688;
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 >= 0)
	{
		if (Global_36.f_2 < uParam0->f_1016[iVar0]->f_1.f_2)
		{
			return;
		}
		fVar1 = uParam0->f_1016[iVar0]->f_15;
		if (fVar1 <= 0f)
		{
			fVar1 = uParam0->f_1016[iVar0]->f_14;
		}
		if (fVar1 <= 0f)
		{
			return;
		}
		fVar2 = get_distance_between_coords(Global_36, uParam0->f_1016[iVar0]->f_1, false);
		fVar3 = absf((Global_36.f_2 - uParam0->f_1016[iVar0]->f_1.f_2));
		bVar4 = _does_volume_exist(uParam0->f_1875);
		if (bVar4)
		{
			vVar6 = { _0xf70f00013a62f866(uParam0->f_1875) };
			fVar5 = absf((vVar6.z - uParam0->f_1016[iVar0]->f_1.f_2));
		}
		if (fVar2 <= fVar1 && (fVar3 <= uParam0->f_1016[iVar0]->f_10 || (bVar4 && fVar5 <= uParam0->f_1016[iVar0]->f_10)))
		{
			iVar9 = get_interior_at_coords(uParam0->f_1016[iVar0]->f_1);
			if (!is_valid_interior(iVar9) || !is_valid_interior(uParam0->f_1902))
			{
				func_177(uParam0, 65536);
				return;
			}
			else if (uParam0->f_1902 == iVar9)
			{
				func_177(uParam0, 65536);
				return;
			}
		}
		func_176(uParam0, 65536);
	}
}

void func_349(var uParam0, int iParam1)
{
	iVar2 = 0;
	if (func_8(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1894)
		{
			if (uParam0->f_475[iVar0]->f_7)
			{
				func_572(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_475[iVar0]->f_6)
			{
				bVar1 = func_573(uParam0, iVar0);
				if (bVar1)
				{
					func_574(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!func_343(uParam0, uParam0->f_1684))
		{
			func_575(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1691;
	while (iVar0 <= (uParam0->f_1894 - 1))
	{
		if (uParam0->f_475[iVar0]->f_7)
		{
			func_572(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_475[iVar0]->f_6)
		{
			bVar1 = func_573(uParam0, iVar0);
			if (bVar1)
			{
				func_574(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1691 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1691 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_350(var uParam0)
{
	if (is_itemset_valid(uParam0->f_1921))
	{
		iVar1 = get_itemset_size(uParam0->f_1921);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = get_indexed_item_in_itemset(iVar0, uParam0->f_1921);
			if (_does_item_have_valid_base(iVar2))
			{
				set_ped_reset_flag(get_ped_index_from_entity_index(_get_entity_from_item(iVar2)), 184, true);
			}
			iVar0++;
		}
	}
}

bool func_351(var uParam0, int iParam1)
{
	return (uParam0->f_1665 && iParam1) != 0;
}

void func_352(var uParam0)
{
	func_576(&(uParam0->f_1904));
}

void func_353(var uParam0)
{
	uParam0->f_1665 = 0;
}

void func_354(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	func_577(uParam0, 4);
	if (func_578(uParam0, &uParam1, iParam5))
	{
		func_284(uParam0, 1);
	}
}

void func_355(var uParam0)
{
	if (!func_579(uParam0))
	{
		return;
	}
	if (!func_63(uParam0, 4194304))
	{
		func_580(uParam0);
		func_177(uParam0, 4194304);
	}
	if (func_581(uParam0))
	{
		func_582(uParam0);
		func_583(uParam0);
		func_284(uParam0, 2);
	}
}

void func_356(var uParam0)
{
	uParam0->f_1685 = -1;
	func_283(uParam0, 0);
	func_284(uParam0, 3);
	func_584(uParam0, 0);
	func_266(&(uParam0->f_1869));
	func_585(uParam0);
	func_266(&(uParam0->f_1872));
}

bool func_357(var uParam0)
{
	if (uParam0->f_1770)
	{
		return false;
	}
	return uParam0->f_1769;
}

void func_358()
{
	Global_18 = 1;
	Global_43884 = get_id_of_this_thread();
}

bool func_359(var uParam0)
{
	if (uParam0->f_1684 >= 0)
	{
		if (func_212(Global_35, uParam0->f_1016[uParam0->f_1684]->f_1, 0) < uParam0->f_1016[uParam0->f_1684]->f_14)
		{
			return true;
		}
		else if (uParam0->f_1016[uParam0->f_1684]->f_14 >= uParam0->f_1016[uParam0->f_1684]->f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_360(var uParam0)
{
	if (uParam0->f_1684 >= 0)
	{
		if (func_212(Global_35, uParam0->f_1016[uParam0->f_1684]->f_1, 0) < uParam0->f_1016[uParam0->f_1684]->f_15)
		{
			return true;
		}
		else if (uParam0->f_1016[uParam0->f_1684]->f_15 >= uParam0->f_1016[uParam0->f_1684]->f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_361(var uParam0, int iParam1)
{
	if (uParam0->f_1685 < 0)
	{
		return true;
	}
	switch (uParam0->f_475[uParam0->f_1685]->f_2)
	{
		case 4:
			if (get_script_task_status(Global_35, 242628503, true) == 8)
			{
				return true;
			}
			else if (func_48(&(uParam0->f_1872)) >= 15f)
			{
				func_177(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_1768)
			{
				if (func_48(&(uParam0->f_1872)) >= 15f)
				{
					func_177(uParam0, 32768);
					return true;
				}
				if (_does_anim_scene_exist(func_586(uParam0)) && _is_anim_scene_started(func_586(uParam0), false))
				{
					uParam0->f_1768 = 1;
				}
			}
			else
			{
				fVar0 = _get_anim_scene_progress(func_586(uParam0));
				bVar1 = _is_anim_scene_finished(func_586(uParam0), false);
				bVar2 = _is_anim_scene_active(func_586(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return func_48(&(uParam0->f_1872)) >= 15f;
	}
	return false;
}

bool func_362(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0]->f_17 == 2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_363(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0]->f_17 == 2 && func_587(uParam0->f_475[iVar0], 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_364(int iParam0, int iParam1, bool bParam2, int iParam3)
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

struct<4> func_365()
{
	return Var0;
}

struct<8> func_366(var uParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		StringCopy(&cVar0, func_540(iParam1), 64);
		if (!is_string_null_or_empty(&cVar0))
		{
			iVar8 = func_588(uParam0, iParam1);
			if (iVar8 > 0)
			{
				StringConCat(&cVar0, "^", 64);
				StringIntConCat(&cVar0, iVar8, 64);
			}
		}
	}
	return cVar0;
}

bool func_367(var uParam0, int iParam1)
{
	return (uParam0->f_9 && iParam1) != 0;
}

void func_368(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	if (!bParam4)
	{
		if (func_74(0, 0, 1))
		{
			return;
		}
	}
	if (Global_43837 >= 5)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!_does_anim_scene_exist(&(Global_43806[iVar0])))
		{
			Global_43806[iVar0] = iParam0;
			Global_43806[iVar0]->f_1 = get_id_of_this_thread();
			Global_43806[iVar0]->f_3 = iParam1;
			Global_43806[iVar0]->f_4 = iParam2;
			Global_43806[iVar0]->f_5 = iParam3;
			Global_43837++;
			return;
		}
		iVar0++;
	}
}

void func_369(vector3 vParam0, int iParam3)
{
	if (func_90(vParam0))
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
			if (func_568(vVar2, vParam0, 2f, 1))
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

void func_370(int iParam0)
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

void func_371(int iParam0, int iParam1, char* sParam2)
{
	func_589(&(iParam0->f_428), iParam1, sParam2);
}

bool func_372(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_373(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (func_115(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_496(iParam0, 56, 1);
		func_19(&(Global_1359489->f_40), 1);
	}
	func_590(iParam0, 0);
	func_591(iParam0, 4, 0);
	func_592(iParam0);
	func_593(iParam0);
	func_594(iParam0, 37, 1);
	bVar0 = func_275(Global_1360165[iParam0], 0);
	iVar1 = func_595(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_495(iParam0, 64, 1))
	{
		func_594(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_594(iParam0, 33, 1);
		func_594(iParam0, 34, 1);
		func_596(iParam0, 1056964608, -1, 1061158912);
		func_597(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_496(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_496(iParam0, 35, 1);
			if (bParam8)
			{
				func_496(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_598(iParam0, 0);
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
		func_594(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_496(iParam0, 33, 1);
		func_597(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_19(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_266(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_496(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_599(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_495(iParam0, 45, 1))
	{
		func_594(iParam0, 45, 1);
	}
	func_600(iParam0, 16, 1);
	func_594(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_275(func_601(iParam0), 0))
		{
			func_602(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_374(var uParam0)
{
	return *uParam0 != 0;
}

bool func_375(var uParam0, int iParam1)
{
	iVar0 = func_603(iParam1);
	return (uParam0 && iVar0) != 0;
}

void func_376(var uParam0)
{
	if (!func_604(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_605(&(uParam0->f_1), 1);
	}
}

bool func_377(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_378(var uParam0)
{
	if (!func_604(uParam0->f_3, 1))
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
		func_605(&(uParam0->f_3), 1);
	}
}

bool func_379(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_380(var uParam0)
{
	if (!func_604(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_605(&(uParam0->f_1), 1);
	}
}

bool func_381(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_382(var uParam0)
{
	if (func_604(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_604(uParam0->f_1, 1))
	{
		func_606(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_605(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_383(var uParam0)
{
	if (func_604(*uParam0, 2))
	{
		return true;
	}
	if (!func_604(*uParam0, 1))
	{
		func_607(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_605(uParam0, 2);
		return true;
	}
	return false;
}

bool func_384(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_385(var uParam0)
{
	if (!func_604(uParam0->f_2, 1))
	{
		if (func_513(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_417(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_280())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_608())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_605(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_386(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_387(var uParam0, int iParam1)
{
	if (!func_604(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_605(&(uParam0->f_1), 1);
	}
}

bool func_388(var uParam0)
{
	return *uParam0 != 0;
}

void func_389(var uParam0)
{
	if (!func_604(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_605(&(uParam0->f_2), 1);
	}
}

bool func_390(var uParam0)
{
	return *uParam0 != 0;
}

void func_391(var uParam0)
{
	if (!func_604(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_605(&(uParam0->f_3), 1);
	}
}

bool func_392(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_393(var uParam0)
{
	if (!func_604(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_605(&(uParam0->f_1), 1);
	}
}

bool func_394(var uParam0)
{
	return func_609(*uParam0);
}

void func_395(var uParam0)
{
	if (!func_604(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_605(&(uParam0->f_1), 1);
	}
}

bool func_396(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_397(var uParam0)
{
	if (!func_604(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_605(&(uParam0->f_2), 1);
	}
}

bool func_398(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_399(var uParam0)
{
	if (!func_604(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_605(&(uParam0->f_1), 1);
	}
}

int func_400(int iParam0)
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

int func_401(int iParam0)
{
	return iParam0 & 31;
}

int func_402(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

struct<8> func_403(var uParam0)
{
	return uParam0->f_454;
}

struct<8> func_404()
{
	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

bool func_405(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_79((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_406(int iParam0)
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

void func_407(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1393237->f_11)
	{
		if (_0xf256a75210c5c0eb(iParam0, Global_1393237->f_11[iVar0]->f_3))
		{
			func_610(iVar0, 4096, 0);
			func_610(iVar0, 131072, 0);
			func_611(iVar0, 1);
		}
		iVar0++;
	}
}

int func_408(int iParam0, char[4] cParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_612(vVar0, vVar3.x, cParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_409(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_613(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_613(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_614(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_452(8);
}

void func_410(var uParam0)
{
	if (_0x91a5f9cbebb9d936(uParam0->f_9))
	{
		remove_scenario_blocking_area(uParam0->f_9, false);
	}
}

struct<8> func_411()
{
	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

bool func_412(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_413(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (_0x91a5f9cbebb9d936(uParam0->f_9))
	{
		remove_scenario_blocking_area(uParam0->f_9, false);
	}
	uParam0->f_4 = iParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = _0x4c39c95ae5db1329(iParam1, bParam2, iVar0);
}

bool func_414(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_415(int iParam0)
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

void func_416(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_415(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_615(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_616(iVar0);
	*uParam0 = 0;
}

char* func_417(int iParam0)
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

bool func_418(int iParam0)
{
	return iParam0 != 0;
}

bool func_419(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_420(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_419(iVar0, 2))
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
		func_617(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_421(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_415(iParam0))
	{
		return;
	}
	iVar0 = func_615(iParam0);
	func_618(iVar0, bParam1);
}

void func_422(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_415(iParam0))
	{
		return;
	}
	iVar0 = func_615(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_0xf4a5c4509bf923b1((*Global_1945938)[iVar0]->f_3, iParam1);
}

void func_423(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_415(iParam0))
	{
		return;
	}
	iVar0 = func_615(iParam0);
	if (bParam1)
	{
		func_619(iParam0, 4);
		func_618(iVar0, 1);
		func_620(iVar0, 1);
	}
	else
	{
		func_621(iParam0, 4);
		func_620(iVar0, 0);
	}
}

float func_424(int iParam0, bool bParam1)
{
	if (bParam1 && !func_415(iParam0))
	{
		return 0f;
	}
	iVar0 = func_615(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1945938)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1945938)[iVar0]->f_3);
}

bool func_425(int iParam0, bool bParam1)
{
	if (bParam1 && !func_415(iParam0))
	{
		return false;
	}
	iVar0 = func_615(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_426(var uParam0)
{
	Var0 = { func_218(uParam0) };
	Var8 = { func_198(uParam0) };
	return are_strings_equal(&Var0, &Var8);
}

bool func_427(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_622(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_428(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	Var0 = { func_218(uParam0) };
	if ((!are_strings_equal(&Var0, sParam1) && _0xa9016536015de29d(uParam0->f_444, sParam1)) && _0x23e33cb9f4a3f547(uParam0->f_444, sParam1))
	{
		_0xae6ada8fe7e84acc(uParam0->f_444, sParam1);
	}
}

void func_429(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (_0x9d1eca9337be9fc3(uParam0->f_444, sParam1))
		{
			iParam3 = 0;
		}
	}
	set_anim_scene_entity(uParam0->f_444, sParam1, iParam2, iParam3);
}

void func_430(int iParam0)
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

void func_431(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

bool func_432(int iParam0)
{
	if (-1829635046 == func_623(81053684))
	{
		if (func_624(iParam0))
		{
			return true;
		}
	}
	else if (func_625(-525676072, iParam0))
	{
		if (func_624(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_433(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_434(int iParam0)
{
	if (!func_433(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_435(int iParam0, bool bParam1)
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

void func_436(int iParam0)
{
	if (func_273() != -1)
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

void func_437(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_306(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_626(1);
	}
}

void func_438()
{
	iVar0 = func_450(Global_35, 9, 1, 0);
	if (func_306(iVar0))
	{
		return;
	}
	iVar0 = func_450(Global_35, 7, 1, 0);
	if (func_306(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_450(Global_35, 0, 1, 0);
	if (func_306(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_450(Global_35, 1, 1, 0);
	if (func_306(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_450(Global_35, 18, 1, 0);
	if (func_306(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_627();
	if (func_306(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_142(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_628(6291456, 0);
	if (func_306(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_142(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_439()
{
	return Global_1900383->f_393;
}

int func_440(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_412(*uParam0, 0f, 0f, 0f))
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

void func_441(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_442(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_443(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_444()
{
	return &Global_1899515;
}

void func_445(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

bool func_446()
{
	return (func_629() || func_630());
}

Vector3 func_447(var uParam0)
{
	return uParam0->f_505;
}

float func_448(var uParam0)
{
	return uParam0->f_508;
}

float func_449(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

int func_450(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_451(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_452(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_453(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_458(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_631(iParam4);
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

bool func_454(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

bool func_455(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_467(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_456(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_457(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_455(1108822547, 6))
	{
		if (bParam2)
		{
			func_453(iParam0, iVar0, func_273() != -1, 0, 0);
			func_459(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_460(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

int func_458(int iParam0, int iParam1)
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

void func_459(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_467(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_467(iParam0, 1)])->f_10 || iParam1);
}

void func_460(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_467(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_467(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_467(iParam0, 1)])->f_10 && iParam1));
}

void func_461(var uParam0)
{
	uParam0->f_454 = { Var0 };
}

void func_462(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(uParam0->f_462[iVar0], "", 64);
		iVar0++;
	}
}

void func_463(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

void func_464()
{
	Global_1911774 = 1;
}

struct<5> func_465(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_632(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_633(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_474(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_634(bParam1) };
			if (bParam2 && func_635(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_530(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_530(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_531(iParam0, &Var5, 1728382685))
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
			Var0 = { func_636(bParam1) };
			switch (func_434(iParam0))
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
			if (func_637(iParam0, -1823706425))
			{
				Var0 = { func_474(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_637(iParam0, -1483207246))
			{
				Var0 = { func_474(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_638(Var0, &Var27, bParam1, 0))
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

int func_466(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_458(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_467(int iParam0, int iParam1)
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

bool func_468(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_639();
	if (iParam2 == 39)
	{
		Var0 = { func_465(iParam0, 1, 0) };
		iParam2 = func_467(func_466(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_640(iParam0, 866047851) && func_641(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_454(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_642(func_458(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_643(iParam2);
	func_644(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_645(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_645(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_646(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_647(iParam0, iParam2, iParam1, func_273() != -1);
	if (bParam4)
	{
		func_648(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_648(&(Global_1946804->f_1378), 1, 0);
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
				func_460(func_458(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_469(bool bParam0, bool bParam1, bool bParam2)
{
	func_649(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_470(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_452(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_650(Var0);
}

void func_471()
{
	func_651(&(Global_1946804->f_2776));
	func_652(32768);
	func_460(1108822547, 8, 6);
}

int func_472(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_467(iParam0, 1);
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

void func_473(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_409(Var0);
}

struct<4> func_474(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_433(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_476(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_475(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_433(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_474(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_476(bParam6), &Var0, 0);
	return uVar4;
}

int func_476(bool bParam0)
{
	if (func_273() == -1)
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

bool func_477(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_478(int iParam0, int iParam1)
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

bool func_479(int iParam0)
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
	if (func_478(iParam0, 1041577989))
	{
		return false;
	}
	if (is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_480(int iParam0, vector3 vParam1)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	vVar3 = { vVar0 + get_entity_forward_vector(iParam0) };
	return func_653(vVar0, vVar3, vParam1);
}

bool func_481(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_482(int iParam0, int iParam1)
{
	func_654(iParam0, iParam1);
}

bool func_483(int iParam0, int iParam1)
{
	if (!func_478(iParam0, 1041577989))
	{
		return true;
	}
	fVar0 = _0xa710dc5d25f8b942(iParam0, 1041577989);
	if (func_477(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (func_477(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (func_477(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_484(int iParam0, int iParam1)
{
	func_655(iParam0, iParam1);
}

bool func_485(int iParam0)
{
	return iParam0 > -1;
}

void func_486(int iParam0, float fParam1)
{
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		uVar2 = func_656(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_657(1, bVar1, 1, uVar2);
		func_658(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_659(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
		func_660();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_659(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_659(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_487(var uParam0, int iParam1)
{
	uParam0->f_1666.f_1 = (uParam0->f_1666.f_1 || iParam1);
}

bool func_488(var uParam0, int iParam1)
{
	return (uParam0->f_26 && iParam1) != 0;
}

char* func_489(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HandsOnBelt";
	}
	return "Disabled";
}

char* func_490()
{
	return "default_leadin_camera";
}

void func_491()
{
	set_script_with_name_hash_as_no_longer_needed(-1181125641);
	remove_anim_dict(func_550(1));
}

bool func_492(int iParam0)
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
		iVar0 = func_661(iParam0);
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

bool func_493(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (!is_itemset_valid(iParam0->f_5))
	{
		return false;
	}
	return is_in_itemset(iParam1, iParam0->f_5);
}

int func_494(int iParam0)
{
	if (func_114(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

bool func_495(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_485(iParam0))
		{
			return false;
		}
	}
	func_662(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_496(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_485(iParam0))
		{
			return;
		}
	}
	func_662(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_497(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_114(iParam0))
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
			if (func_495(iParam0, 2, 1))
			{
				func_594(iParam0, 2, 1);
			}
			if (func_282(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_496(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_373(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_275(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_275(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_663(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_496(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_664(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_496(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_664(iParam0, 1);
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
			if (!func_495(iParam0, 44, 0))
			{
				func_496(iParam0, 44, 0);
			}
			if (func_665(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_664(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_594(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_597(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_500(iParam0, 0, 0, 1);
			}
			func_594(iParam0, 33, 1);
			func_594(iParam0, 34, 1);
			func_594(iParam0, 29, 1);
			if (!func_90(vVar0) && bParam7)
			{
				func_664(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_664(iParam0, 4);
			}
			else
			{
				func_664(iParam0, 5);
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
						func_663(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_305(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_664(iParam0, 4);
			}
			else
			{
				func_664(iParam0, 5);
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
				if (func_666(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_667(iParam0, iParam13, 0);
						func_668(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_495(iParam0, 25, 0))
						{
							func_594(iParam0, 25, 0);
						}
						func_496(iParam0, 66, 0);
						func_664(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_664(iParam0, 5);
				}
				func_496(iParam0, 28, 1);
			}
			else
			{
				func_664(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_664(iParam0, 6);
			}
			break;
		case 6:
			if (func_275(Global_1360165[iParam0], 0))
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
					func_669(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_670(Global_1360165[iParam0], 1);
				}
			}
			func_664(iParam0, 7);
		case 7:
			func_597(iParam0, bParam9, bParam15, 0);
			func_591(iParam0, 4, bParam11);
			func_593(iParam0);
			if (bParam20)
			{
				if (func_671(Global_1360165[iParam0]))
				{
				}
			}
			func_672(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_664(iParam0, 0);
			func_673(iParam0, 16, 1);
			func_594(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_498(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!is_itemset_valid(iParam0->f_7))
	{
		return;
	}
	if (is_entity_a_ped(iParam1) && get_ped_index_from_entity_index(iParam1) == Global_35)
	{
		return;
	}
	if (!is_in_itemset(iParam1, iParam0->f_7))
	{
		add_to_itemset(iParam1, iParam0->f_7);
	}
}

void func_499(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iParam0))
	{
		set_entity_as_mission_entity(iParam0, true, true);
	}
	if (bParam2 && (!func_185() || !_0x6f1f0b17109309da(Global_43800, func_230(iParam0))))
	{
		if (is_ped_on_mount(iParam0))
		{
			_remove_ped_from_mount(iParam0, true, false);
		}
		clear_ped_tasks_immediately(iParam0, false, true);
		if (!Global_1935630->f_12)
		{
			if (bParam1)
			{
				freeze_entity_position(iParam0, true);
			}
		}
		force_ped_motion_state(iParam0, -1871534317, true, 0, false);
		_set_ped_crouch_movement(iParam0, false, 0, false);
	}
	set_ped_relationship_group_hash(iParam0, 1030835986);
	_set_entity_health(iParam0, get_entity_max_health(iParam0, false), 0);
	if (bParam3)
	{
		func_671(iParam0);
	}
}

void func_500(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_674(iParam0, bParam3);
	}
	else
	{
		func_675(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_676(iParam0, bParam3);
	}
	else
	{
		func_677(iParam0, bParam3);
	}
}

void func_501(int iParam0)
{
	if (!func_114(iParam0))
	{
		return;
	}
	iVar0 = func_274(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

bool func_502(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

struct<2> func_503()
{
	Var0 = create_itemset(true);
	return Var0;
}

bool func_504(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_505(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_678(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_506(struct<2> Param0, int iParam2)
{
	if (!func_502(Param0))
	{
		return;
	}
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (!func_679(Param0, iParam2))
	{
		add_to_itemset(iParam2, Param0);
	}
}

void func_507(int iParam0, int iParam1)
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

void func_508(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_509(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_510(var uParam0)
{
	if (func_604(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_604(uParam0->f_1, 1))
	{
		func_376(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_605(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_511(var uParam0)
{
	if (func_604(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_604(uParam0->f_3, 1))
	{
		func_378(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_605(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_605(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_512(var uParam0)
{
	if (func_604(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_604(uParam0->f_1, 1))
	{
		func_380(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_605(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_513(var uParam0)
{
	if (func_604(uParam0->f_2, 1))
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

bool func_514(var uParam0)
{
	if (func_604(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_604(uParam0->f_2, 1))
	{
		func_385(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_605(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_515(var uParam0, int iParam1)
{
	if (func_604(uParam0->f_1, 2))
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
	if (!func_604(uParam0->f_1, 1))
	{
		func_387(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_605(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_516(var uParam0)
{
	if (func_604(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_604(uParam0->f_2, 1))
	{
		func_389(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_605(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_517(var uParam0)
{
	if (func_604(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_604(uParam0->f_3, 1))
	{
		func_391(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_605(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_518(var uParam0)
{
	if (func_604(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_604(uParam0->f_1, 1))
	{
		func_393(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_605(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_519(var uParam0)
{
	if (func_604(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_604(uParam0->f_1, 1))
	{
		func_395(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_605(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_520(var uParam0)
{
	if (func_604(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_604(uParam0->f_2, 1))
	{
		func_397(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_605(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_521(var uParam0)
{
	if (func_604(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_604(uParam0->f_1, 1))
	{
		func_399(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_605(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_522(int iParam0)
{
	if (!func_81(iParam0))
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

struct<4> func_523(int iParam0, int iParam1)
{
	Var0 = { func_680(iParam0, iParam1) };
	Var0.f_3 = func_681(iParam0, iParam1);
	return Var0;
}

Vector3 func_524(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2735.796f, -1364.175f, 45.464f;
				case 1:
					return 2736.452f, -1365.63f, 45.464f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_525(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 275.04f;
				case 1:
					return 349.92f;
			}
			break;
	}
	return 0f;
}

int func_526(var uParam0)
{
	return uParam0;
}

bool func_527(int iParam0)
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

bool func_528(int iParam0)
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

int func_529(int iParam0, int iParam1)
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

bool func_530(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_475(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_531(int iParam0, var uParam1, int iParam2)
{
	if (func_682(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

bool func_532(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_683(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_638(*uParam1, &Var0, bParam6, 0))
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
	if (!func_533(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_476(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_533(bool bParam0)
{
	if (func_273() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_476(bParam0));
}

int func_534(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_684(iParam0))
	{
		return 0;
	}
	if (!func_533(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_535(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_685(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

bool func_536(int iParam0)
{
	return iParam0 != 0;
}

bool func_537(int iParam0, bool bParam1)
{
	switch (func_548(iParam0))
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

bool func_538(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_462[iVar0]) && are_strings_equal(uParam0->f_462[iVar0], sParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_539(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	Var0 = { func_198(uParam0) };
	return are_strings_equal(sParam1, &Var0);
}

char* func_540(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_230(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_686(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_687(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_541(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_542(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && are_strings_equal(&(uParam0->f_13[iVar0]->f_1), sParam1))
		{
			return &(uParam0->f_13[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

void func_543(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 35)
	{
		if (&uParam0->f_13[iVar12] == iParam1)
		{
			*uParam0->f_13[iVar12] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_544(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!does_entity_exist(&(uParam0->f_13[iVar0])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_545(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_688(uParam0);
	iVar0 = func_689(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_540(iParam1);
		}
		iVar0 = func_690(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_691(uParam0);
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
		iVar0 = func_691(uParam0);
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
	func_177(uParam0, 2);
}

Vector3 func_546(vector3 vParam0)
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

bool func_547(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_548(int iParam0)
{
	if (!func_195(iParam0))
	{
		return -1;
	}
	return func_661(iParam0);
}

int func_549(bool bParam0, bool bParam1, bool bParam2)
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

char* func_550(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mech_inventory@clothing@bandana";
		case 1:
			return "mech_inventory@clothing@mask";
		case 2:
			return "mech_inventory@clothing@mask";
		case 3:
			return "mech_inventory@clothing@mask";
		case 4:
			return "mech_inventory@clothing@mask";
		case 5:
			return "mech_inventory@clothing@mask";
	}
	return "";
}

void func_551(var uParam0, bool bParam1, bool bParam2)
{
	if (!_does_volume_exist(uParam0->f_1875))
	{
		if (!bParam1)
		{
			func_692(uParam0);
		}
		else if (bParam2)
		{
			func_693(uParam0);
		}
		else
		{
			func_694(uParam0, uParam0->f_1898);
		}
	}
	else
	{
		if (!func_63(uParam0, 1048576) && bParam1)
		{
			func_694(uParam0, uParam0->f_1898);
		}
		else if (!func_63(uParam0, 2097152) && bParam2)
		{
			func_693(uParam0);
		}
		else if ((func_63(uParam0, 1048576) && !bParam1) || (func_63(uParam0, 2097152) && !bParam2))
		{
			func_692(uParam0);
		}
		if (bParam1)
		{
			vVar0 = { uParam0->f_1882 * FtoV(func_695(uParam0->f_1898)) };
			if (!func_568(vVar0, _0x3e2a25b2416dd67e(uParam0->f_1875), 1056964608, 1) && !func_90(vVar0))
			{
				_0xa46e98bdc407e23d(uParam0->f_1875, vVar0);
			}
		}
	}
}

void func_552(var uParam0)
{
	if (uParam0->f_1688 < 0)
	{
		return;
	}
	if ((uParam0->f_1899 && does_entity_exist(uParam0->f_1901)) && _is_draft_vehicle(uParam0->f_1901))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = _get_ped_in_draft_seat(uParam0->f_1901, iVar0);
			if (!is_entity_dead(iVar2))
			{
				if (!does_entity_exist(iVar1) || func_212(iVar2, uParam0->f_1016[uParam0->f_1688]->f_1, 1) < func_212(iVar1, uParam0->f_1016[uParam0->f_1688]->f_1, 1))
				{
					iVar1 = iVar2;
				}
			}
			iVar0++;
		}
		if (!does_entity_exist(iVar1))
		{
			return;
		}
		if (!func_63(uParam0, 8192))
		{
			if (func_212(iVar1, uParam0->f_1016[uParam0->f_1688]->f_1, 1) <= (uParam0->f_1016[uParam0->f_1688]->f_17 + 5f) || _0xf256a75210c5c0eb(uParam0->f_1875, uParam0->f_1879))
			{
				if (_0xc6d7ddc843176701(uParam0->f_1901) != 5f)
				{
					_0x0c3f0f7f92ca847c(uParam0->f_1901, 5f);
				}
			}
			else if ((!func_696(512) || func_697(2)) && _0xc6d7ddc843176701(uParam0->f_1901) != 50f)
			{
				_0x0c3f0f7f92ca847c(uParam0->f_1901, 50f);
			}
		}
	}
}

void func_553(var uParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (uParam0->f_1633[iVar2]->f_11 && _does_volume_exist(uParam0->f_1633[iVar2]->f_12))
		{
			if (!bVar1)
			{
				iVar0 = _get_first_entity_ped_is_carrying(Global_35);
				bVar1 = true;
			}
			if (!is_entity_dead(uParam0->f_1898) && !uParam0->f_1633[iVar2]->f_13)
			{
				_0xe9b168527b337bf0(uParam0->f_1898, uParam0->f_1633[iVar2]->f_12);
				_0xf74e134f40192884(uParam0->f_1898, 1);
				uParam0->f_1633[iVar2]->f_13 = 1;
			}
			if (!bParam1)
			{
				if (uParam0->f_1687 != 0 || func_63(uParam0, 33554432))
				{
					set_player_control(get_player_index(), true, 0, false);
					if (is_radar_hidden())
					{
						_display_hud_component(-1679307491);
					}
					uParam0->f_1687 = 0;
					func_176(uParam0, 33554432);
				}
				bVar3 = func_547(uParam0->f_1633[iVar2]->f_10, 131072);
				if (func_174(Global_35, uParam0->f_1633[iVar2]->f_12, 0, 1))
				{
					if (uParam0->f_1688 >= 0)
					{
						func_345(uParam0, uParam0->f_1633[iVar2]->f_10, uParam0->f_1345[uParam0->f_1688]->f_1, 1065353216);
						disable_control_action(0, -822242784, false);
					}
					if (bVar3)
					{
						func_698();
					}
					func_699(uParam0, iVar2, iVar0, bVar3);
				}
				else if (func_700(uParam0->f_1633[iVar2]) != 0)
				{
					func_699(uParam0, iVar2, iVar0, bVar3);
				}
			}
			else if (func_547(uParam0->f_1633[iVar2]->f_10, 4))
			{
				if (uParam0->f_1688 >= 0)
				{
					if (((func_212(Global_35, uParam0->f_1016[uParam0->f_1688]->f_1, 1) > uParam0->f_1016[uParam0->f_1688]->f_17 && func_174(uParam0->f_1898, uParam0->f_1633[iVar2]->f_12, 0, 1)) || uParam0->f_1687 != 0) || func_63(uParam0, 33554432))
					{
						iVar4 = 5152;
						if (func_272(Global_35, &(uParam0->f_1687), iVar4, 0, 0, 1084227584, 100, 0, 0))
						{
							set_player_control(get_player_index(), true, 0, false);
							uParam0->f_1687 = 0;
							func_176(uParam0, 33554432);
						}
						else
						{
							func_177(uParam0, 33554432);
						}
					}
				}
			}
		}
		iVar2++;
	}
}

bool func_554(var uParam0)
{
	if (uParam0->f_1688 < 0)
	{
		return false;
	}
	if (func_63(uParam0, 33554432))
	{
		return false;
	}
	if (func_332(uParam0->f_1016[uParam0->f_1688], 2) && uParam0->f_1897)
	{
		return false;
	}
	if (_does_volume_exist(uParam0->f_1875) && _0xf256a75210c5c0eb(uParam0->f_1875, uParam0->f_1876))
	{
		return true;
	}
	if (func_63(uParam0, 65536))
	{
		return true;
	}
	return false;
}

float func_555(var uParam0, int iParam1)
{
	fVar16 = 10000f;
	switch (&uParam0->f_1016[iParam1])
	{
		case 0:
			fVar12 = get_distance_between_coords(Global_36, uParam0->f_1016[iParam1]->f_1, true);
			fVar13 = get_distance_between_coords(Global_36, uParam0->f_1016[iParam1]->f_4, true);
			vVar0 = { uParam0->f_1016[iParam1]->f_4 - uParam0->f_1016[iParam1]->f_1 };
			if (func_701(&vVar3, uParam0->f_1016[iParam1]->f_1, uParam0->f_1016[iParam1]->f_4, vVar0, Global_36))
			{
				fVar16 = get_distance_between_coords(vVar3, Global_36, true);
			}
			if (fVar12 < fVar13 && fVar12 < fVar16)
			{
				return fVar12;
			}
			else if (fVar13 < fVar16)
			{
				return fVar13;
			}
			else
			{
				return fVar16;
			}
			break;
		case 1:
			if (Global_36.f_2 >= uParam0->f_1016[iParam1]->f_1.f_2 && Global_36.f_2 <= (uParam0->f_1016[iParam1]->f_1.f_2 + uParam0->f_1016[iParam1]->f_10))
			{
				func_702(uParam0, iParam1, &uVar6, vVar9, &fVar12, &fVar13, &fVar14, &fVar15);
				if (fVar14 < fVar15)
				{
					fVar16 = (get_distance_between_coords(Global_36, uParam0->f_1016[iParam1]->f_1, true) - uParam0->f_1016[iParam1]->f_11);
					if (fVar16 < 0f)
					{
					}
				}
				if (fVar12 < fVar13 && fVar12 < fVar16)
				{
					return fVar12;
				}
				else if (fVar13 < fVar16)
				{
					return fVar13;
				}
				else
				{
					return fVar16;
				}
			}
			break;
	}
	return 10000f;
}

void func_556(var uParam0)
{
	func_703(uParam0);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1016[iVar0]->f_29)
		{
			if ((!is_string_null_or_empty(&(uParam0->f_1016[iVar0]->f_22)) && func_704(uParam0, iVar0)) && !func_488(uParam0->f_1016[iVar0], 1))
			{
				if (!func_705(uParam0, &(uParam0->f_1016[iVar0]->f_22)))
				{
					func_171(&(uParam0->f_1771), uParam0->f_1016[iVar0]->f_22, 0, -1, 1, 0);
				}
				func_706(uParam0->f_1016[iVar0], 1);
			}
		}
		iVar0++;
	}
}

void func_557(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_558(int iParam0, var uParam1)
{
	*iParam0 = 0;
	if (!func_564(uParam1, 8))
	{
		if (func_564(uParam1, 1))
		{
			*iParam0 = 1;
		}
		else if (func_564(uParam1, 4))
		{
			*iParam0 = 4;
		}
		else if (func_564(uParam1, 2))
		{
			*iParam0 = 2;
		}
	}
}

void func_559(char* sParam0, int iParam1, int iParam2, float fParam3)
{
	func_565(sParam0, iParam2);
	func_707(iParam1, fParam3);
}

void func_560()
{
	if (is_bit_set(&Global_1357510, 4))
	{
	}
	else
	{
		set_bit(Global_1357510, 0);
	}
}

void func_561(var uParam0, int iParam1)
{
	uParam0->f_1665 = (uParam0->f_1665 || iParam1);
}

char* func_562(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_563()
{
	return "CAMERA_LEADIN_ACTIVE_CONVERSATION_REQUEST";
}

bool func_564(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_565(char* sParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		if (!sParam0->f_16)
		{
			StringCopy(sParam0, "default_leadin_camera", 64);
			if (func_708(iParam1, 1))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_RIGHT_REQUEST", 64);
			}
			else if (func_708(iParam1, 2))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_LEFT_REQUEST", 64);
			}
			else if (func_708(iParam1, 4))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_CENTER_REQUEST", 64);
			}
			_0x6a4d224fc7643941(sParam0);
			sParam0->f_16 = 1;
		}
		else if (_0xdd0b7c5ae58f721d(sParam0) && !_0x927b810e43e99932(sParam0))
		{
			_0xb8b207c34285e978(sParam0);
		}
	}
}

float func_566(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam0, false, false) };
	vVar3 = { get_entity_coords(iParam1, false, false) };
	return func_449(vVar0, vVar3, iParam2);
}

void func_567(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

bool func_568(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_569(var uParam0, int iParam1)
{
	uParam0->f_1665 = (uParam0->f_1665 - (uParam0->f_1665 && iParam1));
}

bool func_570(var uParam0, int iParam1)
{
	if (func_63(uParam0, 4))
	{
		return false;
	}
	vVar0 = { 0f, 0f, 0f };
	if (uParam0->f_1688 < 0 || uParam0->f_1688 >= 8)
	{
		return false;
	}
	if (!uParam0->f_1016[uParam0->f_1688]->f_29)
	{
		return false;
	}
	if (!func_63(uParam0, 4096) && uParam0->f_1896)
	{
		return false;
	}
	if (Global_1430231->f_4)
	{
		return false;
	}
	if (uParam0->f_1016[uParam0->f_1688]->f_29)
	{
		if (&uParam0->f_1016[uParam0->f_1688] == 0)
		{
			vVar3 = { uParam0->f_1016[uParam0->f_1688]->f_4 - uParam0->f_1016[uParam0->f_1688]->f_1 };
			vVar6 = { 0f, 0f, 0f };
			vVar6.x = vVar3.y;
			vVar6.f_1 = (vVar3.x * -1f);
			if (func_701(&vVar0, uParam0->f_1765, Global_36, vVar6, uParam0->f_1016[uParam0->f_1688]->f_1))
			{
				iVar9 = 1;
				if (vVar0.x > uParam0->f_1016[uParam0->f_1688]->f_1)
				{
					if (vVar0.x > uParam0->f_1016[uParam0->f_1688]->f_4)
					{
						iVar9 = 0;
					}
				}
				else if (vVar0.x < uParam0->f_1016[uParam0->f_1688]->f_4)
				{
					iVar9 = 0;
				}
				if (iVar9 == 1)
				{
					if (vVar0.y > uParam0->f_1016[uParam0->f_1688]->f_1.f_1)
					{
						if (vVar0.y > uParam0->f_1016[uParam0->f_1688]->f_4.f_1)
						{
							iVar9 = 0;
						}
					}
					else if (vVar0.y < uParam0->f_1016[uParam0->f_1688]->f_4.f_1)
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					if ((vVar0.z < (uParam0->f_1016[uParam0->f_1688]->f_1.f_2 - 0.1f) || vVar0.z > (uParam0->f_1016[uParam0->f_1688]->f_1.f_2 + uParam0->f_1016[uParam0->f_1688]->f_10)) || (func_332(uParam0->f_1016[uParam0->f_1688], 2) && (uParam0->f_1897 || uParam0->f_1899)))
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					*iParam1 = uParam0->f_1688;
					return true;
				}
			}
		}
		else if (func_63(uParam0, 8))
		{
			*iParam1 = uParam0->f_1684;
			return true;
		}
	}
	return false;
}

void func_571(var uParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		uParam0->f_1016[iParam1]->f_28 = 1;
		uParam0->f_1684 = iParam1;
		uParam0->f_1688 = iParam1;
		Global_43805 = iParam1;
		uParam0->f_1769 = 1;
	}
}

void func_572(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_475[iParam1]->f_2)
	{
		case 9:
			if (_does_anim_scene_exist(uParam0->f_1522[uParam0->f_475[iParam1]->f_4]->f_8) && _is_anim_scene_started(uParam0->f_1522[uParam0->f_475[iParam1]->f_4]->f_8, false))
			{
				fVar1 = _get_anim_scene_progress(uParam0->f_1522[uParam0->f_475[iParam1]->f_4]->f_8);
				iVar0 = 0;
				while (iVar0 < 35)
				{
					if ((((uParam0->f_3[iVar0] && !is_entity_dead(uParam0->f_3[iVar0]->f_2)) && uParam0->f_3[iVar0]->f_8 > 0f) && fVar1 >= uParam0->f_3[iVar0]->f_8) && !is_entity_visible(uParam0->f_3[iVar0]->f_2))
					{
						set_entity_visible(uParam0->f_3[iVar0]->f_2, true);
					}
					iVar0++;
				}
				if (((func_587(uParam0->f_475[iParam1], 4) && uParam0->f_475[iParam1]->f_12 < 1f) && fVar1 >= uParam0->f_475[iParam1]->f_12) && !is_player_script_control_on(get_player_index()))
				{
					clear_ped_tasks(Global_35, 1, 0);
					set_player_control(get_player_index(), true, 0, false);
				}
				if (func_587(uParam0->f_475[iParam1], 64) && func_709(uParam0, iParam1, 0))
				{
					func_710(uParam0, uParam0->f_1522[uParam0->f_475[iParam1]->f_4]->f_8, uParam0->f_475[iParam1]->f_13, uParam0->f_475[iParam1]->f_14);
				}
			}
			break;
		case 10:
			if ((uParam0->f_475[iParam1]->f_3 >= 0 && uParam0->f_475[iParam1]->f_5 >= 0) && uParam0->f_475[iParam1]->f_3 != uParam0->f_475[iParam1]->f_5)
			{
				if (!is_entity_dead(uParam0->f_3[uParam0->f_475[iParam1]->f_3]->f_2) && !is_entity_dead(uParam0->f_3[uParam0->f_475[iParam1]->f_5]->f_2))
				{
					if (is_entity_a_ped(uParam0->f_3[uParam0->f_475[iParam1]->f_3]->f_2) && is_ped_human(get_ped_index_from_entity_index(uParam0->f_3[uParam0->f_475[iParam1]->f_3]->f_2)))
					{
						func_711(get_ped_index_from_entity_index(uParam0->f_3[uParam0->f_475[iParam1]->f_3]->f_2), uParam0->f_3[uParam0->f_475[iParam1]->f_5]->f_2, uParam0->f_475[iParam1]->f_13, uParam0->f_475[iParam1]->f_14);
					}
					if ((func_587(uParam0->f_475[iParam1], 128) && is_entity_a_ped(uParam0->f_3[uParam0->f_475[iParam1]->f_5]->f_2)) && is_ped_human(get_ped_index_from_entity_index(uParam0->f_3[uParam0->f_475[iParam1]->f_5]->f_2)))
					{
						func_711(get_ped_index_from_entity_index(uParam0->f_3[uParam0->f_475[iParam1]->f_5]->f_2), uParam0->f_3[uParam0->f_475[iParam1]->f_3]->f_2, uParam0->f_475[iParam1]->f_13, uParam0->f_475[iParam1]->f_14);
					}
				}
			}
			break;
		case 4:
			func_575(uParam0, iParam1, 0, 0);
			break;
	}
}

int func_573(var uParam0, int iParam1)
{
	if (uParam0->f_475[iParam1]->f_1 > uParam0->f_1683)
	{
		return 0;
	}
	if (!is_entity_dead(uParam0->f_3[uParam0->f_475[iParam1]->f_3]->f_2))
	{
	}
	if (uParam0->f_1683 < 0 || uParam0->f_1683 > 6)
	{
		return 0;
	}
	if (uParam0->f_475[iParam1]->f_1 == 0)
	{
		return 1;
	}
	if (uParam0->f_475[iParam1]->f_17 == 2 && func_8(uParam0) == 9)
	{
		return 1;
	}
	if (!func_63(uParam0, 4096) && uParam0->f_1896)
	{
		return 0;
	}
	if (Global_1430231->f_4)
	{
		return 0;
	}
	if (&uParam0->f_475[iParam1] != uParam0->f_1684)
	{
		return 0;
	}
	if (func_8(uParam0) > 3 && &uParam0->f_475[iParam1] != uParam0->f_1684)
	{
		return 0;
	}
	if ((((func_8(uParam0) > 3 && uParam0->f_475[iParam1]->f_17 == 1) && func_344(uParam0) != 11) && func_343(uParam0, uParam0->f_1684)) && uParam0->f_475[iParam1]->f_2 != 4)
	{
		return 0;
	}
	if ((uParam0->f_475[iParam1]->f_2 == 9 && uParam0->f_475[iParam1]->f_4 >= 0) && _does_anim_scene_exist(uParam0->f_1522[uParam0->f_475[iParam1]->f_4]->f_8))
	{
		if (!_is_anim_scene_loaded(uParam0->f_1522[uParam0->f_475[iParam1]->f_4]->f_8, true, false))
		{
			return 0;
		}
		else if (_0x6f1f0b17109309da(uParam0->f_1522[uParam0->f_475[iParam1]->f_4]->f_8, func_230(Global_35)))
		{
			if (func_367(uParam0->f_1522[uParam0->f_475[iParam1]->f_4], 4))
			{
				if (!_0xa218d2bbcaa7388c(Global_35, 1))
				{
					return 0;
				}
			}
			else if (func_367(uParam0->f_1522[uParam0->f_475[iParam1]->f_4], 8))
			{
				if (!_0xa218d2bbcaa7388c(Global_35, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_574(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_475[iParam1]->f_2)
	{
		case 9:
			func_712(uParam0, iParam2, iParam1);
			break;
		case 4:
			func_575(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_475[iParam1]->f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!is_string_null_or_empty(&(uParam0->f_1016[&uParam0->f_475[iParam1]]->f_19)) && !is_string_null_or_empty(&(uParam0->f_1016[&uParam0->f_475[iParam1]]->f_22)))
			{
				if (func_48(&(uParam0->f_1872)) >= IntToFloat((uParam0->f_1016[&uParam0->f_475[iParam1]]->f_25 / 1000)))
				{
					func_703(uParam0);
					if (!_0xd89504d9d7d5057d(&(uParam0->f_1016[&uParam0->f_475[iParam1]]->f_22)))
					{
						func_171(&(uParam0->f_1771), uParam0->f_1016[&uParam0->f_475[iParam1]]->f_22, 0, -1, 0, 0);
					}
					else
					{
						start_preloaded_conversation(&(uParam0->f_1016[&uParam0->f_475[iParam1]]->f_22));
					}
					uParam0->f_475[iParam1]->f_7 = 1;
				}
			}
			else
			{
				uParam0->f_475[iParam1]->f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_475[iParam1]->f_7 = 1;
			break;
		case 11:
			uParam0->f_475[iParam1]->f_7 = 1;
			uParam0->f_1685 = iParam1;
			break;
	}
}

int func_575(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar2 = uParam0->f_1688;
	if (iParam1 >= 0)
	{
		iVar2 = &uParam0->f_475[iParam1];
		fVar3 = uParam0->f_1016[uParam0->f_1688]->f_7;
		fVar4 = uParam0->f_1016[uParam0->f_1688]->f_7.f_1;
	}
	if (!is_entity_dead(Global_35))
	{
		set_ped_max_move_blend_ratio(Global_35, 1f);
	}
	switch (func_344(uParam0))
	{
		case 0:
			if (!bParam3)
			{
				if (!func_713(uParam0, iVar2))
				{
					uParam0->f_1685 = iParam1;
				}
				uParam0->f_475[iParam1]->f_7 = 1;
			}
			if (((!func_332(uParam0->f_1016[iVar2], 32) && func_714()) && !is_string_null_or_empty(&(uParam0->f_459))) || (!func_332(uParam0->f_1016[iVar2], 128) && uParam0->f_1899))
			{
				if (uParam0->f_1899)
				{
					bring_vehicle_to_halt(uParam0->f_1901, 0.1f, -1, false);
					if (!func_63(uParam0, 8192))
					{
						_0x0c3f0f7f92ca847c(uParam0->f_1901, 0f);
					}
					task_vehicle_temp_action(Global_35, uParam0->f_1901, 24, 1000);
					func_584(uParam0, 8);
				}
				else
				{
					func_177(uParam0, 131072);
					func_584(uParam0, 11);
				}
			}
			else if (uParam0->f_1897)
			{
				func_584(uParam0, 5);
			}
			else
			{
				func_715(uParam0);
			}
			break;
		case 1:
			bVar0 = func_21(&(uParam0->f_1869)) >= 3f;
			if ((((!func_478(Global_35, 716706914) && !func_478(Global_35, 242628503)) && func_21(&(uParam0->f_1869)) >= 2.5f) || (!func_306(func_450(Global_35, 0, 1, 0)) && !func_306(func_450(Global_35, 1, 1, 0)))) || bVar0)
			{
				func_715(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = func_21(&(uParam0->f_1869)) >= 3.5f;
			iVar1 = 5664;
			if (func_332(uParam0->f_1016[uParam0->f_1688], 512))
			{
				iVar1 |= 128;
			}
			if (!func_343(uParam0, uParam0->f_1688))
			{
				iVar1 |= 2048;
			}
			if (func_272(Global_35, &(uParam0->f_1686), iVar1, 0, 0, 1084227584, 100, fVar3, fVar4))
			{
				func_715(uParam0);
			}
			if ((!uParam0->f_1897 && !uParam0->f_1899) || bVar0)
			{
				uParam0->f_1686 = 0;
				if (func_344(uParam0) == 5 || iParam1 < 0)
				{
					func_715(uParam0);
				}
				else
				{
					func_716(uParam0, iParam1, bParam2);
					func_26(&(uParam0->f_1869));
					func_584(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = func_21(&(uParam0->f_1869)) >= 1f;
			if (func_717(Global_35, 242628503) || bVar0)
			{
				func_584(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!func_332(uParam0->f_1016[iVar2], 256))
			{
				if (func_432(&(uParam0->f_1903)))
				{
					func_718(uParam0->f_1903, 0);
				}
			}
			func_26(&(uParam0->f_1869));
			func_584(uParam0, 4);
			break;
		case 4:
			bVar0 = func_21(&(uParam0->f_1869)) >= 2f;
			if ((func_332(uParam0->f_1016[iVar2], 256) || !func_432(&uVar5)) || bVar0)
			{
				if (func_719())
				{
					func_720();
					func_584(uParam0, 10);
				}
				else
				{
					func_584(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = func_21(&(uParam0->f_1869)) >= 2f;
			if (func_719() || bVar0)
			{
				func_584(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = func_21(&(uParam0->f_1869)) >= 2f;
			iVar1 = 5664;
			if (func_332(uParam0->f_1016[uParam0->f_1688], 512))
			{
				iVar1 |= 128;
			}
			if (!func_343(uParam0, uParam0->f_1688))
			{
				iVar1 |= 2048;
			}
			if (func_272(Global_35, &(uParam0->f_1686), iVar1, 0, 0, 1084227584, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1686 = 0;
				set_vehicle_forward_speed(uParam0->f_1901, 0f);
				clear_ped_tasks(Global_35, 1, 0);
				func_584(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (func_21(&(uParam0->f_1869)) >= 0.75f)
			{
				if (!func_63(uParam0, 8192))
				{
					_0x0c3f0f7f92ca847c(uParam0->f_1901, 50f);
				}
				_0x7c06330bfdda182e(uParam0->f_1901);
				func_177(uParam0, 131072);
				func_584(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_576(char* sParam0)
{
	if (sParam0->f_16)
	{
		_0x0a5a4f1979abb40e(sParam0);
		if (!is_string_null_or_empty(sParam0) && _0xdd0b7c5ae58f721d(sParam0))
		{
			_0x798be43c9393632b(sParam0);
		}
		sParam0->f_16 = 0;
		StringCopy(sParam0, "", 64);
		StringCopy(&(sParam0->f_8), "", 64);
	}
}

void func_577(var uParam0, int iParam1)
{
	uParam0->f_1666.f_1 = (uParam0->f_1666.f_1 - (uParam0->f_1666.f_1 && iParam1));
}

bool func_578(var uParam0, char* sParam1, int iParam2)
{
	bVar0 = _0x7907969497ea92f5(uParam0->f_1889);
	if (!bVar0)
	{
		uParam0->f_1889 = _0xd97d8d905f1562f2(get_hash_key(sParam1));
	}
	bVar1 = _0x603ac35fd4602c76(uParam0->f_1889);
	if (!bVar1)
	{
		return false;
	}
	func_721(uParam0);
	func_509(uParam0, iParam2);
	if (func_63(uParam0, 16384))
	{
		func_722(uParam0);
	}
	Var2.f_10 = -1569615261;
	iVar18 = 0;
	while (iVar18 < 8)
	{
		iVar16 = -1;
		func_723(uParam0, iVar18);
		if (func_724(uParam0, 0))
		{
			if (func_725(uParam0, 43, &iVar16))
			{
				if (iVar16 >= 0)
				{
					uParam0->f_1016[iVar16]->f_27 = 0;
					func_726(uParam0, 1, &(uParam0->f_1016[iVar16]->f_1));
					func_726(uParam0, 2, &(uParam0->f_1016[iVar16]->f_1.f_1));
					func_726(uParam0, 3, &(uParam0->f_1016[iVar16]->f_1.f_2));
					func_726(uParam0, 4, &(uParam0->f_1016[iVar16]->f_11));
					func_726(uParam0, 5, &(uParam0->f_1016[iVar16]->f_12));
					func_726(uParam0, 6, &(uParam0->f_1016[iVar16]->f_13));
					func_726(uParam0, 7, &(uParam0->f_1016[iVar16]->f_4));
					func_726(uParam0, 8, &(uParam0->f_1016[iVar16]->f_4.f_1));
					func_726(uParam0, 9, &(uParam0->f_1016[iVar16]->f_4.f_2));
					func_726(uParam0, 10, &(uParam0->f_1016[iVar16]->f_7));
					func_726(uParam0, 11, &(uParam0->f_1016[iVar16]->f_7.f_1));
					func_726(uParam0, 12, &(uParam0->f_1016[iVar16]->f_7.f_2));
					func_726(uParam0, 13, &(uParam0->f_1016[iVar16]->f_10));
					func_726(uParam0, 14, &(uParam0->f_1016[iVar16]->f_14));
					func_726(uParam0, 15, &(uParam0->f_1016[iVar16]->f_15));
					if (func_725(uParam0, 16, &iVar17))
					{
						uParam0->f_1016[iVar16] = iVar17;
					}
					func_726(uParam0, 19, &(uParam0->f_1016[iVar16]->f_16));
					func_726(uParam0, 20, &(uParam0->f_1016[iVar16]->f_17));
					func_726(uParam0, 31, &(uParam0->f_1016[iVar16]->f_18));
					if (func_727(uParam0, 21, &Var20))
					{
						MemCopy(&(uParam0->f_1016[iVar16]->f_19), {Var20}, 3);
					}
					if (func_727(uParam0, 22, &Var20))
					{
						MemCopy(&(uParam0->f_1016[iVar16]->f_22), {Var20}, 3);
					}
					func_725(uParam0, 23, &(uParam0->f_1016[iVar16]->f_25));
					func_728(uParam0, &(uParam0->f_1016[iVar16]->f_27));
					if (func_727(uParam0, 35, &(uParam0->f_1016[iVar16]->f_30)))
					{
					}
					if (func_725(uParam0, 39, &iVar17))
					{
						uParam0->f_1016[iVar16]->f_39 = iVar17;
					}
					else
					{
						uParam0->f_1016[iVar16]->f_39 = 1;
					}
					if (func_726(uParam0, 40, &(uParam0->f_1016[iVar16]->f_40)))
					{
						func_706(uParam0->f_1016[iVar16], 2);
					}
					if (is_string_null_or_empty(&(uParam0->f_1016[iVar16]->f_30)))
					{
						uParam0->f_1016[iVar16]->f_30 = { func_411() };
					}
					uParam0->f_1016[iVar16]->f_29 = 1;
					if (uParam0->f_1895 == -1 || uParam0->f_1016[uParam0->f_1895]->f_17 < uParam0->f_1016[iVar16]->f_17)
					{
						uParam0->f_1895 = iVar16;
					}
				}
			}
		}
		iVar18++;
	}
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_1016[iVar18]->f_29)
		{
			vVar29 = { vVar29 + uParam0->f_1016[iVar18]->f_1 };
			iVar28++;
		}
		iVar18++;
	}
	vVar29 = { vVar29 / FtoV(to_float(iVar28)) };
	uParam0->f_1900 = 1;
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_1016[iVar18]->f_29)
		{
			if (!func_729(vVar29, uParam0->f_1016[iVar18]->f_1, 5f, 1))
			{
				uParam0->f_1900 = 0;
			}
			else
			{
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 11)
			{
				iVar16 = -1;
				func_723(uParam0, iVar18);
				if (func_724(uParam0, 45))
				{
					if (func_725(uParam0, 47, &iVar16))
					{
						if (iVar16 >= 0)
						{
							func_730(uParam0->f_1522[iVar16], 2);
							func_727(uParam0, 46, uParam0->f_1522[iVar16]);
							if (func_731(uParam0, 48, &bVar19))
							{
								if (bVar19)
								{
									func_730(uParam0->f_1522[iVar16], 1);
								}
							}
							if (func_725(uParam0, 49, &iVar17))
							{
								if (iVar17 == 1)
								{
									func_730(uParam0->f_1522[iVar16], 8);
								}
								else if (iVar17 == 2)
								{
									func_730(uParam0->f_1522[iVar16], 4);
								}
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 35)
			{
				iVar16 = -1;
				func_723(uParam0, iVar18);
				if (func_724(uParam0, 50))
				{
					if (func_725(uParam0, 51, &iVar17))
					{
						Var2.f_1 = iVar17;
					}
					func_725(uParam0, 43, &(Var2.f_3));
					if (func_727(uParam0, 52, &Var20))
					{
						MemCopy(&(Var2.f_4), {Var20}, 4);
					}
					func_726(uParam0, 53, &(Var2.f_8));
					if (func_725(uParam0, 54, &iVar17))
					{
						Var2.f_10 = iVar17;
					}
					func_731(uParam0, 55, &(Var2.f_11));
					func_731(uParam0, 56, &(Var2.f_12));
					iVar32 = -1;
					if (func_732(uParam0, Var2.f_1, &iVar32))
					{
						if (iVar32 >= 0 && iVar32 < 35)
						{
							uParam0->f_3[iVar32]->f_3 = Var2.f_3;
							uParam0->f_3[iVar32]->f_4 = { Var2.f_4 };
							uParam0->f_3[iVar32]->f_8 = Var2.f_8;
							uParam0->f_3[iVar32]->f_10 = Var2.f_10;
							uParam0->f_3[iVar32]->f_11 = Var2.f_11;
							uParam0->f_3[iVar32]->f_12 = Var2.f_12;
							uParam0->f_3[iVar32] = 1;
							if (func_733(Var2.f_1))
							{
								func_177(uParam0, 16777216);
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			func_723(uParam0, iVar18);
			if (func_724(uParam0, 82))
			{
				if (func_727(uParam0, 83, &Var20))
				{
					MemCopy(&(uParam0->f_459), {Var20}, 4);
				}
				func_727(uParam0, 84, &(uParam0->f_459.f_4));
				if (is_string_null_or_empty(&(uParam0->f_459.f_4)))
				{
					if (uParam0->f_459.f_15 == 1)
					{
						uParam0->f_459.f_4 = { func_404() };
					}
					else if (uParam0->f_459.f_15 == 2)
					{
						uParam0->f_459.f_4 = { func_411() };
					}
					else
					{
						uParam0->f_459.f_4 = { func_411() };
					}
				}
			}
			iVar33 = -1;
			iVar18 = 0;
			while (iVar18 < 30)
			{
				iVar16 = -1;
				func_723(uParam0, iVar18);
				if (func_724(uParam0, 57))
				{
					if (func_725(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_475[iVar16]->f_8 = 0;
							func_725(uParam0, 58, uParam0->f_475[iVar16]);
							if (func_725(uParam0, 59, &iVar17))
							{
								uParam0->f_475[iVar16]->f_1 = func_734(iVar17);
							}
							if (func_725(uParam0, 60, &iVar17))
							{
								uParam0->f_475[iVar16]->f_2 = func_735(iVar17);
							}
							func_725(uParam0, 61, &(uParam0->f_475[iVar16]->f_3));
							func_726(uParam0, 67, &(uParam0->f_475[iVar16]->f_10));
							func_726(uParam0, 70, &(uParam0->f_475[iVar16]->f_11));
							func_726(uParam0, 68, &(uParam0->f_475[iVar16]->f_9));
							func_725(uParam0, 72, &(uParam0->f_475[iVar16]->f_5));
							func_726(uParam0, 77, &(uParam0->f_475[iVar16]->f_12));
							func_725(uParam0, 78, &(uParam0->f_475[iVar16]->f_13));
							func_725(uParam0, 79, &(uParam0->f_475[iVar16]->f_14));
							if (func_725(uParam0, 73, &iVar17))
							{
								uParam0->f_475[iVar16]->f_17 = iVar17;
							}
							if (func_725(uParam0, 75, &iVar17))
							{
								uParam0->f_475[iVar16]->f_4 = iVar17;
								bVar15 = true;
							}
							func_726(uParam0, 80, &(uParam0->f_475[iVar16]->f_15));
							if (func_731(uParam0, 63, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16]->f_8 |= 1;
								}
							}
							if (func_731(uParam0, 81, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16]->f_8 |= 512;
								}
							}
							if (func_731(uParam0, 64, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16]->f_8 |= 2;
								}
							}
							if (func_731(uParam0, 66, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16]->f_8 |= 16;
								}
							}
							if (func_731(uParam0, 69, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16]->f_8 |= 32;
								}
							}
							if (func_731(uParam0, 65, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16]->f_8 |= 4;
								}
							}
							if (func_731(uParam0, 74, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16]->f_8 |= 64;
								}
							}
							if (func_731(uParam0, 71, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16]->f_8 |= 128;
								}
							}
							if (func_731(uParam0, 76, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16]->f_8 |= 256;
								}
							}
							if (!bVar15 && uParam0->f_475[iVar16]->f_2 == 9)
							{
								uParam0->f_475[iVar16]->f_4 = uParam0->f_475[iVar16]->f_3;
								uParam0->f_475[iVar16]->f_3 = 0;
							}
							if (iVar33 == -1 || iVar16 > iVar33)
							{
								iVar33 = iVar16;
							}
							uParam0->f_475[iVar16]->f_16 = uParam0->f_475[iVar16]->f_2;
							uParam0->f_475[iVar16]->f_6 = 1;
						}
					}
				}
				iVar18++;
			}
			if (iVar33 < 29)
			{
				uParam0->f_1894 = iVar33 + 1;
			}
			iVar18 = 0;
			while (iVar18 < 8)
			{
				iVar16 = -1;
				func_723(uParam0, iVar18);
				if (func_724(uParam0, 85))
				{
					func_725(uParam0, 86, &iVar16);
					if (iVar16 >= 0)
					{
						func_731(uParam0, 87, uParam0->f_1345[iVar18]);
						func_727(uParam0, 96, &(uParam0->f_1345[iVar18]->f_2));
						func_727(uParam0, 97, &(uParam0->f_1345[iVar18]->f_10));
						func_726(uParam0, 93, &(uParam0->f_1345[iVar18]->f_18));
						func_726(uParam0, 94, &(uParam0->f_1345[iVar18]->f_19));
						func_725(uParam0, 95, &(uParam0->f_1345[iVar18]->f_20));
						uParam0->f_1345[iVar18]->f_1 = 0;
						func_736(uParam0, &(uParam0->f_1345[iVar18]->f_1));
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 2)
			{
				iVar16 = -1;
				func_723(uParam0, iVar18);
				if (func_724(uParam0, 98))
				{
					if (func_725(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_1633[iVar16]->f_10 = 0;
							func_737(uParam0, 99, uParam0->f_1633[iVar16]);
							func_737(uParam0, 100, &(uParam0->f_1633[iVar16]->f_6));
							func_737(uParam0, 101, &(uParam0->f_1633[iVar16]->f_3));
							if (func_725(uParam0, 102, &iVar17))
							{
								uParam0->f_1633[iVar16]->f_9 = iVar17;
							}
							func_728(uParam0, &(uParam0->f_1633[iVar16]->f_10));
							uParam0->f_1633[iVar16]->f_11 = 1;
						}
					}
				}
				iVar18++;
			}
			_datafile_unload(uParam0->f_1889);
			func_177(uParam0, 1);
			func_177(uParam0, 16384);
			func_738(uParam0);
			return true;
		}
	}
}

bool func_579(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (((!is_string_null_or_empty(uParam0->f_1522[iVar0]) && func_367(uParam0->f_1522[iVar0], 2)) && !func_367(uParam0->f_1522[iVar0], 16)) && func_739(uParam0, iVar0))
		{
			if (!_does_anim_scene_exist(uParam0->f_1522[iVar0]->f_8))
			{
				uParam0->f_1522[iVar0]->f_8 = _create_anim_scene(uParam0->f_1522[iVar0], 0, 0, false, true);
				load_anim_scene(uParam0->f_1522[iVar0]->f_8);
				return false;
			}
			else if (!_is_anim_scene_metadata_loaded(uParam0->f_1522[iVar0]->f_8, false))
			{
				return false;
			}
			if (_0xa9016536015de29d(uParam0->f_1522[iVar0]->f_8, "pl_breakout"))
			{
				func_730(uParam0->f_1522[iVar0], 32);
			}
			_delete_anim_scene(uParam0->f_1522[iVar0]->f_8);
			func_730(uParam0->f_1522[iVar0], 16);
		}
		iVar0++;
	}
	return true;
}

void func_580(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!is_string_null_or_empty(uParam0->f_1522[iVar0]) && func_367(uParam0->f_1522[iVar0], 2))
		{
			iVar1 = 0;
			if (func_739(uParam0, iVar0))
			{
				iVar1 |= 1;
			}
			uParam0->f_1522[iVar0]->f_8 = _create_anim_scene(uParam0->f_1522[iVar0], iVar1, 0, false, true);
		}
		iVar0++;
	}
	StringCopy(&Var2, func_490(), 64);
	StringCopy(&(Var2.f_8), func_563(), 64);
	uParam0->f_1708 = { Var2 };
	uParam0->f_1731 = { Var2 };
	if (!func_331(uParam0, 8))
	{
		_0x6a4d224fc7643941(func_490());
		func_487(uParam0, 8);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!is_string_null_or_empty(&(uParam0->f_1345[iVar0]->f_2)) && !are_strings_equal(&(uParam0->f_1345[iVar0]->f_2), func_490()))
		{
			if (!_0xdd0b7c5ae58f721d(&(uParam0->f_1345[iVar0]->f_2)))
			{
				_0x6a4d224fc7643941(&(uParam0->f_1345[iVar0]->f_2));
				uParam0->f_1345[iVar0]->f_21 = 1;
			}
		}
		iVar0++;
	}
}

bool func_581(var uParam0)
{
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (_does_anim_scene_exist(uParam0->f_1522[iVar0]->f_8))
		{
			if (!func_367(uParam0->f_1522[iVar0], 64))
			{
				if (_is_anim_scene_metadata_loaded(uParam0->f_1522[iVar0]->f_8, false))
				{
					func_740(uParam0, uParam0->f_1522[iVar0]->f_8);
					load_anim_scene(uParam0->f_1522[iVar0]->f_8);
					bVar1 = false;
					func_730(uParam0->f_1522[iVar0], 64);
				}
				else
				{
					bVar1 = false;
				}
			}
			else if (!_is_anim_scene_loaded(uParam0->f_1522[iVar0]->f_8, true, false))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1016)
	{
		if (!is_string_null_or_empty(&(uParam0->f_1016[iVar0]->f_19)) && !are_strings_equal(&(uParam0->f_1016[iVar0]->f_19), "empty"))
		{
			_text_database_request(&(uParam0->f_1016[iVar0]->f_19));
			if (!_text_database_has_loaded(&(uParam0->f_1016[iVar0]->f_19)))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (func_331(uParam0, 8) && !_0xdd0b7c5ae58f721d(func_490()))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!is_string_null_or_empty(&(uParam0->f_1345[iVar0]->f_2)) && uParam0->f_1345[iVar0]->f_21) && !_0xdd0b7c5ae58f721d(&(uParam0->f_1345[iVar0]->f_2)))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (!func_90(uParam0->f_1885) || uParam0->f_1888 != 0f)
		{
			bVar8 = true;
		}
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (_does_anim_scene_exist(uParam0->f_1522[iVar0]->f_8))
			{
				if (_0xa9016536015de29d(uParam0->f_1522[iVar0]->f_8, "pl_breakout"))
				{
					_0xdf7b5144e25cd3fe(uParam0->f_1522[iVar0]->f_8, "pl_breakout");
				}
				if (bVar8)
				{
					_get_anim_scene_origin(uParam0->f_1522[iVar0]->f_8, &vVar2, &vVar5, 2);
					vVar2 = { _get_object_offset_from_coords(vVar2, uParam0->f_1888, uParam0->f_1885) };
					vVar5.f_2 = (vVar5.z - uParam0->f_1888);
					set_anim_scene_origin(uParam0->f_1522[iVar0]->f_8, vVar2, vVar5, 2);
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_582(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((((!is_entity_dead(uParam0->f_3[iVar0]->f_2) && is_entity_a_ped(uParam0->f_3[iVar0]->f_2)) && !func_527(uParam0->f_3[iVar0]->f_2)) && func_306(uParam0->f_3[iVar0]->f_10)) && !func_733(uParam0->f_3[iVar0]->f_1))
		{
			iVar1 = get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2);
			if (!is_entity_dead(iVar1))
			{
				if (!has_ped_got_weapon(iVar1, uParam0->f_3[iVar0]->f_10, 0, false))
				{
					if (func_741(uParam0->f_3[iVar0]->f_10))
					{
						uParam0->f_3[iVar0]->f_10 = _give_weapon_to_ped_2(iVar1, uParam0->f_3[iVar0]->f_10, 100, false, true, 7, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else if (_is_weapon_two_handed(uParam0->f_3[iVar0]->f_10))
					{
						uParam0->f_3[iVar0]->f_10 = _give_weapon_to_ped_2(iVar1, uParam0->f_3[iVar0]->f_10, 100, false, true, 9, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else
					{
						uParam0->f_3[iVar0]->f_10 = _give_weapon_to_ped_2(iVar1, uParam0->f_3[iVar0]->f_10, 100, false, true, 2, true, 0.5f, 1f, 752097756, false, 0f, false);
					}
				}
				if (uParam0->f_3[iVar0]->f_11)
				{
					if (func_742(iVar1, 0, 0, 0) != uParam0->f_3[iVar0]->f_10)
					{
						set_current_ped_weapon(iVar1, uParam0->f_3[iVar0]->f_10, true, 0, false, false);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_583(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!is_entity_dead(uParam0->f_3[iVar0]->f_2) && uParam0->f_3[iVar0]->f_12)
		{
			func_743(uParam0->f_3[iVar0]);
		}
		iVar0++;
	}
}

void func_584(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	func_26(&(uParam0->f_1869));
}

void func_585(var uParam0)
{
	func_744(uParam0);
	func_745(uParam0);
}

int func_586(var uParam0)
{
	if (uParam0->f_1685 < 0 || uParam0->f_475[uParam0->f_1685]->f_4 < 0)
	{
		return -1;
	}
	return uParam0->f_1522[uParam0->f_475[uParam0->f_1685]->f_4]->f_8;
}

bool func_587(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_588(var uParam0, int iParam1)
{
	iVar0 = -1;
	if (!is_entity_dead(iParam1))
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_3)
		{
			if (does_entity_exist(uParam0->f_3[iVar1]->f_2))
			{
				if (get_entity_model(iParam1) == get_entity_model(uParam0->f_3[iVar1]->f_2))
				{
					iVar0++;
					if (iParam1 == uParam0->f_3[iVar1]->f_2)
					{
						return iVar0;
					}
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_589(var uParam0, int iParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(uParam0->f_444))
	{
		return;
	}
	if (!func_451(uParam0, iParam1))
	{
		return;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_746(uParam0, iParam1);
	}
	if (_0x6f1f0b17109309da(uParam0->f_444, sParam2))
	{
		if (((is_entity_a_ped(iParam1) && does_entity_exist(_get_anim_scene_ped(uParam0->f_444, sParam2, false))) || (is_entity_an_object(iParam1) && does_entity_exist(_get_anim_scene_object(uParam0->f_444, sParam2, false)))) || (is_entity_a_vehicle(iParam1) && does_entity_exist(_get_anim_scene_vehicle(uParam0->f_444, sParam2, false))))
		{
			remove_anim_scene_entity(uParam0->f_444, sParam2, iParam1);
		}
	}
}

void func_590(int iParam0, bool bParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_747(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_591(iParam0, 1, 0);
		}
	}
	func_591(iParam0, 16, bParam1);
}

void func_591(int iParam0, int iParam1, bool bParam2)
{
	if (!func_485(iParam0))
	{
		return;
	}
	func_748(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_592(int iParam0)
{
	func_591(iParam0, 8, 0);
}

void func_593(int iParam0)
{
	func_496(iParam0, 36, 1);
}

void func_594(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_485(iParam0))
		{
			return;
		}
	}
	func_662(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_595(int iParam0, bool bParam1)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_749(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

void func_596(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_114(iParam0))
	{
		iVar1 = func_274(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_750(iParam0);
		}
	}
	if (func_495(iParam0, 5, 1))
	{
		set_ped_config_flag(func_274(iParam0), 137, true);
	}
}

void func_597(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_485(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_594(iParam0, 50, 1);
		func_594(iParam0, 48, 1);
		func_594(iParam0, 49, 1);
		func_594(iParam0, 51, 1);
		func_594(iParam0, 52, 1);
		func_594(iParam0, 54, 1);
		func_594(iParam0, 55, 1);
	}
	else
	{
		func_496(iParam0, 50, 1);
		func_496(iParam0, 48, 1);
		func_496(iParam0, 49, 1);
		func_496(iParam0, 51, 1);
		if (bParam3)
		{
			func_496(iParam0, 54, 1);
		}
		else
		{
			func_594(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_496(iParam0, 52, 1);
			if (bParam3)
			{
				func_496(iParam0, 55, 1);
			}
		}
		else
		{
			func_594(iParam0, 52, 1);
			if (!bParam3)
			{
				func_594(iParam0, 55, 1);
			}
		}
	}
}

void func_598(int iParam0, bool bParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_274(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_274(iParam0), 204, false);
	}
}

void func_599(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (func_115(iParam0))
	{
		if (!func_116(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_495(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_595(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_274(iParam0);
	if (((does_entity_exist(iVar1) && func_751(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_496(iParam0, 2, 1);
	}
	else
	{
		func_752(iParam0);
		func_496(iParam0, 1, 1);
	}
}

void func_600(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_114(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_601(int iParam0)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_602(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_485(iParam1))
	{
		return;
	}
	iVar0 = func_601(iParam1);
	if (func_753(iParam1))
	{
		if (!func_754(iParam1))
		{
			return;
		}
	}
	func_594(iParam1, 39, 1);
	func_755(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_755(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_755(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_496(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_756(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_603(int iParam0)
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

bool func_604(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_605(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_606(var uParam0)
{
	if (!func_604(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_605(&(uParam0->f_1), 1);
	}
}

void func_607(var uParam0)
{
	if (!func_604(*uParam0, 1))
	{
		request_ptfx_asset();
		func_605(uParam0, 1);
	}
}

bool func_608()
{
	if (func_273() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_609(int iParam0)
{
	return iParam0 != 0;
}

void func_610(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	if (bParam2)
	{
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

void func_611(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		Global_1393237->f_11[iParam0]->f_24 = iParam1;
	}
}

int func_612(vector3 vParam0, float fParam3, char[4] cParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_90(vParam0))
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
		if (func_757(vParam0))
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
	func_758(iVar0, bParam8);
	return iVar0;
}

bool func_613(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_614(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

int func_615(int iParam0)
{
	return iParam0;
}

void func_616(int iParam0)
{
	if (!func_759(iParam0))
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

void func_617(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_618(iParam0, 1);
	func_620(iParam0, 1);
	func_621(iParam0, 128);
}

void func_618(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_419(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_619(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_620(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_621(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_622(int iParam0)
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

int func_623(int iParam0)
{
	iVar0 = func_467(func_760(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_624(int iParam0)
{
	if (func_625(81053684, iParam0))
	{
		return true;
	}
	if (func_625(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_625(int iParam0, int iParam1)
{
	iVar1 = func_467(func_760(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_434(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

void func_626(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_627()
{
	if (!func_306(Global_1935630->f_45))
	{
		return -1569615261;
	}
	return Global_1935630->f_45;
}

int func_628(int iParam0, int iParam1)
{
	return func_761(&uVar0, iParam0, iParam1);
}

bool func_629()
{
	return &Global_1935436 == 1;
}

bool func_630()
{
	return &Global_1935436 == 2;
}

int func_631(int iParam0)
{
	iVar0 = func_434(iParam0);
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

struct<4> func_632(bool bParam0)
{
	return func_474(1328661203, func_365(), -1591664384, bParam0);
}

int func_633(int iParam0)
{
	if (!func_433(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_634(bool bParam0)
{
	iVar0 = func_476(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_474(923904168, func_632(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_474(923904168, func_632(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_474(923904168, func_632(bParam0), -740156546, 0);
}

bool func_635(int iParam0, bool bParam1)
{
	if (func_434(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_762(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_636(bool bParam0)
{
	iVar0 = func_476(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_474(271701509, func_632(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_474(271701509, func_632(bParam0), 12999093, 0);
}

bool func_637(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_434(iParam0);
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

bool func_638(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_476(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

void func_639()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

bool func_640(int iParam0, int iParam1)
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

int func_641(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_640(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_640(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_640(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_640(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_640(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_640(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_642(int iParam0)
{
	func_460(iParam0, 8, 6);
}

void func_643(int iParam0)
{
	func_763(&(Global_1946804->f_2589), iParam0);
}

void func_644(int iParam0, int iParam1)
{
	func_764(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_645(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_646(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_434(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_456(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_644(iVar1, iVar3);
		}
	}
	if (func_765(-1586649372) && func_456(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_644(iVar1, iVar3);
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
						func_644(iVar1, iVar3);
					}
				}
			}
			func_766(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_766(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_644(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_766(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_644(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_644(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_766(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_766(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_644(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_766(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_644(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_644(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_434(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_644(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_767(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_434(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_644(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_640(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_644(iVar1, iVar3);
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
						func_644(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_767(&(Global_1946804->f_1497.f_1[iVar1])) || func_640(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_644(iVar1, iVar3);
					}
				}
			}
			switch (func_434(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_434(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_644(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_434(&(uParam0->f_1[iVar1])) || func_640(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_644(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_647(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_768(0);
	if (iParam2 != 0 && func_769(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_770(iParam0, func_458(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_648(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_273() != -1;
	iVar7 = func_768(0);
	if (func_454(32768))
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
			iVar5 = func_458(iVar0, 1);
			if (func_455(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_455(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_771(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_772(uParam0);
				if (iVar3 > 0)
				{
					if (!func_454(524288))
					{
						func_452(524288);
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
							iVar5 = func_458(iVar0, 1);
							if (func_455(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_455(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_771(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_644(iVar0, iParam2);
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
					func_652(524288);
				}
			}
		}
	}
}

void func_649(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_773(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_273() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_774(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_775(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_775(Global_40.f_7729);
				Global_1946804->f_1378 = func_775(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_776(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_777(0, 1);
	}
}

void func_650(struct<4> Param0)
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
			if (func_613(Param0))
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
			func_614(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_452(8);
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
			if (func_613(Param0))
			{
				return;
			}
			func_614(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_452(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_473(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_651(var uParam0)
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

void func_652(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_653(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_654(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_655(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

char* func_656(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_657(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_8, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_7, bParam2);
	_databinding_write_data_string(Global_1955569->f_5.f_2[iParam0]->f_9, sParam3);
}

void func_658(bool bParam0, bool bParam1, bool bParam2)
{
	sVar0 = func_778(0, 1, bParam0, bParam1);
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

int func_659(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

void func_660()
{
	func_779();
	func_780();
	func_781();
}

int func_661(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_782(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_662(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_663(int iParam0, bool bParam1, char* sParam2)
{
	iVar0 = func_274(iParam0);
	if (!func_114(iParam0) || is_entity_dead(iVar0))
	{
		return;
	}
	_0xf1c03a5352243a30(iVar0);
	if (bParam1)
	{
		clear_ped_tasks_immediately(iVar0, false, true);
	}
	else
	{
		clear_ped_tasks(iVar0, 1, 0);
	}
}

void func_664(int iParam0, int iParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_11 = iParam1;
}

bool func_665(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_485(iParam0))
	{
		return false;
	}
	switch ((*Global_1360165)[iParam0]->f_3)
	{
		case 0:
			if (!has_script_with_name_hash_loaded(89040947))
			{
				request_script_with_name_hash(89040947);
			}
			(*Global_1360165)[iParam0]->f_3 = 1;
		case 1:
			if (!has_script_with_name_hash_loaded(89040947))
			{
				return false;
			}
			if (Global_1359489->f_9 != -1)
			{
				return false;
			}
			Global_1359489->f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_783(iParam0, iParam9, bParam7, 1);
				}
				else if (((*Global_1360165)[iParam0]->f_4.f_2 != 0 && (*Global_1360165)[iParam0]->f_4.f_2 == Global_40.f_4942[iParam0]->f_59) && (func_492((*Global_1360165)[iParam0]->f_4.f_2) || func_333((*Global_1360165)[iParam0]->f_4.f_2)))
				{
					iParam4 = (*Global_1360165)[iParam0]->f_4.f_1;
				}
				else
				{
					iParam4 = func_783(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if ((*Global_1360165)[iParam0]->f_63 != iParam4 && func_784((*Global_1360165)[iParam0]->f_63))
				{
					if (!func_785(iParam0, 0))
					{
						func_496(iParam0, 25, 0);
					}
				}
			}
			(*Global_1360165)[iParam0]->f_4 = { func_786(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0]->f_59, bParam11) };
			if (!bParam6)
			{
				func_594(iParam0, 44, 1);
			}
			(*Global_1360165)[iParam0]->f_3 = 2;
		case 2:
			if (!func_275(func_274(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!func_275(func_601(iParam0), 0))
				{
					return false;
				}
			}
			(*Global_1360165)[iParam0]->f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

bool func_666(int iParam0, int iParam1)
{
	if (!func_114(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_787(iParam0, iParam1);
	return bVar0;
}

void func_667(int iParam0, int iParam1, bool bParam2)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (!func_666(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0]->f_3 = iParam1;
	if (bParam2)
	{
		func_496(iParam0, 25, 1);
	}
}

void func_668(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!is_entity_dead(iParam1))
	{
		if (func_788(iParam2))
		{
			iVar0 = func_789(iParam2, -1);
			if (func_790(iParam1, iVar0))
			{
				if (func_791(iParam1, iVar0))
				{
					if (func_792(iParam1, iVar0))
					{
						_apply_ped_metaped_outfit(decor_get_int(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_793(iParam1);
					}
				}
				else
				{
					_set_ped_body_component(iParam1, iVar0);
				}
			}
		}
		func_794(iParam0, iParam1, 0);
		_update_ped_variation(iParam1, false, true, true, true, false);
		_0xe3144b932dfdff65(iParam1, 0f, -1, 1, 1);
		clear_ped_damage_decal_by_zone(iParam1, 10, "ALL");
		clear_ped_blood_damage_by_zone(iParam1, 3);
		clear_ped_blood_damage_by_zone(iParam1, 0);
		clear_ped_blood_damage_by_zone(iParam1, 5);
		clear_ped_blood_damage_by_zone(iParam1, 7);
		clear_ped_blood_damage_by_zone(iParam1, 8);
		clear_ped_blood_damage_by_zone(iParam1, 9);
		if (bParam3)
		{
			func_496(iParam0, 66, 0);
		}
	}
}

void func_669(int iParam0)
{
	func_795(iParam0);
	func_796(iParam0, 0);
}

void func_670(int iParam0, int iParam1)
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

bool func_671(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_ped_human(iParam0))
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		get_current_ped_weapon(iParam0, &iVar1, true, iVar0, true);
		if (!is_weapon_valid(iVar1))
		{
		}
		else if (!_is_weapon_two_handed(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			_0xe9bd19f8121ade3e(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_672(int iParam0, int iParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0]->f_3 == -1341683964)
			{
				func_142(iParam1, 1240907314, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_142(iParam1, -2088446466, 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_673(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_114(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

void func_674(int iParam0, bool bParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	iVar0 = func_274(iParam0);
	func_797(iVar0);
	func_496(iParam0, 60, 1);
	if (bParam1)
	{
		func_798(iParam0);
	}
}

void func_675(int iParam0, bool bParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	iVar0 = func_274(iParam0);
	func_799(iVar0);
	func_594(iParam0, 60, 1);
	if (bParam1)
	{
		func_800(iParam0);
	}
}

void func_676(int iParam0, bool bParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	iVar0 = func_274(iParam0);
	func_801(iVar0);
	if (iParam0 == 14)
	{
		func_802(iVar0);
	}
	func_496(iParam0, 61, 1);
	if (bParam1)
	{
		func_803(iParam0);
	}
}

void func_677(int iParam0, bool bParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	iVar0 = func_274(iParam0);
	func_804(iVar0);
	func_594(iParam0, 61, 1);
	if (bParam1)
	{
		func_805(iParam0);
	}
}

void func_678(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_806(iParam1))
		{
			func_807(iParam0, 41788943);
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
			func_808(iParam0, 0, 1);
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
			func_809(iParam0, 0);
			bVar0 = true;
		}
		func_810(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_679(struct<2> Param0, int iParam2)
{
	if (!func_502(Param0))
	{
		return false;
	}
	if (!does_entity_exist(iParam2))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < func_811(Param0))
	{
		if (func_812(Param0, iVar0) == iParam2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_680(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2734.155f, -1397.665f, 46.1831f;
				case 1:
					return 2744.33f, -1397.482f, 46.1831f;
				case 2:
					return 2738.873f, -1397.504f, 46.1863f;
				case 3:
					return 2748.026f, -1396.552f, 46.1831f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_681(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 211.9747f;
				case 1:
					return 353.558f;
				case 2:
					return 27.9751f;
				case 3:
					return 30.0073f;
			}
			break;
	}
	return 0f;
}

bool func_682(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_476(0);
	*uParam1 = { func_474(iParam0, func_634(0), iParam3, 0) };
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

bool func_683(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_684(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_685(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

char* func_686(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_813(iVar0);
}

char* func_687(int iParam0)
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

void func_688(var uParam0)
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

int func_689(var uParam0, int iParam1)
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

int func_690(var uParam0, char* sParam1)
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

int func_691(var uParam0)
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

void func_692(var uParam0)
{
	func_814(uParam0->f_1875);
	get_model_dimensions(get_entity_model(Global_35), &vVar0, &vVar3);
	vVar0.x = (vVar0.x * 0.35f);
	vVar3.x = (vVar3.x * 0.35f);
	vVar6 = { vVar3 - vVar0 };
	vVar6 = { vVar6 * Vector(0.5f, 0.5f, 0.5f) };
	uParam0->f_1875 = _create_volume_cylinder(Global_36, 0f, 0f, 0f, vVar6);
	if (!Global_1935630->f_12)
	{
		_0x7c00cfc48a782dc0(uParam0->f_1875, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	func_176(uParam0, 1048576);
	func_176(uParam0, 2097152);
}

void func_693(var uParam0)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	iVar1 = get_entity_model(iVar0);
	if (!is_model_valid(iVar1))
	{
		return;
	}
	func_814(uParam0->f_1875);
	get_model_dimensions(iVar1, &vVar2, &vVar5);
	vVar8 = { vVar5 - vVar2 };
	vVar8 = { vVar8 * Vector(0.9f, 0.9f, 0.9f) };
	if (_is_draft_vehicle(iVar0))
	{
		iVar14 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			iVar15 = _get_ped_in_draft_seat(get_vehicle_index_from_entity_index(iVar0), iVar14);
			if (!is_entity_dead(iVar15))
			{
				get_model_dimensions(get_entity_model(iVar15), &vVar2, &vVar5);
				vVar11 = { vVar5 - vVar2 };
				vVar11 = { vVar11 * Vector(0.9f, 0.9f, 0.9f) };
			}
			else
			{
				iVar14++;
			}
		}
		vVar8.f_1 = (vVar8.y + (vVar11.y / 2f));
	}
	uParam0->f_1875 = _create_volume_box(get_entity_coords(iVar0, true, false), get_entity_rotation(iVar0, 2), vVar8);
	if (!is_entity_dead(iVar0))
	{
		_0x7c00cfc48a782dc0(uParam0->f_1875, iVar0, 0f, (vVar11.y / 2f), 0f, 0f, 0f, 0f, 2, 1);
	}
	func_177(uParam0, 2097152);
	func_176(uParam0, 1048576);
}

void func_694(var uParam0, int iParam1)
{
	iVar0 = get_entity_model(iParam1);
	if (!is_model_valid(iVar0))
	{
		return;
	}
	func_814(uParam0->f_1875);
	get_model_dimensions(iVar0, &vVar1, &vVar4);
	uParam0->f_1882 = { vVar4 - vVar1 };
	vVar7 = { uParam0->f_1882 * FtoV(func_695(iParam1)) };
	uParam0->f_1875 = _create_volume_box(get_entity_coords(iParam1, true, false), 0f, 0f, 0f, vVar7);
	if (!is_entity_dead(iParam1))
	{
		_0x7c00cfc48a782dc0(uParam0->f_1875, iParam1, 0f, 0.5f, 0f, 0f, 0f, 0f, 2, 1);
	}
	func_177(uParam0, 1048576);
	func_176(uParam0, 2097152);
}

float func_695(int iParam0)
{
	if (is_ped_sprinting(iParam0))
	{
		return 1f;
	}
	if (is_ped_running(iParam0))
	{
		return 0.9f;
	}
	if (is_ped_walking(iParam0))
	{
		return 0.8f;
	}
	return 0.7f;
}

bool func_696(int iParam0)
{
	switch (func_273())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return false;
}

bool func_697(int iParam0)
{
	switch (func_273())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return false;
}

void func_698()
{
	disable_control_action(0, -349518703, false);
	disable_control_action(0, -1098542161, false);
	disable_control_action(0, -1591726981, false);
}

void func_699(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (func_700(uParam0->f_1633[iParam1]))
	{
		case 0:
			if (!bParam3)
			{
				return;
			}
			if (!func_547(uParam0->f_1633[iParam1]->f_10, 256))
			{
				if (func_432(&(uParam0->f_1903)))
				{
					func_718(uParam0->f_1903, 0);
					func_815(uParam0->f_1633[iParam1], 2);
				}
			}
			break;
		case 1:
			if (!func_547(uParam0->f_1633[iParam1]->f_10, 256))
			{
				if (!func_816())
				{
					func_815(uParam0->f_1633[iParam1], 0);
				}
			}
			else
			{
				func_815(uParam0->f_1633[iParam1], 0);
			}
			break;
		case 2:
			if (!func_817())
			{
				func_815(uParam0->f_1633[iParam1], 0);
			}
			break;
	}
}

int func_700(var uParam0)
{
	return uParam0->f_14;
}

bool func_701(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, vector3 vParam10)
{
	vVar0 = { vParam4 - vParam1 };
	vVar3 = { vParam1 - vParam10 };
	fVar6 = func_818(vParam7, vVar0);
	fVar7 = -func_818(vParam7, vVar3);
	if (absf(fVar6) < 1E-08f)
	{
		return false;
	}
	fVar8 = (fVar7 / fVar6);
	*uParam0 = { vParam1 + Vector(fVar8, fVar8, fVar8) * vVar0 };
	if (fVar8 < 0f || fVar8 > 1f)
	{
		return false;
	}
	return true;
}

void func_702(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, float fParam7, var uParam8, var uParam9)
{
	if (!func_819(uParam0, iParam1))
	{
		*uParam2 = { uParam0->f_1016[iParam1]->f_1 + Vector(0f, (cos(uParam0->f_1016[iParam1]->f_12) * uParam0->f_1016[iParam1]->f_11), (sin(uParam0->f_1016[iParam1]->f_12) * uParam0->f_1016[iParam1]->f_11)) };
		vParam3 = { uParam0->f_1016[iParam1]->f_1 + Vector(0f, (cos(uParam0->f_1016[iParam1]->f_13) * uParam0->f_1016[iParam1]->f_11), (sin(uParam0->f_1016[iParam1]->f_13) * uParam0->f_1016[iParam1]->f_11)) };
	}
	else
	{
		*uParam2 = { uParam0->f_1016[iParam1]->f_1 + Vector(0f, ((cos(uParam0->f_1016[iParam1]->f_12) * uParam0->f_1016[iParam1]->f_11) + uParam0->f_1016[iParam1]->f_18), ((sin(uParam0->f_1016[iParam1]->f_12) * uParam0->f_1016[iParam1]->f_11) + uParam0->f_1016[iParam1]->f_18)) };
		vParam3 = { uParam0->f_1016[iParam1]->f_1 + Vector(0f, ((cos(uParam0->f_1016[iParam1]->f_13) * uParam0->f_1016[iParam1]->f_11) + uParam0->f_1016[iParam1]->f_18), ((sin(uParam0->f_1016[iParam1]->f_13) * uParam0->f_1016[iParam1]->f_11) + uParam0->f_1016[iParam1]->f_18)) };
	}
	vVar0 = { Global_36 };
	if ((uParam0->f_1897 && _does_volume_exist(uParam0->f_1875)) && func_91(uParam0->f_1898, uParam0->f_1016[iParam1]->f_1, uParam0->f_1016[iParam1]->f_17, 1, 1))
	{
		vVar34 = { _0x3e2a25b2416dd67e(uParam0->f_1875) };
		vVar37 = { _0xf70f00013a62f866(uParam0->f_1875) };
		*vVar3[0] = { _get_object_offset_from_coords(vVar37, get_entity_heading(uParam0->f_1898), (vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		*vVar3[1] = { _get_object_offset_from_coords(vVar37, get_entity_heading(uParam0->f_1898), (vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		*vVar3[2] = { _get_object_offset_from_coords(vVar37, get_entity_heading(uParam0->f_1898), (-vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		*vVar3[3] = { _get_object_offset_from_coords(vVar37, get_entity_heading(uParam0->f_1898), (-vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		*vVar16[0] = { _0x83acc65d9acec5ef(uParam0->f_1016[iParam1]->f_1, *vVar3[0], *vVar3[1], true) };
		*vVar16[1] = { _0x83acc65d9acec5ef(uParam0->f_1016[iParam1]->f_1, *vVar3[0], *vVar3[2], true) };
		*vVar16[2] = { _0x83acc65d9acec5ef(uParam0->f_1016[iParam1]->f_1, *vVar3[3], *vVar3[1], true) };
		*vVar16[3] = { _0x83acc65d9acec5ef(uParam0->f_1016[iParam1]->f_1, *vVar3[3], *vVar3[2], true) };
		fVar29[0] = get_distance_between_coords(uParam0->f_1016[iParam1]->f_1, *vVar16[0], true);
		fVar29[1] = get_distance_between_coords(uParam0->f_1016[iParam1]->f_1, *vVar16[1], true);
		fVar29[2] = get_distance_between_coords(uParam0->f_1016[iParam1]->f_1, *vVar16[2], true);
		fVar29[3] = get_distance_between_coords(uParam0->f_1016[iParam1]->f_1, *vVar16[3], true);
		iVar41 = 0;
		iVar40 = 1;
		while (iVar40 <= 3)
		{
			if (&fVar29[iVar40] < &fVar29[iVar41])
			{
				iVar41 = iVar40;
			}
			iVar40++;
		}
		vVar0 = { *vVar16[iVar41] };
	}
	*fParam6 = get_distance_between_coords(vVar0, *uParam2, true);
	*fParam7 = get_distance_between_coords(vVar0, vParam3, true);
	*uParam8 = func_449(uParam0->f_1016[iParam1]->f_1, vVar0, 0);
	if (*uParam8 < uParam0->f_1016[iParam1]->f_12)
	{
		*uParam8 = (*uParam8 + 360f);
	}
	if (uParam0->f_1016[iParam1]->f_13 < uParam0->f_1016[iParam1]->f_12)
	{
		*uParam9 = (uParam0->f_1016[iParam1]->f_13 + 360f);
	}
	else
	{
		*uParam9 = uParam0->f_1016[iParam1]->f_13;
	}
	if (*uParam8 < *uParam9)
	{
		vVar42 = { uParam0->f_1016[iParam1]->f_1 };
		vVar42.f_2 = Global_36.f_2;
		uParam0->f_1876 = { vVar42 + Vector(0f, (cos(*uParam8) * uParam0->f_1016[iParam1]->f_11), (sin(*uParam8) * uParam0->f_1016[iParam1]->f_11)) };
		fVar45 = 0f;
		uParam0->f_1879 = { vVar42 + Vector(0f, ((cos(*uParam8) * uParam0->f_1016[iParam1]->f_17) + fVar45), ((sin(*uParam8) * uParam0->f_1016[iParam1]->f_17) + fVar45)) };
	}
}

void func_703(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (uParam0->f_3[iVar0]->f_1 != 0)
		{
			if ((does_entity_exist(uParam0->f_3[iVar0]->f_2) && is_entity_a_ped(uParam0->f_3[iVar0]->f_2)) && !is_string_null_or_empty(&(uParam0->f_3[iVar0]->f_4)))
			{
				func_144(&(uParam0->f_1771), get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2), &(uParam0->f_3[iVar0]->f_4), 0);
			}
		}
		iVar0++;
	}
}

bool func_704(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (8 == uParam0->f_475[iVar0]->f_2 && &uParam0->f_475[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_705(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1016[iVar0]->f_29)
		{
			if ((!is_string_null_or_empty(&(uParam0->f_1016[iVar0]->f_22)) && are_strings_equal(&(uParam0->f_1016[iVar0]->f_22), sParam1)) && func_488(uParam0->f_1016[iVar0], 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_706(var uParam0, int iParam1)
{
	uParam0->f_26 = (uParam0->f_26 || iParam1);
}

void func_707(int iParam0, float fParam1)
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
	if (!func_820(iParam0, 8))
	{
		disable_control_action(0, -640622144, false);
	}
	if (!func_820(iParam0, 4))
	{
		disable_control_action(0, -485697785, false);
	}
	if (!func_820(iParam0, 16))
	{
		disable_control_action(0, -128997553, false);
		disable_control_action(0, 130948705, false);
		disable_control_action(0, 42190210, false);
	}
	if (!func_820(iParam0, 128))
	{
		disable_control_action(0, -562475458, false);
	}
	if (!func_820(iParam0, 512))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
	if (!func_820(iParam0, 64))
	{
		disable_control_action(0, -620139643, false);
	}
	if (!(func_821(17) && func_212(Global_35, (*Global_1835011)[17]->f_18, 0) < 10f))
	{
		if (!func_820(iParam0, 2048))
		{
			disable_control_action(0, -822242784, false);
		}
	}
	if (!func_820(iParam0, 4096))
	{
		disable_control_action(0, -1664638556, false);
	}
	if (!is_entity_dead(Global_35))
	{
		if (!func_820(iParam0, 1024))
		{
			set_ped_reset_flag(Global_35, 2, true);
			set_ped_reset_flag(Global_35, 21, true);
		}
		if (!func_820(iParam0, 8))
		{
			set_ped_reset_flag(Global_35, 168, true);
		}
		set_ped_reset_flag(Global_35, 33, true);
		if (!func_820(iParam0, 32))
		{
			if (_get_ped_crouch_movement(Global_35))
			{
				_set_ped_crouch_movement(Global_35, false, 0, false);
			}
		}
	}
}

bool func_708(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_709(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_475[iParam1]->f_17 == 0 && func_8(uParam0) == 3)
	{
		if (bParam2)
		{
		}
		return true;
	}
	if (uParam0->f_475[iParam1]->f_17 == 2 && func_8(uParam0) == 9)
	{
		if (bParam2)
		{
		}
		return true;
	}
	if ((uParam0->f_475[iParam1]->f_17 == 1 && func_8(uParam0) > 3) && func_8(uParam0) < 9)
	{
		if (bParam2)
		{
		}
		return true;
	}
	return false;
}

void func_710(var uParam0, int iParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (does_entity_exist(uParam0->f_3[iVar0]->f_2) && is_entity_a_ped(uParam0->f_3[iVar0]->f_2))
		{
			StringCopy(&cVar1, uParam0->f_3[iVar0]->f_9, 64);
			if (is_string_null_or_empty(&cVar1))
			{
				cVar1 = { func_366(uParam0, uParam0->f_3[iVar0]->f_2) };
			}
			if (!is_string_null_or_empty(&cVar1) && _0x6f1f0b17109309da(iParam1, &cVar1))
			{
				iVar9 = get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2);
				if (is_ped_human(iVar9) && iVar9 != Global_35)
				{
					func_711(iVar9, Global_35, uParam2, uParam3);
				}
			}
		}
		iVar0++;
	}
}

void func_711(int iParam0, var uParam1, var uParam2, var uParam3)
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
	Var0.f_3 = uParam1;
	Var0.f_4 = 14283;
	Var0.f_14 = uParam2;
	Var0.f_15 = uParam3;
	_0x66f9eb44342bb4c5(iParam0, &Var0);
}

void func_712(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_475[iParam2]->f_4 < 0)
	{
		return;
	}
	iVar0 = uParam0->f_475[iParam2]->f_4;
	if (_does_anim_scene_exist(uParam0->f_1522[iVar0]->f_8))
	{
		if (_is_anim_scene_loaded(uParam0->f_1522[iVar0]->f_8, true, false))
		{
			func_740(uParam0, uParam0->f_1522[iVar0]->f_8);
			_get_anim_scene_origin(uParam0->f_1522[iVar0]->f_8, &vVar1, &vVar4, 2);
			if (func_367(uParam0->f_1522[iVar0], 1))
			{
				if (_get_anim_scene_entity_matrix(uParam0->f_1522[iVar0]->f_8, func_230(Global_35), &vVar7, false, 0, 2))
				{
					fVar19 = (func_449(vVar1, Global_36, 1) - func_449(vVar1, vVar7, 1));
					vVar4.f_2 = (vVar4.z + fVar19);
					set_anim_scene_origin(uParam0->f_1522[iVar0]->f_8, vVar1, vVar4, 2);
				}
			}
			if (_0x6f1f0b17109309da(uParam0->f_1522[iVar0]->f_8, func_230(Global_35)) && uParam0->f_475[iParam2]->f_17 != 0)
			{
				if ((func_8(uParam0) > 3 && !func_332(uParam0->f_1016[&uParam0->f_475[iParam2]], 16)) && !func_332(uParam0->f_1016[&uParam0->f_475[iParam2]], 32768))
				{
					func_822(uParam0, 1);
				}
				if (uParam0->f_1899)
				{
					if (func_332(uParam0->f_1016[&uParam0->f_475[iParam2]], 128))
					{
					}
					else
					{
						func_177(uParam0, 131072);
						return;
					}
				}
			}
			if (!_is_anim_scene_started(uParam0->f_1522[iVar0]->f_8, false))
			{
				if (_0x6f1f0b17109309da(uParam0->f_1522[iVar0]->f_8, "b_PlayerArthur"))
				{
					set_anim_scene_bool(uParam0->f_1522[iVar0]->f_8, "b_PlayerArthur", !func_608(), false);
				}
				start_anim_scene(uParam0->f_1522[iVar0]->f_8);
				if (uParam0->f_475[iParam2]->f_17 == 0)
				{
					func_730(uParam0->f_1522[iVar0], 128);
					if (_0xa9016536015de29d(uParam0->f_1522[iVar0]->f_8, "pl_breakout"))
					{
						func_368(uParam0->f_1522[iVar0]->f_8, 10000, 0, -1, 0);
					}
				}
			}
			if (_is_anim_scene_paused(uParam0->f_1522[iVar0]->f_8))
			{
				set_anim_scene_paused(uParam0->f_1522[iVar0]->f_8, false);
			}
			if (func_587(uParam0->f_475[iParam2], 4))
			{
				uParam0->f_1685 = iParam2;
				if (((((func_339(uParam0) == 0 && !_0x81dcfd13cf39920e()) && uParam0->f_475[iParam2]->f_17 == 1) && &uParam0->f_475[iParam2] < 8) && !func_332(uParam0->f_1016[&uParam0->f_475[iParam2]], 32768)) && !func_332(uParam0->f_1016[&uParam0->f_475[iParam2]], 524288))
				{
					_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
					func_487(uParam0, 64);
				}
			}
			iVar20 = 0;
			while (iVar20 < 35)
			{
				if ((uParam0->f_3[iVar20] && uParam0->f_3[iVar20]->f_8 > 0f) && !is_entity_dead(uParam0->f_3[iVar20]->f_2))
				{
					set_entity_visible(uParam0->f_3[iVar20]->f_2, false);
				}
				iVar20++;
			}
			if ((_0x6f1f0b17109309da(uParam0->f_1522[iVar0]->f_8, func_230(Global_35)) && uParam0->f_475[iParam2]->f_17 != 0) && !func_332(uParam0->f_1016[&uParam0->f_475[iParam2]], 32768))
			{
				if (_get_anim_scene_entity_matrix(uParam0->f_1522[iVar0]->f_8, func_230(Global_35), &vVar21, false, 0, 2) && !func_90(vVar21))
				{
					func_823(uParam0, 0);
				}
			}
			uParam0->f_475[iParam2]->f_7 = 1;
		}
	}
}

bool func_713(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (&uParam0->f_475[iVar0] == iParam1)
		{
			if (func_587(uParam0->f_475[iVar0], 4))
			{
				return true;
			}
			if (uParam0->f_475[iVar0]->f_2 == 11)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_714()
{
	return does_entity_exist(_get_first_entity_ped_is_carrying(Global_35));
}

void func_715(var uParam0)
{
	if (!uParam0->f_1897)
	{
		if (func_332(uParam0->f_1016[uParam0->f_1684], 8192) && _get_ped_crouch_movement(Global_35))
		{
			force_ped_motion_state(Global_35, 147004056, false, 0, false);
		}
		if (!func_332(uParam0->f_1016[uParam0->f_1684], 65536) || (!func_306(func_450(Global_35, 0, 1, 0)) && !func_306(func_450(Global_35, 1, 1, 0))))
		{
			if (func_343(uParam0, uParam0->f_1684))
			{
				func_824(uParam0->f_1016[uParam0->f_1684]->f_7);
			}
		}
	}
	if (!func_332(uParam0->f_1016[uParam0->f_1684], 16) && (func_306(func_450(Global_35, 0, 1, 0)) || func_306(func_450(Global_35, 1, 1, 0))))
	{
		_0x94a3c1b804d291ec(Global_35, 1, 0, 1, 0);
		if (func_332(uParam0->f_1016[uParam0->f_1684], 65536))
		{
			open_sequence_task(&iVar0);
			task_stand_still(0, 250);
			task_swap_weapon(0, 0, 0, 0, 0);
			close_sequence_task(iVar0);
			task_perform_sequence(Global_35, iVar0);
			clear_sequence_task(&iVar0);
		}
		else
		{
			task_swap_weapon(Global_35, 0, 1, 0, 0);
		}
		func_584(uParam0, 1);
	}
	else if ((!func_343(uParam0, uParam0->f_1684) && !func_351(uParam0, 4)) && !_0x3ab6c7b0bb0df4b1(Global_35, -1))
	{
		set_player_control(get_player_index(), true, 0, false);
		func_584(uParam0, 3);
	}
	else
	{
		func_584(uParam0, 6);
	}
}

void func_716(var uParam0, int iParam1, bool bParam2)
{
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	func_825(uParam0, iParam1, &vVar1, &fVar0);
	func_823(uParam0, func_564(uParam0->f_1345[&uParam0->f_475[iParam1]]->f_1, 8));
	func_26(&(uParam0->f_1869));
	_0xcb9401f918cb0f75(Global_35, "PlayLeadin", 1, -1);
	if (uParam0->f_1016[&uParam0->f_475[iParam1]]->f_39 != 0)
	{
		if (!func_826(uParam0, &(uParam0->f_475[iParam1])))
		{
			func_706(uParam0->f_1016[&uParam0->f_475[iParam1]], 4);
			_0xcb9401f918cb0f75(Global_35, func_489(uParam0->f_1016[&uParam0->f_475[iParam1]]->f_39), 1, -1);
		}
	}
	func_824(vVar1);
	if (uParam0->f_475[iParam1]->f_15 < 1f)
	{
		_0x3ad8eff9703be657(Global_35, uParam0->f_475[iParam1]->f_15);
		func_487(uParam0, 32);
	}
	if (func_587(uParam0->f_475[iParam1], 16))
	{
		func_827(uParam0, &(uParam0->f_475[iParam1]), &vVar4, vVar1, fVar0, &uVar21);
		task_flush_route();
		iVar24 = 0;
		while (iVar24 < 5)
		{
			task_extend_route(*vVar4[iVar24]);
			iVar24++;
		}
		open_sequence_task(&iVar20);
		func_828(uParam0, iParam1, bParam2, &vVar4);
		close_sequence_task(iVar20);
		task_perform_sequence(Global_35, iVar20);
		clear_sequence_task(&iVar20);
	}
	else
	{
		open_sequence_task(&iVar20);
		func_829(uParam0, iParam1, bParam2, vVar1);
		close_sequence_task(iVar20);
		task_perform_sequence(Global_35, iVar20);
		clear_sequence_task(&iVar20);
	}
}

bool func_717(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_718(int iParam0, bool bParam1)
{
	if (!func_830())
	{
		return 0;
	}
	if (!func_831(iParam0))
	{
		return 0;
	}
	if (func_832(iParam0))
	{
		iVar0 = 0;
		if (func_434(iParam0) == 81053684)
		{
			if (bParam1)
			{
				func_482(&iVar0, 2);
			}
		}
		return func_833(iParam0, iVar0);
	}
	return 0;
}

bool func_719()
{
	return &Global_1357517;
}

void func_720()
{
	Global_1357516 = 0;
}

void func_721(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 103)
	{
		_datafile_register_query(uParam0->f_1889, iVar0, func_834(iVar0));
		iVar0++;
	}
}

void func_722(var uParam0)
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
	uParam0->f_459 = { Var1 };
	StringCopy(&(uParam0->f_459), "", 32);
	iVar0 = 0;
	while (iVar0 < uParam0->f_475)
	{
		*uParam0->f_475[iVar0] = { Var17 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1522)
	{
		*uParam0->f_1522[iVar0] = { Var76 };
		iVar0++;
	}
	uParam0->f_1683 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1016)
	{
		*uParam0->f_1016[iVar0] = { Var35 };
		*uParam0->f_1345[iVar0] = { Var86 };
		iVar0++;
	}
	uParam0->f_1684 = -1;
	uParam0->f_1765 = { Global_36 };
	uParam0->f_1768 = 0;
	uParam0->f_1769 = 0;
	uParam0->f_1688 = -1;
	uParam0->f_1689 = -1f;
	uParam0->f_1664 = 0;
	uParam0->f_1666 = 0;
	uParam0->f_1666.f_1 = 0;
	uParam0->f_1903 = 0;
	if (_0x927b810e43e99932(&(uParam0->f_1692)))
	{
		_0x0a5a4f1979abb40e(&(uParam0->f_1692));
	}
}

void func_723(var uParam0, int iParam1)
{
	uParam0->f_1889.f_1 = 0;
	uParam0->f_1889.f_3 = iParam1;
}

bool func_724(var uParam0, int iParam1)
{
	uParam0->f_1889.f_2 = iParam1;
	uVar0 = _datafile_get_data_node_index(&(uParam0->f_1889.f_1), &(uParam0->f_1889));
	return uVar0;
}

bool func_725(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1889.f_2 = iParam1;
	uVar0 = _datafile_get_int(iParam2, &(uParam0->f_1889));
	return uVar0;
}

bool func_726(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_1889.f_2 = iParam1;
	uVar0 = _datafile_get_float(uParam2, &(uParam0->f_1889));
	return uVar0;
}

bool func_727(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_1889.f_2 = iParam1;
	uVar0 = _datafile_get_string(uParam2, &(uParam0->f_1889));
	return uVar0;
}

void func_728(var uParam0, var uParam1)
{
	if (func_731(uParam0, 24, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (func_731(uParam0, 25, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (func_731(uParam0, 26, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (func_731(uParam0, 27, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
	if (func_731(uParam0, 28, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 32;
		}
	}
	if (func_731(uParam0, 29, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 128;
		}
	}
	if (func_731(uParam0, 32, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 256;
		}
	}
	if (func_731(uParam0, 33, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 512;
		}
	}
	if (func_731(uParam0, 34, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8192;
		}
	}
	if (func_731(uParam0, 36, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 32768;
		}
	}
	if (func_731(uParam0, 37, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 65536;
		}
	}
	if (func_731(uParam0, 38, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 131072;
		}
	}
	if (func_731(uParam0, 41, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 262144;
		}
	}
	if (func_731(uParam0, 42, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 524288;
		}
	}
}

bool func_729(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return vdist2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_247(vParam0, vParam3) <= (fParam6 * fParam6);
}

void func_730(var uParam0, int iParam1)
{
	uParam0->f_9 = (uParam0->f_9 || iParam1);
}

bool func_731(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_1889.f_2 = iParam1;
	uVar0 = _datafile_get_bool(bParam2, &(uParam0->f_1889));
	return uVar0;
}

bool func_732(var uParam0, int iParam1, int iParam2)
{
	if (!is_itemset_valid(uParam0->f_1921))
	{
		uParam0->f_1921 = create_itemset(true);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (does_entity_exist(uParam0->f_3[iVar0]->f_2))
		{
			if (((func_733(iParam1) && !&uParam0->f_3[iVar0]) && is_entity_a_ped(uParam0->f_3[iVar0]->f_2)) && get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2) == Global_35)
			{
				iParam1 = get_entity_model(Global_35);
			}
			if (get_entity_model(uParam0->f_3[iVar0]->f_2) == iParam1)
			{
				if (!&uParam0->f_3[iVar0])
				{
					uParam0->f_3[iVar0]->f_1 = get_entity_model(uParam0->f_3[iVar0]->f_2);
					*iParam2 = iVar0;
					if (is_entity_a_ped(uParam0->f_3[iVar0]->f_2) && !is_in_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921))
					{
						add_to_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921);
					}
					return true;
				}
			}
			if (is_entity_a_ped(uParam0->f_3[iVar0]->f_2) && !is_string_null_or_empty(uParam0->f_3[iVar0]->f_9))
			{
				if (are_strings_equal(uParam0->f_3[iVar0]->f_9, func_417(iParam1)))
				{
					if (!&uParam0->f_3[iVar0])
					{
						uParam0->f_3[iVar0]->f_1 = get_entity_model(uParam0->f_3[iVar0]->f_2);
						*iParam2 = iVar0;
						if (is_entity_a_ped(uParam0->f_3[iVar0]->f_2) && !is_in_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921))
						{
							add_to_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921);
						}
						return true;
					}
				}
			}
			if (is_entity_an_object(uParam0->f_3[iVar0]->f_2) && !is_string_null_or_empty(uParam0->f_3[iVar0]->f_9))
			{
				if (are_strings_equal(uParam0->f_3[iVar0]->f_9, func_813(iParam1)))
				{
					if (!&uParam0->f_3[iVar0])
					{
						uParam0->f_3[iVar0]->f_1 = get_entity_model(uParam0->f_3[iVar0]->f_2);
						*iParam2 = iVar0;
						if (is_entity_a_ped(uParam0->f_3[iVar0]->f_2) && !is_in_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921))
						{
							add_to_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921);
						}
						return true;
					}
				}
			}
		}
		else if (is_model_valid(iParam1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if ((does_entity_exist(uParam0->f_3[iVar0]->f_2) && !is_string_null_or_empty(uParam0->f_3[iVar0]->f_9)) && _does_string_exist_in_string(uParam0->f_3[iVar0]->f_9, "^"))
		{
			if ((is_entity_a_ped(uParam0->f_3[iVar0]->f_2) && is_model_a_ped(iParam1)) && !is_string_null_or_empty(func_417(iParam1)))
			{
				if (_does_string_exist_in_string(uParam0->f_3[iVar0]->f_9, func_417(iParam1)))
				{
					if (!&uParam0->f_3[iVar0])
					{
						uParam0->f_3[iVar0]->f_1 = get_entity_model(uParam0->f_3[iVar0]->f_2);
						*iParam2 = iVar0;
						if (is_entity_a_ped(uParam0->f_3[iVar0]->f_2) && !is_in_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921))
						{
							add_to_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921);
						}
						return true;
					}
				}
			}
			if ((is_entity_an_object(uParam0->f_3[iVar0]->f_2) && _0x274ee1b90cfa669e(iParam1)) && !is_string_null_or_empty(func_813(iParam1)))
			{
				if (_does_string_exist_in_string(uParam0->f_3[iVar0]->f_9, func_813(iParam1)))
				{
					if (!&uParam0->f_3[iVar0])
					{
						uParam0->f_3[iVar0]->f_1 = get_entity_model(uParam0->f_3[iVar0]->f_2);
						*iParam2 = iVar0;
						if (is_entity_a_ped(uParam0->f_3[iVar0]->f_2) && !is_in_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921))
						{
							add_to_itemset(uParam0->f_3[iVar0]->f_2, uParam0->f_1921);
						}
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_733(int iParam0)
{
	return (((iParam0 == 225514697 || iParam0 == -1692214353) || iParam0 == -1686040670) || iParam0 == 11966224);
}

int func_734(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
	}
	return 0;
}

int func_735(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 4;
		case 8:
			return 5;
		case 10:
			return 7;
		case 12:
			return 8;
		case 13:
			return 9;
		case 14:
			return 10;
		case 15:
			return 11;
	}
	return 0;
}

void func_736(var uParam0, var uParam1)
{
	if (func_731(uParam0, 88, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 1;
		}
	}
	if (func_731(uParam0, 89, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (func_731(uParam0, 90, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (func_731(uParam0, 91, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (func_731(uParam0, 92, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
}

var func_737(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_1889.f_2 = iParam1;
	uVar0 = _datafile_get_vector(uParam2, &(uParam0->f_1889));
	return uVar0;
}

void func_738(var uParam0)
{
	if (!func_63(uParam0, 8388608))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1016[iVar0]->f_29)
		{
			uParam0->f_1016[iVar0]->f_1 = { _get_object_offset_from_coords(uParam0->f_1016[iVar0]->f_1, -uParam0->f_1888, uParam0->f_1885) };
			vVar1 = { uParam0->f_1016[iVar0]->f_7 - uParam0->f_1016[iVar0]->f_1 };
			vVar1 = { vVar1 + uParam0->f_1885 };
			uParam0->f_1016[iVar0]->f_7 = { _get_object_offset_from_coords(uParam0->f_1016[iVar0]->f_1, -uParam0->f_1888, vVar1) };
			uParam0->f_1016[iVar0]->f_12 = (uParam0->f_1016[iVar0]->f_12 + uParam0->f_1888);
			uParam0->f_1016[iVar0]->f_13 = (uParam0->f_1016[iVar0]->f_13 + uParam0->f_1888);
			if (uParam0->f_1016[iVar0]->f_12 > 180f)
			{
				uParam0->f_1016[iVar0]->f_12 = (-180f + (absf(uParam0->f_1016[iVar0]->f_12) - 180f));
			}
			else if (uParam0->f_1016[iVar0]->f_12 < -180f)
			{
				uParam0->f_1016[iVar0]->f_12 = (180f - (absf(uParam0->f_1016[iVar0]->f_12) - 180f));
			}
			if (uParam0->f_1016[iVar0]->f_13 > 180f)
			{
				uParam0->f_1016[iVar0]->f_13 = (-180f + (absf(uParam0->f_1016[iVar0]->f_13) - 180f));
			}
			else if (uParam0->f_1016[iVar0]->f_13 < -180f)
			{
				uParam0->f_1016[iVar0]->f_13 = (180f - (absf(uParam0->f_1016[iVar0]->f_13) - 180f));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_1633[iVar0]->f_11)
		{
			*uParam0->f_1633[iVar0] = { _get_object_offset_from_coords(*uParam0->f_1633[iVar0], -uParam0->f_1888, uParam0->f_1885) };
			uParam0->f_1633[iVar0]->f_6.f_2 = (uParam0->f_1633[iVar0]->f_6.f_2 + uParam0->f_1888);
		}
		iVar0++;
	}
	func_176(uParam0, 8388608);
}

bool func_739(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (((uParam0->f_475[iVar0]->f_2 == 9 && uParam0->f_475[iVar0]->f_4 == iParam1) && !func_367(uParam0->f_1522[iParam1], 32)) && ((uParam0->f_475[iVar0]->f_1 == 0 && !func_587(uParam0->f_475[iVar0], 512)) || func_587(uParam0->f_475[iVar0], 1)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_740(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (does_entity_exist(uParam0->f_3[iVar0]->f_2))
		{
			StringCopy(&cVar1, uParam0->f_3[iVar0]->f_9, 64);
			if (is_string_null_or_empty(&cVar1))
			{
				cVar1 = { func_366(uParam0, uParam0->f_3[iVar0]->f_2) };
			}
			if (!is_string_null_or_empty(&cVar1))
			{
				if (_0x6f1f0b17109309da(iParam1, &cVar1))
				{
					set_anim_scene_entity(iParam1, &cVar1, uParam0->f_3[iVar0]->f_2, 0);
					if (is_entity_a_ped(uParam0->f_3[iVar0]->f_2) && get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2) != Global_35)
					{
						set_ped_can_be_targetted(get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2), false);
					}
				}
				else if (func_733(uParam0->f_3[iVar0]->f_1))
				{
					if (func_608())
					{
						StringCopy(&cVar1, func_417(225514697), 64);
						if (_0x6f1f0b17109309da(iParam1, &cVar1))
						{
							set_anim_scene_entity(iParam1, &cVar1, uParam0->f_3[iVar0]->f_2, 0);
						}
					}
					else
					{
						StringCopy(&cVar1, func_417(11966224), 64);
						if (_0x6f1f0b17109309da(iParam1, &cVar1))
						{
							set_anim_scene_entity(iParam1, &cVar1, uParam0->f_3[iVar0]->f_2, 0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_741(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_742(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_743(var uParam0)
{
	if (!is_entity_dead(uParam0->f_2) && is_model_a_vehicle(uParam0->f_1))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar1 = _get_ped_in_draft_seat(get_vehicle_index_from_entity_index(uParam0->f_2), iVar0);
			if (!is_entity_dead(iVar1))
			{
				delete_ped(&iVar1);
			}
			iVar0++;
		}
	}
}

void func_744(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_814(uParam0->f_1633[iVar0]->f_12);
		iVar0++;
	}
}

void func_745(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_1633[iVar0]->f_11)
		{
			func_814(uParam0->f_1633[iVar0]->f_12);
			switch (uParam0->f_1633[iVar0]->f_9)
			{
				case 0:
					uParam0->f_1633[iVar0]->f_12 = _create_volume_box(*uParam0->f_1633[iVar0], uParam0->f_1633[iVar0]->f_6, uParam0->f_1633[iVar0]->f_3);
					_0x19c7567d2f2287d6(uParam0->f_1633[iVar0]->f_12, 15);
					_0xb56d41a694e42e86(uParam0->f_1633[iVar0]->f_12, 0, 0, 0, -1, -1, 8);
					break;
				case 1:
					uParam0->f_1633[iVar0]->f_12 = _create_volume_cylinder(*uParam0->f_1633[iVar0], uParam0->f_1633[iVar0]->f_6, uParam0->f_1633[iVar0]->f_3);
					_0x19c7567d2f2287d6(uParam0->f_1633[iVar0]->f_12, 15);
					_0xb56d41a694e42e86(uParam0->f_1633[iVar0]->f_12, 0, 0, 0, -1, -1, 8);
					break;
				default:
					break;
					break;
			}
		}
		iVar0++;
	}
}

char* func_746(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return "";
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return func_835(uParam0->f_13[iVar0]->f_1);
		}
		iVar0++;
	}
	return "";
}

bool func_747(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_748(var uParam0, int iParam1, bool bParam2)
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

void func_749(int iParam0)
{
	if (!func_485(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_836(iParam0);
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

void func_750(int iParam0)
{
	if (func_114(iParam0))
	{
		if (does_entity_exist(func_274(iParam0)))
		{
			func_673(iParam0, 67108864, 1);
			func_594(iParam0, 19, 1);
		}
	}
}

float func_751(int iParam0)
{
	if (!func_485(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_752(int iParam0)
{
	iVar0 = func_274(iParam0);
	iVar1 = func_595(iParam0, 0);
	func_837(iParam0, iVar0);
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

bool func_753(int iParam0)
{
	if (!func_485(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_754(int iParam0)
{
	if (!func_485(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_755(int iParam0, int iParam1, bool bParam2)
{
	if (!func_485(iParam0))
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

int func_756(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_485(iParam0))
	{
		return 0;
	}
	iVar0 = func_601(iParam0);
	if (func_275(iVar0, 0))
	{
		if (func_275(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_753(iParam0)) || func_754(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_838(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_839(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_840(iParam0);
					_0x7b204f88f6c3d287(func_841(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_841(iParam0, 0));
					func_842(iParam0);
				}
			}
			else
			{
				if (func_282(iParam0, 32768, 1))
				{
					iVar2 = func_841(iParam0, 0);
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
		if (func_275((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_282(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_840(iParam0);
				_0x7b204f88f6c3d287(func_841(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_841(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_840(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_843(iParam0, 0);
	return 1;
}

bool func_757(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_758(int iParam0, bool bParam1)
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

bool func_759(int iParam0)
{
	return func_419(iParam0, 2);
}

int func_760(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_466(iVar0);
}

int func_761(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_844(iParam1, 128);
	if (func_845("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_846(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_306(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4) && !_is_weapon_bow(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_844(iParam1, 512) && func_682(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if ((((((_is_weapon_two_handed(Var4.f_4) || func_741(Var4.f_4)) && (!_is_weapon_shotgun(Var4.f_4) || func_844(iParam1, 16))) && (!_is_weapon_sniper(Var4.f_4) || func_844(iParam1, 4))) && (!func_741(Var4.f_4) || func_844(iParam1, 8))) && (!_is_weapon_repeater(Var4.f_4) || !func_844(iParam1, 8388608))) && (!_is_weapon_rifle(Var4.f_4) || !func_844(iParam1, 1048576)))
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
		func_847(iVar1);
	}
	if (is_weapon_valid(iVar0))
	{
	}
	else if (!func_844(iParam1, 512) && !func_844(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_761(uParam0, iParam1, iParam2);
	}
	else if (func_844(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

bool func_762(int iParam0)
{
	if (!func_848(iParam0))
	{
		return false;
	}
	return func_849(iParam0);
}

void func_763(var uParam0, int iParam1)
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
			if ((func_850(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_850(uParam0->f_2[iVar0], 1))
				{
					func_851(uParam0->f_2[iVar0], 2, 6);
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

void func_764(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_852(uParam0, 1))
	{
		func_853(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_765(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_467(iParam0, 1)] != &Global_1946804->f_57[func_467(iParam0, 1)];
}

void func_766(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_644(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_644(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_644(iVar2, iVar0);
		}
	}
}

bool func_767(int iParam0)
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

int func_768(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_854();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_769(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_770(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

int func_771(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_467(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_454(524288))
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

int func_772(var uParam0)
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

void func_773(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_273() == -1)
	{
		func_855(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_856(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_774(int iParam0, int iParam1)
{
	if (func_273() == -1)
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

int func_775(int iParam0)
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

void func_776(int iParam0, bool bParam1, int iParam2)
{
	func_857(&(Global_1946804->f_1378), iParam0);
	func_858(2, iParam0, 6);
	if (bParam1)
	{
		func_777(0, 1);
	}
}

void func_777(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_859(0);
	}
	if (bParam0)
	{
		func_452(8);
		func_452(512);
	}
	else
	{
		func_452(8);
		func_452(16);
	}
}

char* func_778(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_656(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_656(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

float func_779()
{
	if (func_860())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_861(2);
	}
	if (Global_1347477->f_119)
	{
		return func_861(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_862();
	fVar2 = func_863();
	fVar3 = func_864();
	fVar4 = func_865();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_866()));
	fVar7 = (func_861(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_867(3, round((to_float(iVar8) * fVar10)), 0);
	func_868(3, fVar9, fVar9 > 100f);
	return func_869(fVar7, -100f, 100f);
}

float func_780()
{
	if (func_860())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_861(1);
	}
	if (Global_1347477->f_119)
	{
		return func_861(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_862();
	fVar2 = func_863();
	fVar3 = func_864();
	fVar4 = func_865();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_866()));
	fVar7 = (func_861(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_867(2, round((to_float(iVar8) * fVar10)), 0);
	func_868(2, fVar9, fVar9 > 100f);
	return func_869(fVar7, -100f, 100f);
}

float func_781()
{
	if (func_860())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_861(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_870())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_871())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_861(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_862();
	fVar2 = func_863();
	fVar3 = func_864();
	fVar4 = func_865();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_866()));
	fVar7 = (func_861(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_867(1, round((to_float(iVar8) * fVar10)), 0);
	func_868(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_861(0);
	}
	return func_869(fVar7, -100f, 100f);
}

int func_782(int iParam0)
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

int func_783(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_485(iParam0))
	{
		return 0;
	}
	iVar0 = get_clock_hours() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_537((*Global_1835011)[4]->f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_872(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_537((*Global_1347702)[63]->f_15, 1) || func_333((*Global_1347702)[63]->f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_872(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_537((*Global_1835011)[14]->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_282(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					Jump @1185; //curOff = 1169
					iVar1[0] = -268604689;
					Jump @3415; //curOff = 1185
					switch (iParam0)
					{
						case 0:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar7 = 3;
							break;
						case 1:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar7 = 3;
							break;
						case 2:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar1[3] = 283037683;
							iVar7 = 4;
							break;
						case 3:
							if (func_872(iVar0, 9, 11))
							{
								iVar1[0] = 283037683;
							}
							else
							{
								iVar1[0] = -922193456;
								iVar1[1] = -2040275819;
								iVar1[2] = -1114682645;
								iVar1[3] = -1414977761;
								iVar7 = 4;
							}
							if (!bParam2)
							{
								iVar1[0] = -922193456;
							}
							break;
						case 4:
							iVar1[0] = -922193456;
							break;
						case 5:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar7 = 3;
							break;
						case 6:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar1[3] = 283037683;
							iVar7 = 4;
							break;
						case 7:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar1[3] = 283037683;
							iVar7 = 4;
							break;
						case 8:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = 283037683;
							iVar1[3] = 1744281750;
							iVar7 = 4;
							break;
						case 9:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar1[3] = 283037683;
							iVar1[4] = 1744281750;
							iVar7 = 5;
							break;
						case 10:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 11:
							if (func_537((*Global_1347702)[134]->f_15, 1) || func_333((*Global_1347702)[134]->f_15))
							{
								iVar1[0] = -2040275819;
								iVar1[1] = 1205492208;
								iVar7 = 2;
							}
							else
							{
								iVar1[0] = -922193456;
							}
							break;
						case 13:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = 283037683;
							iVar1[3] = 1744281750;
							iVar7 = 4;
							break;
						case 14:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 15:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar7 = 3;
							break;
						case 16:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 17:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 18:
							iVar1[0] = -922193456;
							break;
						case 19:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 20:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 21:
							iVar1[0] = -922193456;
							iVar1[1] = 1744281750;
							iVar7 = 2;
							break;
						case 22:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar7 = 3;
							break;
						case 23:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = 1744281750;
							iVar7 = 3;
							break;
						case 26:
							iVar1[0] = -268604689;
							break;
						default:
							iVar1[0] = -922193456;
							break;
					}
					Jump @3415; //curOff = 2240
					switch (iParam0)
					{
						case 2:
							if (func_537((*Global_1835011)[38]->f_1, 1))
							{
								iVar1[0] = -1559986688;
							}
							else
							{
								iVar1[0] = -1874208704;
							}
							break;
						default:
							iVar1[0] = 1593315648;
							break;
					}
					Jump @3415; //curOff = 2314
					switch (iParam0)
					{
						case 0:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar7 = 3;
							break;
						case 1:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar7 = 3;
							break;
						case 2:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar1[3] = 283037683;
							iVar7 = 4;
							break;
						case 3:
							if (func_872(iVar0, 9, 11))
							{
								iVar1[0] = 283037683;
							}
							else
							{
								iVar1[0] = -922193456;
								iVar1[1] = -2040275819;
								iVar1[2] = -1114682645;
								iVar1[3] = -1414977761;
								iVar7 = 4;
							}
							if (!bParam2)
							{
								iVar1[0] = -922193456;
							}
							break;
						case 4:
							iVar1[0] = -922193456;
							break;
						case 6:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar1[3] = 283037683;
							iVar7 = 4;
							break;
						case 7:
							iVar1[0] = 1295334688;
							iVar7 = 1;
							break;
						case 11:
							iVar1[0] = -2051275045;
							break;
						case 13:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = 283037683;
							iVar1[3] = 1744281750;
							iVar7 = 4;
							break;
						case 14:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 15:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar7 = 3;
							break;
						case 16:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 17:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 18:
							iVar1[0] = -922193456;
							break;
						case 19:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 20:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 21:
							iVar1[0] = -922193456;
							iVar1[1] = 1744281750;
							iVar7 = 2;
							break;
						case 22:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar7 = 3;
							break;
						case 23:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = 1744281750;
							iVar7 = 3;
							break;
						case 26:
							iVar1[0] = -268604689;
							break;
						default:
							iVar1[0] = -922193456;
							break;
					}
					Jump @3415; //curOff = 3087
					switch (iParam0)
					{
						case 13:
							iVar1[0] = -1341683964;
							iVar1[1] = 876797088;
							iVar7 = 2;
							break;
						case 14:
							iVar1[0] = -426171916;
							iVar1[1] = 1484386316;
							iVar1[2] = 1254970547;
							iVar7 = 3;
							break;
						case 4:
							if (func_873(747937920, 1) && !func_537((*Global_1347702)[1]->f_15, 1))
							{
								iVar1[0] = -1155031950;
							}
							else
							{
								iVar1[0] = -1341683964;
							}
							break;
						default:
							iVar1[0] = -1341683964;
							break;
					}
					Jump @3415; //curOff = 3250
					switch (iParam0)
					{
						case 13:
							iVar1[0] = -1341683964;
							iVar1[1] = 876797088;
							iVar1[2] = 1484386316;
							iVar7 = 3;
							break;
						case 14:
							iVar1[0] = -1092189504;
							iVar1[1] = 80515440;
							iVar7 = 2;
							break;
						case 4:
							iVar1[0] = -1341683964;
							iVar1[1] = 867156718;
							iVar7 = 2;
							break;
						case 7:
							iVar1[0] = -1341683964;
							iVar1[1] = 1484386316;
							iVar7 = 2;
							break;
						default:
							iVar1[0] = -1341683964;
							break;
					}
					if (bParam3 && does_entity_exist(func_274(iParam0)))
					{
						iVar10 = 0;
						while (iVar10 < iVar7)
						{
							if (&iVar1[iVar10] == Global_40.f_4942[iParam0]->f_3)
							{
								bVar9 = true;
								iVar8 = Global_40.f_4942[iParam0]->f_3;
							}
							iVar10++;
						}
					}
					if (!bVar9)
					{
						iVar11 = 0;
						if (iVar7 > 0 && bParam2)
						{
							iVar11 = get_random_int_in_range(0, iVar7);
						}
						iVar8 = &iVar1[iVar11];
					}
					if (!func_666(iParam0, iVar8))
					{
						iVar8 = Global_40.f_4942[iParam0]->f_3;
					}
					return iVar8;
				}

bool func_784(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return true;
		default:
			break;
	}
	return false;
}

bool func_785(int iParam0, bool bParam1)
{
	if (!func_485(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_115(iParam0) || func_495(iParam0, 44, 1))
		{
			return false;
		}
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1) || !_0xa8120ebeaf290c7a((*Global_1360165)[iParam0]->f_1))
	{
		return false;
	}
	iVar0 = _0xec254c2c9b0f08f1((*Global_1360165)[iParam0]->f_1, (*Global_1360165)[iParam0]->f_47);
	return iVar0 == -285580801;
}

struct<7> func_786(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = uParam8;
	Var0.f_6 = 0;
	if (bParam5)
	{
		set_bit(&(Var0.f_6), 0);
	}
	if (bParam6)
	{
		set_bit(&(Var0.f_6), 1);
	}
	if (bParam7)
	{
		set_bit(&(Var0.f_6), 2);
	}
	if (bParam9)
	{
		set_bit(&(Var0.f_6), 3);
	}
	return Var0;
}

bool func_787(int iParam0, int iParam1)
{
	if (!func_485(iParam0))
	{
		return false;
	}
	func_874(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_65[iVar0]), iVar1);
}

bool func_788(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_789(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 178615350:
			return 331645018;
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return 989578874;
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return -663077666;
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return -339275545;
		case 1046468203:
			return 393090546;
		case 1018353621:
			return 114272443;
		case -433615745:
			return 643643053;
		case 777603945:
			return -328334844;
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return -1496612359;
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return 41788943;
				default:
					break;
			}
			return -99272505;
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_875(296923297, iParam1);
			return func_876(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_875(1237718549, iParam1);
			return func_876(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return 41788943;
	}
	return 41788943;
}

bool func_790(int iParam0, int iParam1)
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

bool func_791(int iParam0, int iParam1)
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

bool func_792(int iParam0, int iParam1)
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
	if (!func_790(iParam0, iVar0))
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

void func_793(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_794(int iParam0, int iParam1, bool bParam2)
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
	if (Global_40.f_4942[iParam0]->f_5 & 1 > 0 && func_790(iParam1, 860729266))
	{
		_set_ped_body_component(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4096 > 0 && func_790(iParam1, 879715242))
	{
		_set_ped_body_component(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 128 > 0 && func_790(iParam1, 1606325429))
	{
		_set_ped_body_component(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 256 > 0 && func_790(iParam1, 1743550585))
	{
		_set_ped_body_component(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 512 > 0 && func_790(iParam1, 1064646155))
	{
		_set_ped_body_component(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1024 > 0 && func_790(iParam1, -536694793))
	{
		_set_ped_body_component(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2048 > 0 && func_790(iParam1, -1304053509))
	{
		_set_ped_body_component(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0]->f_5 & -2147483648 > 0 && func_790(iParam1, 718939204))
	{
		_set_ped_body_component(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 65536 > 0 && func_790(iParam1, -972364774))
	{
		_set_ped_body_component(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16384 > 0 && func_790(iParam1, -1100875244))
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
	if (Global_40.f_4942[iParam0]->f_5 & 262144 > 0 && func_790(iParam1, 1153596794))
	{
		_set_ped_body_component(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 524288 > 0 && func_790(iParam1, 1016389820))
	{
		_set_ped_body_component(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1048576 > 0 && func_790(iParam1, -726966617))
	{
		_set_ped_body_component(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2097152 > 0 && func_790(iParam1, 1365901568))
	{
		_set_ped_body_component(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 32768 > 0 && func_790(iParam1, -1658942149))
	{
		_set_ped_body_component(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 131072 > 0 && func_790(iParam1, -1980913856))
	{
		_set_ped_body_component(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4194304 > 0 && func_790(iParam1, 491764525))
	{
		_set_ped_body_component(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8388608 > 0 && func_790(iParam1, -76015264))
	{
		_set_ped_body_component(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16777216 > 0 && func_790(iParam1, 622113465))
	{
		_set_ped_body_component(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 33554432 > 0 && func_790(iParam1, 781533162))
	{
		_set_ped_body_component(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 67108864 > 0 && func_790(iParam1, -271415321))
	{
		_set_ped_body_component(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 134217728 > 0 && func_790(iParam1, -1683207356))
	{
		_set_ped_body_component(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 268435456 > 0 && func_790(iParam1, -254794762))
	{
		_set_ped_body_component(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 536870912 > 0 && func_790(iParam1, 609066278))
	{
		_set_ped_body_component(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1073741824 > 0 && func_790(iParam1, -1712783565))
	{
		_set_ped_body_component(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8192 > 0 && func_790(iParam1, 1544915253))
	{
		_set_ped_body_component(iParam1, 1544915253);
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_57 = 1;
	}
}

void func_795(int iParam0)
{
	func_877(iParam0, 1);
	func_877(iParam0, 128);
	func_877(iParam0, 256);
	func_877(iParam0, 512);
	func_877(iParam0, 1024);
	func_877(iParam0, 2048);
	func_877(iParam0, 4096);
	func_877(iParam0, 65536);
	func_877(iParam0, 16384);
	func_877(iParam0, 262144);
	func_877(iParam0, 524288);
	func_877(iParam0, 1048576);
	func_877(iParam0, 2097152);
	func_877(iParam0, 32768);
	func_877(iParam0, 131072);
	func_877(iParam0, 134217728);
	func_877(iParam0, 1073741824);
}

void func_796(int iParam0, bool bParam1)
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

void func_797(int iParam0)
{
	if (func_878(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, true);
	set_ped_config_flag(iParam0, 179, true);
	set_entity_proofs(iParam0, 127, false);
	if (is_entity_on_fire(iParam0))
	{
		stop_entity_fire(iParam0, 0);
		_set_entity_health(iParam0, get_entity_max_health(iParam0, false), 0);
	}
}

void func_798(int iParam0)
{
	if (!func_485(iParam0))
	{
		return;
	}
	if (func_839(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_601(iParam0);
	func_797(iVar0);
	func_755(iParam0, 8192, 1);
}

void func_799(int iParam0)
{
	if (func_878(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, false);
	set_ped_config_flag(iParam0, 179, false);
	set_entity_proofs(iParam0, 0, false);
}

void func_800(int iParam0)
{
	if (!func_485(iParam0))
	{
		return;
	}
	if (func_839(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_601(iParam0);
	func_799(iVar0);
	func_755(iParam0, 8192, 0);
}

void func_801(int iParam0)
{
	if (func_878(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 8229);
	set_ped_can_ragdoll_from_player_impact(iParam0, false);
}

void func_802(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (func_115(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!_does_volume_exist(&(Global_1357549->f_3[4])))
	{
		return;
	}
	if (!is_entity_in_volume(iParam0, &(Global_1357549->f_3[4]), true, 0))
	{
		return;
	}
	set_ragdoll_blocking_flags(iParam0, 909522);
}

void func_803(int iParam0)
{
	if (!func_485(iParam0))
	{
		return;
	}
	if (func_839(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_601(iParam0);
	func_801(iVar0);
	func_755(iParam0, 16384, 1);
}

void func_804(int iParam0)
{
	if (func_878(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 1);
	set_ped_can_ragdoll_from_player_impact(iParam0, true);
}

void func_805(int iParam0)
{
	if (!func_485(iParam0))
	{
		return;
	}
	if (func_839(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_601(iParam0);
	func_804(iVar0);
	func_755(iParam0, 16384, 0);
}

bool func_806(int iParam0)
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

void func_807(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_790(iParam0, iParam1))
		{
			if (func_791(iParam0, iParam1))
			{
				if (func_792(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_793(iParam0);
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

void func_808(int iParam0, int iParam1, bool bParam2)
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

void func_809(int iParam0, bool bParam1)
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

void func_810(int iParam0, int iParam1)
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

int func_811(struct<2> Param0)
{
	if (!func_502(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_812(struct<2> Param0, int iParam2)
{
	if (!func_502(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

char* func_813(int iParam0)
{
	switch (iParam0)
	{
		case -1698780291:
			return "P_CS_LEDGER01X";
		case -2049014994:
			return "P_CS_ROPE01X";
		case -1005172683:
			return "P_DOOR01X";
		case 325782917:
			return "P_DOOR03X";
		case 430302479:
			return "p_door12x";
		case -1819321039:
			return "P_DOOR13X";
		case -1899748000:
			return "p_door45x";
		case -1734239985:
			return "p_chairvictorian01x";
		case 1561132816:
			return "p_crate03x";
		case -607235640:
			return "p_cs_jug01x";
		case -243150339:
			return "p_cs_wagon02x";
		case -1497029950:
			return "P_DOOR37X";
		case -1957055091:
			return "p_door_val_genstore";
		case -1676410507:
			return "p_doorstrawberry01x";
		case 913112519:
			return "p_doorfrench01l";
		case -1004594895:
			return "p_doorfrench01r";
		case -546124888:
			return "p_doormansiongate01x";
		case 367033685:
			return "p_doornbd39x";
		case -398894636:
			return "p_doorsaloon02x";
		case -882474373:
			return "P_DOORVH_SALOON_L";
		case 376903871:
			return "P_DOORVH_SALOON_R";
		case -447184114:
			return "p_cigarlit01x";
		case -502353725:
			return "p_pebble01x";
		case 1590781012:
			return "p_cs_rope03x";
		case 98154799:
			return "P_CARDS01X";
		case 1834866537:
			return "P_CS_POKERHAND01X";
		case 1770671818:
			return "P_CS_POKERHAND02X";
		case -827620392:
			return "P_CS_HOLDEMHAND01X";
		case 343238651:
			return "P_CS_HOLDEMHAND02X";
		case -197909103:
			return "P_CS_BUCKET01X";
		case 574905658:
			return "p_cs_syringe01x";
		case -1971689092:
			return "p_bottleJD01x";
		case 1085457901:
			return "p_rag02x";
		case 1826097446:
			return "p_magneto02x";
		case -789465252:
			return "p_magneto01x";
		case -238490359:
			return "p_cs_wantedalive01x";
		case -997503794:
			return "P_CS_RCRIDETHELIGHTNING";
		case -1473388640:
			return "p_pen01x";
		case -1135604739:
			return "p_cs_letter01a_x";
		case 201002005:
			return "p_cs_electricchair01x";
		case -451122991:
			return "p_cs_generator01x";
		case -580353882:
			return "p_cs_electricHelmet01x";
		case -330691926:
			return "p_cs_gag01x";
		case -832187622:
			return "p_door_sha_man01x";
		case -2104766853:
			return "p_stool01x";
		case -1937484496:
			return "p_stool02x";
		case -156777810:
			return "p_jugglingball01x";
		case -1025740342:
			return "p_chair02x";
		case 998759471:
			return "p_chair04x";
		case -182450036:
			return "p_crate15x";
		case 539662086:
			return "p_cleaver01x";
		case 401116463:
			return "p_bottle003x";
		case -940999254:
			return "p_cs_book02x";
		case -1502733730:
			return "p_stickydymt_single";
		case -776888393:
			return "p_cs_fusedynamite01x";
		case -1901975761:
			return "p_dynamite01x";
		case 1170245472:
			return "p_cs_fusespool01x";
		case 1996775400:
			return "p_cs_detonator01x";
		case -2058893965:
			return "p_cs_bedrollclsd01x";
		case -967333571:
			return "P_CIGARETTE_CS01X";
		case -1413776846:
			return "P_MATCHES01X";
		case 617552302:
			return "P_MATCHSTICK01X";
		case -1321878957:
			return "P_WOODENCHAIR01X";
		case 1230724566:
			return "P_CHAIR_CRATE02X";
		case 164271545:
			return "p_knittingneedle01x";
		case -458984299:
			return "p_knittingsquare01x";
		case -1055906010:
			return "p_cs_rabbitMeat01x";
		case 622322952:
			return "p_cs_rabbitMeat02x";
		case -890087611:
			return "p_bottle03x";
		case -1281909308:
			return "p_cs_billstack01x";
		case 1711925122:
			return "p_cs_billSingle01x";
		case 2514129:
			return "p_binoculars01x";
		case -1866470762:
			return "p_doorrhosheriff02x";
		case -2021274799:
			return "P_BARSTOOL01X";
		case -491019543:
			return "p_cs_shotglass01x";
		case 1698150819:
			return "p_lamp18x";
		case -1963197288:
			return "p_clock06x";
		case 1527379014:
			return "p_bottle02x";
		case 876316748:
			return "p_cs_lootSack01x";
		case 1767344357:
			return "p_wineBox01x";
		case 822933632:
			return "p_strongBox01x";
		case 1497470487:
			return "P_CLOCKTABLE02X";
		case -1149199295:
			return "p_gen_statue03b";
		case 1186910594:
			return "P_STOOLWINTER01X";
		case 1954479996:
			return "P_CS_BARRAG01X";
		case 2003418568:
			return "P_PLATE01X";
		case 624070311:
			return "P_KNIFE01X";
		case 1547859810:
			return "P_KNIFE02X";
		case -1710894930:
			return "P_CS_CATFISH_WHOLE01X";
		case 431926707:
			return "P_CS_CATFISH_WHOLE01BX";
		case -1419711042:
			return "P_WOODWHITTLE01X";
		case 1810315535:
			return "P_STICKFIREPOKER01X";
		case 266900228:
			return "P_CS_WOODPILE01X";
		case 382293518:
			return "P_FORK01X";
		case 389673974:
			return "P_KNIFE04X";
		case -1874205952:
			return "p_knife03x";
		case 1983379698:
			return "P_CS_BOTTLESLIM01X";
		case 1246822101:
			return "P_CS_BLANKET01X";
		case 1496261474:
			return "P_BEDROLLCLOSED01X";
		case -1342227326:
			return "P_CS_KINDLING01X";
		case -1402507254:
			return "P_CIGARTHIN01X";
		case 1081626861:
			return "p_door_wglass01x";
		case 663716280:
			return "p_broom02x";
		case -969349845:
			return "P_AMB_CLIPBOARD_01";
		case -384257010:
			return "P_CHAIR07X";
		case 628727561:
			return "p_cs_cratetnt01x";
		case -1809617345:
			return "p_cs_flourbag01x";
		case 1521462563:
			return "p_cs_supplies01x";
		case -589352772:
			return "p_cs_supplies02x";
		case 1376394832:
			return "p_cs_supplies03x";
		case -542955242:
			return "p_door04x";
		case -29643421:
			return "p_door11x";
		case -856676249:
			return "p_doorrhosaloon01_l";
		case -1333989503:
			return "p_doorrhosaloon01_r";
		case -1403420972:
			return "P_VAL_GATE2M02X";
		case -1205874435:
			return "P_CS_STMDNKY01X";
		case 2051399415:
			return "P_CS_HOOKPULLEY01X";
		case 1932781590:
			return "P_CHAIR_CS05X";
		case 1489783104:
			return "P_CHAIR_18X";
		case -1581225876:
			return "P_CHAIR19X";
		case -895862876:
			return "P_CHAIR20X";
		case -289651159:
			return "P_CHAIR05X";
		case 1407600554:
			return "p_chair22x";
		case 986312695:
			return "p_glass01x";
		case -93693274:
			return "P_DININGCHAIRS01X";
		case 325252933:
			return "P_WINDSORCHAIR03X";
		case 1328906077:
			return "P_WINDSORCHAIR02X";
		case 1045059103:
			return "p_door_val_jail02x";
		case -155999274:
			return "P_CRATETNT01X";
		case -1956230403:
			return "P_CRATETNT02X";
		case -62869733:
			return "P_MONEYSTACK01X";
		case -422220273:
			return "P_AXE01X";
		case 2065139134:
			return "P_HOE01X";
		case 1170674247:
			return "P_SHOVEL01X";
		case 49937914:
			return "P_SHOVEL04X";
		case -296963090:
			return "P_BROOM01X";
		case -811821899:
			return "P_PITCHFORK01X";
		case 1993810557:
			return "P_SCYTHE01X";
		case 1472170582:
			return "P_SKIFF02x";
		case 673153214:
			return "p_door_nbx_doc01x_l";
		case 132005948:
			return "p_door_nbx_doc01x_r";
		case 1661843942:
			return "p_cs_camera";
		case 1765047802:
			return "p_cs_cameratripod";
		case -1329546951:
			return "p_cs_camerabag01x";
		case -569131374:
			return "p_cameraflash01x";
		case -1509314938:
			return "p_cs_shutterrelease";
		case -397513868:
			return "rowboatswamp";
		case -1399874861:
			return "P_CHAIR25X";
		case 1064769829:
			return "P_DOORBRAIT01BX";
		case -50604564:
			return "P_CS_MAP01X";
		case 1058703817:
			return "p_hammer03x";
		case -238593141:
			return "p_cs_nailbarrel01x";
		case 1210783447:
			return "p_cs_book04x";
		case -2118240499:
			return "p_cs_Fan01x";
		case -862949069:
			return "p_cs_ledgerSmall01x";
		case -1311208351:
			return "p_cs_envelope01x";
		case 826392697:
			return "p_wrappedmeat01x";
		case 1455710720:
			return "P_CS_LETTER02X";
		case -2102031605:
			return "p_cs_book03x";
		case 1955831280:
			return "p_cs_giftBox01x";
		case 305182125:
			return "p_boiler01x";
		case 888504590:
			return "p_boiler02x";
		case -82199229:
			return "p_mugCoffee01x";
		case -1174489568:
			return "p_glasstallbeer01x";
		case 1022056778:
			return "p_pitcher02x";
		case 155128635:
			return "p_tray03x";
		case 1971611315:
			return "p_sit_chairwicker01b";
		case -449688053:
			return "S_INV_ORLEANDER01CX";
		case -703216761:
			return "S_INV_ORLEANDER01DX";
		case -1700686082:
			return "P_LADLE02X";
		case -889047922:
			return "P_CS_POT01X";
		case 519549403:
			return "P_CHAIRDINING03X";
		case -755866836:
			return "P_SPOON01X";
		case 196631385:
			return "P_BOWL03X";
		case -569447711:
			return "P_CS_BRIDECATALOGUE01X";
		case -535756918:
			return "P_JEWELRYBOX02BX";
		case 2044431266:
			return "P_CS_LETTERFOLDED01X";
		case -583569159:
			return "P_CS_ARTHURHAT01X";
		case 578898429:
			return "P_OAR03X";
		case -765914358:
			return "P_DOOR_VAL_BANKVAULT";
		case -1190396102:
			return "P_DOOR_COMBANK01X";
		case -436606401:
			return "P_CS_DONATION01X";
		case 1592327736:
			return "p_door_nbx_bank03x_R";
		case -1006516120:
			return "p_door_nbx_bank03x_L";
		case -1078696833:
			return "p_camp_plate_02x";
		case -974192123:
			return "p_stewplate02x";
		case 120221819:
			return "p_cs_log01x";
		case -1814268450:
			return "p_ndb_hotelplank01x";
		case 314775562:
			return "p_glass06x";
		case -1594634038:
			return "p_cs_rag01x";
		case 819493639:
			return "p_inkwell01x";
		case -548150401:
			return "p_cigar02x";
		case 1843407141:
			return "p_bottleBeer01x";
		case -1883578190:
			return "p_beermugglass01x";
		case 851401507:
			return "p_nutBowl01x";
		case 1610236838:
			return "p_cs_sacklarge01x";
		case 633326690:
			return "p_cs_dressbox01x";
		case -300816757:
			return "p_bell05x";
		case 342335375:
			return "p_woodendeskchair01x";
		case -1443906703:
			return "p_chair06x";
		case -1031399461:
			return "p_jug01x";
		case -1907186363:
			return "S_INV_MEDICINE01X";
		case 2067968977:
			return "S_INV_MEDICINE_FTY";
		case -434431529:
			return "S_INV_Milkweed01bx";
		case -2051048367:
			return "p_bottleslim01x";
		case 1267814678:
			return "p_cs_journal01x";
		case -503626004:
			return "p_mortarpestle02x";
		case 197307092:
			return "s_inv_burdock01dx";
		case 604616887:
			return "p_cs_ropeLegSplit";
		case 2038507899:
			return "p_cs_ropeHandsSplit";
		case 388126459:
			return "p_fishingpole01x";
		case -1367341904:
			return "P_FISHINGPOLE02X";
		case -1629442620:
			return "p_cs_flowernecklace";
		case -475791515:
			return "P_CS_FLOWERS01X";
		case -1018099626:
			return "s_inv_yarrow01cx";
		case 1210527888:
			return "P_CS_FISHINGPOLEBAG01X";
		case 1785480577:
			return "P_STICK02X";
		case 1789147356:
			return "P_CS_SOCK01X";
		case 169503210:
			return "P_DOOR_VAL_BANK00_RX";
		case 160636303:
			return "P_DOOR_VAL_BANK00_RX";
		case -1456646750:
			return "p_can10x";
		case 1010765128:
			return "p_cs_rabbitgut";
		case -142576910:
			return "p_cs_rabbitheadless";
		case 2055623882:
			return "p_cs_rabbitfeetless";
		case -808559472:
			return "p_kettle03x";
		case -804436865:
			return "s_che_woodbin01x";
		case 1833396091:
			return "s_lootablepoorcase";
		case -1494278633:
			return "P_CS_BOOKHARDCV01X";
		case -1643891339:
			return "P_LETTERBUNDLE_01X";
		case -459043872:
			return "P_LETTERENVELOPE_CS01X";
		case 1825744405:
			return "P_PACKAGE08X";
		case 1713200946:
			return "P_CIGARBOX02X";
		case 1663122464:
			return "p_crucifix02x";
		case 934706428:
			return "p_bottleCrate01x";
		case -554014433:
			return "p_can05x";
		case -1682372069:
			return "p_cs_suitcase04x";
		case 69604629:
			return "p_cs_bagstrauss01x";
		case 29998454:
			return "P_BOTTLE008X";
		case 161697289:
			return "P_BOTTLE009X";
		case 1045394246:
			return "P_BOTTLE010X";
		case 1623781586:
			return "p_pocketMirror01x";
		case -1671495534:
			return "P_CIGARETTE01X";
		case 1207272102:
			return "P_TRAVELTRUNK02X";
		case -294963065:
			return "P_CHAIRWHITE01X";
		case -1947027049:
			return "P_JOURNAL_OPEN01X";
		case -1945229292:
			return "p_table42_cs";
		case -1028267229:
			return "p_cs_newspaper_02x";
		case -1537933036:
			return "P_CS_POTATOSLICE01X";
		case -1035439448:
			return "S_APLSD_LOG";
		case 1410968406:
			return "S_APLSD_HRSATT";
		case -1216485179:
			return "p_spittoon01x";
		case 787211696:
			return "p_woodbowl01x";
		case -1167561544:
			return "p_pencil01x";
		case 1467658477:
			return "P_SPOONMID01X";
		case -624124479:
			return "P_PAN01X";
		case 1211525499:
			return "P_Pipe01x";
		case 666597548:
			return "p_cs_railroadbond01x";
		case -989609930:
			return "p_sharpeningstone01x";
		case 1540392720:
			return "p_treestump02x";
		case -1638036806:
			return "p_plate17x";
		case -1566727213:
			return "p_cs_newspaper_01x";
		case 1783964157:
			return "p_sadiehat01x";
		case -1093732866:
			return "p_door_bla_jail_l_01x";
		case 784094203:
			return "p_door_bla_jail_r_01x";
		case 441245663:
			return "p_mashedPotato02x";
		case 2064348393:
			return "p_cs_bookHardCv08x";
	}
	return "";
}

void func_814(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_815(var uParam0, int iParam1)
{
	uParam0->f_14 = iParam1;
}

bool func_816()
{
	return func_879();
}

int func_817()
{
	return func_880();
}

float func_818(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_819(var uParam0, int iParam1)
{
	if (func_714())
	{
		return true;
	}
	if (func_432(&uVar0))
	{
		return true;
	}
	if ((func_306(func_742(Global_35, 0, 0, 0)) && !func_332(uParam0->f_1016[iParam1], 16)) && !func_332(uParam0->f_1016[iParam1], 64))
	{
		return true;
	}
	return false;
}

bool func_820(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_821(int iParam0)
{
	if (!func_81(iParam0))
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

void func_822(var uParam0, bool bParam1)
{
	if (!func_63(uParam0, 64) && func_339(uParam0) != 0)
	{
		return;
	}
	if (!bParam1)
	{
		iVar0 = func_742(Global_35, 0, 0, 0);
		if (is_weapon_valid(iVar0))
		{
			if (_0x2c83212a7aa51d3d(iVar0))
			{
				_0xcef4c65de502d367(Global_35, 1, 0, 1, 0);
				func_177(uParam0, 256);
			}
			else
			{
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
			}
		}
		iVar0 = func_742(Global_35, 0, 1, 0);
		if (is_weapon_valid(iVar0))
		{
			if (_0x2c83212a7aa51d3d(iVar0))
			{
				_0xcef4c65de502d367(Global_35, 1, 1, 1, 0);
				func_177(uParam0, 256);
			}
		}
	}
	else
	{
		func_881(0);
		func_881(1);
	}
}

void func_823(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		set_player_control(player_id(), false, 312, false);
	}
	else
	{
		set_player_control(player_id(), false, 56, false);
	}
	func_561(uParam0, 4);
	_hide_hud_component(-1679307491);
	if (_0xb16223cb7da965f0(get_player_index()))
	{
		_0xae637bb8ef017875(get_player_index(), 1);
	}
	if (_0x45ab66d02b601fa7(get_player_index()))
	{
		_0x64ff4bf9af59e139(get_player_index(), 1);
	}
	if ((func_339(uParam0) == 0 && uParam0->f_1684 >= 0) && !func_332(uParam0->f_1016[uParam0->f_1684], 524288))
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
		func_487(uParam0, 64);
	}
	set_ped_config_flag(Global_35, 255, false);
	func_882(0);
	if (func_240())
	{
		func_241(0);
	}
}

void func_824(vector3 vParam0)
{
	iVar0 = 250;
	if (func_306(func_450(Global_35, 0, 1, 0)) || func_306(func_450(Global_35, 1, 1, 0)))
	{
		iVar0 = 2000;
	}
	fVar1 = get_entity_heading(Global_35);
	if (!func_90(vParam0))
	{
		fVar1 = func_449(Global_36, vParam0, 1);
		simulate_player_input_gait(player_id(), 1f, iVar0, fVar1, false, true);
	}
	else
	{
		simulate_player_input_gait(player_id(), 1f, iVar0, fVar1, true, true);
	}
}

void func_825(var uParam0, int iParam1, var uParam2, float fParam3)
{
	if (func_587(uParam0->f_475[iParam1], 32))
	{
		if (func_63(uParam0, 8))
		{
			*uParam2 = { uParam0->f_1016[uParam0->f_1684]->f_1 + func_546(Global_36 - uParam0->f_1016[uParam0->f_1684]->f_1) };
			if (!func_488(uParam0->f_1016[uParam0->f_1684], 2))
			{
				*fParam3 = func_449(Global_36, uParam0->f_1016[uParam0->f_1684]->f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_1016[uParam0->f_1684]->f_40;
			}
		}
		else
		{
			*uParam2 = { uParam0->f_1016[uParam0->f_1688]->f_1 + func_546(Global_36 - uParam0->f_1016[uParam0->f_1688]->f_1) };
			if (!func_488(uParam0->f_1016[uParam0->f_1688], 2))
			{
				*fParam3 = func_449(Global_36, uParam0->f_1016[uParam0->f_1688]->f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_1016[uParam0->f_1688]->f_40;
			}
		}
	}
	else
	{
		*uParam2 = { func_883(uParam0) };
		if (func_63(uParam0, 8))
		{
			if (!func_488(uParam0->f_1016[uParam0->f_1684], 2))
			{
				*fParam3 = func_449(Global_36, uParam0->f_1016[uParam0->f_1684]->f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_1016[uParam0->f_1684]->f_40;
			}
		}
		else if (!func_488(uParam0->f_1016[uParam0->f_1688], 2))
		{
			*fParam3 = func_449(Global_36, uParam0->f_1016[uParam0->f_1688]->f_1, 1);
		}
		else
		{
			*fParam3 = uParam0->f_1016[uParam0->f_1688]->f_40;
		}
	}
}

bool func_826(var uParam0, int iParam1)
{
	iVar12 = 0;
	while (iVar12 < 30)
	{
		if (((uParam0->f_475[iVar12]->f_17 == 1 && uParam0->f_475[iVar12]->f_2 == 9) && uParam0->f_475[iVar12]->f_4 >= 0) && &uParam0->f_475[iVar12] == iParam1)
		{
			iVar13 = uParam0->f_1522[uParam0->f_475[iVar12]->f_4]->f_8;
			if ((_does_anim_scene_exist(iVar13) && _is_anim_scene_loaded(iVar13, true, false)) && _0x6f1f0b17109309da(iVar13, func_230(Global_35)))
			{
				if (_get_anim_scene_entity_matrix(iVar13, func_230(Global_35), &vVar0, false, 0, 2))
				{
					if (!func_90(vVar0))
					{
						return true;
					}
				}
			}
		}
		iVar12++;
	}
	return false;
}

void func_827(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, var uParam7)
{
	func_884(&uVar0, 0f, Global_36 - Vector(1f, 0f, 0f), (-2f * sin(get_entity_heading(Global_35))), (2f * cos(get_entity_heading(Global_35))), 0f);
	func_884(&uVar7, 1f, vParam3, (-2f * sin(fParam6)), (2f * cos(fParam6)), 0f);
	if (absf(uParam0->f_1016[iParam1]->f_12) == absf(uParam0->f_1016[iParam1]->f_13))
	{
		if (absf(uParam0->f_1016[iParam1]->f_12) >= 90f)
		{
			fVar15 = 180f;
		}
		else
		{
			fVar15 = 90f;
		}
	}
	else
	{
		fVar15 = (uParam0->f_1016[iParam1]->f_12 - uParam0->f_1016[iParam1]->f_13);
		if (fVar15 >= 180f)
		{
			fVar15 = (fVar15 - 360f);
		}
		else if (fVar15 <= -180f)
		{
			fVar15 = (fVar15 + 360f);
		}
		fVar15 = (fVar15 / 2f);
		if (uParam0->f_1016[iParam1]->f_12 < uParam0->f_1016[iParam1]->f_13)
		{
			fVar15 = (uParam0->f_1016[iParam1]->f_12 + absf(fVar15));
		}
		else
		{
			fVar15 = (uParam0->f_1016[iParam1]->f_13 + absf(fVar15));
		}
		if (fVar15 >= 180f)
		{
			fVar15 = (fVar15 - 360f);
		}
		else if (fVar15 <= -180f)
		{
			fVar15 = (fVar15 + 360f);
		}
	}
	*uParam7 = { uParam0->f_1016[iParam1]->f_1 + Vector(0f, (cos(fVar15) * (uParam0->f_1016[iParam1]->f_11 / 2f)), (sin(fVar15) * (uParam0->f_1016[iParam1]->f_11 / 2f))) };
	iVar14 = 0;
	while (iVar14 < 5)
	{
		*(*uParam2)[iVar14] = { func_885(Global_36, *uParam7, vParam3, (IntToFloat(iVar14 + 1) / to_float(5))) };
		iVar14++;
	}
}

void func_828(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	if (bParam2)
	{
		task_achieve_heading(0, func_449(Global_36, *(*uParam3)[0], 1), 0);
	}
	task_follow_point_route(0, 1f, 0, 1056964608, 1084227584, 1193033728);
	if (func_488(uParam0->f_1016[&uParam0->f_475[iParam1]], 2))
	{
		task_achieve_heading(0, uParam0->f_1016[&uParam0->f_475[iParam1]]->f_40, 0);
	}
	else
	{
		vVar0 = { func_886(uParam0, iParam1) };
		if (!func_90(vVar0))
		{
			task_turn_ped_to_face_coord(0, vVar0, -1);
		}
	}
}

void func_829(var uParam0, int iParam1, bool bParam2, vector3 vParam3)
{
	vVar0 = { func_886(uParam0, iParam1) };
	if (!func_90(vVar0))
	{
		if (bParam2)
		{
			task_achieve_heading(0, func_449(Global_36, vParam3, 1), 0);
		}
		fVar3 = func_449(vParam3, vVar0, 1);
		if (func_488(uParam0->f_1016[&uParam0->f_475[iParam1]], 2))
		{
			fVar3 = uParam0->f_1016[&uParam0->f_475[iParam1]]->f_40;
		}
		if (func_587(uParam0->f_475[iParam1], 256))
		{
			task_go_straight_to_coord(0, vParam3, 1f, 20000, fVar3, 1056964608, 0);
		}
		else
		{
			iVar4 = 4;
			iVar4 |= 4194304;
			fVar3 = (fVar3 % 360f);
			task_follow_nav_mesh_to_coord(0, vParam3, 1f, 20000, 0.25f, iVar4, fVar3);
		}
		if (!func_488(uParam0->f_1016[&uParam0->f_475[iParam1]], 4) && !func_488(uParam0->f_1016[&uParam0->f_475[iParam1]], 2))
		{
			task_turn_ped_to_face_coord(0, vVar0, -1);
		}
		else
		{
			task_achieve_heading(0, fVar3, 0);
			task_stand_still(0, -1);
		}
	}
	else
	{
		fVar5 = 40000f;
		if (func_488(uParam0->f_1016[&uParam0->f_475[iParam1]], 2))
		{
			fVar5 = uParam0->f_1016[&uParam0->f_475[iParam1]]->f_40;
		}
		fVar5 = (fVar5 % 360f);
		task_follow_nav_mesh_to_coord(0, vParam3, 1f, 20000, 0.25f, 5, fVar5);
	}
}

bool func_830()
{
	return Global_1946804->f_2792;
}

bool func_831(int iParam0)
{
	if (func_879())
	{
		return false;
	}
	if (!func_433(iParam0, 0))
	{
		return false;
	}
	if (!func_887(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_832(int iParam0)
{
	return func_888(iParam0);
}

int func_833(int iParam0, int iParam1)
{
	bVar3 = func_889(iParam0);
	if (func_640(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_432(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_890();
			}
			else
			{
				iVar0 = func_891();
			}
		}
		else if (func_477(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_892();
		}
		else
		{
			iVar0 = func_893();
		}
	}
	else if (func_624(&iVar2))
	{
		if (func_640(iVar2, -1303648999))
		{
			iVar0 = func_890();
		}
		else
		{
			iVar0 = func_891();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_892();
	}
	else
	{
		iVar0 = func_893();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

char* func_834(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "leadinData/zones/zone(%i)";
		case 1:
			return ":x1";
		case 2:
			return ":y1";
		case 3:
			return ":z1";
		case 4:
			return ":x2";
		case 5:
			return ":y2";
		case 6:
			return ":z2";
		case 7:
			return ":edgex";
		case 8:
			return ":edgey";
		case 9:
			return ":edgez";
		case 10:
			return ":xhit";
		case 11:
			return ":yhit";
		case 12:
			return ":zhit";
		case 13:
			return ":height";
		case 14:
			return ":trig1";
		case 15:
			return ":trig2";
		case 16:
			return ":areaType";
		case 17:
			return ":moveBlend";
		case 18:
			return ":animBlend";
		case 19:
			return ":fCamZoom";
		case 20:
			return ":fDismount";
		case 21:
			return ":tlDialogueFile";
		case 22:
			return ":tlDialogueLabel";
		case 23:
			return ":iDialogueDelay";
		case 24:
			return ":bQuickStop";
		case 25:
			return ":nomount";
		case 26:
			return ":bAllowClimb";
		case 27:
			return ":bAllowWeapon";
		case 28:
			return ":bAllowCarry";
		case 29:
			return ":usevehicle";
		case 30:
			return ":bSwapWeapon";
		case 31:
			return ":fFixupBuffer";
		case 32:
			return ":bAllowBandana";
		case 33:
			return ":bPickupCarriable";
		case 34:
			return ":bAllowCrouch";
		case 35:
			return ":playlist";
		case 36:
			return ":bPlayerHasControl";
		case 37:
			return ":bStopToHolster";
		case 38:
			return ":bFixupPlayerEarly";
		case 39:
			return ":walkStopOptions";
		case 40:
			return ":fWalkStopHeading";
		case 41:
			return ":bAllowLasso";
		case 42:
			return ":bNoLetterbox";
		case 43:
			return ":index";
		case 44:
			return ":tele";
		case 45:
			return "leadinData/scenes/scene(%i)";
		case 46:
			return ":sceneName";
		case 47:
			return ":sceneIndex";
		case 48:
			return ":sceneRel";
		case 49:
			return ":sceneFoot";
		case 50:
			return "leadinData/entities/entity(%i)";
		case 51:
			return ":model";
		case 52:
			return ":tlVoiceID";
		case 53:
			return ":fVisible";
		case 54:
			return ":weapon";
		case 55:
			return ":forceinhand";
		case 56:
			return ":bDeleteDraftAnimals";
		case 57:
			return "leadinData/behaviours/behaviour(%i)";
		case 58:
			return ":zone";
		case 59:
			return ":when";
		case 60:
			return ":what";
		case 61:
			return ":who";
		case 62:
			return ":syncType";
		case 63:
			return ":loop";
		case 64:
			return ":pause";
		case 65:
			return ":master";
		case 66:
			return ":bezier";
		case 67:
			return ":bezheading";
		case 68:
			return ":fVisible";
		case 69:
			return ":useradoffset";
		case 70:
			return ":radoffset";
		case 71:
			return ":returnlook";
		case 72:
			return ":lookatwho";
		case 73:
			return ":behaviourtype";
		case 74:
			return ":lookatplayer";
		case 75:
			return ":animscene";
		case 76:
			return ":nonavmesh";
		case 77:
			return ":phaseplayerend";
		case 78:
			return ":lookblendin";
		case 79:
			return ":lookblendout";
		case 80:
			return ":foliagemod";
		case 81:
			return ":disableinitloop";
		case 82:
			return "leadinData/cutscenes/cutscene(%i)";
		case 83:
			return ":cutName";
		case 84:
			return ":cutPlaylist";
		case 85:
			return "leadinData/cameras/camera(%i)";
		case 86:
			return ":index";
		case 87:
			return ":bDisabled";
		case 88:
			return ":bUseRightCam";
		case 89:
			return ":bUseLeftCam";
		case 90:
			return ":bUseCenterCam";
		case 91:
			return ":bUseNewCam";
		case 92:
			return ":bFocusOnEntity";
		case 96:
			return ":sCameraDictionaryName";
		case 97:
			return ":sCameraRequestName";
		case 95:
			return ":iNewCamLookAt";
		case 93:
			return ":fNewCamFocusOffsetHorz";
		case 94:
			return ":fNewCamFocusOffsetVert";
		case 98:
			return "leadinData/prepzones/prepzone(%i)";
		case 99:
			return ":vOrigin";
		case 100:
			return ":vRotation";
		case 101:
			return ":vScale";
		case 102:
			return ":eType";
	}
	return "";
}

var func_835(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_836(int iParam0)
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

void func_837(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_894(iParam1);
	}
}

float func_838(int iParam0, int iParam1, bool bParam2)
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
	return func_247(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_839(int iParam0, bool bParam1)
{
	if (!func_485(iParam0))
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
		(*Global_1360165)[iParam0]->f_127 = func_895(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_840(int iParam0)
{
	iVar0 = func_601(iParam0);
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

int func_841(int iParam0, bool bParam1)
{
	if (!func_485(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_896(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_842(int iParam0)
{
	if (!func_485(iParam0))
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

void func_843(int iParam0, int iParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

bool func_844(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_845(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_476(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_846(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_847(int iParam0)
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

bool func_848(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_849(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_850(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_851(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_852(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_853(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_854()
{
	return Global_1946804->f_1;
}

void func_855(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_856(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_857(var uParam0, int iParam1)
{
	if (func_273() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_855(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_856(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_858(int iParam0, int iParam1, int iParam2)
{
	if (func_273() == -1)
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

void func_859(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_860()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_861(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_862()
{
	fVar0 = func_897(13);
	iVar1 = func_898(fVar0);
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

float func_863()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_864()
{
	if (func_899())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_865()
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

float func_866()
{
	return Global_1955565->f_3;
}

void func_867(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_778(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_868(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_778(iParam0, 2, 0, 0);
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

float func_869(float fParam0, float fParam1, float fParam2)
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

bool func_870()
{
	return func_897(12) <= -99f;
}

bool func_871()
{
	return func_897(12) >= 99f;
}

bool func_872(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return false;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return false;
	}
	if (iParam1 == iParam2)
	{
		return true;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	if (!bVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	return false;
}

bool func_873(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_900(iParam0);
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

int func_874(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_901(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_875(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = get_random_int_in_range(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = get_random_int_in_range(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_666(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_876(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return -1496612359;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return -99272505;
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return 41788943;
}

void func_877(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 - (Global_40.f_4942[iParam0]->f_5 && iParam1));
}

bool func_878(int iParam0, bool bParam1)
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

bool func_879()
{
	if (Global_1946804->f_2793)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1946804->f_2791)) < 1250)
	{
		return true;
	}
	if (func_902())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	return false;
}

int func_880()
{
	if (_get_number_of_references_of_script_with_name_hash(-1181125641) > 0)
	{
		return 1;
	}
	return 0;
}

void func_881(int iParam0)
{
	iVar0 = func_742(Global_35, 0, iParam0, 0);
	if (func_306(iVar0))
	{
		if (_0x2c83212a7aa51d3d(iVar0))
		{
			_0xcef4c65de502d367(Global_35, 1, iParam0, 1, 0);
		}
		else if (func_741(iVar0))
		{
			if (func_306(func_742(Global_35, 0, 7, 0)) || func_306(func_742(Global_35, 0, 9, 0)))
			{
				if (func_306(func_742(Global_35, 0, 8, 0)))
				{
					func_903(iVar0);
				}
				else
				{
					set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
				}
			}
			else
			{
				set_current_ped_weapon(Global_35, iVar0, true, 7, false, false);
			}
		}
		else if (_is_weapon_two_handed(iVar0) && iVar0 != -1415022764)
		{
			if (func_306(func_742(Global_35, 0, 7, 0)) || func_306(func_742(Global_35, 0, 9, 0)))
			{
				if (func_306(func_742(Global_35, 0, 10, 0)))
				{
					func_903(iVar0);
				}
				else
				{
					set_current_ped_weapon(Global_35, iVar0, true, 10, false, false);
				}
			}
			else
			{
				set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (iParam0 == 0)
			{
				if (!func_306(func_742(Global_35, 0, 2, 0)))
				{
					set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
				}
				else
				{
					set_current_ped_weapon(Global_35, iVar0, true, 3, false, false);
				}
			}
			else
			{
				set_current_ped_weapon(Global_35, iVar0, true, 3, false, false);
			}
		}
		set_current_ped_weapon(Global_35, -1569615261, true, iParam0, false, false);
	}
}

void func_882(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

Vector3 func_883(var uParam0)
{
	if (func_63(uParam0, 8))
	{
		return uParam0->f_1016[uParam0->f_1684]->f_7;
	}
	if (uParam0->f_1688 >= 0)
	{
		return uParam0->f_1016[uParam0->f_1688]->f_7;
	}
	return 0f, 0f, 0f;
}

void func_884(var uParam0, float fParam1, vector3 vParam2, vector3 vParam5)
{
	*uParam0 = fParam1;
	uParam0->f_4 = { vParam2 };
	uParam0->f_1 = { vParam5 };
}

Vector3 func_885(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9)
{
	vVar0 = { func_904(vParam0, vParam3, fParam9) };
	vVar3 = { func_904(vParam3, vParam6, fParam9) };
	return func_904(vVar0, vVar3, fParam9);
}

Vector3 func_886(var uParam0, int iParam1)
{
	if (uParam0->f_475[iParam1]->f_3 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 35)
		{
			if (!is_entity_dead(uParam0->f_3[iVar0]->f_2) && uParam0->f_475[iParam1]->f_3 == uParam0->f_3[iVar0]->f_3)
			{
				if (!is_entity_a_ped(uParam0->f_3[iVar0]->f_2) || get_ped_index_from_entity_index(uParam0->f_3[iVar0]->f_2) != Global_35)
				{
					return get_entity_coords(uParam0->f_3[iVar0]->f_2, true, false);
				}
			}
			iVar0++;
		}
	}
	return 0f, 0f, 0f;
}

bool func_887(int iParam0, int iParam1, bool bParam2)
{
	if (!func_433(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_633(iParam0);
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
		if (!func_905(iParam0, 1))
		{
			return false;
		}
	}
	return func_906(iParam0, 0, bParam2) >= iParam1;
}

int func_888(int iParam0)
{
	iVar0 = func_434(iParam0);
	if (iVar0 == 81053684 || iVar0 == -525676072)
	{
		return 1;
	}
	return 0;
}

int func_889(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_624(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_890()
{
	iVar0 = 1549701178;
	switch (func_907())
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

int func_891()
{
	iVar0 = 614608656;
	switch (func_907())
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

int func_892()
{
	iVar0 = -1832677570;
	switch (func_907())
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

int func_893()
{
	iVar0 = 1623252156;
	switch (func_907())
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

void func_894(int iParam0)
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

int func_895(int iParam0)
{
	iVar0 = 0;
	if (!func_485(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (Global_1357549->f_1675[iVar1]->f_1 == iParam0)
			{
				(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
				return &(Global_1357549->f_1675[iVar1]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1] != 0 && Global_1357549->f_1675[iVar1]->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_485(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

int func_896(int iParam0)
{
	if (!func_485(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_839(iParam0, 1);
		iVar1 = _0xa00df706c60173d1(iVar0);
		if (Global_40.f_4942[iParam0]->f_7 != 0 && iVar1 != Global_40.f_4942[iParam0]->f_7)
		{
			_0x8bc555034a5a5e8c(iVar0, Global_40.f_4942[iParam0]->f_7);
		}
		(*Global_1360165)[iParam0]->f_126 = _create_persistent_character(iVar0);
		_0xfcc6db8dbe709bc8((*Global_1360165)[iParam0]->f_126);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

float func_897(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_898(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

bool func_899()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_900(int iParam0)
{
	func_908(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

int func_901(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case -426171916:
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
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

bool func_902()
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

void func_903(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		return;
	}
	if (Global_43891)
	{
		return;
	}
	_0xe9bd19f8121ade3e(Global_35, iParam0);
}

Vector3 func_904(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

bool func_905(int iParam0, int iParam1)
{
	if (!func_433(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_909(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_845("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_846(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_306(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_847(iVar1);
				return true;
			}
			iVar3++;
		}
		func_847(iVar1);
	}
	return false;
}

int func_906(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_433(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_633(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_909(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_910(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_476(bParam2), iParam0, 0);
	return uVar2;
}

int func_907()
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
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_741(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_35, true)) && !(is_ped_in_any_vehicle(Global_35, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_741(iVar0)) || iVar0 == 2055893578)
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

int func_908(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_911(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_909(int iParam0, int iParam1)
{
	if (!func_433(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_633(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_640(iParam0, 1399091007))
	{
		func_912(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_910(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_913(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_914(&Var0, func_634(0));
	}
	if (!func_915(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_847(iVar14);
	return uVar15;
}

int func_911(int iParam0, int iParam1)
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

void func_912(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_913(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_914(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_915(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_476(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

