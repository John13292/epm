// generated by Fast Light User Interface Designer (fluid) version 1.0100

#include "ListEditor.h"

inline void ListEditor::cb_window_i(Fl_Window*, void*) {
  close_cb();
}
void ListEditor::cb_window(Fl_Window* o, void* v) {
  ((ListEditor*)(o->user_data()))->cb_window_i(o,v);
}

inline void ListEditor::cb_New_i(Fl_Menu_*, void*) {
  new_cb();
}
void ListEditor::cb_New(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_New_i(o,v);
}

inline void ListEditor::cb_Open_i(Fl_Menu_*, void*) {
  open_cb();
}
void ListEditor::cb_Open(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Open_i(o,v);
}

inline void ListEditor::cb_history_items_i(Fl_Menu_*, void*) {
  open_history_cb(history_items[0].label());
}
void ListEditor::cb_history_items(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_history_items_i(o,v);
}

inline void ListEditor::cb_filename_i(Fl_Menu_*, void*) {
  open_history_cb(history_items[1].label());
}
void ListEditor::cb_filename(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_filename_i(o,v);
}

inline void ListEditor::cb_filename1_i(Fl_Menu_*, void*) {
  open_history_cb(history_items[2].label());
}
void ListEditor::cb_filename1(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_filename1_i(o,v);
}

inline void ListEditor::cb_filename2_i(Fl_Menu_*, void*) {
  open_history_cb(history_items[3].label());
}
void ListEditor::cb_filename2(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_filename2_i(o,v);
}

inline void ListEditor::cb_filename3_i(Fl_Menu_*, void*) {
  open_history_cb(history_items[4].label());
}
void ListEditor::cb_filename3(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_filename3_i(o,v);
}

inline void ListEditor::cb_filename4_i(Fl_Menu_*, void*) {
  open_history_cb(history_items[5].label());
}
void ListEditor::cb_filename4(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_filename4_i(o,v);
}

inline void ListEditor::cb_filename5_i(Fl_Menu_*, void*) {
  open_history_cb(history_items[6].label());
}
void ListEditor::cb_filename5(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_filename5_i(o,v);
}

inline void ListEditor::cb_filename6_i(Fl_Menu_*, void*) {
  open_history_cb(history_items[7].label());
}
void ListEditor::cb_filename6(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_filename6_i(o,v);
}

inline void ListEditor::cb_filename7_i(Fl_Menu_*, void*) {
  open_history_cb(history_items[8].label());
}
void ListEditor::cb_filename7(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_filename7_i(o,v);
}

inline void ListEditor::cb_filename8_i(Fl_Menu_*, void*) {
  open_history_cb(history_items[9].label());
}
void ListEditor::cb_filename8(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_filename8_i(o,v);
}

inline void ListEditor::cb_Close_i(Fl_Menu_*, void*) {
  close_cb();
}
void ListEditor::cb_Close(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Close_i(o,v);
}

inline void ListEditor::cb_Save_i(Fl_Menu_*, void*) {
  save_cb();
}
void ListEditor::cb_Save(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Save_i(o,v);
}

inline void ListEditor::cb_Save1_i(Fl_Menu_*, void*) {
  save_as_cb();
}
void ListEditor::cb_Save1(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Save1_i(o,v);
}

inline void ListEditor::cb_Build_i(Fl_Menu_*, void*) {
  build_cb();
}
void ListEditor::cb_Build(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Build_i(o,v);
}

inline void ListEditor::cb_Quit_i(Fl_Menu_*, void*) {
  quit_cb();
}
void ListEditor::cb_Quit(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Quit_i(o,v);
}

inline void ListEditor::cb_Copy_i(Fl_Menu_*, void*) {
  copy_cb();
}
void ListEditor::cb_Copy(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Copy_i(o,v);
}

inline void ListEditor::cb_Cu_i(Fl_Menu_*, void*) {
  cut_cb();
}
void ListEditor::cb_Cu(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Cu_i(o,v);
}

inline void ListEditor::cb_Delete_i(Fl_Menu_*, void*) {
  delete_cb();
}
void ListEditor::cb_Delete(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Delete_i(o,v);
}

