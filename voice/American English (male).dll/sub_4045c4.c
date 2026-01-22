// 函数: sub_4045c4
// 地址: 0x4045c4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t* result_1 = arg3
void** esi = arg2
char* edi = arg1
int32_t i_7 = arg4
arg1.b = *edi
int32_t* result

switch (arg1.b)
    case 0xa
        int32_t i_1
        
        do
            result = sub_403a40(result_1, *esi)
            result_1 = &result_1[1]
            esi = &esi[1]
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
    case 0xb
        int32_t i_2
        
        do
            result = sub_404038(result_1, *esi)
            result_1 = &result_1[1]
            esi = &esi[1]
            i_2 = i_7
            i_7 -= 1
        while (i_2 != 1)
    case 0xc
        int32_t i_3
        
        do
            result = sub_404490()
            result_1 = &result_1[4]
            esi = &esi[4]
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)
    case 0xd
        int32_t ecx
        ecx.b = edi[1]
        int32_t i_4
        
        do
            result = sub_4045c4(*(ecx + edi + 0xa), esi, result_1, *(ecx + edi + 6))
            result_1 += *(ecx + edi + 2)
            esi += *(ecx + edi + 2)
            i_4 = i_7
            i_7 -= 1
        while (i_4 != 1)
    case 0xe
        int32_t i_5
        
        do
            sub_4044a8(result_1, esi, edi)
            result.b = edi[1]
            result_1 += *(result + edi + 2)
            esi += *(result + edi + 2)
            i_5 = i_7
            i_7 -= 1
        while (i_5 != 1)
    case 0xf
        int32_t i_6
        
        do
            result = sub_404f68(result_1, *esi)
            result_1 = &result_1[1]
            esi = &esi[1]
            i_6 = i_7
            i_7 -= 1
        while (i_6 != 1)
    default
        if (arg1.b != 0x11)
            arg3.b = 2
            noreturn sub_402710(arg3) __tailcall
        
        int32_t i
        
        do
            result = result_1
            sub_4048e8(result, *esi, edi)
            result_1 = &result_1[1]
            esi = &esi[1]
            i = i_7
            i_7 -= 1
        while (i != 1)

return result
