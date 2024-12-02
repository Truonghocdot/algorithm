<?xml version="1.0" encoding="utf-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:output method="html" indent="yes" />
    <xsl:template match="bookstore">
        <html lang="en">
            <head>
                <meta charset="UTF-8" />
                <meta name="viewport" content="width=device-width, initial-scale=1.0" />
                <title>Document</title>
            </head>
            <body>
                <table>
                    <tr>
                        <td>#</td>
                        <td>title</td>
                        <td>price</td>
                        <td>author</td>
                        <td>year</td>
                    </tr>
                    <xsl:for-each select="book">
                        <xsl:sort data-type="number" select="price" order="ascending"></xsl:sort>
                        <xsl:if
                            test="price &gt;=0 and price &lt;=30">
                            <tr>
                                <td>
                                    <xsl:number value="position()" format="1."></xsl:number>
                                </td>
                                <td>
                                    <xsl:value-of select="title"></xsl:value-of>
                                </td>
                                <td>
                                    <xsl:value-of select="price"></xsl:value-of>
                                </td>
                                <td>
                                    <xsl:value-of select="author"></xsl:value-of>
                                </td>
                                <td>
                                    <xsl:value-of select="year"></xsl:value-of>
                                </td>
                            </tr>
                        </xsl:if>
                    </xsl:for-each>
                </table>
            </body>
        </html>
    </xsl:template>
</xsl:stylesheet>