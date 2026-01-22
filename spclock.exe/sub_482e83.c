// 函数: sub_482e83
// 地址: 0x482e83
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char temp1 = *(arg4 + 0x73)
*(arg4 + 0x73) += arg3:1.b
void arg_73
int32_t eflags
int16_t temp0
temp0, eflags = __arpl_memw_gpr16(*(&arg_73 + (arg4 << 1)), arg5)
*(&arg_73 + (arg4 << 1)) = temp0
int32_t arg_4
int32_t* esp_1 = &arg_4
char result
char** esp_3
char* entry_ebx

if (temp1 == neg.b(arg3:1.b))
    *(entry_ebx + 0x26483) -= 1
    *(arg1 + 0x6a) += arg2
    *(arg1 + 7) += (arg3 - 1):1.b
    arg1.b = arg1.b
    entry_ebx[0xc971e8c3] += (arg3 - 1).b
    void* eax_15
    int16_t ecx_2
    char edx_1
    eax_15, edx_1, ecx_2 = (*(arg1 - 0x18))()
    *(eax_15 - 8) -= 1
    *(entry_ebx + 0x26883) -= 1
    *(eax_15 + 0x6a) += edx_1
    *(eax_15 + 8) += ecx_2:1.b
    eax_15.b = eax_15.b
    entry_ebx[0xc956e8c3] += ecx_2.b
    (*(eax_15 - 0x18))()
    char* eax_19
    eax_19.b = __in_al_immb(0x48, eflags)
    *(entry_ebx + 0x499e8c3) -= 1
    *eax_19 += eax_19.b
label_482f45:
    *(esp_1 - 4) = *(entry_ebx + 0x270)
    *(esp_1 - 8) = 1
    *(esp_1 - 0xc) = 0x405
    *(esp_1 - 0x10) = sub_45f888(entry_ebx)
    SendMessageA()
    *(esp_1 - 4) = 1
    *(esp_1 - 8) = *(entry_ebx + 0x26c)
    *(esp_1 - 0xc) = 0x414
    *(esp_1 - 0x10) = sub_45f888(entry_ebx)
    result = SendMessageA()
    esp_3 = esp_1
    
    if (entry_ebx[0x274] != 0)
        *(esp_3 - 4) = 0
        *(esp_3 - 8) = *((zx.d(entry_ebx[0x274]) << 2) + &data_4abcbc)
        *(esp_3 - 0xc) = 0x41f
        *(esp_3 - 0x10) = sub_45f888(entry_ebx)
        result = SendMessageA()
else
    int32_t eflags_1
    int16_t temp0_1
    temp0_1, eflags_1 = __arpl_memw_gpr16(*(arg7 + 0x62), arg6)
    *(arg7 + 0x62) = temp0_1
    entry_ebx = arg11
    char* arg_40
    char* eax = arg_40
    void arg_44
    void* esp_2 = &arg_44
    
    if (temp1 + arg3:1.b u< temp1)
        goto label_482ec7
    
    eax.b ^= *eax
    *eax += eax.b
    arg_40 = entry_ebx
    esp_3 = &arg_40
    entry_ebx = eax
    sub_45baac(entry_ebx)
    result = sub_45fc28(entry_ebx)
    
    if (result != 0)
        arg13 = 0
        arg12 = *(entry_ebx + 0x25c)
        arg11 = 0x41b
        int32_t arg_30 = sub_45f888(entry_ebx)
        esp_2 = &arg_30
    label_482ec7:
        SendMessageA()
        *(esp_2 + 0xc) = *(entry_ebx + 0x254)
        *(esp_2 + 8) = 0
        *(esp_2 + 4) = 0x417
        *esp_2 = sub_45f888(entry_ebx)
        SendMessageA()
        *(esp_2 + 0xc) = *(entry_ebx + 0x258)
        *(esp_2 + 8) = 0
        *(esp_2 + 4) = 0x415
        *esp_2 = sub_45f888(entry_ebx)
        SendMessageA()
        *(esp_2 + 0xc) = *(entry_ebx + 0x264)
        *(esp_2 + 8) = 0
        *(esp_2 + 4) = 0x407
        *esp_2 = sub_45f888(entry_ebx)
        SendMessageA()
        *(esp_2 + 0xc) = *(entry_ebx + 0x268)
        *(esp_2 + 8) = 0
        *(esp_2 + 4) = 0x408
        *esp_2 = sub_45f888(entry_ebx)
        SendMessageA()
        esp_1 = esp_2 + 0x10
        sub_4833d8(entry_ebx)
        goto label_482f45
*esp_3
return result
