// 函数: sub_474364
// 地址: 0x474364
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_268 = ebx
int32_t var_264 = 0
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg1
int32_t* var_26c = &var_4
int32_t (* var_270)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (var_8->__offset(0x34).d == 0)
    int32_t ecx
    var_8->__offset(0x34).d = sub_403c38(ecx, 1)
    sub_404b88(&var_8[7])
    void var_118
    uint32_t var_c = &var_118
    int32_t var_10 = 0x40
    esp = &var_8
    int32_t eax_6 = GetKeyboardLayoutList(var_10, var_c) - 1
    
    if (eax_6 s>= 0)
        uint32_t ExceptionList_1 = eax_6 + 1
        void* lpSubKey = &var_118
        uint32_t i
        
        do
            if (sub_465084(*lpSubKey) != 0)
                var_c = &var_10
                var_10 = 0x20019
                ExceptionList_1 = 0
                int32_t var_18_1 = 0
                int32_t var_260 = *nullptr
                char var_25c_1 = 0
                void var_258
                lpSubKey = sub_40a2fc(&var_260, 
                    "System\CurrentControlSet\Control\Keyboard Layouts\%.8x", &var_258, var_18_1)
                esp = &var_8
                
                if (RegOpenKeyExA(0x80000002, lpSubKey, ExceptionList_1, var_10, var_c) == NO_ERROR)
                    var_c = &var_4
                    var_10 = j_sub_40443c
                    ExceptionList_1 = fsbase->NtTib.ExceptionList
                    fsbase->NtTib.ExceptionList = &ExceptionList_1
                    var_c = 0x100
                    uint32_t* lpcbData = &var_c
                    void data
                    
                    if (RegQueryValueExA(var_10, "layout text", nullptr, nullptr, &data, lpcbData)
                            == NO_ERROR)
                        sub_404df8(&var_264, &data, 0x100)
                        *lpcbData
                        (*(*var_8->__offset(0x34).d + 0x3c))()
                        
                        if (*lpcbData == var_8->__offset(0x3c).d)
                            sub_404df8(&var_8[7], &data, 0x100)
                    
                    fsbase->NtTib.ExceptionList = ExceptionList_1
                    var_c = 0x4744d2
                    var_10 = var_10
                    return RegCloseKey(var_10)
            
            lpSubKey += 4
            i = ExceptionList_1
            ExceptionList_1 -= 1
        while (i != 1)
    
    int32_t* eax_28 = var_8->__offset(0x34).d
    *(eax_28 + 0x25) = 0
    sub_41c738(eax_28, 1)

var_8->__offset(0x34).d
esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_474516
int32_t* result = &var_264
sub_404b88(result)
return result