inline void ListEditor::cb_Paste_i(Fl_Menu_*, void*) {
  paste_cb();
}
void ListEditor::cb_Paste(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Paste_i(o,v);
}

inline void ListEditor::cb_Select_i(Fl_Menu_*, void*) {
  copy_cb();
}
void ListEditor::cb_Select(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Select_i(o,v);
}

inline void ListEditor::cb_Select1_i(Fl_Menu_*, void*) {
  copy_cb();
}
void ListEditor::cb_Select1(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Select1_i(o,v);
}

inline void ListEditor::cb_Add_i(Fl_Menu_*, void*) {
  copy_cb();
}
void ListEditor::cb_Add(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Add_i(o,v);
}

inline void ListEditor::cb_file_settings_item_i(Fl_Menu_*, void*) {
  file_settings_cb(0);
}
void ListEditor::cb_file_settings_item(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_file_settings_item_i(o,v);
}

inline void ListEditor::cb_P_i(Fl_Menu_*, void*) {
  project_settings_cb();
}
void ListEditor::cb_P(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_P_i(o,v);
}

inline void ListEditor::cb_Contents_i(Fl_Menu_*, void*) {
  help_cb("index.html");
}
void ListEditor::cb_Contents(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Contents_i(o,v);
}

inline void ListEditor::cb_Introduction_i(Fl_Menu_*, void*) {
  help_cb("index.html");
}
void ListEditor::cb_Introduction(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Introduction_i(o,v);
}

inline void ListEditor::cb_Basic_i(Fl_Menu_*, void*) {
  help_cb("index.html");
}
void ListEditor::cb_Basic(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Basic_i(o,v);
}

inline void ListEditor::cb_Advanced_i(Fl_Menu_*, void*) {
  help_cb("index.html");
}
void ListEditor::cb_Advanced(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Advanced_i(o,v);
}

inline void ListEditor::cb_Version_i(Fl_Menu_*, void*) {
  help_cb("index.html");
}
void ListEditor::cb_Version(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Version_i(o,v);
}

