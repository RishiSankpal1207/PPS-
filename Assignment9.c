
#include <stdio.h>

struct Field {
    float moisture, temperature, humidity;
    int health;
    float latitude, longitude;
};

int main() {
    struct Field f[50];
    FILE *fp, *rp;
    int n, i;

    printf("Enter number of fields: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter moisture, temperature, humidity: ");
        scanf("%f%f%f", &f[i].moisture,
              &f[i].temperature, &f[i].humidity);

        printf("Enter crop health (1=Good, 2=Average, 3=Poor): ");
        scanf("%d", &f[i].health);

        printf("Enter GPS latitude and longitude: ");
        scanf("%f%f", &f[i].latitude, &f[i].longitude);
    }

    fp = fopen("data.txt", "wb");
    fwrite(f, sizeof(struct Field), n, fp);
    fclose(fp);

    fp = fopen("data.txt", "rb");
    rp = fopen("report.txt", "w");

    for(i = 0; i < n; i++) {
        fread(&f[i], sizeof(struct Field), 1, fp);

        fprintf(rp, "\nField %d\n", i+1);
        fprintf(rp, "GPS: %.4f, %.4f\n",
                f[i].latitude, f[i].longitude);

        if(f[i].moisture < 30)
            fprintf(rp, "Irrigation Required\n");
        else
            fprintf(rp, "Moisture Sufficient\n");

        fprintf(rp, "Crop Health: %d\n", f[i].health);
    }

    fclose(fp);
    fclose(rp);

    printf("\nData stored and report generated successfully!");

    return 0;
}

