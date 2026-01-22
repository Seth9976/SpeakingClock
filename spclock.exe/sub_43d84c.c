// 函数: sub_43d84c
// 地址: 0x43d84c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_28 = ebx
int32_t esi
int32_t var_2c = esi
int32_t edi
int32_t var_30 = edi
int32_t var_20 = 0
HWND hWnd = nullptr
void* var_1c = nullptr
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t* ebx_1 = arg1
int32_t* var_34 = &var_4
int32_t (* var_38)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int64_t* eax = arg2

if (eax != 0)
    eax = *(eax - 4)

struct _EXCEPTION_REGISTRATION_RECORD** esp
int64_t* esi_1

if (eax != 0)
    LPARAM lParam_2 = sub_405018(arg2)
    esp = &ExceptionList
    LRESULT wParam = SendMessageA(sub_45f888(ebx_1), 0x14c, 0xffffffff, lParam_2)
    
    if (wParam != 0xffffffff)
        bool var_11_1 = (*(*ebx_1 + 0xdc))() != wParam
        
        if (ebx_1[0xb6].b != 0 && (*(*ebx_1[0xa1] + 0x54))() != 0xffffffff)
            LPARAM lParam = 0
            wParam = 0
            uint32_t Msg = 0x14f
            hWnd = sub_45f888(ebx_1)
            SendMessageA(hWnd, Msg, wParam, lParam)
        
        LPARAM lParam_1 = 0
        uint32_t Msg_1 = 0x14e
        hWnd = sub_45f888(ebx_1)
        SendMessageA(hWnd, Msg_1, wParam, lParam_1)
        esp = &var_8
        
        if (*(ebx_1 + 0x2be) u>= 2)
            (*(*ebx_1 + 0xe0))()
            sub_404bdc(&ebx_1[0xae], arg2)
        else
            (*(*ebx_1[0xa1] + 0xc))()
            int64_t* edi_2 = arg2
            
            if (edi_2 != 0)
                edi_2 = *(edi_2 - 4)
            
            sub_405080(0x7fffffff, edi_2 + 1, var_8, &var_1c)
            sub_404ea0(&hWnd, arg2, var_1c)
            ebx_1, ebp_1, esi_1 = sub_457808(ebx_1, hWnd)
            HWND hWnd_1
            int32_t ecx_4
            hWnd_1, ecx_4 = sub_45f888(ebx_1)
            
            if (esi_1 != 0)
                esi_1 = *(esi_1 - 4)
            
            sub_4577d8(ecx_4, &ebp_1[-7])
            ebp_1[-8] = ebp_1[-7]
            int32_t eax_26 = ebp_1[-8]
            
            if (eax_26 != 0)
                eax_26 = *(eax_26 - 4)
            
            WPARAM wParam_1 = 0
            uint32_t Msg_2 = 0x142
            hWnd = hWnd_1
            SendMessageA(hWnd, Msg_2, wParam_1, zx.d(esi_1.w) | zx.d(eax_26.w) << 0x10)
            esp = &var_8
        
        if (*(ebp_1 - 0xd) != 0)
            esi_1.w = 0xffeb
            sub_403e64(ebx_1, esi_1)
            esi_1.w = 0xffaf
            sub_403e64(ebx_1, esi_1)
else
    char var_9 = 0
    (*(*ebx_1 + 0xe0))()
    esp = &var_8
    esi_1.w = 0xffb0
    sub_403e64(ebx_1, esi_1)
esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_43da35
sub_404b88(&ebp_1[-7])
sub_404bac(&ebp_1[-6], 2)
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]
