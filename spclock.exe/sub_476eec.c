// 函数: sub_476eec
// 地址: 0x476eec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4_5 = ebp
int32_t ebx
int32_t var_60 = ebx
int32_t esi
int32_t var_64 = esi
int32_t edi
int32_t var_68 = edi
int32_t ecx
int32_t var_c = ecx
int32_t ExceptionList = arg1
enum MESSAGEBOX_STYLE uType = arg3
HWND hWndInsertAfter = sub_4783e0(ExceptionList)
HWND hWnd

if (hWndInsertAfter != 0)
    hWnd = hWndInsertAfter
else
    hWnd = *(ExceptionList + 0x30)

int32_t eax_6 = (*data_4ac1e0)(hWndInsertAfter, 2)
__return_addr = 2

if (eax_6 != (*data_4ac1e0)(*(ExceptionList + 0x30)))
    int32_t var_4c = 0x28
    (*data_4ac110)(eax_6)
    RECT rect
    GetWindowRect(*(ExceptionList + 0x30), &rect)
    int32_t cy = 0
    ExceptionList = 0
    int32_t var_44
    int32_t var_3c
    int32_t ecx_2 = var_3c - var_44
    int32_t ecx_3 = ecx_2 s>> 1
    bool c_1 = unimplemented  {sar ecx, 0x1}
    
    if (ecx_2 s>> 1 s< 0)
        ecx_3 = adc.d(ecx_3, 0, c_1)
    
    int32_t var_48
    int32_t var_40
    int32_t edx_2 = var_40 - var_48
    int32_t edx_3 = edx_2 s>> 1
    bool c_2 = unimplemented  {sar edx, 0x1}
    
    if (edx_2 s>> 1 s< 0)
        edx_3 = adc.d(edx_3, 0, c_2)
    
    hWndInsertAfter = nullptr
    SetWindowPos(*(ExceptionList + 0x30), hWndInsertAfter, edx_3 + var_48, ecx_3 + var_44, 
        ExceptionList, cy, 0x1d)

int32_t eax_22
void* __return_addr_1
eax_22, __return_addr_1 = sub_46ba88(hWndInsertAfter)
*(__return_addr_1 - 0x14) = eax_22
*(__return_addr_1 - 0x20) = sub_46b8e0()

if (sub_475aec(*(__return_addr_1 - 4)) != 0)
    uType |= MB_RTLREADING

__return_addr = __return_addr_1
int32_t (* var_4_3)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*(__return_addr_1 - 0xc) = MessageBoxA(hWnd, arg2, *(__return_addr_1 - 8), uType)
fsbase->NtTib.ExceptionList = ExceptionList

if (*(__return_addr_1 - 0x18) != *(__return_addr_1 - 0x1c))
    enum SET_WINDOW_POS_FLAGS uFlags = 0x1d
    ExceptionList = 0
    int32_t edx_6 = *(__return_addr_1 - 0x54)
    int32_t ecx_7 = *(__return_addr_1 - 0x4c) - edx_6
    int32_t ecx_8 = ecx_7 s>> 1
    bool c_3 = unimplemented  {sar ecx, 0x1}
    
    if (ecx_7 s>> 1 s< 0)
        ecx_8 = adc.d(ecx_8, 0, c_3)
    
    int32_t eax_29 = *(__return_addr_1 - 0x58)
    int32_t edx_8 = *(__return_addr_1 - 0x50) - eax_29
    int32_t edx_9 = edx_8 s>> 1
    bool c_4 = unimplemented  {sar edx, 0x1}
    
    if (edx_8 s>> 1 s< 0)
        edx_9 = adc.d(edx_9, 0, c_4)
    
    SetWindowPos(*(*(__return_addr_1 - 4) + 0x30), nullptr, edx_9 + eax_29, ecx_8 + edx_6, 0, 
        ExceptionList, uFlags)

sub_46bb4c(*(__return_addr_1 - 0x14))
SetActiveWindow(*(__return_addr_1 - 0x10))
int32_t result = *(__return_addr_1 - 0x20)
sub_46b8e8(result)
return result