Fl_Menu_Item ListEditor::menu_menubar[] = {
 {"&File", 0,  0, 0, 64, 0, 0, 14, 56},
 {"&New", 0x4006e,  (Fl_Callback*)ListEditor::cb_New, 0, 0, 0, 0, 14, 56},
 {"&Open...", 0x4006f,  (Fl_Callback*)ListEditor::cb_Open, 0, 0, 0, 0, 14, 56},
 {"Open &Previous", 0,  0, 0, 65, 0, 0, 14, 56},
 {"filename", 0x40030,  (Fl_Callback*)ListEditor::cb_history_items, 0, 16, 0, 0, 14, 56},
 {"filename", 0x40031,  (Fl_Callback*)ListEditor::cb_filename, 0, 16, 0, 0, 14, 56},
 {"filename", 0x40032,  (Fl_Callback*)ListEditor::cb_filename1, 0, 16, 0, 0, 14, 56},
 {"filename", 0x40033,  (Fl_Callback*)ListEditor::cb_filename2, 0, 16, 0, 0, 14, 56},
 {"filename", 0x40034,  (Fl_Callback*)ListEditor::cb_filename3, 0, 16, 0, 0, 14, 56},
 {"filename", 0x40035,  (Fl_Callback*)ListEditor::cb_filename4, 0, 16, 0, 0, 14, 56},
 {"filename", 0x40036,  (Fl_Callback*)ListEditor::cb_filename5, 0, 16, 0, 0, 14, 56},
 {"filename", 0x40037,  (Fl_Callback*)ListEditor::cb_filename6, 0, 16, 0, 0, 14, 56},
 {"filename", 0x40038,  (Fl_Callback*)ListEditor::cb_filename7, 0, 16, 0, 0, 14, 56},
 {"filename", 0x40039,  (Fl_Callback*)ListEditor::cb_filename8, 0, 16, 0, 0, 14, 56},
 {0},
 {"&Close", 0x40077,  (Fl_Callback*)ListEditor::cb_Close, 0, 128, 0, 0, 14, 56},
 {"&Save", 0x40073,  (Fl_Callback*)ListEditor::cb_Save, 0, 0, 0, 0, 14, 56},
 {"Save &As...", 0x50073,  (Fl_Callback*)ListEditor::cb_Save1, 0, 128, 0, 0, 14, 56},
 {"&Build Package...", 0x40062,  (Fl_Callback*)ListEditor::cb_Build, 0, 128, 0, 0, 14, 56},
 {"&Quit", 0x40071,  (Fl_Callback*)ListEditor::cb_Quit, 0, 0, 0, 0, 14, 56},
 {0},
 {"&Edit", 0,  0, 0, 64, 0, 0, 14, 56},
 {"&Copy", 0x40063,  (Fl_Callback*)ListEditor::cb_Copy, 0, 0, 0, 0, 14, 56},
 {"Cu&t", 0x40078,  (Fl_Callback*)ListEditor::cb_Cu, 0, 0, 0, 0, 14, 56},
 {"&Delete", 0xffff,  (Fl_Callback*)ListEditor::cb_Delete, 0, 0, 0, 0, 14, 56},
 {"&Paste", 0x40076,  (Fl_Callback*)ListEditor::cb_Paste, 0, 128, 0, 0, 14, 56},
 {"&Select All", 0x40061,  (Fl_Callback*)ListEditor::cb_Select, 0, 0, 0, 0, 14, 56},
 {"Select &None", 0x50061,  (Fl_Callback*)ListEditor::cb_Select1, 0, 128, 0, 0, 14, 56},
 {"&Add File(s)...", 0x40069,  (Fl_Callback*)ListEditor::cb_Add, 0, 0, 0, 0, 14, 56},
 {"&File Settings...", 0x40066,  (Fl_Callback*)ListEditor::cb_file_settings_item, 0, 0, 0, 0, 14, 56},
 {"P&roject Settings...", 0x40070,  (Fl_Callback*)ListEditor::cb_P, 0, 0, 0, 0, 14, 56},
 {0},
 {"&Help", 0,  0, 0, 64, 0, 0, 14, 56},
 {"&Contents...", 0xffbe,  (Fl_Callback*)ListEditor::cb_Contents, 0, 128, 0, 0, 14, 56},
 {"&Introduction...", 0,  (Fl_Callback*)ListEditor::cb_Introduction, 0, 0, 0, 0, 14, 56},
 {"&Basic...", 0,  (Fl_Callback*)ListEditor::cb_Basic, 0, 0, 0, 0, 14, 56},
 {"&Advanced...", 0,  (Fl_Callback*)ListEditor::cb_Advanced, 0, 128, 0, 0, 14, 56},
 {"&Version...", 0,  (Fl_Callback*)ListEditor::cb_Version, 0, 0, 0, 0, 14, 56},
 {0},
 {0}
};
Fl_Menu_Item* ListEditor::history_items = ListEditor::menu_menubar + 4;
Fl_Menu_Item* ListEditor::file_settings_item = ListEditor::menu_menubar + 29;

inline void ListEditor::cb_margin_manager_i(ListManager*, void*) {
  margins_cb();
}
void ListEditor::cb_margin_manager(ListManager* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_margin_manager_i(o,v);
}

inline void ListEditor::cb_margin_items_i(Fl_Menu_*, void*) {
  margins_cb();
}
void ListEditor::cb_margin_items(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_margin_items_i(o,v);
}

inline void ListEditor::cb_User_i(Fl_Menu_*, void*) {
  margins_cb();
}
void ListEditor::cb_User(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_User_i(o,v);
}

inline void ListEditor::cb_Group_i(Fl_Menu_*, void*) {
  margins_cb();
}
void ListEditor::cb_Group(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Group_i(o,v);
}

inline void ListEditor::cb_Destination_i(Fl_Menu_*, void*) {
  margins_cb();
}
void ListEditor::cb_Destination(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Destination_i(o,v);
}

inline void ListEditor::cb_Source_i(Fl_Menu_*, void*) {
  margins_cb();
}
void ListEditor::cb_Source(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Source_i(o,v);
}

inline void ListEditor::cb_Package_i(Fl_Menu_*, void*) {
  margins_cb();
}
void ListEditor::cb_Package(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Package_i(o,v);
}

