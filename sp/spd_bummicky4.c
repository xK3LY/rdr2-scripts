void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_520 = -1579174863;
	if (has_force_cleanup_occurred(555))
	{
		func_1();
	}
	while (true)
	{
		wait(0);
		func_2(&Local_14);
		func_3(19, 3, Local_14.f_218[0], &uLocal_516, &uLocal_524, Local_14.f_239, 1097859072, 0);
		func_4(&Local_14);
		func_5(&(Local_14.f_218[0]), Local_14.f_230);
		if (Local_14 >= 6 && Local_14 < 67)
		{
			func_6(&Local_14);
			func_7(&Local_14);
		}
		func_8(&Local_14, 3);
		if (does_entity_exist(&(Local_14.f_218[0])))
		{
			if (!func_9(&(Local_14.f_218[0]), 0))
			{
				func_1();
			}
			else if (Local_14 > 2 && Local_14 < 67)
			{
				if (Local_14.f_239 > 50f)
				{
					Local_14.f_242 = func_10(&uLocal_488, &(Local_14.f_129), Local_14.f_218[0], &(Local_14.f_243), 1101004800);
				}
				else
				{
					Local_14.f_242 = func_11(&(Local_14.f_218[0]), 0, &uLocal_488, &(Local_14.f_129), 0, Local_14.f_239);
				}
				if (Local_14.f_242)
				{
					if (Local_14 <= 24)
					{
						func_12(&(Local_14.f_253), 4096);
					}
					if (_does_volume_exist(Local_14.f_224))
					{
						func_13(Local_14.f_224);
						_delete_volume(Local_14.f_224);
					}
					if (_does_volume_exist(Local_14.f_231))
					{
						_delete_volume(Local_14.f_231);
					}
					func_14(&Local_14, 0, 0, 0, 0, 0, 0);
					func_14(&Local_14, 1, 1, 0, 0, 0, 0);
					func_15(&(Local_14.f_296), &(Local_14.f_317));
					func_16(&(Local_14.f_218[0]), 1, 1);
					set_ped_config_flag(&(Local_14.f_218[0]), 130, false);
					func_17(&(Local_14.f_218[0]));
					func_18(&(Local_14.f_136));
					if (!func_19(Local_14.f_253, 131072))
					{
						func_12(&(Local_14.f_253), 131072);
					}
					func_20(&Local_14, 67);
				}
			}
		}
		if ((Local_14 >= 2 && Local_14 <= 36) || Local_14 >= 56)
		{
			func_21(&Local_14);
		}
		if (Local_14 >= 37 && Local_14 <= 56)
		{
			func_22(&Local_14, 65536, 2, 1, 4, 1);
		}
		if (Local_14 >= 28 && Local_14 < 56)
		{
			func_23();
		}
		func_24(&Local_14);
		func_25(&Local_14);
		func_26(&Local_14);
		func_27(&(Local_14.f_218[0]), &(Local_14.f_253), 262144, 19, Local_14.f_239);
		func_28(&Local_14, Local_14.f_246, "b_AnimatePlayer", 0);
		if (Local_14 > 2 && func_9(&(Local_14.f_218[0]), 0))
		{
			if ((is_ped_on_mount(Global_35) && Local_14.f_239 <= 4f) || Local_14 >= 57)
			{
				clear_ragdoll_blocking_flags(&(Local_14.f_218[0]), 262144);
			}
			else if (Local_14 < 57)
			{
				set_ragdoll_blocking_flags(&(Local_14.f_218[0]), 262144);
			}
		}
		switch (Local_14)
		{
			case 0:
				if (!_does_anim_scene_exist(Local_14.f_245))
				{
					Local_14.f_245 = _create_anim_scene(func_29(), 0, func_30(), false, true);
				}
				if (!_does_anim_scene_exist(Local_14.f_246))
				{
					Local_14.f_246 = _create_anim_scene(func_31(), 0, func_32(), false, true);
				}
				Local_14.f_237 = "MICKEY";
				if (!func_19(Local_14.f_253, 32768))
				{
					if ((*Global_1396257)[19]->f_633 == 0)
					{
						func_12(&(Local_14.f_253), 32768);
					}
					else
					{
						func_12(&(Local_14.f_253), 1);
						func_12(&(Local_14.f_253), 32768);
					}
				}
				if ((_does_anim_scene_exist(Local_14.f_245) && _does_anim_scene_exist(Local_14.f_246)) && func_19(Local_14.f_253, 32768))
				{
					load_anim_scene(Local_14.f_245);
					load_anim_scene(Local_14.f_246);
					request_anim_dict(func_33());
					_text_database_request("SPBM");
					_text_database_request("SPCWVAU");
					request_model(iVar518, false);
					func_34(&Local_14);
					func_35(Local_14.f_224, "SP_BumMickey4_Block", 1, 0, 0, 0, -1082130432);
					_0xb56d41a694e42e86(Local_14.f_227, 2500607, 0, 0, -1, -1, 10);
					_0x18262cafebb5fbe1(Local_14.f_227, 0, 0, 0, -1, -1, 0);
					iLocal_519 = func_37(19, 3, 9, func_36(19));
					if (!func_38(iVar517))
					{
					}
					if (func_38(func_37(19, 0, 9, func_36(19))))
					{
						Local_14.f_244 = func_39(func_37(19, 0, 9, func_36(19)));
						Local_14.f_255 = func_40(func_37(19, 0, 9, func_36(19)));
					}
					if (func_41())
					{
						func_42(&uLocal_390, Global_35, "JOHN", 0);
					}
					else
					{
						func_42(&uLocal_390, Global_35, "ARTHUR", 0);
					}
					func_43(&(Local_14.f_195));
					func_44(&uLocal_488);
					func_45(&uLocal_488, 1);
					func_46(&uLocal_488, 1);
					func_47(&uLocal_488, 1);
					func_48(&uLocal_488, 1);
					func_49(&uLocal_488, 1);
					func_50(&uLocal_488, 1);
					func_51(&uLocal_488, 0);
					func_52(&uLocal_488, 1);
					func_53(&uLocal_488, 0);
					func_54(&uLocal_488, 1);
					func_55(&uLocal_488, 1);
					func_56(&uLocal_488, 1);
					func_57(&uLocal_488, 0);
					func_58(&uLocal_488, 0);
					func_59(&uLocal_488, 0);
					func_60(&uLocal_488, 0);
					func_61(&uLocal_488, 1);
					func_20(&Local_14, 1);
				}
				break;
			case 1:
				_0xed9582b3da8f02b4(1);
				if (((((_is_anim_scene_loaded(Local_14.f_245, true, false) && has_anim_dict_loaded(func_33())) && _text_database_has_loaded("SPBM")) && _text_database_has_loaded("SPCWVAU")) && has_model_loaded(iVar518)) && _0x5c16855277819bbf() == 1)
				{
					func_20(&Local_14, 2);
				}
				break;
			case 2:
				if (func_19(Local_14.f_253, 1))
				{
					vVar0 = { func_62(1) };
				}
				else
				{
					vVar0 = { func_62(0) };
				}
				if (func_63(Local_14.f_218[0], iVar518, vVar0, vVar0.f_3, 1, 0, 0))
				{
					if (func_9(&(Local_14.f_218[0]), 0))
					{
						func_64(&(Local_14.f_218[0]), 19);
						add_entity_to_audio_mix_group(&(Local_14.f_218[0]), "special_ped_group", 0f);
						set_blocking_of_non_temporary_events(&(Local_14.f_218[0]), true);
						set_ped_relationship_group_hash(&(Local_14.f_218[0]), -1976316465);
						_0x42cfd8fd8cc8dc69(&(Local_14.f_218[0]), 1);
						set_ped_path_can_use_climbovers(&(Local_14.f_218[0]), false);
						_0x88e32db8c1a4aa4b(&(Local_14.f_218[0]), 20f);
						set_ped_combat_ability(&(Local_14.f_218[0]), 0);
						set_ped_combat_attributes(&(Local_14.f_218[0]), 17, true);
						set_ped_config_flag(&(Local_14.f_218[0]), 130, true);
						set_ped_config_flag(&(Local_14.f_218[0]), 448, true);
						set_ped_config_flag(&(Local_14.f_218[0]), 344, true);
						set_ped_config_flag(&(Local_14.f_218[0]), 174, false);
						set_ped_config_flag(&(Local_14.f_218[0]), 153, true);
						_0xae6004120c18df97(&(Local_14.f_218[0]), 0, 0);
						set_ragdoll_blocking_flags(&(Local_14.f_218[0]), 262144);
						_0x7c015d8bcec72cf4(&(Local_14.f_218[0]), 1);
						func_42(&uLocal_390, &(Local_14.f_218[0]), Local_14.f_237, 0);
						_0x9587913b9e772d29(&(Local_14.f_218[0]), 0);
						set_ped_max_move_blend_ratio(&(Local_14.f_218[0]), 1.5f);
						if (_does_volume_exist(Local_14.f_226))
						{
							_0x7c00cfc48a782dc0(Local_14.f_226, &(Local_14.f_218[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (_does_volume_exist(Local_14.f_227))
						{
							_0x7c00cfc48a782dc0(Local_14.f_227, &(Local_14.f_218[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (_does_volume_exist(Local_14.f_228))
						{
							_0x7c00cfc48a782dc0(Local_14.f_228, &(Local_14.f_218[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (_does_volume_exist(Local_14.f_229))
						{
							_0x7c00cfc48a782dc0(Local_14.f_229, &(Local_14.f_218[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (_does_volume_exist(Local_14.f_231))
						{
							_0x7c00cfc48a782dc0(Local_14.f_231, &(Local_14.f_218[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (Local_14.f_244 < 0)
						{
							Local_14.f_244 = 0;
						}
						func_65(Local_14.f_227, 0, 0, 0);
						func_66(&uLocal_521, vVar0, 5f, 5f, 5f);
						if (func_19(Local_14.f_253, 1))
						{
							set_anim_scene_origin(Local_14.f_245, func_67(), func_68(), 2);
						}
						else
						{
							set_anim_scene_origin(Local_14.f_245, func_69(), func_70(), 2);
						}
						set_anim_scene_entity(Local_14.f_245, "cs_mickey", &(Local_14.f_218[0]), 0);
						set_anim_scene_entity(Local_14.f_246, "CS_MICKEY", &(Local_14.f_218[0]), 0);
						set_anim_scene_entity(Local_14.f_246, "ARTHUR", Global_35, 0);
						_0x7c00cfc48a782dc0(Local_14.f_230, &(Local_14.f_218[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						if (!func_71(&uLocal_523))
						{
							uLocal_523 = _0xfa50f79257745e74(vVar0, 1.5f, 2, -1, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MICKEY"));
						func_20(&Local_14, 21);
					}
				}
				break;
			case 6:
				if (_does_volume_exist(Local_14.f_228) && !is_entity_dead(Global_35))
				{
					if ((((is_entity_in_volume(Global_35, Local_14.f_228, true, 0) && !func_19(Local_14.f_253, 16384)) && get_entity_speed(Global_35) <= 5.5f) && !is_scripted_speech_playing(&(Local_14.f_218[0]))) && has_entity_clear_los_to_entity_in_front(&(Local_14.f_218[0]), Global_35, 17))
					{
						func_20(&Local_14, func_72());
					}
					else if (_does_anim_scene_exist(Local_14.f_245))
					{
						if (_is_anim_scene_started(Local_14.f_245, false) && has_anim_event_fired(&(Local_14.f_218[0]), -1527527524))
						{
							func_73(&Local_14, &(Local_14.f_244), 0);
							func_74(&(Local_14.f_133));
						}
					}
				}
				break;
			case 21:
				if (!func_75(&(Local_14.f_195)))
				{
					if (func_19(Local_14.f_253, 16777216))
					{
						func_76(&Local_14, &(Local_14.f_245), func_30(), 1, 0, 1, 1, 1);
					}
					else if ((_does_volume_exist(Local_14.f_228) && !is_entity_dead(Global_35)) && !is_entity_dead(&(Local_14.f_218[0])))
					{
						if ((((is_entity_in_volume(Global_35, Local_14.f_228, true, 0) && !func_19(Local_14.f_253, 16384)) && get_entity_speed(Global_35) <= 5.5f) && !is_scripted_speech_playing(&(Local_14.f_218[0]))) && has_entity_clear_los_to_entity_in_front(&(Local_14.f_218[0]), Global_35, 17))
						{
							func_20(&Local_14, func_72());
						}
						else if (func_76(&Local_14, &(Local_14.f_245), func_30(), 1, 0, 1, 1, 1))
						{
							func_20(&Local_14, 6);
						}
					}
				}
				break;
			case 28:
				func_77(Local_14.f_317[0], 0, 0);
				func_77(Local_14.f_317[1], 0, 0);
				if (!func_19(Local_14.f_253, 32))
				{
					func_12(&(Local_14.f_253), 32);
				}
				if (!is_scripted_speech_playing(Global_35))
				{
					task_look_at_entity(&(Local_14.f_218[0]), Global_35, -1, 0, 51, 0);
					if (func_76(&Local_14, &(Local_14.f_245), func_78(), 1, 0, 0, 1, 1))
					{
						if (!func_79(&(Local_14.f_218[0]), 1682639051))
						{
							func_80(&(Local_14.f_218[0]), Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432, -1082130432, 1);
							func_81(&(Local_14.f_353));
							func_12(&(Local_14.f_253), 536870912);
						}
						else
						{
							func_12(&(Local_14.f_253), 8192);
							func_20(&Local_14, 35);
						}
					}
				}
				break;
			case 29:
				func_77(Local_14.f_317[0], 0, 0);
				func_77(Local_14.f_317[1], 0, 0);
				if (!func_19(Local_14.f_253, 32))
				{
					func_12(&(Local_14.f_253), 32);
				}
				if (!is_scripted_speech_playing(Global_35))
				{
					task_look_at_entity(&(Local_14.f_218[0]), Global_35, -1, 0, 51, 0);
					if (func_76(&Local_14, &(Local_14.f_245), func_82(), 1, 0, 0, 1, 1))
					{
						if (!func_79(&(Local_14.f_218[0]), 1682639051))
						{
							func_80(&(Local_14.f_218[0]), Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432, -1082130432, 1);
							func_81(&(Local_14.f_353));
							func_12(&(Local_14.f_253), 536870912);
						}
						else
						{
							func_12(&(Local_14.f_253), 8192);
							func_20(&Local_14, 35);
						}
					}
				}
				break;
			case 30:
				func_77(Local_14.f_317[0], 0, 0);
				func_77(Local_14.f_317[1], 0, 0);
				if (!func_19(Local_14.f_253, 32))
				{
					func_12(&(Local_14.f_253), 32);
				}
				if (!is_scripted_speech_playing(Global_35))
				{
					task_look_at_entity(&(Local_14.f_218[0]), Global_35, -1, 0, 51, 0);
					if (func_76(&Local_14, &(Local_14.f_245), func_83(), 1, 0, 0, 1, 1))
					{
						func_12(&(Local_14.f_253), 8192);
						func_20(&Local_14, 35);
					}
				}
				break;
			case 22:
				if (func_76(&Local_14, &(Local_14.f_245), func_84(), 1, 0, 1, 1, 1))
				{
					func_12(&(Local_14.f_253), 8192);
					func_20(&Local_14, 21);
				}
				break;
			case 23:
				if (func_76(&Local_14, &(Local_14.f_245), func_85(), 1, 0, 1, 1, 1))
				{
					func_12(&(Local_14.f_253), 8192);
					func_20(&Local_14, 21);
				}
				break;
			case 24:
				if (func_76(&Local_14, &(Local_14.f_245), func_86(), 1, 0, 1, 1, 1))
				{
					func_12(&(Local_14.f_253), 8192);
					func_20(&Local_14, 21);
				}
				break;
			case 20:
				if (func_76(&Local_14, &(Local_14.f_245), func_87(), 1, 0, 1, 1, 1))
				{
					func_12(&(Local_14.f_253), 8192);
					func_20(&Local_14, 21);
				}
				break;
			case 7:
				if (func_76(&Local_14, &(Local_14.f_245), func_88(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 8:
				if (func_76(&Local_14, &(Local_14.f_245), func_89(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 9:
				if (func_76(&Local_14, &(Local_14.f_245), func_90(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 10:
				if (func_76(&Local_14, &(Local_14.f_245), func_91(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 11:
				if (func_76(&Local_14, &(Local_14.f_245), func_92(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 12:
				if (func_76(&Local_14, &(Local_14.f_245), func_93(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 13:
				if (func_76(&Local_14, &(Local_14.f_245), func_94(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 14:
				if (func_76(&Local_14, &(Local_14.f_245), func_95(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 15:
				if (func_76(&Local_14, &(Local_14.f_245), func_96(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 16:
				if (func_76(&Local_14, &(Local_14.f_245), func_97(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 17:
				if (func_76(&Local_14, &(Local_14.f_245), func_98(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 18:
				if (func_76(&Local_14, &(Local_14.f_245), func_99(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 19:
				if (func_76(&Local_14, &(Local_14.f_245), func_100(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 5:
				break;
			case 36:
				if (func_101(&Local_14))
				{
					func_20(&Local_14, 57);
				}
				if (((_does_volume_exist(Local_14.f_229) && _does_volume_exist(Local_14.f_226)) && !is_entity_dead(Global_35)) && !is_entity_dead(&(Local_14.f_218[0])))
				{
					if (is_entity_in_volume(Global_35, Local_14.f_229, true, 0))
					{
						if (_does_anim_scene_exist(Local_14.f_245))
						{
							if (_is_anim_scene_started(Local_14.f_245, false) && has_anim_event_fired(&(Local_14.f_218[0]), -1527527524))
							{
								func_76(&Local_14, &(Local_14.f_246), func_32(), 0, 0, 0, 0, 1);
								func_20(&Local_14, 37);
							}
						}
					}
				}
				break;
			case 35:
				if (func_101(&Local_14))
				{
					func_20(&Local_14, 57);
				}
				if ((_does_volume_exist(Local_14.f_229) && !is_entity_dead(Global_35)) && !is_entity_dead(&(Local_14.f_218[0])))
				{
					if ((is_entity_in_volume(Global_35, Local_14.f_229, true, 0) && func_19(Local_14.f_253, 8192)) && !is_scripted_speech_playing(&(Local_14.f_218[0])))
					{
						func_20(&Local_14, 36);
					}
					else if (func_76(&Local_14, &(Local_14.f_245), func_102(), 0, 1, 1, 1, 1))
					{
						func_20(&Local_14, 36);
					}
				}
				break;
			case 37:
				if (func_101(&Local_14))
				{
					reset_anim_scene(Local_14.f_245, 0);
					if (!func_19(Local_14.f_254, 1))
					{
						func_12(&(Local_14.f_254), 1);
					}
					if (!func_19(Local_14.f_254, 4))
					{
						func_12(&(Local_14.f_254), 4);
					}
					func_20(&Local_14, 51);
				}
				if (func_103(Local_14.f_218[0]) && _is_anim_scene_finished(Local_14.f_246, false))
				{
					if (_does_volume_exist(Local_14.f_229))
					{
						if ((is_entity_in_volume(Global_35, Local_14.f_229, true, 0) && func_19(Local_14.f_253, 8192)) && !is_scripted_speech_playing(&(Local_14.f_218[0])))
						{
							reset_anim_scene(Local_14.f_246, func_104());
							func_20(&Local_14, 51);
						}
					}
				}
				break;
			case 31:
				if (func_76(&Local_14, &(Local_14.f_245), func_105(), 1, 0, 0, 1, 1))
				{
					func_20(&Local_14, 35);
				}
				break;
			case 32:
				if (func_76(&Local_14, &(Local_14.f_245), func_106(), 1, 0, 0, 1, 1))
				{
					func_20(&Local_14, 35);
				}
				break;
			case 33:
				if (func_76(&Local_14, &(Local_14.f_245), func_107(), 0, 1, 0, 1, 1))
				{
					func_20(&Local_14, 35);
				}
				break;
			case 34:
				if (func_76(&Local_14, &(Local_14.f_245), func_108(), 1, 0, 0, 1, 1))
				{
					func_20(&Local_14, 35);
				}
				break;
			case 51:
				func_109(&uLocal_522, 1);
				func_110(Global_35);
				if (func_111(&(Local_14.f_246)))
				{
					if (!_0x23e33cb9f4a3f547(Local_14.f_246, func_104()) && !_0x0df57f86fe71dbe5(Local_14.f_246, func_104()))
					{
						_0xdf7b5144e25cd3fe(Local_14.f_246, func_104());
					}
					if (!_0x23e33cb9f4a3f547(Local_14.f_246, func_112()) && !_0x0df57f86fe71dbe5(Local_14.f_246, func_112()))
					{
						_0xdf7b5144e25cd3fe(Local_14.f_246, func_112());
					}
				}
				if (func_101(&Local_14) && !func_19(Local_14.f_254, 4))
				{
					reset_anim_scene(Local_14.f_245, 0);
					if (!func_19(Local_14.f_254, 4))
					{
						func_12(&(Local_14.f_254), 4);
					}
					func_20(&Local_14, 57);
				}
				if (!func_19(Local_14.f_254, 64))
				{
					func_14(&Local_14, 0, 11, 1, 1, 0, 0);
					func_14(&Local_14, 1, 10, 1, 1, 0, 0);
					func_114(&Local_14, func_113(2, 0, 0), 1);
					func_12(&(Local_14.f_254), 64);
				}
				if (func_19(Local_14.f_254, 1))
				{
					set_ped_can_play_gesture_anims(&(Local_14.f_218[0]), 1, 1);
					func_115(Global_35, &(Local_14.f_218[0]), &(Local_14.f_156), 0f, 0f, 0f, 0, 0, 1, 1069547520, -1082130432, 1073069561, 1056964608, 1092616192, -1, 1, 0, 0, 0, 1);
					if (!func_79(&(Local_14.f_218[0]), 1682639051))
					{
						func_81(&(Local_14.f_353));
						func_80(&(Local_14.f_218[0]), Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432, -1082130432, 1);
					}
					func_12(&(Local_14.f_253), 536870912);
					if (!_is_anim_scene_started(Local_14.f_246, false))
					{
						set_anim_scene_entity(Local_14.f_246, "CS_MICKEY", &(Local_14.f_218[0]), 0);
						set_anim_scene_entity(Local_14.f_246, "ARTHUR", Global_35, 0);
						_set_anim_scene_playback_list_bool(Local_14.f_246, func_112(), true);
						start_anim_scene(Local_14.f_246);
					}
					func_116(&(Local_14.f_218[0]), Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
					if (func_79(&(Local_14.f_218[0]), 1682639051) && _is_anim_scene_finished(Local_14.f_246, false))
					{
						reset_anim_scene(Local_14.f_246, func_117());
						func_20(&Local_14, 56);
					}
				}
				else if (func_19(Local_14.f_254, 2))
				{
					set_ped_can_play_gesture_anims(&(Local_14.f_218[0]), 1, 1);
					func_115(Global_35, &(Local_14.f_218[0]), &(Local_14.f_156), 0f, 0f, 0f, 0, 0, 1, 1069547520, -1082130432, 1073069561, 1056964608, 1092616192, -1, 1, 0, 0, 0, 1);
					if (!func_79(&(Local_14.f_218[0]), 1682639051))
					{
						func_81(&(Local_14.f_353));
						func_80(&(Local_14.f_218[0]), Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432, -1082130432, 1);
					}
					func_12(&(Local_14.f_253), 536870912);
					if (!_is_anim_scene_started(Local_14.f_246, false))
					{
						set_anim_scene_entity(Local_14.f_246, "CS_MICKEY", &(Local_14.f_218[0]), 0);
						set_anim_scene_entity(Local_14.f_246, "ARTHUR", Global_35, 0);
						_set_anim_scene_playback_list_bool(Local_14.f_246, func_104(), true);
						start_anim_scene(Local_14.f_246);
					}
					func_118(&Local_14, Local_14.f_246, func_104(), 0.82f);
					func_116(&(Local_14.f_218[0]), Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
					if (func_79(&(Local_14.f_218[0]), 1682639051) && _is_anim_scene_finished(Local_14.f_246, false))
					{
						reset_anim_scene(Local_14.f_246, func_117());
						func_20(&Local_14, 56);
					}
				}
				break;
			case 56:
				if (func_101(&Local_14))
				{
					func_20(&Local_14, 57);
				}
				func_110(Global_35);
				func_116(&(Local_14.f_218[0]), Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				if (func_111(&(Local_14.f_246)))
				{
					if (!_is_anim_scene_started(Local_14.f_246, false))
					{
						set_anim_scene_entity(Local_14.f_246, "CS_MICKEY", &(Local_14.f_218[0]), 0);
						set_anim_scene_entity(Local_14.f_246, "ARTHUR", Global_35, 0);
						start_anim_scene(Local_14.f_246);
					}
					if (_is_anim_scene_finished(Local_14.f_246, false))
					{
						if (func_19(Local_14.f_254, 2))
						{
							if (func_119(Local_14.f_218[0]))
							{
								reset_anim_scene(Local_14.f_245, 0);
								func_20(&Local_14, 57);
							}
						}
						else if (func_19(Local_14.f_254, 1))
						{
							if (func_119(Local_14.f_218[0]))
							{
								reset_anim_scene(Local_14.f_245, 0);
								func_20(&Local_14, 57);
							}
						}
					}
				}
				break;
			case 57:
				if (!func_19(Local_14.f_253, 128))
				{
					if (!func_19(Local_14.f_253, 16384))
					{
						func_120(19, 4);
						Global_40.f_11623[19]->f_3 = func_121();
						func_12(&(Local_14.f_253), 16384);
					}
				}
				if (!Local_14.f_373)
				{
					if (func_19(Local_14.f_253, 536870912) && !func_19(Local_14.f_253, 1073741824))
					{
						func_122(&(Local_14.f_218[0]), 1);
						func_123(Global_35, 1);
						func_124(&(Local_14.f_353));
						func_12(&(Local_14.f_253), 1073741824);
						Local_14.f_373 = 1;
					}
				}
				set_blocking_of_non_temporary_events(&(Local_14.f_218[0]), false);
				set_ped_config_flag(&(Local_14.f_218[0]), 448, false);
				set_ped_config_flag(&(Local_14.f_218[0]), 153, false);
				if (func_125(&Local_14, Local_14.f_218[0], 0))
				{
					func_12(&(Local_14.f_253), 256);
					func_20(&Local_14, 69);
				}
				if (_does_anim_scene_exist(Local_14.f_245) && !is_scripted_speech_playing(&(Local_14.f_218[0])))
				{
					_delete_anim_scene(Local_14.f_245);
				}
				if (_does_anim_scene_exist(Local_14.f_246) && !is_scripted_speech_playing(&(Local_14.f_218[0])))
				{
					_delete_anim_scene(Local_14.f_246);
				}
				break;
			case 65:
				if (!func_101(&Local_14))
				{
					func_20(&Local_14, 37);
				}
				break;
			case 66:
				break;
			case 67:
				if (func_126(&(Local_14.f_136)) > 0.6f)
				{
					if (func_19(Local_14.f_253, 4096))
					{
						if (_does_anim_scene_exist(Local_14.f_245) && _is_anim_scene_started(Local_14.f_245, false))
						{
							func_76(&Local_14, &(Local_14.f_245), func_127(), 0, 0, 0, 1, 0);
						}
						else
						{
							func_128(&(Local_14.f_253), 4096);
						}
					}
					else
					{
						if (!func_19(Local_14.f_253, 524288))
						{
							if (_is_anim_scene_started(Local_14.f_246, false))
							{
								reset_anim_scene(Local_14.f_246, 0);
							}
							if (func_129(&(Local_14.f_218[0]), "PANIC_HELP", -1021994891, 0, Local_14.f_237, 0))
							{
								func_12(&(Local_14.f_253), 524288);
							}
						}
						if (!is_ped_fleeing(&(Local_14.f_218[0])))
						{
							set_ped_combat_attributes(&(Local_14.f_218[0]), 17, true);
							_task_smart_flee_style_ped(&(Local_14.f_218[0]), Global_35, 3, 1, 6000f, -1, 0);
							set_ped_keep_task(&(Local_14.f_218[0]), true);
							set_ped_config_flag(&(Local_14.f_218[0]), 448, false);
							set_ped_config_flag(&(Local_14.f_218[0]), 153, false);
						}
					}
				}
				if (Local_14.f_239 >= 200f)
				{
					if (!_0x5102307ce88798eb(&(Local_14.f_218[0])))
					{
						request_ped_visibility_tracking(&(Local_14.f_218[0]));
					}
					if (!is_tracked_ped_visible(&(Local_14.f_218[0])))
					{
						if (does_entity_exist(&(Local_14.f_218[0])))
						{
							if (func_19(Local_14.f_253, 536870912) && !func_19(Local_14.f_253, 1073741824))
							{
								func_122(&(Local_14.f_218[0]), 1);
								func_123(Global_35, 1);
								func_124(&(Local_14.f_353));
								func_12(&(Local_14.f_253), 1073741824);
							}
							remove_entity_from_audio_mix_group(&(Local_14.f_218[0]), 0f);
							delete_ped(Local_14.f_218[0]);
						}
						func_130(&Local_14);
					}
				}
				break;
			case 69:
				break;
			case 68:
				if (Local_14.f_239 <= 6f && func_19(Local_14.f_253, 131072))
				{
					set_ped_desired_move_blend_ratio(&(Local_14.f_218[0]), 2.5f);
				}
				else
				{
					set_ped_desired_move_blend_ratio(&(Local_14.f_218[0]), 1f);
				}
				break;
			default:
				break;
		}
		if (func_38(iVar517))
		{
			switch (Local_14)
			{
				case 57:
				case 69:
					if (!_0x5102307ce88798eb(&(Local_14.f_218[0])))
					{
						request_ped_visibility_tracking(&(Local_14.f_218[0]));
					}
					if (Local_14.f_239 > 100f && !is_tracked_ped_visible(&(Local_14.f_218[0])))
					{
						if (does_entity_exist(&(Local_14.f_218[0])))
						{
							if (func_19(Local_14.f_253, 536870912) && !func_19(Local_14.f_253, 1073741824))
							{
								func_122(&(Local_14.f_218[0]), 1);
								func_123(Global_35, 1);
								func_124(&(Local_14.f_353));
								func_12(&(Local_14.f_253), 1073741824);
							}
							remove_entity_from_audio_mix_group(&(Local_14.f_218[0]), 0f);
							delete_ped(Local_14.f_218[0]);
						}
						func_130(&Local_14);
					}
					break;
			}
		}
	}
}

void func_1()
{
	func_131(19);
	func_109(&uLocal_522, 1);
	func_132(&uLocal_521);
	if (func_19(Local_14.f_253, 536870912) && !func_19(Local_14.f_253, 1073741824))
	{
		func_124(&(Local_14.f_353));
		func_123(Global_35, 1);
		if (func_9(&(Local_14.f_218[0]), 0))
		{
			func_122(&(Local_14.f_218[0]), 1);
		}
		func_12(&(Local_14.f_253), 1073741824);
	}
	if (func_9(&(Local_14.f_218[0]), 0))
	{
		remove_entity_from_audio_mix_group(&(Local_14.f_218[0]), 0f);
		_0x39a2fc5af55a52b1(&(Local_14.f_218[0]), -1);
		set_ped_as_no_longer_needed(Local_14.f_218[0]);
	}
	if (_does_anim_scene_exist(Local_14.f_245))
	{
		_delete_anim_scene(Local_14.f_245);
	}
	if (_does_anim_scene_exist(Local_14.f_246))
	{
		_delete_anim_scene(Local_14.f_246);
	}
	if (func_71(&uLocal_523))
	{
		_0x9cf1836c03fb67a2(&uLocal_523, 0);
	}
	if (_does_volume_exist(Local_14.f_224))
	{
		func_13(Local_14.f_224);
		_delete_volume(Local_14.f_224);
	}
	if (_does_volume_exist(Local_14.f_227))
	{
		_0x74c2b3dc0b294102(Local_14.f_227);
		_0xa1cfb35069d23c23(Local_14.f_227);
		_delete_volume(Local_14.f_227);
	}
	if (_does_volume_exist(Local_14.f_226))
	{
		_0x74c2b3dc0b294102(Local_14.f_226);
		_0xa1cfb35069d23c23(Local_14.f_226);
		_delete_volume(Local_14.f_226);
	}
	if (_does_volume_exist(Local_14.f_229))
	{
		_delete_volume(Local_14.f_229);
	}
	if (_does_volume_exist(Local_14.f_225))
	{
		_delete_volume(Local_14.f_225);
	}
	if (_does_volume_exist(Local_14.f_230))
	{
		_delete_volume(Local_14.f_230);
	}
	if (_does_volume_exist((*(*Global_1396257)[19])[3]->f_47))
	{
		_delete_volume((*(*Global_1396257)[19])[3]->f_47);
	}
	func_133(&Local_14);
	if (_text_database_has_loaded("SPBM"))
	{
		_text_database_delete("SPBM");
	}
	if (_text_database_has_loaded("SPCWVAU"))
	{
		_text_database_delete("SPCWVAU");
	}
	terminate_this_thread();
}

void func_2(int iParam0)
{
	if ((func_134(19, &(iParam0->f_218[0]), 1, 1) && (*iParam0 > 2 && *iParam0 < 67)) || (get_interior_from_entity(Global_35) != 0 && (*iParam0 > 2 && *iParam0 < 67)))
	{
		if (*iParam0 > 30)
		{
			if (!func_19(iParam0->f_253, 256))
			{
				if (*iParam0 != 57)
				{
					func_14(iParam0, 0, 0, 0, 0, 0, 0);
					func_14(iParam0, 1, 1, 0, 0, 0, 0);
					func_20(iParam0, 57);
					if (!func_19(iParam0->f_253, 65536))
					{
						func_12(&(iParam0->f_253), 128);
					}
				}
			}
		}
		else if (*iParam0 < 30)
		{
			if (!func_19(iParam0->f_253, 16777216))
			{
				func_12(&(iParam0->f_253), 16777216);
				func_20(iParam0, 21);
			}
		}
	}
	else if (func_19(iParam0->f_253, 16777216))
	{
		func_128(&(iParam0->f_253), 16777216);
	}
}

int func_3(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return 0;
	}
	if (is_entity_dead(*uParam2) || Global_1935630->f_12)
	{
		return 0;
	}
	if (bParam7)
	{
		if (is_scripted_speech_playing(*uParam2))
		{
			Global_40.f_11623[iParam0]->f_5++;
			Global_40.f_11623[iParam0]->f_2 = func_121();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_135(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_136(uParam3))
	{
		func_137(uParam3, 0f);
	}
	else if (func_138(uParam3) >= 2f)
	{
		if (!func_139(Global_40.f_11623[iParam0]->f_2))
		{
			func_140(iParam0);
			*uParam4 = 1;
			func_74(uParam3);
			return 1;
		}
		else
		{
			func_140(iParam0);
			*uParam4 = 1;
			func_74(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_4(var uParam0)
{
	if (!func_136(&(uParam0->f_148)))
	{
		func_137(&(uParam0->f_148), 0f);
	}
	else if (func_141(&(uParam0->f_148)) >= 1000)
	{
		uParam0->f_239 = get_distance_between_coords(get_entity_coords(&(uParam0->f_218[0]), true, false), func_142(get_player_index()), false);
		func_74(&(uParam0->f_148));
	}
}

void func_5(int iParam0, int iParam1)
{
	if (func_143(iParam0))
	{
		if (func_144(Global_35, iParam1, 0, 1))
		{
			_0x785177e4d57d7389(player_id(), 1714017012, 0, 0, -1);
		}
	}
}

void func_6(int iParam0)
{
	if (is_entity_dead(Global_35))
	{
		bVar0 = true;
	}
	if (*iParam0 == 57)
	{
		bVar0 = true;
	}
	if (func_9(&(iParam0->f_218[0]), 0))
	{
		if (func_144(Global_35, iParam0->f_226, 0, 1))
		{
			if (!func_19(iParam0->f_253, 33554432))
			{
				task_look_at_entity(Global_35, &(iParam0->f_218[0]), -1, 2108, 51, 0);
				func_12(&(iParam0->f_253), 33554432);
			}
		}
		else
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
		if (func_19(iParam0->f_253, 33554432))
		{
			func_145(Global_35);
			func_128(&(iParam0->f_253), 33554432);
		}
	}
}

void func_7(int iParam0)
{
	if (*iParam0 >= 6 && *iParam0 <= 30)
	{
		return;
	}
	if (does_entity_exist(&(iParam0->f_218[0])))
	{
		if (func_9(&(iParam0->f_218[0]), 0))
		{
			set_ped_max_move_blend_ratio(&(iParam0->f_218[0]), 1.5f);
		}
	}
}

void func_8(int iParam0, int iParam1)
{
	if ((get_frame_count() % 30) == 0)
	{
		if (func_146(19, iParam1, &(iParam0->f_195), &(iParam0->f_218[0])))
		{
			iParam0->f_372 = 1;
			if (func_147(&(iParam0->f_195)))
			{
				func_130(iParam0);
			}
		}
		if (*iParam0 == 21)
		{
			if (iParam0->f_372)
			{
				if (func_75(&(iParam0->f_195)))
				{
					if (!func_147(&(iParam0->f_195)))
					{
						if (_does_anim_scene_exist(iParam0->f_245) && _is_anim_scene_started(iParam0->f_245, false))
						{
							func_76(iParam0, &(iParam0->f_245), func_127(), 0, 0, 0, 1, 0);
						}
						else
						{
							func_12(&(iParam0->f_253), 128);
							func_20(iParam0, 57);
						}
					}
				}
			}
		}
		if (!func_9(Global_35, 0))
		{
			func_130(iParam0);
		}
		else if (!is_entity_in_volume(Global_35, func_148(76), true, 0))
		{
			if (!func_136(&(iParam0->f_130)))
			{
				func_149(&(iParam0->f_130), 0);
			}
			else if (func_138(&(iParam0->f_130)) > 10f)
			{
				func_74(&(iParam0->f_130));
				func_130(iParam0);
			}
		}
	}
}

bool func_9(int iParam0, int iParam1)
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

int func_10(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	if (!does_entity_exist(*uParam2))
	{
		return 0;
	}
	if (is_ped_dead_or_dying(*uParam2, true))
	{
		*uParam1 = 1;
		return 1;
	}
	if (Global_1935630->f_39 > 0 || _0x285d36c5c72b0569(Global_35) <= 1f)
	{
		if (func_11(*uParam2, 0, uParam0, uParam1, 0, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (*uParam3 < 0 || *uParam3 > 4)
	{
		*uParam3 = 0;
	}
	switch (*uParam3)
	{
		case 0:
			*uParam3++;
			if ((has_entity_been_damaged_by_any_ped(*uParam2) || has_entity_been_damaged_by_any_object(*uParam2)) || has_entity_been_damaged_by_any_vehicle(*uParam2))
			{
				*uParam1 = 2;
				return 1;
			}
			break;
		case 1:
			*uParam3++;
			if (_0x9c81338b2e62ce0a(player_id(), *uParam2, 1000))
			{
				*uParam1 = 4;
				return 1;
			}
			break;
		case 2:
			*uParam3++;
			if (is_shocking_event_in_sphere(217247011, get_entity_coords(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 3:
			*uParam3++;
			if (is_shocking_event_in_sphere(956330317, get_entity_coords(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 4:
			*uParam3 = 0;
			if (is_shocking_event_in_sphere(-966930978, get_entity_coords(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
	}
	return 0;
}

bool func_11(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_150(uParam2, 1, iVar0);
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
			if (func_151(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_152(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_153(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_152(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_154(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_152(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_155(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_152(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_156(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_152(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_157(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_158(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_152(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_159(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_152(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_160(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_152(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_160(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_152(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_161(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_152(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_162(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_152(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_163(uParam2, 4000))
				{
					if ((func_164(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_165(uParam2, iParam0)) && func_166(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_152(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_164(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_165(uParam2, iParam0)) && func_166(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_152(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_167(iParam0, Global_1935630->f_41))
							{
								func_168();
								*uParam3 = 2;
								func_152(iParam0, uParam2, *uParam3);
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
						if (func_167(iParam0, Global_1935630->f_41))
						{
							func_168();
							*uParam3 = 2;
							func_152(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_169(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_170() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_168();
						*uParam3 = 2;
						func_152(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_171())
					{
						if (func_167(iParam0, Global_1935630->f_42))
						{
							func_168();
							*uParam3 = 2;
							func_152(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_172(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_152(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_173(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_152(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_174(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_152(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_175(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_152(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_176(uParam2, 4000))
				{
					if (func_177(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_152(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_178(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_152(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_179(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_152(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_12(var uParam0, int iParam1)
{
	func_180(uParam0, iParam1);
}

void func_13(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_181(vVar0, 0);
}

void func_14(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	Var0 = { func_182(iParam2) };
	iParam0->f_317[iParam1]->f_13 = "";
	func_183(iParam0->f_317[iParam1], Var0);
	func_77(iParam0->f_317[iParam1], bParam3, 0);
	func_184(iParam0->f_317[iParam1], bParam6);
	if (bParam4)
	{
		func_137(&(iParam0->f_145), 0f);
	}
	else if (bParam5)
	{
		fVar2 = func_126(&(iParam0->f_145));
		fVar2 = (fVar2 - 5f);
		if (fVar2 <= 0f)
		{
			fVar2 = 0f;
		}
		func_137(&(iParam0->f_145), fVar2);
	}
}

void func_15(int* iParam0, var uParam1)
{
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_185(iParam0, uParam1, 1);
	func_186(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_16(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

void func_17(int iParam0)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	_0xa3db37edf9a74635(player_id(), iParam0, 7, 0, 1);
	_0xa3db37edf9a74635(player_id(), iParam0, 3, 2, 1);
	_0xa3db37edf9a74635(player_id(), iParam0, 4, 2, 1);
}

void func_18(var uParam0)
{
	func_137(uParam0, 0f);
}

bool func_19(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_20(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 30:
			_hide_ped_weapons(Global_35, 2, false);
			break;
		case 57:
			func_77(iParam0->f_317[0], 0, 0);
			func_77(iParam0->f_317[1], 0, 0);
			if (!func_19(iParam0->f_253, 32))
			{
				func_12(&(iParam0->f_253), 32);
			}
			func_145(&(iParam0->f_218[0]));
			func_145(Global_35);
			break;
		case 67:
			func_145(&(iParam0->f_218[0]));
			func_145(Global_35);
			func_140(19);
			set_ped_config_flag(&(iParam0->f_218[0]), 448, false);
			set_ped_config_flag(&(iParam0->f_218[0]), 153, false);
			break;
	}
	*iParam0 = iParam1;
}

void func_21(int iParam0)
{
	iVar0 = 0;
	if (is_entity_dead(&(iParam0->f_218[0])))
	{
		return;
	}
	if (!func_19(iParam0->f_253, 2))
	{
		func_187(iParam0);
		func_12(&(iParam0->f_253), 2);
	}
	if (iParam0->f_239 > 20f)
	{
		return;
	}
	iVar1 = func_188(iParam0->f_218[0], &(iParam0->f_296), 15f, &(iParam0->f_317), &iVar0, 0f, 2, 0, 0, iParam0->f_352, 0, 0, 2, 1, iParam0->f_239, 0);
	if (func_19(iParam0->f_253, 32))
	{
		return;
	}
	if (func_19(iParam0->f_253, 16777216))
	{
		if (func_189(iParam0->f_317[0], 1, 0))
		{
			func_77(iParam0->f_317[0], 0, 0);
		}
		if (func_189(iParam0->f_317[1], 1, 0))
		{
			func_77(iParam0->f_317[1], 0, 0);
		}
		return;
	}
	if (iParam0->f_239 < 15f)
	{
		if (!func_19(iParam0->f_253, 1048576))
		{
			func_77(iParam0->f_317[0], 1, 0);
			func_77(iParam0->f_317[1], 1, 0);
			func_12(&(iParam0->f_253), 1048576);
		}
	}
	else if (func_19(iParam0->f_253, 1048576))
	{
		func_77(iParam0->f_317[0], 0, 0);
		func_77(iParam0->f_317[1], 0, 0);
		func_128(&(iParam0->f_253), 1048576);
	}
	switch (iVar1)
	{
		case 0:
			func_74(&(iParam0->f_145));
			func_12(&(iParam0->f_253), 32);
			func_20(iParam0, func_72());
			func_77(iParam0->f_317[0], 0, 0);
			func_77(iParam0->f_317[1], 0, 0);
			break;
		case 1:
			iParam0->f_255++;
			func_74(&(iParam0->f_145));
			func_12(&(iParam0->f_253), 32);
			func_20(iParam0, func_72());
			func_77(iParam0->f_317[0], 0, 0);
			func_77(iParam0->f_317[1], 0, 0);
			break;
	}
}

void func_22(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (is_entity_dead(&(iParam0->f_218[0])))
	{
		return;
	}
	iVar0 = func_190(iParam0->f_218[0], &(iParam0->f_296), 15f, &(iParam0->f_317), 0f, 2, 0, "", iParam0->f_352, 0, 0, 2, -1082130432);
	if (func_19(iParam0->f_254, iParam4))
	{
		return;
	}
	if (func_19(iParam0->f_253, 134217728))
	{
		iVar0 = 1;
	}
	switch (iVar0)
	{
		case 0:
			if (!func_19(iParam0->f_254, iParam2))
			{
				func_77(iParam0->f_317[1], 0, 0);
				func_77(iParam0->f_317[0], 0, 0);
				if (bParam5)
				{
					func_14(iParam0, 0, 0, 0, 0, 0, 0);
					func_14(iParam0, 1, 1, 0, 0, 0, 0);
				}
				func_74(&(iParam0->f_145));
				func_191(19, iParam0->f_218[0], &(iParam0->f_253), iParam1);
				func_114(iParam0, func_113(3, 0, 0), 1);
				func_12(&(iParam0->f_254), iParam4);
				func_12(&(iParam0->f_254), iParam2);
			}
			break;
		case 1:
			if (!func_19(iParam0->f_254, iParam3))
			{
				func_77(iParam0->f_317[1], 0, 0);
				func_77(iParam0->f_317[0], 0, 0);
				if (bParam5)
				{
					func_14(iParam0, 0, 0, 0, 0, 0, 0);
					func_14(iParam0, 1, 1, 0, 0, 0, 0);
				}
				func_74(&(iParam0->f_145));
				func_191(19, iParam0->f_218[0], &(iParam0->f_253), iParam1);
				func_114(iParam0, func_113(3, 0, 0), 1);
				func_12(&(iParam0->f_254), iParam4);
				func_12(&(iParam0->f_254), iParam3);
			}
			break;
	}
}

void func_23()
{
	disable_control_action(0, 130948705, false);
	disable_control_action(0, -128997553, false);
	disable_control_action(0, -432665970, false);
	disable_control_action(0, -349518703, false);
}

void func_24(int iParam0)
{
	if (*iParam0 >= 7 && *iParam0 <= 24)
	{
		if (_0x54b187f111d9c6f8(&(iParam0->f_218[0]), 1))
		{
			func_192(iParam0->f_218[0], &(iParam0->f_256), 161068336, 10f, 5f);
		}
	}
}

void func_25(int iParam0)
{
	if (*iParam0 >= 6 && *iParam0 <= 30)
	{
		return;
	}
	if (func_79(&(iParam0->f_218[0]), 1682639051))
	{
		func_116(&(iParam0->f_218[0]), Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
		func_193(&(iParam0->f_353), &(iParam0->f_218[0]));
		func_194(Global_35, &(iParam0->f_218[0]), 1, 1, 1, 0, 1, 1, 0, 1, 1);
	}
}

void func_26(int iParam0)
{
	if (func_19(iParam0->f_253, 64) && iParam0->f_257 >= 3)
	{
		return;
	}
	if (*iParam0 >= 7 && *iParam0 <= 51)
	{
		if (func_195(iParam0->f_218[0], &(iParam0->f_261), &(iParam0->f_151), &(iParam0->f_257), 3, 0, 7000, iParam0->f_239))
		{
			func_12(&(iParam0->f_253), 64);
		}
	}
}

void func_27(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	if (is_entity_dead(iParam0) || Global_1935630->f_12)
	{
		return;
	}
	sVar0 = func_196(iParam3);
	if (fParam4 == 0f)
	{
		if (func_135(iParam0, Global_35, 15f, 1))
		{
			if (!func_197(*uParam1, iParam2))
			{
				if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
				{
					func_180(uParam1, iParam2);
				}
			}
		}
		else if (func_197(*uParam1, iParam2))
		{
			_0x9428447ded71fc7e("special_ped_scenes");
			func_198(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_197(*uParam1, iParam2))
		{
			if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
			{
				func_180(uParam1, iParam2);
			}
		}
	}
	else if (func_197(*uParam1, iParam2))
	{
		_0x9428447ded71fc7e("special_ped_scenes");
		func_198(uParam1, iParam2);
	}
}

void func_28(int iParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (*iParam0 >= 6 && *iParam0 <= 30)
	{
		return;
	}
	if (_does_anim_scene_exist(iParam1) && _is_anim_scene_started(iParam1, false))
	{
		if (((is_ped_walking(Global_35) || is_ped_still(Global_35)) || is_ped_stopped(Global_35)) || bParam3)
		{
			set_anim_scene_bool(iParam1, sParam2, true, false);
		}
		else
		{
			set_anim_scene_bool(iParam1, sParam2, false, false);
		}
	}
}

char* func_29()
{
	return "script@specialped@pdcwv_bum_civil_war_veteran@ig@ig_1@ig_1_begging";
}

char* func_30()
{
	return "pbl_base_reset";
}

char* func_31()
{
	return "script@specialped@pdcwv_bum_civil_war_veteran@ig@ig_5@ig_5_are_you_crazy";
}

char* func_32()
{
	return "pl_IG5_PDCWV_HeyMister";
}

char* func_33()
{
	return "script_special_ped@pdcwv_bum_civil_war_veteran@ig@ig_5";
}

void func_34(int iParam0)
{
	if (func_19(iParam0->f_253, 1))
	{
		if (!_does_volume_exist(iParam0->f_224))
		{
			iParam0->f_224 = _create_volume_sphere_with_custom_name(-192.4921f, 625.2659f, 115.287f, 0f, 0f, 0f, 45f, 45f, 45f, "RandomEventBlock");
		}
		if (!_does_volume_exist(iParam0->f_225))
		{
			iParam0->f_225 = _create_volume_cylinder_with_custom_name(-192.4921f, 625.2659f, 115.287f, 0f, 0f, 0f, 45f, 45f, 30f, "Abandon");
		}
		if (!_does_volume_exist(iParam0->f_226))
		{
			iParam0->f_226 = _create_volume_cylinder_with_custom_name(-192.9274f, 625.6259f, 113.5786f, 0f, -1E-06f, 145.05f, 7.5f, 7.5f, 10f, "Trigger");
		}
		if (!_does_volume_exist(iParam0->f_227))
		{
			iParam0->f_227 = _create_volume_box_with_custom_name(-192.9274f, 625.6259f, 113.5786f, 1E-06f, 0f, 145.05f, 3f, 3f, 4f, "StayAway");
		}
		if (!_does_volume_exist(iParam0->f_228))
		{
			iParam0->f_228 = _create_volume_cylinder_with_custom_name(-192.9274f, 625.6259f, 113.5786f, 0f, 0f, 0f, 6f, 10f, 10f, "Spotted");
		}
		if (!_does_volume_exist(iParam0->f_229))
		{
			iParam0->f_229 = _create_volume_cylinder_with_custom_name(-192.9274f, 625.6259f, 113.5786f, 0f, -1E-06f, 145.05f, 15f, 15f, 10f, "Near");
		}
		if (!_does_volume_exist(iParam0->f_230))
		{
			iParam0->f_230 = _create_volume_cylinder_with_custom_name(-192.9274f, 625.6259f, 113.5786f, 1E-06f, 0f, 145.05f, 3f, 3f, 6f, "Focus");
		}
		if (!_does_volume_exist(iParam0->f_231))
		{
			iParam0->f_231 = _0x0eb78c2b156635b1(665633627, -192.9274f, 625.6259f, 113.5786f, 0f, 0f, 0f, 1.85f, 1.85f, 3f);
			_0x5b23dff8e0948bb2(iParam0->f_231, 0);
			_0xbe551c2cc421185d(iParam0->f_231, 1);
		}
	}
	else
	{
		if (!_does_volume_exist(iParam0->f_224))
		{
			iParam0->f_224 = _create_volume_sphere_with_custom_name(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 45f, 45f, 45f, "RandomEventBlock");
		}
		if (!_does_volume_exist(iParam0->f_225))
		{
			iParam0->f_225 = _create_volume_cylinder_with_custom_name(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 45f, 45f, 30f, "Abandon");
		}
		if (!_does_volume_exist(iParam0->f_226))
		{
			iParam0->f_226 = _create_volume_cylinder_with_custom_name(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 7.5f, 7.5f, 10f, "Trigger");
		}
		if (!_does_volume_exist(iParam0->f_227))
		{
			iParam0->f_227 = _create_volume_box_with_custom_name(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 3f, 3f, 4f, "StayAway");
		}
		if (!_does_volume_exist(iParam0->f_228))
		{
			iParam0->f_228 = _create_volume_cylinder_with_custom_name(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 7f, 13f, 10f, "Spotted");
		}
		if (!_does_volume_exist(iParam0->f_229))
		{
			iParam0->f_229 = _create_volume_cylinder_with_custom_name(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 13.5f, 13.5f, 10f, "Near");
		}
		if (!_does_volume_exist(iParam0->f_230))
		{
			iParam0->f_230 = _create_volume_cylinder_with_custom_name(-256.365f, 753.5781f, 116.0851f, 1E-06f, 0f, 145.05f, 3f, 3f, 6f, "Focus");
		}
		if (!_does_volume_exist(iParam0->f_231))
		{
			iParam0->f_231 = _0x0eb78c2b156635b1(665633627, -256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 1.85f, 1.85f, 3f);
			_0x5b23dff8e0948bb2(iParam0->f_231, 0);
			_0xbe551c2cc421185d(iParam0->f_231, 1);
		}
	}
}

int func_35(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_199(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1472102294;
		case 0:
			return 1005861726;
		case 2:
			return -26239347;
		case 3:
			return 813446076;
		case 4:
			return -862094048;
		case 6:
			return -161610929;
		case 7:
			return 419383665;
		case 5:
			return 1809158435;
		case 8:
			return 698747486;
		case 9:
			return 399829678;
		case 10:
			return -1767525506;
		case 11:
			return 1533318556;
		case 12:
			return 846763582;
		case 13:
			return 974338564;
		case 14:
			return 860809165;
		case 15:
			return -1682386507;
		case 16:
			return 420952075;
		case 17:
			return 1340251064;
		case 18:
			return -1417023286;
		case 19:
			return 237608522;
		case 20:
			return 1487910336;
		case 21:
			return 129290505;
		case 22:
			return 1231488843;
		case 23:
			return -499580940;
		case 24:
			return 1953535365;
		case 25:
			return -315419568;
		case 26:
			return -1708806962;
		case 27:
			return 1405526353;
		case 28:
			return -1903564707;
		case 29:
			return -1132839335;
		default:
			break;
	}
	return 0;
}

int func_37(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_200())
	{
		iVar2 = func_200();
	}
	iVar5 = func_201(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_202(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_202(iVar6) == 0)
			{
				return func_203(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_202(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_202(iVar6) == 0)
			{
				return func_203(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_203(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_38(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_39(int iParam0)
{
	if (!func_38(iParam0))
	{
		return -1;
	}
	return func_204(iParam0);
}

int func_40(int iParam0)
{
	if (!func_38(iParam0))
	{
		return -1;
	}
	return func_205(iParam0);
}

bool func_41()
{
	if (func_206() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_42(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_207(uParam0, iParam1, sParam2))
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

void func_43(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_44(var uParam0)
{
	func_49(uParam0, 0);
	func_48(uParam0, 0);
	func_45(uParam0, 1);
	func_61(uParam0, 1);
	func_208(uParam0, 0);
	func_56(uParam0, 1);
	func_209(uParam0, 1, 1, 1);
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_210(&(uParam0->f_1), 256);
	}
	else
	{
		func_211(&(uParam0->f_1), 256);
	}
}

void func_46(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_210(&(uParam0->f_1), 4);
	}
	else
	{
		func_211(&(uParam0->f_1), 4);
	}
}

void func_47(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_210(&(uParam0->f_1), 2);
	}
	else
	{
		func_211(&(uParam0->f_1), 2);
	}
}

void func_48(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_210(&(uParam0->f_1), 2048);
	}
	else
	{
		func_211(&(uParam0->f_1), 2048);
	}
}

void func_49(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_210(&(uParam0->f_1), 16384);
	}
	else
	{
		func_211(&(uParam0->f_1), 16384);
	}
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_210(&(uParam0->f_1), 1);
	}
	else
	{
		func_211(&(uParam0->f_1), 1);
	}
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_210(&(uParam0->f_1), 131072);
	}
	else
	{
		func_211(&(uParam0->f_1), 131072);
	}
}

void func_52(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_211(uParam0, 128);
	}
	else
	{
		func_210(uParam0, 128);
	}
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_211(uParam0, 4);
	}
	else
	{
		func_210(uParam0, 4);
	}
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_210(&(uParam0->f_1), 8);
	}
	else
	{
		func_211(&(uParam0->f_1), 8);
	}
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_211(uParam0, 32);
	}
	else
	{
		func_210(uParam0, 32);
	}
}

void func_56(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_211(uParam0, 256);
	}
	else
	{
		func_210(uParam0, 256);
	}
}

void func_57(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_211(uParam0, 524288);
	}
	else
	{
		func_210(uParam0, 524288);
	}
}

void func_58(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_211(uParam0, 2);
	}
	else
	{
		func_210(uParam0, 2);
	}
}

void func_59(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_210(&(uParam0->f_1), 1024);
	}
	else
	{
		func_211(&(uParam0->f_1), 1024);
	}
}

void func_60(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_210(&(uParam0->f_1), 16);
	}
	else
	{
		func_211(&(uParam0->f_1), 16);
	}
}

void func_61(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_211(uParam0, 16);
	}
	else
	{
		func_210(uParam0, 67108864);
		func_210(uParam0, 16);
	}
}

struct<4> func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { -256.365f, 753.5781f, 116.0851f };
			Var0.f_3 = 317.5058f;
			break;
		case 1:
			Var0 = { -193.3643f, 625.0235f, 113.5786f };
			Var0.f_3 = -32.08f;
			break;
		case 2:
			Var0 = { -331.8132f, 793.5106f, 115.6329f };
			Var0.f_3 = 231.2512f;
			break;
		case 3:
			Var0 = { -192.2564f, 628.0485f, 112.3348f };
			Var0.f_3 = 231.2512f;
			break;
		case 4:
			Var0 = { -256.365f, 753.5781f, 116.0851f };
			Var0.f_3 = 10.42f;
			break;
		case 5:
			Var0 = { -193.3643f, 625.0235f, 113.5786f };
			Var0.f_3 = -32.08f;
			break;
		case 6:
			Var0 = { -348.8683f, 781.1053f, 114.8526f };
			Var0.f_3 = 317.7707f;
			break;
		case 7:
			Var0 = { -219.8844f, 627.0385f, 112.3019f };
			Var0.f_3 = 268.6542f;
			break;
	}
	return Var0;
}

bool func_63(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!does_entity_exist(*uParam0))
	{
		wait(0);
		if (!bParam7)
		{
			*uParam0 = func_212(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_212(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return false;
	}
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	if (_0xa0bc8faed8cfeb3c(*uParam0))
	{
		return true;
	}
	return false;
}

void func_64(int iParam0, int iParam1)
{
	if (!(iParam1 > -1 && iParam1 <= 29))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	decor_set_bool(iParam0, "bIsSpecialPed", true);
	decor_set_int(iParam0, "iSpecialPedID", iParam1);
	(*Global_1396257)[iParam1]->f_636 = iParam0;
}

var func_65(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_213(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

int func_66(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (_0x91a5f9cbebb9d936(*uParam0))
	{
		return 1;
	}
	*uParam0 = func_214(vParam1, vParam4);
	return 0;
}

Vector3 func_67()
{
	return -199.16f, 632.02f, 114.52f;
}

Vector3 func_68()
{
	return 0f, 0f, -42.5f;
}

Vector3 func_69()
{
	return -258.85f, 745f, 118.08f;
}

Vector3 func_70()
{
	return 0f, 0f, 90f;
}

bool func_71(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_72()
{
	iVar0 = get_random_int_in_range(0, 2);
	if (iVar0 == 0)
	{
		return 28;
	}
	else
	{
		return 30;
	}
	return 30;
}

void func_73(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		iVar0 = func_215(0, (14 - 1), iParam0->f_244);
		iParam0->f_244 = iVar0;
	}
	else
	{
		iVar0 = *uParam1;
	}
	if (func_216(iParam0))
	{
		iVar1 = func_217(&(iParam0->f_218[0]), &(iParam0->f_220[0]), 1060437492);
		if (!func_19(iParam0->f_253, 4))
		{
			if (iVar1 == 3)
			{
				func_20(iParam0, 23);
				func_12(&(iParam0->f_253), 4);
				return;
			}
		}
		if (!func_19(iParam0->f_253, 8))
		{
			if (iVar1 == 2)
			{
				func_20(iParam0, 24);
				func_12(&(iParam0->f_253), 8);
				return;
			}
		}
		if (!func_19(iParam0->f_253, 16))
		{
			if (iVar1 == 0)
			{
				func_20(iParam0, 22);
				func_12(&(iParam0->f_253), 16);
				return;
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			*uParam1++;
			func_20(iParam0, 7);
			break;
		case 1:
			*uParam1++;
			func_20(iParam0, 8);
			break;
		case 2:
			*uParam1++;
			func_20(iParam0, 9);
			break;
		case 3:
			*uParam1++;
			func_20(iParam0, 10);
			break;
		case 4:
			*uParam1++;
			func_20(iParam0, 11);
			break;
		case 5:
			*uParam1++;
			func_20(iParam0, 12);
			break;
		case 6:
			*uParam1++;
			func_20(iParam0, 13);
			break;
		case 7:
			*uParam1++;
			func_20(iParam0, 14);
			break;
		case 8:
			*uParam1++;
			func_20(iParam0, 15);
			break;
		case 9:
			*uParam1++;
			func_20(iParam0, 16);
			break;
		case 10:
			*uParam1++;
			func_20(iParam0, 17);
			break;
		case 11:
			*uParam1++;
			func_20(iParam0, 18);
			break;
		case 12:
			*uParam1++;
			func_20(iParam0, 19);
			break;
		case 13:
			*uParam1 = 0;
			func_20(iParam0, 20);
			break;
		case 14:
			func_20(iParam0, 21);
			break;
		default:
			break;
	}
}

void func_74(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_75(var uParam0)
{
	if ((((func_19(*uParam0, 32) || func_19(*uParam0, 64)) || func_19(*uParam0, 512)) || func_19(*uParam0, 256)) || func_19(*uParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_76(int iParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (*uParam1 != iParam0->f_259 || !are_strings_equal(sParam2, iParam0->f_260))
	{
		func_128(&(iParam0->f_253), 2097152);
		func_128(&(iParam0->f_253), 4194304);
		func_128(&(iParam0->f_253), 8388608);
	}
	iParam0->f_259 = *uParam1;
	iParam0->f_260 = sParam2;
	if (bParam5)
	{
		sVar0 = "s_base";
		sVar1 = "s_base_end";
	}
	else
	{
		sVar0 = "s_base_stand";
		sVar1 = "s_base_end_stand";
	}
	iParam0->f_258++;
	if (iParam0->f_258 >= 3)
	{
		iParam0->f_258 = 0;
	}
	if (!func_19(iParam0->f_253, 2097152))
	{
		if (_is_anim_scene_started(*uParam1, false))
		{
			func_12(&(iParam0->f_253), 2097152);
		}
		else if (_is_anim_scene_loaded(*uParam1, true, false))
		{
			start_anim_scene(*uParam1);
		}
	}
	else
	{
		bVar2 = false;
		bVar3 = false;
		if (!func_19(iParam0->f_253, 4194304))
		{
			if (_0x23e33cb9f4a3f547(*uParam1, sParam2))
			{
				func_12(&(iParam0->f_253), 4194304);
				bVar2 = true;
			}
		}
		else
		{
			bVar2 = true;
		}
		if (!func_19(iParam0->f_253, 8388608))
		{
			if (_0x1f0e401031e20146(*uParam1, sParam2))
			{
				func_12(&(iParam0->f_253), 8388608);
				bVar3 = true;
			}
		}
		else
		{
			bVar3 = true;
		}
		if (!bVar2 && !bVar3)
		{
			_0xdf7b5144e25cd3fe(*uParam1, sParam2);
		}
		if (bParam7)
		{
			if (!func_218(iParam0->f_218[0], 50f, iParam0->f_239))
			{
				return false;
			}
		}
		if (!bVar3 && bVar2)
		{
			_set_anim_scene_playback_list_bool(*uParam1, sParam2, true);
			set_anim_scene_bool(*uParam1, "internal_loop", bParam3, false);
			set_anim_scene_bool(*uParam1, "internal_loop_end", bParam4, false);
			return false;
		}
		else if (bVar3)
		{
			if ((iParam0->f_258 == 0 && !bParam4) && _0x8d81e7824b7753f7(*uParam1, sVar1, 1))
			{
				if (func_219(uParam1, iParam0->f_236))
				{
					iParam0->f_236 = sParam2;
					return true;
				}
			}
			else if ((iParam0->f_258 == 1 && bParam4) && _0x8d81e7824b7753f7(*uParam1, sVar0, 1))
			{
				if (func_219(uParam1, iParam0->f_236))
				{
					iParam0->f_236 = sParam2;
					return true;
				}
			}
			else if ((bParam3 && iParam0->f_258 == 2) && _0x8d81e7824b7753f7(*uParam1, "S_WaitLoop", 1))
			{
				if (func_219(uParam1, iParam0->f_236))
				{
					iParam0->f_236 = sParam2;
					return true;
				}
			}
			else if (bParam4 && has_anim_event_fired(&(iParam0->f_218[0]), -1527527524))
			{
				if (func_219(uParam1, iParam0->f_236))
				{
					iParam0->f_236 = sParam2;
					return true;
				}
			}
			else if (!bParam6)
			{
				if (func_219(uParam1, iParam0->f_236))
				{
					iParam0->f_236 = sParam2;
					return true;
				}
			}
		}
	}
	return false;
}

void func_77(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_220(iParam0, 13))
	{
		func_221(iParam0, 0);
	}
	else
	{
		func_222(iParam0, 0);
	}
	if (func_223(iParam0->f_6))
	{
		if (bParam2)
		{
			func_224(&(iParam0->f_6), 0, 1);
		}
	}
}

char[] func_78()
{
	return "pbl_sitting_p3_to_stand_buck";
}

bool func_79(int iParam0, int iParam1)
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

void func_80(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, float fParam12, float fParam13, float fParam14, float fParam15, int iParam16, float fParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (!is_string_null_or_empty(uParam2->f_1))
	{
		task_scripted_animation(iParam0, uParam2);
	}
	if (is_ped_a_player(iParam0))
	{
		_0x2beed53b912537d0(player_id(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = fParam14;
		Var0.f_2 = fParam15;
		Var0.f_4 = fParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		_0xca59808e51fd67c4(player_id(), &Var0);
	}
	else
	{
		task_follow_and_converse_with_ped(iParam0, iParam1, iParam4, iParam5, fParam6, fParam7, iParam9, fParam10, fParam11, fParam12, fParam13);
	}
	if (bParam19)
	{
		_set_ped_crouch_movement(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		func_225(iParam0, iParam1, iParam18);
	}
}

void func_81(char* sParam0)
{
	StringCopy(sParam0, "walk_and_talk", 64);
	StringCopy(&(sParam0->f_8), "WALK_AND_TALK_REQUEST", 64);
	_0x6a4d224fc7643941(sParam0);
}

char[] func_82()
{
	return "pbl_sitting_p3_to_stand_hey";
}

char[] func_83()
{
	return "pbl_sitting_p3_to_stand";
}

char[] func_84()
{
	return "pbl_sitting_p1_beg_ft";
}

char[] func_85()
{
	return "pbl_sitting_p1_beg_lt";
}

char[] func_86()
{
	return "pbl_sitting_p1_beg_rt";
}

char[] func_87()
{
	return "pbl_sitting_p1_beg_qk";
}

char[] func_88()
{
	return "pbl_sitting_p1_cmon";
}

char[] func_89()
{
	return "pbl_sitting_p1_drink";
}

char[] func_90()
{
	return "pbl_sitting_p1_fella";
}

char[] func_91()
{
	return "pbl_sitting_p1_loop01_cough";
}

char[] func_92()
{
	return "pbl_sitting_p1_gotta";
}

char[] func_93()
{
	return "pbl_sitting_p1_hungry";
}

char[] func_94()
{
	return "pbl_sitting_p1_few";
}

char[] func_95()
{
	return "pbl_sitting_p2_in_army";
}

char[] func_96()
{
	return "pbl_sitting_p1_loop03_stump";
}

char[] func_97()
{
	return "pbl_sitting_p1_someone";
}

char[] func_98()
{
	return "pbl_sitting_p2_bad";
}

char[] func_99()
{
	return "pbl_sitting_p2_drink";
}

char[] func_100()
{
	return "pbl_sitting_p1_loop02_scratch";
}

bool func_101(int iParam0)
{
	if (is_entity_dead(&(iParam0->f_218[0])))
	{
		return false;
	}
	if (is_entity_dead(Global_35))
	{
		return false;
	}
	if (func_226(&(iParam0->f_145)))
	{
		if (!func_19(iParam0->f_253, 134217728))
		{
			func_12(&(iParam0->f_253), 134217728);
		}
		return true;
	}
	if (iParam0->f_239 >= 16f)
	{
		return true;
	}
	return false;
}

char[] func_102()
{
	return "pbl_base_reset_stand";
}

bool func_103(var uParam0)
{
	if (is_entity_dead(*uParam0))
	{
		return false;
	}
	if (is_entity_dead(Global_35))
	{
		return false;
	}
	if (!func_79(*uParam0, 1682639051))
	{
		func_81(&(Local_14.f_353));
		func_80(*uParam0, Global_35, &(Local_14.f_156), -1082130432, 0, 0, -1082130432, -1082130432, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
		func_12(&(Local_14.f_253), 536870912);
	}
	if (func_79(*uParam0, 1682639051))
	{
		return true;
	}
	return false;
}

char* func_104()
{
	return "pl_IG5_PDCWV_ImTalkingToYou";
}

char[] func_105()
{
	return "pbl_standing_p3_dont";
}

char[] func_106()
{
	return "pbl_standing_p3_im";
}

char[] func_107()
{
	return "pbl_standing_p4_hey";
}

char[] func_108()
{
	return "pbl_standing_p4_just";
}

void func_109(var uParam0, bool bParam1)
{
	if (*uParam0 > -1 && *uParam0 < 4)
	{
		if (*Global_1955500)[*uParam0]->f_3 == get_id_of_this_thread()
		{
			if (func_227(1, 1) == *uParam0)
			{
				func_228(-1, 1, 1);
			}
			if (bParam1)
			{
				func_229((*Global_1955500)[*uParam0]->f_1);
			}
			(*Global_1955500)[*uParam0] = 0;
			(*Global_1955500)[*uParam0]->f_2 = 0;
			(*Global_1955500)[*uParam0]->f_3 = 0;
			*uParam0 = -1;
		}
	}
}

void func_110(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	set_ped_max_move_blend_ratio(iParam0, 1f);
}

bool func_111(var uParam0)
{
	bVar0 = _is_anim_scene_loaded(*uParam0, true, false);
	bVar1 = _is_anim_scene_started(*uParam0, false);
	if (bVar0 || bVar1)
	{
		return true;
	}
	bVar3 = _does_anim_scene_exist(*uParam0);
	bVar2 = _is_anim_scene_loading(*uParam0, true);
	if ((bVar3 && !bVar0) && !bVar2)
	{
		load_anim_scene(*uParam0);
		return false;
	}
	if (bVar2)
	{
	}
	if (!bVar3)
	{
	}
	return false;
}

char* func_112()
{
	return "pl_IG5_PDCWV_AreYouReally";
}

int func_113(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

void func_114(int iParam0, int iParam1, bool bParam2)
{
	iParam0->f_352 = iParam1;
	if (bParam2)
	{
		func_230(&(iParam0->f_296), 0);
	}
}

void func_115(int iParam0, int iParam1, var uParam2, vector3 vParam3, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (!is_string_null_or_empty(uParam2->f_1))
	{
		task_scripted_animation(iParam0, uParam2);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		if (iParam7 == 0)
		{
			iParam7 = 14;
		}
		Var0 = 2;
		Var0.f_4 = sParam6;
		Var0.f_5 = iParam7;
		Var0.f_7 = iParam16;
		Var0.f_9 = iParam17;
		task_lead_and_converse(iParam0, iParam1, &Var0, iParam8, iParam9, iParam10, iParam11, iParam13, iParam12);
	}
	else if (!func_231(vParam3, 0f, 0f, 0f))
	{
		Var11 = 0;
		Var11.f_1 = { vParam3 };
		Var11.f_7 = iParam16;
		Var11.f_9 = iParam17;
		Var11.f_8 = iParam18;
		task_lead_and_converse(iParam0, iParam1, &Var11, iParam8, iParam9, iParam10, iParam11, iParam13, iParam12);
	}
	if (bParam15)
	{
		_set_ped_crouch_movement(iParam0, false, 0, false);
	}
	if (bParam19)
	{
		func_225(iParam0, iParam1, iParam14);
	}
}

void func_116(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (bParam8)
	{
		set_ped_reset_flag(iParam0, 229, true);
	}
	if (is_ped_a_player(iParam0))
	{
		if (bParam3 && _get_ped_crouch_movement(iParam0))
		{
			_set_ped_crouch_movement(iParam0, false, 0, false);
		}
		func_232(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(iParam0, 188, true);
		}
	}
}

char* func_117()
{
	return "pl_IG5_PDCWV_IFoughtInAWar";
}

void func_118(int iParam0, int iParam1, char* sParam2, float fParam3)
{
	if (!func_19(iParam0->f_253, 67108864))
	{
		if (((_does_anim_scene_exist(iParam1) && _is_anim_scene_started(iParam1, false)) && _0x1f0e401031e20146(iParam1, sParam2)) && _get_anim_scene_progress(iParam1) > fParam3)
		{
			func_233(12, 0, 0, "", &(iParam0->f_218[0]), 0, 1065353216, 0);
			func_12(&(iParam0->f_253), 67108864);
		}
	}
}

bool func_119(var uParam0)
{
	if (is_entity_dead(*uParam0))
	{
		return false;
	}
	if (_is_anim_scene_finished(Local_14.f_246, false))
	{
		return true;
	}
	return false;
}

void func_120(int iParam0, int iParam1)
{
	if (&Global_40.f_11623[iParam0] != iParam1)
	{
		Global_40.f_11623[iParam0] = iParam1;
	}
}

int func_121()
{
	return &Global_1899515;
}

void func_122(int iParam0, bool bParam1)
{
	if (is_entity_dead(iParam0))
	{
	}
	_0xaac0ee3b4999abb5(iParam0, 0);
	if (is_ped_a_player(iParam0))
	{
		if (_0xd1f6b912785bfd35(player_id()))
		{
			_0x908d4b72854c8f62(player_id());
		}
		set_ped_config_flag(iParam0, 43, false);
		_0xc67a4910425f11f1(player_id(), "WalkAndTalk");
	}
	_0x9e66708b2b41f14a(iParam0, -1);
	if (is_ped_a_player(iParam0))
	{
		_0xc4873b053054c04b(player_id(), 0, 1050253722, 1067030938, 0, 0, -1082130432, -1082130432);
	}
	else
	{
		_0x15f4732c357b1d6d(iParam0, player_id(), 6);
	}
	if (bParam1)
	{
		clear_ped_secondary_task(iParam0);
	}
}

void func_123(int iParam0, bool bParam1)
{
	if (is_entity_dead(iParam0))
	{
	}
	_0xaac0ee3b4999abb5(iParam0, 0);
	_0x9e66708b2b41f14a(iParam0, -1);
	if (bParam1)
	{
		clear_ped_secondary_task(iParam0);
	}
	if (is_ped_a_player(iParam0))
	{
		set_ped_config_flag(iParam0, 43, false);
	}
	else
	{
		_0x15f4732c357b1d6d(iParam0, player_id(), 6);
	}
}

void func_124(var uParam0)
{
	if (_0x927b810e43e99932(uParam0))
	{
		_0x0a5a4f1979abb40e(uParam0);
	}
	_0x798be43c9393632b(uParam0);
}

bool func_125(int iParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(*uParam1))
	{
		return false;
	}
	if (is_ped_using_any_scenario(*uParam1))
	{
		return true;
	}
	if (_0xa2cac9def0195e6f(1))
	{
		_0x36559148b78853b3(1, 1, 0);
	}
	if (!func_79(*uParam1, 242628503))
	{
		func_14(iParam0, 0, 0, 0, 0, 0, 0);
		func_14(iParam0, 1, 1, 0, 0, 0, 0);
		if (iParam2 == 0)
		{
			if (((func_234(26, 0) || func_234(27, 0)) || is_thread_active((*Global_1347702)[26]->f_42, false)) || is_thread_active((*Global_1347702)[27]->f_42, false))
			{
				iParam2 = 1;
			}
		}
		vVar1 = { func_235(iParam2) };
		_0x42cfd8fd8cc8dc69(*uParam1, func_236(iParam2));
		if (_does_volume_exist(iParam0->f_231))
		{
			_delete_volume(iParam0->f_231);
		}
		open_sequence_task(&iVar0);
		task_follow_nav_mesh_to_coord(0, vVar1, 1f, -1, 6f, 6291460, 40000f);
		_task_use_nearest_scenario_to_coord(0, vVar1, 5f, -1, false, false, true, false);
		close_sequence_task(iVar0);
		task_perform_sequence(*uParam1, iVar0);
		clear_sequence_task(&iVar0);
		set_ped_keep_task(*uParam1, true);
	}
	return false;
}

float func_126(var uParam0)
{
	if (!func_136(uParam0))
	{
		return 0f;
	}
	if (func_237(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_238() - uParam0->f_1);
}

char* func_127()
{
	return "pbl_sitting_p1_exit02";
}

void func_128(var uParam0, int iParam1)
{
	func_198(uParam0, iParam1);
}

bool func_129(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_3 = iParam2;
	Var0.f_6 = iParam5;
	Var0.f_1 = uParam4;
	Var0.f_4 = iParam3;
	return func_239(iParam0, &Var0);
}

void func_130(int iParam0)
{
	func_240(&(iParam0->f_195));
	func_131(19);
	if (func_19(iParam0->f_253, 536870912) && !func_19(iParam0->f_253, 1073741824))
	{
		func_124(&(iParam0->f_353));
		func_123(Global_35, 1);
		if (func_9(&(iParam0->f_218[0]), 0))
		{
			func_122(&(iParam0->f_218[0]), 1);
		}
		func_12(&(iParam0->f_253), 1073741824);
	}
	func_109(&(iParam0->f_233), 1);
	func_14(iParam0, 0, 0, 0, 0, 0, 0);
	func_14(iParam0, 1, 1, 0, 0, 0, 0);
	func_132(&(iParam0->f_232));
	if (func_38(func_37(19, 0, 9, func_36(19))))
	{
		func_241(func_37(19, 0, 9, func_36(19)), iParam0->f_244);
		func_242(func_37(19, 0, 9, func_36(19)), iParam0->f_255);
	}
	if (func_9(&(iParam0->f_218[0]), 0))
	{
		set_blocking_of_non_temporary_events(&(iParam0->f_218[0]), false);
		func_16(&(iParam0->f_218[0]), 1, 1);
		set_ped_config_flag(&(iParam0->f_218[0]), 130, false);
		func_17(&(iParam0->f_218[0]));
		remove_entity_from_audio_mix_group(&(iParam0->f_218[0]), 0f);
		_0x39a2fc5af55a52b1(&(iParam0->f_218[0]), -1);
		set_ped_as_no_longer_needed(iParam0->f_218[0]);
	}
	if (_does_anim_scene_exist(iParam0->f_245))
	{
		_delete_anim_scene(iParam0->f_245);
	}
	if (_does_anim_scene_exist(iParam0->f_246))
	{
		_delete_anim_scene(iParam0->f_246);
	}
	if (func_71(&(iParam0->f_235)))
	{
		_0x9cf1836c03fb67a2(&(iParam0->f_235), 0);
	}
	func_133(iParam0);
	if (_does_volume_exist((*(*Global_1396257)[19])[0]->f_47))
	{
		_delete_volume((*(*Global_1396257)[19])[0]->f_47);
	}
	if (_does_volume_exist((*(*Global_1396257)[19])[1]->f_47))
	{
		_delete_volume((*(*Global_1396257)[19])[1]->f_47);
	}
	if (_does_volume_exist((*(*Global_1396257)[19])[2]->f_47))
	{
		_delete_volume((*(*Global_1396257)[19])[2]->f_47);
	}
	if (_does_volume_exist((*(*Global_1396257)[19])[3]->f_47))
	{
		_delete_volume((*(*Global_1396257)[19])[3]->f_47);
	}
	if (_does_volume_exist((*(*Global_1396257)[19])[4]->f_47))
	{
		_delete_volume((*(*Global_1396257)[19])[4]->f_47);
	}
	if (_does_volume_exist((*(*Global_1396257)[19])[5]->f_47))
	{
		_delete_volume((*(*Global_1396257)[19])[5]->f_47);
	}
	if (_does_volume_exist((*(*Global_1396257)[19])[6]->f_47))
	{
		_delete_volume((*(*Global_1396257)[19])[6]->f_47);
	}
	if (_text_database_has_loaded("SPBM"))
	{
		_text_database_delete("SPBM");
	}
	if (_text_database_has_loaded("SPCWVAU"))
	{
		_text_database_delete("SPCWVAU");
	}
	if (is_itemset_valid(iParam0->f_217))
	{
		destroy_itemset(iParam0->f_217);
	}
	func_243(0);
	if (!func_244(iParam0->f_233, 1, 1))
	{
		terminate_this_thread();
	}
}

void func_131(int iParam0)
{
	if (!is_entity_dead(Global_35))
	{
		set_ped_config_flag(Global_35, 43, false);
	}
	if ((*Global_1396257)[iParam0]->f_631)
	{
		func_245(0, -1);
	}
	func_246();
	(*Global_1396257)[iParam0]->f_631 = 0;
	Global_1415398->f_2 = (Global_1415398->f_2 - 1);
	Global_1935183->f_28 = 0;
}

void func_132(var uParam0)
{
	if (!_0x91a5f9cbebb9d936(*uParam0))
	{
		return;
	}
	remove_scenario_blocking_area(*uParam0, false);
}

void func_133(int iParam0)
{
	if (_does_volume_exist(iParam0->f_224))
	{
		func_13(iParam0->f_224);
		_delete_volume(iParam0->f_224);
	}
	if (_does_volume_exist(iParam0->f_227))
	{
		_0x74c2b3dc0b294102(iParam0->f_227);
		_0xa1cfb35069d23c23(iParam0->f_227);
		_delete_volume(iParam0->f_227);
	}
	if (_does_volume_exist(iParam0->f_226))
	{
		_0x74c2b3dc0b294102(iParam0->f_226);
		_0xa1cfb35069d23c23(iParam0->f_226);
		_delete_volume(iParam0->f_226);
	}
	if (_does_volume_exist(iParam0->f_228))
	{
		_delete_volume(iParam0->f_228);
	}
	if (_does_volume_exist(iParam0->f_229))
	{
		_delete_volume(iParam0->f_229);
	}
	if (_does_volume_exist(iParam0->f_225))
	{
		_delete_volume(iParam0->f_225);
	}
	if (_does_volume_exist(iParam0->f_230))
	{
		_delete_volume(iParam0->f_230);
	}
	if (_does_volume_exist(iParam0->f_231))
	{
		_delete_volume(iParam0->f_231);
	}
}

bool func_134(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_247())
		{
			return true;
		}
	}
	if (!is_ped_injured(iParam1))
	{
		if (vdist(Global_36, get_entity_coords(iParam1, true, false)) < 18f || is_scripted_speech_playing(iParam1))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_248(0) == 7 || func_249())
		{
			return true;
		}
	}
	if (func_250(&((*Global_1396257)[iParam0]->f_626), 1024))
	{
		return true;
	}
	return false;
}

bool func_135(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_136(var uParam0)
{
	return func_251(*uParam0, 1);
}

void func_137(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_238() - fParam1);
	func_252(uParam0, 1);
	func_253(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_138(var uParam0)
{
	if (!func_136(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_237(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_238() - uParam0->f_1);
}

bool func_139(int iParam0)
{
	return iParam0 != -15;
}

void func_140(int iParam0)
{
	Global_40.f_11623[iParam0]->f_5++;
	Global_40.f_11623[iParam0]->f_2 = func_121();
}

int func_141(var uParam0)
{
	if (!func_136(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_237(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_170() - round((uParam0->f_1 * 1000f)));
}

Vector3 func_142(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

bool func_143(int iParam0)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		set_ped_reset_flag(iParam0, 49, true);
		return true;
	}
	return false;
}

bool func_144(int iParam0, int iParam1, int iParam2, bool bParam3)
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

void func_145(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		task_clear_look_at(iParam0);
	}
}

bool func_146(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if ((get_frame_count() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_248(0) == 1 || func_248(0) == 2) || func_248(0) == 8) || func_254(&Global_1935630, 2048))
			{
				func_12(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_248(0) == 11)
			{
				func_12(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_248(0) == 6)
			{
				func_12(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_12(uParam2, 16);
			}
		}
	}
	if ((get_frame_count() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_255((*(*Global_1396257)[iParam0])[iParam1]->f_19) == 0 && func_255((*(*Global_1396257)[iParam0])[iParam1]->f_20) == 23))
			{
				iVar0 = func_121();
				iVar1 = (*(*Global_1396257)[iParam0])[iParam1]->f_19;
				iVar2 = (*(*Global_1396257)[iParam0])[iParam1]->f_20;
				if (func_255(iVar2) > func_255(iVar1))
				{
					if (func_255(iVar0) > func_255(iVar2) + 1 || func_255(iVar0) < func_255(iVar1))
					{
						func_12(uParam2, 32);
					}
				}
				else if (func_255(iVar0) > func_255(iVar2) + 1 && func_255(iVar0) < func_255(iVar1))
				{
					func_12(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if ((*(*Global_1396257)[iParam0])[iParam1]->f_40 != 4)
			{
				if (&(*(*Global_1396257)[iParam0])[iParam1]->f_5[0] != -1 || &(*(*Global_1396257)[iParam0])[iParam1]->f_5[1] != -1)
				{
					if (((func_256(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0])) || func_256(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1]))) || func_257(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0]))) || func_257(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_258((*(*Global_1396257)[iParam0])[iParam1]->f_40))
					{
						func_12(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (get_game_timer() > uParam2->f_17)
			{
				if (func_259(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_260(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_136(&(uParam2->f_13)))
					{
						func_137(&(uParam2->f_13), 0f);
					}
					else if (func_141(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_74(&(uParam2->f_13));
						func_12(uParam2, 512);
					}
					uParam2->f_17 = get_game_timer() + 1000;
				}
				else
				{
					if (func_136(&(uParam2->f_13)))
					{
						func_74(&(uParam2->f_13));
					}
					uParam2->f_17 = get_game_timer() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_261())
			{
				func_12(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (func_262())
			{
				func_12(uParam2, 2048);
			}
		}
		if (func_254(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_12(uParam2, 128);
		}
		if (func_250(&((*Global_1396257)[iParam0]->f_626), 2048))
		{
			func_12(uParam2, 256);
		}
	}
	if ((((((((((func_19(*uParam2, 2) || func_19(*uParam2, 4)) || func_19(*uParam2, 8)) || func_19(*uParam2, 16)) || func_19(*uParam2, 32)) || func_19(*uParam2, 64)) || func_19(*uParam2, 128)) || func_19(*uParam2, 256)) || func_19(*uParam2, 512)) || func_19(*uParam2, 1024)) || func_19(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_147(var uParam0)
{
	if (((((func_19(*uParam0, 2) || func_19(*uParam0, 4)) || func_19(*uParam0, 16)) || func_19(*uParam0, 128)) || func_19(*uParam0, 1024)) || func_19(*uParam0, 2048))
	{
		return true;
	}
	return false;
}

int func_148(int iParam0)
{
	if (!func_263(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

void func_149(var uParam0, bool bParam1)
{
	if (bParam1 || !func_136(uParam0))
	{
		func_18(uParam0);
	}
}

void func_150(var uParam0, bool bParam1, int iParam2)
{
	func_264(iParam2);
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
		uParam0->f_13 = func_265(0);
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
							func_211(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_266(1))
						{
							func_211(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_266(1) || *uParam0 & 8192 != 0))
				{
					func_210(uParam0, 33554432);
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
			if (func_267(uParam0))
			{
				uParam0->f_15 = func_170();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_170() - uParam0->f_15) > 500)
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
	func_268(uParam0);
}

bool func_151(int iParam0, var uParam1)
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
			if (!func_269(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_270(iParam0, iVar2) <= func_271(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_152(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_272(iParam2, 1, 1, 1, 0))
	{
		func_211(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_273(uParam1, 1);
	func_274();
}

bool func_153(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_275(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_276(uParam1);
			if (func_277(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_278(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_273(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_273(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_154(int iParam0, int iParam1, var uParam2)
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
	if (func_279(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_276(uParam2);
		if (func_277(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_278(uParam2)
				{
					func_273(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_155(int iParam0, var uParam1)
{
	if (!get_entity_player_is_free_aiming_at(player_id(), &iVar0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
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
	if (func_269(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_278(uParam1)
		{
			fVar3 = func_276(uParam1);
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

int func_156(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_280(bParam1, bParam2, bParam3);
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

bool func_157(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_170();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_158(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_281(uParam2);
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
			if (func_166(uParam2, iParam1))
			{
				func_273(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_159(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_282(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_166(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_273(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_160(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_283(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_273(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_273(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_284(iParam1, vVar0, vVar4))
					{
						func_273(uParam2, 1);
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
					func_273(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_284(iParam1, vVar0, vVar7))
					{
						func_273(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_161(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_269(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_285(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_286(&(Global_1935630->f_34[iVar0])))
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
			if (func_287(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_288(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_289(uParam1, iParam0, fVar1, iVar0))
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

bool func_162(int iParam0, var uParam1)
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

bool func_163(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_170();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_164(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_290(iVar0, &iVar2))
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
	if (func_291(iVar0, iParam0))
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

int func_165(var uParam0, int iParam1)
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

bool func_166(var uParam0, int iParam1)
{
	if (func_292(uParam0))
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

bool func_167(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_293(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_168()
{
}

bool func_169(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_294(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_170();
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
						if (func_295(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_170();
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

int func_170()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_171()
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
	if ((func_170() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_172(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_271(uParam0);
	if (uParam0->f_12 > func_296(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_297(iParam1);
	iVar1 = func_298(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_173(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_299(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_174(int iParam0, var uParam1)
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
		if (func_300(iParam0, uParam1, 1))
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
					if (!func_301(uParam1, iParam0))
					{
						if (func_295(iVar4, Global_36, 1) < 7f)
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

bool func_175(int iParam0, var uParam1)
{
	if (!func_302(0))
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

bool func_176(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_170();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_177(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_178(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_170();
	}
	else if (func_170() - uParam1->f_4) > func_303(uParam1)
	{
		return func_304(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_179(var uParam0, int iParam1)
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

void func_180(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_181(vector3 vParam0, int iParam3)
{
	if (func_305(vParam0))
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
			if (func_306(vVar2, vParam0, 2f, 1))
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

struct<2> func_182(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = "INTERACT_GREET";
			Var0.f_1 = -163964935;
			break;
		case 1:
			Var0 = "INTERACT_INSULT";
			Var0.f_1 = 648122183;
			break;
		case 2:
			Var0 = "GREET_POS";
			Var0.f_1 = -163964935;
			break;
		case 3:
			Var0 = "GREET_NEG";
			Var0.f_1 = 648122183;
			break;
		case 4:
			Var0 = "GREET_POS";
			Var0.f_1 = -163964935;
			break;
		case 5:
			Var0 = "GREET_NEG";
			Var0.f_1 = 648122183;
			break;
		case 6:
			Var0 = "BM1_UC_NAME";
			Var0.f_1 = -163964935;
			break;
		case 7:
			Var0 = "BM1_UC_NONAME";
			Var0.f_1 = 648122183;
			break;
		case 8:
			Var0 = "BM1_UC_GIVE";
			Var0.f_1 = -163964935;
			break;
		case 9:
			Var0 = "GREET_NEG";
			Var0.f_1 = 648122183;
			break;
		case 11:
			Var0 = "BM1_UC_CZY";
			Var0.f_1 = -163964935;
			break;
		case 10:
			Var0 = "BM1_UC_NOCZY";
			Var0.f_1 = 648122183;
			break;
		case 12:
			Var0 = "BM1_UC_SURE";
			Var0.f_1 = -163964935;
			break;
		case 13:
			Var0 = "BM1_UC_NO";
			Var0.f_1 = 648122183;
			break;
		case 14:
			Var0 = "BM1_UC_NO";
			Var0.f_1 = -163964935;
			break;
		case 15:
			Var0 = "GREET_POS";
			Var0.f_1 = -163964935;
			break;
		case 16:
			Var0 = "GREET_NEG";
			Var0.f_1 = 648122183;
			break;
	}
	return Var0;
}

void func_183(int* iParam0, char* sParam1)
{
	if (func_223(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_307(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_222(iParam0, 1);
}

void func_184(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_220(iParam0, 4))
		{
			func_224(&(iParam0->f_6), 1, 1);
			func_221(iParam0, 4);
		}
	}
	else if (func_220(iParam0, 4))
	{
		func_222(iParam0, 4);
		func_221(iParam0, 14);
	}
}

void func_185(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_224(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_230(iParam0, 0);
		}
	}
}

void func_186(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_223((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_224(&((*uParam0)[iVar0]->f_6), 1, 1);
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

void func_187(int iParam0)
{
	Var0 = { func_182(0) };
	func_309(iParam0->f_317[0], Var0, func_308(), Var0.f_1, 0, 0, 0, 1, 0);
	Var0 = { func_182(1) };
	sVar2 = func_310(iParam0, &iVar3);
	func_309(iParam0->f_317[1], Var0, sVar2, Var0.f_1, 0, 0, 0, 1, iVar3);
	func_311(&(iParam0->f_218[0]), &(iParam0->f_317), 15f, 2, 0, 0, 0, 0, 0);
	func_114(iParam0, func_113(3, 0, 0), 1);
	func_77(iParam0->f_317[0], 0, 0);
	func_77(iParam0->f_317[1], 0, 0);
}

int func_188(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_312(&iVar0);
	if (func_313(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_190(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_313(iVar0, 134217728))
	{
		func_314(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_315(558))
				{
					func_316(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

bool func_189(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_223(uParam0->f_6))
	{
		if (is_bit_set(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_317(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

int func_190(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_312(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_318(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			set_ped_reset_flag(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			set_ped_reset_flag(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_18(&(iParam1->f_13));
		}
		if (func_319(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_320(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_190(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_321(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_322(*uParam0, 1, 1);
						}
					}
					else if (func_323(iParam1, 22))
					{
						func_322(*uParam0, 0, 1);
					}
				}
				if (func_324(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_325(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_326(iParam8);
					if (func_327(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_328(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_329(iParam1, uParam3, fVar8);
					if (func_330(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_186(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_331(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_324(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_332(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_327(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_325(uParam0, func_324(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_326(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_186(uParam3, 0, 0, 1, 1);
					}
					func_333(iParam1, 1);
				}
				func_329(iParam1, uParam3, fVar8);
				if (func_331(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!is_bit_set(*iParam1, 3))
		{
			func_15(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_191(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!does_entity_exist(*uParam1))
	{
		return;
	}
	if (func_197(*uParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0]->f_6++;
	if (Global_40.f_11623[iParam0]->f_6 == 1 && func_335(func_334(-1342635612)) < 5)
	{
		func_336(func_334(-1342635612), 1);
	}
	Global_40.f_11623[iParam0]->f_3 = func_121();
	func_180(uParam2, iParam3);
	(*Global_1396257)[iParam0]->f_631 = 1;
}

void func_192(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
{
	if (!does_entity_exist(*uParam0))
	{
		return;
	}
	if (is_shocking_event_in_sphere(iParam2, get_entity_coords(*uParam0, true, false), fParam3))
	{
		return;
	}
	*uParam1 = add_shocking_event_for_entity(iParam2, *uParam0, fParam4, fParam3, fParam3, -1f, -1f, 180f, false, false, -1, -1);
}

void func_193(var uParam0, var uParam1)
{
	if (_0xdd0b7c5ae58f721d(uParam0) && !_0x927b810e43e99932(uParam0))
	{
		_0xb8b207c34285e978(uParam0);
		uVar0[0] = uParam1;
		_0xfeb8646818294c75(uParam0, &uVar0);
	}
}

void func_194(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (bParam8)
	{
		set_ped_reset_flag(iParam0, 229, true);
	}
	if (is_ped_a_player(iParam0))
	{
		if (bParam3 && _get_ped_crouch_movement(iParam0))
		{
			_set_ped_crouch_movement(iParam0, false, 0, false);
		}
		func_232(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(iParam0, 188, true);
		}
	}
}

bool func_195(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*uParam3 >= iParam4)
	{
		return false;
	}
	if (*uParam1)
	{
		if (!func_136(uParam2))
		{
			func_137(uParam2, 0f);
			return false;
		}
		else if (func_141(uParam2) > iParam6)
		{
			func_74(uParam2);
			*uParam3++;
			*uParam1 = 0;
			return false;
		}
		else
		{
			return false;
		}
	}
	if (is_scripted_speech_playing(*uParam0))
	{
		if (fParam7 == 0f)
		{
			if (!does_entity_exist(*uParam0) || !does_entity_exist(Global_35))
			{
				return false;
			}
			fParam7 = func_293(*uParam0, Global_35, 1, 1);
		}
		if (iParam5 == 0)
		{
			if (fParam7 >= 0f && fParam7 < 10f)
			{
				iParam5 = 249295937;
			}
			else if (fParam7 >= 10f && fParam7 < 20f)
			{
				iParam5 = 1715123483;
			}
			else if (fParam7 >= 20f && fParam7 < 30f)
			{
				iParam5 = 1891783641;
			}
			else if (fParam7 >= 30f && fParam7 < 50f)
			{
				iParam5 = 2001176446;
			}
			else
			{
				iParam5 = 1515458263;
			}
		}
		force_sonar_blips_this_frame();
		allow_sonar_blips(true);
		_trigger_sonar_blip_2(iParam5, *uParam0);
		*uParam1 = 1;
		return true;
	}
	return false;
}

char* func_196(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "agnes_dowd";
		case 1:
			return "anders_helgerson";
		case 2:
			return "armadillo_town_crier";
		case 3:
			return "bland_preacher";
		case 4:
			return "blind_man_cassidy";
		case 6:
			return "chelonian_master";
		case 7:
			return "civil_war_commando";
		case 5:
			return "crackpot_robot";
		case 8:
			return "dorothea_wicklow";
		case 9:
			return "endless_strainer";
		case 10:
			return "early_eugenics_proponent";
		case 11:
			return "gavins_friend";
		case 12:
			return "giant";
		case 13:
			return "grizzeld_jon";
		case 14:
			return "joe_butler";
		case 15:
			return "john_the_baptising_madman";
		case 16:
			return "lillian_powell";
		case 17:
			return "mad_scientist";
		case 18:
			return "mayor_of_strawberry";
		case 19:
			return "bum_civil_war_vet";
		case 20:
			return "philosopher_in_cave";
		case 21:
			return "poor_joe";
		case 22:
			return "sheriff_of_tumbleweed";
		case 23:
			return "soothsayer";
		case 25:
			return "swamp_weirdo_sonny";
		case 24:
			return "sun_worshipper";
		case 26:
			return "thomas_downe";
		case 27:
			return "timothy_donahue";
		case 28:
			return "tiny_hermit_in_cabin";
		case 29:
			return "vampire";
		default:
			break;
	}
	return "speci";
}

bool func_197(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_198(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_199(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_305(vParam0))
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
		if (func_337(vParam0))
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
	func_338(iVar0, bParam8);
	return iVar0;
}

int func_200()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_201(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_202(int iParam0)
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

int func_203(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_339(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_200())
	{
		return -1;
	}
	iVar0 = func_201(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_340(iVar1, 0);
	func_341(iVar1, 0);
	func_342(iVar1, 0);
	func_343(iVar1, 0);
	func_344(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_345(iVar1, iParam4);
	}
	return iVar1;
}

int func_204(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

int func_205(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_4;
	}
	return 0;
}

int func_206()
{
	return Global_1572887->f_12;
}

bool func_207(var uParam0, int iParam1, char* sParam2)
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

void func_208(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_210(&(uParam0->f_1), 128);
	}
	else
	{
		func_211(&(uParam0->f_1), 128);
	}
}

void func_209(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_211(uParam0, 268435456);
	}
	else
	{
		func_210(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_211(uParam0, 1073741824);
	}
	else
	{
		func_210(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_211(uParam0, 536870912);
	}
	else
	{
		func_210(uParam0, 536870912);
	}
}

void func_210(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_211(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_212(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_346(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_213(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

int func_214(vector3 vParam0, vector3 vParam3)
{
	return add_scenario_blocking_area((vParam0.x - vParam3.x), (vParam0.y - vParam3.y), (vParam0.z - vParam3.z), (vParam0.x + vParam3.x), (vParam0.y + vParam3.y), (vParam0.z + vParam3.z), 0, 15);
}

int func_215(int iParam0, int iParam1, int iParam2)
{
	iVar0 = get_random_int_in_range(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_347())
		{
			iVar0 = (iVar0 - 1);
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0 = (iVar0 - 1);
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_348(func_347(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

bool func_216(int iParam0)
{
	if ((!func_19(iParam0->f_253, 4) || !func_19(iParam0->f_253, 8)) || !func_19(iParam0->f_253, 16))
	{
		if (func_349(&(iParam0->f_220), &(iParam0->f_218), 3, get_entity_coords(&(iParam0->f_218[0]), true, false), 5f, 0, 1, 1, -1, 1, 0, -1082130432, 0, 1) >= 1)
		{
			return true;
		}
	}
	return false;
}

int func_217(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_350(iParam0, vVar0, iParam2);
}

bool func_218(var uParam0, float fParam1, float fParam2)
{
	if (Global_1935630->f_12)
	{
		return false;
	}
	if (is_entity_dead(*uParam0))
	{
		return false;
	}
	if (fParam1 == 0f)
	{
		if (fParam2 == 0f)
		{
			if (func_135(Global_35, *uParam0, 25f, 1))
			{
				return true;
			}
		}
		else if (fParam2 <= 25f)
		{
			return true;
		}
	}
	else if (fParam2 == 0f)
	{
		if (func_135(Global_35, *uParam0, fParam1, 1))
		{
			return true;
		}
	}
	else if (fParam2 <= fParam1)
	{
		return true;
	}
	return false;
}

bool func_219(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return true;
	}
	bVar0 = _0x1f0e401031e20146(*uParam0, sParam1);
	if (bVar0)
	{
		return true;
	}
	bVar1 = _0xa9016536015de29d(*uParam0, sParam1);
	if (!bVar1)
	{
		return true;
	}
	bVar2 = _0x23e33cb9f4a3f547(*uParam0, sParam1);
	if (!bVar2)
	{
		return true;
	}
	bVar3 = _0x0df57f86fe71dbe5(*uParam0, sParam1);
	if (bVar2 || bVar3)
	{
		_0xae6ada8fe7e84acc(*uParam0, sParam1);
	}
	return false;
}

bool func_220(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_221(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_222(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_223(int iParam0)
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

void func_224(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_223(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_351(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_352(iVar0);
	*uParam0 = 0;
}

void func_225(int iParam0, int iParam1, int iParam2)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!is_ped_a_player(iParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	_0xaac0ee3b4999abb5(iParam0, iParam1);
	_0xf634e2892220ef34(iParam0, iParam2);
}

bool func_226(var uParam0)
{
	if (!func_136(uParam0))
	{
		return false;
	}
	if (func_138(uParam0) >= 20f)
	{
		func_74(uParam0);
		return true;
	}
	return false;
}

int func_227(int iParam0, bool bParam1)
{
	iVar0 = func_353();
	if (bParam1 && is_entity_dead(iVar0))
	{
		return -1;
	}
	return &Global_1955499;
}

void func_228(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_353();
	if (!is_entity_dead(iVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = func_227(iParam1, bParam2);
			if (iVar2 != -1)
			{
				iVar1 = (*Global_1955500)[iVar2]->f_2;
				if (func_354(iVar2, 512))
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

void func_229(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_230(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_74(&(iParam0->f_18));
}

bool func_231(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_232(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		disable_control_action(0, -640622144, false);
	}
	disable_control_action(0, -562475458, false);
	disable_control_action(0, -128997553, false);
	disable_control_action(0, 130948705, false);
	if (is_ped_on_mount(Global_35))
	{
		disable_control_action(0, 1632043089, false);
		disable_control_action(0, 1623727326, false);
		disable_control_action(0, -922478227, false);
	}
	if (bParam0)
	{
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, 1287709438, false);
		disable_control_action(0, -1304887797, false);
	}
	if (bParam3)
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
		if (is_ped_on_mount(Global_35))
		{
			disable_control_action(0, 440314811, false);
			disable_control_action(0, 2028806450, false);
			disable_control_action(0, 371916472, false);
		}
	}
	if (bParam4)
	{
		disable_control_action(0, -620139643, false);
	}
	func_355(0);
	if (bParam1)
	{
		disable_control_action(0, -822242784, false);
	}
	if (!is_ped_injured(Global_35))
	{
		if (bParam2)
		{
			set_ped_reset_flag(Global_35, 129, true);
			set_ped_reset_flag(Global_35, 189, true);
		}
		if (bParam6)
		{
			if (!get_ped_config_flag(Global_35, 43, true))
			{
				set_ped_config_flag(Global_35, 43, true);
			}
		}
	}
}

void func_233(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_206() != -1)
	{
		return;
	}
	if ((Global_36616 && func_356(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_357(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_358(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_359(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_358(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_234(int iParam0, bool bParam1)
{
	if (func_206() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || (*Global_1347702)[iVar0]->f_13 & 16384 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_235(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vVar0 = { -240.5095f, 769.4438f, 117.085f };
			break;
		case 1:
			vVar0 = { -303.7218f, 762.0843f, 118.1718f };
			break;
	}
	return vVar0;
}

int func_236(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_237(var uParam0)
{
	return func_251(*uParam0, 2);
}

float func_238()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_239(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_240(var uParam0)
{
	if (is_itemset_valid(uParam0->f_18))
	{
		destroy_itemset(uParam0->f_18);
	}
	if (is_itemset_valid(uParam0->f_19))
	{
		destroy_itemset(uParam0->f_19);
	}
	if (_does_volume_exist(uParam0->f_20))
	{
		_delete_volume(uParam0->f_20);
	}
	if (func_136(&(uParam0->f_13)))
	{
		func_74(&(uParam0->f_13));
	}
}

void func_241(int iParam0, int iParam1)
{
	if (!func_38(iParam0))
	{
		return;
	}
	func_342(iParam0, iParam1);
}

void func_242(int iParam0, int iParam1)
{
	if (!func_38(iParam0))
	{
		return;
	}
	func_343(iParam0, iParam1);
}

void func_243(bool bParam0)
{
	iVar0 = func_360();
	if (does_entity_exist(iVar0))
	{
		if (bParam0)
		{
			_0x6dad6630ae4a74cb(iVar0, 1);
			set_entity_no_collision_entity(Global_35, iVar0, true);
			set_entity_no_collision_entity(iVar0, Global_35, true);
		}
		else
		{
			_0x6dad6630ae4a74cb(iVar0, 0);
		}
	}
}

bool func_244(int iParam0, bool bParam1, bool bParam2)
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

void func_245(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_361(&Global_0, 8);
	}
	if (!func_362() || func_206() != -1)
	{
		return;
	}
	func_361(&Global_0, 1);
}

void func_246()
{
	_0x9428447ded71fc7e("special_ped_scenes");
}

bool func_247()
{
	if (func_206() == -1)
	{
		if (_get_global_block_can_be_accessed(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if ((*Global_1392915)[iVar0]->f_1 != -1)
				{
					if (func_363((*Global_1392915)[iVar0]->f_4))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		return false;
	}
	return false;
}

int func_248(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_249()
{
	return Global_1310750->f_16077 != 0;
}

bool func_250(var uParam0, int iParam1)
{
	return func_313(*uParam0, iParam1);
}

bool func_251(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_252(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_253(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_254(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_255(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_256(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_363((*Global_1835011)[iParam0]->f_1);
}

int func_257(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_364((*Global_1835011)[iParam0]->f_1);
}

bool func_258(int iParam0)
{
	iVar0 = func_365();
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

int func_259(var uParam0, var uParam1, float fParam2, var uParam3)
{
	if (!does_entity_exist(*uParam0))
	{
		return 0;
	}
	vVar0 = { get_entity_forward_vector(*uParam0) };
	vVar3 = { get_entity_coords(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_366(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_260(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	if (!does_entity_exist(*uParam0))
	{
		if (_does_volume_exist(*uParam1))
		{
			_0x74c2b3dc0b294102(*uParam1);
			_0xa1cfb35069d23c23(*uParam1);
			_delete_volume(*uParam1);
		}
		return 0;
	}
	vVar2 = { get_entity_forward_vector(*uParam0) };
	vVar5 = { get_entity_coords(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!func_367(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (_does_volume_exist(*uParam1))
		{
			_0x74c2b3dc0b294102(*uParam1);
			_0xa1cfb35069d23c23(*uParam1);
			_delete_volume(*uParam1);
		}
		return 0;
	}
	else
	{
		if (!_does_volume_exist(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = _create_volume_cylinder_with_custom_name(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			_0xb56d41a694e42e86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			_0x18262cafebb5fbe1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { get_entity_coords(*uParam0, true, false) };
		if (!func_368(iVar1, 0))
		{
			func_369(&iVar1, vVar8, 1083179008);
		}
		return 1;
	}
	return 0;
}

bool func_261()
{
	return Global_1392040->f_6;
}

bool func_262()
{
	if (Global_1914319->f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_263(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_264(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_370();
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
			func_371(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_265(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_266(bool bParam0)
{
	if (func_372(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_267(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_206() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_373(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_373(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_298(iVar0) == -1)
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

void func_268(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_374(uParam0);
	}
}

bool func_269(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_298(iParam2);
	}
	else
	{
		iVar1 = func_297(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_298(iParam0);
	}
	else
	{
		iVar0 = func_297(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_313(*uParam1, 8388608))
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

float func_270(int iParam0, int iParam1)
{
	return func_293(iParam0, iParam1, 1, 1);
}

float func_271(var uParam0)
{
	return uParam0->f_26;
}

bool func_272(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_273(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_211(uParam0, 134217728);
	}
	else
	{
		func_210(uParam0, 134217728);
	}
}

void func_274()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_275(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_293(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_375(iVar0, 0)))
		{
			if (func_376(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_276(var uParam0)
{
	return uParam0->f_17;
}

bool func_277(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_313(*uParam0, 4194304))
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

int func_278(var uParam0)
{
	return uParam0->f_18;
}

bool func_279(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_375(iVar0, 0)))
		{
			if (func_377(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_280(bool bParam0, bool bParam1, bool bParam2)
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

float func_281(var uParam0)
{
	return uParam0->f_23;
}

int func_282(var uParam0)
{
	return uParam0->f_21;
}

int func_283(var uParam0)
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

bool func_284(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_378(iParam0, vParam4, 0.5f))
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

int func_285(int iParam0)
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
	if (func_379(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_286(int iParam0)
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

bool func_287(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_380(iParam1))
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

bool func_288(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_380(iParam1))
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

bool func_289(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_380(iParam1))
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

bool func_290(int iParam0, int iParam1)
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

bool func_291(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_381(iParam0, 1, 0, 0) != 2055893578)
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

bool func_292(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_293(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_294(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_295(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_295(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_296(var uParam0)
{
	return uParam0->f_24;
}

int func_297(int iParam0)
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

int func_298(int iParam0)
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

int func_299(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_290(Global_35, &iVar1))
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
		fVar2 = func_293(iParam0, player_ped_id(), 0, 1);
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
		if (func_293(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_300(int iParam0, var uParam1, bool bParam2)
{
	func_372(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_301(uParam1, iVar0))
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
				if (!bParam2 || !func_301(uParam1, iVar1))
				{
					if (func_295(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_301(var uParam0, int iParam1)
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

int func_302(int iParam0)
{
	if (func_41())
	{
		return 0;
	}
	return func_382((*Global_1347702)[58]->f_15, 1);
}

int func_303(var uParam0)
{
	return uParam0->f_20;
}

int func_304(int iParam0, var uParam1, bool bParam2, float fParam3)
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

bool func_305(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_306(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_307(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_223(iParam0))
	{
		return;
	}
	iVar0 = func_351(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

char* func_308()
{
	return "GREET_MALE";
}

void func_309(int* iParam0, var uParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = uParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_223(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_383(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_307(iParam0->f_6, iParam0->f_5, 0);
			}
			func_384(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_183(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

char* func_310(int iParam0, int iParam1)
{
	if (func_385())
	{
		switch (iParam0->f_255)
		{
			case 0:
				*iParam1 = 1;
				return "INSULT_MICKEY_CONV_PART1";
			case 1:
				*iParam1 = 2;
				return "INSULT_MICKEY_CONV_PART1";
			case 2:
				*iParam1 = 2;
				return "INSULT_MICKEY_CONV_PART3";
			case 4:
				*iParam1 = 4;
				return "INSULT_TIMID_MALE_CONV_PART1";
			case 5:
				*iParam1 = 2;
				return "INSULT_TIMID_MALE_CONV_PART2";
			case 6:
				*iParam1 = 16;
				return "INSULT_MALE_CONV_PART1";
			case 7:
				*iParam1 = 4;
				return "INSULT_TIMID_MALE_CONV_PART2";
			default:
				*iParam1 = 1;
				return "INSULT_MICKEY_CONV_PART1";
		}
	}
	else
	{
		*iParam1 = 2;
		return "INSULT_MALE_CONV_PART1";
	}
	*iParam1 = 2;
	return "INSULT_MALE_CONV_PART1";
}

void func_311(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_386(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_312(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

bool func_313(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_314(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_387(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		uVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_388(Global_35, *uParam2, sVar1, "", -1082130432, uVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_315(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_206() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_316(int iParam0, bool bParam1)
{
	func_389(iParam0, &iVar0, &iVar1);
	if (!func_390(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_391(iVar0, iVar1);
}

bool func_317(int iParam0, bool bParam1)
{
	if (bParam1 && !func_223(iParam0))
	{
		return false;
	}
	return !func_392(iParam0, 4);
}

float func_318(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_319(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_393(iParam0, iParam1))
		{
			if (!func_313(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_186(uParam2, 0, 0, 1, 0);
				func_211(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_313(iParam1->f_10, 1))
		{
			func_394(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_210(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_320(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_313(iParam4, 32);
		func_185(iParam1, uParam2, 0);
		iVar5 = func_395(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_186(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_313(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_313(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_313(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_313(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_313(iParam4, 8388608) || func_313(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_313(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_313(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_323(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_323(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_313(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (_0x870708a6e147a9ad(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_396(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!is_string_null_or_empty(&cVar0))
						{
							iParam6 = get_hash_key(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
				if (!is_string_null_or_empty(sParam5) && iParam6 == 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, get_hash_key(sParam5));
				}
				else if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
			}
			set_ped_config_flag(*uParam0, 130, true);
			set_ped_config_flag(*uParam0, 178, false);
			set_ped_config_flag(*uParam0, 297, true);
			set_ped_config_flag(*uParam0, 301, false);
			if (func_313(iParam4, 268435456))
			{
				iVar8 = func_397(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_398(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_323(iParam1, 23))
			{
				set_ped_config_flag(*uParam0, 315, false);
				set_ped_config_flag(*uParam0, 331, false);
				set_ped_config_flag(*uParam0, 493, true);
			}
			else
			{
				set_ped_config_flag(*uParam0, 315, true);
				set_ped_config_flag(*uParam0, 493, false);
			}
			if (func_313(iParam4, 2) || func_313(iParam4, 16))
			{
				func_322(*uParam0, 1, 1);
			}
			else
			{
				func_322(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_321(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_322(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_323(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_324(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bVar0 = (!_does_volume_exist(iParam2) || is_entity_in_volume(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_399(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_325(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (bParam1)
	{
		if (!is_bit_set(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					set_bit((*uParam4)[iVar0], 14);
					iVar0++;
				}
			}
			func_311(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_313(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_326(int iParam0)
{
	if (func_313(iParam0, 4))
	{
		disable_control_action(0, -128997553, true);
		disable_control_action(0, 130948705, true);
		disable_control_action(0, 42190210, true);
		disable_control_action(0, 1632043089, true);
		disable_control_action(0, 1623727326, true);
		disable_control_action(0, -922478227, true);
		disable_control_action(0, -674562833, true);
		disable_control_action(0, -197984200, true);
		disable_control_action(0, -238861894, true);
	}
	if (func_313(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_313(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_327(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_400(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_401(Global_35)) || func_402(Global_35)) || func_403(Global_35));
	fVar12 = -1f;
	if (func_136(&(iParam1->f_13)))
	{
		fVar12 = func_138(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_223((*uParam4)[iVar0]->f_6);
		func_404(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_405(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_406(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_186(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_407(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_185(iParam1, uParam4, is_bit_set(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = is_bit_set(uParam4[iParam1->f_1], 16);
					if (!iParam1->f_9)
					{
						set_bit(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!is_string_null_or_empty((*uParam4)[iVar0]->f_11))
						{
							if (!is_string_null_or_empty((*uParam4)[iVar0]->f_12))
							{
								task_play_anim(Global_35, (*uParam4)[iVar0]->f_11, (*uParam4)[iVar0]->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_408(iParam1, fParam6, iParam1->f_9))
					{
						func_18(&(iParam1->f_18));
						if (bVar6)
						{
							func_407(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_409(iParam1, fParam2);
	}
	return bVar5;
}

void func_328(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (is_bit_set(uParam0[iVar0], 20))
		{
			if (!is_bit_set(uParam0[iVar0], 21))
			{
				clear_bit((*uParam0)[iVar0], 20);
				clear_bit((*uParam0)[iVar0], 21);
			}
		}
		iVar0++;
	}
}

void func_329(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_410((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_409(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_330(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_411(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_412(iParam1, 0);
				func_185(iParam1, uParam2, func_323(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

int func_331(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		set_bit(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_18(&(iParam1->f_18));
			return 0;
		}
		else if (func_136(&(iParam1->f_18)))
		{
			func_74(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_136(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35))
		{
			return 0;
		}
	}
	return func_413(&(iParam1->f_18), fParam2);
	return 1;
}

void func_332(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_404(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_333(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

struct<2> func_334(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_335(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

void func_336(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_337(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_338(int iParam0, bool bParam1)
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

bool func_339(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_340(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_414(iParam0);
	}
	else
	{
		func_415(iParam0, iParam1);
	}
	func_416();
}

void func_341(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_342(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_343(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_344(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_345(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

void func_346(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_417(iParam1))
		{
			func_418(iParam0, 41788943);
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
			func_419(iParam0, 0, 1);
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
			func_420(iParam0, 0);
			bVar0 = true;
		}
		func_421(iParam0, bParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_347()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_348(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_349(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	if (fParam13 <= 0f)
	{
		iVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam6);
	}
	else
	{
		iVar0 = _create_volume_cylinder(vParam3, 0f, 0f, 0f, iParam6, iParam6, fParam13);
	}
	iVar1 = func_422(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_229(iVar0);
	return iVar1;
}

int func_350(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_423(vVar3, vVar6);
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
	if (func_424(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_351(int iParam0)
{
	return iParam0;
}

void func_352(int iParam0)
{
	if (!func_425(iParam0))
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

int func_353()
{
	switch (func_206())
	{
		case 0:
			return get_player_ped(player_id());
		default:
			break;
	}
	return Global_35;
}

bool func_354(int iParam0, int iParam1)
{
	if (func_244(iParam0, 1, 1))
	{
		return func_19(Global_1955500[iParam0], iParam1);
	}
	return false;
}

void func_355(bool bParam0)
{
	if (bParam0)
	{
		func_426(4);
	}
	func_426(2);
	set_bit(&(Global_1956580->f_1), 0);
}

int func_356(int iParam0)
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

int func_357(int iParam0)
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

void func_358(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_427();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_428(iParam0);
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
	if (func_429(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_41())
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
	Global_40.f_11095.f_35 = func_430(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_427();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_431(iVar1);
		func_433(func_432(), 0, 4000);
		func_434(Global_40.f_11095.f_35);
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
		func_435(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_336(func_334(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_357(14))
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
					sParam4 = func_436(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_437(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_437(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_336(func_334(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_357(4))
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
					sParam4 = func_436(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_437(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_437(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_334(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_438(10, 1);
	}
}

void func_359(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_360()
{
	return Global_1900383->f_393;
}

void func_361(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_362()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_363(int iParam0)
{
	iVar0 = func_439(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_364(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = Global_12106[iParam0]->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_440(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_365()
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

bool func_366(var uParam0, vector3 vParam1, float fParam4)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	if (_0x59b57c4b06531e1e(vParam1, fParam4, *uParam0, 2) > 0)
	{
		_0x20a4bf0e09bee146(*uParam0);
		return true;
	}
	_0x20a4bf0e09bee146(*uParam0);
	return false;
}

bool func_367(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	iVar2 = _0x59b57c4b06531e1e(vParam2, fParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = get_indexed_item_in_itemset(iVar1, *uParam0);
		*iParam1 = iVar0;
		if (does_entity_exist(*iParam1))
		{
			if (!is_entity_dead(*iParam1))
			{
				if (_is_this_model_a_horse(get_entity_model(*iParam1)))
				{
					if (func_441(Global_35, *iParam1, 0))
					{
					}
					else
					{
						_0x20a4bf0e09bee146(*uParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	_0x20a4bf0e09bee146(*uParam0);
	return false;
}

bool func_368(int iParam0, bool bParam1)
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

void func_369(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_79(*iParam0, 518218985))
	{
		clear_ped_tasks(*iParam0, 1, 0);
		_task_smart_flee_style_coord(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

bool func_370()
{
	if (func_442())
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

void func_371(var uParam0, var uParam1)
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

bool func_372(bool bParam0, int iParam1, int iParam2)
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

int func_373(var uParam0)
{
	if (iVar0 == 0)
	{
		if (is_control_just_pressed(0, -171675621))
		{
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, false, false))
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

void func_374(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_210(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_211(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_375(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_376(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_377(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_377(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_378(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_379(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_380(int iParam0)
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

int func_381(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_382(int iParam0, bool bParam1)
{
	switch (func_439(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_383(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_223(iParam0))
	{
		return;
	}
	iVar0 = func_351(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_384(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_223(iParam0))
	{
		return;
	}
	iVar0 = func_351(iParam0);
	if (bParam1)
	{
		func_443(iParam0, 4);
		func_444(iVar0, 1);
		func_445(iVar0, 1);
	}
	else
	{
		func_446(iParam0, 4);
		func_445(iVar0, 0);
	}
}

bool func_385()
{
	if (func_206() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_386(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_223(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_224(&(iParam1->f_6), 0, 1);
	}
	if (!func_223(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_410(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_447(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_223(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_448(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_449(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_450(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_383(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_449(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_384(iParam1->f_6, 0, 1);
				}
				else
				{
					func_384(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_387(int* iParam0)
{
	if (func_323(iParam0, 0))
	{
		if (func_451(iParam0))
		{
			func_333(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

bool func_388(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_452(iParam0, iParam1, sParam2, sParam3, fParam4, uParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_389(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_390(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_453(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_454(iParam0))
	{
		return false;
	}
	if (func_455(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_456(iParam0, 1)) || func_457(32768))
	{
		if (!func_456(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_458())
	{
		return false;
	}
	return true;
}

void func_391(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_392(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_393(int iParam0, int* iParam1)
{
	if (iParam1->f_11 & 1 != 0)
	{
		if (_is_ped_lassoed(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (_is_ped_hogtied(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (is_ped_in_combat(iParam0, func_459((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_394(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_410((*uParam0)[iVar0]))
		{
			func_221((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_395(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_386(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_223((*uParam2)[iVar0]->f_6))
		{
			func_221((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_396(var uParam0)
{
	iVar0 = func_460(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337;
			break;
		case 1:
			iVar1 = 768137552;
			break;
		case 0:
			iVar1 = 1415388528;
			break;
		case 4:
			iVar1 = 1449436544;
			break;
		case 3:
			iVar1 = -1807204482;
			break;
		case 5:
			iVar1 = -1096701282;
			break;
	}
	return iVar1;
}

int func_397(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_398(int* iParam0, int* iParam1)
{
	if (!func_323(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_221(iParam1, 19);
			func_412(iParam0, 23);
			func_461(iParam1, 2);
		}
	}
}

bool func_399(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_462(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!is_entity_dead(get_player_ped(player_id())))
	{
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, bParam2, bParam3))
		{
			if (does_entity_exist(iVar0))
			{
				if (is_entity_a_ped(iVar0))
				{
					func_463(16);
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

int func_400(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_401(int iParam0)
{
	return (func_464(iParam0, 4) || func_464(iParam0, 5));
}

int func_402(int iParam0)
{
	return func_464(iParam0, 7);
}

int func_403(int iParam0)
{
	return func_464(iParam0, 6);
}

void func_404(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_410(iParam1))
		{
			clear_bit(iParam1, 14);
			func_386(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_405(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_465(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_317(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_384(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_384(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_448(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_406(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_466(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_467(iParam1, 1))
	{
		func_468(iParam1, 1);
		return true;
	}
	return false;
}

void func_407(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_77((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_408(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return true;
		}
	}
	return false;
}

void func_409(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_410(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_411(int iParam0)
{
	iVar1 = get_number_of_events(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (get_event_at_index(0, iVar0))
			{
				case 1387172233:
					if (get_event_data(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (is_entity_a_ped(vVar3.z))
								{
									if (iParam0 == get_ped_index_from_entity_index(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

void func_412(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

int func_413(var uParam0, float fParam1)
{
	if (func_469(uParam0, fParam1))
	{
		func_74(uParam0);
		return 1;
	}
	return 0;
}

int func_414(int iParam0)
{
	iVar0 = func_470(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_471(iVar0);
}

int func_415(int iParam0, int iParam1)
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
			func_472(iVar2);
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

void func_416()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_417(int iParam0)
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

void func_418(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_473(iParam0, iParam1))
		{
			if (func_474(iParam0, iParam1))
			{
				if (func_475(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_476(iParam0);
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

void func_419(int iParam0, int iParam1, bool bParam2)
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

void func_420(int iParam0, bool bParam1)
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

void func_421(int iParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		_set_ped_face_feature(iParam0, 41611, 0f);
	}
	else
	{
		_set_ped_face_feature(iParam0, 41611, 1f);
	}
}

int func_422(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	iVar0 = create_itemset(true);
	iVar6 = _0x886171a12f400b89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = get_indexed_item_in_itemset(iVar5, iVar0);
			iVar2 = iVar1;
			if ((does_entity_exist(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_477(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !decor_exist_on(iVar2, "bIgnoreThisPed"))
				{
					if (!func_478(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < get_num_models_in_population_set(iParam7))
							{
								if (is_ped_model(iVar2, get_ped_model_name_in_population_set(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!is_entity_dead(iVar2))
								{
									set_blocking_of_non_temporary_events(iVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	destroy_itemset(iVar0);
	return iVar4;
}

float func_423(vector3 vParam0, vector3 vParam3)
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

bool func_424(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_425(int iParam0)
{
	return func_392(iParam0, 2);
}

void func_426(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_427()
{
	iVar0 = func_479();
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

int func_428(int iParam0)
{
	if (func_206() != -1)
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
	fVar1 = func_318(absf(fVar1) < 1f, func_318(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_429(int iParam0)
{
	if (!func_480(iParam0))
	{
		return false;
	}
	return func_481(iParam0);
}

int func_430(int iParam0, int iParam1, int iParam2)
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

int func_431(int iParam0)
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

int func_432()
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

void func_433(int iParam0, bool bParam1, int iParam2)
{
	func_482((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_483(iParam0);
}

void func_434(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), 0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), 1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_484(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_435(bool bParam0)
{
	bVar3 = false;
	if (func_485(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_486(iVar5, &iVar2, &iVar0))
			{
				if (!func_487(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_488(iVar2);
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
							if (func_489(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_427() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_427() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_490();
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

char* func_436(int iParam0)
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

var func_437(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_491(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_438(int iParam0, int iParam1)
{
	if (!func_492(iParam0))
	{
		return 0;
	}
	if (!func_362())
	{
		return 0;
	}
	if (!func_493(iParam0, &iVar0, &uVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	chal_add_goal_progress_int(iVar0, uVar1, iParam1);
	return 1;
}

int func_439(int iParam0)
{
	if (!func_38(iParam0))
	{
		return -1;
	}
	return func_440(iParam0);
}

int func_440(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_470(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_441(int iParam0, int iParam1, bool bParam2)
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

bool func_442()
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

void func_443(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_444(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_392(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_445(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_446(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

int func_447(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_392(iVar0, 2))
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
				func_494(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_448(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_223(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_351(iParam0);
	func_449(iParam0, 18, 0, 1);
	func_449(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

void func_449(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_223(iParam0))
	{
		return;
	}
	iVar0 = func_351(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_450(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_223(iParam0))
	{
		return;
	}
	iVar0 = func_351(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

bool func_451(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

int func_452(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	uParam5 = uParam5;
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
		if (func_495())
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
				if (func_496(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_293(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_18(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_497(iParam0, iParam1, fVar1, bParam13))
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
				Var3.f_2 = uParam5;
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
				iVar2 = func_348(func_498(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, uParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_453(int iParam0, int iParam1)
{
	if (func_206() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_454(int iParam0)
{
	if (func_206() != -1)
	{
		if (func_456(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_456(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_455(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_456(iParam0, 65536) && !func_456(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_456(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_456(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_456(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_457(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_458()
{
	return Global_1905944->f_5694;
}

int func_459(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

int func_460(int iParam0)
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

void func_461(int* iParam0, int iParam1)
{
	if (!func_220(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_221(iParam0, 14);
		}
	}
}

bool func_462(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_463(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_464(int iParam0, int iParam1)
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

bool func_465(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bVar0 = (is_bit_set(*iParam1, 0) && !is_bit_set(*iParam1, 4));
	if (is_bit_set(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (is_bit_set(*iParam1, 20))
		{
			if (!is_bit_set(*iParam0, 25))
			{
				set_bit(iParam0, 24);
			}
			return true;
		}
	}
	if (is_bit_set(*iParam1, 9))
	{
		clear_bit(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (is_bit_set(*iParam1, 6))
		{
			return true;
		}
	}
	else if (is_bit_set(*iParam1, 5))
	{
		return true;
	}
	if (is_bit_set(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!is_bit_set(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!is_bit_set(*iParam1, 18))
	{
		if (is_bit_set(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!is_bit_set(*iParam1, 2))
	{
		if (is_bit_set(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_466(int iParam0, bool bParam1)
{
	if (bParam1 && !func_223(iParam0))
	{
		return false;
	}
	iVar0 = func_351(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_467(int iParam0, bool bParam1)
{
	if (bParam1 && !func_223(iParam0))
	{
		return false;
	}
	iVar0 = func_351(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_468(int iParam0, bool bParam1)
{
	if (bParam1 && !func_223(iParam0))
	{
		return;
	}
	iVar0 = func_351(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_469(var uParam0, float fParam1)
{
	if (!func_136(uParam0))
	{
		return false;
	}
	if (func_138(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_470(int iParam0)
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

int func_471(int iParam0)
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

int func_472(int iParam0)
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

bool func_473(int iParam0, int iParam1)
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

bool func_474(int iParam0, int iParam1)
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

bool func_475(int iParam0, int iParam1)
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
	if (!func_473(iParam0, iVar0))
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

void func_476(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_477(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!bParam5 && !is_ped_human(iParam0))
	{
		return false;
	}
	if (is_ped_a_player(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (is_entity_a_mission_entity(iParam0))
		{
			return false;
		}
	}
	if (bParam3 && func_499(iParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (is_ped_on_mount(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_500(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_478(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == uParam1[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_479()
{
	return Global_40.f_11095.f_35;
}

bool func_480(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_481(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_482(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_501(bParam1);
	}
}

void func_483(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_484(int iParam0)
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

bool func_485(int iParam0)
{
	if (!func_502(23, &vVar0))
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

bool func_486(int iParam0, int iParam1, int iParam2)
{
	if (!func_502(23, &Var0))
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

bool func_487(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_488(int iParam0)
{
	return iParam0;
}

int func_489(int iParam0)
{
	if (!func_487(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_490()
{
	iVar0 = func_427();
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

void func_491(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_492(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_493(int iParam0, int iParam1, var uParam2)
{
	if (!func_492(iParam0))
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

void func_494(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			_uiprompt_set_hold_auto_fill_mode(iVar0, iParam16, uParam15);
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
	func_444(iParam0, 1);
	func_445(iParam0, 1);
	func_446(iParam0, 128);
}

bool func_495()
{
	return (Global_1894899 & 1 != 0 && func_503() != -1);
}

float func_496(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_293(Global_35, iParam0, bParam1, bParam2);
}

bool func_497(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_498(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, var uParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_239(iParam0, &Var0);
}

bool func_499(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_group_member(iParam0, func_504(), 1))
	{
		return true;
	}
	return false;
}

int func_500(int iParam0, bool bParam1)
{
	return func_505(iParam0, Global_1894899->f_2, bParam1);
}

void func_501(bool bParam0)
{
	func_506(bParam0);
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

bool func_502(int iParam0, var uParam1)
{
	if (!func_507(iParam0))
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

int func_503()
{
	return Global_1894899->f_2;
}

int func_504()
{
	return get_player_group(get_player_index());
}

int func_505(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_508(iParam1, &iVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_509(iParam0, iVar0, iVar1, bParam2);
}

void func_506(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_507(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_508(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_206() != -1;
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

int func_509(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_510(iVar2) != 0 && _0x800df3fc913355f3(func_511(iVar2)))
		{
			if (func_511(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_510(int iParam0)
{
	if (!func_512(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

int func_511(int iParam0)
{
	if (!func_512(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

bool func_512(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

