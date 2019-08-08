using System;
using Microsoft.EntityFrameworkCore.Migrations;

namespace ScreenProject.Migrations
{
    public partial class updatedatabase : Migration
    {
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.AddColumn<string>(
                name: "FontStyle",
                table: "TemplateFields",
                nullable: true);

            migrationBuilder.AddColumn<string>(
                name: "FontWeight",
                table: "TemplateFields",
                nullable: true);

            migrationBuilder.AlterColumn<TimeSpan>(
                name: "StartDate",
                table: "Events",
                nullable: false,
                oldClrType: typeof(DateTime));

            migrationBuilder.AlterColumn<TimeSpan>(
                name: "EndDate",
                table: "Events",
                nullable: false,
                oldClrType: typeof(DateTime));

            migrationBuilder.AddColumn<DateTime>(
                name: "Date",
                table: "Events",
                nullable: false,
                defaultValue: new DateTime(1, 1, 1, 0, 0, 0, 0, DateTimeKind.Unspecified));
        }

        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropColumn(
                name: "FontStyle",
                table: "TemplateFields");

            migrationBuilder.DropColumn(
                name: "FontWeight",
                table: "TemplateFields");

            migrationBuilder.DropColumn(
                name: "Date",
                table: "Events");

            migrationBuilder.AlterColumn<DateTime>(
                name: "StartDate",
                table: "Events",
                nullable: false,
                oldClrType: typeof(TimeSpan));

            migrationBuilder.AlterColumn<DateTime>(
                name: "EndDate",
                table: "Events",
                nullable: false,
                oldClrType: typeof(TimeSpan));
        }
    }
}