Fl_Menu_Item ListEditor::menu_margin_menu[] = {
 {"Mode", 0,  (Fl_Callback*)ListEditor::cb_margin_items, 0, 6, 0, 0, 14, 56},
 {"User", 0,  (Fl_Callback*)ListEditor::cb_User, 0, 6, 0, 0, 14, 56},
 {"Group", 0,  (Fl_Callback*)ListEditor::cb_Group, 0, 6, 0, 0, 14, 56},
 {"Destination Path", 0,  (Fl_Callback*)ListEditor::cb_Destination, 0, 6, 0, 0, 14, 56},
 {"Source Path", 0,  (Fl_Callback*)ListEditor::cb_Source, 0, 6, 0, 0, 14, 56},
 {"Package", 0,  (Fl_Callback*)ListEditor::cb_Package, 0, 6, 0, 0, 14, 56},
 {0}
};
Fl_Menu_Item* ListEditor::margin_items = ListEditor::menu_margin_menu + 0;

inline void ListEditor::cb_list_i(Fl_File_Browser*, void*) {
  list_cb();
}
void ListEditor::cb_list(Fl_File_Browser* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_list_i(o,v);
}

inline void ListEditor::cb_type_chooser_i(Fl_Choice*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_type_chooser(Fl_Choice* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->user_data()))->cb_type_chooser_i(o,v);
}

inline void ListEditor::cb_Regular_i(Fl_Menu_*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_Regular(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->user_data()))->cb_Regular_i(o,v);
}

inline void ListEditor::cb_Configuration_i(Fl_Menu_*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_Configuration(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->user_data()))->cb_Configuration_i(o,v);
}

inline void ListEditor::cb_Manpage_i(Fl_Menu_*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_Manpage(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->user_data()))->cb_Manpage_i(o,v);
}

inline void ListEditor::cb_Init_i(Fl_Menu_*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_Init(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->user_data()))->cb_Init_i(o,v);
}

inline void ListEditor::cb_Directory_i(Fl_Menu_*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_Directory(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->user_data()))->cb_Directory_i(o,v);
}

inline void ListEditor::cb_Symbolic_i(Fl_Menu_*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_Symbolic(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->user_data()))->cb_Symbolic_i(o,v);
}

inline void ListEditor::cb_Removed_i(Fl_Menu_*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_Removed(Fl_Menu_* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->user_data()))->cb_Removed_i(o,v);
}

Fl_Menu_Item ListEditor::menu_type_chooser[] = {
 {"Regular &File", 0,  (Fl_Callback*)ListEditor::cb_Regular, 0, 0, 0, 0, 14, 56},
 {"&Configuration File", 0,  (Fl_Callback*)ListEditor::cb_Configuration, 0, 0, 0, 0, 14, 56},
 {"&Manpage File", 0,  (Fl_Callback*)ListEditor::cb_Manpage, 0, 0, 0, 0, 14, 56},
 {"&Init Script", 0,  (Fl_Callback*)ListEditor::cb_Init, 0, 0, 0, 0, 14, 56},
 {"&Directory", 0,  (Fl_Callback*)ListEditor::cb_Directory, 0, 0, 0, 0, 14, 56},
 {"Symbolic &Link", 0,  (Fl_Callback*)ListEditor::cb_Symbolic, 0, 0, 0, 0, 14, 56},
 {"&Removed File", 0,  (Fl_Callback*)ListEditor::cb_Removed, 0, 0, 0, 0, 14, 56},
 {0}
};

inline void ListEditor::cb_upgrade_button_i(Fl_Check_Button*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_upgrade_button(Fl_Check_Button* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->user_data()))->cb_upgrade_button_i(o,v);
}

inline void ListEditor::cb_perm_group_i(Fl_Group*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_perm_group(Fl_Group* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->user_data()))->cb_perm_group_i(o,v);
}

