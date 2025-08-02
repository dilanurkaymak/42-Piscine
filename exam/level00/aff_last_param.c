/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:15:32 by dkaymak           #+#    #+#             */
/*   Updated: 2025/04/25 09:18:23 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>  // strlen fonksiyonu için

int main(int argc, char *argv[]) {
    if (argc < 2) {  // Eğer hiç argüman verilmediyse
        write(1, "\n", 1);  // Sadece bir satır sonu yazdır
    } else {  // Eğer en az bir argüman verilmişse
        write(1, argv[1], strlen(argv[1]));  // İlk argümanı yazdır
        write(1, "\n", 1);  // Sonunda bir satır sonu ekle
    }
    return 0;
}

