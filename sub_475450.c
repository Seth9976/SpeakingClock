// 函数: sub_475450
// 地址: 0x475450
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_34 = ebx
int64_t* var_30 = nullptr
int32_t* var_38 = &var_4
int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0xac) == 0 && *data_4ac370 == 0)
    *(arg1 + 0x40) = sub_424a14(sub_475c8c, arg1)
    data_4abb34 = DefWindowProcA
    WNDCLASSA wndClass
    
    if (GetClassInfoA(data_4af7f4, data_4abb54, &wndClass) == 0)
        data_4abb40 = data_4af7f4
        
        if (RegisterClassA(0x4abb30) == 0)
            sub_406a30(data_4ac048, &var_30)
            int32_t edx_2
            edx_2.b = 1
            sub_40451c(sub_40ceb0(sub_4175f8+0x48, edx_2, var_30))
    
    int32_t eax_11 = (*data_4ac140)(0, 0x84ca0000)
    int32_t eax_12 = eax_11 s>> 1
    bool c_1 = unimplemented  {sar eax, 0x1}
    
    if (eax_11 s>> 1 s< 0)
        eax_12 = adc.d(eax_12, 0, c_1)
    
    wndClass.hCursor = eax_12
    wndClass.hIcon = 1
    int32_t eax_15 = (*data_4ac140)(wndClass.hIcon, wndClass.hCursor)
    int32_t eax_16 = eax_15 s>> 1
    bool c_2 = unimplemented  {sar eax, 0x1}
    
    if (eax_15 s>> 1 s< 0)
        eax_16 = adc.d(eax_16, 0, c_2)
    
    wndClass.hCursor = eax_16
    wndClass.hIcon = 0
    wndClass.hInstance = 0
    wndClass.cbWndExtra = 0
    wndClass.cbClsExtra = 0
    wndClass.lpfnWndProc = data_4af7f4
    wndClass.style = 0
    *(arg1 + 0x30) = sub_4079ac(sub_405018(*(arg1 + 0x8c)), data_4abb54, WS_EX_LEFT, 
        wndClass.style, wndClass.lpfnWndProc, wndClass.cbClsExtra, wndClass.cbWndExtra, 
        wndClass.hInstance, wndClass.hIcon, wndClass.hCursor, wndClass.hbrBackground, 
        wndClass.lpszMenuName)
    *(arg1 + 0xac) = 1
    wndClass.lpszMenuName = *(arg1 + 0x40)
    wndClass.hbrBackground = 0xfffffffc
    wndClass.hCursor = *(arg1 + 0x30)
    SetWindowLongA(wndClass.hCursor, wndClass.hbrBackground, wndClass.lpszMenuName)
    
    if (*data_4ac1d0 != 0)
        wndClass.lpszMenuName = sub_47634c(arg1)
        wndClass.hbrBackground = 1
        wndClass.hCursor = 0x80
        wndClass.hIcon = *(arg1 + 0x30)
        SendMessageA(wndClass.hIcon, wndClass.hCursor, wndClass.hbrBackground, 
            wndClass.lpszMenuName)
        wndClass.lpszMenuName = sub_47634c(arg1)
        wndClass.hbrBackground = 0xfffffff2
        wndClass.hCursor = *(arg1 + 0x30)
        SetClassLongA(wndClass.hCursor, wndClass.hbrBackground, wndClass.lpszMenuName)
    
    wndClass.lpszMenuName = 0
    wndClass.hbrBackground = *(arg1 + 0x30)
    HMENU eax_31 = GetSystemMenu(wndClass.hbrBackground, wndClass.lpszMenuName)
    wndClass.lpszMenuName = 0
    wndClass.hbrBackground = 0xf030
    wndClass.hCursor = eax_31
    DeleteMenu(wndClass.hCursor, wndClass.hbrBackground, wndClass.lpszMenuName)
    wndClass.lpszMenuName = 0
    wndClass.hbrBackground = 0xf000
    wndClass.hCursor = eax_31
    DeleteMenu(wndClass.hCursor, wndClass.hbrBackground, wndClass.lpszMenuName)
    var_8
    esp = &var_8
    
    if (*data_4ac1d0 != 0)
        wndClass.lpszMenuName = 0
        wndClass.hbrBackground = 0xf010
        wndClass.hCursor = eax_31
        DeleteMenu(wndClass.hCursor, wndClass.hbrBackground, wndClass.lpszMenuName)
        esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4755f0
int64_t** result = &var_30
sub_404b88(result)
return result