inline void ListEditor::cb_Permissions_i(Fl_Box*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_Permissions(Fl_Box* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_Permissions_i(o,v);
}

inline void ListEditor::cb_user_read_button_i(Fl_Light_Button*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_user_read_button(Fl_Light_Button* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_user_read_button_i(o,v);
}

inline void ListEditor::cb_user_write_button_i(Fl_Light_Button*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_user_write_button(Fl_Light_Button* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_user_write_button_i(o,v);
}

inline void ListEditor::cb_user_exec_button_i(Fl_Light_Button*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_user_exec_button(Fl_Light_Button* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_user_exec_button_i(o,v);
}

inline void ListEditor::cb_user_set_button_i(Fl_Light_Button*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_user_set_button(Fl_Light_Button* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_user_set_button_i(o,v);
}

inline void ListEditor::cb_User1_i(Fl_Box*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_User1(Fl_Box* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_User1_i(o,v);
}

inline void ListEditor::cb_group_read_button_i(Fl_Light_Button*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_group_read_button(Fl_Light_Button* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_group_read_button_i(o,v);
}

inline void ListEditor::cb_group_write_button_i(Fl_Light_Button*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_group_write_button(Fl_Light_Button* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_group_write_button_i(o,v);
}

inline void ListEditor::cb_group_exec_button_i(Fl_Light_Button*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_group_exec_button(Fl_Light_Button* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_group_exec_button_i(o,v);
}

inline void ListEditor::cb_group_set_button_i(Fl_Light_Button*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_group_set_button(Fl_Light_Button* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_group_set_button_i(o,v);
}

inline void ListEditor::cb_Group1_i(Fl_Box*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_Group1(Fl_Box* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_Group1_i(o,v);
}

inline void ListEditor::cb_other_read_button_i(Fl_Light_Button*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_other_read_button(Fl_Light_Button* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_other_read_button_i(o,v);
}

inline void ListEditor::cb_other_write_button_i(Fl_Light_Button*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_other_write_button(Fl_Light_Button* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_other_write_button_i(o,v);
}

inline void ListEditor::cb_other_exec_button_i(Fl_Light_Button*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_other_exec_button(Fl_Light_Button* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_other_exec_button_i(o,v);
}

inline void ListEditor::cb_other_temp_button_i(Fl_Light_Button*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_other_temp_button(Fl_Light_Button* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_other_temp_button_i(o,v);
}

inline void ListEditor::cb_Other_i(Fl_Box*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_Other(Fl_Box* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_Other_i(o,v);
}

inline void ListEditor::cb_user_field_i(Fl_Input*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_user_field(Fl_Input* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->user_data()))->cb_user_field_i(o,v);
}

inline void ListEditor::cb_group_field_i(Fl_Input*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_group_field(Fl_Input* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->user_data()))->cb_group_field_i(o,v);
}

inline void ListEditor::cb_src_path_field_i(Fl_Input*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_src_path_field(Fl_Input* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->user_data()))->cb_src_path_field_i(o,v);
}

inline void ListEditor::cb_dst_path_field_i(Fl_Input*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_dst_path_field(Fl_Input* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->user_data()))->cb_dst_path_field_i(o,v);
}

inline void ListEditor::cb_subpackage_chooser_i(Fl_Choice*, void*) {
  file_ok_button->activate();
}
void ListEditor::cb_subpackage_chooser(Fl_Choice* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->user_data()))->cb_subpackage_chooser_i(o,v);
}

inline void ListEditor::cb_file_ok_button_i(Fl_Return_Button*, void*) {
  file_settings_cb(1);
}
void ListEditor::cb_file_ok_button(Fl_Return_Button* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_file_ok_button_i(o,v);
}

inline void ListEditor::cb_file_cancel_button_i(Fl_Button*, void*) {
  file_window->hide();
}
void ListEditor::cb_file_cancel_button(Fl_Button* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_file_cancel_button_i(o,v);
}

inline void ListEditor::cb_subpackage_list_i(Fl_Browser*, void*) {
  list_subpkg_cb();
}
void ListEditor::cb_subpackage_list(Fl_Browser* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_subpackage_list_i(o,v);
}

inline void ListEditor::cb_Add1_i(Fl_Button*, void*) {
  add_subpkg_cb();
}
void ListEditor::cb_Add1(Fl_Button* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_Add1_i(o,v);
}

inline void ListEditor::cb_delete_subpkg_button_i(Fl_Button*, void*) {
  delete_subpkg_cb();
}
void ListEditor::cb_delete_subpkg_button(Fl_Button* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_delete_subpkg_button_i(o,v);
}

inline void ListEditor::cb_setup_image_browse_button_i(Fl_Button*, void*) {
  const char *fn;

if ((fn = fl_file_chooser("Setup Image?", "*.xpm",setup_image_field->value())) != NULL)
  setup_image_field->value(fn);
}
void ListEditor::cb_setup_image_browse_button(Fl_Button* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_setup_image_browse_button_i(o,v);
}

inline void ListEditor::cb_setup_types_browse_button_i(Fl_Button*, void*) {
  const char *fn;

if ((fn = fl_file_chooser("Setup Types?", "*.types",setup_types_field->value())) != NULL)
  setup_types_field->value(fn);
}
void ListEditor::cb_setup_types_browse_button(Fl_Button* o, void* v) {
  ((ListEditor*)(o->parent()->parent()->parent()->user_data()))->cb_setup_types_browse_button_i(o,v);
}

inline void ListEditor::cb_OK_i(Fl_Return_Button*, void*) {
  project_ok_cb();
}
void ListEditor::cb_OK(Fl_Return_Button* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_OK_i(o,v);
}

inline void ListEditor::cb_Cancel_i(Fl_Button*, void*) {
  project_window->hide();
}
void ListEditor::cb_Cancel(Fl_Button* o, void* v) {
  ((ListEditor*)(o->parent()->user_data()))->cb_Cancel_i(o,v);
}

void ListEditor::modified(int m) {
  modified_ = m;
set_title();
}

ListEditor::ListEditor(const char *listfile) {
  Fl_Window* w;
  { Fl_Window* o = window = new Fl_Window(720, 495, "EPM List Editor 4.0");
    w = o;
    o->callback((Fl_Callback*)cb_window, (void*)(this));
    { Fl_Menu_Bar* o = menubar = new Fl_Menu_Bar(0, 0, 720, 25);
      o->menu(menu_menubar);
    }
    { ListManager* o = margin_manager = new ListManager(0, 25, 720, 20, "ListManager");
      o->box(FL_FLAT_BOX);
      o->color(52);
      o->callback((Fl_Callback*)cb_margin_manager);
    }
    { Fl_Menu_Button* o = margin_menu = new Fl_Menu_Button(0, 25, 720, 20);
      o->box(FL_NO_BOX);
      o->menu(menu_margin_menu);
    }
    { Fl_File_Browser* o = list = new Fl_File_Browser(0, 45, 720, 450);
      o->type(3);
      o->callback((Fl_Callback*)cb_list);
      Fl_Group::current()->resizable(o);
      list->has_scrollbar(Fl_Browser_::VERTICAL);
    }
    o->end();
  }
  { Fl_Window* o = file_window = new Fl_Window(435, 360, "File Settings");
    w = o;
    o->user_data((void*)(this));
    { Fl_Group* o = new Fl_Group(10, 10, 415, 305);
      o->box(FL_THIN_UP_BOX);
      { Fl_Choice* o = type_chooser = new Fl_Choice(150, 20, 160, 25, "Type:");
        o->down_box(FL_BORDER_BOX);
        o->callback((Fl_Callback*)cb_type_chooser);
        o->menu(menu_type_chooser);
      }
      { Fl_Check_Button* o = upgrade_button = new Fl_Check_Button(320, 20, 90, 25, "Upgrade");
        o->down_box(FL_DOWN_BOX);
        o->callback((Fl_Callback*)cb_upgrade_button);
      }
      { Fl_Group* o = perm_group = new Fl_Group(50, 55, 365, 75);
        o->callback((Fl_Callback*)cb_perm_group);
        { Fl_Box* o = new Fl_Box(50, 55, 100, 25, "Permissions:");
          o->callback((Fl_Callback*)cb_Permissions);
          o->align(FL_ALIGN_RIGHT|FL_ALIGN_INSIDE);
        }
        { Fl_Light_Button* o = user_read_button = new Fl_Light_Button(150, 55, 40, 25, "R");
          o->callback((Fl_Callback*)cb_user_read_button);
        }
        { Fl_Light_Button* o = user_write_button = new Fl_Light_Button(190, 55, 40, 25, "W");
          o->callback((Fl_Callback*)cb_user_write_button);
        }
        { Fl_Light_Button* o = user_exec_button = new Fl_Light_Button(230, 55, 40, 25, "X");
          o->callback((Fl_Callback*)cb_user_exec_button);
        }
        { Fl_Light_Button* o = user_set_button = new Fl_Light_Button(270, 55, 40, 25, "S");
          o->callback((Fl_Callback*)cb_user_set_button);
        }
        { Fl_Box* o = new Fl_Box(315, 55, 95, 25, "User");
          o->callback((Fl_Callback*)cb_User1);
          o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
        }
        { Fl_Light_Button* o = group_read_button = new Fl_Light_Button(150, 80, 40, 25, "R");
          o->callback((Fl_Callback*)cb_group_read_button);
        }
        { Fl_Light_Button* o = group_write_button = new Fl_Light_Button(190, 80, 40, 25, "W");
          o->callback((Fl_Callback*)cb_group_write_button);
        }
        { Fl_Light_Button* o = group_exec_button = new Fl_Light_Button(230, 80, 40, 25, "X");
          o->callback((Fl_Callback*)cb_group_exec_button);
        }
        { Fl_Light_Button* o = group_set_button = new Fl_Light_Button(270, 80, 40, 25, "S");
          o->callback((Fl_Callback*)cb_group_set_button);
        }
        { Fl_Box* o = new Fl_Box(315, 80, 95, 25, "Group");
          o->callback((Fl_Callback*)cb_Group1);
          o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
        }
        { Fl_Light_Button* o = other_read_button = new Fl_Light_Button(150, 105, 40, 25, "R");
          o->callback((Fl_Callback*)cb_other_read_button);
        }
        { Fl_Light_Button* o = other_write_button = new Fl_Light_Button(190, 105, 40, 25, "W");
          o->callback((Fl_Callback*)cb_other_write_button);
        }
        { Fl_Light_Button* o = other_exec_button = new Fl_Light_Button(230, 105, 40, 25, "X");
          o->callback((Fl_Callback*)cb_other_exec_button);
        }
        { Fl_Light_Button* o = other_temp_button = new Fl_Light_Button(270, 105, 40, 25, "T");
          o->callback((Fl_Callback*)cb_other_temp_button);
        }
        { Fl_Box* o = new Fl_Box(315, 105, 95, 25, "Other");
          o->callback((Fl_Callback*)cb_Other);
          o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
        }
        o->end();
      }
      { Fl_Input* o = user_field = new Fl_Input(150, 140, 115, 25, "User:");
        o->callback((Fl_Callback*)cb_user_field);
        o->when(FL_WHEN_CHANGED);
      }
      { Fl_Input* o = group_field = new Fl_Input(150, 175, 115, 25, "Group:");
        o->callback((Fl_Callback*)cb_group_field);
        o->when(FL_WHEN_CHANGED);
      }
      { Fl_Input* o = src_path_field = new Fl_Input(150, 210, 260, 25, "Source Path:");
        o->callback((Fl_Callback*)cb_src_path_field);
        o->when(FL_WHEN_CHANGED);
      }
      { Fl_Input* o = dst_path_field = new Fl_Input(150, 245, 260, 25, "Destination Path:");
        o->callback((Fl_Callback*)cb_dst_path_field);
        o->when(FL_WHEN_CHANGED);
      }
      { Fl_Choice* o = subpackage_chooser = new Fl_Choice(150, 280, 170, 25, "Subpackage:");
        o->down_box(FL_BORDER_BOX);
        o->callback((Fl_Callback*)cb_subpackage_chooser);
      }
      o->end();
    }
    { Fl_Return_Button* o = file_ok_button = new Fl_Return_Button(235, 325, 95, 25, "OK");
      o->callback((Fl_Callback*)cb_file_ok_button);
    }
    { Fl_Button* o = file_cancel_button = new Fl_Button(340, 325, 85, 25, "Cancel");
      o->callback((Fl_Callback*)cb_file_cancel_button);
    }
    o->set_modal();
    o->end();
  }
  { Fl_Window* o = project_window = new Fl_Window(500, 411, "Project Settings");
    w = o;
    o->user_data((void*)(this));
    { Fl_Tabs* o = new Fl_Tabs(10, 10, 480, 350);
      { Fl_Group* o = new Fl_Group(10, 35, 480, 325, "General");
        o->hide();
        name_field = new Fl_Input(145, 45, 335, 25, "Project:");
        version_field = new Fl_Input(145, 80, 165, 25, "Version:");
        { Fl_Counter* o = version_counter = new Fl_Counter(310, 80, 170, 25);
          o->minimum(0);
          o->maximum(1e+08);
          o->step(10);
          o->value(1e+06);
        }
        copyright_field = new Fl_Input(145, 115, 335, 25, "Copyright:");
        vendor_field = new Fl_Input(145, 150, 335, 25, "Vendor:");
        packager_field = new Fl_Input(145, 185, 335, 25, "Packager:");
        license_field = new Fl_Input(145, 220, 240, 25, "License:");
        readme_field = new Fl_Input(145, 255, 240, 25, "README:");
        license_browse_button = new Fl_Button(385, 220, 95, 25, "Browse...");
        readme_browse_button = new Fl_Button(385, 255, 95, 25, "Browse...");
        o->end();
      }
      { Fl_Group* o = new Fl_Group(10, 35, 480, 325, "Packages");
        { Fl_Browser* o = subpackage_list = new Fl_Browser(20, 60, 355, 60, "Subpackages:");
          o->type(2);
          o->callback((Fl_Callback*)cb_subpackage_list);
          o->align(FL_ALIGN_TOP_LEFT);
        }
        { Fl_Button* o = new Fl_Button(385, 60, 95, 25, "Add...");
          o->callback((Fl_Callback*)cb_Add1);
        }
        { Fl_Button* o = delete_subpkg_button = new Fl_Button(385, 95, 95, 25, "Delete...");
          o->callback((Fl_Callback*)cb_delete_subpkg_button);
          o->deactivate();
        }
        { Fl_Input* o = description_field = new Fl_Input(20, 145, 460, 65, "Description:");
          o->type(4);
          o->align(FL_ALIGN_TOP_LEFT);
          o->when(FL_WHEN_NEVER);
        }
        { Fl_Input* o = depends_field[0] = new Fl_Input(130, 220, 350, 25, "Requires:");
          o->when(FL_WHEN_NEVER);
        }
        { Fl_Input* o = depends_field[1] = new Fl_Input(130, 255, 350, 25, "Incompatable:");
          o->when(FL_WHEN_NEVER);
        }
        { Fl_Input* o = depends_field[2] = new Fl_Input(130, 290, 350, 25, "Replaces:");
          o->when(FL_WHEN_NEVER);
        }
        { Fl_Input* o = depends_field[3] = new Fl_Input(130, 325, 350, 25, "Provides:");
          o->when(FL_WHEN_NEVER);
        }
        o->end();
      }
      { Fl_Group* o = new Fl_Group(10, 35, 480, 325, "GUI Setup");
        o->hide();
        setup_image_field = new Fl_Input(145, 45, 240, 25, "Setup Image:");
        { Fl_Button* o = setup_image_browse_button = new Fl_Button(385, 45, 95, 25, "Browse...");
          o->callback((Fl_Callback*)cb_setup_image_browse_button);
        }
        setup_types_field = new Fl_Input(145, 80, 240, 25, "Setup Types:");
        { Fl_Button* o = setup_types_browse_button = new Fl_Button(385, 80, 95, 25, "Browse...");
          o->callback((Fl_Callback*)cb_setup_types_browse_button);
        }
        o->end();
      }
      o->end();
    }
    { Fl_Return_Button* o = new Fl_Return_Button(300, 375, 95, 25, "OK");
      o->callback((Fl_Callback*)cb_OK);
    }
    { Fl_Button* o = new Fl_Button(405, 375, 85, 25, "Cancel");
      o->callback((Fl_Callback*)cb_Cancel);
    }
    o->end();
  }
  dist_        = (dist_t *)0;
filename_[0] = '\0';
modified_    = 0;
title_[0]    = '\0';

update_margins();
open(listfile);

next_  = first_;
first_ = this;
}

void ListEditor::hide() {
  window->hide();
}

int ListEditor::modified() {
  return modified_;
}

int ListEditor::save() {
  return save(filename_);
}

void ListEditor::show() {
  char *progname = (char *)"ListEditor";
window->show(1, &progname);
}

int ListEditor::shown() {
  return window->shown();
}
