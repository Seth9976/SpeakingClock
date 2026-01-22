// 函数: sub_44e063
// 地址: 0x44e063
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += 1
*arg1 += arg1.b
*0x55000000 += arg3:1.b
void* const* ebp = &__return_addr
int32_t ebx
int32_t var_40 = ebx
int32_t esi
int32_t var_44 = esi
int32_t var_3c = 0
int32_t var_30 = 0
int32_t var_38 = arg2
void* const* var_48 = &__return_addr
int32_t (* var_4c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
esi.w = 0xfff2
char var_21

if (sub_403df4(sub_403e64(arg1, esi), 0x44a270) == 0)
    var_21 = 0
else
    var_21 = 1
    sub_44dc44(&__return_addr)

void* eax_4 = sub_44dc14(arg1)
int32_t* eax_6 = sub_44ea50(arg1)
int32_t var_18 = 0

if (sub_40d704(6, 0) != 0)
    void* eax_8
    int32_t edx
    eax_8, edx = sub_4659bc()
    edx.b = 7
    var_18 = sub_465a84(eax_8, edx)

enum DRAW_TEXT_FORMAT* esp_1

if (var_18 == 0)
    sub_404fb0(*(arg1 + 0x30), sub_44e2d7+5)
    int32_t* eax_14
    
    if (var_18 == 0)
        *arg4 = 5
        *arg3 = 0xfffffffe
        eax_14 = nullptr
    else if (eax_4 == 0 || (*(arg1 + 0x40) s<= 0xffffffff && var_21 != 0))
        int32_t* ebx_1 = *(arg1 + 0x4c)
        char eax_20
        
        if (ebx_1 != 0)
            eax_20 = (*(*ebx_1 + 0x1c))()
        
        if (ebx_1 == 0 || eax_20 != 0)
            *arg3 = 0xfffffff9
            eax_14 = nullptr
        else
            *arg3 = 0x10
            
            if (var_21 == 0)
                *arg4 = 0x10
            
            eax_14.b = 1
    else
        *arg3 = *(eax_4 + 0x34)
        
        if (var_21 == 0)
            *arg4 = *(eax_4 + 0x30)
        
        eax_14.b = 1
    
    if (eax_14.b != 0 && var_21 == 0)
        *arg3 += 0xf
    
    if (var_21 == 0)
        *arg4 += 3
    
    enum DRAW_TEXT_FORMAT var_14
    sub_403578(&var_14, 0x10, 0)
    
    if (eax_6 == 0)
        if (sub_403df4(eax_6, 0x44a554) == 0)
            char var_29_3 = 0
        else
            char var_29_2 = eax_6[0x18].b
    else
        char var_29_1 = 0
    
    int16_t ebx_2 = *(arg1 + 0x60)
    
    if (ebx_2 == 0)
        sub_404c20(&var_30, *(arg1 + 0x30))
    else
        ebp = sub_44a9d0(ebx_2, &var_3c)
        sub_404ea0(&ebp[-0xc], *(ebp[-7] + 0x30), ebp[-0xf])
    
    ebp[-0xd] = zx.d(*((zx.d(*(ebp - 0x29)) << 1) + &data_4ab82c)) | 0x40 | 0x20 | 0x100 | 0x400
    char var_10_1 = 0
    var_14 = ebp[-0xd]
    esp_1 = &var_14
    ebp = sub_44b9d4(ebp[-7], ebp[-0xe], ebp[-0xc], var_14, var_10_1, &ebp[-5])
    int32_t* edx_9 = ebp[-1]
    *edx_9 += ebp[-3] - ebp[-5] + 7
else
    sub_44dc90(&__return_addr)
    void var_8
    esp_1 = &var_8

if (*(ebp[-7] + 0xa2) != 0)
    *(esp_1 - 4) = ebp[-1]
    *(esp_1 - 8) = ebp[2]
    void* ebx_3 = ebp[-7]
    ebp[-0xe]
    ebp[-7]
    *(ebx_3 + 0xa4)
    (*(ebx_3 + 0xa0))()

esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[2] = sub_44e2cb
sub_404b88(&ebp[-0xf])
sub_404b88(&ebp[-0xc])
return &ebp[-0xc]
