// 函数: sub_46133c
// 地址: 0x46133c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_28 = ebx
int32_t esi
int32_t var_2c = esi
int32_t edi
int32_t var_30 = edi
int32_t var_1c = *arg2
enum SYSTEM_PARAMETERS_INFO_ACTION var_18
int32_t* edi_1 = &var_18
void* esi_2 = &arg2[1]
*edi_1 = *esi_2
void* edi_2 = &edi_1[1]
void* esi_3 = esi_2 + 4
*edi_2 = *esi_3
*(edi_2 + 4) = *(esi_3 + 4)
*(arg1 + 0x258) = 1
int32_t* var_34 = &var_4
int32_t (* var_38)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp_1
int32_t esi_7
ebp_1, esi_7 = sub_457808(arg1, arg3)
*(ebp_1 - 0xc) += 4
sub_458b70(*(ebp_1 - 4), ebp_1 - 0x18)
sub_418a3c(*(ebp_1 - 0x18), *(ebp_1 - 0x14), ebp_1 - 0x20)
void* eax_6 = sub_474fe0(*data_4ac4b8, ebp_1 - 0x20, 0)

if (sub_473ddc(eax_6) s< *(*(ebp_1 - 4) + 0x48))
    int32_t eax_10 = sub_473ddc(eax_6)
    sub_456ec8(*(ebp_1 - 4), eax_10)

if (sub_473da8(eax_6) s< *(*(ebp_1 - 4) + 0x4c))
    int32_t eax_15 = sub_473da8(eax_6)
    sub_456efc(*(ebp_1 - 4), eax_15)

if (sub_473dc4(eax_6) + sub_473da8(eax_6) s< *(*(ebp_1 - 4) + 0x4c) + *(ebp_1 - 0x14))
    *(ebp_1 - 0x14) = sub_473dc4(eax_6) + sub_473da8(eax_6) - *(*(ebp_1 - 4) + 0x4c)

if (sub_473d90(eax_6) + sub_473ddc(eax_6) s< *(*(ebp_1 - 4) + 0x48) + *(ebp_1 - 0x18))
    *(ebp_1 - 0x18) = sub_473d90(eax_6) + sub_473ddc(eax_6) - *(*(ebp_1 - 4) + 0x48)

if (sub_473d90(eax_6) s> *(ebp_1 - 0x18))
    *(ebp_1 - 0x18) = sub_473d90(eax_6)

if (sub_473dc4(eax_6) s> *(ebp_1 - 0xc))
    *(ebp_1 - 0xc) = sub_473dc4(eax_6)

enum SET_WINDOW_POS_FLAGS uFlags = SWP_NOACTIVATE
int32_t cy = *(*(ebp_1 - 4) + 0x4c)
int32_t cx = *(*(ebp_1 - 4) + 0x48)
var_18 = *(ebp_1 - 0x14)
int32_t X = *(ebp_1 - 0x18)
HWND hWndInsertAfter = 0xffffffff
SetWindowPos(sub_45f888(*(ebp_1 - 4)), hWndInsertAfter, X, var_18, cx, cy, uFlags)
int32_t eax_56

if (GetTickCount() - *(*(ebp_1 - 4) + 0x25c) u<= 0xfa)
    eax_56 = 0
else
    eax_56 = esi_7
    
    if (eax_56 != 0)
        eax_56 = *(eax_56 - 4)
    
    eax_56.b = eax_56 s< 0x64

if (eax_56.b != 0 && data_4ab85c != 0)
    enum SYSTEM_PARAMETERS_INFO_UPDATE_FLAGS fWinIni = 0
    uint32_t uiParam = 0
    var_18 = SPI_GETTOOLTIPANIMATION
    SystemParametersInfoA(var_18, uiParam, ebp_1 - 8, fWinIni)
    
    if (*(ebp_1 - 8) != 0)
        enum SYSTEM_PARAMETERS_INFO_UPDATE_FLAGS fWinIni_1 = 0
        uint32_t uiParam_1 = 0
        var_18 = SPI_GETTOOLTIPFADE
        int32_t ecx_1 = SystemParametersInfoA(var_18, uiParam_1, ebp_1 - 8, fWinIni_1)
        void* const ebx_1
        
        if (*(ebp_1 - 8) == 0)
            data_4b1c40
            sub_464bc8(ecx_1, ebp_1 - 0x20)
            
            if (*(ebp_1 - 0x1c) s<= *(ebp_1 - 0x14))
                ebx_1.b = 1
            else
                ebx_1 = nullptr
        else
            ebx_1.b = 2
        
        data_4ab85c(sub_45f888(*(ebp_1 - 4)), 0x64, 
            *((zx.d(ebx_1.b) << 2) + &data_4ab968) | 0x40000)

sub_45c470(*(ebp_1 - 4), *(*data_4ac2fc + 0x30))
ShowWindow(sub_45f888(*(ebp_1 - 4)), SW_SHOWNOACTIVATE)
(*(**(ebp_1 - 4) + 0x80))(arg1)
fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_4615ae
*(*(ebp_1 - 4) + 0x25c) = GetTickCount()
void* result = *(ebp_1 - 4)
*(result + 0x258) = 0
return result
